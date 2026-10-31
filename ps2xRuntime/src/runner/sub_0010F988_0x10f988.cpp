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

// Function: sub_0010F988
// Address: 0x10f988 - 0x10f9a0
void sub_0010F988_0x10f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F988_0x10f988");
#endif

    ctx->pc = 0x10f988u;

    // 0x10f988: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f98c: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x10f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x10f990: 0xac458678  sw          $a1, -0x7988($v0)
    ctx->pc = 0x10f990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x598678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598678u, _value); } while (0);
    // 0x10f994: 0x3e00008  jr          $ra
    ctx->pc = 0x10F994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F994u;
        // 0x10f998: 0xac668674  sw          $a2, -0x798C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936180), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F99Cu;
    // 0x10f99c: 0x0  nop
    ctx->pc = 0x10f99cu;
    // NOP
    ctx->pc = 0x10f9a0u;
}
