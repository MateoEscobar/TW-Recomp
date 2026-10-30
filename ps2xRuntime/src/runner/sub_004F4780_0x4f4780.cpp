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

// Function: sub_004F4780
// Address: 0x4f4780 - 0x4f47a8
void sub_004F4780_0x4f4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4780_0x4f4780");
#endif

    ctx->pc = 0x4f4780u;

    // 0x4f4780: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4780u;
        // 0x4f4784: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4788u;
    // 0x4f4788: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x4f4788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x4f478c: 0x0  nop
    ctx->pc = 0x4f478cu;
    // NOP
    // 0x4f4790: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4f4790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4f4794: 0x0  nop
    ctx->pc = 0x4f4794u;
    // NOP
    // 0x4f4798: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4f4798u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4f479c: 0x0  nop
    ctx->pc = 0x4f479cu;
    // NOP
    // 0x4f47a0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4f47a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4f47a4: 0x0  nop
    ctx->pc = 0x4f47a4u;
    // NOP
    ctx->pc = 0x4f47a8u;
}
