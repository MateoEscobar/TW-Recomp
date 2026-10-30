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

// Function: sub_001F73B8
// Address: 0x1f73b8 - 0x1f7450
void sub_001F73B8_0x1f73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F73B8_0x1f73b8");
#endif

    switch (ctx->pc) {
        case 0x1f73e8u: goto label_1f73e8;
        case 0x1f7400u: goto label_1f7400;
        case 0x1f7408u: goto label_1f7408;
        case 0x1f7434u: goto label_1f7434;
        default: break;
    }

    ctx->pc = 0x1f73b8u;

    // 0x1f73b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f73b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f73bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f73bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f73c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f73c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f73c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f73c8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1f73cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f73d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f73d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f73d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f73dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f73dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f73e0: 0xc080ad4  jal         func_202B50
    ctx->pc = 0x1F73E0u;
    SET_GPR_U32(ctx, 31, 0x1F73E8u);
    ctx->pc = 0x1F73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73E0u;
    // 0x1f73e4: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1F73E0u, 0x1F73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73E8u;
label_1f73e8:
    // 0x1f73e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F73E8u;
    {
        const bool branch_taken_0x1f73e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73E8u;
        // 0x1f73ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73e8) {
            ctx->pc = 0x1F7438u;
            goto label_1f7438;
        }
    }
    ctx->pc = 0x1F73F0u;
    // 0x1f73f0: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x1f73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x1f73f4: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F73F4u;
    {
        const bool branch_taken_0x1f73f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73F4u;
        // 0x1f73f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73f4) {
            ctx->pc = 0x1F7428u;
            goto label_1f7428;
        }
    }
    ctx->pc = 0x1F73FCu;
    // 0x1f73fc: 0x2664ef80  addiu       $a0, $s3, -0x1080
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963072));
label_1f7400:
    // 0x1f7400: 0xc080ad4  jal         func_202B50
    ctx->pc = 0x1F7400u;
    SET_GPR_U32(ctx, 31, 0x1F7408u);
    ctx->pc = 0x1F7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7400u;
    // 0x1f7404: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1F7400u, 0x1F7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7408u;
label_1f7408:
    // 0x1f7408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7408u;
    {
        const bool branch_taken_0x1f7408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7408u;
        // 0x1f740c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7408) {
            ctx->pc = 0x1F741Cu;
            goto label_1f741c;
        }
    }
    ctx->pc = 0x1F7410u;
    // 0x1f7410: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1f7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1f7414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f7418: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1f7418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_1f741c:
    // 0x1f741c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1f741cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1f7420: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F7420u;
    {
        const bool branch_taken_0x1f7420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7420u;
        // 0x1f7424: 0x2664ef80  addiu       $a0, $s3, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7420) {
            ctx->pc = 0x1F7400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7400;
        }
    }
    ctx->pc = 0x1F7428u;
label_1f7428:
    // 0x1f7428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f742c: 0xc07dcc2  jal         func_1F7308
    ctx->pc = 0x1F742Cu;
    SET_GPR_U32(ctx, 31, 0x1F7434u);
    ctx->pc = 0x1F7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F742Cu;
    // 0x1f7430: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7308u, 0x1F742Cu, 0x1F7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7434u;
label_1f7434:
    // 0x1f7434: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f7434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7438:
    // 0x1f7438: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f7438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f743c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f743cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7440: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f7440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7448: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7448u;
        // 0x1f744c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7450u;
}
