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

// Function: sub_002EC1D8
// Address: 0x2ec1d8 - 0x2ec200
void sub_002EC1D8_0x2ec1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC1D8_0x2ec1d8");
#endif

    switch (ctx->pc) {
        case 0x2ec1f0u: goto label_2ec1f0;
        default: break;
    }

    ctx->pc = 0x2ec1d8u;

    // 0x2ec1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec1dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec1e0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x2ec1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x2ec1e4: 0xdfa60000  ld          $a2, 0x0($sp)
    ctx->pc = 0x2ec1e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec1e8: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2EC1E8u;
    SET_GPR_U32(ctx, 31, 0x2EC1F0u);
    ctx->pc = 0x2EC1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1E8u;
    // 0x2ec1ec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2EC1E8u, 0x2EC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1F0u;
label_2ec1f0:
    // 0x2ec1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1F4u;
        // 0x2ec1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC1FCu;
    // 0x2ec1fc: 0x0  nop
    ctx->pc = 0x2ec1fcu;
    // NOP
    ctx->pc = 0x2ec200u;
}
