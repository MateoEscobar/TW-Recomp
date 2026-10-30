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

// Function: sub_002A4118
// Address: 0x2a4118 - 0x2a4138
void sub_002A4118_0x2a4118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4118_0x2a4118");
#endif

    ctx->pc = 0x2a4118u;

    // 0x2a4118: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a4118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a411c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2a411cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2a4120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a4120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4124: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2a4124u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2a4128: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a4128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a412c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A412Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A412Cu;
        // 0x2a4130: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A412Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4134u;
    // 0x2a4134: 0x0  nop
    ctx->pc = 0x2a4134u;
    // NOP
    ctx->pc = 0x2a4138u;
}
