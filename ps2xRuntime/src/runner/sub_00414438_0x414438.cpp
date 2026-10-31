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

// Function: sub_00414438
// Address: 0x414438 - 0x414480
void sub_00414438_0x414438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414438_0x414438");
#endif

    switch (ctx->pc) {
        case 0x414450u: goto label_414450;
        default: break;
    }

    ctx->pc = 0x414438u;

    // 0x414438: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x414438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x41443c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41443cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414440: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x414440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x414444: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x414444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x414448: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x414448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41444c: 0x0  nop
    ctx->pc = 0x41444cu;
    // NOP
label_414450:
    // 0x414450: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x414450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x414454: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x414454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x414458: 0x0  nop
    ctx->pc = 0x414458u;
    // NOP
    // 0x41445c: 0x0  nop
    ctx->pc = 0x41445cu;
    // NOP
    // 0x414460: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x414460u;
    {
        const bool branch_taken_0x414460 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x414464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414460u;
        // 0x414464: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414460) {
            ctx->pc = 0x414450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414450;
        }
    }
    ctx->pc = 0x414468u;
    // 0x414468: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x414468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x41446c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41446cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414470: 0x24634b98  addiu       $v1, $v1, 0x4B98
    ctx->pc = 0x414470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19352));
    // 0x414474: 0x3e00008  jr          $ra
    ctx->pc = 0x414474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414474u;
        // 0x414478: 0xac8300f0  sw          $v1, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41447Cu;
    // 0x41447c: 0x0  nop
    ctx->pc = 0x41447cu;
    // NOP
    ctx->pc = 0x414480u;
}
