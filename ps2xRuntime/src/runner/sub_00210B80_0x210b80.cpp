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

// Function: sub_00210B80
// Address: 0x210b80 - 0x210d10
void sub_00210B80_0x210b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210B80_0x210b80");
#endif

    switch (ctx->pc) {
        case 0x210ba8u: goto label_210ba8;
        case 0x210c80u: goto label_210c80;
        case 0x210cf0u: goto label_210cf0;
        default: break;
    }

    ctx->pc = 0x210b80u;

    // 0x210b80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x210b84: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x210b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x210b88: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x210b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x210b8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x210b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b90: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x210b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x210b94: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x210b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x210b98: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x210b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x210b9c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x210b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x210ba0: 0xc083726  jal         func_20DC98
    ctx->pc = 0x210BA0u;
    SET_GPR_U32(ctx, 31, 0x210BA8u);
    ctx->pc = 0x210BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BA0u;
    // 0x210ba4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC98u, 0x210BA0u, 0x210BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BA8u;
label_210ba8:
    // 0x210ba8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210bac: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210BACu;
    {
        const bool branch_taken_0x210bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x210BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BACu;
        // 0x210bb0: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bac) {
            ctx->pc = 0x210BD0u;
            goto label_210bd0;
        }
    }
    ctx->pc = 0x210BB4u;
    // 0x210bb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x210BB4u;
    {
        const bool branch_taken_0x210bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BB4u;
        // 0x210bb8: 0x24090031  addiu       $t1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bb4) {
            ctx->pc = 0x210BD4u;
            goto label_210bd4;
        }
    }
    ctx->pc = 0x210BBCu;
    // 0x210bbc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x210bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210bc0: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210BC0u;
    {
        const bool branch_taken_0x210bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x210bc0) {
            ctx->pc = 0x210BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210BC0u;
            // 0x210bc4: 0x24090027  addiu       $t1, $zero, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210BD4u;
            goto label_210bd4;
        }
    }
    ctx->pc = 0x210BC8u;
    // 0x210bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210BC8u;
    {
        const bool branch_taken_0x210bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BC8u;
        // 0x210bcc: 0x8e8640f4  lw          $a2, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bc8) {
            ctx->pc = 0x210BD8u;
            goto label_210bd8;
        }
    }
    ctx->pc = 0x210BD0u;
label_210bd0:
    // 0x210bd0: 0x24090023  addiu       $t1, $zero, 0x23
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_210bd4:
    // 0x210bd4: 0x8e8640f4  lw          $a2, 0x40F4($s4)
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_210bd8:
    // 0x210bd8: 0x24120120  addiu       $s2, $zero, 0x120
    ctx->pc = 0x210bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x210bdc: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x210bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x210be0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x210be4: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x210be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x210be8: 0xa3b00050  sb          $s0, 0x50($sp)
    ctx->pc = 0x210be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 16));
    // 0x210bec: 0x2442f7b0  addiu       $v0, $v0, -0x850
    ctx->pc = 0x210becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965168));
    // 0x210bf0: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x210bf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x210bf4: 0x2451fff0  addiu       $s1, $v0, -0x10
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x210bf8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x210bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x210bfc: 0x3c01465a  lui         $at, 0x465A
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18010 << 16));
    // 0x210c00: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x210c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x210c04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x210c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x210c08: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x210c08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x210c0c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x210c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x210c10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x210c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210c14: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x210c14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x210c18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x210c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x210c1c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x210c1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210c20: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x210c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x210c24: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x210c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x210c28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x210c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x210c2c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x210c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x210c30: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x210c30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210c34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x210c34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x210c38: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x210c38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210c3c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x210c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x210c40: 0x26844130  addiu       $a0, $s4, 0x4130
    ctx->pc = 0x210c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16688));
    // 0x210c44: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x210c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x210c48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x210c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210c4c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x210c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x210c50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c54: 0xa1700003  sb          $s0, 0x3($t3)
    ctx->pc = 0x210c54u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x210c58: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x210c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x210c5c: 0xa1700001  sb          $s0, 0x1($t3)
    ctx->pc = 0x210c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x210c60: 0xa1700002  sb          $s0, 0x2($t3)
    ctx->pc = 0x210c60u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x210c64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x210c64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c68: 0xc4cc0030  lwc1        $f12, 0x30($a2)
    ctx->pc = 0x210c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210c6c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x210c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210c70: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x210c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x210c74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x210c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x210c78: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x210C78u;
    SET_GPR_U32(ctx, 31, 0x210C80u);
    ctx->pc = 0x210C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C78u;
    // 0x210c7c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x210C78u, 0x210C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C80u;
label_210c80:
    // 0x210c80: 0x8e8540f4  lw          $a1, 0x40F4($s4)
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
    // 0x210c84: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x210c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x210c88: 0xa3a20054  sb          $v0, 0x54($sp)
    ctx->pc = 0x210c88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x210c8c: 0x27a30054  addiu       $v1, $sp, 0x54
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x210c90: 0xb22018  mult        $a0, $a1, $s2
    ctx->pc = 0x210c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x210c94: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x210c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x210c98: 0xa0700003  sb          $s0, 0x3($v1)
    ctx->pc = 0x210c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x210c9c: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x210ca0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x210ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x210ca4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x210ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x210ca8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x210ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x210cac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x210cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210cb0: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x210cb4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x210cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x210cb8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x210cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x210cbc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x210cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x210cc0: 0xc4ac0034  lwc1        $f12, 0x34($a1)
    ctx->pc = 0x210cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210cc4: 0x26844230  addiu       $a0, $s4, 0x4230
    ctx->pc = 0x210cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16944));
    // 0x210cc8: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x210ccc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cd0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x210cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x210cd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210cd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x210cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x210cdc: 0x3529001f  ori         $t1, $t1, 0x1F
    ctx->pc = 0x210cdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)31);
    // 0x210ce0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x210ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x210ce4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x210ce4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x210ce8: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x210CE8u;
    SET_GPR_U32(ctx, 31, 0x210CF0u);
    ctx->pc = 0x210CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210CE8u;
    // 0x210cec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x210CE8u, 0x210CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CF0u;
label_210cf0:
    // 0x210cf0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x210cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210cf4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x210cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210cf8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x210cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210cfc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x210cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210d00: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x210d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210d04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x210d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210d08: 0x3e00008  jr          $ra
    ctx->pc = 0x210D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D08u;
        // 0x210d0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D10u;
}
