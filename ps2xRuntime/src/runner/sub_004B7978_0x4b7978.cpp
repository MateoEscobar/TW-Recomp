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

// Function: sub_004B7978
// Address: 0x4b7978 - 0x4b7998
void sub_004B7978_0x4b7978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7978_0x4b7978");
#endif

    switch (ctx->pc) {
        case 0x4b7988u: goto label_4b7988;
        default: break;
    }

    ctx->pc = 0x4b7978u;

    // 0x4b7978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b797c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b7980: 0xc10f5e2  jal         func_43D788
    ctx->pc = 0x4B7980u;
    SET_GPR_U32(ctx, 31, 0x4B7988u);
    ctx->pc = 0x4B7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7980u;
    // 0x4b7984: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D788u, 0x4B7980u, 0x4B7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7988u;
label_4b7988:
    // 0x4b7988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b7988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b798c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B798Cu;
        // 0x4b7990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7994u;
    // 0x4b7994: 0x0  nop
    ctx->pc = 0x4b7994u;
    // NOP
    ctx->pc = 0x4b7998u;
}
