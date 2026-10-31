#include "gfx/rw_texture_cache.h"
#include "rw/rw_types.h"
#include "gfx/gl/GlApi.h"

#include <unordered_map>
#include <vector>
#include <cstring>

using namespace ps2xgl;

namespace rw_texture_cache {

static std::unordered_map<const RwRaster *, unsigned> s_cache;

unsigned lookup(const RwRaster *r) {
    auto it = s_cache.find(r);
    return it != s_cache.end() ? it->second : 0u;
}

// Expand palettized (PAL4 or PAL8) raster to RGBA8.
static std::vector<uint8_t> expandPalettized(const RwRaster *r) {
    const int n = r->width * r->height;
    std::vector<uint8_t> out(n * 4, 0xFFu);
    if (!r->cpPixels || !r->palette) return out;

    const uint32_t fmtBits = (static_cast<uint32_t>(r->cFormat) << 8u);
    const bool pal4 = (fmtBits & rwRASTERFORMATPAL4) != 0;

    for (int i = 0; i < n; ++i) {
        uint8_t idx;
        if (pal4) {
            const uint8_t byte = r->cpPixels[i / 2];
            idx = (i & 1) ? uint8_t(byte >> 4) : uint8_t(byte & 0xF);
        } else {
            idx = r->cpPixels[i];
        }
        const uint8_t *entry = r->palette + idx * 4;
        out[i * 4 + 0] = entry[0];
        out[i * 4 + 1] = entry[1];
        out[i * 4 + 2] = entry[2];
        out[i * 4 + 3] = entry[3];
    }
    return out;
}

// Convert any RW raster to RGBA8.
static std::vector<uint8_t> toRGBA8(const RwRaster *r) {
    const int n = r->width * r->height;
    std::vector<uint8_t> out(n * 4, 0xFFu);
    if (!r->cpPixels) return out;

    const uint32_t fmtBits = (static_cast<uint32_t>(r->cFormat) << 8u);
    if ((fmtBits & rwRASTERFORMATPAL8) || (fmtBits & rwRASTERFORMATPAL4))
        return expandPalettized(r);

    const uint32_t baseFmt = fmtBits & 0x0F00u;
    const uint8_t *src = r->cpPixels;

    for (int i = 0; i < n; ++i) {
        uint8_t &R = out[i * 4 + 0];
        uint8_t &G = out[i * 4 + 1];
        uint8_t &B = out[i * 4 + 2];
        uint8_t &A = out[i * 4 + 3];

        switch (baseFmt) {
        case rwRASTERFORMAT8888:
            R = src[i*4+0]; G = src[i*4+1]; B = src[i*4+2]; A = src[i*4+3]; break;
        case rwRASTERFORMAT888:
            R = src[i*3+0]; G = src[i*3+1]; B = src[i*3+2]; A = 0xFFu; break;
        case rwRASTERFORMAT4444: {
            uint16_t p; std::memcpy(&p, src + i*2, 2);
            R = uint8_t(((p >> 12) & 0xF) * 17);
            G = uint8_t(((p >>  8) & 0xF) * 17);
            B = uint8_t(((p >>  4) & 0xF) * 17);
            A = uint8_t(((p >>  0) & 0xF) * 17);
            break;
        }
        case rwRASTERFORMAT1555: {
            uint16_t p; std::memcpy(&p, src + i*2, 2);
            A = (p >> 15) ? 0xFFu : 0x00u;
            R = uint8_t(((p >> 10) & 0x1F) << 3);
            G = uint8_t(((p >>  5) & 0x1F) << 3);
            B = uint8_t(((p >>  0) & 0x1F) << 3);
            break;
        }
        case rwRASTERFORMAT565: {
            uint16_t p; std::memcpy(&p, src + i*2, 2);
            R = uint8_t(((p >> 11) & 0x1F) << 3);
            G = uint8_t(((p >>  5) & 0x3F) << 2);
            B = uint8_t(((p >>  0) & 0x1F) << 3);
            A = 0xFFu;
            break;
        }
        case rwRASTERFORMATLUM8:
            R = G = B = src[i]; A = 0xFFu; break;
        default:
            R = G = B = A = 0xFFu; break;
        }
    }
    return out;
}

unsigned upload(const RwRaster *r) {
    if (!r || r->width <= 0 || r->height <= 0) return 0u;

    std::vector<uint8_t> pixels = toRGBA8(r);

    GLuint tex = 0;
    glGenTextures(1, &tex);
    glBindTexture(GL_TEXTURE_2D, tex);
    glTexImage2D(GL_TEXTURE_2D, 0, (GLint)GL_RGBA8,
                 (GLsizei)r->width, (GLsizei)r->height, 0,
                 GL_RGBA, GL_UNSIGNED_BYTE, pixels.data());
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glBindTexture(GL_TEXTURE_2D, 0);

    s_cache.emplace(r, static_cast<unsigned>(tex));
    return static_cast<unsigned>(tex);
}

unsigned getOrUpload(const RwRaster *r) {
    unsigned t = lookup(r);
    return t ? t : upload(r);
}

void clear() {
    for (auto &[r, tex] : s_cache) {
        GLuint t = (GLuint)tex;
        glDeleteTextures(1, &t);
    }
    s_cache.clear();
}

} // namespace rw_texture_cache
