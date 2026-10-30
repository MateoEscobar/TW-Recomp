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

// Function: sub_004DA5A8
// Address: 0x4da5a8 - 0x4da5c0
void sub_004DA5A8_0x4da5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA5A8_0x4da5a8");
#endif

    ctx->pc = 0x4da5a8u;

    // 0x4da5a8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da5ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4da5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4da5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA5B0u;
        // 0x4da5b4: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA5B8u;
    // 0x4da5b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4da5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4da5bc: 0x0  nop
    ctx->pc = 0x4da5bcu;
    // NOP
    ctx->pc = 0x4da5c0u;
}
