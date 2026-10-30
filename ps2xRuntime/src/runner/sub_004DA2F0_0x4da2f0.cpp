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

// Function: sub_004DA2F0
// Address: 0x4da2f0 - 0x4da310
void sub_004DA2F0_0x4da2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA2F0_0x4da2f0");
#endif

    ctx->pc = 0x4da2f0u;

    // 0x4da2f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4da2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4da2f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4da2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x4da2f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4da2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4da2fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4da300: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x4da300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x4da304: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA304u;
        // 0x4da308: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA30Cu;
    // 0x4da30c: 0x0  nop
    ctx->pc = 0x4da30cu;
    // NOP
    ctx->pc = 0x4da310u;
}
