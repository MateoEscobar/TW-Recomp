#include "gfx/gs_rt.h"

#include "gfx/gl_context.h"
#include "gfx/gl/GlApi.h"
#include "gfx/gl/GlGfx.h"
#include "gfx/gs_gl.h"
#include "gfx/image_io.h"

#include "gfx/twgl_api.h"   // [B] warriors* API bridge

#include "gfx/gl/gsrl_redirect.h"   // [R1] route the replay's rl* target/matrix calls to the vendored rlgl

#include <cstdio>
#include <cstdlib>
#include <memory>
#include <unordered_map>
#include <utility>

namespace ps2x::gfx
{
    namespace
    {
        // FBO name -> owned gfx::gl render target. Keyed by the FBO id we publish in the handle.
        std::unordered_map<unsigned, std::unique_ptr<gl::RenderTarget>> s_targets;
        // [gsrt] The published contract for each of our targets (see GsRtInfo in the header).
        std::unordered_map<unsigned, GsRtDesc> s_desc;
    }

    warriorsRenderTexture2D GsRtCreate(int w, int h, bool depth)
    {
        warriorsRenderTexture2D rt{};
        if (!gl::ContextReady() || w <= 0 || h <= 0)
        {
            std::fprintf(stderr, "[altgl] GsRtCreate(%d,%d) ignored (context not ready)\n", w, h);
            return rt;
        }
        auto target = std::make_unique<gl::RenderTarget>();
        if (!target->Create(gl::Device(), (uint32_t)w, (uint32_t)h, depth))
        {
            std::fprintf(stderr, "[altgl] GsRtCreate(%d,%d) failed\n", w, h);
            return rt;
        }
        rt.id = target->GLFramebuffer();
        rt.texture.id = target->Color().GLTexture();
        rt.texture.width = w;
        rt.texture.height = h;
        rt.texture.mipmaps = 1;
        rt.texture.format = Warriors_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8;
        s_targets[rt.id] = std::move(target);
        // [gsrt] Publish the contract. Logical size defaults to the physical size and is corrected by
        // GsRtSetLogical() the moment the caller knows the emitter-space size (w, h) vs the scaled one.
        GsRtDesc d;
        d.physW = w; d.physH = h; d.logicalW = w; d.logicalH = h; d.texId = rt.texture.id;
        s_desc[rt.id] = d;
        return rt;
    }

    bool GsRtInfo(unsigned fboId, GsRtDesc &out)
    {
        auto it = s_desc.find(fboId);
        if (it == s_desc.end()) return false;
        out = it->second;
        return true;
    }

    void GsRtSetLogical(unsigned fboId, int logicalW, int logicalH)
    {
        auto it = s_desc.find(fboId);
        if (it == s_desc.end() || logicalW <= 0 || logicalH <= 0) return;
        it->second.logicalW = logicalW;
        it->second.logicalH = logicalH;
        if (std::getenv("PS2X_GSRTLOG"))
            std::fprintf(stderr, "[gsrt] fb=%u phys=%dx%d logical=%dx%d tex=%u\n", fboId,
                         it->second.physW, it->second.physH, logicalW, logicalH, it->second.texId);
    }

    bool GsRtIsOurs(unsigned fboId) { return s_desc.find(fboId) != s_desc.end(); }

    // [gsrt] Depth textures we hand out are owned here (never by raylib). They are shared and only
    // rebuilt when the scene grows, so a small table is all we need to keep them alive.
    namespace { std::unordered_map<unsigned, std::pair<int, int>> s_depthTexs; }

    unsigned GsRtCreateDepthTexture(int w, int h, bool asFloat)
    {
        if (!gl::ContextReady() || w <= 0 || h <= 0) return 0;
        unsigned id = 0;
        ps2xgl::glGenTextures(1, &id);
        if (!id) return 0;
        ps2xgl::glBindTexture(ps2xgl::GL_TEXTURE_2D, id);
        // Internal format MUST be a depth format; passing RGBA here (as a colour helper would) makes
        // the attachment silently unusable for sampling. 0x8CAC = GL_DEPTH_COMPONENT32F (PS2X_D32F).
        ps2xgl::glTexImage2D(ps2xgl::GL_TEXTURE_2D, 0,
                             asFloat ? 0x8CAC : (int)ps2xgl::GL_DEPTH_COMPONENT24,
                             w, h, 0, ps2xgl::GL_DEPTH_COMPONENT,
                             asFloat ? ps2xgl::GL_FLOAT : ps2xgl::GL_UNSIGNED_INT, nullptr);
        ps2xgl::glTexParameteri(ps2xgl::GL_TEXTURE_2D, 0x2801 /*MIN_FILTER*/, ps2xgl::GL_NEAREST);
        ps2xgl::glTexParameteri(ps2xgl::GL_TEXTURE_2D, 0x2800 /*MAG_FILTER*/, ps2xgl::GL_NEAREST);
        ps2xgl::glBindTexture(ps2xgl::GL_TEXTURE_2D, 0);
        s_depthTexs[id] = {w, h};
        if (std::getenv("PS2X_GSRTLOG"))
            std::fprintf(stderr, "[gsrt] depth tex=%u %dx%d fmt=%s\n", id, w, h, asFloat ? "D32F" : "D24");
        return id;
    }

    void GsRtAttachDepth(unsigned fboId, unsigned depthTex, int w, int h)
    {
        auto it = s_targets.find(fboId);
        if (it == s_targets.end() || !depthTex) return;
        it->second->AttachDepthTexture(depthTex, (uint32_t)w, (uint32_t)h);
        auto d = s_desc.find(fboId);
        if (d != s_desc.end()) d->second.depthTex = depthTex;
    }

    void GsRtUnload(warriorsRenderTexture2D &rt)
    {
        auto it = s_targets.find(rt.id);
        if (it != s_targets.end())
        {
            it->second->Destroy();
            s_targets.erase(it);
        }
        s_desc.erase(rt.id);
        rt = warriorsRenderTexture2D{};
    }

    void GsRtBegin(const warriorsRenderTexture2D &rt)
    {
        // Mirrors raylib's warriorsBeginTextureMode (rcore.c:1079): flush the batch, bind the FBO, set the
        // viewport AND the rlgl framebuffer size, then install an orthographic projection matching
        // the TARGET size and reset the modelview. Omitting the projection is what broke the first
        // blanket conversion: every draw into the FBO used the window's projection instead.
        const int w = rt.texture.width > 0 ? rt.texture.width : 1;
        const int h = rt.texture.height > 0 ? rt.texture.height : 1;
        ps2x::gfx::GsGlFlush();   // [gsgl] drain our batch into the CURRENT target before rebinding
        warriorsrlDrawRenderBatchActive();
        warriorsrlEnableFramebuffer(rt.id);
        warriorsrlViewport(0, 0, w, h);
        warriorsrlSetFramebufferWidth(w);
        warriorsrlSetFramebufferHeight(h);
        warriorsrlMatrixMode(WarriorsRL_PROJECTION);
        warriorsrlLoadIdentity();
        warriorsrlOrtho(0, w, h, 0, 0.0f, 1.0f);
        warriorsrlMatrixMode(WarriorsRL_MODELVIEW);
        warriorsrlLoadIdentity();
        ps2x::gfx::GsGlBeginTarget(w, h, 1.0f);   // [gsgl] same target framing for the gfx::gl path
    }

    void GsRtEnd()
    {
        // Replicates raylib's warriorsEndTextureMode (rcore.c:1110), which calls SetupViewport()
        // (rcore.c:3537). SetupViewport does THREE things, not one:
        //   warriorsrlViewport(window render size)  +  warriorsrlOrtho(window render size)  +  modelview identity.
        // Restoring ONLY the viewport (as this used to) left rlgl's PROJECTION at the last FBO's
        // ortho, so every later raylib draw (the rlImGui overlay, the present blit) was projected
        // for a 512x448 / Nx FBO instead of the window -- the overlay appeared ~2x offset and the
        // present landed off-screen on alternate frames (the black flicker).
        ps2x::gfx::GsGlFlush();   // [gsgl] our batch targets this FBO: drain before unbinding it
        warriorsrlDrawRenderBatchActive();
        warriorsrlDisableFramebuffer();
        const int rw = warriorsGetRenderWidth() > 0 ? warriorsGetRenderWidth() : 1;
        const int rh = warriorsGetRenderHeight() > 0 ? warriorsGetRenderHeight() : 1;
        warriorsrlViewport(0, 0, rw, rh);
        warriorsrlMatrixMode(WarriorsRL_PROJECTION);
        warriorsrlLoadIdentity();
        warriorsrlOrtho(0, rw, rh, 0, 0.0f, 1.0f);      // restore the WINDOW projection (was missing)
        warriorsrlMatrixMode(WarriorsRL_MODELVIEW);
        warriorsrlLoadIdentity();
    }

    // ------------------------------------------------------------------------------ textures
    namespace { std::unordered_map<unsigned, gl::Texture *> s_textures; }

    warriorsTexture2D GsTexCreateFromImage(const warriorsImage &img, bool linear)
    {
        warriorsTexture2D t{};
        if (!gl::ContextReady() || !img.data || img.width <= 0 || img.height <= 0) return t;
        // Compressed sources (DXT/BC) must NOT go through our RGBA8 upload: warriorsImageFormat refuses to
        // convert compressed input, so copy.data would hold BC bytes while we upload w*h*4 of them
        // -- a buffer overrun that crashes inside the GL driver (observed: atio6axx.dll). Hand
        // those to raylib, which routes them to glCompressedTexImage2D.
        if (img.format >= Warriors_PIXELFORMAT_COMPRESSED_DXT1_RGB) return warriorsLoadTextureFromImage(img);
        // Copy first: callers pass borrowed pixel data (see the gaPal site) and raylib's
        // warriorsLoadTextureFromImage never mutates the source, so neither do we.
        warriorsImage copy = warriorsImageCopy(img);
        if (copy.format != Warriors_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8) warriorsImageFormat(&copy, Warriors_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
        auto *tex = new gl::Texture();
        if (tex->Create(gl::Device(), (uint32_t)copy.width, (uint32_t)copy.height, gl::Format::RGBA8, copy.data))
        {
            tex->SetSampler(gl::Device(), linear ? gl::Filter::Linear : gl::Filter::Point, gl::Wrap::Clamp);
            t.id = tex->GLTexture();
            t.width = copy.width;
            t.height = copy.height;
            t.mipmaps = 1;
            t.format = Warriors_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8;
            s_textures[t.id] = tex;
        }
        else
        {
            std::fprintf(stderr, "[altgl] GsTexCreateFromImage(%dx%d) failed\n", copy.width, copy.height);
            delete tex;
        }
        warriorsUnloadImage(copy);
        return t;
    }

    // [A4.3] Upload a CPU-only GsImage (built by GsImageMake/GsImageSetPx) as an RGBA8 texture.
    warriorsTexture2D GsTexCreateFromImage(const GsImage &img, bool linear)
    {
        warriorsTexture2D t{};
        if (!gl::ContextReady() || !GsImageValid(img)) return t;
        auto *tex = new gl::Texture();
        if (tex->Create(gl::Device(), (uint32_t)img.width, (uint32_t)img.height, gl::Format::RGBA8, img.data))
        {
            tex->SetSampler(gl::Device(), linear ? gl::Filter::Linear : gl::Filter::Point, gl::Wrap::Clamp);
            t.id = tex->GLTexture(); t.width = img.width; t.height = img.height;
            t.mipmaps = 1; t.format = Warriors_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8;
            s_textures[t.id] = tex;
        }
        else { std::fprintf(stderr, "[altgl] GsTexCreateFromImage(GsImage %dx%d) failed\n", img.width, img.height); delete tex; }
        return t;
    }
    void GsUnloadTexture(warriorsTexture2D t)
    {
        auto it = s_textures.find(t.id);
        if (it != s_textures.end())
        {
            it->second->Destroy();
            delete it->second;
            s_textures.erase(it);
            return;
        }
        if (t.id != 0) warriorsUnloadTexture(t);   // raylib-owned (font atlas, FMV, ...)
    }
}
