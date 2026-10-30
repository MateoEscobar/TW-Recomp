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

// Function: sub_00110000
// Address: 0x110000 - 0x110018
void sub_00110000_0x110000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110000_0x110000");
#endif

    ctx->pc = 0x110000u;

    // 0x110000: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x110000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110008: 0x3e00008  jr          $ra
    ctx->pc = 0x110008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110008u;
        // 0x11000c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110010u;
    // 0x110010: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x110010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x110014: 0x0  nop
    ctx->pc = 0x110014u;
    // NOP
    ctx->pc = 0x110018u;
}
