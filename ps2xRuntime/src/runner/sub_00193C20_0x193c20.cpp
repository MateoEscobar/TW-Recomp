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

// Function: sub_00193C20
// Address: 0x193c20 - 0x193d80
void sub_00193C20_0x193c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193C20_0x193c20");
#endif

    switch (ctx->pc) {
        case 0x193c20u: goto label_193c20;
        case 0x193c24u: goto label_193c24;
        case 0x193c28u: goto label_193c28;
        case 0x193c2cu: goto label_193c2c;
        case 0x193c30u: goto label_193c30;
        case 0x193c34u: goto label_193c34;
        case 0x193c38u: goto label_193c38;
        case 0x193c3cu: goto label_193c3c;
        case 0x193c40u: goto label_193c40;
        case 0x193c44u: goto label_193c44;
        case 0x193c48u: goto label_193c48;
        case 0x193c4cu: goto label_193c4c;
        case 0x193c50u: goto label_193c50;
        case 0x193c54u: goto label_193c54;
        case 0x193c58u: goto label_193c58;
        case 0x193c5cu: goto label_193c5c;
        case 0x193c60u: goto label_193c60;
        case 0x193c64u: goto label_193c64;
        case 0x193c68u: goto label_193c68;
        case 0x193c6cu: goto label_193c6c;
        case 0x193c70u: goto label_193c70;
        case 0x193c74u: goto label_193c74;
        case 0x193c78u: goto label_193c78;
        case 0x193c7cu: goto label_193c7c;
        case 0x193c80u: goto label_193c80;
        case 0x193c84u: goto label_193c84;
        case 0x193c88u: goto label_193c88;
        case 0x193c8cu: goto label_193c8c;
        case 0x193c90u: goto label_193c90;
        case 0x193c94u: goto label_193c94;
        case 0x193c98u: goto label_193c98;
        case 0x193c9cu: goto label_193c9c;
        case 0x193ca0u: goto label_193ca0;
        case 0x193ca4u: goto label_193ca4;
        case 0x193ca8u: goto label_193ca8;
        case 0x193cacu: goto label_193cac;
        case 0x193cb0u: goto label_193cb0;
        case 0x193cb4u: goto label_193cb4;
        case 0x193cb8u: goto label_193cb8;
        case 0x193cbcu: goto label_193cbc;
        case 0x193cc0u: goto label_193cc0;
        case 0x193cc4u: goto label_193cc4;
        case 0x193cc8u: goto label_193cc8;
        case 0x193cccu: goto label_193ccc;
        case 0x193cd0u: goto label_193cd0;
        case 0x193cd4u: goto label_193cd4;
        case 0x193cd8u: goto label_193cd8;
        case 0x193cdcu: goto label_193cdc;
        case 0x193ce0u: goto label_193ce0;
        case 0x193ce4u: goto label_193ce4;
        case 0x193ce8u: goto label_193ce8;
        case 0x193cecu: goto label_193cec;
        case 0x193cf0u: goto label_193cf0;
        case 0x193cf4u: goto label_193cf4;
        case 0x193cf8u: goto label_193cf8;
        case 0x193cfcu: goto label_193cfc;
        case 0x193d00u: goto label_193d00;
        case 0x193d04u: goto label_193d04;
        case 0x193d08u: goto label_193d08;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d10u: goto label_193d10;
        case 0x193d14u: goto label_193d14;
        case 0x193d18u: goto label_193d18;
        case 0x193d1cu: goto label_193d1c;
        case 0x193d20u: goto label_193d20;
        case 0x193d24u: goto label_193d24;
        case 0x193d28u: goto label_193d28;
        case 0x193d2cu: goto label_193d2c;
        case 0x193d30u: goto label_193d30;
        case 0x193d34u: goto label_193d34;
        case 0x193d38u: goto label_193d38;
        case 0x193d3cu: goto label_193d3c;
        case 0x193d40u: goto label_193d40;
        case 0x193d44u: goto label_193d44;
        case 0x193d48u: goto label_193d48;
        case 0x193d4cu: goto label_193d4c;
        case 0x193d50u: goto label_193d50;
        case 0x193d54u: goto label_193d54;
        case 0x193d58u: goto label_193d58;
        case 0x193d5cu: goto label_193d5c;
        case 0x193d60u: goto label_193d60;
        case 0x193d64u: goto label_193d64;
        case 0x193d68u: goto label_193d68;
        case 0x193d6cu: goto label_193d6c;
        case 0x193d70u: goto label_193d70;
        case 0x193d74u: goto label_193d74;
        case 0x193d78u: goto label_193d78;
        case 0x193d7cu: goto label_193d7c;
        default: break;
    }

    ctx->pc = 0x193c20u;

label_193c20:
    // 0x193c20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_193c24:
    // 0x193c24: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x193c24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_193c28:
    // 0x193c28: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x193c28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_193c2c:
    // 0x193c2c: 0xe7b00008  swc1        $f16, 0x8($sp)
    ctx->pc = 0x193c2cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_193c30:
    // 0x193c30: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x193c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_193c34:
    // 0x193c34: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x193c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_193c38:
    // 0x193c38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193c3c:
    // 0x193c3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_193c40:
    // 0x193c40: 0x9062ce50  lbu         $v0, -0x31B0($v1)
    ctx->pc = 0x193c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294954576)));
label_193c44:
    // 0x193c44: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x193c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_193c48:
    // 0x193c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193c4c:
    // 0x193c4c: 0x0  nop
    ctx->pc = 0x193c4cu;
    // NOP
label_193c50:
    // 0x193c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193c54:
    // 0x193c54: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x193c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_193c58:
    // 0x193c58: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x193c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_193c5c:
    // 0x193c5c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x193c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_193c60:
    // 0x193c60: 0xe7b10018  swc1        $f17, 0x18($sp)
    ctx->pc = 0x193c60u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_193c64:
    // 0x193c64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x193c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193c68:
    // 0x193c68: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x193c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_193c6c:
    // 0x193c6c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x193c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_193c70:
    // 0x193c70: 0x460291e8  max.s       $f7, $f18, $f2
    ctx->pc = 0x193c70u;
    ctx->f[7] = std::max(ctx->f[18], ctx->f[2]);
label_193c74:
    // 0x193c74: 0x460299a8  max.s       $f6, $f19, $f2
    ctx->pc = 0x193c74u;
    ctx->f[6] = std::max(ctx->f[19], ctx->f[2]);
label_193c78:
    // 0x193c78: 0x46072000  add.s       $f0, $f4, $f7
    ctx->pc = 0x193c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_193c7c:
    // 0x193c7c: 0x460628c0  add.s       $f3, $f5, $f6
    ctx->pc = 0x193c7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_193c80:
    // 0x193c80: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x193c80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_193c84:
    // 0x193c84: 0xe7af0044  swc1        $f15, 0x44($sp)
    ctx->pc = 0x193c84u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_193c88:
    // 0x193c88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x193c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_193c8c:
    // 0x193c8c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x193c8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_193c90:
    // 0x193c90: 0xe7b00048  swc1        $f16, 0x48($sp)
    ctx->pc = 0x193c90u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_193c94:
    // 0x193c94: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x193c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_193c98:
    // 0x193c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193c9c:
    // 0x193c9c: 0x0  nop
    ctx->pc = 0x193c9cu;
    // NOP
label_193ca0:
    // 0x193ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193ca4:
    // 0x193ca4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x193ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_193ca8:
    // 0x193ca8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x193ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_193cac:
    // 0x193cac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x193cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_193cb0:
    // 0x193cb0: 0xe7b10058  swc1        $f17, 0x58($sp)
    ctx->pc = 0x193cb0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_193cb4:
    // 0x193cb4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x193cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_193cb8:
    // 0x193cb8: 0x460299a9  min.s       $f6, $f19, $f2
    ctx->pc = 0x193cb8u;
    ctx->f[6] = std::min(ctx->f[19], ctx->f[2]);
label_193cbc:
    // 0x193cbc: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x193cbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_193cc0:
    // 0x193cc0: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x193cc0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_193cc4:
    // 0x193cc4: 0x46061800  add.s       $f0, $f3, $f6
    ctx->pc = 0x193cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_193cc8:
    // 0x193cc8: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x193cc8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_193ccc:
    // 0x193ccc: 0xe7b00088  swc1        $f16, 0x88($sp)
    ctx->pc = 0x193cccu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_193cd0:
    // 0x193cd0: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x193cd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_193cd4:
    // 0x193cd4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x193cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_193cd8:
    // 0x193cd8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x193cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_193cdc:
    // 0x193cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193ce0:
    // 0x193ce0: 0x0  nop
    ctx->pc = 0x193ce0u;
    // NOP
label_193ce4:
    // 0x193ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193ce8:
    // 0x193ce8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x193ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_193cec:
    // 0x193cec: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x193cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_193cf0:
    // 0x193cf0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x193cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_193cf4:
    // 0x193cf4: 0xe7b10098  swc1        $f17, 0x98($sp)
    ctx->pc = 0x193cf4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_193cf8:
    // 0x193cf8: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x193cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_193cfc:
    // 0x193cfc: 0x460291e9  min.s       $f7, $f18, $f2
    ctx->pc = 0x193cfcu;
    ctx->f[7] = std::min(ctx->f[18], ctx->f[2]);
label_193d00:
    // 0x193d00: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x193d00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_193d04:
    // 0x193d04: 0xe7ae00c0  swc1        $f14, 0xC0($sp)
    ctx->pc = 0x193d04u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_193d08:
    // 0x193d08: 0x46072000  add.s       $f0, $f4, $f7
    ctx->pc = 0x193d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_193d0c:
    // 0x193d0c: 0xe7ad00c4  swc1        $f13, 0xC4($sp)
    ctx->pc = 0x193d0cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_193d10:
    // 0x193d10: 0xe7b000c8  swc1        $f16, 0xC8($sp)
    ctx->pc = 0x193d10u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_193d14:
    // 0x193d14: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x193d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_193d18:
    // 0x193d18: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x193d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_193d1c:
    // 0x193d1c: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x193d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_193d20:
    // 0x193d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193d24:
    // 0x193d24: 0x0  nop
    ctx->pc = 0x193d24u;
    // NOP
label_193d28:
    // 0x193d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193d2c:
    // 0x193d2c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x193d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_193d30:
    // 0x193d30: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x193d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_193d34:
    // 0x193d34: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_193d38:
    // 0x193d38: 0xe7b100d8  swc1        $f17, 0xD8($sp)
    ctx->pc = 0x193d38u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_193d3c:
    // 0x193d3c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_193d40:
    // 0x193d40: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_193d44:
    // 0x193d44: 0x460299a8  max.s       $f6, $f19, $f2
    ctx->pc = 0x193d44u;
    ctx->f[6] = std::max(ctx->f[19], ctx->f[2]);
label_193d48:
    // 0x193d48: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x193d48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_193d4c:
    // 0x193d4c: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x193d4cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_193d50:
    // 0x193d50: 0x8c62ad4c  lw          $v0, -0x52B4($v1)
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946124)));
label_193d54:
    // 0x193d54: 0x24e7cdd8  addiu       $a3, $a3, -0x3228
    ctx->pc = 0x193d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954456));
label_193d58:
    // 0x193d58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x193d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_193d5c:
    // 0x193d5c: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x193d5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_193d60:
    // 0x193d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_193d64:
    // 0x193d64: 0xe7a500d4  swc1        $f5, 0xD4($sp)
    ctx->pc = 0x193d64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_193d68:
    // 0x193d68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_193d6c:
    // 0x193d6c: 0x40f809  jalr        $v0
label_193d70:
    if (ctx->pc == 0x193D70u) {
        ctx->pc = 0x193D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D6Cu;
        // 0x193d70: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D74u;
        goto label_193d74;
    }
    ctx->pc = 0x193D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193D74u);
        ctx->pc = 0x193D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D6Cu;
        // 0x193d70: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D6Cu, 0x193D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193D74u;
label_193d74:
    // 0x193d74: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_193d78:
    // 0x193d78: 0x3e00008  jr          $ra
label_193d7c:
    if (ctx->pc == 0x193D7Cu) {
        ctx->pc = 0x193D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D78u;
        // 0x193d7c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D80u;
        goto label_fallthrough_0x193d78;
    }
    ctx->pc = 0x193D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D78u;
        // 0x193d7c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x193d78:
    ctx->pc = 0x193D80u;
}
