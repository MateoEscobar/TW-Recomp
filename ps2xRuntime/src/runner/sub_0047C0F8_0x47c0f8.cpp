#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C0F8
// Address: 0x47c0f8 - 0x47c358
void sub_0047C0F8_0x47c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C0F8_0x47c0f8");
#endif

    ctx->pc = 0x47c0f8u;

    // 0x47c0f8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x47c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c0fc: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x47c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c100: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x47c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c104: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x47c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c10c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x47c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c110: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c110u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c114: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x47c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c118: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c11c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47c11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47c120: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c124: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x47c124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x47c128: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x47c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c12c: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x47c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c130: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c134: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x47c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c138: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c13c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x47c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c140: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c144: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x47c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c148: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x47c148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x47c14c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x47c14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47c150: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c154: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x47c154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x47c158: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x47c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c15c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x47c15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c160: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x47c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c164: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x47c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c168: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c16c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x47c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c170: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c170u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c174: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x47c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c178: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c178u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c17c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47c17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47c180: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c184: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x47c184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x47c188: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x47c188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c18c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x47c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c190: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x47c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c194: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x47c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c198: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c19c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x47c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c1a0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c1a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c1a4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x47c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c1a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x47c1a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x47c1ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x47c1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47c1b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c1b4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x47c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x47c1b8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x47c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c1bc: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x47c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c1c0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x47c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c1c4: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x47c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c1c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c1c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c1cc: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x47c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c1d0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c1d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c1d4: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x47c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c1d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c1d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c1dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47c1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47c1e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c1e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c1e4: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x47c1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x47c1e8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x47c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c1ec: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x47c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c1f0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x47c1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c1f4: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x47c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c1f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c1fc: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x47c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c200: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c204: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x47c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c208: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x47c208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x47c20c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x47c20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47c210: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c214: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x47c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x47c218: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x47c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c21c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x47c21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c220: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x47c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c224: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x47c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c228: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c22c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c230: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c234: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x47c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c238: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c23c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47c23cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47c240: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c240u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c244: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x47c244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x47c248: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x47c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c24c: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x47c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c250: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x47c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c254: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x47c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c258: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c25c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c260: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c264: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x47c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c268: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x47c268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x47c26c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x47c26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47c270: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c274: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x47c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x47c278: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x47c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c27c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x47c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c280: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x47c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c284: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x47c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c288: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c28c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c290: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47c290u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47c294: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x47c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c298: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c29c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47c29cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47c2a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c2a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c2a4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x47c2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x47c2a8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x47c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c2ac: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x47c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c2b0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x47c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c2b4: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c2b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47c2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47c2bc: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x47c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c2c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47c2c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47c2c4: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x47c2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c2c8: 0xc4c40030  lwc1        $f4, 0x30($a2)
    ctx->pc = 0x47c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c2cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x47c2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x47c2d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c2d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47c2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47c2d8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47c2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47c2dc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x47c2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x47c2e0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x47c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c2e4: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x47c2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c2e8: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x47c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c2ec: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c2f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x47c2f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x47c2f4: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x47c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c2f8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47c2f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47c2fc: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x47c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c300: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x47c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c304: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47c304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47c308: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c30c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47c30cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47c310: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x47c310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x47c314: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x47c314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x47c318: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x47c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c31c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x47c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c320: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x47c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c324: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c328: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47c328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47c32c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x47c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c330: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47c330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47c334: 0xc4c30028  lwc1        $f3, 0x28($a2)
    ctx->pc = 0x47c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c338: 0xc4c40038  lwc1        $f4, 0x38($a2)
    ctx->pc = 0x47c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c33c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x47c33cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x47c340: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47c344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47c348: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47c348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47c34c: 0x3e00008  jr          $ra
    ctx->pc = 0x47C34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C34Cu;
        // 0x47c350: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C354u;
    // 0x47c354: 0x0  nop
    ctx->pc = 0x47c354u;
    // NOP
    ctx->pc = 0x47c358u;
}
