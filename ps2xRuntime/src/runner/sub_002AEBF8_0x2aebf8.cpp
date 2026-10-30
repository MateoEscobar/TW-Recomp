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

// Function: sub_002AEBF8
// Address: 0x2aebf8 - 0x2aeda0
void sub_002AEBF8_0x2aebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEBF8_0x2aebf8");
#endif

    switch (ctx->pc) {
        case 0x2aec24u: goto label_2aec24;
        case 0x2aec54u: goto label_2aec54;
        case 0x2aec68u: goto label_2aec68;
        case 0x2aec74u: goto label_2aec74;
        case 0x2aec88u: goto label_2aec88;
        case 0x2aecb8u: goto label_2aecb8;
        case 0x2aecd0u: goto label_2aecd0;
        case 0x2aece0u: goto label_2aece0;
        case 0x2aecf0u: goto label_2aecf0;
        case 0x2aed0cu: goto label_2aed0c;
        case 0x2aed34u: goto label_2aed34;
        case 0x2aed40u: goto label_2aed40;
        case 0x2aed70u: goto label_2aed70;
        case 0x2aed7cu: goto label_2aed7c;
        default: break;
    }

    ctx->pc = 0x2aebf8u;

    // 0x2aebf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2aebfc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2aebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2aec00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aec04: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2aec04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2aec08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aec08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aec10: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2aec10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2aec14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aec18: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2aec18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aec1c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC24u);
    ctx->pc = 0x2AEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC1Cu;
    // 0x2aec20: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AEC1Cu, 0x2AEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC24u;
label_2aec24:
    // 0x2aec24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aec28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aec28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec2c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2aec2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2aec30: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEC30u;
    {
        const bool branch_taken_0x2aec30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC30u;
        // 0x2aec34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec30) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEC38u;
    // 0x2aec38: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2AEC38u;
    {
        const bool branch_taken_0x2aec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC38u;
        // 0x2aec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec38) {
            ctx->pc = 0x2AED80u;
            goto label_2aed80;
        }
    }
    ctx->pc = 0x2AEC40u;
label_2aec40:
    // 0x2aec40: 0x8c82021c  lw          $v0, 0x21C($a0)
    ctx->pc = 0x2aec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x2aec44: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AEC44u;
    {
        const bool branch_taken_0x2aec44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aec44) {
            ctx->pc = 0x2AEC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEC44u;
            // 0x2aec48: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEC90u;
            goto label_2aec90;
        }
    }
    ctx->pc = 0x2AEC4Cu;
    // 0x2aec4c: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2AEC4Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC54u);
    ctx->pc = 0x2AEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC4Cu;
    // 0x2aec50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AEC4Cu, 0x2AEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC54u;
label_2aec54:
    // 0x2aec54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aec54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec58: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2AEC58u;
    {
        const bool branch_taken_0x2aec58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC58u;
        // 0x2aec5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec58) {
            ctx->pc = 0x2AED80u;
            goto label_2aed80;
        }
    }
    ctx->pc = 0x2AEC60u;
    // 0x2aec60: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AEC60u;
    SET_GPR_U32(ctx, 31, 0x2AEC68u);
    ctx->pc = 0x2AEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC60u;
    // 0x2aec64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AEC60u, 0x2AEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC68u;
label_2aec68:
    // 0x2aec68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec6c: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2AEC6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC74u);
    ctx->pc = 0x2AEC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC6Cu;
    // 0x2aec70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2AEC6Cu, 0x2AEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC74u;
label_2aec74:
    // 0x2aec74: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AEC74u;
    {
        const bool branch_taken_0x2aec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC74u;
        // 0x2aec78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec74) {
            ctx->pc = 0x2AECBCu;
            goto label_2aecbc;
        }
    }
    ctx->pc = 0x2AEC7Cu;
    // 0x2aec7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aec80: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2AEC80u;
    SET_GPR_U32(ctx, 31, 0x2AEC88u);
    ctx->pc = 0x2AEC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC80u;
    // 0x2aec84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2AEC80u, 0x2AEC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC88u;
label_2aec88:
    // 0x2aec88: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2AEC88u;
    {
        const bool branch_taken_0x2aec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC88u;
        // 0x2aec8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec88) {
            ctx->pc = 0x2AED80u;
            goto label_2aed80;
        }
    }
    ctx->pc = 0x2AEC90u;
label_2aec90:
    // 0x2aec90: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2aec90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2aec94: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEC94u;
    {
        const bool branch_taken_0x2aec94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC94u;
        // 0x2aec98: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec94) {
            ctx->pc = 0x2AECA8u;
            goto label_2aeca8;
        }
    }
    ctx->pc = 0x2AEC9Cu;
    // 0x2aec9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aeca0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AECA0u;
    {
        const bool branch_taken_0x2aeca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aeca0) {
            ctx->pc = 0x2AECB0u;
            goto label_2aecb0;
        }
    }
    ctx->pc = 0x2AECA8u;
label_2aeca8:
    // 0x2aeca8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2aeca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2aecac: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x2aecacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
label_2aecb0:
    // 0x2aecb0: 0xc0a7c8c  jal         func_29F230
    ctx->pc = 0x2AECB0u;
    SET_GPR_U32(ctx, 31, 0x2AECB8u);
    ctx->pc = 0x2AECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECB0u;
    // 0x2aecb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2AECB0u, 0x2AECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECB8u;
label_2aecb8:
    // 0x2aecb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aecb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aecbc:
    // 0x2aecbc: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AECBCu;
    {
        const bool branch_taken_0x2aecbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aecbc) {
            ctx->pc = 0x2AECC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AECBCu;
            // 0x2aecc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AECD8u;
            goto label_2aecd8;
        }
    }
    ctx->pc = 0x2AECC4u;
    // 0x2aecc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aecc8: 0xc0ab8ba  jal         func_2AE2E8
    ctx->pc = 0x2AECC8u;
    SET_GPR_U32(ctx, 31, 0x2AECD0u);
    ctx->pc = 0x2AECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECC8u;
    // 0x2aeccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE2E8u, 0x2AECC8u, 0x2AECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECD0u;
label_2aecd0:
    // 0x2aecd0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2AECD0u;
    {
        const bool branch_taken_0x2aecd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECD0u;
        // 0x2aecd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecd0) {
            ctx->pc = 0x2AED84u;
            goto label_2aed84;
        }
    }
    ctx->pc = 0x2AECD8u;
label_2aecd8:
    // 0x2aecd8: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2AECD8u;
    SET_GPR_U32(ctx, 31, 0x2AECE0u);
    ctx->pc = 0x2AECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECD8u;
    // 0x2aecdc: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2AECD8u, 0x2AECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECE0u;
label_2aece0:
    // 0x2aece0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AECE0u;
    {
        const bool branch_taken_0x2aece0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECE0u;
        // 0x2aece4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aece0) {
            ctx->pc = 0x2AED80u;
            goto label_2aed80;
        }
    }
    ctx->pc = 0x2AECE8u;
    // 0x2aece8: 0xc0a4486  jal         func_291218
    ctx->pc = 0x2AECE8u;
    SET_GPR_U32(ctx, 31, 0x2AECF0u);
    ctx->pc = 0x2AECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECE8u;
    // 0x2aecec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291218u, 0x2AECE8u, 0x2AECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECF0u;
label_2aecf0:
    // 0x2aecf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aecf4: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AECF4u;
    {
        const bool branch_taken_0x2aecf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECF4u;
        // 0x2aecf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecf4) {
            ctx->pc = 0x2AED80u;
            goto label_2aed80;
        }
    }
    ctx->pc = 0x2AECFCu;
    // 0x2aecfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aed00: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2aed00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2aed04: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2AED04u;
    SET_GPR_U32(ctx, 31, 0x2AED0Cu);
    ctx->pc = 0x2AED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED04u;
    // 0x2aed08: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2AED04u, 0x2AED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED0Cu;
label_2aed0c:
    // 0x2aed0c: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AED0Cu;
    {
        const bool branch_taken_0x2aed0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED0Cu;
        // 0x2aed10: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed0c) {
            ctx->pc = 0x2AED38u;
            goto label_2aed38;
        }
    }
    ctx->pc = 0x2AED14u;
    // 0x2aed14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2aed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aed18: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2aed18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2aed1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aed1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aed20: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2aed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2aed24: 0xc44c013c  lwc1        $f12, 0x13C($v0)
    ctx->pc = 0x2aed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aed28: 0xc44d0140  lwc1        $f13, 0x140($v0)
    ctx->pc = 0x2aed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aed2c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2AED2Cu;
    SET_GPR_U32(ctx, 31, 0x2AED34u);
    ctx->pc = 0x2AED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED2Cu;
    // 0x2aed30: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2AED2Cu, 0x2AED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED34u;
label_2aed34:
    // 0x2aed34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2aed34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2aed38:
    // 0x2aed38: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2AED38u;
    SET_GPR_U32(ctx, 31, 0x2AED40u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AED38u, 0x2AED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED40u;
label_2aed40:
    // 0x2aed40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aed40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed44: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AED44u;
    {
        const bool branch_taken_0x2aed44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED44u;
        // 0x2aed48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed44) {
            ctx->pc = 0x2AED70u;
            goto label_2aed70;
        }
    }
    ctx->pc = 0x2AED4Cu;
    // 0x2aed4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aed50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aed58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed5c: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x2aed5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2aed60: 0x24090bb8  addiu       $t1, $zero, 0xBB8
    ctx->pc = 0x2aed60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2aed64: 0x240a07d0  addiu       $t2, $zero, 0x7D0
    ctx->pc = 0x2aed64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2aed68: 0xc0ad026  jal         func_2B4098
    ctx->pc = 0x2AED68u;
    SET_GPR_U32(ctx, 31, 0x2AED70u);
    ctx->pc = 0x2AED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED68u;
    // 0x2aed6c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4098u, 0x2AED68u, 0x2AED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED70u;
label_2aed70:
    // 0x2aed70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aed70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aed74: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2AED74u;
    SET_GPR_U32(ctx, 31, 0x2AED7Cu);
    ctx->pc = 0x2AED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED74u;
    // 0x2aed78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AED74u, 0x2AED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED7Cu;
label_2aed7c:
    // 0x2aed7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aed7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aed80:
    // 0x2aed80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aed80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aed84:
    // 0x2aed84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aed84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aed88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2aed88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aed8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aed90: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2aed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aed94: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED94u;
        // 0x2aed98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AED9Cu;
    // 0x2aed9c: 0x0  nop
    ctx->pc = 0x2aed9cu;
    // NOP
    ctx->pc = 0x2aeda0u;
}
