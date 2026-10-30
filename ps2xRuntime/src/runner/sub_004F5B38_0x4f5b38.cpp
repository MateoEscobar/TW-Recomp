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

// Function: sub_004F5B38
// Address: 0x4f5b38 - 0x4f5b60
void sub_004F5B38_0x4f5b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5B38_0x4f5b38");
#endif

    ctx->pc = 0x4f5b38u;

    // 0x4f5b38: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B38u;
        // 0x4f5b3c: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5B40u;
    // 0x4f5b40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f5b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f5b44: 0x0  nop
    ctx->pc = 0x4f5b44u;
    // NOP
    // 0x4f5b48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f5b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f5b4c: 0x0  nop
    ctx->pc = 0x4f5b4cu;
    // NOP
    // 0x4f5b50: 0xe48e0050  swc1        $f14, 0x50($a0)
    ctx->pc = 0x4f5b50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4f5b54: 0x0  nop
    ctx->pc = 0x4f5b54u;
    // NOP
    // 0x4f5b58: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4f5b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4f5b5c: 0x0  nop
    ctx->pc = 0x4f5b5cu;
    // NOP
    ctx->pc = 0x4f5b60u;
}
