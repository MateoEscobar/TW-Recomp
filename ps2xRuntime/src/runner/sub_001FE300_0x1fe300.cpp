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

// Function: sub_001FE300
// Address: 0x1fe300 - 0x1fe3d0
void sub_001FE300_0x1fe300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE300_0x1fe300");
#endif

    switch (ctx->pc) {
        case 0x1fe338u: goto label_1fe338;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe350u: goto label_1fe350;
        case 0x1fe368u: goto label_1fe368;
        case 0x1fe384u: goto label_1fe384;
        case 0x1fe398u: goto label_1fe398;
        default: break;
    }

    ctx->pc = 0x1fe300u;

    // 0x1fe300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe304: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fe304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fe308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe30c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe310: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fe310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe314: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fe314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fe318: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fe318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fe31c: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1fe31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fe320: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FE320u;
    {
        const bool branch_taken_0x1fe320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE320u;
        // 0x1fe324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe320) {
            ctx->pc = 0x1FE3ACu;
            goto label_1fe3ac;
        }
    }
    ctx->pc = 0x1FE328u;
    // 0x1fe328: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1fe32c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1fe32cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1fe330: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1fe330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fe334: 0x0  nop
    ctx->pc = 0x1fe334u;
    // NOP
label_1fe338:
    // 0x1fe338: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1FE338u;
    SET_GPR_U32(ctx, 31, 0x1FE340u);
    ctx->pc = 0x1FE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE338u;
    // 0x1fe33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1FE338u, 0x1FE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE340u;
label_1fe340:
    // 0x1fe340: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FE340u;
    {
        const bool branch_taken_0x1fe340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe340) {
            ctx->pc = 0x1FE344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE340u;
            // 0x1fe344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3B0u;
            goto label_1fe3b0;
        }
    }
    ctx->pc = 0x1FE348u;
    // 0x1fe348: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1FE348u;
    SET_GPR_U32(ctx, 31, 0x1FE350u);
    ctx->pc = 0x1FE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE348u;
    // 0x1fe34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1FE348u, 0x1FE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE350u;
label_1fe350:
    // 0x1fe350: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe354: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FE354u;
    {
        const bool branch_taken_0x1fe354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE354u;
        // 0x1fe358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe354) {
            ctx->pc = 0x1FE3B0u;
            goto label_1fe3b0;
        }
    }
    ctx->pc = 0x1FE35Cu;
    // 0x1fe35c: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1fe360: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE360u;
    {
        const bool branch_taken_0x1fe360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe360) {
            ctx->pc = 0x1FE364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE360u;
            // 0x1fe364: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE370u;
            goto label_1fe370;
        }
    }
    ctx->pc = 0x1FE368u;
label_1fe368:
    // 0x1fe368: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE368u;
    {
        const bool branch_taken_0x1fe368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE368u;
        // 0x1fe36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe368) {
            ctx->pc = 0x1FE3B0u;
            goto label_1fe3b0;
        }
    }
    ctx->pc = 0x1FE370u;
label_1fe370:
    // 0x1fe370: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FE370u;
    {
        const bool branch_taken_0x1fe370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE370u;
        // 0x1fe374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe370) {
            ctx->pc = 0x1FE3B0u;
            goto label_1fe3b0;
        }
    }
    ctx->pc = 0x1FE378u;
    // 0x1fe378: 0x8c65037c  lw          $a1, 0x37C($v1)
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 892)));
    // 0x1fe37c: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x1FE37Cu;
    SET_GPR_U32(ctx, 31, 0x1FE384u);
    ctx->pc = 0x1FE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE37Cu;
    // 0x1fe380: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x1FE37Cu, 0x1FE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE384u;
label_1fe384:
    // 0x1fe384: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x1fe384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    // 0x1fe388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe390: 0xc05dd34  jal         func_1774D0
    ctx->pc = 0x1FE390u;
    SET_GPR_U32(ctx, 31, 0x1FE398u);
    ctx->pc = 0x1FE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE390u;
    // 0x1fe394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x1FE390u, 0x1FE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE398u;
label_1fe398:
    // 0x1fe398: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FE398u;
    {
        const bool branch_taken_0x1fe398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE398u;
        // 0x1fe39c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe398) {
            ctx->pc = 0x1FE368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe368;
        }
    }
    ctx->pc = 0x1FE3A0u;
    // 0x1fe3a0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1fe3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fe3a4: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1FE3A4u;
    {
        const bool branch_taken_0x1fe3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3A4u;
        // 0x1fe3a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3a4) {
            ctx->pc = 0x1FE338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe338;
        }
    }
    ctx->pc = 0x1FE3ACu;
label_1fe3ac:
    // 0x1fe3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe3b0:
    // 0x1fe3b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fe3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe3b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fe3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe3b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe3bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fe3bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C4u;
        // 0x1fe3c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE3CCu;
    // 0x1fe3cc: 0x0  nop
    ctx->pc = 0x1fe3ccu;
    // NOP
    ctx->pc = 0x1fe3d0u;
}
