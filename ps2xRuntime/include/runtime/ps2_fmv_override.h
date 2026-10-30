#pragma once
// [fmvoverride] Replaces the opening movie's presentation with an injected video (typically the
// user's 4K opening). Enabled when PS2X_FMV_OVERRIDE is set, OR when the INI's Texture Replacement
// is on ("pack installed") and the pack ships data/Textures/Video/ZS3USOP_4k.mp4. Flow: on VIDEO
// INIT (movie session start) the decoder starts; each present frame returns the latest RGBA frame
// to draw at native resolution; the last moments fade to black; when the duration elapses it pokes
// the forced-skip countdown to end the native movie.

#include <cstdint>
#include <string>

namespace ps2x_fmv
{
    struct FmvOverrideFrame
    {
        const uint8_t *rgba = nullptr;   // native-resolution RGBA8 (stable until the next tick)
        int w = 0;
        int h = 0;
        uint64_t gen = 0;                // increments when the frame changes
        double aspect = 4.0 / 3.0;       // display aspect of the source
        float alpha = 1.0f;              // presentation alpha (fade to black in the last moments)
    };

    bool enabled();

    // Video to inject: PS2X_FMV_OVERRIDE if set, else <exeDir>/data/Textures/Video/ZS3USOP_4k.mp4.
    std::string videoPath();

    // Absolute path of a pack asset under data/Textures/Video/<name>, or empty if it does not
    // exist. Used to substitute the native opening PSS/ADX (per-file; missing -> keep original).
    std::string packAsset(const char *name);

    // Call once per present frame. Manages the session from `movieActive` (g_ps2MovieActive):
    // starts decoding on 0->1, stops on 1->0, and pokes the skip when the duration ends.
    // Returns true when a frame should be drawn (fills `out`).
    bool tick(bool movieActive, FmvOverrideFrame &out);
}
