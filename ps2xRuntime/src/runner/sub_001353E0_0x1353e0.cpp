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

// Function: sub_001353E0
// Address: 0x1353e0 - 0x1355f8
void sub_001353E0_0x1353e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001353E0_0x1353e0");
#endif

    switch (ctx->pc) {
        case 0x135438u: goto label_135438;
        case 0x135444u: goto label_135444;
        case 0x1354a4u: goto label_1354a4;
        case 0x1354b0u: goto label_1354b0;
        case 0x135510u: goto label_135510;
        case 0x13551cu: goto label_13551c;
        default: break;
    }

    ctx->pc = 0x1353e0u;

    // 0x1353e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1353e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1353e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1353e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1353e8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1353e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1353ec: 0x246316e0  addiu       $v1, $v1, 0x16E0
    ctx->pc = 0x1353ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5856));
    // 0x1353f0: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1353f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1353f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1353f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353f8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1353f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1353fc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1353fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x135400: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x135400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x135404: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x135404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x135408: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x135408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x13540c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x13540cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x135410: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x135410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x135414: 0xc6140204  lwc1        $f20, 0x204($s0)
    ctx->pc = 0x135414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135418: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x135418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13541c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x13541cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x135420: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x135420u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x135424: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x135424u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116E0u));
    // 0x135428: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x135428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13542c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x13542cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x135430: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x135430u;
    SET_GPR_U32(ctx, 31, 0x135438u);
    ctx->pc = 0x135434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135430u;
    // 0x135434: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x135430u, 0x135438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135438u;
label_135438:
    // 0x135438: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x135438u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x13543c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x13543Cu;
    SET_GPR_U32(ctx, 31, 0x135444u);
    ctx->pc = 0x135440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13543Cu;
    // 0x135440: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x13543Cu, 0x135444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135444u;
label_135444:
    // 0x135444: 0xc6140200  lwc1        $f20, 0x200($s0)
    ctx->pc = 0x135444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135448: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x135448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x13544c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13544cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135450: 0x24631700  addiu       $v1, $v1, 0x1700
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
    // 0x135454: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x135454u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x135458: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x135458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13545c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13545cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x135460: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x135460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x135464: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x135464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x135468: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x135468u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13546c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x135470: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x135470u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x135474: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x135474u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135478: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x135478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13547c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13547cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135480: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x135480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135484: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x135484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135488: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x135488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13548c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x13548cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x135490: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x135490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x135494: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x135494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x135498: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x135498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x13549c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x13549Cu;
    SET_GPR_U32(ctx, 31, 0x1354A4u);
    ctx->pc = 0x1354A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13549Cu;
    // 0x1354a0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x13549Cu, 0x1354A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354A4u;
label_1354a4:
    // 0x1354a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1354a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1354a8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1354A8u;
    SET_GPR_U32(ctx, 31, 0x1354B0u);
    ctx->pc = 0x1354ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354A8u;
    // 0x1354ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1354A8u, 0x1354B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354B0u;
label_1354b0:
    // 0x1354b0: 0xc6140208  lwc1        $f20, 0x208($s0)
    ctx->pc = 0x1354b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1354b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1354b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1354b8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1354b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1354bc: 0x244216f0  addiu       $v0, $v0, 0x16F0
    ctx->pc = 0x1354bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5872));
    // 0x1354c0: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1354c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1354c4: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x1354c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1354c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1354c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1354cc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1354ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1354d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1354d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1354d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1354d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1354d8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1354d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1354dc: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1354dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1354e0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1354e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1354e4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1354e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1354e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1354e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1354ec: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1354ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1354f0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1354f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1354f4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1354f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1354f8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1354f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1354fc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1354fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x135500: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x135500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x135504: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x135504u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x135508: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x135508u;
    SET_GPR_U32(ctx, 31, 0x135510u);
    ctx->pc = 0x13550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135508u;
    // 0x13550c: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x135508u, 0x135510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135510u;
label_135510:
    // 0x135510: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x135510u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x135514: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x135514u;
    SET_GPR_U32(ctx, 31, 0x13551Cu);
    ctx->pc = 0x135518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135514u;
    // 0x135518: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x135514u, 0x13551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13551Cu;
label_13551c:
    // 0x13551c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13551cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135520: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x135520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135524: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x135528: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x135528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13552c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13552cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x135530: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x135530u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x135534: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x135534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x135538: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x135538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x13553c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x135540: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x135540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135544: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x135544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135548: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x135548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13554c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x135550: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x135550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x135554: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x135554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x135558: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x135558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13555c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x13555cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135560: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x135564: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x135564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x135568: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x135568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13556c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x13556cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x135570: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x135570u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135574: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x135574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x135578: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x135578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x13557c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x13557cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x135580: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x135584: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x135584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x135588: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x135588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13558c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x13558cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x135590: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x135590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x135594: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x135594u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x135598: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x135598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13559c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13559cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1355a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1355a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1355a4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1355a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1355a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1355a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1355ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1355acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1355b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1355b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1355b4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1355b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1355b8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1355b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1355bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1355bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1355c0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1355c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1355c4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1355c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1355c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1355c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1355cc: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x1355ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    // 0x1355d0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1355d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1355d4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1355d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1355d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1355d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1355dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1355dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1355e0: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x1355e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1355e4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1355e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1355e8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1355e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1355ec: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1355ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1355f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1355F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1355F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355F0u;
        // 0x1355f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1355F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1355F8u;
}
