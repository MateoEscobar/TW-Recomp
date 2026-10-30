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

// Function: sub_004DA5E0
// Address: 0x4da5e0 - 0x4da608
void sub_004DA5E0_0x4da5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA5E0_0x4da5e0");
#endif

    ctx->pc = 0x4da5e0u;

    // 0x4da5e0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x4da5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA5E4u;
        // 0x4da5e8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA5ECu;
    // 0x4da5ec: 0x0  nop
    ctx->pc = 0x4da5ecu;
    // NOP
    // 0x4da5f0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4da5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4da5f4: 0x0  nop
    ctx->pc = 0x4da5f4u;
    // NOP
    // 0x4da5f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4da5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4da5fc: 0x0  nop
    ctx->pc = 0x4da5fcu;
    // NOP
    // 0x4da600: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4da600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4da604: 0x0  nop
    ctx->pc = 0x4da604u;
    // NOP
    ctx->pc = 0x4da608u;
}
