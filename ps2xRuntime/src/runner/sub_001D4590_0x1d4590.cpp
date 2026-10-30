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

// Function: sub_001D4590
// Address: 0x1d4590 - 0x1d45c8
void sub_001D4590_0x1d4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4590_0x1d4590");
#endif

    switch (ctx->pc) {
        case 0x1d45a8u: goto label_1d45a8;
        default: break;
    }

    ctx->pc = 0x1d4590u;

    // 0x1d4590: 0x8c8600b0  lw          $a2, 0xB0($a0)
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1d4594: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1d4594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d4598: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4598u;
    {
        const bool branch_taken_0x1d4598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4598u;
        // 0x1d459c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4598) {
            ctx->pc = 0x1D45C0u;
            goto label_1d45c0;
        }
    }
    ctx->pc = 0x1D45A0u;
    // 0x1d45a0: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1d45a4: 0x0  nop
    ctx->pc = 0x1d45a4u;
    // NOP
label_1d45a8:
    // 0x1d45a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d45ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d45b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d45b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d45b4: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x1d45b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d45b8: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D45B8u;
    {
        const bool branch_taken_0x1d45b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45B8u;
        // 0x1d45bc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45b8) {
            ctx->pc = 0x1D45A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d45a8;
        }
    }
    ctx->pc = 0x1D45C0u;
label_1d45c0:
    // 0x1d45c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45C0u;
        // 0x1d45c4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D45C8u;
}
