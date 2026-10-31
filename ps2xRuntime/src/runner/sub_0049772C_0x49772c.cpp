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

// Function: sub_0049772C
// Address: 0x49772c - 0x497750
void sub_0049772C_0x49772c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049772C_0x49772c");
#endif

    switch (ctx->pc) {
        case 0x497730u: goto label_497730;
        default: break;
    }

    ctx->pc = 0x49772cu;

    // 0x49772c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49772cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497730:
    // 0x497730: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x497730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497734: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x497734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49773c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497740: 0x3e00008  jr          $ra
    ctx->pc = 0x497740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497740u;
        // 0x497744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497748u;
    // 0x497748: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x497748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49774c: 0x0  nop
    ctx->pc = 0x49774cu;
    // NOP
    ctx->pc = 0x497750u;
}
