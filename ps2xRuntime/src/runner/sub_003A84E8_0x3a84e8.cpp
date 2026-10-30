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

// Function: sub_003A84E8
// Address: 0x3a84e8 - 0x3a8500
void sub_003A84E8_0x3a84e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A84E8_0x3a84e8");
#endif

    ctx->pc = 0x3a84e8u;

    // 0x3a84e8: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x3a84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3a84ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a84ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a84f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3a84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3a84f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A84F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A84F4u;
        // 0x3a84f8: 0xac820400  sw          $v0, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A84F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A84FCu;
    // 0x3a84fc: 0x0  nop
    ctx->pc = 0x3a84fcu;
    // NOP
    ctx->pc = 0x3a8500u;
}
