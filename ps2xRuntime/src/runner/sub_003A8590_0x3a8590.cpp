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

// Function: sub_003A8590
// Address: 0x3a8590 - 0x3a85a8
void sub_003A8590_0x3a8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8590_0x3a8590");
#endif

    ctx->pc = 0x3a8590u;

    // 0x3a8590: 0x8c830400  lw          $v1, 0x400($a0)
    ctx->pc = 0x3a8590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3a8594: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3a8594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3a8598: 0xac820400  sw          $v0, 0x400($a0)
    ctx->pc = 0x3a8598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
    // 0x3a859c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A859Cu;
        // 0x3a85a0: 0xe46c0010  swc1        $f12, 0x10($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A85A4u;
    // 0x3a85a4: 0x0  nop
    ctx->pc = 0x3a85a4u;
    // NOP
    ctx->pc = 0x3a85a8u;
}
