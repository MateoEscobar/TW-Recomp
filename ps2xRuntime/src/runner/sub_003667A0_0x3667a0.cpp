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

// Function: sub_003667A0
// Address: 0x3667a0 - 0x366880
void sub_003667A0_0x3667a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003667A0_0x3667a0");
#endif

    switch (ctx->pc) {
        case 0x3667ccu: goto label_3667cc;
        case 0x3667d4u: goto label_3667d4;
        case 0x3667e0u: goto label_3667e0;
        case 0x3667f8u: goto label_3667f8;
        case 0x366800u: goto label_366800;
        case 0x36681cu: goto label_36681c;
        case 0x366828u: goto label_366828;
        case 0x366830u: goto label_366830;
        case 0x366840u: goto label_366840;
        case 0x366854u: goto label_366854;
        default: break;
    }

    ctx->pc = 0x3667a0u;

    // 0x3667a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3667a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3667a4: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3667a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3667a8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3667a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3667ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3667acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3667b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3667b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3667b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3667b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3667b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3667b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3667bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3667bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3667c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3667c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3667c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3667C4u;
    SET_GPR_U32(ctx, 31, 0x3667CCu);
    ctx->pc = 0x3667C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3667C4u;
    // 0x3667c8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3667C4u, 0x3667CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667CCu;
label_3667cc:
    // 0x3667cc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3667CCu;
    SET_GPR_U32(ctx, 31, 0x3667D4u);
    ctx->pc = 0x3667D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3667CCu;
    // 0x3667d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3667CCu, 0x3667D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667D4u;
label_3667d4:
    // 0x3667d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3667d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3667d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667dc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3667dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3667e0:
    // 0x3667e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3667e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3667e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3667e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3667e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3667ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3667ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667f0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3667F0u;
    SET_GPR_U32(ctx, 31, 0x3667F8u);
    ctx->pc = 0x3667F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3667F0u;
    // 0x3667f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3667F0u, 0x3667F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667F8u;
label_3667f8:
    // 0x3667f8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3667F8u;
    SET_GPR_U32(ctx, 31, 0x366800u);
    ctx->pc = 0x3667FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3667F8u;
    // 0x3667fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3667F8u, 0x366800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366800u;
label_366800:
    // 0x366800: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x366804: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366808: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366808u;
    {
        const bool branch_taken_0x366808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366808u;
        // 0x36680c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366808) {
            ctx->pc = 0x3667E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3667e0;
        }
    }
    ctx->pc = 0x366810u;
    // 0x366810: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x366810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366814: 0xc047426  jal         func_11D098
    ctx->pc = 0x366814u;
    SET_GPR_U32(ctx, 31, 0x36681Cu);
    ctx->pc = 0x366818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366814u;
    // 0x366818: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D098u, 0x366814u, 0x36681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36681Cu;
label_36681c:
    // 0x36681c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366820: 0xc102562  jal         func_409588
    ctx->pc = 0x366820u;
    SET_GPR_U32(ctx, 31, 0x366828u);
    ctx->pc = 0x366824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366820u;
    // 0x366824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x366820u, 0x366828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366828u;
label_366828:
    // 0x366828: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36682c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36682cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_366830:
    // 0x366830: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x366830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x366834: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366838: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x366838u;
    SET_GPR_U32(ctx, 31, 0x366840u);
    ctx->pc = 0x36683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366838u;
    // 0x36683c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x366838u, 0x366840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366840u;
label_366840:
    // 0x366840: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36684c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36684Cu;
    SET_GPR_U32(ctx, 31, 0x366854u);
    ctx->pc = 0x366850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36684Cu;
    // 0x366850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36684Cu, 0x366854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366854u;
label_366854:
    // 0x366854: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366858: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366858u;
    {
        const bool branch_taken_0x366858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366858u;
        // 0x36685c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366858) {
            ctx->pc = 0x366830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366830;
        }
    }
    ctx->pc = 0x366860u;
    // 0x366860: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x366860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366868: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x366868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36686c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36686cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366870: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x366870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366878: 0x3e00008  jr          $ra
    ctx->pc = 0x366878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366878u;
        // 0x36687c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366880u;
}
