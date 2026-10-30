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

// Function: sub_0010F138
// Address: 0x10f138 - 0x10f188
void sub_0010F138_0x10f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F138_0x10f138");
#endif

    switch (ctx->pc) {
        case 0x10f160u: goto label_10f160;
        default: break;
    }

    ctx->pc = 0x10f138u;

    // 0x10f138: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f13c: 0x8c478678  lw          $a3, -0x7988($v0)
    ctx->pc = 0x10f13cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x598678u));
    // 0x10f140: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x10F140u;
    {
        const bool branch_taken_0x10f140 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F140u;
        // 0x10f144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f140) {
            ctx->pc = 0x10F180u;
            goto label_10f180;
        }
    }
    ctx->pc = 0x10F148u;
    // 0x10f148: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f14c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f150: 0x8c458674  lw          $a1, -0x798C($v0)
    ctx->pc = 0x10f150u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x598674u));
    // 0x10f154: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x10f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f158: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10f15c: 0x0  nop
    ctx->pc = 0x10f15cu;
    // NOP
label_10f160:
    // 0x10f160: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f164: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F164u;
    {
        const bool branch_taken_0x10f164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F164u;
        // 0x10f168: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f164) {
            ctx->pc = 0x10F174u;
            goto label_10f174;
        }
    }
    ctx->pc = 0x10F16Cu;
    // 0x10f16c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F16Cu;
        // 0x10f170: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F174u;
label_10f174:
    // 0x10f174: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x10f174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10f178: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10F178u;
    {
        const bool branch_taken_0x10f178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F178u;
        // 0x10f17c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f178) {
            ctx->pc = 0x10F160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f160;
        }
    }
    ctx->pc = 0x10F180u;
label_10f180:
    // 0x10f180: 0x3e00008  jr          $ra
    ctx->pc = 0x10F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F180u;
        // 0x10f184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F188u;
}
