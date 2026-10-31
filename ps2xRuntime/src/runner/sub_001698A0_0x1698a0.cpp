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

// Function: sub_001698A0
// Address: 0x1698a0 - 0x1698c8
void sub_001698A0_0x1698a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001698A0_0x1698a0");
#endif

    ctx->pc = 0x1698a0u;

    // 0x1698a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1698a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698a4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1698A4u;
    {
        const bool branch_taken_0x1698a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698A4u;
        // 0x1698a8: 0xacc005ec  sw          $zero, 0x5EC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698a4) {
            ctx->pc = 0x1698C0u;
            goto label_1698c0;
        }
    }
    ctx->pc = 0x1698ACu;
    // 0x1698ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1698b0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1698b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x1698b4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1698b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1698b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1698b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1698bc: 0xacc305ec  sw          $v1, 0x5EC($a2)
    ctx->pc = 0x1698bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1516), GPR_U32(ctx, 3));
label_1698c0:
    // 0x1698c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1698C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698C8u;
}
