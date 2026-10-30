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

// Function: sub_0034FA28
// Address: 0x34fa28 - 0x34fba0
void sub_0034FA28_0x34fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FA28_0x34fa28");
#endif

    switch (ctx->pc) {
        case 0x34fa90u: goto label_34fa90;
        case 0x34faa8u: goto label_34faa8;
        default: break;
    }

    ctx->pc = 0x34fa28u;

    // 0x34fa28: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x34fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x34fa2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34fa30: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x34fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x34fa34: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x34fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x34fa38: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x34fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x34fa3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa40: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x34fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x34fa44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34fa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa48: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x34fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x34fa4c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x34fa4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34fa50: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x34fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x34fa54: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x34fa54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa58: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x34fa58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x34fa5c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x34fa5cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x34fa60: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x34fa60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x34fa64: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x34fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x34fa68: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x34fa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x34fa6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34fa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34fa70: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x34fa70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34fa74: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x34fa74u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x511770u));
    // 0x34fa78: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34fa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34fa7c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x34fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34fa80: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x34fa80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34fa84: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x34fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x34fa88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34fa88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x34fa8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34fa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_34fa90:
    // 0x34fa90: 0x8e8447c4  lw          $a0, 0x47C4($s4)
    ctx->pc = 0x34fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    // 0x34fa94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34fa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34fa98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34fa9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34faa0: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x34FAA0u;
    SET_GPR_U32(ctx, 31, 0x34FAA8u);
    ctx->pc = 0x34FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FAA0u;
    // 0x34faa4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x34FAA0u, 0x34FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FAA8u;
label_34faa8:
    // 0x34faa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x34faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34faac: 0x14530031  bne         $v0, $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x34FAACu;
    {
        const bool branch_taken_0x34faac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x34FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAACu;
        // 0x34fab0: 0x93a2005e  lbu         $v0, 0x5E($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 94)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34faac) {
            ctx->pc = 0x34FB74u;
            goto label_34fb74;
        }
    }
    ctx->pc = 0x34FAB4u;
    // 0x34fab4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34FAB4u;
    {
        const bool branch_taken_0x34fab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAB4u;
        // 0x34fab8: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fab4) {
            ctx->pc = 0x34FB14u;
            goto label_34fb14;
        }
    }
    ctx->pc = 0x34FABCu;
    // 0x34fabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fac0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x34fac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34fac4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x34fac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x34fac8: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x34fac8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34facc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34faccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34fad0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34fad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34fad4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34fad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34fad8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34fad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34fadc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34fadcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34fae0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34fae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34fae4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34fae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34fae8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34fae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34faec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34faecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34faf0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34faf0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34faf4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x34faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x34faf8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x34faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x34fafc: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x34fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x34fb00: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34fb04: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x34fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x34fb08: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x34fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x34fb0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x34FB0Cu;
    {
        const bool branch_taken_0x34fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB0Cu;
        // 0x34fb10: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb0c) {
            ctx->pc = 0x34FB78u;
            goto label_34fb78;
        }
    }
    ctx->pc = 0x34FB14u;
label_34fb14:
    // 0x34fb14: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x34fb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34fb18: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x34fb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x34fb1c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x34fb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34fb20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34fb20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34fb24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34fb24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34fb28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34fb28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34fb2c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34fb2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34fb30: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34fb30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34fb34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34fb34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34fb38: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x34fb38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fb3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34fb3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34fb40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34fb40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34fb44: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34fb44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34fb48: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34fb48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34fb4c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34fb4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34fb50: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x34fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x34fb54: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x34fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x34fb58: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34fb5c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x34fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x34fb60: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x34fb60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34fb64: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x34fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x34fb68: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x34fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x34fb6c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x34FB6Cu;
    {
        const bool branch_taken_0x34fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB6Cu;
        // 0x34fb70: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb6c) {
            ctx->pc = 0x34FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34fa90;
        }
    }
    ctx->pc = 0x34FB74u;
label_34fb74:
    // 0x34fb74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34fb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fb78:
    // 0x34fb78: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x34fb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34fb7c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x34fb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34fb80: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x34fb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34fb84: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x34fb84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34fb88: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x34fb88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34fb8c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x34fb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34fb90: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x34fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34fb94: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x34fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x34FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB98u;
        // 0x34fb9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FBA0u;
}
