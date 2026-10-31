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

// Function: sub_00229B60
// Address: 0x229b60 - 0x229b90
void sub_00229B60_0x229b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229B60_0x229b60");
#endif

    ctx->pc = 0x229b60u;

    // 0x229b60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229B60u;
    {
        const bool branch_taken_0x229b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b60) {
            ctx->pc = 0x229B80u;
            goto label_229b80;
        }
    }
    ctx->pc = 0x229B68u;
    // 0x229b68: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229B68u;
    {
        const bool branch_taken_0x229b68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x229B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B68u;
        // 0x229b6c: 0x28820016  slti        $v0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b68) {
            ctx->pc = 0x229B88u;
            goto label_229b88;
        }
    }
    ctx->pc = 0x229B70u;
    // 0x229b70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229B70u;
    {
        const bool branch_taken_0x229b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B70u;
        // 0x229b74: 0x28820013  slti        $v0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b70) {
            ctx->pc = 0x229B88u;
            goto label_229b88;
        }
    }
    ctx->pc = 0x229B78u;
    // 0x229b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229B78u;
    {
        const bool branch_taken_0x229b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229b78) {
            ctx->pc = 0x229B88u;
            goto label_229b88;
        }
    }
    ctx->pc = 0x229B80u;
label_229b80:
    // 0x229b80: 0x3e00008  jr          $ra
    ctx->pc = 0x229B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B80u;
        // 0x229b84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229B88u;
label_229b88:
    // 0x229b88: 0x3e00008  jr          $ra
    ctx->pc = 0x229B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B88u;
        // 0x229b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229B90u;
}
