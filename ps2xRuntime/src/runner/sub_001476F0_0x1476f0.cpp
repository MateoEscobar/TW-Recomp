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

// Function: sub_001476F0
// Address: 0x1476f0 - 0x147738
void sub_001476F0_0x1476f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001476F0_0x1476f0");
#endif

    switch (ctx->pc) {
        case 0x147708u: goto label_147708;
        default: break;
    }

    ctx->pc = 0x1476f0u;

    // 0x1476f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1476f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1476f4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1476f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1476f8: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1476fc: 0x2446b768  addiu       $a2, $v0, -0x4898
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948712));
    // 0x147700: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x147700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147704: 0x0  nop
    ctx->pc = 0x147704u;
    // NOP
label_147708:
    // 0x147708: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x147708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14770c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14770Cu;
    {
        const bool branch_taken_0x14770c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14770c) {
            ctx->pc = 0x147710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14770Cu;
            // 0x147710: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147720u;
            goto label_147720;
        }
    }
    ctx->pc = 0x147714u;
    // 0x147714: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x147718: 0x3e00008  jr          $ra
    ctx->pc = 0x147718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147718u;
        // 0x14771c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147720u;
label_147720:
    // 0x147720: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x147720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x147724: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x147724u;
    {
        const bool branch_taken_0x147724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147724u;
        // 0x147728: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147724) {
            ctx->pc = 0x147708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147708;
        }
    }
    ctx->pc = 0x14772Cu;
    // 0x14772c: 0x3e00008  jr          $ra
    ctx->pc = 0x14772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14772Cu;
        // 0x147730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14772Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147734u;
    // 0x147734: 0x0  nop
    ctx->pc = 0x147734u;
    // NOP
    ctx->pc = 0x147738u;
}
