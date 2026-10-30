#pragma once

// Built-in internal-resolution mapping (pre-release: the 1x/2x/3x/4x dropdown was
// removed from launcher + overlay; the render scale now follows the chosen window
// resolution). 1x = 720p, 2x = anything above 720p up to 1080p, 3x = 1440p and up.
// Nothing maps to 4x (left disabled until the 4x machinery is ported).
inline int ps2xRenderScaleForHeight(int h)
{
    if (h <= 720)
        return 1;
    if (h <= 1080)
        return 2;
    return 3;
}