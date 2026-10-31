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

// Function: sub_00143078
// Address: 0x143078 - 0x143090
void sub_00143078_0x143078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143078_0x143078");
#endif

    ctx->pc = 0x143078u;

    // 0x143078: 0xac850210  sw          $a1, 0x210($a0)
    ctx->pc = 0x143078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 5));
    // 0x14307c: 0xac860214  sw          $a2, 0x214($a0)
    ctx->pc = 0x14307cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 6));
    // 0x143080: 0xe48c0218  swc1        $f12, 0x218($a0)
    ctx->pc = 0x143080u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 536), bits); }
    // 0x143084: 0xac800220  sw          $zero, 0x220($a0)
    ctx->pc = 0x143084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 0));
    // 0x143088: 0x3e00008  jr          $ra
    ctx->pc = 0x143088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143088u;
        // 0x14308c: 0xac80021c  sw          $zero, 0x21C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143090u;
}
