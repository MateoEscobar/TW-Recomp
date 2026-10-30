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

// Function: sub_004DBA40
// Address: 0x4dba40 - 0x4dba78
void sub_004DBA40_0x4dba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBA40_0x4dba40");
#endif

    ctx->pc = 0x4dba40u;

    // 0x4dba40: 0x3e00008  jr          $ra
    ctx->pc = 0x4DBA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBA40u;
        // 0x4dba44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DBA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DBA48u;
    // 0x4dba48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4dba4c: 0x0  nop
    ctx->pc = 0x4dba4cu;
    // NOP
    // 0x4dba50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4dba54: 0x0  nop
    ctx->pc = 0x4dba54u;
    // NOP
    // 0x4dba58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4dba5c: 0x0  nop
    ctx->pc = 0x4dba5cu;
    // NOP
    // 0x4dba60: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x4dba60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x4dba64: 0x0  nop
    ctx->pc = 0x4dba64u;
    // NOP
    // 0x4dba68: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4dba68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4dba6c: 0x0  nop
    ctx->pc = 0x4dba6cu;
    // NOP
    // 0x4dba70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4dba70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4dba74: 0x0  nop
    ctx->pc = 0x4dba74u;
    // NOP
    ctx->pc = 0x4dba78u;
}
