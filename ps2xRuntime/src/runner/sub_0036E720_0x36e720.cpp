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

// Function: sub_0036E720
// Address: 0x36e720 - 0x36e7f8
void sub_0036E720_0x36e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E720_0x36e720");
#endif

    switch (ctx->pc) {
        case 0x36e748u: goto label_36e748;
        case 0x36e750u: goto label_36e750;
        case 0x36e760u: goto label_36e760;
        case 0x36e778u: goto label_36e778;
        case 0x36e780u: goto label_36e780;
        case 0x36e79cu: goto label_36e79c;
        case 0x36e7a8u: goto label_36e7a8;
        case 0x36e7b8u: goto label_36e7b8;
        case 0x36e7ccu: goto label_36e7cc;
        default: break;
    }

    ctx->pc = 0x36e720u;

    // 0x36e720: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36e724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e728: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36e72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e730: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36e730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36e734: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36e738: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x36e738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x36e73c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36e73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36e740: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E740u;
    SET_GPR_U32(ctx, 31, 0x36E748u);
    ctx->pc = 0x36E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E740u;
    // 0x36e744: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E740u, 0x36E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E748u;
label_36e748:
    // 0x36e748: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E748u;
    SET_GPR_U32(ctx, 31, 0x36E750u);
    ctx->pc = 0x36E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E748u;
    // 0x36e74c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E748u, 0x36E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E750u;
label_36e750:
    // 0x36e750: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36e750u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36e754: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e758: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36e758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e75c: 0x0  nop
    ctx->pc = 0x36e75cu;
    // NOP
label_36e760:
    // 0x36e760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e768: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e76c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e770: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36E770u;
    SET_GPR_U32(ctx, 31, 0x36E778u);
    ctx->pc = 0x36E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E770u;
    // 0x36e774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36E770u, 0x36E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E778u;
label_36e778:
    // 0x36e778: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E778u;
    SET_GPR_U32(ctx, 31, 0x36E780u);
    ctx->pc = 0x36E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E778u;
    // 0x36e77c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E778u, 0x36E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E780u;
label_36e780:
    // 0x36e780: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36e780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36e784: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x36e784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x36e788: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E788u;
        // 0x36e78c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e760;
        }
    }
    ctx->pc = 0x36E790u;
    // 0x36e790: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36e790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36e794: 0xc05e63e  jal         func_1798F8
    ctx->pc = 0x36E794u;
    SET_GPR_U32(ctx, 31, 0x36E79Cu);
    ctx->pc = 0x36E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E794u;
    // 0x36e798: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1798F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1798F8u, 0x36E794u, 0x36E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E79Cu;
label_36e79c:
    // 0x36e79c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36e7a4: 0x0  nop
    ctx->pc = 0x36e7a4u;
    // NOP
label_36e7a8:
    // 0x36e7a8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36e7ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e7b0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36E7B0u;
    SET_GPR_U32(ctx, 31, 0x36E7B8u);
    ctx->pc = 0x36E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E7B0u;
    // 0x36e7b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36E7B0u, 0x36E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7B8u;
label_36e7b8:
    // 0x36e7b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36e7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e7c4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36E7C4u;
    SET_GPR_U32(ctx, 31, 0x36E7CCu);
    ctx->pc = 0x36E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E7C4u;
    // 0x36e7c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36E7C4u, 0x36E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7CCu;
label_36e7cc:
    // 0x36e7cc: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x36e7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x36e7d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E7D0u;
    {
        const bool branch_taken_0x36e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7D0u;
        // 0x36e7d4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7d0) {
            ctx->pc = 0x36E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e7a8;
        }
    }
    ctx->pc = 0x36E7D8u;
    // 0x36e7d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36e7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36e7dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36e7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e7e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36e7e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e7e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36e7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e7ec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x36e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36e7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7F0u;
        // 0x36e7f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E7F8u;
}
