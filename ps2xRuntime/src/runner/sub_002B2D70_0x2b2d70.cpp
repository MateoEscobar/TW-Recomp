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

// Function: sub_002B2D70
// Address: 0x2b2d70 - 0x2b2dd8
void sub_002B2D70_0x2b2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2D70_0x2b2d70");
#endif

    switch (ctx->pc) {
        case 0x2b2d90u: goto label_2b2d90;
        case 0x2b2d9cu: goto label_2b2d9c;
        case 0x2b2db4u: goto label_2b2db4;
        case 0x2b2dc0u: goto label_2b2dc0;
        default: break;
    }

    ctx->pc = 0x2b2d70u;

    // 0x2b2d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2d84: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b2d84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2d88: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B2D88u;
    SET_GPR_U32(ctx, 31, 0x2B2D90u);
    ctx->pc = 0x2B2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D88u;
    // 0x2b2d8c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B2D88u, 0x2B2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D90u;
label_2b2d90:
    // 0x2b2d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d94: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B2D94u;
    SET_GPR_U32(ctx, 31, 0x2B2D9Cu);
    ctx->pc = 0x2B2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D94u;
    // 0x2b2d98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B2D94u, 0x2B2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D9Cu;
label_2b2d9c:
    // 0x2b2d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2da0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2DA0u;
    {
        const bool branch_taken_0x2b2da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DA0u;
        // 0x2b2da4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2da0) {
            ctx->pc = 0x2B2DC8u;
            goto label_2b2dc8;
        }
    }
    ctx->pc = 0x2B2DA8u;
    // 0x2b2da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2dac: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B2DACu;
    SET_GPR_U32(ctx, 31, 0x2B2DB4u);
    ctx->pc = 0x2B2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DACu;
    // 0x2b2db0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B2DACu, 0x2B2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DB4u;
label_2b2db4:
    // 0x2b2db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2db8: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2B2DB8u;
    SET_GPR_U32(ctx, 31, 0x2B2DC0u);
    ctx->pc = 0x2B2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DB8u;
    // 0x2b2dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2B2DB8u, 0x2B2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DC0u;
label_2b2dc0:
    // 0x2b2dc0: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x2b2dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2dc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2dc8:
    // 0x2b2dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DD0u;
        // 0x2b2dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2DD8u;
}
