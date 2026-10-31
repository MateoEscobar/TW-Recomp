// rw_texture_cache.h — GL texture cache for the RW 3.x renderer (TWR-14).
//
// Key: RwRaster* (as uint64_t host pointer) — lifetime is tied to the PS2
// heap's raster allocations, so the pointer is stable across frames within
// a level.  clear() destroys all GL textures.
#pragma once
#include <cstdint>

struct RwRaster;

namespace rw_texture_cache {

// Returns the cached GL texture name, or 0 if not yet uploaded.
unsigned lookup(const RwRaster *r);

// Converts the raster pixels to RGBA8 on the CPU and uploads to GL.
// Handles: rwRASTERFORMAT8888, rwRASTERFORMAT4444, rwRASTERFORMAT1555,
//          rwRASTERFORMAT565, rwRASTERFORMATLUM8, PAL8/PAL4 (palette expand).
// Returns the GL texture name (>0 on success, 0 on failure).
unsigned upload(const RwRaster *r);

// Returns lookup(r) if present, else upload(r).
unsigned getOrUpload(const RwRaster *r);

// Delete all cached GL textures.
void clear();

} // namespace rw_texture_cache
