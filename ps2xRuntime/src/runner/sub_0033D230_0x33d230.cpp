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

// Function: sub_0033D230
// Address: 0x33d230 - 0x33d278
void sub_0033D230_0x33d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D230_0x33d230");
#endif

    switch (ctx->pc) {
        case 0x33d240u: goto label_33d240;
        default: break;
    }

    ctx->pc = 0x33d230u;

    // 0x33d230: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33d230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x33d234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33d234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d238: 0x3442c720  ori         $v0, $v0, 0xC720
    ctx->pc = 0x33d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50976);
    // 0x33d23c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33d240:
    // 0x33d240: 0x94830032  lhu         $v1, 0x32($a0)
    ctx->pc = 0x33d240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x33d244: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33d248: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D248u;
    {
        const bool branch_taken_0x33d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D248u;
        // 0x33d24c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d248) {
            ctx->pc = 0x33D260u;
            goto label_33d260;
        }
    }
    ctx->pc = 0x33D250u;
    // 0x33d250: 0x3463000b  ori         $v1, $v1, 0xB
    ctx->pc = 0x33d250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x33d254: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33d254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d258: 0x3e00008  jr          $ra
    ctx->pc = 0x33D258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D258u;
        // 0x33d25c: 0xa4830032  sh          $v1, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D260u;
label_33d260:
    // 0x33d260: 0x28a20024  slti        $v0, $a1, 0x24
    ctx->pc = 0x33d260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x33d264: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x33D264u;
    {
        const bool branch_taken_0x33d264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D264u;
        // 0x33d268: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d264) {
            ctx->pc = 0x33D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d240;
        }
    }
    ctx->pc = 0x33D26Cu;
    // 0x33d26c: 0x3e00008  jr          $ra
    ctx->pc = 0x33D26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D26Cu;
        // 0x33d270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D274u;
    // 0x33d274: 0x0  nop
    ctx->pc = 0x33d274u;
    // NOP
    ctx->pc = 0x33d278u;
}
