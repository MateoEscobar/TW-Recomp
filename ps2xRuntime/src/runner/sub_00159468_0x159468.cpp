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

// Function: sub_00159468
// Address: 0x159468 - 0x159490
void sub_00159468_0x159468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159468_0x159468");
#endif

    ctx->pc = 0x159468u;

    // 0x159468: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159468u;
    {
        const bool branch_taken_0x159468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159468u;
        // 0x15946c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159468) {
            ctx->pc = 0x15947Cu;
            goto label_15947c;
        }
    }
    ctx->pc = 0x159470u;
    // 0x159470: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x159470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x159474: 0x3e00008  jr          $ra
    ctx->pc = 0x159474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159474u;
        // 0x159478: 0xac626d9c  sw          $v0, 0x6D9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15947Cu;
label_15947c:
    // 0x15947c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x159480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x159480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x159484: 0x3e00008  jr          $ra
    ctx->pc = 0x159484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159484u;
        // 0x159488: 0xac626d9c  sw          $v0, 0x6D9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15948Cu;
    // 0x15948c: 0x0  nop
    ctx->pc = 0x15948cu;
    // NOP
    ctx->pc = 0x159490u;
}
