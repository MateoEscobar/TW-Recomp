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

// Function: sub_003A15A0
// Address: 0x3a15a0 - 0x3a15c0
void sub_003A15A0_0x3a15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A15A0_0x3a15a0");
#endif

    ctx->pc = 0x3a15a0u;

    // 0x3a15a0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3a15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x3a15a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a15a8: 0x8c822c60  lw          $v0, 0x2C60($a0)
    ctx->pc = 0x3a15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C60u));
    // 0x3a15ac: 0x24632c58  addiu       $v1, $v1, 0x2C58
    ctx->pc = 0x3a15acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11352));
    // 0x3a15b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a15b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a15b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15B8u;
        // 0x3a15bc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A15C0u;
}
