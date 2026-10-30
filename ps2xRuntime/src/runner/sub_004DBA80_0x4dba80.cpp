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

// Function: sub_004DBA80
// Address: 0x4dba80 - 0x4dba98
void sub_004DBA80_0x4dba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBA80_0x4dba80");
#endif

    ctx->pc = 0x4dba80u;

    // 0x4dba80: 0x3e00008  jr          $ra
    ctx->pc = 0x4DBA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBA80u;
        // 0x4dba84: 0x24820230  addiu       $v0, $a0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DBA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DBA88u;
    // 0x4dba88: 0xac820258  sw          $v0, 0x258($a0)
    ctx->pc = 0x4dba88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 2));
    // 0x4dba8c: 0x0  nop
    ctx->pc = 0x4dba8cu;
    // NOP
    // 0x4dba90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4dba94: 0x0  nop
    ctx->pc = 0x4dba94u;
    // NOP
    ctx->pc = 0x4dba98u;
}
