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

// Function: sub_00384BD0
// Address: 0x384bd0 - 0x384c00
void sub_00384BD0_0x384bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384BD0_0x384bd0");
#endif

    switch (ctx->pc) {
        case 0x384bd8u: goto label_384bd8;
        default: break;
    }

    ctx->pc = 0x384bd0u;

    // 0x384bd0: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x384bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x384bd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x384bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384bd8:
    // 0x384bd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x384bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x384bdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x384BDCu;
    {
        const bool branch_taken_0x384bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BDCu;
        // 0x384be0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384bdc) {
            ctx->pc = 0x384BECu;
            goto label_384bec;
        }
    }
    ctx->pc = 0x384BE4u;
    // 0x384be4: 0x3e00008  jr          $ra
    ctx->pc = 0x384BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BE4u;
        // 0x384be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384BECu;
label_384bec:
    // 0x384bec: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x384becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x384bf0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x384BF0u;
    {
        const bool branch_taken_0x384bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BF0u;
        // 0x384bf4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384bf0) {
            ctx->pc = 0x384BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384bd8;
        }
    }
    ctx->pc = 0x384BF8u;
    // 0x384bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x384BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BF8u;
        // 0x384bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384C00u;
}
