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

// Function: sub_003198D0
// Address: 0x3198d0 - 0x319980
void sub_003198D0_0x3198d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003198D0_0x3198d0");
#endif

    switch (ctx->pc) {
        case 0x319900u: goto label_319900;
        case 0x319908u: goto label_319908;
        case 0x319918u: goto label_319918;
        case 0x31993cu: goto label_31993c;
        case 0x319950u: goto label_319950;
        default: break;
    }

    ctx->pc = 0x3198d0u;

    // 0x3198d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3198d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3198d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3198d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3198d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3198d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3198dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3198dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3198e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3198e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3198e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3198e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3198ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3198ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3198f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3198f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3198f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3198f8: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x3198f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3198fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3198fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319900:
    // 0x319900: 0xc137826  jal         func_4DE098
    ctx->pc = 0x319900u;
    SET_GPR_U32(ctx, 31, 0x319908u);
    ctx->pc = 0x319904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319900u;
    // 0x319904: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x319900u, 0x319908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319908u;
label_319908:
    // 0x319908: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x319908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31990c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319910: 0xc0e409a  jal         func_390268
    ctx->pc = 0x319910u;
    SET_GPR_U32(ctx, 31, 0x319918u);
    ctx->pc = 0x319914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319910u;
    // 0x319914: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x319910u, 0x319918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319918u;
label_319918:
    // 0x319918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31991c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x31991Cu;
    {
        const bool branch_taken_0x31991c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31991Cu;
        // 0x319920: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31991c) {
            ctx->pc = 0x319954u;
            goto label_319954;
        }
    }
    ctx->pc = 0x319924u;
    // 0x319924: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x319924u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x319928: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x319928u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31992c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31992Cu;
    {
        const bool branch_taken_0x31992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31992Cu;
        // 0x319930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31992c) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x319934u;
    // 0x319934: 0xc089f98  jal         func_227E60
    ctx->pc = 0x319934u;
    SET_GPR_U32(ctx, 31, 0x31993Cu);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x319934u, 0x31993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31993Cu;
label_31993c:
    // 0x31993c: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31993Cu;
    {
        const bool branch_taken_0x31993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x319940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31993Cu;
        // 0x319940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31993c) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x319944u;
    // 0x319944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319948: 0xc0c6660  jal         func_319980
    ctx->pc = 0x319948u;
    SET_GPR_U32(ctx, 31, 0x319950u);
    ctx->pc = 0x31994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319948u;
    // 0x31994c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319980u, 0x319948u, 0x319950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319950u;
label_319950:
    // 0x319950: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x319950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_319954:
    // 0x319954: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x319954u;
    {
        const bool branch_taken_0x319954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319954u;
        // 0x319958: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319954) {
            ctx->pc = 0x319900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319900;
        }
    }
    ctx->pc = 0x31995Cu;
    // 0x31995c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31995cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319960: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x319960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319964: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x319964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319968: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x319968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31996c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31996cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319974: 0x3e00008  jr          $ra
    ctx->pc = 0x319974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319974u;
        // 0x319978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31997Cu;
    // 0x31997c: 0x0  nop
    ctx->pc = 0x31997cu;
    // NOP
    ctx->pc = 0x319980u;
}
