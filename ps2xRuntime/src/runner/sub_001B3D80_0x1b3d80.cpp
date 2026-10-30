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

// Function: sub_001B3D80
// Address: 0x1b3d80 - 0x1b3da8
void sub_001B3D80_0x1b3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D80_0x1b3d80");
#endif

    switch (ctx->pc) {
        case 0x1b3d98u: goto label_1b3d98;
        default: break;
    }

    ctx->pc = 0x1b3d80u;

    // 0x1b3d80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b3d84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3d88: 0x344234a0  ori         $v0, $v0, 0x34A0
    ctx->pc = 0x1b3d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13472);
    // 0x1b3d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3d90: 0xc06dc3a  jal         func_1B70E8
    ctx->pc = 0x1B3D90u;
    SET_GPR_U32(ctx, 31, 0x1B3D98u);
    ctx->pc = 0x1B3D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D90u;
    // 0x1b3d94: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E8u, 0x1B3D90u, 0x1B3D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D98u;
label_1b3d98:
    // 0x1b3d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D9Cu;
        // 0x1b3da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3DA4u;
    // 0x1b3da4: 0x0  nop
    ctx->pc = 0x1b3da4u;
    // NOP
    ctx->pc = 0x1b3da8u;
}
