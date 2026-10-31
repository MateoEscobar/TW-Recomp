// rw_types.h — RenderWare 3.7 struct subset for TW-Recomp renderer.
//
// Derived from re3 / reVC (MIT licence, https://github.com/halpz/re3).
// Only struct declarations and enums are included — no executable code.
// Field offsets are compatible with SLUS_212.15 (The Warriors, RW 3.7 PS2).
//
// TWR-14: These types are used by rw_renderer to interpret geometry and
// texture data extracted from guest memory via intercepted RW API calls.
#pragma once
#include <cstdint>

// ── Primitive math ───────────────────────────────────────────────────────────
struct RwV2d { float x, y; };
struct RwV3d { float x, y, z; };
struct RwV4d { float x, y, z, w; };
struct RwSphere { RwV3d center; float radius; };
struct RwBBox  { RwV3d sup, inf; };

struct RwMatrix {
    RwV3d right;   uint32_t flags;
    RwV3d up;      uint32_t pad1;
    RwV3d at;      uint32_t pad2;
    RwV3d pos;     uint32_t pad3;
};

// ── Texture / raster ─────────────────────────────────────────────────────────
enum RwRasterFormat : uint32_t {
    rwRASTERFORMAT1555    = 0x0100,
    rwRASTERFORMAT565     = 0x0200,
    rwRASTERFORMAT4444    = 0x0300,
    rwRASTERFORMATLUM8    = 0x0400,
    rwRASTERFORMAT8888    = 0x0500,
    rwRASTERFORMAT888     = 0x0600,
    rwRASTERFORMAT16      = 0x0700,
    rwRASTERFORMAT24      = 0x0800,
    rwRASTERFORMAT32      = 0x0900,
    rwRASTERFORMAT555     = 0x0A00,
    rwRASTERFORMATAUTOMIPMAP = 0x1000,
    rwRASTERFORMATPAL8    = 0x2000,
    rwRASTERFORMATPAL4    = 0x4000,
    rwRASTERFORMATMIPMAP  = 0x8000,
};

struct RwRaster {
    RwRaster   *parent;
    uint8_t    *cpPixels;
    uint8_t    *palette;
    int32_t     width, height, depth;
    int32_t     stride;
    int16_t     nOffsetX, nOffsetY;
    uint8_t     cType;
    uint8_t     cFlags;
    uint8_t     privateFlags;
    uint8_t     cFormat;
    uint8_t    *originalPixels;
    int32_t     originalWidth, originalHeight, originalStride;
};

struct RwTexDictionary;
struct RwTexture {
    RwRaster        *raster;
    RwTexDictionary *dict;
    RwTexture       *next;      // linked list within dictionary
    RwTexture       *prev;
    uint32_t         filterAddressing;
    char             name[32];
    char             mask[32];
    uint32_t         refCount;
};

// ── Geometry ─────────────────────────────────────────────────────────────────
enum RpGeometryFlag : uint32_t {
    rpGEOMETRYTRISTRIP       = 0x00000001,
    rpGEOMETRYPOSITIONS      = 0x00000002,
    rpGEOMETRYTEXTURED       = 0x00000004,
    rpGEOMETRYPRELIT         = 0x00000008,
    rpGEOMETRYNORMALS        = 0x00000010,
    rpGEOMETRYLIGHT         = 0x00000020,
    rpGEOMETRYMODULATEMATERIALCOLOR = 0x00000040,
    rpGEOMETRYTEXTURED2      = 0x00000080,
    rpGEOMETRYNATIVE         = 0x01000000,
    rpGEOMETRYNATIVEINSTANCE = 0x02000000,
};

struct RpMesh {
    uint16_t *indices;
    uint32_t  numIndices;
    void     *material;
};

struct RpMeshHeader {
    uint32_t  flags;
    uint16_t  numMeshes;
    uint16_t  serialNum;
    uint32_t  totalIndicesInMesh;
    uint32_t  firstMeshOffset;
};

struct RpGeometry {
    uint32_t     refCount;
    uint32_t     flags;
    uint16_t     lockedSinceLastInst;
    int16_t      numTriangles;
    int32_t      numVertices;
    int32_t      numMorphTargets;
    int32_t      numTexCoordSets;
    RpMeshHeader *mesh;
    void         *instData;         // native (PS2) instance data
    int32_t       refCountExt;
    int32_t       pad;
    // morph targets follow inline (numMorphTargets × RpMorphTarget)
};

struct RpMorphTarget {
    RwBBox   boundingSphere;
    RwV3d   *verts;
    RwV3d   *normals;
};

// ── Skin / skeleton ──────────────────────────────────────────────────────────
struct RpSkin {
    uint32_t  numBones;
    uint32_t  numUsedBones;
    const uint8_t  *maxWeightsPerVertex;
    const uint8_t  *usedBoneList;
    const float    *inverseMatrices; // numBones × 16 floats (column-major)
    const float    *skinToBoneMap;   // per-vertex bone indices + weights
    // RW native data follows (not accessed by rw_renderer directly)
    void     *nativeData;
};

// ── Atomic (renderable object) ────────────────────────────────────────────────
struct RpClump;
struct RwFrame;
struct RpAtomic {
    RwFrame    *frame;
    RpGeometry *geometry;
    RwSphere    boundingSphere;
    RwSphere    worldBoundingSphere;
    RpClump    *clump;
    void       *inClumpLink;        // RwLLLink
    uint32_t    renderCallBack;     // function pointer (PS2 guest)
    uint32_t    interpolator;       // RpInterpolator inlined
    uint16_t    renderFrame;
    uint16_t    pad;
    void       *inWorldLink;
    uint32_t    backfaceCull;
    // Plugin data follows inline (rpSKIN, rpHANIM, etc.)
};

// ── Light ────────────────────────────────────────────────────────────────────
enum RpLightType : uint32_t {
    rpLIGHTDIRECTIONAL = 1,
    rpLIGHTAMBIENT     = 2,
    rpLIGHTPOINT       = 0x80,
    rpLIGHTSPOT        = 0x81,
    rpLIGHTSPOTSOFT    = 0x82,
};

struct RpLight {
    void       *inWorldLink;
    float       radius;
    RwV3d       color;          // RGBA packed as 4 floats in RW
    float       minusCosAngle;
    void       *inSectorsLink;
    RpLightType lightType;
    RwFrame    *frame;
};

// ── 2D immediate-mode ────────────────────────────────────────────────────────
struct RwIm2DVertex {
    float    x, y, z;      // screen-space position (z in [0,1])
    float    recipCamZ;    // 1/camZ for perspective-correct UV
    uint32_t emissiveColor; // RGBA packed
    float    u, v;
};
