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

// Function: sub_001D45C8
// Address: 0x1d45c8 - 0x1d45f8
void sub_001D45C8_0x1d45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D45C8_0x1d45c8");
#endif

    switch (ctx->pc) {
        case 0x1d45d8u: goto label_1d45d8;
        default: break;
    }

    ctx->pc = 0x1d45c8u;

    // 0x1d45c8: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x1d45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1d45cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d45ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d45d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45d4: 0x0  nop
    ctx->pc = 0x1d45d4u;
    // NOP
label_1d45d8:
    // 0x1d45d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d45dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d45e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d45e4: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1d45e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d45e8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D45E8u;
    {
        const bool branch_taken_0x1d45e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45E8u;
        // 0x1d45ec: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45e8) {
            ctx->pc = 0x1D45D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d45d8;
        }
    }
    ctx->pc = 0x1D45F0u;
    // 0x1d45f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D45F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45F0u;
        // 0x1d45f4: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D45F8u;
}
