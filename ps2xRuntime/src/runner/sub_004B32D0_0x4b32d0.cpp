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

// Function: sub_004B32D0
// Address: 0x4b32d0 - 0x4b32e8
void sub_004B32D0_0x4b32d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B32D0_0x4b32d0");
#endif

    switch (ctx->pc) {
        case 0x4b32d8u: goto label_4b32d8;
        default: break;
    }

    ctx->pc = 0x4b32d0u;

    // 0x4b32d0: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4B32D0u;
    SET_GPR_U32(ctx, 31, 0x4B32D8u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4B32D0u, 0x4B32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B32D8u;
label_4b32d8:
    // 0x4b32d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b32d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b32dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B32DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32DCu;
        // 0x4b32e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B32DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B32E4u;
    // 0x4b32e4: 0x0  nop
    ctx->pc = 0x4b32e4u;
    // NOP
    ctx->pc = 0x4b32e8u;
}
