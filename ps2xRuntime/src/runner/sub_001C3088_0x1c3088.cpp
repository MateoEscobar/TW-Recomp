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

// Function: sub_001C3088
// Address: 0x1c3088 - 0x1c30a0
void sub_001C3088_0x1c3088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3088_0x1c3088");
#endif

    ctx->pc = 0x1c3088u;

    // 0x1c3088: 0x24020a50  addiu       $v0, $zero, 0xA50
    ctx->pc = 0x1c3088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
    // 0x1c308c: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1c308cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c3090: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c3090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c3094: 0xac8001bc  sw          $zero, 0x1BC($a0)
    ctx->pc = 0x1c3094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 0));
    // 0x1c3098: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3098u;
        // 0x1c309c: 0xac80064c  sw          $zero, 0x64C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30A0u;
}
