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

// Function: sub_0030F4B8
// Address: 0x30f4b8 - 0x30f4d0
void sub_0030F4B8_0x30f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F4B8_0x30f4b8");
#endif

    switch (ctx->pc) {
        case 0x30f4bcu: goto label_30f4bc;
        default: break;
    }

    ctx->pc = 0x30f4b8u;

    // 0x30f4b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30f4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f4bc:
    // 0x30f4bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30f4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F4C4u;
        // 0x30f4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F4CCu;
    // 0x30f4cc: 0x0  nop
    ctx->pc = 0x30f4ccu;
    // NOP
    ctx->pc = 0x30f4d0u;
}
