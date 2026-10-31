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

// Function: sub_00202CC8
// Address: 0x202cc8 - 0x202ce0
void sub_00202CC8_0x202cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202CC8_0x202cc8");
#endif

    ctx->pc = 0x202cc8u;

    // 0x202cc8: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x202cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x202ccc: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x202cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x202cd0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x202cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x202CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CD4u;
        // 0x202cd8: 0x24420044  addiu       $v0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202CDCu;
    // 0x202cdc: 0x0  nop
    ctx->pc = 0x202cdcu;
    // NOP
    ctx->pc = 0x202ce0u;
}
