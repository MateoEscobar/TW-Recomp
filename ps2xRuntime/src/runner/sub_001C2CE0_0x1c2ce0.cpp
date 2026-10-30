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

// Function: sub_001C2CE0
// Address: 0x1c2ce0 - 0x1c2d18
void sub_001C2CE0_0x1c2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2CE0_0x1c2ce0");
#endif

    switch (ctx->pc) {
        case 0x1c2d08u: goto label_1c2d08;
        default: break;
    }

    ctx->pc = 0x1c2ce0u;

    // 0x1c2ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2ce4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2cec: 0x8c820440  lw          $v0, 0x440($a0)
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1088)));
    // 0x1c2cf0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2CF0u;
    {
        const bool branch_taken_0x1c2cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2cf0) {
            ctx->pc = 0x1C2D00u;
            goto label_1c2d00;
        }
    }
    ctx->pc = 0x1C2CF8u;
    // 0x1c2cf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2CF8u;
    {
        const bool branch_taken_0x1c2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CF8u;
        // 0x1c2cfc: 0x8c8201bc  lw          $v0, 0x1BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cf8) {
            ctx->pc = 0x1C2D08u;
            goto label_1c2d08;
        }
    }
    ctx->pc = 0x1C2D00u;
label_1c2d00:
    // 0x1c2d00: 0xc070a62  jal         func_1C2988
    ctx->pc = 0x1C2D00u;
    SET_GPR_U32(ctx, 31, 0x1C2D08u);
    ctx->pc = 0x1C2D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D00u;
    // 0x1c2d04: 0x24840650  addiu       $a0, $a0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2988u, 0x1C2D00u, 0x1C2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D08u;
label_1c2d08:
    // 0x1c2d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D0Cu;
        // 0x1c2d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D14u;
    // 0x1c2d14: 0x0  nop
    ctx->pc = 0x1c2d14u;
    // NOP
    ctx->pc = 0x1c2d18u;
}
