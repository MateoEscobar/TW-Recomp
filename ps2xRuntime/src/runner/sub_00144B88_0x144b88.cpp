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

// Function: sub_00144B88
// Address: 0x144b88 - 0x144ba8
void sub_00144B88_0x144b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144B88_0x144b88");
#endif

    ctx->pc = 0x144b88u;

    // 0x144b88: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x144b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144b8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144b90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x144b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144b94: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x144b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x144b98: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x144b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x144b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x144B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B9Cu;
        // 0x144ba0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144BA4u;
    // 0x144ba4: 0x0  nop
    ctx->pc = 0x144ba4u;
    // NOP
    ctx->pc = 0x144ba8u;
}
