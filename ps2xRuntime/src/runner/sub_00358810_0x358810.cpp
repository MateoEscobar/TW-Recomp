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

// Function: sub_00358810
// Address: 0x358810 - 0x358870
void sub_00358810_0x358810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358810_0x358810");
#endif

    switch (ctx->pc) {
        case 0x358830u: goto label_358830;
        case 0x358838u: goto label_358838;
        case 0x35884cu: goto label_35884c;
        case 0x358858u: goto label_358858;
        default: break;
    }

    ctx->pc = 0x358810u;

    // 0x358810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358818: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35881c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35881cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358828: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358828u;
    SET_GPR_U32(ctx, 31, 0x358830u);
    ctx->pc = 0x35882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358828u;
    // 0x35882c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358828u, 0x358830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358830u;
label_358830:
    // 0x358830: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358830u;
    SET_GPR_U32(ctx, 31, 0x358838u);
    ctx->pc = 0x358834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358830u;
    // 0x358834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358830u, 0x358838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358838u;
label_358838:
    // 0x358838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35883c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358844: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358844u;
    SET_GPR_U32(ctx, 31, 0x35884Cu);
    ctx->pc = 0x358848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358844u;
    // 0x358848: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358844u, 0x35884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35884Cu;
label_35884c:
    // 0x35884c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35884cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358850: 0xc08d046  jal         func_234118
    ctx->pc = 0x358850u;
    SET_GPR_U32(ctx, 31, 0x358858u);
    ctx->pc = 0x358854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358850u;
    // 0x358854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234118u, 0x358850u, 0x358858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358858u;
label_358858:
    // 0x358858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35885c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35885cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358868: 0x3e00008  jr          $ra
    ctx->pc = 0x358868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358868u;
        // 0x35886c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358870u;
}
