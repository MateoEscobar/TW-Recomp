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

// Function: sub_004DB7B0
// Address: 0x4db7b0 - 0x4db7d8
void sub_004DB7B0_0x4db7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB7B0_0x4db7b0");
#endif

    ctx->pc = 0x4db7b0u;

    // 0x4db7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB7B0u;
        // 0x4db7b4: 0xc480032c  lwc1        $f0, 0x32C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB7B8u;
    // 0x4db7b8: 0xac800424  sw          $zero, 0x424($a0)
    ctx->pc = 0x4db7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 0));
    // 0x4db7bc: 0x0  nop
    ctx->pc = 0x4db7bcu;
    // NOP
    // 0x4db7c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4db7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db7c4: 0x0  nop
    ctx->pc = 0x4db7c4u;
    // NOP
    // 0x4db7c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4db7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db7cc: 0x0  nop
    ctx->pc = 0x4db7ccu;
    // NOP
    // 0x4db7d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4db7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db7d4: 0x0  nop
    ctx->pc = 0x4db7d4u;
    // NOP
    ctx->pc = 0x4db7d8u;
}
