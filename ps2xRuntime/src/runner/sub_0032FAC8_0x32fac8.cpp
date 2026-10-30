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

// Function: sub_0032FAC8
// Address: 0x32fac8 - 0x32faf0
void sub_0032FAC8_0x32fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FAC8_0x32fac8");
#endif

    ctx->pc = 0x32fac8u;

    // 0x32fac8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x32fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32facc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x32faccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x32fad0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x32fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x32fad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32fad8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x32fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x32fadc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x32fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32fae0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x32fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x32fae4: 0x3e00008  jr          $ra
    ctx->pc = 0x32FAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAE4u;
        // 0x32fae8: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAECu;
    // 0x32faec: 0x0  nop
    ctx->pc = 0x32faecu;
    // NOP
    ctx->pc = 0x32faf0u;
}
