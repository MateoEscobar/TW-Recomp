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

// Function: sub_001D45F8
// Address: 0x1d45f8 - 0x1d4628
void sub_001D45F8_0x1d45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D45F8_0x1d45f8");
#endif

    switch (ctx->pc) {
        case 0x1d4608u: goto label_1d4608;
        default: break;
    }

    ctx->pc = 0x1d45f8u;

    // 0x1d45f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d45f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45fc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D45FCu;
    {
        const bool branch_taken_0x1d45fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45FCu;
        // 0x1d4600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45fc) {
            ctx->pc = 0x1D4620u;
            goto label_1d4620;
        }
    }
    ctx->pc = 0x1D4604u;
    // 0x1d4604: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x1d4604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_1d4608:
    // 0x1d4608: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d460c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d460cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d4610: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d4610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d4614: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x1d4614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d4618: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4618u;
    {
        const bool branch_taken_0x1d4618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4618u;
        // 0x1d461c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4618) {
            ctx->pc = 0x1D4608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4608;
        }
    }
    ctx->pc = 0x1D4620u;
label_1d4620:
    // 0x1d4620: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4620u;
        // 0x1d4624: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4628u;
}
