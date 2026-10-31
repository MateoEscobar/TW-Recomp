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

// Function: sub_002233E8
// Address: 0x2233e8 - 0x223400
void sub_002233E8_0x2233e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002233E8_0x2233e8");
#endif

    ctx->pc = 0x2233e8u;

    // 0x2233e8: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2233ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2233ECu;
    {
        const bool branch_taken_0x2233ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2233ec) {
            ctx->pc = 0x2233F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2233ECu;
            // 0x2233f0: 0xa4400148  sh          $zero, 0x148($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2233F4u;
            goto label_2233f4;
        }
    }
    ctx->pc = 0x2233F4u;
label_2233f4:
    // 0x2233f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2233F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2233F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2233FCu;
    // 0x2233fc: 0x0  nop
    ctx->pc = 0x2233fcu;
    // NOP
    ctx->pc = 0x223400u;
}
