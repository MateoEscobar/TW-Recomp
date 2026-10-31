// rw_mesh_cache.h — VAO/VBO cache for the RW 3.x renderer (TWR-14).
//
// Key: (ps2Addr, crc32) — ps2Addr is the RpGeometry* in guest memory;
// crc32 is a hash of the vertex data so level-geometry swaps on the same
// address are detected (see ADR trade-offs).
#pragma once
#include <cstddef>
#include <cstdint>

namespace rw_mesh_cache {

struct Entry {
    unsigned vao;
    unsigned vbo;       // interleaved: pos(3f) + norm(3f) + uv(2f) + color(4ub)
    unsigned ebo;       // uint16 indices (or 0 if draw arrays)
    int      indexCount;
    int      vertexCount;
};

// Returns a pointer to the cached entry, or nullptr if not found.
const Entry *lookup(uint32_t ps2Addr, uint32_t crc);

// Creates GL objects, uploads data, and stores the entry.
// verts layout per vertex: float[3] pos, float[3] normal, float[2] uv, uint8[4] rgba.
// indices may be nullptr → draw arrays (indexCount = vertexCount).
const Entry *insert(uint32_t ps2Addr, uint32_t crc,
                    const void *verts, size_t vertBytes,
                    const uint16_t *indices, int indexCount,
                    int vertexCount);

// Destroy all cached GL objects (call on level unload or shutdown).
void clear();

} // namespace rw_mesh_cache
