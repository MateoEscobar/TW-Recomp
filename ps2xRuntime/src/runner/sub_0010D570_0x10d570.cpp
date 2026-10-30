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

// Function: sub_0010D570
// Address: 0x10d570 - 0x10d590
void sub_0010D570_0x10d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D570_0x10d570");
#endif

    ctx->pc = 0x10d570u;

    // 0x10d570: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x10d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10d574: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x10d574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10d578: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x10d578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10d57c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D57Cu;
        // 0x10d580: 0xac86008c  sw          $a2, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D584u;
    // 0x10d584: 0x0  nop
    ctx->pc = 0x10d584u;
    // NOP
    // 0x10d588: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10d588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d58c: 0x0  nop
    ctx->pc = 0x10d58cu;
    // NOP
    ctx->pc = 0x10d590u;
}
