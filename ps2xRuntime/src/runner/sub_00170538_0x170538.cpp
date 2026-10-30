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

// Function: sub_00170538
// Address: 0x170538 - 0x170550
void sub_00170538_0x170538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170538_0x170538");
#endif

    ctx->pc = 0x170538u;

    // 0x170538: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17053c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17053Cu;
    {
        const bool branch_taken_0x17053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17053c) {
            ctx->pc = 0x170540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17053Cu;
            // 0x170540: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170544u;
            goto label_170544;
        }
    }
    ctx->pc = 0x170544u;
label_170544:
    // 0x170544: 0x3e00008  jr          $ra
    ctx->pc = 0x170544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17054Cu;
    // 0x17054c: 0x0  nop
    ctx->pc = 0x17054cu;
    // NOP
    ctx->pc = 0x170550u;
}
