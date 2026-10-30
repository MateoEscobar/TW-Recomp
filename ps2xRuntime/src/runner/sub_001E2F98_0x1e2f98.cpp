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

// Function: sub_001E2F98
// Address: 0x1e2f98 - 0x1e2fe8
void sub_001E2F98_0x1e2f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F98_0x1e2f98");
#endif

    switch (ctx->pc) {
        case 0x1e2fc8u: goto label_1e2fc8;
        case 0x1e2fd4u: goto label_1e2fd4;
        default: break;
    }

    ctx->pc = 0x1e2f98u;

    // 0x1e2f98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2f9c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fa0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e2fa4: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x1e2fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2fb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e2fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e2fbc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1e2fc0: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1E2FC0u;
    SET_GPR_U32(ctx, 31, 0x1E2FC8u);
    ctx->pc = 0x1E2FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2FC0u;
    // 0x1e2fc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1E2FC0u, 0x1E2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FC8u;
label_1e2fc8:
    // 0x1e2fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fcc: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1E2FCCu;
    SET_GPR_U32(ctx, 31, 0x1E2FD4u);
    ctx->pc = 0x1E2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2FCCu;
    // 0x1e2fd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1E2FCCu, 0x1E2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FD4u;
label_1e2fd4:
    // 0x1e2fd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e2fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FE0u;
        // 0x1e2fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2FE8u;
}
