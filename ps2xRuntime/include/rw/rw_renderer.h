// rw_renderer.h — Public API for the RenderWare 3.x OpenGL renderer (TWR-14).
//
// Usage:
//   1. Call rw_renderer::init() once after the GL context is ready.
//   2. Wire intercepted RW functions to submitAtomic / submitIm2D.
//   3. Call rw_renderer::shutdown() on teardown.
//
// Thread safety: all calls must be made from the GL thread.
#pragma once
#include "rw/rw_types.h"
#include <cstdint>

namespace rw_renderer {

// Returns true on first successful call; no-op on subsequent calls.
// Logs "[rw_renderer] init OK" to stderr on success.
bool init();

void shutdown();

bool isReady();

// Submit a 3-D atomic for rendering.
// worldMtx: column-major 4×4 float matrix (RW convention: row vectors).
// No-op if init() was not called successfully.
void submitAtomic(const RpAtomic *atomic, const float worldMtx[16]);

// Submit a screen-space 2-D primitive batch.
// glTexture: GL texture name to bind (0 = white fallback).
// No-op if init() was not called successfully.
void submitIm2D(const RwIm2DVertex *verts, int count, unsigned glTexture);

} // namespace rw_renderer
