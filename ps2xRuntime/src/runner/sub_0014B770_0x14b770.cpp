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

// Function: sub_0014B770
// Address: 0x14b770 - 0x14b7f8
void sub_0014B770_0x14b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B770_0x14b770");
#endif

    switch (ctx->pc) {
        case 0x14b7a8u: goto label_14b7a8;
        case 0x14b7b4u: goto label_14b7b4;
        default: break;
    }

    ctx->pc = 0x14b770u;

    // 0x14b770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b774: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14b778: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14b77c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b780: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b784: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14b784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b788: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14b78c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14b78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b790: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14b794: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b79c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x14b79cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b7a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14b7a4: 0x0  nop
    ctx->pc = 0x14b7a4u;
    // NOP
label_14b7a8:
    // 0x14b7a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7ac: 0xc1114ec  jal         func_4453B0
    ctx->pc = 0x14B7ACu;
    SET_GPR_U32(ctx, 31, 0x14B7B4u);
    ctx->pc = 0x14B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7ACu;
    // 0x14b7b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4453B0u, 0x14B7ACu, 0x14B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7B4u;
label_14b7b4:
    // 0x14b7b4: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b7b8: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x14b7b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b7bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B7BCu;
    {
        const bool branch_taken_0x14b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7BCu;
        // 0x14b7c0: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7bc) {
            ctx->pc = 0x14B7D0u;
            goto label_14b7d0;
        }
    }
    ctx->pc = 0x14B7C4u;
    // 0x14b7c4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b7c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14B7C8u;
    {
        const bool branch_taken_0x14b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b7c8) {
            ctx->pc = 0x14B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B7C8u;
            // 0x14b7cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b7a8;
        }
    }
    ctx->pc = 0x14B7D0u;
label_14b7d0:
    // 0x14b7d0: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b7d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14b7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b7d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14b7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b7dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b7e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14b7e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b7e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14b7e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7ECu;
        // 0x14b7f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B7F4u;
    // 0x14b7f4: 0x0  nop
    ctx->pc = 0x14b7f4u;
    // NOP
    ctx->pc = 0x14b7f8u;
}
