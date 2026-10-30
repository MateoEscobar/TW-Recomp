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

// Function: sub_001C2D50
// Address: 0x1c2d50 - 0x1c2d90
void sub_001C2D50_0x1c2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2D50_0x1c2d50");
#endif

    switch (ctx->pc) {
        case 0x1c2d70u: goto label_1c2d70;
        case 0x1c2d80u: goto label_1c2d80;
        default: break;
    }

    ctx->pc = 0x1c2d50u;

    // 0x1c2d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2d54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2d5c: 0x8c820440  lw          $v0, 0x440($a0)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1088)));
    // 0x1c2d60: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2D60u;
    {
        const bool branch_taken_0x1c2d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2d60) {
            ctx->pc = 0x1C2D78u;
            goto label_1c2d78;
        }
    }
    ctx->pc = 0x1C2D68u;
    // 0x1c2d68: 0xc070a84  jal         func_1C2A10
    ctx->pc = 0x1C2D68u;
    SET_GPR_U32(ctx, 31, 0x1C2D70u);
    ctx->pc = 0x1C2D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D68u;
    // 0x1c2d6c: 0x24840650  addiu       $a0, $a0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2A10u, 0x1C2D68u, 0x1C2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D70u;
label_1c2d70:
    // 0x1c2d70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2D70u;
    {
        const bool branch_taken_0x1c2d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D70u;
        // 0x1c2d74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d70) {
            ctx->pc = 0x1C2D84u;
            goto label_1c2d84;
        }
    }
    ctx->pc = 0x1C2D78u;
label_1c2d78:
    // 0x1c2d78: 0xc079d1a  jal         func_1E7468
    ctx->pc = 0x1C2D78u;
    SET_GPR_U32(ctx, 31, 0x1C2D80u);
    ctx->pc = 0x1E7468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7468u, 0x1C2D78u, 0x1C2D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D80u;
label_1c2d80:
    // 0x1c2d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2d84:
    // 0x1c2d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D84u;
        // 0x1c2d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D8Cu;
    // 0x1c2d8c: 0x0  nop
    ctx->pc = 0x1c2d8cu;
    // NOP
    ctx->pc = 0x1c2d90u;
}
