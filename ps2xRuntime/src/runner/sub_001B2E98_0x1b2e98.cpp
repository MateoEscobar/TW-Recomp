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

// Function: sub_001B2E98
// Address: 0x1b2e98 - 0x1b2ee8
void sub_001B2E98_0x1b2e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2E98_0x1b2e98");
#endif

    switch (ctx->pc) {
        case 0x1b2ec0u: goto label_1b2ec0;
        case 0x1b2ed0u: goto label_1b2ed0;
        default: break;
    }

    ctx->pc = 0x1b2e98u;

    // 0x1b2e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2e9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2ea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ea8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b2eac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2eb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b2eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2eb8: 0xc071274  jal         func_1C49D0
    ctx->pc = 0x1B2EB8u;
    SET_GPR_U32(ctx, 31, 0x1B2EC0u);
    ctx->pc = 0x1B2EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EB8u;
    // 0x1b2ebc: 0x260415d0  addiu       $a0, $s0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C49D0u, 0x1B2EB8u, 0x1B2EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2EC0u;
label_1b2ec0:
    // 0x1b2ec0: 0x26043f10  addiu       $a0, $s0, 0x3F10
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    // 0x1b2ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ec8: 0xc071274  jal         func_1C49D0
    ctx->pc = 0x1B2EC8u;
    SET_GPR_U32(ctx, 31, 0x1B2ED0u);
    ctx->pc = 0x1B2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EC8u;
    // 0x1b2ecc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C49D0u, 0x1B2EC8u, 0x1B2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2ED0u;
label_1b2ed0:
    // 0x1b2ed0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ed4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2ed8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EE0u;
        // 0x1b2ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2EE8u;
}
