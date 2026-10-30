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

// Function: sub_00293CD0
// Address: 0x293cd0 - 0x293d08
void sub_00293CD0_0x293cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293CD0_0x293cd0");
#endif

    ctx->pc = 0x293cd0u;

    // 0x293cd0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x293cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x293cd4: 0x8c830ac0  lw          $v1, 0xAC0($a0)
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510AC0u));
    // 0x293cd8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x293cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x293cdc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293CDCu;
    {
        const bool branch_taken_0x293cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CDCu;
        // 0x293ce0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cdc) {
            ctx->pc = 0x293CFCu;
            goto label_293cfc;
        }
    }
    ctx->pc = 0x293CE4u;
    // 0x293ce4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x293ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x293ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cec: 0x8c830ac4  lw          $v1, 0xAC4($a0)
    ctx->pc = 0x293cecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510AC4u));
    // 0x293cf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x293cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x293CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CF4u;
        // 0x293cf8: 0xac830ac4  sw          $v1, 0xAC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293CFCu;
label_293cfc:
    // 0x293cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293d00: 0x3e00008  jr          $ra
    ctx->pc = 0x293D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D00u;
        // 0x293d04: 0xac830ac0  sw          $v1, 0xAC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293D08u;
}
