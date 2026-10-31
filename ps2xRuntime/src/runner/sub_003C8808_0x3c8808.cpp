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

// Function: sub_003C8808
// Address: 0x3c8808 - 0x3c8970
void sub_003C8808_0x3c8808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8808_0x3c8808");
#endif

    switch (ctx->pc) {
        case 0x3c8808u: goto label_3c8808;
        case 0x3c880cu: goto label_3c880c;
        case 0x3c8810u: goto label_3c8810;
        case 0x3c8814u: goto label_3c8814;
        case 0x3c8818u: goto label_3c8818;
        case 0x3c881cu: goto label_3c881c;
        case 0x3c8820u: goto label_3c8820;
        case 0x3c8824u: goto label_3c8824;
        case 0x3c8828u: goto label_3c8828;
        case 0x3c882cu: goto label_3c882c;
        case 0x3c8830u: goto label_3c8830;
        case 0x3c8834u: goto label_3c8834;
        case 0x3c8838u: goto label_3c8838;
        case 0x3c883cu: goto label_3c883c;
        case 0x3c8840u: goto label_3c8840;
        case 0x3c8844u: goto label_3c8844;
        case 0x3c8848u: goto label_3c8848;
        case 0x3c884cu: goto label_3c884c;
        case 0x3c8850u: goto label_3c8850;
        case 0x3c8854u: goto label_3c8854;
        case 0x3c8858u: goto label_3c8858;
        case 0x3c885cu: goto label_3c885c;
        case 0x3c8860u: goto label_3c8860;
        case 0x3c8864u: goto label_3c8864;
        case 0x3c8868u: goto label_3c8868;
        case 0x3c886cu: goto label_3c886c;
        case 0x3c8870u: goto label_3c8870;
        case 0x3c8874u: goto label_3c8874;
        case 0x3c8878u: goto label_3c8878;
        case 0x3c887cu: goto label_3c887c;
        case 0x3c8880u: goto label_3c8880;
        case 0x3c8884u: goto label_3c8884;
        case 0x3c8888u: goto label_3c8888;
        case 0x3c888cu: goto label_3c888c;
        case 0x3c8890u: goto label_3c8890;
        case 0x3c8894u: goto label_3c8894;
        case 0x3c8898u: goto label_3c8898;
        case 0x3c889cu: goto label_3c889c;
        case 0x3c88a0u: goto label_3c88a0;
        case 0x3c88a4u: goto label_3c88a4;
        case 0x3c88a8u: goto label_3c88a8;
        case 0x3c88acu: goto label_3c88ac;
        case 0x3c88b0u: goto label_3c88b0;
        case 0x3c88b4u: goto label_3c88b4;
        case 0x3c88b8u: goto label_3c88b8;
        case 0x3c88bcu: goto label_3c88bc;
        case 0x3c88c0u: goto label_3c88c0;
        case 0x3c88c4u: goto label_3c88c4;
        case 0x3c88c8u: goto label_3c88c8;
        case 0x3c88ccu: goto label_3c88cc;
        case 0x3c88d0u: goto label_3c88d0;
        case 0x3c88d4u: goto label_3c88d4;
        case 0x3c88d8u: goto label_3c88d8;
        case 0x3c88dcu: goto label_3c88dc;
        case 0x3c88e0u: goto label_3c88e0;
        case 0x3c88e4u: goto label_3c88e4;
        case 0x3c88e8u: goto label_3c88e8;
        case 0x3c88ecu: goto label_3c88ec;
        case 0x3c88f0u: goto label_3c88f0;
        case 0x3c88f4u: goto label_3c88f4;
        case 0x3c88f8u: goto label_3c88f8;
        case 0x3c88fcu: goto label_3c88fc;
        case 0x3c8900u: goto label_3c8900;
        case 0x3c8904u: goto label_3c8904;
        case 0x3c8908u: goto label_3c8908;
        case 0x3c890cu: goto label_3c890c;
        case 0x3c8910u: goto label_3c8910;
        case 0x3c8914u: goto label_3c8914;
        case 0x3c8918u: goto label_3c8918;
        case 0x3c891cu: goto label_3c891c;
        case 0x3c8920u: goto label_3c8920;
        case 0x3c8924u: goto label_3c8924;
        case 0x3c8928u: goto label_3c8928;
        case 0x3c892cu: goto label_3c892c;
        case 0x3c8930u: goto label_3c8930;
        case 0x3c8934u: goto label_3c8934;
        case 0x3c8938u: goto label_3c8938;
        case 0x3c893cu: goto label_3c893c;
        case 0x3c8940u: goto label_3c8940;
        case 0x3c8944u: goto label_3c8944;
        case 0x3c8948u: goto label_3c8948;
        case 0x3c894cu: goto label_3c894c;
        case 0x3c8950u: goto label_3c8950;
        case 0x3c8954u: goto label_3c8954;
        case 0x3c8958u: goto label_3c8958;
        case 0x3c895cu: goto label_3c895c;
        case 0x3c8960u: goto label_3c8960;
        case 0x3c8964u: goto label_3c8964;
        case 0x3c8968u: goto label_3c8968;
        case 0x3c896cu: goto label_3c896c;
        default: break;
    }

    ctx->pc = 0x3c8808u;

label_3c8808:
    // 0x3c8808: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3c8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3c880c:
    // 0x3c880c: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3c880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3c8810:
    // 0x3c8810: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3c8810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3c8814:
    // 0x3c8814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c8814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8818:
    // 0x3c8818: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3c8818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3c881c:
    // 0x3c881c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c881cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8820:
    // 0x3c8820: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3c8820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3c8824:
    // 0x3c8824: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x3c8824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_3c8828:
    // 0x3c8828: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c882c:
    // 0x3c882c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c882cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c8830:
    // 0x3c8830: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c8834:
    // 0x3c8834: 0x40f809  jalr        $v0
label_3c8838:
    if (ctx->pc == 0x3C8838u) {
        ctx->pc = 0x3C8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8834u;
        // 0x3c8838: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C883Cu;
        goto label_3c883c;
    }
    ctx->pc = 0x3C8834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C883Cu);
        ctx->pc = 0x3C8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8834u;
        // 0x3c8838: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8834u, 0x3C883Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C883Cu;
label_3c883c:
    // 0x3c883c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8840:
    // 0x3c8840: 0xc0ea14c  jal         func_3A8530
label_3c8844:
    if (ctx->pc == 0x3C8844u) {
        ctx->pc = 0x3C8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8840u;
        // 0x3c8844: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8848u;
        goto label_3c8848;
    }
    ctx->pc = 0x3C8840u;
    SET_GPR_U32(ctx, 31, 0x3C8848u);
    ctx->pc = 0x3C8844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8840u;
    // 0x3c8844: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C8840u, 0x3C8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8848u;
label_3c8848:
    // 0x3c8848: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c8848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c884c:
    // 0x3c884c: 0xc0ea12a  jal         func_3A84A8
label_3c8850:
    if (ctx->pc == 0x3C8850u) {
        ctx->pc = 0x3C8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C884Cu;
        // 0x3c8850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8854u;
        goto label_3c8854;
    }
    ctx->pc = 0x3C884Cu;
    SET_GPR_U32(ctx, 31, 0x3C8854u);
    ctx->pc = 0x3C8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C884Cu;
    // 0x3c8850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C884Cu, 0x3C8854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8854u;
label_3c8854:
    // 0x3c8854: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c8854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8858:
    // 0x3c8858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c8858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c885c:
    // 0x3c885c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c885cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8860:
    // 0x3c8860: 0xc0ea12a  jal         func_3A84A8
label_3c8864:
    if (ctx->pc == 0x3C8864u) {
        ctx->pc = 0x3C8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8860u;
        // 0x3c8864: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8868u;
        goto label_3c8868;
    }
    ctx->pc = 0x3C8860u;
    SET_GPR_U32(ctx, 31, 0x3C8868u);
    ctx->pc = 0x3C8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8860u;
    // 0x3c8864: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C8860u, 0x3C8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8868u;
label_3c8868:
    // 0x3c8868: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c8868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c886c:
    // 0x3c886c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3c886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3c8870:
    // 0x3c8870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8874:
    // 0x3c8874: 0xc0e858c  jal         func_3A1630
label_3c8878:
    if (ctx->pc == 0x3C8878u) {
        ctx->pc = 0x3C8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8874u;
        // 0x3c8878: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C887Cu;
        goto label_3c887c;
    }
    ctx->pc = 0x3C8874u;
    SET_GPR_U32(ctx, 31, 0x3C887Cu);
    ctx->pc = 0x3C8878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8874u;
    // 0x3c8878: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C8874u, 0x3C887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C887Cu;
label_3c887c:
    // 0x3c887c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3c887cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8880:
    // 0x3c8880: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c8880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c8884:
    // 0x3c8884: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3c8884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3c8888:
    // 0x3c8888: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x3c8888u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_3c888c:
    // 0x3c888c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8890:
    // 0x3c8890: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3c8890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3c8894:
    // 0x3c8894: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c8894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c8898:
    // 0x3c8898: 0x40f809  jalr        $v0
label_3c889c:
    if (ctx->pc == 0x3C889Cu) {
        ctx->pc = 0x3C889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8898u;
        // 0x3c889c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88A0u;
        goto label_3c88a0;
    }
    ctx->pc = 0x3C8898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C88A0u);
        ctx->pc = 0x3C889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8898u;
        // 0x3c889c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8898u, 0x3C88A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C88A0u;
label_3c88a0:
    // 0x3c88a0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c88a4:
    // 0x3c88a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c88a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c88a8:
    // 0x3c88a8: 0xc10c313  jal         func_430C4C
label_3c88ac:
    if (ctx->pc == 0x3C88ACu) {
        ctx->pc = 0x3C88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88A8u;
        // 0x3c88ac: 0x24a54468  addiu       $a1, $a1, 0x4468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88B0u;
        goto label_3c88b0;
    }
    ctx->pc = 0x3C88A8u;
    SET_GPR_U32(ctx, 31, 0x3C88B0u);
    ctx->pc = 0x3C88ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88A8u;
    // 0x3c88ac: 0x24a54468  addiu       $a1, $a1, 0x4468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3C88A8u, 0x3C88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88B0u;
label_3c88b0:
    // 0x3c88b0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3c88b4:
    if (ctx->pc == 0x3C88B4u) {
        ctx->pc = 0x3C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88B0u;
        // 0x3c88b4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88B8u;
        goto label_3c88b8;
    }
    ctx->pc = 0x3C88B0u;
    {
        const bool branch_taken_0x3c88b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c88b0) {
            ctx->pc = 0x3C88B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C88B0u;
            // 0x3c88b4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8900u;
            goto label_3c8900;
        }
    }
    ctx->pc = 0x3C88B8u;
label_3c88b8:
    // 0x3c88b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c88bc:
    // 0x3c88bc: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x3c88bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
label_3c88c0:
    // 0x3c88c0: 0x34219375  ori         $at, $at, 0x9375
    ctx->pc = 0x3c88c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37749);
label_3c88c4:
    // 0x3c88c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c88c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c88c8:
    // 0x3c88c8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3c88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3c88cc:
    // 0x3c88cc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3c88ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c88d0:
    // 0x3c88d0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c88d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c88d4:
    // 0x3c88d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c88d8:
    // 0x3c88d8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c88d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c88dc:
    // 0x3c88dc: 0x26104480  addiu       $s0, $s0, 0x4480
    ctx->pc = 0x3c88dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17536));
label_3c88e0:
    // 0x3c88e0: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3c88e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3c88e4:
    // 0x3c88e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c88e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c88e8:
    // 0x3c88e8: 0xafb20460  sw          $s2, 0x460($sp)
    ctx->pc = 0x3c88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 18));
label_3c88ec:
    // 0x3c88ec: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3c88ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c88f0:
    // 0x3c88f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c88f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c88f4:
    // 0x3c88f4: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3c88f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c88f8:
    // 0x3c88f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_3c88fc:
    if (ctx->pc == 0x3C88FCu) {
        ctx->pc = 0x3C88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88F8u;
        // 0x3c88fc: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8900u;
        goto label_3c8900;
    }
    ctx->pc = 0x3C88F8u;
    {
        const bool branch_taken_0x3c88f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88F8u;
        // 0x3c88fc: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88f8) {
            ctx->pc = 0x3C893Cu;
            goto label_3c893c;
        }
    }
    ctx->pc = 0x3C8900u;
label_3c8900:
    // 0x3c8900: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3c8900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c8904:
    // 0x3c8904: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3c8904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3c8908:
    // 0x3c8908: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c890c:
    // 0x3c890c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c890cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8910:
    // 0x3c8910: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c8910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c8914:
    // 0x3c8914: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c8914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8918:
    // 0x3c8918: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3c8918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c891c:
    // 0x3c891c: 0x26104480  addiu       $s0, $s0, 0x4480
    ctx->pc = 0x3c891cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17536));
label_3c8920:
    // 0x3c8920: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3c8920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3c8924:
    // 0x3c8924: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3c8924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3c8928:
    // 0x3c8928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c892c:
    // 0x3c892c: 0xafb20460  sw          $s2, 0x460($sp)
    ctx->pc = 0x3c892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 18));
label_3c8930:
    // 0x3c8930: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3c8930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c8934:
    // 0x3c8934: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x3c8934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
label_3c8938:
    // 0x3c8938: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3c8938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c893c:
    // 0x3c893c: 0xc0e9fd0  jal         func_3A7F40
label_3c8940:
    if (ctx->pc == 0x3C8940u) {
        ctx->pc = 0x3C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C893Cu;
        // 0x3c8940: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8944u;
        goto label_3c8944;
    }
    ctx->pc = 0x3C893Cu;
    SET_GPR_U32(ctx, 31, 0x3C8944u);
    ctx->pc = 0x3C8940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C893Cu;
    // 0x3c8940: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C893Cu, 0x3C8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8944u;
label_3c8944:
    // 0x3c8944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8948:
    // 0x3c8948: 0xc0f15bc  jal         func_3C56F0
label_3c894c:
    if (ctx->pc == 0x3C894Cu) {
        ctx->pc = 0x3C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8948u;
        // 0x3c894c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8950u;
        goto label_3c8950;
    }
    ctx->pc = 0x3C8948u;
    SET_GPR_U32(ctx, 31, 0x3C8950u);
    ctx->pc = 0x3C894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8948u;
    // 0x3c894c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8948u, 0x3C8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8950u;
label_3c8950:
    // 0x3c8950: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3c8950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3c8954:
    // 0x3c8954: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3c8954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c8958:
    // 0x3c8958: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3c8958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c895c:
    // 0x3c895c: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3c895cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c8960:
    // 0x3c8960: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3c8960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c8964:
    // 0x3c8964: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3c8964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c8968:
    // 0x3c8968: 0x3e00008  jr          $ra
label_3c896c:
    if (ctx->pc == 0x3C896Cu) {
        ctx->pc = 0x3C896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8968u;
        // 0x3c896c: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8970u;
        goto label_fallthrough_0x3c8968;
    }
    ctx->pc = 0x3C8968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8968u;
        // 0x3c896c: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c8968:
    ctx->pc = 0x3C8970u;
}
