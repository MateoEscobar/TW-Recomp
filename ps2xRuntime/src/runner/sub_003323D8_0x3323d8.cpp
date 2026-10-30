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

// Function: sub_003323D8
// Address: 0x3323d8 - 0x332450
void sub_003323D8_0x3323d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003323D8_0x3323d8");
#endif

    switch (ctx->pc) {
        case 0x332408u: goto label_332408;
        case 0x332414u: goto label_332414;
        default: break;
    }

    ctx->pc = 0x3323d8u;

    // 0x3323d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3323d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3323dc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x3323dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x3323e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3323e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3323e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3323e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3323e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3323e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3323ec: 0x8c626458  lw          $v0, 0x6458($v1)
    ctx->pc = 0x3323ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x576458u));
    // 0x3323f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3323f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3323f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3323f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3323f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3323F8u;
    {
        const bool branch_taken_0x3323f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3323FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323F8u;
        // 0x3323fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323f8) {
            ctx->pc = 0x332430u;
            goto label_332430;
        }
    }
    ctx->pc = 0x332400u;
    // 0x332400: 0x24706458  addiu       $s0, $v1, 0x6458
    ctx->pc = 0x332400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25688));
    // 0x332404: 0x0  nop
    ctx->pc = 0x332404u;
    // NOP
label_332408:
    // 0x332408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33240c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x33240Cu;
    SET_GPR_U32(ctx, 31, 0x332414u);
    ctx->pc = 0x332410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33240Cu;
    // 0x332410: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x33240Cu, 0x332414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332414u;
label_332414:
    // 0x332414: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332414u;
    {
        const bool branch_taken_0x332414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332414u;
        // 0x332418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332414) {
            ctx->pc = 0x332424u;
            goto label_332424;
        }
    }
    ctx->pc = 0x33241Cu;
    // 0x33241c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33241Cu;
    {
        const bool branch_taken_0x33241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33241Cu;
        // 0x332420: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33241c) {
            ctx->pc = 0x332434u;
            goto label_332434;
        }
    }
    ctx->pc = 0x332424u;
label_332424:
    // 0x332424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x332424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332428: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x332428u;
    {
        const bool branch_taken_0x332428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332428u;
        // 0x33242c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332428) {
            ctx->pc = 0x332408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332408;
        }
    }
    ctx->pc = 0x332430u;
label_332430:
    // 0x332430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x332430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_332434:
    // 0x332434: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x332434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332438: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33243c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33243cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332444: 0x3e00008  jr          $ra
    ctx->pc = 0x332444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332444u;
        // 0x332448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33244Cu;
    // 0x33244c: 0x0  nop
    ctx->pc = 0x33244cu;
    // NOP
    ctx->pc = 0x332450u;
}
