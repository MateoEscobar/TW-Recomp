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

// Function: sub_004B82F8
// Address: 0x4b82f8 - 0x4b8310
void sub_004B82F8_0x4b82f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B82F8_0x4b82f8");
#endif

    ctx->pc = 0x4b82f8u;

    // 0x4b82f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4b82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b82fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4b82fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4b8300: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b8300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4b8304: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8304u;
        // 0x4b8308: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B830Cu;
    // 0x4b830c: 0x0  nop
    ctx->pc = 0x4b830cu;
    // NOP
    ctx->pc = 0x4b8310u;
}
