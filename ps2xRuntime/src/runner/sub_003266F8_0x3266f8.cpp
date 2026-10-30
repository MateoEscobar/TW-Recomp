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

// Function: sub_003266F8
// Address: 0x3266f8 - 0x326740
void sub_003266F8_0x3266f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003266F8_0x3266f8");
#endif

    ctx->pc = 0x3266f8u;

    // 0x3266f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3266f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3266fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3266fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326700: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x326700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x326704: 0x3c04fe00  lui         $a0, 0xFE00
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65024 << 16));
    // 0x326708: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x326708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x32670c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x32670cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x326710: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x326710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x326714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x326718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32671c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x32671cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x326720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x326720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x326724: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x326724u;
    {
        const bool branch_taken_0x326724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x326728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326724u;
        // 0x326728: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326724) {
            ctx->pc = 0x326734u;
            goto label_326734;
        }
    }
    ctx->pc = 0x32672Cu;
    // 0x32672c: 0x3e00008  jr          $ra
    ctx->pc = 0x32672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32672Cu;
        // 0x326730: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326734u;
label_326734:
    // 0x326734: 0x3e00008  jr          $ra
    ctx->pc = 0x326734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326734u;
        // 0x326738: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32673Cu;
    // 0x32673c: 0x0  nop
    ctx->pc = 0x32673cu;
    // NOP
    ctx->pc = 0x326740u;
}
