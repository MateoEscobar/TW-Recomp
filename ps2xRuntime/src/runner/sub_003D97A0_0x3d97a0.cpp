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

// Function: sub_003D97A0
// Address: 0x3d97a0 - 0x3d98b0
void sub_003D97A0_0x3d97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D97A0_0x3d97a0");
#endif

    switch (ctx->pc) {
        case 0x3d97a0u: goto label_3d97a0;
        case 0x3d97a4u: goto label_3d97a4;
        case 0x3d97a8u: goto label_3d97a8;
        case 0x3d97acu: goto label_3d97ac;
        case 0x3d97b0u: goto label_3d97b0;
        case 0x3d97b4u: goto label_3d97b4;
        case 0x3d97b8u: goto label_3d97b8;
        case 0x3d97bcu: goto label_3d97bc;
        case 0x3d97c0u: goto label_3d97c0;
        case 0x3d97c4u: goto label_3d97c4;
        case 0x3d97c8u: goto label_3d97c8;
        case 0x3d97ccu: goto label_3d97cc;
        case 0x3d97d0u: goto label_3d97d0;
        case 0x3d97d4u: goto label_3d97d4;
        case 0x3d97d8u: goto label_3d97d8;
        case 0x3d97dcu: goto label_3d97dc;
        case 0x3d97e0u: goto label_3d97e0;
        case 0x3d97e4u: goto label_3d97e4;
        case 0x3d97e8u: goto label_3d97e8;
        case 0x3d97ecu: goto label_3d97ec;
        case 0x3d97f0u: goto label_3d97f0;
        case 0x3d97f4u: goto label_3d97f4;
        case 0x3d97f8u: goto label_3d97f8;
        case 0x3d97fcu: goto label_3d97fc;
        case 0x3d9800u: goto label_3d9800;
        case 0x3d9804u: goto label_3d9804;
        case 0x3d9808u: goto label_3d9808;
        case 0x3d980cu: goto label_3d980c;
        case 0x3d9810u: goto label_3d9810;
        case 0x3d9814u: goto label_3d9814;
        case 0x3d9818u: goto label_3d9818;
        case 0x3d981cu: goto label_3d981c;
        case 0x3d9820u: goto label_3d9820;
        case 0x3d9824u: goto label_3d9824;
        case 0x3d9828u: goto label_3d9828;
        case 0x3d982cu: goto label_3d982c;
        case 0x3d9830u: goto label_3d9830;
        case 0x3d9834u: goto label_3d9834;
        case 0x3d9838u: goto label_3d9838;
        case 0x3d983cu: goto label_3d983c;
        case 0x3d9840u: goto label_3d9840;
        case 0x3d9844u: goto label_3d9844;
        case 0x3d9848u: goto label_3d9848;
        case 0x3d984cu: goto label_3d984c;
        case 0x3d9850u: goto label_3d9850;
        case 0x3d9854u: goto label_3d9854;
        case 0x3d9858u: goto label_3d9858;
        case 0x3d985cu: goto label_3d985c;
        case 0x3d9860u: goto label_3d9860;
        case 0x3d9864u: goto label_3d9864;
        case 0x3d9868u: goto label_3d9868;
        case 0x3d986cu: goto label_3d986c;
        case 0x3d9870u: goto label_3d9870;
        case 0x3d9874u: goto label_3d9874;
        case 0x3d9878u: goto label_3d9878;
        case 0x3d987cu: goto label_3d987c;
        case 0x3d9880u: goto label_3d9880;
        case 0x3d9884u: goto label_3d9884;
        case 0x3d9888u: goto label_3d9888;
        case 0x3d988cu: goto label_3d988c;
        case 0x3d9890u: goto label_3d9890;
        case 0x3d9894u: goto label_3d9894;
        case 0x3d9898u: goto label_3d9898;
        case 0x3d989cu: goto label_3d989c;
        case 0x3d98a0u: goto label_3d98a0;
        case 0x3d98a4u: goto label_3d98a4;
        case 0x3d98a8u: goto label_3d98a8;
        case 0x3d98acu: goto label_3d98ac;
        default: break;
    }

    ctx->pc = 0x3d97a0u;

label_3d97a0:
    // 0x3d97a0: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3d97a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3d97a4:
    // 0x3d97a4: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3d97a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3d97a8:
    // 0x3d97a8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3d97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3d97ac:
    // 0x3d97ac: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3d97acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3d97b0:
    // 0x3d97b0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3d97b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3d97b4:
    // 0x3d97b4: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3d97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3d97b8:
    // 0x3d97b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d97bc:
    // 0x3d97bc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d97bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d97c0:
    // 0x3d97c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d97c4:
    // 0x3d97c4: 0x40f809  jalr        $v0
label_3d97c8:
    if (ctx->pc == 0x3D97C8u) {
        ctx->pc = 0x3D97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97C4u;
        // 0x3d97c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D97CCu;
        goto label_3d97cc;
    }
    ctx->pc = 0x3D97C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D97CCu);
        ctx->pc = 0x3D97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97C4u;
        // 0x3d97c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D97C4u, 0x3D97CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D97CCu;
label_3d97cc:
    // 0x3d97cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d97ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d97d0:
    // 0x3d97d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d97d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d97d4:
    // 0x3d97d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d97d8:
    // 0x3d97d8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d97dc:
    // 0x3d97dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d97e0:
    // 0x3d97e0: 0x0  nop
    ctx->pc = 0x3d97e0u;
    // NOP
label_3d97e4:
    // 0x3d97e4: 0x0  nop
    ctx->pc = 0x3d97e4u;
    // NOP
label_3d97e8:
    // 0x3d97e8: 0x0  nop
    ctx->pc = 0x3d97e8u;
    // NOP
label_3d97ec:
    // 0x3d97ec: 0x0  nop
    ctx->pc = 0x3d97ecu;
    // NOP
label_3d97f0:
    // 0x3d97f0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d97f4:
    if (ctx->pc == 0x3D97F4u) {
        ctx->pc = 0x3D97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97F0u;
        // 0x3d97f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D97F8u;
        goto label_3d97f8;
    }
    ctx->pc = 0x3D97F0u;
    {
        const bool branch_taken_0x3d97f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97F0u;
        // 0x3d97f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d97f0) {
            ctx->pc = 0x3D97E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d97e0;
        }
    }
    ctx->pc = 0x3D97F8u;
label_3d97f8:
    // 0x3d97f8: 0xc138ddc  jal         func_4E3770
label_3d97fc:
    if (ctx->pc == 0x3D97FCu) {
        ctx->pc = 0x3D97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97F8u;
        // 0x3d97fc: 0x3c103260  lui         $s0, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12896 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9800u;
        goto label_3d9800;
    }
    ctx->pc = 0x3D97F8u;
    SET_GPR_U32(ctx, 31, 0x3D9800u);
    ctx->pc = 0x3D97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D97F8u;
    // 0x3d97fc: 0x3c103260  lui         $s0, 0x3260 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12896 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D97F8u, 0x3D9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9800u;
label_3d9800:
    // 0x3d9800: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3d9800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3d9804:
    // 0x3d9804: 0x3c0226ac  lui         $v0, 0x26AC
    ctx->pc = 0x3d9804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9900 << 16));
label_3d9808:
    // 0x3d9808: 0x361071de  ori         $s0, $s0, 0x71DE
    ctx->pc = 0x3d9808u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)29150);
label_3d980c:
    // 0x3d980c: 0x3442304b  ori         $v0, $v0, 0x304B
    ctx->pc = 0x3d980cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12363);
label_3d9810:
    // 0x3d9810: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3d9810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d9814:
    // 0x3d9814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d9818:
    // 0x3d9818: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_3d981c:
    if (ctx->pc == 0x3D981Cu) {
        ctx->pc = 0x3D981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9818u;
        // 0x3d981c: 0x45800a  movz        $s0, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9820u;
        goto label_3d9820;
    }
    ctx->pc = 0x3D9818u;
    {
        const bool branch_taken_0x3d9818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9818u;
        // 0x3d981c: 0x45800a  movz        $s0, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9818) {
            ctx->pc = 0x3D9838u;
            goto label_3d9838;
        }
    }
    ctx->pc = 0x3D9820u;
label_3d9820:
    // 0x3d9820: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3d9820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3d9824:
    // 0x3d9824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d9824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9828:
    // 0x3d9828: 0xc0440c6  jal         func_110318
label_3d982c:
    if (ctx->pc == 0x3D982Cu) {
        ctx->pc = 0x3D982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9828u;
        // 0x3d982c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9830u;
        goto label_3d9830;
    }
    ctx->pc = 0x3D9828u;
    SET_GPR_U32(ctx, 31, 0x3D9830u);
    ctx->pc = 0x3D982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9828u;
    // 0x3d982c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3D9828u, 0x3D9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9830u;
label_3d9830:
    // 0x3d9830: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d9834:
    if (ctx->pc == 0x3D9834u) {
        ctx->pc = 0x3D9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9830u;
        // 0x3d9834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9838u;
        goto label_3d9838;
    }
    ctx->pc = 0x3D9830u;
    {
        const bool branch_taken_0x3d9830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9830u;
        // 0x3d9834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9830) {
            ctx->pc = 0x3D9898u;
            goto label_3d9898;
        }
    }
    ctx->pc = 0x3D9838u;
label_3d9838:
    // 0x3d9838: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3d9838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3d983c:
    // 0x3d983c: 0xc0e90ca  jal         func_3A4328
label_3d9840:
    if (ctx->pc == 0x3D9840u) {
        ctx->pc = 0x3D9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D983Cu;
        // 0x3d9840: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9844u;
        goto label_3d9844;
    }
    ctx->pc = 0x3D983Cu;
    SET_GPR_U32(ctx, 31, 0x3D9844u);
    ctx->pc = 0x3D9840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D983Cu;
    // 0x3d9840: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D983Cu, 0x3D9844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9844u;
label_3d9844:
    // 0x3d9844: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3d9844u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d9848:
    // 0x3d9848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d984c:
    // 0x3d984c: 0xc043d5e  jal         func_10F578
label_3d9850:
    if (ctx->pc == 0x3D9850u) {
        ctx->pc = 0x3D9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D984Cu;
        // 0x3d9850: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9854u;
        goto label_3d9854;
    }
    ctx->pc = 0x3D984Cu;
    SET_GPR_U32(ctx, 31, 0x3D9854u);
    ctx->pc = 0x3D9850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D984Cu;
    // 0x3d9850: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3D984Cu, 0x3D9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9854u;
label_3d9854:
    // 0x3d9854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d9858:
    if (ctx->pc == 0x3D9858u) {
        ctx->pc = 0x3D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9854u;
        // 0x3d9858: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D985Cu;
        goto label_3d985c;
    }
    ctx->pc = 0x3D9854u;
    {
        const bool branch_taken_0x3d9854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9854u;
        // 0x3d9858: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9854) {
            ctx->pc = 0x3D9870u;
            goto label_3d9870;
        }
    }
    ctx->pc = 0x3D985Cu;
label_3d985c:
    // 0x3d985c: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x3d985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d9860:
    // 0x3d9860: 0xc04410c  jal         func_110430
label_3d9864:
    if (ctx->pc == 0x3D9864u) {
        ctx->pc = 0x3D9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9860u;
        // 0x3d9864: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9868u;
        goto label_3d9868;
    }
    ctx->pc = 0x3D9860u;
    SET_GPR_U32(ctx, 31, 0x3D9868u);
    ctx->pc = 0x3D9864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9860u;
    // 0x3d9864: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x3D9860u, 0x3D9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9868u;
label_3d9868:
    // 0x3d9868: 0x1000000b  b           . + 4 + (0xB << 2)
label_3d986c:
    if (ctx->pc == 0x3D986Cu) {
        ctx->pc = 0x3D986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9868u;
        // 0x3d986c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9870u;
        goto label_3d9870;
    }
    ctx->pc = 0x3D9868u;
    {
        const bool branch_taken_0x3d9868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9868u;
        // 0x3d986c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9868) {
            ctx->pc = 0x3D9898u;
            goto label_3d9898;
        }
    }
    ctx->pc = 0x3D9870u;
label_3d9870:
    // 0x3d9870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d9870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d9874:
    // 0x3d9874: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d9874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d9878:
    // 0x3d9878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d9878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d987c:
    // 0x3d987c: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x3d987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d9880:
    // 0x3d9880: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d9880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d9884:
    // 0x3d9884: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3d9884u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3d9888:
    // 0x3d9888: 0xc043f74  jal         func_10FDD0
label_3d988c:
    if (ctx->pc == 0x3D988Cu) {
        ctx->pc = 0x3D988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9888u;
        // 0x3d988c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9890u;
        goto label_3d9890;
    }
    ctx->pc = 0x3D9888u;
    SET_GPR_U32(ctx, 31, 0x3D9890u);
    ctx->pc = 0x3D988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9888u;
    // 0x3d988c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3D9888u, 0x3D9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9890u;
label_3d9890:
    // 0x3d9890: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d9890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d9894:
    // 0x3d9894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9898:
    // 0x3d9898: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3d9898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d989c:
    // 0x3d989c: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3d989cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d98a0:
    // 0x3d98a0: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3d98a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d98a4:
    // 0x3d98a4: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3d98a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d98a8:
    // 0x3d98a8: 0x3e00008  jr          $ra
label_3d98ac:
    if (ctx->pc == 0x3D98ACu) {
        ctx->pc = 0x3D98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98A8u;
        // 0x3d98ac: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D98B0u;
        goto label_fallthrough_0x3d98a8;
    }
    ctx->pc = 0x3D98A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98A8u;
        // 0x3d98ac: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D98A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d98a8:
    ctx->pc = 0x3D98B0u;
}
