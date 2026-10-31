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

// Function: sub_001FE2E8
// Address: 0x1fe2e8 - 0x1fe300
void sub_001FE2E8_0x1fe2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2E8_0x1fe2e8");
#endif

    ctx->pc = 0x1fe2e8u;

    // 0x1fe2e8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe2ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fe2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fe2f0: 0x2442ee90  addiu       $v0, $v0, -0x1170
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x1fe2f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fe2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fe2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2F8u;
        // 0x1fe2fc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE300u;
}
