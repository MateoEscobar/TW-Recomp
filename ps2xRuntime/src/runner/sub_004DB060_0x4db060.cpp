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

// Function: sub_004DB060
// Address: 0x4db060 - 0x4db088
void sub_004DB060_0x4db060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB060_0x4db060");
#endif

    ctx->pc = 0x4db060u;

    // 0x4db060: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4db064: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4db064u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4db068: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x4db068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x4db06c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4db06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4db070: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB070u;
        // 0x4db074: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB078u;
    // 0x4db078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4db078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4db07c: 0x0  nop
    ctx->pc = 0x4db07cu;
    // NOP
    // 0x4db080: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4db080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x4db084: 0x0  nop
    ctx->pc = 0x4db084u;
    // NOP
    ctx->pc = 0x4db088u;
}
