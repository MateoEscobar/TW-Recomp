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

// Function: sub_002376A0
// Address: 0x2376a0 - 0x237700
void sub_002376A0_0x2376a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002376A0_0x2376a0");
#endif

    switch (ctx->pc) {
        case 0x2376bcu: goto label_2376bc;
        case 0x2376c4u: goto label_2376c4;
        default: break;
    }

    ctx->pc = 0x2376a0u;

    // 0x2376a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2376a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2376a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2376a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2376a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2376a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2376ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2376acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2376b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2376b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2376B4u;
    SET_GPR_U32(ctx, 31, 0x2376BCu);
    ctx->pc = 0x2376B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376B4u;
    // 0x2376b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2376B4u, 0x2376BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376BCu;
label_2376bc:
    // 0x2376bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2376BCu;
    SET_GPR_U32(ctx, 31, 0x2376C4u);
    ctx->pc = 0x2376C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376BCu;
    // 0x2376c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2376BCu, 0x2376C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376C4u;
label_2376c4:
    // 0x2376c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2376c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376c8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2376C8u;
    {
        const bool branch_taken_0x2376c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376C8u;
        // 0x2376cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376c8) {
            ctx->pc = 0x2376F0u;
            goto label_2376f0;
        }
    }
    ctx->pc = 0x2376D0u;
    // 0x2376d0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2376D0u;
    {
        const bool branch_taken_0x2376d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2376D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376D0u;
        // 0x2376d4: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376d0) {
            ctx->pc = 0x2376E4u;
            goto label_2376e4;
        }
    }
    ctx->pc = 0x2376D8u;
    // 0x2376d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2376d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2376dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2376DCu;
    {
        const bool branch_taken_0x2376dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376DCu;
        // 0x2376e0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376dc) {
            ctx->pc = 0x2376ECu;
            goto label_2376ec;
        }
    }
    ctx->pc = 0x2376E4u;
label_2376e4:
    // 0x2376e4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2376e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2376e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2376e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2376ec:
    // 0x2376ec: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2376ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2376f0:
    // 0x2376f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2376f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2376f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2376f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2376f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2376F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376F8u;
        // 0x2376fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237700u;
}
