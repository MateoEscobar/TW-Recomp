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

// Function: sub_00233D60
// Address: 0x233d60 - 0x233ef0
void sub_00233D60_0x233d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233D60_0x233d60");
#endif

    switch (ctx->pc) {
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        case 0x233eb0u: goto label_233eb0;
        case 0x233eb4u: goto label_233eb4;
        case 0x233eb8u: goto label_233eb8;
        case 0x233ebcu: goto label_233ebc;
        case 0x233ec0u: goto label_233ec0;
        case 0x233ec4u: goto label_233ec4;
        case 0x233ec8u: goto label_233ec8;
        case 0x233eccu: goto label_233ecc;
        case 0x233ed0u: goto label_233ed0;
        case 0x233ed4u: goto label_233ed4;
        case 0x233ed8u: goto label_233ed8;
        case 0x233edcu: goto label_233edc;
        case 0x233ee0u: goto label_233ee0;
        case 0x233ee4u: goto label_233ee4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233eecu: goto label_233eec;
        default: break;
    }

    ctx->pc = 0x233d60u;

label_233d60:
    // 0x233d60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x233d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_233d64:
    // 0x233d64: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x233d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_233d68:
    // 0x233d68: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x233d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_233d6c:
    // 0x233d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233d70:
    // 0x233d70: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x233d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_233d74:
    // 0x233d74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_233d78:
    // 0x233d78: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x233d78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_233d7c:
    // 0x233d7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_233d80:
    // 0x233d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_233d84:
    // 0x233d84: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x233d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_233d88:
    // 0x233d88: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x233d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_233d8c:
    // 0x233d8c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x233d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_233d90:
    // 0x233d90: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x233d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_233d94:
    // 0x233d94: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x233d94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_233d98:
    // 0x233d98: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x233d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_233d9c:
    // 0x233d9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x233d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_233da0:
    // 0x233da0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x233da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_233da4:
    // 0x233da4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x233da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_233da8:
    // 0x233da8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x233da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_233dac:
    // 0x233dac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x233dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_233db0:
    // 0x233db0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x233db0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_233db4:
    // 0x233db4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x233db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233db8:
    // 0x233db8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x233db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_233dbc:
    // 0x233dbc: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x233dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_233dc0:
    // 0x233dc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_233dc4:
    // 0x233dc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_233dc8:
    // 0x233dc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_233dcc:
    // 0x233dcc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x233dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_233dd0:
    // 0x233dd0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x233dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233dd4:
    // 0x233dd4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x233dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_233dd8:
    // 0x233dd8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x233dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233ddc:
    // 0x233ddc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x233ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_233de0:
    // 0x233de0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x233de0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_233de4:
    // 0x233de4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x233de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_233de8:
    // 0x233de8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x233de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_233dec:
    // 0x233dec: 0xc12e310  jal         func_4B8C40
label_233df0:
    if (ctx->pc == 0x233DF0u) {
        ctx->pc = 0x233DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DECu;
        // 0x233df0: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DF4u;
        goto label_233df4;
    }
    ctx->pc = 0x233DECu;
    SET_GPR_U32(ctx, 31, 0x233DF4u);
    ctx->pc = 0x233DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DECu;
    // 0x233df0: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x233DECu, 0x233DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DF4u;
label_233df4:
    // 0x233df4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x233df4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_233df8:
    // 0x233df8: 0xc12e29c  jal         func_4B8A70
label_233dfc:
    if (ctx->pc == 0x233DFCu) {
        ctx->pc = 0x233DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DF8u;
        // 0x233dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E00u;
        goto label_233e00;
    }
    ctx->pc = 0x233DF8u;
    SET_GPR_U32(ctx, 31, 0x233E00u);
    ctx->pc = 0x233DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DF8u;
    // 0x233dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x233DF8u, 0x233E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E00u;
label_233e00:
    // 0x233e00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x233e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_233e04:
    // 0x233e04: 0x3a240001  xori        $a0, $s1, 0x1
    ctx->pc = 0x233e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_233e08:
    // 0x233e08: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x233e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_233e0c:
    // 0x233e0c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x233e0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_233e10:
    // 0x233e10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x233e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_233e14:
    // 0x233e14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x233e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_233e18:
    // 0x233e18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x233e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_233e1c:
    // 0x233e1c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x233e1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_233e20:
    // 0x233e20: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x233e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_233e24:
    // 0x233e24: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x233e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_233e28:
    // 0x233e28: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x233e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_233e2c:
    // 0x233e2c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x233e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233e30:
    // 0x233e30: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x233e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233e34:
    // 0x233e34: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x233e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233e38:
    // 0x233e38: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x233e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_233e3c:
    // 0x233e3c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x233e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_233e40:
    // 0x233e40: 0xc085fc2  jal         func_217F08
label_233e44:
    if (ctx->pc == 0x233E44u) {
        ctx->pc = 0x233E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E40u;
        // 0x233e44: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E48u;
        goto label_233e48;
    }
    ctx->pc = 0x233E40u;
    SET_GPR_U32(ctx, 31, 0x233E48u);
    ctx->pc = 0x233E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E40u;
    // 0x233e44: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x217F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217F08u, 0x233E40u, 0x233E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E48u;
label_233e48:
    // 0x233e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233e4c:
    // 0x233e4c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_233e50:
    if (ctx->pc == 0x233E50u) {
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E4Cu;
        // 0x233e50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E54u;
        goto label_233e54;
    }
    ctx->pc = 0x233E4Cu;
    {
        const bool branch_taken_0x233e4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E4Cu;
        // 0x233e50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e4c) {
            ctx->pc = 0x233E68u;
            goto label_233e68;
        }
    }
    ctx->pc = 0x233E54u;
label_233e54:
    // 0x233e54: 0xc085fb2  jal         func_217EC8
label_233e58:
    if (ctx->pc == 0x233E58u) {
        ctx->pc = 0x233E5Cu;
        goto label_233e5c;
    }
    ctx->pc = 0x233E54u;
    SET_GPR_U32(ctx, 31, 0x233E5Cu);
    ctx->pc = 0x217EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217EC8u, 0x233E54u, 0x233E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E5Cu;
label_233e5c:
    // 0x233e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x233e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_233e60:
    // 0x233e60: 0x10000017  b           . + 4 + (0x17 << 2)
label_233e64:
    if (ctx->pc == 0x233E64u) {
        ctx->pc = 0x233E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E60u;
        // 0x233e64: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E68u;
        goto label_233e68;
    }
    ctx->pc = 0x233E60u;
    {
        const bool branch_taken_0x233e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E60u;
        // 0x233e64: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e60) {
            ctx->pc = 0x233EC0u;
            goto label_233ec0;
        }
    }
    ctx->pc = 0x233E68u;
label_233e68:
    // 0x233e68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x233e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233e6c:
    // 0x233e6c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x233e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_233e70:
    // 0x233e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233e74:
    // 0x233e74: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x233e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_233e78:
    // 0x233e78: 0xc086002  jal         func_218008
label_233e7c:
    if (ctx->pc == 0x233E7Cu) {
        ctx->pc = 0x233E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E78u;
        // 0x233e7c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E80u;
        goto label_233e80;
    }
    ctx->pc = 0x233E78u;
    SET_GPR_U32(ctx, 31, 0x233E80u);
    ctx->pc = 0x233E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E78u;
    // 0x233e7c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218008u, 0x233E78u, 0x233E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E80u;
label_233e80:
    // 0x233e80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x233e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_233e84:
    // 0x233e84: 0xc08736a  jal         func_21CDA8
label_233e88:
    if (ctx->pc == 0x233E88u) {
        ctx->pc = 0x233E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E84u;
        // 0x233e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E8Cu;
        goto label_233e8c;
    }
    ctx->pc = 0x233E84u;
    SET_GPR_U32(ctx, 31, 0x233E8Cu);
    ctx->pc = 0x233E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E84u;
    // 0x233e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDA8u, 0x233E84u, 0x233E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E8Cu;
label_233e8c:
    // 0x233e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233e90:
    // 0x233e90: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_233e94:
    if (ctx->pc == 0x233E94u) {
        ctx->pc = 0x233E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E90u;
        // 0x233e94: 0xa21101b1  sb          $s1, 0x1B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E98u;
        goto label_233e98;
    }
    ctx->pc = 0x233E90u;
    {
        const bool branch_taken_0x233e90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x233E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E90u;
        // 0x233e94: 0xa21101b1  sb          $s1, 0x1B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e90) {
            ctx->pc = 0x233EACu;
            goto label_233eac;
        }
    }
    ctx->pc = 0x233E98u;
label_233e98:
    // 0x233e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233e9c:
    // 0x233e9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233ea0:
    // 0x233ea0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233ea4:
    // 0x233ea4: 0xc08a710  jal         func_229C40
label_233ea8:
    if (ctx->pc == 0x233EA8u) {
        ctx->pc = 0x233EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EA4u;
        // 0x233ea8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EACu;
        goto label_233eac;
    }
    ctx->pc = 0x233EA4u;
    SET_GPR_U32(ctx, 31, 0x233EACu);
    ctx->pc = 0x233EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EA4u;
    // 0x233ea8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x233EA4u, 0x233EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EACu;
label_233eac:
    // 0x233eac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233eb0:
    // 0x233eb0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_233eb4:
    // 0x233eb4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x233eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_233eb8:
    // 0x233eb8: 0x40f809  jalr        $v0
label_233ebc:
    if (ctx->pc == 0x233EBCu) {
        ctx->pc = 0x233EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB8u;
        // 0x233ebc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EC0u;
        goto label_233ec0;
    }
    ctx->pc = 0x233EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233EC0u);
        ctx->pc = 0x233EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB8u;
        // 0x233ebc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233EB8u, 0x233EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233EC0u;
label_233ec0:
    // 0x233ec0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x233ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_233ec4:
    // 0x233ec4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x233ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_233ec8:
    // 0x233ec8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x233ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_233ecc:
    // 0x233ecc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x233eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_233ed0:
    // 0x233ed0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x233ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_233ed4:
    // 0x233ed4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x233ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_233ed8:
    // 0x233ed8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x233ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_233edc:
    // 0x233edc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x233edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_233ee0:
    // 0x233ee0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x233ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_233ee4:
    // 0x233ee4: 0x3e00008  jr          $ra
label_233ee8:
    if (ctx->pc == 0x233EE8u) {
        ctx->pc = 0x233EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EE4u;
        // 0x233ee8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EECu;
        goto label_233eec;
    }
    ctx->pc = 0x233EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EE4u;
        // 0x233ee8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233EECu;
label_233eec:
    // 0x233eec: 0x0  nop
    ctx->pc = 0x233eecu;
    // NOP
    ctx->pc = 0x233ef0u;
}
