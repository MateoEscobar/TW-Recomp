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

// Function: sub_0037CCE0
// Address: 0x37cce0 - 0x37cd00
void sub_0037CCE0_0x37cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CCE0_0x37cce0");
#endif

    switch (ctx->pc) {
        case 0x37ccf0u: goto label_37ccf0;
        default: break;
    }

    ctx->pc = 0x37cce0u;

    // 0x37cce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cce8: 0xc108db4  jal         func_4236D0
    ctx->pc = 0x37CCE8u;
    SET_GPR_U32(ctx, 31, 0x37CCF0u);
    ctx->pc = 0x4236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4236D0u, 0x37CCE8u, 0x37CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCF0u;
label_37ccf0:
    // 0x37ccf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ccf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ccf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ccf8: 0x3e00008  jr          $ra
    ctx->pc = 0x37CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCF8u;
        // 0x37ccfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CD00u;
}
