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

// Function: sub_002E13C0
// Address: 0x2e13c0 - 0x2e15e8
void sub_002E13C0_0x2e13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E13C0_0x2e13c0");
#endif

    switch (ctx->pc) {
        case 0x2e1430u: goto label_2e1430;
        case 0x2e1438u: goto label_2e1438;
        case 0x2e1440u: goto label_2e1440;
        case 0x2e14c8u: goto label_2e14c8;
        case 0x2e159cu: goto label_2e159c;
        case 0x2e15c0u: goto label_2e15c0;
        default: break;
    }

    ctx->pc = 0x2e13c0u;

    // 0x2e13c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e13c4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2e13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2e13c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e13cc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e13d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e13d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13d4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e13d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e13d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13dc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e13dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e13e0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e13e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e13e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e13e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e13e8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2e13ec: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e13ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e13f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e13f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e13f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e13f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e13f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e13fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e1400: 0xc4546bcc  lwc1        $f20, 0x6BCC($v0)
    ctx->pc = 0x2e1400u;
    { uint32_t bits = FAST_READ32(0x566BCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1404: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e1404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e1408: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2e1408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2e140c: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2e140cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1410: 0x24730048  addiu       $s3, $v1, 0x48
    ctx->pc = 0x2e1410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2e1414: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2e1414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2e1418: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e1418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e141c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1420: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e1420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1424: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e1424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2e1428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e142c: 0x0  nop
    ctx->pc = 0x2e142cu;
    // NOP
label_2e1430:
    // 0x2e1430: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2E1430u;
    SET_GPR_U32(ctx, 31, 0x2E1438u);
    ctx->pc = 0x2E1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1430u;
    // 0x2e1434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2E1430u, 0x2E1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1438u;
label_2e1438:
    // 0x2e1438: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E1438u;
    SET_GPR_U32(ctx, 31, 0x2E1440u);
    ctx->pc = 0x2E143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1438u;
    // 0x2e143c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E1438u, 0x2E1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1440u;
label_2e1440:
    // 0x2e1440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e1440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1444: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1444u;
    {
        const bool branch_taken_0x2e1444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1444u;
        // 0x2e1448: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1444) {
            ctx->pc = 0x2E14A8u;
            goto label_2e14a8;
        }
    }
    ctx->pc = 0x2E144Cu;
    // 0x2e144c: 0x84a40092  lh          $a0, 0x92($a1)
    ctx->pc = 0x2e144cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x2e1450: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e1454: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2e1454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2e1458: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2e1458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e145c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e145cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e1460: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e1460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e1464: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e1464u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e1468: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e1468u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e146c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e146cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e1470: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e1470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e1474: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2e1474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e1478: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e1478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e147c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e147cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e1480: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2e1480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2e1484: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2e1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2e1488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e148c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2e148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2e1490: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e1490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1494: 0x0  nop
    ctx->pc = 0x2e1494u;
    // NOP
    // 0x2e1498: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1498u;
    {
        const bool branch_taken_0x2e1498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1498u;
        // 0x2e149c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1498) {
            ctx->pc = 0x2E14A8u;
            goto label_2e14a8;
        }
    }
    ctx->pc = 0x2E14A0u;
    // 0x2e14a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e14a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e14a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e14a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e14a8:
    // 0x2e14a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e14a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e14ac: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2e14acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e14b0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E14B0u;
    {
        const bool branch_taken_0x2e14b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14B0u;
        // 0x2e14b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14b0) {
            ctx->pc = 0x2E1430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1430;
        }
    }
    ctx->pc = 0x2E14B8u;
    // 0x2e14b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e14bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14c0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2E14C0u;
    SET_GPR_U32(ctx, 31, 0x2E14C8u);
    ctx->pc = 0x2E14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14C0u;
    // 0x2e14c4: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2E14C0u, 0x2E14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14C8u;
label_2e14c8:
    // 0x2e14c8: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E14C8u;
    {
        const bool branch_taken_0x2e14c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14C8u;
        // 0x2e14cc: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14c8) {
            ctx->pc = 0x2E15C0u;
            goto label_2e15c0;
        }
    }
    ctx->pc = 0x2E14D0u;
    // 0x2e14d0: 0x0  nop
    ctx->pc = 0x2e14d0u;
    // NOP
    // 0x2e14d4: 0x0  nop
    ctx->pc = 0x2e14d4u;
    // NOP
    // 0x2e14d8: 0x46140004  c1          0x140004
    ctx->pc = 0x2e14d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e14dc: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x2e14dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x2e14e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e14e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e14e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E14E4u;
    {
        const bool branch_taken_0x2e14e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14E4u;
        // 0x2e14e8: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14e4) {
            ctx->pc = 0x2E1518u;
            goto label_2e1518;
        }
    }
    ctx->pc = 0x2E14ECu;
    // 0x2e14ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e14ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e14f0: 0x0  nop
    ctx->pc = 0x2e14f0u;
    // NOP
    // 0x2e14f4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2E14F4u;
    {
        const bool branch_taken_0x2e14f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e14f4) {
            ctx->pc = 0x2E154Cu;
            goto label_2e154c;
        }
    }
    ctx->pc = 0x2E14FCu;
    // 0x2e14fc: 0x0  nop
    ctx->pc = 0x2e14fcu;
    // NOP
    // 0x2e1500: 0x0  nop
    ctx->pc = 0x2e1500u;
    // NOP
    // 0x2e1504: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2e1504u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e1508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e150c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e150cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1510: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E1510u;
    {
        const bool branch_taken_0x2e1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1510u;
        // 0x2e1514: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1510) {
            ctx->pc = 0x2E154Cu;
            goto label_2e154c;
        }
    }
    ctx->pc = 0x2E1518u;
label_2e1518:
    // 0x2e1518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e151c: 0x0  nop
    ctx->pc = 0x2e151cu;
    // NOP
    // 0x2e1520: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E1520u;
    {
        const bool branch_taken_0x2e1520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1520) {
            ctx->pc = 0x2E154Cu;
            goto label_2e154c;
        }
    }
    ctx->pc = 0x2E1528u;
    // 0x2e1528: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e1528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e152c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e1530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e1534: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e1534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2e1538: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e1538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e153c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e153cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1540: 0x0  nop
    ctx->pc = 0x2e1540u;
    // NOP
    // 0x2e1544: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2e1544u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e1548: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x2e1548u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
label_2e154c:
    // 0x2e154c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e1550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1554: 0x0  nop
    ctx->pc = 0x2e1554u;
    // NOP
    // 0x2e1558: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e1558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e155c: 0x0  nop
    ctx->pc = 0x2e155cu;
    // NOP
    // 0x2e1560: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1560u;
    {
        const bool branch_taken_0x2e1560 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1560u;
        // 0x2e1564: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1560) {
            ctx->pc = 0x2E1584u;
            goto label_2e1584;
        }
    }
    ctx->pc = 0x2E1568u;
    // 0x2e1568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e156c: 0x0  nop
    ctx->pc = 0x2e156cu;
    // NOP
    // 0x2e1570: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e1570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1574: 0x0  nop
    ctx->pc = 0x2e1574u;
    // NOP
    // 0x2e1578: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1578u;
    {
        const bool branch_taken_0x2e1578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1578u;
        // 0x2e157c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1578) {
            ctx->pc = 0x2E1584u;
            goto label_2e1584;
        }
    }
    ctx->pc = 0x2E1580u;
    // 0x2e1580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e1584:
    // 0x2e1584: 0x92250024  lbu         $a1, 0x24($s1)
    ctx->pc = 0x2e1584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2e1588: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e1588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e158c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e1590: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2e1590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2e1594: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2E1594u;
    SET_GPR_U32(ctx, 31, 0x2E159Cu);
    ctx->pc = 0x2E1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1594u;
    // 0x2e1598: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E1594u, 0x2E159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E159Cu;
label_2e159c:
    // 0x2e159c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2e159cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2e15a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e15a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e15a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15a8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2e15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e15ac: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2e15acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2e15b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e15b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e15b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e15b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e15b8: 0xc0a7dc4  jal         func_29F710
    ctx->pc = 0x2E15B8u;
    SET_GPR_U32(ctx, 31, 0x2E15C0u);
    ctx->pc = 0x2E15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E15B8u;
    // 0x2e15bc: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F710u, 0x2E15B8u, 0x2E15C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E15C0u;
label_2e15c0:
    // 0x2e15c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e15c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e15c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e15c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e15c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e15c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e15cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e15ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e15d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e15d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e15d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e15d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e15d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e15d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e15dc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e15e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E15E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15E0u;
        // 0x2e15e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E15E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E15E8u;
}
