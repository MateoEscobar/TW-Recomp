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

// Function: sub_00329558
// Address: 0x329558 - 0x3295e0
void sub_00329558_0x329558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329558_0x329558");
#endif

    switch (ctx->pc) {
        case 0x329588u: goto label_329588;
        default: break;
    }

    ctx->pc = 0x329558u;

    // 0x329558: 0x84830032  lh          $v1, 0x32($a0)
    ctx->pc = 0x329558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x32955c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x32955Cu;
    {
        const bool branch_taken_0x32955c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x329560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32955Cu;
        // 0x329560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32955c) {
            ctx->pc = 0x3295D8u;
            goto label_3295d8;
        }
    }
    ctx->pc = 0x329564u;
    // 0x329564: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x329564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x329568: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x329568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32956c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x32956cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329570: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x329570u;
    {
        const bool branch_taken_0x329570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329570u;
        // 0x329574: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329570) {
            ctx->pc = 0x3295D8u;
            goto label_3295d8;
        }
    }
    ctx->pc = 0x329578u;
    // 0x329578: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x329578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32957c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32957cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x329580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329584: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x329584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_329588:
    // 0x329588: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x329588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32958c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x32958cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329590: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x329590u;
    {
        const bool branch_taken_0x329590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329590u;
        // 0x329594: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329590) {
            ctx->pc = 0x3295B0u;
            goto label_3295b0;
        }
    }
    ctx->pc = 0x329598u;
    // 0x329598: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x32959c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32959Cu;
    {
        const bool branch_taken_0x32959c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3295A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32959Cu;
        // 0x3295a0: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32959c) {
            ctx->pc = 0x3295B4u;
            goto label_3295b4;
        }
    }
    ctx->pc = 0x3295A4u;
    // 0x3295a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3295a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3295a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3295A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295A8u;
        // 0x3295ac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3295A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3295B0u;
label_3295b0:
    // 0x3295b0: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x3295b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_3295b4:
    // 0x3295b4: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x3295b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3295b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3295B8u;
    {
        const bool branch_taken_0x3295b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295B8u;
        // 0x3295bc: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295b8) {
            ctx->pc = 0x3295D8u;
            goto label_3295d8;
        }
    }
    ctx->pc = 0x3295C0u;
    // 0x3295c0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x3295c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295c4: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x3295c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x3295c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3295c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3295cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3295ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3295d0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3295D0u;
    {
        const bool branch_taken_0x3295d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295D0u;
        // 0x3295d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295d0) {
            ctx->pc = 0x329588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329588;
        }
    }
    ctx->pc = 0x3295D8u;
label_3295d8:
    // 0x3295d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3295D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295D8u;
        // 0x3295dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3295D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3295E0u;
}
