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

// Function: sub_00414338
// Address: 0x414338 - 0x414398
void sub_00414338_0x414338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414338_0x414338");
#endif

    switch (ctx->pc) {
        case 0x414358u: goto label_414358;
        case 0x414370u: goto label_414370;
        default: break;
    }

    ctx->pc = 0x414338u;

    // 0x414338: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x414338u;
    {
        const bool branch_taken_0x414338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414338u;
        // 0x41433c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414338) {
            ctx->pc = 0x41438Cu;
            goto label_41438c;
        }
    }
    ctx->pc = 0x414340u;
    // 0x414340: 0x8c434824  lw          $v1, 0x4824($v0)
    ctx->pc = 0x414340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18468)));
    // 0x414344: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x414344u;
    {
        const bool branch_taken_0x414344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x414348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414344u;
        // 0x414348: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414344) {
            ctx->pc = 0x414360u;
            goto label_414360;
        }
    }
    ctx->pc = 0x41434Cu;
    // 0x41434c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x414350: 0x3e00008  jr          $ra
    ctx->pc = 0x414350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414350u;
        // 0x414354: 0xac444828  sw          $a0, 0x4828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414358u;
label_414358:
    // 0x414358: 0x3e00008  jr          $ra
    ctx->pc = 0x414358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414358u;
        // 0x41435c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414360u;
label_414360:
    // 0x414360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x414360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414364: 0x2443d6e0  addiu       $v1, $v0, -0x2920
    ctx->pc = 0x414364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x414368: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x414368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41436c: 0x0  nop
    ctx->pc = 0x41436cu;
    // NOP
label_414370:
    // 0x414370: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x414370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x414374: 0x1044fff8  beq         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x414374u;
    {
        const bool branch_taken_0x414374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x414378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414374u;
        // 0x414378: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414374) {
            ctx->pc = 0x414358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414358;
        }
    }
    ctx->pc = 0x41437Cu;
    // 0x41437c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x41437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x414380: 0x2ca20064  sltiu       $v0, $a1, 0x64
    ctx->pc = 0x414380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x414384: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x414384u;
    {
        const bool branch_taken_0x414384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414384u;
        // 0x414388: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414384) {
            ctx->pc = 0x414370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414370;
        }
    }
    ctx->pc = 0x41438Cu;
label_41438c:
    // 0x41438c: 0x3e00008  jr          $ra
    ctx->pc = 0x41438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414394u;
    // 0x414394: 0x0  nop
    ctx->pc = 0x414394u;
    // NOP
    ctx->pc = 0x414398u;
}
