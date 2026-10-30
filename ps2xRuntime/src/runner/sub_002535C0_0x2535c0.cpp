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

// Function: sub_002535C0
// Address: 0x2535c0 - 0x2535f0
void sub_002535C0_0x2535c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002535C0_0x2535c0");
#endif

    ctx->pc = 0x2535c0u;

    // 0x2535c0: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x2535c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2535c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2535C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2535C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535C4u;
        // 0x2535c8: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2535CCu;
    // 0x2535cc: 0x0  nop
    ctx->pc = 0x2535ccu;
    // NOP
    // 0x2535d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2535d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535d4: 0x0  nop
    ctx->pc = 0x2535d4u;
    // NOP
    // 0x2535d8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2535d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2535dc: 0x0  nop
    ctx->pc = 0x2535dcu;
    // NOP
    // 0x2535e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2535e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2535e4: 0x0  nop
    ctx->pc = 0x2535e4u;
    // NOP
    // 0x2535e8: 0x27bd08f0  addiu       $sp, $sp, 0x8F0
    ctx->pc = 0x2535e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2288));
    // 0x2535ec: 0x0  nop
    ctx->pc = 0x2535ecu;
    // NOP
    ctx->pc = 0x2535f0u;
}
