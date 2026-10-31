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

// Function: sub_0030F6B0
// Address: 0x30f6b0 - 0x30f7e0
void sub_0030F6B0_0x30f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F6B0_0x30f6b0");
#endif

    switch (ctx->pc) {
        case 0x30f6d4u: goto label_30f6d4;
        case 0x30f708u: goto label_30f708;
        case 0x30f718u: goto label_30f718;
        case 0x30f754u: goto label_30f754;
        case 0x30f768u: goto label_30f768;
        case 0x30f77cu: goto label_30f77c;
        case 0x30f788u: goto label_30f788;
        case 0x30f7b8u: goto label_30f7b8;
        case 0x30f7c0u: goto label_30f7c0;
        default: break;
    }

    ctx->pc = 0x30f6b0u;

    // 0x30f6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30f6b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30f6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30f6b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30f6bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30f6c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30f6c4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30f6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f6cc: 0xc0c3d5c  jal         func_30F570
    ctx->pc = 0x30F6CCu;
    SET_GPR_U32(ctx, 31, 0x30F6D4u);
    ctx->pc = 0x30F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F6CCu;
    // 0x30f6d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F570u, 0x30F6CCu, 0x30F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F6D4u;
label_30f6d4:
    // 0x30f6d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f6d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f6dc: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x30f6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x30f6e0: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x30F6E0u;
    {
        const bool branch_taken_0x30f6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6E0u;
        // 0x30f6e4: 0x24b001b0  addiu       $s0, $a1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6e0) {
            ctx->pc = 0x30F7A0u;
            goto label_30f7a0;
        }
    }
    ctx->pc = 0x30F6E8u;
    // 0x30f6e8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x30f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x30f6ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30f6f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x30f6f4: 0x249413d0  addiu       $s4, $a0, 0x13D0
    ctx->pc = 0x30f6f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 5072));
    // 0x30f6f8: 0x245213e0  addiu       $s2, $v0, 0x13E0
    ctx->pc = 0x30f6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5088));
    // 0x30f6fc: 0x247313f0  addiu       $s3, $v1, 0x13F0
    ctx->pc = 0x30f6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5104));
    // 0x30f700: 0xc05959e  jal         func_165678
    ctx->pc = 0x30F700u;
    SET_GPR_U32(ctx, 31, 0x30F708u);
    ctx->pc = 0x30F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F700u;
    // 0x30f704: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30F700u, 0x30F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F708u;
label_30f708:
    // 0x30f708: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30F708u;
    {
        const bool branch_taken_0x30f708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F708u;
        // 0x30f70c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f708) {
            ctx->pc = 0x30F744u;
            goto label_30f744;
        }
    }
    ctx->pc = 0x30F710u;
    // 0x30f710: 0xc087502  jal         func_21D408
    ctx->pc = 0x30F710u;
    SET_GPR_U32(ctx, 31, 0x30F718u);
    ctx->pc = 0x30F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F710u;
    // 0x30f714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F710u, 0x30F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F718u;
label_30f718:
    // 0x30f718: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30f71c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30f720: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F720u;
    {
        const bool branch_taken_0x30f720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F720u;
        // 0x30f724: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f720) {
            ctx->pc = 0x30F744u;
            goto label_30f744;
        }
    }
    ctx->pc = 0x30F728u;
    // 0x30f728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30f72c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x30f730: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x30f730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x30f734: 0x24521410  addiu       $s2, $v0, 0x1410
    ctx->pc = 0x30f734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5136));
    // 0x30f738: 0x24731420  addiu       $s3, $v1, 0x1420
    ctx->pc = 0x30f738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x30f73c: 0x24941400  addiu       $s4, $a0, 0x1400
    ctx->pc = 0x30f73cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x30f740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30f740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30f744:
    // 0x30f744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f748: 0x24050256  addiu       $a1, $zero, 0x256
    ctx->pc = 0x30f748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x30f74c: 0xc05905e  jal         func_164178
    ctx->pc = 0x30F74Cu;
    SET_GPR_U32(ctx, 31, 0x30F754u);
    ctx->pc = 0x30F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F74Cu;
    // 0x30f750: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x30F74Cu, 0x30F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F754u;
label_30f754:
    // 0x30f754: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30f754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f75c: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x30f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x30f760: 0xc05905e  jal         func_164178
    ctx->pc = 0x30F760u;
    SET_GPR_U32(ctx, 31, 0x30F768u);
    ctx->pc = 0x30F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F760u;
    // 0x30f764: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x30F760u, 0x30F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F768u;
label_30f768:
    // 0x30f768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f76c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30f76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f770: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x30f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x30f774: 0xc05905e  jal         func_164178
    ctx->pc = 0x30F774u;
    SET_GPR_U32(ctx, 31, 0x30F77Cu);
    ctx->pc = 0x30F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F774u;
    // 0x30f778: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x30F774u, 0x30F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F77Cu;
label_30f77c:
    // 0x30f77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f780: 0xc0c3e1a  jal         func_30F868
    ctx->pc = 0x30F780u;
    SET_GPR_U32(ctx, 31, 0x30F788u);
    ctx->pc = 0x30F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F780u;
    // 0x30f784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F868u, 0x30F780u, 0x30F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F788u;
label_30f788:
    // 0x30f788: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30f78c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x30f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x30f790: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x30f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x30f794: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x30f794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x30f798: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30F798u;
    {
        const bool branch_taken_0x30f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F798u;
        // 0x30f79c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f798) {
            ctx->pc = 0x30F7C0u;
            goto label_30f7c0;
        }
    }
    ctx->pc = 0x30F7A0u;
label_30f7a0:
    // 0x30f7a0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x30f7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x30f7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7a8: 0x24c613c0  addiu       $a2, $a2, 0x13C0
    ctx->pc = 0x30f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5056));
    // 0x30f7ac: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x30f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x30f7b0: 0xc05905e  jal         func_164178
    ctx->pc = 0x30F7B0u;
    SET_GPR_U32(ctx, 31, 0x30F7B8u);
    ctx->pc = 0x30F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F7B0u;
    // 0x30f7b4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x30F7B0u, 0x30F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F7B8u;
label_30f7b8:
    // 0x30f7b8: 0xc05a56e  jal         func_1695B8
    ctx->pc = 0x30F7B8u;
    SET_GPR_U32(ctx, 31, 0x30F7C0u);
    ctx->pc = 0x30F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F7B8u;
    // 0x30f7bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1695B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1695B8u, 0x30F7B8u, 0x30F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F7C0u;
label_30f7c0:
    // 0x30f7c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30f7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f7c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30f7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f7c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30f7c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f7cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30f7ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f7d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30f7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7D8u;
        // 0x30f7dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F7E0u;
}
