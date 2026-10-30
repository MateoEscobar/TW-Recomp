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

// Function: sub_003DD808
// Address: 0x3dd808 - 0x3dd8b8
void sub_003DD808_0x3dd808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD808_0x3dd808");
#endif

    switch (ctx->pc) {
        case 0x3dd808u: goto label_3dd808;
        case 0x3dd80cu: goto label_3dd80c;
        case 0x3dd810u: goto label_3dd810;
        case 0x3dd814u: goto label_3dd814;
        case 0x3dd818u: goto label_3dd818;
        case 0x3dd81cu: goto label_3dd81c;
        case 0x3dd820u: goto label_3dd820;
        case 0x3dd824u: goto label_3dd824;
        case 0x3dd828u: goto label_3dd828;
        case 0x3dd82cu: goto label_3dd82c;
        case 0x3dd830u: goto label_3dd830;
        case 0x3dd834u: goto label_3dd834;
        case 0x3dd838u: goto label_3dd838;
        case 0x3dd83cu: goto label_3dd83c;
        case 0x3dd840u: goto label_3dd840;
        case 0x3dd844u: goto label_3dd844;
        case 0x3dd848u: goto label_3dd848;
        case 0x3dd84cu: goto label_3dd84c;
        case 0x3dd850u: goto label_3dd850;
        case 0x3dd854u: goto label_3dd854;
        case 0x3dd858u: goto label_3dd858;
        case 0x3dd85cu: goto label_3dd85c;
        case 0x3dd860u: goto label_3dd860;
        case 0x3dd864u: goto label_3dd864;
        case 0x3dd868u: goto label_3dd868;
        case 0x3dd86cu: goto label_3dd86c;
        case 0x3dd870u: goto label_3dd870;
        case 0x3dd874u: goto label_3dd874;
        case 0x3dd878u: goto label_3dd878;
        case 0x3dd87cu: goto label_3dd87c;
        case 0x3dd880u: goto label_3dd880;
        case 0x3dd884u: goto label_3dd884;
        case 0x3dd888u: goto label_3dd888;
        case 0x3dd88cu: goto label_3dd88c;
        case 0x3dd890u: goto label_3dd890;
        case 0x3dd894u: goto label_3dd894;
        case 0x3dd898u: goto label_3dd898;
        case 0x3dd89cu: goto label_3dd89c;
        case 0x3dd8a0u: goto label_3dd8a0;
        case 0x3dd8a4u: goto label_3dd8a4;
        case 0x3dd8a8u: goto label_3dd8a8;
        case 0x3dd8acu: goto label_3dd8ac;
        case 0x3dd8b0u: goto label_3dd8b0;
        case 0x3dd8b4u: goto label_3dd8b4;
        default: break;
    }

    ctx->pc = 0x3dd808u;

label_3dd808:
    // 0x3dd808: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dd808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3dd80c:
    // 0x3dd80c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3dd80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3dd810:
    // 0x3dd810: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3dd810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3dd814:
    // 0x3dd814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dd814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd818:
    // 0x3dd818: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3dd818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3dd81c:
    // 0x3dd81c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dd81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dd820:
    // 0x3dd820: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dd820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd824:
    // 0x3dd824: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3dd824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3dd828:
    // 0x3dd828: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd82c:
    // 0x3dd82c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd830:
    // 0x3dd830: 0x40f809  jalr        $v0
label_3dd834:
    if (ctx->pc == 0x3DD834u) {
        ctx->pc = 0x3DD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD830u;
        // 0x3dd834: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD838u;
        goto label_3dd838;
    }
    ctx->pc = 0x3DD830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD838u);
        ctx->pc = 0x3DD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD830u;
        // 0x3dd834: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD830u, 0x3DD838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD838u;
label_3dd838:
    // 0x3dd838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dd838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd83c:
    // 0x3dd83c: 0xc0ea14c  jal         func_3A8530
label_3dd840:
    if (ctx->pc == 0x3DD840u) {
        ctx->pc = 0x3DD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD83Cu;
        // 0x3dd840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD844u;
        goto label_3dd844;
    }
    ctx->pc = 0x3DD83Cu;
    SET_GPR_U32(ctx, 31, 0x3DD844u);
    ctx->pc = 0x3DD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD83Cu;
    // 0x3dd840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DD83Cu, 0x3DD844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD844u;
label_3dd844:
    // 0x3dd844: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dd844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd848:
    // 0x3dd848: 0xc0ea12a  jal         func_3A84A8
label_3dd84c:
    if (ctx->pc == 0x3DD84Cu) {
        ctx->pc = 0x3DD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD848u;
        // 0x3dd84c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD850u;
        goto label_3dd850;
    }
    ctx->pc = 0x3DD848u;
    SET_GPR_U32(ctx, 31, 0x3DD850u);
    ctx->pc = 0x3DD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD848u;
    // 0x3dd84c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD848u, 0x3DD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD850u;
label_3dd850:
    // 0x3dd850: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dd850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd854:
    // 0x3dd854: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd858:
    // 0x3dd858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dd858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd85c:
    // 0x3dd85c: 0xc0ea12a  jal         func_3A84A8
label_3dd860:
    if (ctx->pc == 0x3DD860u) {
        ctx->pc = 0x3DD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD85Cu;
        // 0x3dd860: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD864u;
        goto label_3dd864;
    }
    ctx->pc = 0x3DD85Cu;
    SET_GPR_U32(ctx, 31, 0x3DD864u);
    ctx->pc = 0x3DD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD85Cu;
    // 0x3dd860: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD85Cu, 0x3DD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD864u;
label_3dd864:
    // 0x3dd864: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3dd864u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd868:
    // 0x3dd868: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3dd868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dd86c:
    // 0x3dd86c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3dd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3dd870:
    // 0x3dd870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd874:
    // 0x3dd874: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3dd874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3dd878:
    // 0x3dd878: 0xc0e858c  jal         func_3A1630
label_3dd87c:
    if (ctx->pc == 0x3DD87Cu) {
        ctx->pc = 0x3DD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD878u;
        // 0x3dd87c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD880u;
        goto label_3dd880;
    }
    ctx->pc = 0x3DD878u;
    SET_GPR_U32(ctx, 31, 0x3DD880u);
    ctx->pc = 0x3DD87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD878u;
    // 0x3dd87c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD878u, 0x3DD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD880u;
label_3dd880:
    // 0x3dd880: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3dd880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd884:
    // 0x3dd884: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3dd884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3dd888:
    // 0x3dd888: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3dd888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dd88c:
    // 0x3dd88c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3dd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3dd890:
    // 0x3dd890: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dd890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3dd894:
    // 0x3dd894: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3dd894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3dd898:
    // 0x3dd898: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3dd898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3dd89c:
    // 0x3dd89c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3dd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3dd8a0:
    // 0x3dd8a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3dd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3dd8a4:
    // 0x3dd8a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3dd8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dd8a8:
    // 0x3dd8a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3dd8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd8ac:
    // 0x3dd8ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dd8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd8b0:
    // 0x3dd8b0: 0x3e00008  jr          $ra
label_3dd8b4:
    if (ctx->pc == 0x3DD8B4u) {
        ctx->pc = 0x3DD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8B0u;
        // 0x3dd8b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD8B8u;
        goto label_fallthrough_0x3dd8b0;
    }
    ctx->pc = 0x3DD8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8B0u;
        // 0x3dd8b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dd8b0:
    ctx->pc = 0x3DD8B8u;
}
