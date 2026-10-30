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

// Function: sub_004F4AE8
// Address: 0x4f4ae8 - 0x4f4af8
void sub_004F4AE8_0x4f4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4AE8_0x4f4ae8");
#endif

    ctx->pc = 0x4f4ae8u;

    // 0x4f4ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4AE8u;
        // 0x4f4aec: 0xc4800078  lwc1        $f0, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4AF0u;
    // 0x4f4af0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f4af4: 0x0  nop
    ctx->pc = 0x4f4af4u;
    // NOP
    ctx->pc = 0x4f4af8u;
}
