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

// Function: sub_0016C358
// Address: 0x16c358 - 0x16c388
void sub_0016C358_0x16c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C358_0x16c358");
#endif

    ctx->pc = 0x16c358u;

    // 0x16c358: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16c358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16c35c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16c35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c360: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C360u;
    {
        const bool branch_taken_0x16c360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C360u;
        // 0x16c364: 0xacc0cb7c  sw          $zero, -0x3484($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294953852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c360) {
            ctx->pc = 0x16C37Cu;
            goto label_16c37c;
        }
    }
    ctx->pc = 0x16C368u;
    // 0x16c368: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16c368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16c36c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x16c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x16c370: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x16c374: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16c374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16c378: 0xacc3cb7c  sw          $v1, -0x3484($a2)
    ctx->pc = 0x16c378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294953852), GPR_U32(ctx, 3));
label_16c37c:
    // 0x16c37c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C384u;
    // 0x16c384: 0x0  nop
    ctx->pc = 0x16c384u;
    // NOP
    ctx->pc = 0x16c388u;
}
