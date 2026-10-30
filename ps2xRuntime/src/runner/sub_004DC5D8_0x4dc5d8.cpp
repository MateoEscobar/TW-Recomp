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

// Function: sub_004DC5D8
// Address: 0x4dc5d8 - 0x4dc5f0
void sub_004DC5D8_0x4dc5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC5D8_0x4dc5d8");
#endif

    ctx->pc = 0x4dc5d8u;

    // 0x4dc5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4dc5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4dc5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC5E4u;
    // 0x4dc5e4: 0x0  nop
    ctx->pc = 0x4dc5e4u;
    // NOP
    // 0x4dc5e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4dc5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4dc5ec: 0x0  nop
    ctx->pc = 0x4dc5ecu;
    // NOP
    ctx->pc = 0x4dc5f0u;
}
