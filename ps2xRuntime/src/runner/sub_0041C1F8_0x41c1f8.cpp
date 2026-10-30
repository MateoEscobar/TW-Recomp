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

// Function: sub_0041C1F8
// Address: 0x41c1f8 - 0x41c230
void sub_0041C1F8_0x41c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C1F8_0x41c1f8");
#endif

    ctx->pc = 0x41c1f8u;

    // 0x41c1f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x41c1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c1fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41C1FCu;
    {
        const bool branch_taken_0x41c1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1FCu;
        // 0x41c200: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c1fc) {
            ctx->pc = 0x41C224u;
            goto label_41c224;
        }
    }
    ctx->pc = 0x41C204u;
    // 0x41c204: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41c204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41c208: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x41c208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x41c20c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x41c20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41c210: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x41c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x41c214: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x41c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x41c218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41c21c: 0x3e00008  jr          $ra
    ctx->pc = 0x41C21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C21Cu;
        // 0x41c220: 0xacc202ac  sw          $v0, 0x2AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C224u;
label_41c224:
    // 0x41c224: 0x3e00008  jr          $ra
    ctx->pc = 0x41C224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C224u;
        // 0x41c228: 0xacc002ac  sw          $zero, 0x2AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C22Cu;
    // 0x41c22c: 0x0  nop
    ctx->pc = 0x41c22cu;
    // NOP
    ctx->pc = 0x41c230u;
}
