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

// Function: sub_00394810
// Address: 0x394810 - 0x394920
void sub_00394810_0x394810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394810_0x394810");
#endif

    switch (ctx->pc) {
        case 0x394848u: goto label_394848;
        case 0x394854u: goto label_394854;
        case 0x394860u: goto label_394860;
        case 0x39487cu: goto label_39487c;
        case 0x394888u: goto label_394888;
        case 0x394898u: goto label_394898;
        case 0x3948a8u: goto label_3948a8;
        case 0x3948b0u: goto label_3948b0;
        case 0x3948c0u: goto label_3948c0;
        case 0x3948d0u: goto label_3948d0;
        case 0x3948dcu: goto label_3948dc;
        case 0x3948ecu: goto label_3948ec;
        case 0x3948fcu: goto label_3948fc;
        case 0x394904u: goto label_394904;
        default: break;
    }

    ctx->pc = 0x394810u;

    // 0x394810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x394810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x394814: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x394814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x394818: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x394818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x39481c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x394820: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x394820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x394824: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x394824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x394828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39482c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394830: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x394830u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x394834: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x394834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x394838: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x394838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39483c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x39483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x394840: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x394840u;
    SET_GPR_U32(ctx, 31, 0x394848u);
    ctx->pc = 0x394844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394840u;
    // 0x394844: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x394840u, 0x394848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394848u;
label_394848:
    // 0x394848: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x394848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x39484c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x39484Cu;
    SET_GPR_U32(ctx, 31, 0x394854u);
    ctx->pc = 0x394850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39484Cu;
    // 0x394850: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39484Cu, 0x394854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394854u;
label_394854:
    // 0x394854: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x394854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x394858: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x394858u;
    SET_GPR_U32(ctx, 31, 0x394860u);
    ctx->pc = 0x39485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394858u;
    // 0x39485c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x394858u, 0x394860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394860u;
label_394860:
    // 0x394860: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x394860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x394864: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x394864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x394868: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x394868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x39486c: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x39486cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x394870: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x394870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x394874: 0xc0cd518  jal         func_335460
    ctx->pc = 0x394874u;
    SET_GPR_U32(ctx, 31, 0x39487Cu);
    ctx->pc = 0x394878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394874u;
    // 0x394878: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x394874u, 0x39487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39487Cu;
label_39487c:
    // 0x39487c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x39487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x394880: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x394880u;
    SET_GPR_U32(ctx, 31, 0x394888u);
    ctx->pc = 0x394884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394880u;
    // 0x394884: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x394880u, 0x394888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394888u;
label_394888:
    // 0x394888: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x394888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x39488c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x39488cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x394890: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x394890u;
    SET_GPR_U32(ctx, 31, 0x394898u);
    ctx->pc = 0x394894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394890u;
    // 0x394894: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x394890u, 0x394898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394898u;
label_394898:
    // 0x394898: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x394898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x39489c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39489cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3948a0: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3948A0u;
    SET_GPR_U32(ctx, 31, 0x3948A8u);
    ctx->pc = 0x3948A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948A0u;
    // 0x3948a4: 0x24a50ee8  addiu       $a1, $a1, 0xEE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3948A0u, 0x3948A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948A8u;
label_3948a8:
    // 0x3948a8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3948A8u;
    SET_GPR_U32(ctx, 31, 0x3948B0u);
    ctx->pc = 0x3948ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948A8u;
    // 0x3948ac: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3948A8u, 0x3948B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948B0u;
label_3948b0:
    // 0x3948b0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3948b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3948b4: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x3948b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x3948b8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x3948B8u;
    SET_GPR_U32(ctx, 31, 0x3948C0u);
    ctx->pc = 0x3948BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948B8u;
    // 0x3948bc: 0x24a50f00  addiu       $a1, $a1, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3948B8u, 0x3948C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948C0u;
label_3948c0:
    // 0x3948c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3948C0u;
    {
        const bool branch_taken_0x3948c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948C0u;
        // 0x3948c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948c0) {
            ctx->pc = 0x394908u;
            goto label_394908;
        }
    }
    ctx->pc = 0x3948C8u;
    // 0x3948c8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3948C8u;
    SET_GPR_U32(ctx, 31, 0x3948D0u);
    ctx->pc = 0x3948CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948C8u;
    // 0x3948cc: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3948C8u, 0x3948D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948D0u;
label_3948d0:
    // 0x3948d0: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3948d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3948d4: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3948D4u;
    SET_GPR_U32(ctx, 31, 0x3948DCu);
    ctx->pc = 0x3948D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948D4u;
    // 0x3948d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3948D4u, 0x3948DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948DCu;
label_3948dc:
    // 0x3948dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3948dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3948e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3948e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3948e4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3948E4u;
    SET_GPR_U32(ctx, 31, 0x3948ECu);
    ctx->pc = 0x3948E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948E4u;
    // 0x3948e8: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3948E4u, 0x3948ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948ECu;
label_3948ec:
    // 0x3948ec: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3948ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3948f0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3948f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3948f4: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3948F4u;
    SET_GPR_U32(ctx, 31, 0x3948FCu);
    ctx->pc = 0x3948F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948F4u;
    // 0x3948f8: 0x24a50f10  addiu       $a1, $a1, 0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3948F4u, 0x3948FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948FCu;
label_3948fc:
    // 0x3948fc: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3948FCu;
    SET_GPR_U32(ctx, 31, 0x394904u);
    ctx->pc = 0x394900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948FCu;
    // 0x394900: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3948FCu, 0x394904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394904u;
label_394904:
    // 0x394904: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x394904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_394908:
    // 0x394908: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x394908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39490c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39490cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394914: 0x3e00008  jr          $ra
    ctx->pc = 0x394914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394914u;
        // 0x394918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39491Cu;
    // 0x39491c: 0x0  nop
    ctx->pc = 0x39491cu;
    // NOP
    ctx->pc = 0x394920u;
}
