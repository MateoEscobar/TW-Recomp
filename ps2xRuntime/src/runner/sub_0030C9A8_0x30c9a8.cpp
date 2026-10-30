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

// Function: sub_0030C9A8
// Address: 0x30c9a8 - 0x30c9c0
void sub_0030C9A8_0x30c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C9A8_0x30c9a8");
#endif

    ctx->pc = 0x30c9a8u;

    // 0x30c9a8: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x30c9ac: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x30c9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x30c9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c9b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30c9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9B8u;
        // 0x30c9bc: 0xe44002cc  swc1        $f0, 0x2CC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C9C0u;
}
