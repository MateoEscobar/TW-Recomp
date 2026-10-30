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

// Function: sub_001B3D58
// Address: 0x1b3d58 - 0x1b3d80
void sub_001B3D58_0x1b3d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D58_0x1b3d58");
#endif

    switch (ctx->pc) {
        case 0x1b3d70u: goto label_1b3d70;
        default: break;
    }

    ctx->pc = 0x1b3d58u;

    // 0x1b3d58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b3d5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3d60: 0x344234a0  ori         $v0, $v0, 0x34A0
    ctx->pc = 0x1b3d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13472);
    // 0x1b3d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3d68: 0xc068992  jal         func_1A2648
    ctx->pc = 0x1B3D68u;
    SET_GPR_U32(ctx, 31, 0x1B3D70u);
    ctx->pc = 0x1B3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D68u;
    // 0x1b3d6c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1B3D68u, 0x1B3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D70u;
label_1b3d70:
    // 0x1b3d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D74u;
        // 0x1b3d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3D7Cu;
    // 0x1b3d7c: 0x0  nop
    ctx->pc = 0x1b3d7cu;
    // NOP
    ctx->pc = 0x1b3d80u;
}
