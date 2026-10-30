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

// Function: sub_004D9F20
// Address: 0x4d9f20 - 0x4d9f38
void sub_004D9F20_0x4d9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9F20_0x4d9f20");
#endif

    switch (ctx->pc) {
        case 0x4d9f28u: goto label_4d9f28;
        default: break;
    }

    ctx->pc = 0x4d9f20u;

    // 0x4d9f20: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4D9F20u;
    SET_GPR_U32(ctx, 31, 0x4D9F28u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4D9F20u, 0x4D9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9F28u;
label_4d9f28:
    // 0x4d9f28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d9f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9F2Cu;
        // 0x4d9f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9F34u;
    // 0x4d9f34: 0x0  nop
    ctx->pc = 0x4d9f34u;
    // NOP
    ctx->pc = 0x4d9f38u;
}
