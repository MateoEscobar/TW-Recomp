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

// Function: sub_003E9544
// Address: 0x3e9544 - 0x3e9560
void sub_003E9544_0x3e9544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9544_0x3e9544");
#endif

    switch (ctx->pc) {
        case 0x3e9548u: goto label_3e9548;
        default: break;
    }

    ctx->pc = 0x3e9544u;

    // 0x3e9544: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e9544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9548:
    // 0x3e9548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e9548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e954c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e954cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e9550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9554: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9554u;
        // 0x3e9558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E955Cu;
    // 0x3e955c: 0x0  nop
    ctx->pc = 0x3e955cu;
    // NOP
    ctx->pc = 0x3e9560u;
}
