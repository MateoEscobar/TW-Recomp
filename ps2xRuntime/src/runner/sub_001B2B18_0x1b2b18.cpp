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

// Function: sub_001B2B18
// Address: 0x1b2b18 - 0x1b2b58
void sub_001B2B18_0x1b2b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2B18_0x1b2b18");
#endif

    switch (ctx->pc) {
        case 0x1b2b38u: goto label_1b2b38;
        case 0x1b2b44u: goto label_1b2b44;
        default: break;
    }

    ctx->pc = 0x1b2b18u;

    // 0x1b2b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2b1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2b30: 0xc0713fe  jal         func_1C4FF8
    ctx->pc = 0x1B2B30u;
    SET_GPR_U32(ctx, 31, 0x1B2B38u);
    ctx->pc = 0x1B2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B30u;
    // 0x1b2b34: 0x260415d0  addiu       $a0, $s0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF8u, 0x1B2B30u, 0x1B2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B38u;
label_1b2b38:
    // 0x1b2b38: 0x26043f10  addiu       $a0, $s0, 0x3F10
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    // 0x1b2b3c: 0xc0713fe  jal         func_1C4FF8
    ctx->pc = 0x1B2B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2B44u);
    ctx->pc = 0x1B2B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B3Cu;
    // 0x1b2b40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF8u, 0x1B2B3Cu, 0x1B2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B44u;
label_1b2b44:
    // 0x1b2b44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B50u;
        // 0x1b2b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B58u;
}
