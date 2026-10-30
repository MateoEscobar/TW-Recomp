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

// Function: sub_004DA590
// Address: 0x4da590 - 0x4da5a8
void sub_004DA590_0x4da590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA590_0x4da590");
#endif

    ctx->pc = 0x4da590u;

    // 0x4da590: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da594: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA594u;
        // 0x4da598: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA59Cu;
    // 0x4da59c: 0x0  nop
    ctx->pc = 0x4da59cu;
    // NOP
    // 0x4da5a0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x4da5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x4da5a4: 0x0  nop
    ctx->pc = 0x4da5a4u;
    // NOP
    ctx->pc = 0x4da5a8u;
}
