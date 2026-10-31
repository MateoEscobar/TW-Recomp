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

// Function: sub_004397E8
// Address: 0x4397e8 - 0x439a18
void sub_004397E8_0x4397e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004397E8_0x4397e8");
#endif

    switch (ctx->pc) {
        case 0x439838u: goto label_439838;
        case 0x4398ecu: goto label_4398ec;
        case 0x439904u: goto label_439904;
        case 0x439910u: goto label_439910;
        case 0x439950u: goto label_439950;
        default: break;
    }

    ctx->pc = 0x4397e8u;

    // 0x4397e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4397e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4397ec: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4397ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4397f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4397f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4397f4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4397f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4397f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4397f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4397fc: 0x3c1e0059  lui         $fp, 0x59
    ctx->pc = 0x4397fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)89 << 16));
    // 0x439800: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x439800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x439804: 0x27c5c531  addiu       $a1, $fp, -0x3ACF
    ctx->pc = 0x439804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952241));
    // 0x439808: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x439808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x43980c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x43980cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439810: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x439810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x439814: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x439814u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439818: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x439818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x43981c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x439820: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x439820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x439824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x439824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x439828: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x439828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x43982c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x43982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x439830: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x439830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x439834: 0x0  nop
    ctx->pc = 0x439834u;
    // NOP
label_439838:
    // 0x439838: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x439838u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x43983c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x43983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x439840: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x439840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x439844: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x439844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x439848: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439848u;
    {
        const bool branch_taken_0x439848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439848u;
        // 0x43984c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439848) {
            ctx->pc = 0x439838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439838;
        }
    }
    ctx->pc = 0x439850u;
    // 0x439850: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x439850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x439854: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x439854u;
    {
        const bool branch_taken_0x439854 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x439858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439854u;
        // 0x439858: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439854) {
            ctx->pc = 0x439868u;
            goto label_439868;
        }
    }
    ctx->pc = 0x43985Cu;
    // 0x43985c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x43985cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x439860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x439860u;
    {
        const bool branch_taken_0x439860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439860u;
        // 0x439864: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439860) {
            ctx->pc = 0x439874u;
            goto label_439874;
        }
    }
    ctx->pc = 0x439868u;
label_439868:
    // 0x439868: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x439868u;
    {
        const bool branch_taken_0x439868 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x439868) {
            ctx->pc = 0x439878u;
            goto label_439878;
        }
    }
    ctx->pc = 0x439870u;
    // 0x439870: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x439870u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_439874:
    // 0x439874: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x439874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_439878:
    // 0x439878: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x439878u;
    {
        const bool branch_taken_0x439878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x43987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439878u;
        // 0x43987c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439878) {
            ctx->pc = 0x439888u;
            goto label_439888;
        }
    }
    ctx->pc = 0x439880u;
    // 0x439880: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x439880u;
    {
        const bool branch_taken_0x439880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x439880) {
            ctx->pc = 0x4398B4u;
            goto label_4398b4;
        }
    }
    ctx->pc = 0x439888u;
label_439888:
    // 0x439888: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x439888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x43988c: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43988Cu;
    {
        const bool branch_taken_0x43988c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x439890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43988Cu;
        // 0x439890: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43988c) {
            ctx->pc = 0x4398B4u;
            goto label_4398b4;
        }
    }
    ctx->pc = 0x439894u;
    // 0x439894: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x439894u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x439898: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x439898u;
    {
        const bool branch_taken_0x439898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439898u;
        // 0x43989c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439898) {
            ctx->pc = 0x4398A8u;
            goto label_4398a8;
        }
    }
    ctx->pc = 0x4398A0u;
    // 0x4398a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4398A0u;
    {
        const bool branch_taken_0x4398a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4398a0) {
            ctx->pc = 0x4398B4u;
            goto label_4398b4;
        }
    }
    ctx->pc = 0x4398A8u;
label_4398a8:
    // 0x4398a8: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x4398a8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x4398ac: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x4398acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4398b0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4398b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_4398b4:
    // 0x4398b4: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4398B4u;
    {
        const bool branch_taken_0x4398b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4398B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4398B4u;
        // 0x4398b8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4398b4) {
            ctx->pc = 0x4398C8u;
            goto label_4398c8;
        }
    }
    ctx->pc = 0x4398BCu;
    // 0x4398bc: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x4398bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4398c0: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x4398c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x4398c4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x4398c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4398c8:
    // 0x4398c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4398c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4398cc: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x4398ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x4398d0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x4398d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4398d4: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x4398d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x4398d8: 0x57a00b  movn        $s4, $v0, $s7
    ctx->pc = 0x4398d8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x4398dc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4398dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4398e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4398e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4398e4: 0xc10f1c0  jal         func_43C700
    ctx->pc = 0x4398E4u;
    SET_GPR_U32(ctx, 31, 0x4398ECu);
    ctx->pc = 0x4398E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4398E4u;
    // 0x4398e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x4398E4u, 0x4398ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4398ECu;
label_4398ec:
    // 0x4398ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4398ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4398f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4398f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4398f4: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x4398f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4398f8: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x4398f8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x4398fc: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x4398FCu;
    SET_GPR_U32(ctx, 31, 0x439904u);
    ctx->pc = 0x439900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4398FCu;
    // 0x439900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4398FCu, 0x439904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439904u;
label_439904:
    // 0x439904: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x439904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439908: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x439908u;
    {
        const bool branch_taken_0x439908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439908u;
        // 0x43990c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439908) {
            ctx->pc = 0x43995Cu;
            goto label_43995c;
        }
    }
    ctx->pc = 0x439910u;
label_439910:
    // 0x439910: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x439910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x439914: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x439914u;
    {
        const bool branch_taken_0x439914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x439914) {
            ctx->pc = 0x439994u;
            goto label_439994;
        }
    }
    ctx->pc = 0x43991Cu;
    // 0x43991c: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x43991Cu;
    {
        const bool branch_taken_0x43991c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x439920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43991Cu;
        // 0x439920: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43991c) {
            ctx->pc = 0x439940u;
            goto label_439940;
        }
    }
    ctx->pc = 0x439924u;
    // 0x439924: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x439924u;
    {
        const bool branch_taken_0x439924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x439924) {
            ctx->pc = 0x439928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x439924u;
            // 0x439928: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439954u;
            goto label_439954;
        }
    }
    ctx->pc = 0x43992Cu;
    // 0x43992c: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x43992Cu;
    {
        const bool branch_taken_0x43992c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x439930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43992Cu;
        // 0x439930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43992c) {
            ctx->pc = 0x439948u;
            goto label_439948;
        }
    }
    ctx->pc = 0x439934u;
    // 0x439934: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x439934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x439938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x439938u;
    {
        const bool branch_taken_0x439938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x439938) {
            ctx->pc = 0x439948u;
            goto label_439948;
        }
    }
    ctx->pc = 0x439940u;
label_439940:
    // 0x439940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x439940u;
    {
        const bool branch_taken_0x439940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439940u;
        // 0x439944: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439940) {
            ctx->pc = 0x439954u;
            goto label_439954;
        }
    }
    ctx->pc = 0x439948u;
label_439948:
    // 0x439948: 0xc10b602  jal         func_42D808
    ctx->pc = 0x439948u;
    SET_GPR_U32(ctx, 31, 0x439950u);
    ctx->pc = 0x43994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439948u;
    // 0x43994c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x439948u, 0x439950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439950u;
label_439950:
    // 0x439950: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x439950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_439954:
    // 0x439954: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x439954u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x439958: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x439958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43995c:
    // 0x43995c: 0x27c2c531  addiu       $v0, $fp, -0x3ACF
    ctx->pc = 0x43995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952241));
    // 0x439960: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x439960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x439964: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x439964u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x439968: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x439968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x43996c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43996Cu;
    {
        const bool branch_taken_0x43996c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43996Cu;
        // 0x439970: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43996c) {
            ctx->pc = 0x43997Cu;
            goto label_43997c;
        }
    }
    ctx->pc = 0x439974u;
    // 0x439974: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x439974u;
    {
        const bool branch_taken_0x439974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439974u;
        // 0x439978: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439974) {
            ctx->pc = 0x439910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439910;
        }
    }
    ctx->pc = 0x43997Cu;
label_43997c:
    // 0x43997c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43997Cu;
    {
        const bool branch_taken_0x43997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43997Cu;
        // 0x439980: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43997c) {
            ctx->pc = 0x439994u;
            goto label_439994;
        }
    }
    ctx->pc = 0x439984u;
    // 0x439984: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x439984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x439988: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x439988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x43998c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x43998Cu;
    {
        const bool branch_taken_0x43998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43998Cu;
        // 0x439990: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43998c) {
            ctx->pc = 0x439910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439910;
        }
    }
    ctx->pc = 0x439994u;
label_439994:
    // 0x439994: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x439994u;
    {
        const bool branch_taken_0x439994 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x439998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439994u;
        // 0x439998: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439994) {
            ctx->pc = 0x4399C0u;
            goto label_4399c0;
        }
    }
    ctx->pc = 0x43999Cu;
    // 0x43999c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4399a0: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x4399a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x4399a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4399a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4399a8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x4399a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x4399ac: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x4399acu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x4399b0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4399b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4399b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4399b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4399b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4399B8u;
    {
        const bool branch_taken_0x4399b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4399BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4399B8u;
        // 0x4399bc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4399b8) {
            ctx->pc = 0x4399C4u;
            goto label_4399c4;
        }
    }
    ctx->pc = 0x4399C0u;
label_4399c0:
    // 0x4399c0: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x4399c0u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_4399c4:
    // 0x4399c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4399c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4399c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4399C8u;
    {
        const bool branch_taken_0x4399c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4399CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4399C8u;
        // 0x4399cc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4399c8) {
            ctx->pc = 0x4399E0u;
            goto label_4399e0;
        }
    }
    ctx->pc = 0x4399D0u;
    // 0x4399d0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x4399d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4399d4: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x4399d4u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x4399d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4399d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4399dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4399dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4399e0:
    // 0x4399e0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4399e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4399e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4399e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4399e8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4399e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4399ec: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4399ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4399f0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4399f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4399f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4399f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4399f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4399f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4399fc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4399fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x439a00: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x439a00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x439a04: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x439a04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x439a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x439a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x439A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439A0Cu;
        // 0x439a10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439A14u;
    // 0x439a14: 0x0  nop
    ctx->pc = 0x439a14u;
    // NOP
    ctx->pc = 0x439a18u;
}
