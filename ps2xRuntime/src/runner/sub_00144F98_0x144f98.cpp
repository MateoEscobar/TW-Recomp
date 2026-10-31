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

// Function: sub_00144F98
// Address: 0x144f98 - 0x144fb0
void sub_00144F98_0x144f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144F98_0x144f98");
#endif

    ctx->pc = 0x144f98u;

    // 0x144f98: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x144f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144f9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144fa0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x144fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x144FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FA4u;
        // 0x144fa8: 0xa485001c  sh          $a1, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144FACu;
    // 0x144fac: 0x0  nop
    ctx->pc = 0x144facu;
    // NOP
    ctx->pc = 0x144fb0u;
}
