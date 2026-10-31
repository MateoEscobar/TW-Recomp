#include "gfx/rw_mesh_cache.h"
#include "gfx/gl/GlApi.h"

#include <unordered_map>
#include <cstring>

using namespace ps2xgl;

namespace rw_mesh_cache {

struct Key {
    uint32_t ps2Addr;
    uint32_t crc;
    bool operator==(const Key &o) const noexcept {
        return ps2Addr == o.ps2Addr && crc == o.crc;
    }
};

struct KeyHash {
    std::size_t operator()(const Key &k) const noexcept {
        std::size_t h = 2166136261u;
        h ^= k.ps2Addr; h *= 16777619u;
        h ^= k.crc;     h *= 16777619u;
        return h;
    }
};

static std::unordered_map<Key, Entry, KeyHash> s_cache;

const Entry *lookup(uint32_t ps2Addr, uint32_t crc) {
    auto it = s_cache.find({ps2Addr, crc});
    return it != s_cache.end() ? &it->second : nullptr;
}

const Entry *insert(uint32_t ps2Addr, uint32_t crc,
                    const void *verts, size_t vertBytes,
                    const uint16_t *indices, int indexCount,
                    int vertexCount)
{
    Entry e{};
    e.vertexCount = vertexCount;
    e.indexCount  = indexCount > 0 ? indexCount : vertexCount;

    glGenVertexArrays(1, &e.vao);
    glBindVertexArray(e.vao);

    glGenBuffers(1, &e.vbo);
    glBindBuffer(GL_ARRAY_BUFFER, e.vbo);
    glBufferData(GL_ARRAY_BUFFER, (GLsizeiptr)vertBytes, verts, GL_STATIC_DRAW);

    // Vertex layout per vertex (36 bytes):
    //   attrib 0: vec3 position  (offset 0,  12 bytes)
    //   attrib 1: vec3 normal    (offset 12, 12 bytes)
    //   attrib 2: vec2 uv        (offset 24,  8 bytes)
    //   attrib 3: vec4 color u8  (offset 32,  4 bytes)
    constexpr GLsizei stride = 36;
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, stride, (const void *)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, stride, (const void *)(uintptr_t)12);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, stride, (const void *)(uintptr_t)24);
    glEnableVertexAttribArray(3);
    glVertexAttribPointer(3, 4, GL_UNSIGNED_BYTE, GL_TRUE, stride, (const void *)(uintptr_t)32);

    if (indices && indexCount > 0) {
        glGenBuffers(1, &e.ebo);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, e.ebo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER,
                     (GLsizeiptr)(indexCount * (GLsizeiptr)sizeof(uint16_t)),
                     indices, GL_STATIC_DRAW);
    }

    glBindVertexArray(0);

    auto [it, _] = s_cache.emplace(Key{ps2Addr, crc}, e);
    return &it->second;
}

void clear() {
    for (auto &[k, e] : s_cache) {
        if (e.ebo) glDeleteBuffers(1, &e.ebo);
        if (e.vbo) glDeleteBuffers(1, &e.vbo);
        if (e.vao) glDeleteVertexArrays(1, &e.vao);
    }
    s_cache.clear();
}

} // namespace rw_mesh_cache
