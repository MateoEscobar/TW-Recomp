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

// Function: sub_0046D708
// Address: 0x46d708 - 0x46d748
void sub_0046D708_0x46d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D708_0x46d708");
#endif

    switch (ctx->pc) {
        case 0x46d718u: goto label_46d718;
        default: break;
    }

    ctx->pc = 0x46d708u;

    // 0x46d708: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x46d708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d70c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x46d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x46d710: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x46d710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d714: 0x0  nop
    ctx->pc = 0x46d714u;
    // NOP
label_46d718:
    // 0x46d718: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46D718u;
    {
        const bool branch_taken_0x46d718 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D718u;
        // 0x46d71c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d718) {
            ctx->pc = 0x46D738u;
            goto label_46d738;
        }
    }
    ctx->pc = 0x46D720u;
    // 0x46d720: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x46d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x46d724: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x46d724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x46d728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46d72c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d730: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x46D730u;
    {
        const bool branch_taken_0x46d730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x46D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D730u;
        // 0x46d734: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d730) {
            ctx->pc = 0x46D718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d718;
        }
    }
    ctx->pc = 0x46D738u;
label_46d738:
    // 0x46d738: 0x3e00008  jr          $ra
    ctx->pc = 0x46D738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D738u;
        // 0x46d73c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D740u;
    // 0x46d740: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46d744: 0x0  nop
    ctx->pc = 0x46d744u;
    // NOP
    ctx->pc = 0x46d748u;
}
