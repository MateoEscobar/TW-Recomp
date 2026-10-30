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

// Function: sub_001C3868
// Address: 0x1c3868 - 0x1c38d8
void sub_001C3868_0x1c3868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3868_0x1c3868");
#endif

    switch (ctx->pc) {
        case 0x1c3894u: goto label_1c3894;
        case 0x1c3898u: goto label_1c3898;
        case 0x1c38a4u: goto label_1c38a4;
        default: break;
    }

    ctx->pc = 0x1c3868u;

    // 0x1c3868: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c386c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c3870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3874: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c3878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c387c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1c387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c3880: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c3880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c3884: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c388c: 0xc06d800  jal         func_1B6000
    ctx->pc = 0x1C388Cu;
    SET_GPR_U32(ctx, 31, 0x1C3894u);
    ctx->pc = 0x1C3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C388Cu;
    // 0x1c3890: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6000u, 0x1C388Cu, 0x1C3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3894u;
label_1c3894:
    // 0x1c3894: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1c3894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c3898:
    // 0x1c3898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c389c: 0xc06d800  jal         func_1B6000
    ctx->pc = 0x1C389Cu;
    SET_GPR_U32(ctx, 31, 0x1C38A4u);
    ctx->pc = 0x1C38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C389Cu;
    // 0x1c38a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6000u, 0x1C389Cu, 0x1C38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38A4u;
label_1c38a4:
    // 0x1c38a4: 0x0  nop
    ctx->pc = 0x1c38a4u;
    // NOP
    // 0x1c38a8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C38A8u;
    {
        const bool branch_taken_0x1c38a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38A8u;
        // 0x1c38ac: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38a8) {
            ctx->pc = 0x1C3898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3898;
        }
    }
    ctx->pc = 0x1C38B0u;
    // 0x1c38b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c38b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38b4: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x1c38b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x1c38b8: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x1c38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x1c38bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c38bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c38c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c38c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c38c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c38c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c38c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c38c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c38cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38D0u;
        // 0x1c38d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C38D8u;
}
