// rw_shaders.h — Inline GLSL 330 core shaders for the RW 3.x renderer (TWR-14).
//
// Three programs:
//   kRwStaticVert / kRwStaticFrag — static (non-skinned) mesh
//   kRwSkinnedVert / kRwSkinnedFrag — CPU-skinned mesh (bone matrices applied on CPU)
//   kRwIm2DVert / kRwIm2DFrag — screen-space 2-D immediate mode
#pragma once

namespace rw_shaders {

// ── Static (non-skinned) mesh ────────────────────────────────────────────────
inline constexpr const char *kStaticVert = R"glsl(
#version 330 core
layout(location = 0) in vec3 aPosition;
layout(location = 1) in vec3 aNormal;
layout(location = 2) in vec2 aTexCoord;
layout(location = 3) in vec4 aColor;

uniform mat4 uMVP;
uniform mat4 uModel;
uniform vec3 uLightDir;   // normalized, world space
uniform vec4 uLightColor;
uniform vec4 uAmbient;

out vec2 vTexCoord;
out vec4 vColor;

void main() {
    vec3 worldNormal = normalize(mat3(uModel) * aNormal);
    float diff = max(dot(worldNormal, -uLightDir), 0.0);
    vec4 lighting = uAmbient + diff * uLightColor;
    vColor = aColor * clamp(lighting, 0.0, 1.0);
    vTexCoord = aTexCoord;
    gl_Position = uMVP * vec4(aPosition, 1.0);
}
)glsl";

inline constexpr const char *kStaticFrag = R"glsl(
#version 330 core
in vec2 vTexCoord;
in vec4 vColor;

uniform sampler2D uTexture;
uniform bool uHasTexture;

out vec4 fragColor;

void main() {
    vec4 tex = uHasTexture ? texture(uTexture, vTexCoord) : vec4(1.0);
    fragColor = tex * vColor;
    if (fragColor.a < 0.01) discard;
}
)glsl";

// ── Skinned mesh (bone matrices applied on CPU side before upload) ────────────
// The skinning itself happens in rw_renderer.cpp before creating the VBO.
// This shader receives pre-skinned positions/normals, so it is identical to static.
inline constexpr const char *kSkinnedVert = kStaticVert;
inline constexpr const char *kSkinnedFrag = kStaticFrag;

// ── 2-D immediate mode ────────────────────────────────────────────────────────
inline constexpr const char *kIm2DVert = R"glsl(
#version 330 core
layout(location = 0) in vec2 aPosition;  // screen-space XY in [0, screen]
layout(location = 1) in float aDepth;    // RW recipCamZ mapped to [0,1]
layout(location = 2) in vec2 aTexCoord;
layout(location = 3) in vec4 aColor;

uniform mat4 uOrtho;   // orthographic: maps [0,w]×[0,h] → NDC

out vec2 vTexCoord;
out vec4 vColor;

void main() {
    vTexCoord = aTexCoord;
    vColor = aColor;
    gl_Position = uOrtho * vec4(aPosition, aDepth, 1.0);
}
)glsl";

inline constexpr const char *kIm2DFrag = R"glsl(
#version 330 core
in vec2 vTexCoord;
in vec4 vColor;

uniform sampler2D uTexture;
uniform bool uHasTexture;

out vec4 fragColor;

void main() {
    vec4 tex = uHasTexture ? texture(uTexture, vTexCoord) : vec4(1.0);
    fragColor = tex * vColor;
    if (fragColor.a < 0.01) discard;
}
)glsl";

} // namespace rw_shaders
