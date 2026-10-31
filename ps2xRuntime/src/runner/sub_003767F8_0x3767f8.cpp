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

// Function: sub_003767F8
// Address: 0x3767f8 - 0x376e78
void sub_003767F8_0x3767f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003767F8_0x3767f8");
#endif

    switch (ctx->pc) {
        case 0x376838u: goto label_376838;
        case 0x376840u: goto label_376840;
        case 0x376854u: goto label_376854;
        case 0x37685cu: goto label_37685c;
        case 0x3768b0u: goto label_3768b0;
        case 0x3768dcu: goto label_3768dc;
        case 0x3768e8u: goto label_3768e8;
        case 0x376900u: goto label_376900;
        case 0x376908u: goto label_376908;
        case 0x376920u: goto label_376920;
        case 0x376938u: goto label_376938;
        case 0x376940u: goto label_376940;
        case 0x376958u: goto label_376958;
        case 0x376970u: goto label_376970;
        case 0x376978u: goto label_376978;
        case 0x376990u: goto label_376990;
        case 0x3769a8u: goto label_3769a8;
        case 0x3769b0u: goto label_3769b0;
        case 0x3769c8u: goto label_3769c8;
        case 0x3769e0u: goto label_3769e0;
        case 0x3769e8u: goto label_3769e8;
        case 0x376a00u: goto label_376a00;
        case 0x376a18u: goto label_376a18;
        case 0x376a20u: goto label_376a20;
        case 0x376a38u: goto label_376a38;
        case 0x376a50u: goto label_376a50;
        case 0x376a58u: goto label_376a58;
        case 0x376a70u: goto label_376a70;
        case 0x376a88u: goto label_376a88;
        case 0x376a90u: goto label_376a90;
        case 0x376aa8u: goto label_376aa8;
        case 0x376ac0u: goto label_376ac0;
        case 0x376ac8u: goto label_376ac8;
        case 0x376ae0u: goto label_376ae0;
        case 0x376af8u: goto label_376af8;
        case 0x376b00u: goto label_376b00;
        case 0x376b18u: goto label_376b18;
        case 0x376b30u: goto label_376b30;
        case 0x376b38u: goto label_376b38;
        case 0x376b98u: goto label_376b98;
        case 0x376ba0u: goto label_376ba0;
        case 0x376bb8u: goto label_376bb8;
        case 0x376bd0u: goto label_376bd0;
        case 0x376be4u: goto label_376be4;
        case 0x376c00u: goto label_376c00;
        case 0x376c10u: goto label_376c10;
        case 0x376c24u: goto label_376c24;
        case 0x376c38u: goto label_376c38;
        case 0x376c48u: goto label_376c48;
        case 0x376c5cu: goto label_376c5c;
        case 0x376c70u: goto label_376c70;
        case 0x376c80u: goto label_376c80;
        case 0x376c94u: goto label_376c94;
        case 0x376ca8u: goto label_376ca8;
        case 0x376cb8u: goto label_376cb8;
        case 0x376cccu: goto label_376ccc;
        case 0x376ce0u: goto label_376ce0;
        case 0x376cf0u: goto label_376cf0;
        case 0x376d04u: goto label_376d04;
        case 0x376d18u: goto label_376d18;
        case 0x376d28u: goto label_376d28;
        case 0x376d3cu: goto label_376d3c;
        case 0x376d50u: goto label_376d50;
        case 0x376d64u: goto label_376d64;
        case 0x376d78u: goto label_376d78;
        case 0x376d90u: goto label_376d90;
        case 0x376da4u: goto label_376da4;
        case 0x376db8u: goto label_376db8;
        case 0x376dd0u: goto label_376dd0;
        case 0x376de4u: goto label_376de4;
        case 0x376df8u: goto label_376df8;
        case 0x376e10u: goto label_376e10;
        case 0x376e24u: goto label_376e24;
        case 0x376e38u: goto label_376e38;
        default: break;
    }

    ctx->pc = 0x3767f8u;

    // 0x3767f8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3767f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3767fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3767fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376800: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x376800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x376804: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x376804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x376808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37680c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37680cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376810: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x376810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x376814: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x376814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x376818: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x376818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x37681c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x37681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x376820: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x376820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x376824: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x376824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x376828: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x376828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x37682c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x37682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x376830: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376830u;
    SET_GPR_U32(ctx, 31, 0x376838u);
    ctx->pc = 0x376834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376830u;
    // 0x376834: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376830u, 0x376838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376838u;
label_376838:
    // 0x376838: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376838u;
    SET_GPR_U32(ctx, 31, 0x376840u);
    ctx->pc = 0x37683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376838u;
    // 0x37683c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376838u, 0x376840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376840u;
label_376840:
    // 0x376840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376844: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x376844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x376848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37684c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37684Cu;
    SET_GPR_U32(ctx, 31, 0x376854u);
    ctx->pc = 0x376850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37684Cu;
    // 0x376850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37684Cu, 0x376854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376854u;
label_376854:
    // 0x376854: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376854u;
    SET_GPR_U32(ctx, 31, 0x37685Cu);
    ctx->pc = 0x376858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376854u;
    // 0x376858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376854u, 0x37685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37685Cu;
label_37685c:
    // 0x37685c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x37685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x376860: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x376860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x376864: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x376864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x376868: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x376868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x37686c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x37686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x376870: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x376870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x376874: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x376874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x376878: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x376878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
    // 0x37687c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x37687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x376880: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x376880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x376884: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x376884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376888: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x376888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37688c: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x37688cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x376890: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x376890u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x376894: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x376894u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x376898: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x376898u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37689c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3768a0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3768a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3768a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3768a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3768a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3768ac: 0x0  nop
    ctx->pc = 0x3768acu;
    // NOP
label_3768b0:
    // 0x3768b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3768b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3768b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3768b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3768b8: 0x0  nop
    ctx->pc = 0x3768b8u;
    // NOP
    // 0x3768bc: 0x0  nop
    ctx->pc = 0x3768bcu;
    // NOP
    // 0x3768c0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3768C0u;
    {
        const bool branch_taken_0x3768c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3768C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768C0u;
        // 0x3768c4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3768c0) {
            ctx->pc = 0x3768B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3768b0;
        }
    }
    ctx->pc = 0x3768C8u;
    // 0x3768c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3768c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3768ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3768d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3768d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768d4: 0xc102488  jal         func_409220
    ctx->pc = 0x3768D4u;
    SET_GPR_U32(ctx, 31, 0x3768DCu);
    ctx->pc = 0x3768D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3768D4u;
    // 0x3768d8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3768D4u, 0x3768DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3768DCu;
label_3768dc:
    // 0x3768dc: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x3768dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x3768e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3768e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768e4: 0x0  nop
    ctx->pc = 0x3768e4u;
    // NOP
label_3768e8:
    // 0x3768e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3768e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3768ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3768ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3768f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3768f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3768f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3768F8u;
    SET_GPR_U32(ctx, 31, 0x376900u);
    ctx->pc = 0x3768FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3768F8u;
    // 0x3768fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3768F8u, 0x376900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376900u;
label_376900:
    // 0x376900: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376900u;
    SET_GPR_U32(ctx, 31, 0x376908u);
    ctx->pc = 0x376904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376900u;
    // 0x376904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376900u, 0x376908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376908u;
label_376908:
    // 0x376908: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37690c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x37690cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x376910: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376910u;
    {
        const bool branch_taken_0x376910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376910u;
        // 0x376914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376910) {
            ctx->pc = 0x3768E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3768e8;
        }
    }
    ctx->pc = 0x376918u;
    // 0x376918: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37691c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x37691cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_376920:
    // 0x376920: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376928: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37692c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37692cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376930: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376930u;
    SET_GPR_U32(ctx, 31, 0x376938u);
    ctx->pc = 0x376934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376930u;
    // 0x376934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376930u, 0x376938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376938u;
label_376938:
    // 0x376938: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376938u;
    SET_GPR_U32(ctx, 31, 0x376940u);
    ctx->pc = 0x37693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376938u;
    // 0x37693c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376938u, 0x376940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376940u;
label_376940:
    // 0x376940: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376944: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x376944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x376948: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376948u;
    {
        const bool branch_taken_0x376948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376948u;
        // 0x37694c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376948) {
            ctx->pc = 0x376920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376920;
        }
    }
    ctx->pc = 0x376950u;
    // 0x376950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376954: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x376954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_376958:
    // 0x376958: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37695c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376960: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x376964: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376968: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376968u;
    SET_GPR_U32(ctx, 31, 0x376970u);
    ctx->pc = 0x37696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376968u;
    // 0x37696c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376968u, 0x376970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376970u;
label_376970:
    // 0x376970: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376970u;
    SET_GPR_U32(ctx, 31, 0x376978u);
    ctx->pc = 0x376974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376970u;
    // 0x376974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376970u, 0x376978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376978u;
label_376978:
    // 0x376978: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37697c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x37697cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x376980: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376980u;
    {
        const bool branch_taken_0x376980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376980u;
        // 0x376984: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376980) {
            ctx->pc = 0x376958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376958;
        }
    }
    ctx->pc = 0x376988u;
    // 0x376988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37698c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x37698cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_376990:
    // 0x376990: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376998: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x376998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37699c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37699cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769a0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3769A0u;
    SET_GPR_U32(ctx, 31, 0x3769A8u);
    ctx->pc = 0x3769A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769A0u;
    // 0x3769a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3769A0u, 0x3769A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769A8u;
label_3769a8:
    // 0x3769a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3769A8u;
    SET_GPR_U32(ctx, 31, 0x3769B0u);
    ctx->pc = 0x3769ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769A8u;
    // 0x3769ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3769A8u, 0x3769B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769B0u;
label_3769b0:
    // 0x3769b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3769b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3769b4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3769b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3769b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3769B8u;
    {
        const bool branch_taken_0x3769b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3769BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769B8u;
        // 0x3769bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769b8) {
            ctx->pc = 0x376990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376990;
        }
    }
    ctx->pc = 0x3769C0u;
    // 0x3769c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3769c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769c4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3769c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3769c8:
    // 0x3769c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3769c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3769cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3769ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3769d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3769d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3769d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769d8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3769D8u;
    SET_GPR_U32(ctx, 31, 0x3769E0u);
    ctx->pc = 0x3769DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769D8u;
    // 0x3769dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3769D8u, 0x3769E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769E0u;
label_3769e0:
    // 0x3769e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3769E0u;
    SET_GPR_U32(ctx, 31, 0x3769E8u);
    ctx->pc = 0x3769E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769E0u;
    // 0x3769e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3769E0u, 0x3769E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769E8u;
label_3769e8:
    // 0x3769e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3769e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3769ec: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3769ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3769f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3769F0u;
    {
        const bool branch_taken_0x3769f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3769F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769F0u;
        // 0x3769f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769f0) {
            ctx->pc = 0x3769C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3769c8;
        }
    }
    ctx->pc = 0x3769F8u;
    // 0x3769f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3769f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769fc: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x3769fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_376a00:
    // 0x376a00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x376a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x376a0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a10: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376A10u;
    SET_GPR_U32(ctx, 31, 0x376A18u);
    ctx->pc = 0x376A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A10u;
    // 0x376a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376A10u, 0x376A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A18u;
label_376a18:
    // 0x376a18: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376A18u;
    SET_GPR_U32(ctx, 31, 0x376A20u);
    ctx->pc = 0x376A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A18u;
    // 0x376a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376A18u, 0x376A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A20u;
label_376a20:
    // 0x376a20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376a24: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376a28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376A28u;
    {
        const bool branch_taken_0x376a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A28u;
        // 0x376a2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a28) {
            ctx->pc = 0x376A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376a00;
        }
    }
    ctx->pc = 0x376A30u;
    // 0x376a30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a34: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x376a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_376a38:
    // 0x376a38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x376a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x376a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a48: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376A48u;
    SET_GPR_U32(ctx, 31, 0x376A50u);
    ctx->pc = 0x376A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A48u;
    // 0x376a4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376A48u, 0x376A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A50u;
label_376a50:
    // 0x376a50: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376A50u;
    SET_GPR_U32(ctx, 31, 0x376A58u);
    ctx->pc = 0x376A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A50u;
    // 0x376a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376A50u, 0x376A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A58u;
label_376a58:
    // 0x376a58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376a5c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376a60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376A60u;
    {
        const bool branch_taken_0x376a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A60u;
        // 0x376a64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a60) {
            ctx->pc = 0x376A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376a38;
        }
    }
    ctx->pc = 0x376A68u;
    // 0x376a68: 0x8fb1010c  lw          $s1, 0x10C($sp)
    ctx->pc = 0x376a68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x376a6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376a70:
    // 0x376a70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x376a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x376a7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a80: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376A80u;
    SET_GPR_U32(ctx, 31, 0x376A88u);
    ctx->pc = 0x376A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A80u;
    // 0x376a84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376A80u, 0x376A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A88u;
label_376a88:
    // 0x376a88: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376A88u;
    SET_GPR_U32(ctx, 31, 0x376A90u);
    ctx->pc = 0x376A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A88u;
    // 0x376a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376A88u, 0x376A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A90u;
label_376a90:
    // 0x376a90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376a94: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376a98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376A98u;
    {
        const bool branch_taken_0x376a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A98u;
        // 0x376a9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a98) {
            ctx->pc = 0x376A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376a70;
        }
    }
    ctx->pc = 0x376AA0u;
    // 0x376aa0: 0x8fb10110  lw          $s1, 0x110($sp)
    ctx->pc = 0x376aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x376aa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376aa8:
    // 0x376aa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ab0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x376ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x376ab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ab8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376AB8u;
    SET_GPR_U32(ctx, 31, 0x376AC0u);
    ctx->pc = 0x376ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376AB8u;
    // 0x376abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376AB8u, 0x376AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AC0u;
label_376ac0:
    // 0x376ac0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376AC0u;
    SET_GPR_U32(ctx, 31, 0x376AC8u);
    ctx->pc = 0x376AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376AC0u;
    // 0x376ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376AC0u, 0x376AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AC8u;
label_376ac8:
    // 0x376ac8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376acc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376ad0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376AD0u;
    {
        const bool branch_taken_0x376ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AD0u;
        // 0x376ad4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ad0) {
            ctx->pc = 0x376AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376aa8;
        }
    }
    ctx->pc = 0x376AD8u;
    // 0x376ad8: 0x8fb10114  lw          $s1, 0x114($sp)
    ctx->pc = 0x376ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x376adc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376ae0:
    // 0x376ae0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ae8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x376ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x376aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376af0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376AF0u;
    SET_GPR_U32(ctx, 31, 0x376AF8u);
    ctx->pc = 0x376AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376AF0u;
    // 0x376af4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376AF0u, 0x376AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AF8u;
label_376af8:
    // 0x376af8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376AF8u;
    SET_GPR_U32(ctx, 31, 0x376B00u);
    ctx->pc = 0x376AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376AF8u;
    // 0x376afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376AF8u, 0x376B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B00u;
label_376b00:
    // 0x376b00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376b04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376b08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376B08u;
    {
        const bool branch_taken_0x376b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B08u;
        // 0x376b0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b08) {
            ctx->pc = 0x376AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ae0;
        }
    }
    ctx->pc = 0x376B10u;
    // 0x376b10: 0x8fb10118  lw          $s1, 0x118($sp)
    ctx->pc = 0x376b10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x376b14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376b18:
    // 0x376b18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376b1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b20: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x376b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x376b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b28: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x376B28u;
    SET_GPR_U32(ctx, 31, 0x376B30u);
    ctx->pc = 0x376B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B28u;
    // 0x376b2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x376B28u, 0x376B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B30u;
label_376b30:
    // 0x376b30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376B30u;
    SET_GPR_U32(ctx, 31, 0x376B38u);
    ctx->pc = 0x376B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B30u;
    // 0x376b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376B30u, 0x376B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B38u;
label_376b38:
    // 0x376b38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x376b3c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376b40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376B40u;
    {
        const bool branch_taken_0x376b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B40u;
        // 0x376b44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b40) {
            ctx->pc = 0x376B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376b18;
        }
    }
    ctx->pc = 0x376B48u;
    // 0x376b48: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x376b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x376b4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x376b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x376b50: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x376b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x376b54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x376b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b58: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x376b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x376b5c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x376b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b60: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x376b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x376b64: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x376b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b68: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x376b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x376b6c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x376b6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x376b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x376b74: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x376b74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b78: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x376b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x376b7c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x376b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x376b80: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x376b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x376b84: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x376b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x376b88: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x376b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x376b8c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x376b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x376b90: 0xc0c2690  jal         func_309A40
    ctx->pc = 0x376B90u;
    SET_GPR_U32(ctx, 31, 0x376B98u);
    ctx->pc = 0x376B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B90u;
    // 0x376b94: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309A40u, 0x376B90u, 0x376B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B98u;
label_376b98:
    // 0x376b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x376b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_376ba0:
    // 0x376ba0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x376ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x376ba4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x376ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x376ba8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x376ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x376bac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x376bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x376bb0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376BB0u;
    SET_GPR_U32(ctx, 31, 0x376BB8u);
    ctx->pc = 0x376BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BB0u;
    // 0x376bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376BB0u, 0x376BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BB8u;
label_376bb8:
    // 0x376bb8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x376BB8u;
    {
        const bool branch_taken_0x376bb8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x376BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BB8u;
        // 0x376bbc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bb8) {
            ctx->pc = 0x376BD4u;
            goto label_376bd4;
        }
    }
    ctx->pc = 0x376BC0u;
    // 0x376bc0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x376bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x376bc4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x376bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x376bc8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x376BC8u;
    SET_GPR_U32(ctx, 31, 0x376BD0u);
    ctx->pc = 0x376BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BC8u;
    // 0x376bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x376BC8u, 0x376BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BD0u;
label_376bd0:
    // 0x376bd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376bd4:
    // 0x376bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bdc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376BDCu;
    SET_GPR_U32(ctx, 31, 0x376BE4u);
    ctx->pc = 0x376BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BDCu;
    // 0x376be0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376BDCu, 0x376BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BE4u;
label_376be4:
    // 0x376be4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376be8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x376be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x376bec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x376BECu;
    {
        const bool branch_taken_0x376bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BECu;
        // 0x376bf0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bec) {
            ctx->pc = 0x376BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ba0;
        }
    }
    ctx->pc = 0x376BF4u;
    // 0x376bf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bf8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x376bfc: 0x0  nop
    ctx->pc = 0x376bfcu;
    // NOP
label_376c00:
    // 0x376c00: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x376c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x376c04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376c08: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376C08u;
    SET_GPR_U32(ctx, 31, 0x376C10u);
    ctx->pc = 0x376C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C08u;
    // 0x376c0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376C08u, 0x376C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C10u;
label_376c10:
    // 0x376c10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376c1c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376C1Cu;
    SET_GPR_U32(ctx, 31, 0x376C24u);
    ctx->pc = 0x376C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C1Cu;
    // 0x376c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376C1Cu, 0x376C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C24u;
label_376c24:
    // 0x376c24: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x376c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x376c28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376C28u;
    {
        const bool branch_taken_0x376c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C28u;
        // 0x376c2c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c28) {
            ctx->pc = 0x376C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376c00;
        }
    }
    ctx->pc = 0x376C30u;
    // 0x376c30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_376c38:
    // 0x376c38: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x376c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x376c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376c40: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376C40u;
    SET_GPR_U32(ctx, 31, 0x376C48u);
    ctx->pc = 0x376C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C40u;
    // 0x376c44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376C40u, 0x376C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C48u;
label_376c48:
    // 0x376c48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x376c54: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376C54u;
    SET_GPR_U32(ctx, 31, 0x376C5Cu);
    ctx->pc = 0x376C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C54u;
    // 0x376c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376C54u, 0x376C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C5Cu;
label_376c5c:
    // 0x376c5c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x376c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x376c60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376C60u;
    {
        const bool branch_taken_0x376c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C60u;
        // 0x376c64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c60) {
            ctx->pc = 0x376C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376c38;
        }
    }
    ctx->pc = 0x376C68u;
    // 0x376c68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_376c70:
    // 0x376c70: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x376c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x376c74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376c78: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376C78u;
    SET_GPR_U32(ctx, 31, 0x376C80u);
    ctx->pc = 0x376C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C78u;
    // 0x376c7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376C78u, 0x376C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C80u;
label_376c80:
    // 0x376c80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c88: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x376c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x376c8c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376C8Cu;
    SET_GPR_U32(ctx, 31, 0x376C94u);
    ctx->pc = 0x376C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C8Cu;
    // 0x376c90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376C8Cu, 0x376C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C94u;
label_376c94:
    // 0x376c94: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376c98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376C98u;
    {
        const bool branch_taken_0x376c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C98u;
        // 0x376c9c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c98) {
            ctx->pc = 0x376C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376c70;
        }
    }
    ctx->pc = 0x376CA0u;
    // 0x376ca0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ca4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_376ca8:
    // 0x376ca8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x376ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x376cac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376cb0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376CB0u;
    SET_GPR_U32(ctx, 31, 0x376CB8u);
    ctx->pc = 0x376CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CB0u;
    // 0x376cb4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376CB0u, 0x376CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CB8u;
label_376cb8:
    // 0x376cb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cc0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x376cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376cc4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376CC4u;
    SET_GPR_U32(ctx, 31, 0x376CCCu);
    ctx->pc = 0x376CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CC4u;
    // 0x376cc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376CC4u, 0x376CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CCCu;
label_376ccc:
    // 0x376ccc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376cd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376CD0u;
    {
        const bool branch_taken_0x376cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CD0u;
        // 0x376cd4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cd0) {
            ctx->pc = 0x376CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ca8;
        }
    }
    ctx->pc = 0x376CD8u;
    // 0x376cd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_376ce0:
    // 0x376ce0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x376ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x376ce4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376ce8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376CE8u;
    SET_GPR_U32(ctx, 31, 0x376CF0u);
    ctx->pc = 0x376CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CE8u;
    // 0x376cec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376CE8u, 0x376CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CF0u;
label_376cf0:
    // 0x376cf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cf8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x376cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x376cfc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376CFCu;
    SET_GPR_U32(ctx, 31, 0x376D04u);
    ctx->pc = 0x376D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CFCu;
    // 0x376d00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376CFCu, 0x376D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D04u;
label_376d04:
    // 0x376d04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376d08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376D08u;
    {
        const bool branch_taken_0x376d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D08u;
        // 0x376d0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d08) {
            ctx->pc = 0x376CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ce0;
        }
    }
    ctx->pc = 0x376D10u;
    // 0x376d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_376d18:
    // 0x376d18: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x376d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x376d1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376d20: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376D20u;
    SET_GPR_U32(ctx, 31, 0x376D28u);
    ctx->pc = 0x376D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D20u;
    // 0x376d24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376D20u, 0x376D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D28u;
label_376d28:
    // 0x376d28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d30: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x376d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x376d34: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376D34u;
    SET_GPR_U32(ctx, 31, 0x376D3Cu);
    ctx->pc = 0x376D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D34u;
    // 0x376d38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376D34u, 0x376D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D3Cu;
label_376d3c:
    // 0x376d3c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376d40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x376D40u;
    {
        const bool branch_taken_0x376d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D40u;
        // 0x376d44: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d40) {
            ctx->pc = 0x376D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376d18;
        }
    }
    ctx->pc = 0x376D48u;
    // 0x376d48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d4c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x376d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_376d50:
    // 0x376d50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x376d54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376d58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x376d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376d5c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376D5Cu;
    SET_GPR_U32(ctx, 31, 0x376D64u);
    ctx->pc = 0x376D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D5Cu;
    // 0x376d60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376D5Cu, 0x376D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D64u;
label_376d64:
    // 0x376d64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d6c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x376d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x376d70: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376D70u;
    SET_GPR_U32(ctx, 31, 0x376D78u);
    ctx->pc = 0x376D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D70u;
    // 0x376d74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376D70u, 0x376D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D78u;
label_376d78:
    // 0x376d78: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376d7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x376D7Cu;
    {
        const bool branch_taken_0x376d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D7Cu;
        // 0x376d80: 0x8fa3010c  lw          $v1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d7c) {
            ctx->pc = 0x376D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376d50;
        }
    }
    ctx->pc = 0x376D84u;
    // 0x376d84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d88: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x376d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x376d8c: 0x0  nop
    ctx->pc = 0x376d8cu;
    // NOP
label_376d90:
    // 0x376d90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x376d94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376d98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x376d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376d9c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376D9Cu;
    SET_GPR_U32(ctx, 31, 0x376DA4u);
    ctx->pc = 0x376DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D9Cu;
    // 0x376da0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376D9Cu, 0x376DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DA4u;
label_376da4:
    // 0x376da4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376dac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x376dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x376db0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376DB0u;
    SET_GPR_U32(ctx, 31, 0x376DB8u);
    ctx->pc = 0x376DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376DB0u;
    // 0x376db4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376DB0u, 0x376DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DB8u;
label_376db8:
    // 0x376db8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376dbc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x376DBCu;
    {
        const bool branch_taken_0x376dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DBCu;
        // 0x376dc0: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376dbc) {
            ctx->pc = 0x376D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376d90;
        }
    }
    ctx->pc = 0x376DC4u;
    // 0x376dc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376dc8: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x376dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x376dcc: 0x0  nop
    ctx->pc = 0x376dccu;
    // NOP
label_376dd0:
    // 0x376dd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x376dd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376dd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x376dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376ddc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376DDCu;
    SET_GPR_U32(ctx, 31, 0x376DE4u);
    ctx->pc = 0x376DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376DDCu;
    // 0x376de0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376DDCu, 0x376DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DE4u;
label_376de4:
    // 0x376de4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376de8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376dec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x376decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x376df0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376DF0u;
    SET_GPR_U32(ctx, 31, 0x376DF8u);
    ctx->pc = 0x376DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376DF0u;
    // 0x376df4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376DF0u, 0x376DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DF8u;
label_376df8:
    // 0x376df8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376dfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x376DFCu;
    {
        const bool branch_taken_0x376dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DFCu;
        // 0x376e00: 0x8fa30114  lw          $v1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376dfc) {
            ctx->pc = 0x376DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376dd0;
        }
    }
    ctx->pc = 0x376E04u;
    // 0x376e04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e08: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x376e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x376e0c: 0x0  nop
    ctx->pc = 0x376e0cu;
    // NOP
label_376e10:
    // 0x376e10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x376e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x376e14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x376e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376e18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x376e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376e1c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x376E1Cu;
    SET_GPR_U32(ctx, 31, 0x376E24u);
    ctx->pc = 0x376E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E1Cu;
    // 0x376e20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x376E1Cu, 0x376E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E24u;
label_376e24:
    // 0x376e24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x376e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e2c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x376e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x376e30: 0xc102576  jal         func_4095D8
    ctx->pc = 0x376E30u;
    SET_GPR_U32(ctx, 31, 0x376E38u);
    ctx->pc = 0x376E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E30u;
    // 0x376e34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x376E30u, 0x376E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E38u;
label_376e38:
    // 0x376e38: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x376e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376e3c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x376E3Cu;
    {
        const bool branch_taken_0x376e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E3Cu;
        // 0x376e40: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e3c) {
            ctx->pc = 0x376E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376e10;
        }
    }
    ctx->pc = 0x376E44u;
    // 0x376e44: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x376e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x376e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e4c: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x376e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x376e50: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x376e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x376e54: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x376e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x376e58: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x376e58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x376e5c: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x376e5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x376e60: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x376e60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x376e64: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x376e64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x376e68: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x376e68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x376e6c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x376e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x376e70: 0x3e00008  jr          $ra
    ctx->pc = 0x376E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E70u;
        // 0x376e74: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376E78u;
}
