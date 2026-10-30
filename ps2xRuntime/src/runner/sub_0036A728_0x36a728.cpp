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

// Function: sub_0036A728
// Address: 0x36a728 - 0x36a7f0
void sub_0036A728_0x36a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A728_0x36a728");
#endif

    switch (ctx->pc) {
        case 0x36a750u: goto label_36a750;
        case 0x36a758u: goto label_36a758;
        case 0x36a768u: goto label_36a768;
        case 0x36a780u: goto label_36a780;
        case 0x36a79cu: goto label_36a79c;
        case 0x36a7a8u: goto label_36a7a8;
        case 0x36a7c4u: goto label_36a7c4;
        default: break;
    }

    ctx->pc = 0x36a728u;

    // 0x36a728: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36a728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36a72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a730: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36a730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36a734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36a734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a738: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36a73c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36a740: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36a744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a748: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A748u;
    SET_GPR_U32(ctx, 31, 0x36A750u);
    ctx->pc = 0x36A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A748u;
    // 0x36a74c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A748u, 0x36A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A750u;
label_36a750:
    // 0x36a750: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A750u;
    SET_GPR_U32(ctx, 31, 0x36A758u);
    ctx->pc = 0x36A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A750u;
    // 0x36a754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A750u, 0x36A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A758u;
label_36a758:
    // 0x36a758: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36a758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a75c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a760: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36a760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a764: 0x0  nop
    ctx->pc = 0x36a764u;
    // NOP
label_36a768:
    // 0x36a768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a76c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a770: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a774: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a778: 0xc10250e  jal         func_409438
    ctx->pc = 0x36A778u;
    SET_GPR_U32(ctx, 31, 0x36A780u);
    ctx->pc = 0x36A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A778u;
    // 0x36a77c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409438u, 0x36A778u, 0x36A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A780u;
label_36a780:
    // 0x36a780: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36a780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36a784: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a788: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36A788u;
    {
        const bool branch_taken_0x36a788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A788u;
        // 0x36a78c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a788) {
            ctx->pc = 0x36A768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a768;
        }
    }
    ctx->pc = 0x36A790u;
    // 0x36a790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a794: 0xc05ac42  jal         func_16B108
    ctx->pc = 0x36A794u;
    SET_GPR_U32(ctx, 31, 0x36A79Cu);
    ctx->pc = 0x36A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A794u;
    // 0x36a798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B108u, 0x36A794u, 0x36A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A79Cu;
label_36a79c:
    // 0x36a79c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36a7a4: 0x0  nop
    ctx->pc = 0x36a7a4u;
    // NOP
label_36a7a8:
    // 0x36a7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36a7b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a7b4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x36a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36a7b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a7bc: 0xc102592  jal         func_409648
    ctx->pc = 0x36A7BCu;
    SET_GPR_U32(ctx, 31, 0x36A7C4u);
    ctx->pc = 0x36A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A7BCu;
    // 0x36a7c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409648u, 0x36A7BCu, 0x36A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7C4u;
label_36a7c4:
    // 0x36a7c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a7c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36A7C8u;
    {
        const bool branch_taken_0x36a7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7C8u;
        // 0x36a7cc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a7c8) {
            ctx->pc = 0x36A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a7a8;
        }
    }
    ctx->pc = 0x36A7D0u;
    // 0x36a7d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36a7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36a7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36a7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a7dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36a7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a7e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36a7e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7E8u;
        // 0x36a7ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A7F0u;
}
