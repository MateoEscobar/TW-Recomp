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

// Function: sub_00294788
// Address: 0x294788 - 0x2947f0
void sub_00294788_0x294788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294788_0x294788");
#endif

    switch (ctx->pc) {
        case 0x2947b8u: goto label_2947b8;
        case 0x2947c8u: goto label_2947c8;
        default: break;
    }

    ctx->pc = 0x294788u;

    // 0x294788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29478c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x29478cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x294790: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x294790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x294794: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x294794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x294798: 0x2450eaf0  addiu       $s0, $v0, -0x1510
    ctx->pc = 0x294798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x29479c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2947a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2947a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2947a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2947a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2947a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2947acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2947b0: 0x26136900  addiu       $s3, $s0, 0x6900
    ctx->pc = 0x2947b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x2947b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2947b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2947b8:
    // 0x2947b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2947b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2947bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947c0: 0xc0a52fe  jal         func_294BF8
    ctx->pc = 0x2947C0u;
    SET_GPR_U32(ctx, 31, 0x2947C8u);
    ctx->pc = 0x2947C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2947C0u;
    // 0x2947c4: 0x26100280  addiu       $s0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294BF8u, 0x2947C0u, 0x2947C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947C8u;
label_2947c8:
    // 0x2947c8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x2947c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2947cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2947CCu;
    {
        const bool branch_taken_0x2947cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2947D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947CCu;
        // 0x2947d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947cc) {
            ctx->pc = 0x2947B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2947b8;
        }
    }
    ctx->pc = 0x2947D4u;
    // 0x2947d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2947d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2947d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2947d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2947dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2947dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2947e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2947e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2947e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2947e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2947E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2947ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947E8u;
        // 0x2947ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2947E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2947F0u;
}
