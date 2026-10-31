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

// Function: sub_002266B8
// Address: 0x2266b8 - 0x2266d8
void sub_002266B8_0x2266b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266B8_0x2266b8");
#endif

    ctx->pc = 0x2266b8u;

    // 0x2266b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2266bc: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2266c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2266C0u;
    {
        const bool branch_taken_0x2266c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2266C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266C0u;
        // 0x2266c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266c0) {
            ctx->pc = 0x2266CCu;
            goto label_2266cc;
        }
    }
    ctx->pc = 0x2266C8u;
    // 0x2266c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2266cc:
    // 0x2266cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2266CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266D4u;
    // 0x2266d4: 0x0  nop
    ctx->pc = 0x2266d4u;
    // NOP
    ctx->pc = 0x2266d8u;
}
