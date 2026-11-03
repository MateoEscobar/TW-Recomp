#pragma once
// [TWR-27] shim for the upstream VU1 build: only the PATH id is needed (GifPathId is renamed by macro).
#include <cstdint>
enum class GifPathId : uint8_t { Path1 = 1, Path2 = 2, Path3 = 3 };
