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

// Function: sub_00443390
// Address: 0x443390 - 0x4433c8
void sub_00443390_0x443390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443390_0x443390");
#endif

    switch (ctx->pc) {
        case 0x4433a0u: goto label_4433a0;
        default: break;
    }

    ctx->pc = 0x443390u;

    // 0x443390: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x443390u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x443394: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x443394u;
    {
        const bool branch_taken_0x443394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x443398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443394u;
        // 0x443398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443394) {
            ctx->pc = 0x4433C0u;
            goto label_4433c0;
        }
    }
    ctx->pc = 0x44339Cu;
    // 0x44339c: 0x0  nop
    ctx->pc = 0x44339cu;
    // NOP
label_4433a0:
    // 0x4433a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4433a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4433a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4433a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4433a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4433a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4433ac: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x4433acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4433b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4433b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4433b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4433b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4433b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4433B8u;
    {
        const bool branch_taken_0x4433b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4433b8) {
            ctx->pc = 0x4433A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4433a0;
        }
    }
    ctx->pc = 0x4433C0u;
label_4433c0:
    // 0x4433c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4433C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4433C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433C0u;
        // 0x4433c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4433C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4433C8u;
}
