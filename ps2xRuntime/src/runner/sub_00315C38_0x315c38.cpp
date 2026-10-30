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

// Function: sub_00315C38
// Address: 0x315c38 - 0x315c58
void sub_00315C38_0x315c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315C38_0x315c38");
#endif

    switch (ctx->pc) {
        case 0x315c3cu: goto label_315c3c;
        default: break;
    }

    ctx->pc = 0x315c38u;

    // 0x315c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315c3c:
    // 0x315c3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x315c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315c40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x315c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315c44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x315c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x315C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C4Cu;
        // 0x315c50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315C54u;
    // 0x315c54: 0x0  nop
    ctx->pc = 0x315c54u;
    // NOP
    ctx->pc = 0x315c58u;
}
