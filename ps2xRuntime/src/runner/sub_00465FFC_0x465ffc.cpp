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

// Function: sub_00465FFC
// Address: 0x465ffc - 0x46600c
void sub_00465FFC_0x465ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465FFC_0x465ffc");
#endif

    ctx->pc = 0x465ffcu;

    // 0x465ffc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x465ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x466000: 0xfca00038  sd          $zero, 0x38($a1)
    ctx->pc = 0x466000u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
    // 0x466004: 0x3e00008  jr          $ra
    ctx->pc = 0x466004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466004u;
        // 0x466008: 0xfca20030  sd          $v0, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46600Cu;
}
