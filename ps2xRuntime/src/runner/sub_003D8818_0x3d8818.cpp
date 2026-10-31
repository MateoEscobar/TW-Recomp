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

// Function: sub_003D8818
// Address: 0x3d8818 - 0x3d88d8
void sub_003D8818_0x3d8818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8818_0x3d8818");
#endif

    switch (ctx->pc) {
        case 0x3d8818u: goto label_3d8818;
        case 0x3d881cu: goto label_3d881c;
        case 0x3d8820u: goto label_3d8820;
        case 0x3d8824u: goto label_3d8824;
        case 0x3d8828u: goto label_3d8828;
        case 0x3d882cu: goto label_3d882c;
        case 0x3d8830u: goto label_3d8830;
        case 0x3d8834u: goto label_3d8834;
        case 0x3d8838u: goto label_3d8838;
        case 0x3d883cu: goto label_3d883c;
        case 0x3d8840u: goto label_3d8840;
        case 0x3d8844u: goto label_3d8844;
        case 0x3d8848u: goto label_3d8848;
        case 0x3d884cu: goto label_3d884c;
        case 0x3d8850u: goto label_3d8850;
        case 0x3d8854u: goto label_3d8854;
        case 0x3d8858u: goto label_3d8858;
        case 0x3d885cu: goto label_3d885c;
        case 0x3d8860u: goto label_3d8860;
        case 0x3d8864u: goto label_3d8864;
        case 0x3d8868u: goto label_3d8868;
        case 0x3d886cu: goto label_3d886c;
        case 0x3d8870u: goto label_3d8870;
        case 0x3d8874u: goto label_3d8874;
        case 0x3d8878u: goto label_3d8878;
        case 0x3d887cu: goto label_3d887c;
        case 0x3d8880u: goto label_3d8880;
        case 0x3d8884u: goto label_3d8884;
        case 0x3d8888u: goto label_3d8888;
        case 0x3d888cu: goto label_3d888c;
        case 0x3d8890u: goto label_3d8890;
        case 0x3d8894u: goto label_3d8894;
        case 0x3d8898u: goto label_3d8898;
        case 0x3d889cu: goto label_3d889c;
        case 0x3d88a0u: goto label_3d88a0;
        case 0x3d88a4u: goto label_3d88a4;
        case 0x3d88a8u: goto label_3d88a8;
        case 0x3d88acu: goto label_3d88ac;
        case 0x3d88b0u: goto label_3d88b0;
        case 0x3d88b4u: goto label_3d88b4;
        case 0x3d88b8u: goto label_3d88b8;
        case 0x3d88bcu: goto label_3d88bc;
        case 0x3d88c0u: goto label_3d88c0;
        case 0x3d88c4u: goto label_3d88c4;
        case 0x3d88c8u: goto label_3d88c8;
        case 0x3d88ccu: goto label_3d88cc;
        case 0x3d88d0u: goto label_3d88d0;
        case 0x3d88d4u: goto label_3d88d4;
        default: break;
    }

    ctx->pc = 0x3d8818u;

label_3d8818:
    // 0x3d8818: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3d8818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3d881c:
    // 0x3d881c: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3d881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3d8820:
    // 0x3d8820: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3d8820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3d8824:
    // 0x3d8824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8828:
    // 0x3d8828: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3d8828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3d882c:
    // 0x3d882c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d882cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8830:
    // 0x3d8830: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3d8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3d8834:
    // 0x3d8834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d8834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d8838:
    // 0x3d8838: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d883c:
    // 0x3d883c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8840:
    // 0x3d8840: 0x40f809  jalr        $v0
label_3d8844:
    if (ctx->pc == 0x3D8844u) {
        ctx->pc = 0x3D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8840u;
        // 0x3d8844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8848u;
        goto label_3d8848;
    }
    ctx->pc = 0x3D8840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8848u);
        ctx->pc = 0x3D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8840u;
        // 0x3d8844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8840u, 0x3D8848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8848u;
label_3d8848:
    // 0x3d8848: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d8848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d884c:
    // 0x3d884c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3d884cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3d8850:
    // 0x3d8850: 0xc0e858c  jal         func_3A1630
label_3d8854:
    if (ctx->pc == 0x3D8854u) {
        ctx->pc = 0x3D8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8850u;
        // 0x3d8854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8858u;
        goto label_3d8858;
    }
    ctx->pc = 0x3D8850u;
    SET_GPR_U32(ctx, 31, 0x3D8858u);
    ctx->pc = 0x3D8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8850u;
    // 0x3d8854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8850u, 0x3D8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8858u;
label_3d8858:
    // 0x3d8858: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3d8858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3d885c:
    // 0x3d885c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d8860:
    // 0x3d8860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8864:
    // 0x3d8864: 0xc0ea14c  jal         func_3A8530
label_3d8868:
    if (ctx->pc == 0x3D8868u) {
        ctx->pc = 0x3D8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8864u;
        // 0x3d8868: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D886Cu;
        goto label_3d886c;
    }
    ctx->pc = 0x3D8864u;
    SET_GPR_U32(ctx, 31, 0x3D886Cu);
    ctx->pc = 0x3D8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8864u;
    // 0x3d8868: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D8864u, 0x3D886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D886Cu;
label_3d886c:
    // 0x3d886c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8870:
    // 0x3d8870: 0xc0ea12a  jal         func_3A84A8
label_3d8874:
    if (ctx->pc == 0x3D8874u) {
        ctx->pc = 0x3D8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8870u;
        // 0x3d8874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8878u;
        goto label_3d8878;
    }
    ctx->pc = 0x3D8870u;
    SET_GPR_U32(ctx, 31, 0x3D8878u);
    ctx->pc = 0x3D8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8870u;
    // 0x3d8874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8870u, 0x3D8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8878u;
label_3d8878:
    // 0x3d8878: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d887c:
    // 0x3d887c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8880:
    // 0x3d8880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8884:
    // 0x3d8884: 0xc0ea12a  jal         func_3A84A8
label_3d8888:
    if (ctx->pc == 0x3D8888u) {
        ctx->pc = 0x3D8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8884u;
        // 0x3d8888: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D888Cu;
        goto label_3d888c;
    }
    ctx->pc = 0x3D8884u;
    SET_GPR_U32(ctx, 31, 0x3D888Cu);
    ctx->pc = 0x3D8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8884u;
    // 0x3d8888: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8884u, 0x3D888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D888Cu;
label_3d888c:
    // 0x3d888c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d888cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8890:
    // 0x3d8890: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3d8890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d8894:
    // 0x3d8894: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d8894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d8898:
    // 0x3d8898: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d8898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d889c:
    // 0x3d889c: 0x261050d0  addiu       $s0, $s0, 0x50D0
    ctx->pc = 0x3d889cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20688));
label_3d88a0:
    // 0x3d88a0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d88a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d88a4:
    // 0x3d88a4: 0xc0e9f6a  jal         func_3A7DA8
label_3d88a8:
    if (ctx->pc == 0x3D88A8u) {
        ctx->pc = 0x3D88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88A4u;
        // 0x3d88a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D88ACu;
        goto label_3d88ac;
    }
    ctx->pc = 0x3D88A4u;
    SET_GPR_U32(ctx, 31, 0x3D88ACu);
    ctx->pc = 0x3D88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D88A4u;
    // 0x3d88a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3D88A4u, 0x3D88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D88ACu;
label_3d88ac:
    // 0x3d88ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d88acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d88b0:
    // 0x3d88b0: 0xc0f15bc  jal         func_3C56F0
label_3d88b4:
    if (ctx->pc == 0x3D88B4u) {
        ctx->pc = 0x3D88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88B0u;
        // 0x3d88b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D88B8u;
        goto label_3d88b8;
    }
    ctx->pc = 0x3D88B0u;
    SET_GPR_U32(ctx, 31, 0x3D88B8u);
    ctx->pc = 0x3D88B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D88B0u;
    // 0x3d88b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D88B0u, 0x3D88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D88B8u;
label_3d88b8:
    // 0x3d88b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d88bc:
    // 0x3d88bc: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3d88bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d88c0:
    // 0x3d88c0: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3d88c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d88c4:
    // 0x3d88c4: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3d88c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d88c8:
    // 0x3d88c8: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3d88c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d88cc:
    // 0x3d88cc: 0x3e00008  jr          $ra
label_3d88d0:
    if (ctx->pc == 0x3D88D0u) {
        ctx->pc = 0x3D88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88CCu;
        // 0x3d88d0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D88D4u;
        goto label_3d88d4;
    }
    ctx->pc = 0x3D88CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88CCu;
        // 0x3d88d0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D88CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D88D4u;
label_3d88d4:
    // 0x3d88d4: 0x0  nop
    ctx->pc = 0x3d88d4u;
    // NOP
    ctx->pc = 0x3d88d8u;
}
