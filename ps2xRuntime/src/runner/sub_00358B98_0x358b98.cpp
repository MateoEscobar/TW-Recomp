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

// Function: sub_00358B98
// Address: 0x358b98 - 0x358bf8
void sub_00358B98_0x358b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358B98_0x358b98");
#endif

    switch (ctx->pc) {
        case 0x358bb8u: goto label_358bb8;
        case 0x358bc0u: goto label_358bc0;
        case 0x358bd4u: goto label_358bd4;
        case 0x358be0u: goto label_358be0;
        default: break;
    }

    ctx->pc = 0x358b98u;

    // 0x358b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358ba0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358ba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358bb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358BB0u;
    SET_GPR_U32(ctx, 31, 0x358BB8u);
    ctx->pc = 0x358BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BB0u;
    // 0x358bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358BB0u, 0x358BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BB8u;
label_358bb8:
    // 0x358bb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358BB8u;
    SET_GPR_U32(ctx, 31, 0x358BC0u);
    ctx->pc = 0x358BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BB8u;
    // 0x358bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358BB8u, 0x358BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BC0u;
label_358bc0:
    // 0x358bc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358bcc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358BCCu;
    SET_GPR_U32(ctx, 31, 0x358BD4u);
    ctx->pc = 0x358BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BCCu;
    // 0x358bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358BCCu, 0x358BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BD4u;
label_358bd4:
    // 0x358bd4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x358bd4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358bd8: 0xc08e8b0  jal         func_23A2C0
    ctx->pc = 0x358BD8u;
    SET_GPR_U32(ctx, 31, 0x358BE0u);
    ctx->pc = 0x358BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BD8u;
    // 0x358bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2C0u, 0x358BD8u, 0x358BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BE0u;
label_358be0:
    // 0x358be0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358be4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x358BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BF0u;
        // 0x358bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358BF8u;
}
