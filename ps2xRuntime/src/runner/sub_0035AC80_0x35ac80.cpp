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

// Function: sub_0035AC80
// Address: 0x35ac80 - 0x35ace0
void sub_0035AC80_0x35ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AC80_0x35ac80");
#endif

    switch (ctx->pc) {
        case 0x35aca0u: goto label_35aca0;
        case 0x35aca8u: goto label_35aca8;
        case 0x35acbcu: goto label_35acbc;
        case 0x35acc8u: goto label_35acc8;
        default: break;
    }

    ctx->pc = 0x35ac80u;

    // 0x35ac80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ac84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ac88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ac8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ac8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ac94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ac98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AC98u;
    SET_GPR_U32(ctx, 31, 0x35ACA0u);
    ctx->pc = 0x35AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC98u;
    // 0x35ac9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AC98u, 0x35ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACA0u;
label_35aca0:
    // 0x35aca0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35ACA0u;
    SET_GPR_U32(ctx, 31, 0x35ACA8u);
    ctx->pc = 0x35ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACA0u;
    // 0x35aca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35ACA0u, 0x35ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACA8u;
label_35aca8:
    // 0x35aca8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35aca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35acacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35acb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acb4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35ACB4u;
    SET_GPR_U32(ctx, 31, 0x35ACBCu);
    ctx->pc = 0x35ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACB4u;
    // 0x35acb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35ACB4u, 0x35ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACBCu;
label_35acbc:
    // 0x35acbc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35acbcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35acc0: 0xc08d52e  jal         func_2354B8
    ctx->pc = 0x35ACC0u;
    SET_GPR_U32(ctx, 31, 0x35ACC8u);
    ctx->pc = 0x35ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACC0u;
    // 0x35acc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354B8u, 0x35ACC0u, 0x35ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACC8u;
label_35acc8:
    // 0x35acc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35acc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35accc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35acccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35acd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35acd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35acd8: 0x3e00008  jr          $ra
    ctx->pc = 0x35ACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ACD8u;
        // 0x35acdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ACD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ACE0u;
}
