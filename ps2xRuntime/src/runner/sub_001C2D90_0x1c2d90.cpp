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

// Function: sub_001C2D90
// Address: 0x1c2d90 - 0x1c2dd0
void sub_001C2D90_0x1c2d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2D90_0x1c2d90");
#endif

    switch (ctx->pc) {
        case 0x1c2db0u: goto label_1c2db0;
        case 0x1c2dc0u: goto label_1c2dc0;
        default: break;
    }

    ctx->pc = 0x1c2d90u;

    // 0x1c2d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2d94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2d9c: 0x8c820440  lw          $v0, 0x440($a0)
    ctx->pc = 0x1c2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1088)));
    // 0x1c2da0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2DA0u;
    {
        const bool branch_taken_0x1c2da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2da0) {
            ctx->pc = 0x1C2DB8u;
            goto label_1c2db8;
        }
    }
    ctx->pc = 0x1C2DA8u;
    // 0x1c2da8: 0xc070a8c  jal         func_1C2A30
    ctx->pc = 0x1C2DA8u;
    SET_GPR_U32(ctx, 31, 0x1C2DB0u);
    ctx->pc = 0x1C2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DA8u;
    // 0x1c2dac: 0x24840650  addiu       $a0, $a0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2A30u, 0x1C2DA8u, 0x1C2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DB0u;
label_1c2db0:
    // 0x1c2db0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2DB0u;
    {
        const bool branch_taken_0x1c2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DB0u;
        // 0x1c2db4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2db0) {
            ctx->pc = 0x1C2DC4u;
            goto label_1c2dc4;
        }
    }
    ctx->pc = 0x1C2DB8u;
label_1c2db8:
    // 0x1c2db8: 0xc079dd4  jal         func_1E7750
    ctx->pc = 0x1C2DB8u;
    SET_GPR_U32(ctx, 31, 0x1C2DC0u);
    ctx->pc = 0x1E7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7750u, 0x1C2DB8u, 0x1C2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DC0u;
label_1c2dc0:
    // 0x1c2dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2dc4:
    // 0x1c2dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DC4u;
        // 0x1c2dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2DCCu;
    // 0x1c2dcc: 0x0  nop
    ctx->pc = 0x1c2dccu;
    // NOP
    ctx->pc = 0x1c2dd0u;
}
