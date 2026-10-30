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

// Function: sub_003375A0
// Address: 0x3375a0 - 0x3375d0
void sub_003375A0_0x3375a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003375A0_0x3375a0");
#endif

    ctx->pc = 0x3375a0u;

    // 0x3375a0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3375A0u;
    {
        const bool branch_taken_0x3375a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3375A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375A0u;
        // 0x3375a4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375a0) {
            ctx->pc = 0x3375C4u;
            goto label_3375c4;
        }
    }
    ctx->pc = 0x3375A8u;
    // 0x3375a8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3375A8u;
    {
        const bool branch_taken_0x3375a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3375a8) {
            ctx->pc = 0x3375ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3375A8u;
            // 0x3375ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3375B0u;
            goto label_3375b0;
        }
    }
    ctx->pc = 0x3375B0u;
label_3375b0:
    // 0x3375b0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x3375b0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3375b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3375b8: 0x1810  mfhi        $v1
    ctx->pc = 0x3375b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3375bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3375BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3375C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375BCu;
        // 0x3375c0: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3375BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3375C4u;
label_3375c4:
    // 0x3375c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3375C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3375C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375C4u;
        // 0x3375c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3375C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3375CCu;
    // 0x3375cc: 0x0  nop
    ctx->pc = 0x3375ccu;
    // NOP
    ctx->pc = 0x3375d0u;
}
