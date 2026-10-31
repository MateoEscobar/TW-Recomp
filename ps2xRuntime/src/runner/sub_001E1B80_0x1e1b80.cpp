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

// Function: sub_001E1B80
// Address: 0x1e1b80 - 0x1e1ba8
void sub_001E1B80_0x1e1b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1B80_0x1e1b80");
#endif

    ctx->pc = 0x1e1b80u;

    // 0x1e1b80: 0x24830094  addiu       $v1, $a0, 0x94
    ctx->pc = 0x1e1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x1e1b84: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e1b88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e1b8c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1e1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e1b90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1e1b94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b98: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e1b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1b9c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1e1b9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1e1ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BA0u;
        // 0x1e1ba4: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1BA8u;
}
