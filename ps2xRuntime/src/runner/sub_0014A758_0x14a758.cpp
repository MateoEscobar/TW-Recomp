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

// Function: sub_0014A758
// Address: 0x14a758 - 0x14a7f0
void sub_0014A758_0x14a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A758_0x14a758");
#endif

    switch (ctx->pc) {
        case 0x14a790u: goto label_14a790;
        case 0x14a79cu: goto label_14a79c;
        case 0x14a7c8u: goto label_14a7c8;
        default: break;
    }

    ctx->pc = 0x14a758u;

    // 0x14a758: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14a75c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14a760: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14a764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14a764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a768: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14a76c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a770: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a774: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a778: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14a77c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14a77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a784: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x14a784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x14a788: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a78c: 0x0  nop
    ctx->pc = 0x14a78cu;
    // NOP
label_14a790:
    // 0x14a790: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14a790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a794: 0xc111734  jal         func_445CD0
    ctx->pc = 0x14A794u;
    SET_GPR_U32(ctx, 31, 0x14A79Cu);
    ctx->pc = 0x14A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A794u;
    // 0x14a798: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445CD0u, 0x14A794u, 0x14A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A79Cu;
label_14a79c:
    // 0x14a79c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14a7a0: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x14a7a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a7a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7A4u;
    {
        const bool branch_taken_0x14a7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7A4u;
        // 0x14a7a8: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7a4) {
            ctx->pc = 0x14A7B8u;
            goto label_14a7b8;
        }
    }
    ctx->pc = 0x14A7ACu;
    // 0x14a7ac: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14a7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a7b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14A7B0u;
    {
        const bool branch_taken_0x14a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7b0) {
            ctx->pc = 0x14A7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A7B0u;
            // 0x14a7b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a790;
        }
    }
    ctx->pc = 0x14A7B8u;
label_14a7b8:
    // 0x14a7b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7c0: 0xc111590  jal         func_445640
    ctx->pc = 0x14A7C0u;
    SET_GPR_U32(ctx, 31, 0x14A7C8u);
    ctx->pc = 0x14A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7C0u;
    // 0x14a7c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14A7C0u, 0x14A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7C8u;
label_14a7c8:
    // 0x14a7c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a7cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14a7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a7d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14a7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a7d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14a7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a7d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14a7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a7dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a7dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a7e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14a7e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7E8u;
        // 0x14a7ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A7F0u;
}
