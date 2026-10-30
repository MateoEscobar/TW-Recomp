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

// Function: sub_0041DA80
// Address: 0x41da80 - 0x41dab0
void sub_0041DA80_0x41da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DA80_0x41da80");
#endif

    switch (ctx->pc) {
        case 0x41daa4u: goto label_41daa4;
        default: break;
    }

    ctx->pc = 0x41da80u;

    // 0x41da80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41da84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41da84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41da88: 0x2c82000f  sltiu       $v0, $a0, 0xF
    ctx->pc = 0x41da88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x41da8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41DA8Cu;
    {
        const bool branch_taken_0x41da8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DA8Cu;
        // 0x41da90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41da8c) {
            ctx->pc = 0x41DAA4u;
            goto label_41daa4;
        }
    }
    ctx->pc = 0x41DA94u;
    // 0x41da94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41da98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41da98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41da9c: 0xc107434  jal         func_41D0D0
    ctx->pc = 0x41DA9Cu;
    SET_GPR_U32(ctx, 31, 0x41DAA4u);
    ctx->pc = 0x41DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DA9Cu;
    // 0x41daa0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0D0u, 0x41DA9Cu, 0x41DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DAA4u;
label_41daa4:
    // 0x41daa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41daa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41daa8: 0x3e00008  jr          $ra
    ctx->pc = 0x41DAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DAA8u;
        // 0x41daac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DAB0u;
}
