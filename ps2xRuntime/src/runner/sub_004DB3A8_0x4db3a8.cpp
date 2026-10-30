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

// Function: sub_004DB3A8
// Address: 0x4db3a8 - 0x4db3c0
void sub_004DB3A8_0x4db3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB3A8_0x4db3a8");
#endif

    ctx->pc = 0x4db3a8u;

    // 0x4db3a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x4db3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x4db3ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4db3acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x4db3b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4db3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4db3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB3BCu;
    // 0x4db3bc: 0x0  nop
    ctx->pc = 0x4db3bcu;
    // NOP
    ctx->pc = 0x4db3c0u;
}
