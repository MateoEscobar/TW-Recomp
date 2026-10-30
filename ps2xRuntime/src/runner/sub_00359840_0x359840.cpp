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

// Function: sub_00359840
// Address: 0x359840 - 0x3598a0
void sub_00359840_0x359840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359840_0x359840");
#endif

    switch (ctx->pc) {
        case 0x359860u: goto label_359860;
        case 0x359868u: goto label_359868;
        case 0x35987cu: goto label_35987c;
        case 0x359888u: goto label_359888;
        default: break;
    }

    ctx->pc = 0x359840u;

    // 0x359840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359848: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35984c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35984cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359858: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359858u;
    SET_GPR_U32(ctx, 31, 0x359860u);
    ctx->pc = 0x35985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359858u;
    // 0x35985c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359858u, 0x359860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359860u;
label_359860:
    // 0x359860: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359860u;
    SET_GPR_U32(ctx, 31, 0x359868u);
    ctx->pc = 0x359864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359860u;
    // 0x359864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359860u, 0x359868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359868u;
label_359868:
    // 0x359868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35986c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359874: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359874u;
    SET_GPR_U32(ctx, 31, 0x35987Cu);
    ctx->pc = 0x359878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359874u;
    // 0x359878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359874u, 0x35987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35987Cu;
label_35987c:
    // 0x35987c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35987cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359880: 0xc08d6da  jal         func_235B68
    ctx->pc = 0x359880u;
    SET_GPR_U32(ctx, 31, 0x359888u);
    ctx->pc = 0x359884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359880u;
    // 0x359884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B68u, 0x359880u, 0x359888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359888u;
label_359888:
    // 0x359888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35988c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35988cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359898: 0x3e00008  jr          $ra
    ctx->pc = 0x359898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359898u;
        // 0x35989c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3598A0u;
}
