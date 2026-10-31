#include "rw/rw_renderer.h"
#include "rw/rw_types.h"
#include "gfx/rw_shaders.h"
#include "gfx/rw_mesh_cache.h"
#include "gfx/rw_texture_cache.h"
#include "gfx/gl/GlGfx.h"
#include "gfx/gl/GlApi.h"
#include "gfx/gl_context.h"

#include <cstdio>
#include <cstring>
#include <vector>
#include <cstdint>

using namespace ps2xgl;

// ── Interleaved vertex helper ────────────────────────────────────────────────
// Layout per vertex: pos(3f=12) + norm(3f=12) + uv(2f=8) + rgba(4ub=4) = 36 bytes
struct RwVertex {
    float px, py, pz;
    float nx, ny, nz;
    float u, v;
    uint8_t r, g, b, a;
};
static_assert(sizeof(RwVertex) == 36, "RwVertex size mismatch");

// ── Simple CRC-32/MPEG-2 (no table needed at startup) ───────────────────────
static uint32_t crc32buf(const void *data, size_t len) {
    const auto *p = static_cast<const uint8_t *>(data);
    uint32_t crc = 0xFFFFFFFFu;
    for (size_t i = 0; i < len; ++i) {
        crc ^= (uint32_t)p[i] << 24;
        for (int b = 0; b < 8; ++b)
            crc = (crc & 0x80000000u) ? (crc << 1) ^ 0x04C11DB7u : (crc << 1);
    }
    return crc;
}

// ── Renderer state ────────────────────────────────────────────────────────────
namespace {
    bool s_ready = false;

    ps2x::gfx::gl::Shader s_staticShader;
    ps2x::gfx::gl::Shader s_im2dShader;

    // 1×1 white texture for untextured draws
    GLuint s_whiteTex = 0;

    // Dynamic VBO for Im2D batches
    GLuint s_im2dVao = 0;
    GLuint s_im2dVbo = 0;

    // Current view/projection matrix (column-major, GL convention)
    float s_viewProj[16] = {
        1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1
    };
}

// ── Public API ────────────────────────────────────────────────────────────────
namespace rw_renderer {

bool init() {
    if (s_ready) return true;
    if (!ps2x::gfx::gl::ContextReady()) return false;

    auto &dev = ps2x::gfx::gl::Device();

    // Compile static/skinned program
    if (!s_staticShader.Compile(dev,
            rw_shaders::kStaticVert,
            rw_shaders::kStaticFrag)) {
        std::fprintf(stderr, "[rw_renderer] static shader compile failed\n");
        return false;
    }

    // Compile Im2D program
    if (!s_im2dShader.Compile(dev,
            rw_shaders::kIm2DVert,
            rw_shaders::kIm2DFrag)) {
        std::fprintf(stderr, "[rw_renderer] im2d shader compile failed\n");
        return false;
    }

    // White 1×1 fallback texture
    {
        glGenTextures(1, &s_whiteTex);
        glBindTexture(GL_TEXTURE_2D, s_whiteTex);
        const uint32_t px = 0xFFFFFFFFu;
        glTexImage2D(GL_TEXTURE_2D, 0, (GLint)GL_RGBA8, 1, 1, 0,
                     GL_RGBA, GL_UNSIGNED_BYTE, &px);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glBindTexture(GL_TEXTURE_2D, 0);
    }

    // Im2D dynamic VAO/VBO (no indices, stream draw)
    {
        glGenVertexArrays(1, &s_im2dVao);
        glBindVertexArray(s_im2dVao);
        glGenBuffers(1, &s_im2dVbo);
        glBindBuffer(GL_ARRAY_BUFFER, s_im2dVbo);
        // Im2D vertex: vec2 xy(8) + float depth(4) + vec2 uv(8) + vec4 color(4) = 24 bytes
        constexpr GLsizei im2dStride = 24;
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, im2dStride, (const void *)0);
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 1, GL_FLOAT, GL_FALSE, im2dStride, (const void *)(uintptr_t)8);
        glEnableVertexAttribArray(2);
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, im2dStride, (const void *)(uintptr_t)12);
        glEnableVertexAttribArray(3);
        glVertexAttribPointer(3, 4, GL_UNSIGNED_BYTE, GL_TRUE, im2dStride, (const void *)(uintptr_t)20);
        glBindVertexArray(0);
    }

    s_ready = true;
    std::fprintf(stderr, "[rw_renderer] init OK\n");
    return true;
}

void shutdown() {
    if (!s_ready) return;
    rw_mesh_cache::clear();
    rw_texture_cache::clear();
    s_staticShader.Destroy();
    s_im2dShader.Destroy();
    if (s_im2dVbo) { glDeleteBuffers(1, &s_im2dVbo); s_im2dVbo = 0; }
    if (s_im2dVao) { glDeleteVertexArrays(1, &s_im2dVao); s_im2dVao = 0; }
    if (s_whiteTex) { glDeleteTextures(1, &s_whiteTex); s_whiteTex = 0; }
    s_ready = false;
}

bool isReady() { return s_ready; }

// Set the combined view-projection matrix used for all subsequent draws.
// Exposed for future interceptors (RwCameraBeginUpdate hook).
void setViewProj(const float vp[16]) {
    std::memcpy(s_viewProj, vp, 16 * sizeof(float));
}

void submitAtomic(const RpAtomic *atomic, const float worldMtx[16]) {
    if (!s_ready || !atomic) return;

    const RpGeometry *geom = atomic->geometry;
    if (!geom) return;

    // Skip PS2 native geometry — DMA packet format not parseable at RW level.
    if (geom->flags & rpGEOMETRYNATIVE) return;

    const int nVerts = geom->numVertices;
    if (nVerts <= 0) return;

    // First morph target follows the RpGeometry struct inline.
    const auto *mt = reinterpret_cast<const RpMorphTarget *>(
        reinterpret_cast<const uint8_t *>(geom) + sizeof(RpGeometry));

    if (!mt->verts) return;

    // Compute CRC of vertex positions to detect geometry swaps on the same address.
    const uint32_t ps2Addr = static_cast<uint32_t>(
        reinterpret_cast<uintptr_t>(geom) & 0xFFFFFFFFu);
    const uint32_t crc = crc32buf(mt->verts, (size_t)nVerts * sizeof(RwV3d));

    const rw_mesh_cache::Entry *entry = rw_mesh_cache::lookup(ps2Addr, crc);
    if (!entry) {
        // Build interleaved VBO from morph target data.
        std::vector<RwVertex> vbuf((size_t)nVerts);
        for (int i = 0; i < nVerts; ++i) {
            vbuf[i].px = mt->verts[i].x;
            vbuf[i].py = mt->verts[i].y;
            vbuf[i].pz = mt->verts[i].z;
            if (mt->normals) {
                vbuf[i].nx = mt->normals[i].x;
                vbuf[i].ny = mt->normals[i].y;
                vbuf[i].nz = mt->normals[i].z;
            } else {
                vbuf[i].nx = 0.f; vbuf[i].ny = 1.f; vbuf[i].nz = 0.f;
            }
            vbuf[i].u = 0.f; vbuf[i].v = 0.f; // UVs filled below if available
            // Default to white; prelit colors follow morph targets (not accessed here).
            vbuf[i].r = vbuf[i].g = vbuf[i].b = vbuf[i].a = 0xFFu;
        }

        // Attempt to extract UVs: they live after prelit colors in the RW stream,
        // but their exact host offset depends on rpGEOMETRYPRELIT and numMorphTargets.
        // For geometry without PRELIT and with one morph target, the UV0 array starts
        // immediately after the normals pointer:
        //   RpGeometry struct (sizeof=48) + numMorphTargets × sizeof(RpMorphTarget)
        //   + (PRELIT ? numVertices×4 : 0) bytes = start of UV0 array
        if ((geom->flags & rpGEOMETRYTEXTURED) && geom->numTexCoordSets >= 1) {
            const size_t morphOffset = sizeof(RpGeometry)
                + (size_t)geom->numMorphTargets * sizeof(RpMorphTarget);
            const size_t prelitOffset = (geom->flags & rpGEOMETRYPRELIT)
                ? (size_t)nVerts * 4
                : 0;
            const float *uvs = reinterpret_cast<const float *>(
                reinterpret_cast<const uint8_t *>(geom) + morphOffset + prelitOffset);
            for (int i = 0; i < nVerts; ++i) {
                vbuf[i].u = uvs[i * 2 + 0];
                vbuf[i].v = uvs[i * 2 + 1];
            }
        }

        // Build index list from mesh header if available.
        std::vector<uint16_t> ibuf;
        int indexCount = 0;
        if (geom->mesh) {
            const RpMeshHeader *mh = geom->mesh;
            const RpMesh *meshes = reinterpret_cast<const RpMesh *>(mh + 1);
            for (int m = 0; m < mh->numMeshes; ++m) {
                const RpMesh &mesh = meshes[m];
                if (!mesh.indices) continue;
                for (uint32_t idx = 0; idx < mesh.numIndices; ++idx) {
                    ibuf.push_back(mesh.indices[idx]);
                    ++indexCount;
                }
            }
        }

        entry = rw_mesh_cache::insert(
            ps2Addr, crc,
            vbuf.data(), vbuf.size() * sizeof(RwVertex),
            ibuf.empty() ? nullptr : ibuf.data(),
            indexCount,
            nVerts);
    }

    if (!entry) return;

    // Compute MVP = viewProj × world
    float mvp[16];
    {
        const float *a = s_viewProj;
        const float *b = worldMtx;
        for (int col = 0; col < 4; ++col)
            for (int row = 0; row < 4; ++row) {
                mvp[col*4+row] = 0.f;
                for (int k = 0; k < 4; ++k)
                    mvp[col*4+row] += a[k*4+row] * b[col*4+k];
            }
    }

    // Gather texture from first mesh's material.
    GLuint tex = s_whiteTex;
    if (geom->mesh && geom->mesh->numMeshes > 0) {
        const RpMesh *meshes = reinterpret_cast<const RpMesh *>(geom->mesh + 1);
        // RpMaterial* is at meshes[0].material; field 0 = RwSurface, field 1 = RwRGBA,
        // field 2 = RwTexture*. Layout: color(4f), surfaceProps(3f), texture(ptr), flags...
        // For robustness, only attempt if material is non-null.
        if (meshes[0].material) {
            // RpMaterial layout (re3): surfaceProps(3f), color(RwRGBA=4B), pad(4B), texture(ptr)
            struct RpMaterialMin { float ambDiffSpec[3]; uint8_t rgba[4]; uint32_t pad; RwTexture *texture; };
            const auto *mat = reinterpret_cast<const RpMaterialMin *>(meshes[0].material);
            if (mat->texture && mat->texture->raster) {
                unsigned cached = rw_texture_cache::getOrUpload(mat->texture->raster);
                if (cached) tex = (GLuint)cached;
            }
        }
    }

    auto &dev = ps2x::gfx::gl::Device();
    s_staticShader.Bind(dev);
    s_staticShader.SetMat4("uMVP", mvp);
    s_staticShader.SetMat4("uModel", worldMtx);
    // Default directional light (downward-facing, white) until RpLight interceptors land.
    s_staticShader.SetVec3("uLightDir", 0.f, -1.f, 0.f);
    s_staticShader.SetVec4("uLightColor", 0.8f, 0.8f, 0.8f, 1.f);
    s_staticShader.SetVec4("uAmbient", 0.3f, 0.3f, 0.3f, 1.f);
    s_staticShader.SetInt("uTexture", 0);
    s_staticShader.SetInt("uHasTexture", tex != s_whiteTex ? 1 : 0);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, tex);

    glBindVertexArray(entry->vao);
    if (entry->ebo && entry->indexCount > 0)
        glDrawElements(GL_TRIANGLES, (GLsizei)entry->indexCount, GL_UNSIGNED_SHORT, nullptr);
    else
        glDrawArrays(GL_TRIANGLES, 0, (GLsizei)entry->vertexCount);
    glBindVertexArray(0);
    glBindTexture(GL_TEXTURE_2D, 0);
}

void submitIm2D(const RwIm2DVertex *verts, int count, unsigned glTexture) {
    if (!s_ready || !verts || count <= 0) return;

    // Pack RwIm2DVertex into the Im2D VBO layout:
    //   vec2 xy(8) + float depth(4) + vec2 uv(8) + uint8[4] rgba(4) = 24 bytes
    struct Im2DPacked { float x, y, depth, u, v; uint8_t r, g, b, a; };
    static_assert(sizeof(Im2DPacked) == 24, "Im2D packed vertex size mismatch");

    std::vector<Im2DPacked> buf((size_t)count);
    for (int i = 0; i < count; ++i) {
        buf[i].x = verts[i].x;
        buf[i].y = verts[i].y;
        buf[i].depth = verts[i].z;
        buf[i].u = verts[i].u;
        buf[i].v = verts[i].v;
        buf[i].r = uint8_t((verts[i].emissiveColor >> 16) & 0xFF);
        buf[i].g = uint8_t((verts[i].emissiveColor >>  8) & 0xFF);
        buf[i].b = uint8_t((verts[i].emissiveColor >>  0) & 0xFF);
        buf[i].a = uint8_t((verts[i].emissiveColor >> 24) & 0xFF);
    }

    glBindVertexArray(s_im2dVao);
    glBindBuffer(GL_ARRAY_BUFFER, s_im2dVbo);
    glBufferData(GL_ARRAY_BUFFER, (GLsizeiptr)(count * (int)sizeof(Im2DPacked)),
                 buf.data(), GL_STREAM_DRAW);

    // Orthographic: maps screen [0,w]×[0,h] → NDC [-1,1]×[-1,1]
    const float w = 640.f, h = 448.f; // PS2 native; will be overridden once vp interceptor lands
    const float ortho[16] = {
        2.f/w,  0,      0, 0,
        0,     -2.f/h,  0, 0,
        0,      0,     -2, 0,
       -1,      1,     -1, 1
    };

    const GLuint tex = glTexture ? (GLuint)glTexture : s_whiteTex;
    auto &dev = ps2x::gfx::gl::Device();
    s_im2dShader.Bind(dev);
    s_im2dShader.SetMat4("uOrtho", ortho);
    s_im2dShader.SetInt("uTexture", 0);
    s_im2dShader.SetInt("uHasTexture", (int)(tex != s_whiteTex));

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, tex);
    glDrawArrays(GL_TRIANGLES, 0, (GLsizei)count);
    glBindVertexArray(0);
    glBindTexture(GL_TEXTURE_2D, 0);
}

} // namespace rw_renderer
