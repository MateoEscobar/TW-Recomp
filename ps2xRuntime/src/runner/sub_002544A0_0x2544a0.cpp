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

// Function: sub_002544A0
// Address: 0x2544a0 - 0x2544b8
void sub_002544A0_0x2544a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002544A0_0x2544a0");
#endif

    ctx->pc = 0x2544a0u;

    // 0x2544a0: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2544a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2544a4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2544a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2544a8: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2544a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2544ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2544acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2544b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2544B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2544B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544B0u;
        // 0x2544b4: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2544B8u;
}
