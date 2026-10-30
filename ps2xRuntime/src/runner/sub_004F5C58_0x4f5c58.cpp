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

// Function: sub_004F5C58
// Address: 0x4f5c58 - 0x4f5c78
void sub_004F5C58_0x4f5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5C58_0x4f5c58");
#endif

    switch (ctx->pc) {
        case 0x4f5c68u: goto label_4f5c68;
        default: break;
    }

    ctx->pc = 0x4f5c58u;

    // 0x4f5c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f5c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f5c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5c60: 0xc0e130e  jal         func_384C38
    ctx->pc = 0x4F5C60u;
    SET_GPR_U32(ctx, 31, 0x4F5C68u);
    ctx->pc = 0x4F5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5C60u;
    // 0x4f5c64: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C38u, 0x4F5C60u, 0x4F5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5C68u;
label_4f5c68:
    // 0x4f5c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C6Cu;
        // 0x4f5c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5C74u;
    // 0x4f5c74: 0x0  nop
    ctx->pc = 0x4f5c74u;
    // NOP
    ctx->pc = 0x4f5c78u;
}
