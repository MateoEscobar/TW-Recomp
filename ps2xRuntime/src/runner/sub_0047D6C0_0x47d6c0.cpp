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

// Function: sub_0047D6C0
// Address: 0x47d6c0 - 0x47d6f0
void sub_0047D6C0_0x47d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D6C0_0x47d6c0");
#endif

    ctx->pc = 0x47d6c0u;

    // 0x47d6c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x47d6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d6c4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47D6C4u;
    {
        const bool branch_taken_0x47d6c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D6C4u;
        // 0x47d6c8: 0x8f848928  lw          $a0, -0x76D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d6c4) {
            ctx->pc = 0x47D6D4u;
            goto label_47d6d4;
        }
    }
    ctx->pc = 0x47D6CCu;
    // 0x47d6cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x47d6d0: 0x2445c0f8  addiu       $a1, $v0, -0x3F08
    ctx->pc = 0x47d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951160));
label_47d6d4:
    // 0x47d6d4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x47d6d8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47d6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d6e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x47d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x47d6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x47D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D6E4u;
        // 0x47d6e8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D6ECu;
    // 0x47d6ec: 0x0  nop
    ctx->pc = 0x47d6ecu;
    // NOP
    ctx->pc = 0x47d6f0u;
}
