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

// Function: sub_0013B6F8
// Address: 0x13b6f8 - 0x13b770
void sub_0013B6F8_0x13b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B6F8_0x13b6f8");
#endif

    switch (ctx->pc) {
        case 0x13b718u: goto label_13b718;
        case 0x13b720u: goto label_13b720;
        case 0x13b738u: goto label_13b738;
        default: break;
    }

    ctx->pc = 0x13b6f8u;

    // 0x13b6f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b6fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x13b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x13b700: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13b704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b708: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13b708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b710: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x13b714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b718:
    // 0x13b718: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x13B718u;
    SET_GPR_U32(ctx, 31, 0x13B720u);
    ctx->pc = 0x13B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B718u;
    // 0x13b71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B718u, 0x13B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B720u;
label_13b720:
    // 0x13b720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B728u;
    {
        const bool branch_taken_0x13b728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B728u;
        // 0x13b72c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b728) {
            ctx->pc = 0x13B740u;
            goto label_13b740;
        }
    }
    ctx->pc = 0x13B730u;
    // 0x13b730: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x13B730u;
    SET_GPR_U32(ctx, 31, 0x13B738u);
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B730u, 0x13B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B738u;
label_13b738:
    // 0x13b738: 0xa04003eb  sb          $zero, 0x3EB($v0)
    ctx->pc = 0x13b738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1003), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b73c: 0xac4003e0  sw          $zero, 0x3E0($v0)
    ctx->pc = 0x13b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 992), GPR_U32(ctx, 0));
label_13b740:
    // 0x13b740: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b744: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x13b744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13b748: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B748u;
    {
        const bool branch_taken_0x13b748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B748u;
        // 0x13b74c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b748) {
            ctx->pc = 0x13B754u;
            goto label_13b754;
        }
    }
    ctx->pc = 0x13B750u;
    // 0x13b750: 0xa04001b4  sb          $zero, 0x1B4($v0)
    ctx->pc = 0x13b750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 436), (uint8_t)GPR_U32(ctx, 0));
label_13b754:
    // 0x13b754: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13B754u;
    {
        const bool branch_taken_0x13b754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B754u;
        // 0x13b758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b754) {
            ctx->pc = 0x13B718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b718;
        }
    }
    ctx->pc = 0x13B75Cu;
    // 0x13b75c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13b75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b768: 0x3e00008  jr          $ra
    ctx->pc = 0x13B768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B768u;
        // 0x13b76c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B770u;
}
