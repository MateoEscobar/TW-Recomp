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

// Function: sub_0031B24C
// Address: 0x31b24c - 0x31b268
void sub_0031B24C_0x31b24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B24C_0x31b24c");
#endif

    switch (ctx->pc) {
        case 0x31b250u: goto label_31b250;
        default: break;
    }

    ctx->pc = 0x31b24cu;

    // 0x31b24c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31b24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b250:
    // 0x31b250: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31b250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b254: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31b254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b258: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31b258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b260: 0x3e00008  jr          $ra
    ctx->pc = 0x31B260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B260u;
        // 0x31b264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B268u;
}
