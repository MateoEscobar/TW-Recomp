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

// Function: sub_001F8EF8
// Address: 0x1f8ef8 - 0x1f8f18
void sub_001F8EF8_0x1f8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8EF8_0x1f8ef8");
#endif

    switch (ctx->pc) {
        case 0x1f8f08u: goto label_1f8f08;
        default: break;
    }

    ctx->pc = 0x1f8ef8u;

    // 0x1f8ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8f00: 0xc07e170  jal         func_1F85C0
    ctx->pc = 0x1F8F00u;
    SET_GPR_U32(ctx, 31, 0x1F8F08u);
    ctx->pc = 0x1F8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F00u;
    // 0x1f8f04: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F85C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85C0u, 0x1F8F00u, 0x1F8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F08u;
label_1f8f08:
    // 0x1f8f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F0Cu;
        // 0x1f8f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8F14u;
    // 0x1f8f14: 0x0  nop
    ctx->pc = 0x1f8f14u;
    // NOP
    ctx->pc = 0x1f8f18u;
}
