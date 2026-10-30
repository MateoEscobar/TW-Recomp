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

// Function: sub_001DA658
// Address: 0x1da658 - 0x1da880
void sub_001DA658_0x1da658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA658_0x1da658");
#endif

    switch (ctx->pc) {
        case 0x1da658u: goto label_1da658;
        case 0x1da65cu: goto label_1da65c;
        case 0x1da660u: goto label_1da660;
        case 0x1da664u: goto label_1da664;
        case 0x1da668u: goto label_1da668;
        case 0x1da66cu: goto label_1da66c;
        case 0x1da670u: goto label_1da670;
        case 0x1da674u: goto label_1da674;
        case 0x1da678u: goto label_1da678;
        case 0x1da67cu: goto label_1da67c;
        case 0x1da680u: goto label_1da680;
        case 0x1da684u: goto label_1da684;
        case 0x1da688u: goto label_1da688;
        case 0x1da68cu: goto label_1da68c;
        case 0x1da690u: goto label_1da690;
        case 0x1da694u: goto label_1da694;
        case 0x1da698u: goto label_1da698;
        case 0x1da69cu: goto label_1da69c;
        case 0x1da6a0u: goto label_1da6a0;
        case 0x1da6a4u: goto label_1da6a4;
        case 0x1da6a8u: goto label_1da6a8;
        case 0x1da6acu: goto label_1da6ac;
        case 0x1da6b0u: goto label_1da6b0;
        case 0x1da6b4u: goto label_1da6b4;
        case 0x1da6b8u: goto label_1da6b8;
        case 0x1da6bcu: goto label_1da6bc;
        case 0x1da6c0u: goto label_1da6c0;
        case 0x1da6c4u: goto label_1da6c4;
        case 0x1da6c8u: goto label_1da6c8;
        case 0x1da6ccu: goto label_1da6cc;
        case 0x1da6d0u: goto label_1da6d0;
        case 0x1da6d4u: goto label_1da6d4;
        case 0x1da6d8u: goto label_1da6d8;
        case 0x1da6dcu: goto label_1da6dc;
        case 0x1da6e0u: goto label_1da6e0;
        case 0x1da6e4u: goto label_1da6e4;
        case 0x1da6e8u: goto label_1da6e8;
        case 0x1da6ecu: goto label_1da6ec;
        case 0x1da6f0u: goto label_1da6f0;
        case 0x1da6f4u: goto label_1da6f4;
        case 0x1da6f8u: goto label_1da6f8;
        case 0x1da6fcu: goto label_1da6fc;
        case 0x1da700u: goto label_1da700;
        case 0x1da704u: goto label_1da704;
        case 0x1da708u: goto label_1da708;
        case 0x1da70cu: goto label_1da70c;
        case 0x1da710u: goto label_1da710;
        case 0x1da714u: goto label_1da714;
        case 0x1da718u: goto label_1da718;
        case 0x1da71cu: goto label_1da71c;
        case 0x1da720u: goto label_1da720;
        case 0x1da724u: goto label_1da724;
        case 0x1da728u: goto label_1da728;
        case 0x1da72cu: goto label_1da72c;
        case 0x1da730u: goto label_1da730;
        case 0x1da734u: goto label_1da734;
        case 0x1da738u: goto label_1da738;
        case 0x1da73cu: goto label_1da73c;
        case 0x1da740u: goto label_1da740;
        case 0x1da744u: goto label_1da744;
        case 0x1da748u: goto label_1da748;
        case 0x1da74cu: goto label_1da74c;
        case 0x1da750u: goto label_1da750;
        case 0x1da754u: goto label_1da754;
        case 0x1da758u: goto label_1da758;
        case 0x1da75cu: goto label_1da75c;
        case 0x1da760u: goto label_1da760;
        case 0x1da764u: goto label_1da764;
        case 0x1da768u: goto label_1da768;
        case 0x1da76cu: goto label_1da76c;
        case 0x1da770u: goto label_1da770;
        case 0x1da774u: goto label_1da774;
        case 0x1da778u: goto label_1da778;
        case 0x1da77cu: goto label_1da77c;
        case 0x1da780u: goto label_1da780;
        case 0x1da784u: goto label_1da784;
        case 0x1da788u: goto label_1da788;
        case 0x1da78cu: goto label_1da78c;
        case 0x1da790u: goto label_1da790;
        case 0x1da794u: goto label_1da794;
        case 0x1da798u: goto label_1da798;
        case 0x1da79cu: goto label_1da79c;
        case 0x1da7a0u: goto label_1da7a0;
        case 0x1da7a4u: goto label_1da7a4;
        case 0x1da7a8u: goto label_1da7a8;
        case 0x1da7acu: goto label_1da7ac;
        case 0x1da7b0u: goto label_1da7b0;
        case 0x1da7b4u: goto label_1da7b4;
        case 0x1da7b8u: goto label_1da7b8;
        case 0x1da7bcu: goto label_1da7bc;
        case 0x1da7c0u: goto label_1da7c0;
        case 0x1da7c4u: goto label_1da7c4;
        case 0x1da7c8u: goto label_1da7c8;
        case 0x1da7ccu: goto label_1da7cc;
        case 0x1da7d0u: goto label_1da7d0;
        case 0x1da7d4u: goto label_1da7d4;
        case 0x1da7d8u: goto label_1da7d8;
        case 0x1da7dcu: goto label_1da7dc;
        case 0x1da7e0u: goto label_1da7e0;
        case 0x1da7e4u: goto label_1da7e4;
        case 0x1da7e8u: goto label_1da7e8;
        case 0x1da7ecu: goto label_1da7ec;
        case 0x1da7f0u: goto label_1da7f0;
        case 0x1da7f4u: goto label_1da7f4;
        case 0x1da7f8u: goto label_1da7f8;
        case 0x1da7fcu: goto label_1da7fc;
        case 0x1da800u: goto label_1da800;
        case 0x1da804u: goto label_1da804;
        case 0x1da808u: goto label_1da808;
        case 0x1da80cu: goto label_1da80c;
        case 0x1da810u: goto label_1da810;
        case 0x1da814u: goto label_1da814;
        case 0x1da818u: goto label_1da818;
        case 0x1da81cu: goto label_1da81c;
        case 0x1da820u: goto label_1da820;
        case 0x1da824u: goto label_1da824;
        case 0x1da828u: goto label_1da828;
        case 0x1da82cu: goto label_1da82c;
        case 0x1da830u: goto label_1da830;
        case 0x1da834u: goto label_1da834;
        case 0x1da838u: goto label_1da838;
        case 0x1da83cu: goto label_1da83c;
        case 0x1da840u: goto label_1da840;
        case 0x1da844u: goto label_1da844;
        case 0x1da848u: goto label_1da848;
        case 0x1da84cu: goto label_1da84c;
        case 0x1da850u: goto label_1da850;
        case 0x1da854u: goto label_1da854;
        case 0x1da858u: goto label_1da858;
        case 0x1da85cu: goto label_1da85c;
        case 0x1da860u: goto label_1da860;
        case 0x1da864u: goto label_1da864;
        case 0x1da868u: goto label_1da868;
        case 0x1da86cu: goto label_1da86c;
        case 0x1da870u: goto label_1da870;
        case 0x1da874u: goto label_1da874;
        case 0x1da878u: goto label_1da878;
        case 0x1da87cu: goto label_1da87c;
        default: break;
    }

    ctx->pc = 0x1da658u;

label_1da658:
    // 0x1da658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1da658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1da65c:
    // 0x1da65c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1da65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1da660:
    // 0x1da660: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1da660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1da664:
    // 0x1da664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1da664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da668:
    // 0x1da668: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1da668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1da66c:
    // 0x1da66c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1da66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1da670:
    // 0x1da670: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1da670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1da674:
    // 0x1da674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1da678:
    // 0x1da678: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1da67c:
    // 0x1da67c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1da680:
    if (ctx->pc == 0x1DA680u) {
        ctx->pc = 0x1DA684u;
        goto label_1da684;
    }
    ctx->pc = 0x1DA67Cu;
    {
        const bool branch_taken_0x1da67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da67c) {
            ctx->pc = 0x1DA6A4u;
            goto label_1da6a4;
        }
    }
    ctx->pc = 0x1DA684u;
label_1da684:
    // 0x1da684: 0xc076a94  jal         func_1DAA50
label_1da688:
    if (ctx->pc == 0x1DA688u) {
        ctx->pc = 0x1DA68Cu;
        goto label_1da68c;
    }
    ctx->pc = 0x1DA684u;
    SET_GPR_U32(ctx, 31, 0x1DA68Cu);
    ctx->pc = 0x1DAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA50u, 0x1DA684u, 0x1DA68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA68Cu;
label_1da68c:
    // 0x1da68c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1da690:
    if (ctx->pc == 0x1DA690u) {
        ctx->pc = 0x1DA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA68Cu;
        // 0x1da690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA694u;
        goto label_1da694;
    }
    ctx->pc = 0x1DA68Cu;
    {
        const bool branch_taken_0x1da68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA68Cu;
        // 0x1da690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da68c) {
            ctx->pc = 0x1DA698u;
            goto label_1da698;
        }
    }
    ctx->pc = 0x1DA694u;
label_1da694:
    // 0x1da694: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1da694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1da698:
    // 0x1da698: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1da698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1da69c:
    // 0x1da69c: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_1da6a0:
    if (ctx->pc == 0x1DA6A0u) {
        ctx->pc = 0x1DA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA69Cu;
        // 0x1da6a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6A4u;
        goto label_1da6a4;
    }
    ctx->pc = 0x1DA69Cu;
    {
        const bool branch_taken_0x1da69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA69Cu;
        // 0x1da6a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da69c) {
            ctx->pc = 0x1DA864u;
            goto label_1da864;
        }
    }
    ctx->pc = 0x1DA6A4u;
label_1da6a4:
    // 0x1da6a4: 0xc05181e  jal         func_146078
label_1da6a8:
    if (ctx->pc == 0x1DA6A8u) {
        ctx->pc = 0x1DA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6A4u;
        // 0x1da6a8: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6ACu;
        goto label_1da6ac;
    }
    ctx->pc = 0x1DA6A4u;
    SET_GPR_U32(ctx, 31, 0x1DA6ACu);
    ctx->pc = 0x1DA6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6A4u;
    // 0x1da6a8: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1DA6A4u, 0x1DA6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6ACu;
label_1da6ac:
    // 0x1da6ac: 0x8e4245cc  lw          $v0, 0x45CC($s2)
    ctx->pc = 0x1da6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17868)));
label_1da6b0:
    // 0x1da6b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1da6b4:
    if (ctx->pc == 0x1DA6B4u) {
        ctx->pc = 0x1DA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6B0u;
        // 0x1da6b4: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6B8u;
        goto label_1da6b8;
    }
    ctx->pc = 0x1DA6B0u;
    {
        const bool branch_taken_0x1da6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6B0u;
        // 0x1da6b4: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6b0) {
            ctx->pc = 0x1DA6CCu;
            goto label_1da6cc;
        }
    }
    ctx->pc = 0x1DA6B8u;
label_1da6b8:
    // 0x1da6b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1da6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1da6bc:
    // 0x1da6bc: 0xc07a546  jal         func_1E9518
label_1da6c0:
    if (ctx->pc == 0x1DA6C0u) {
        ctx->pc = 0x1DA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6BCu;
        // 0x1da6c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6C4u;
        goto label_1da6c4;
    }
    ctx->pc = 0x1DA6BCu;
    SET_GPR_U32(ctx, 31, 0x1DA6C4u);
    ctx->pc = 0x1DA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6BCu;
    // 0x1da6c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1DA6BCu, 0x1DA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6C4u;
label_1da6c4:
    // 0x1da6c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da6c8:
    if (ctx->pc == 0x1DA6C8u) {
        ctx->pc = 0x1DA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C4u;
        // 0x1da6c8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6CCu;
        goto label_1da6cc;
    }
    ctx->pc = 0x1DA6C4u;
    {
        const bool branch_taken_0x1da6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C4u;
        // 0x1da6c8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6c4) {
            ctx->pc = 0x1DA6DCu;
            goto label_1da6dc;
        }
    }
    ctx->pc = 0x1DA6CCu;
label_1da6cc:
    // 0x1da6cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1da6d0:
    // 0x1da6d0: 0xc07a4f0  jal         func_1E93C0
label_1da6d4:
    if (ctx->pc == 0x1DA6D4u) {
        ctx->pc = 0x1DA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6D0u;
        // 0x1da6d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6D8u;
        goto label_1da6d8;
    }
    ctx->pc = 0x1DA6D0u;
    SET_GPR_U32(ctx, 31, 0x1DA6D8u);
    ctx->pc = 0x1DA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6D0u;
    // 0x1da6d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1DA6D0u, 0x1DA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6D8u;
label_1da6d8:
    // 0x1da6d8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1da6dc:
    // 0x1da6dc: 0x8e26ecf0  lw          $a2, -0x1310($s1)
    ctx->pc = 0x1da6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962416)));
label_1da6e0:
    // 0x1da6e0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
label_1da6e4:
    if (ctx->pc == 0x1DA6E4u) {
        ctx->pc = 0x1DA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6E0u;
        // 0x1da6e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6E8u;
        goto label_1da6e8;
    }
    ctx->pc = 0x1DA6E0u;
    {
        const bool branch_taken_0x1da6e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6E0u;
        // 0x1da6e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6e0) {
            ctx->pc = 0x1DA73Cu;
            goto label_1da73c;
        }
    }
    ctx->pc = 0x1DA6E8u;
label_1da6e8:
    // 0x1da6e8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da6ec:
    // 0x1da6ec: 0x9043ed50  lbu         $v1, -0x12B0($v0)
    ctx->pc = 0x1da6ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962512)));
label_1da6f0:
    // 0x1da6f0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1da6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1da6f4:
    // 0x1da6f4: 0xa0c0001d  sb          $zero, 0x1D($a2)
    ctx->pc = 0x1da6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29), (uint8_t)GPR_U32(ctx, 0));
label_1da6f8:
    // 0x1da6f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da6fc:
    // 0x1da6fc: 0xa0c3001c  sb          $v1, 0x1C($a2)
    ctx->pc = 0x1da6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28), (uint8_t)GPR_U32(ctx, 3));
label_1da700:
    // 0x1da700: 0x8ca6b8b8  lw          $a2, -0x4748($a1)
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294949048)));
label_1da704:
    // 0x1da704: 0x8c90ed58  lw          $s0, -0x12A8($a0)
    ctx->pc = 0x1da704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962520)));
label_1da708:
    // 0x1da708: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1da70c:
    // 0x1da70c: 0x8c45ed54  lw          $a1, -0x12AC($v0)
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962516)));
label_1da710:
    // 0x1da710: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1da710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1da714:
    // 0x1da714: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1da714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1da718:
    // 0x1da718: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1da718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1da71c:
    // 0x1da71c: 0x40f809  jalr        $v0
label_1da720:
    if (ctx->pc == 0x1DA720u) {
        ctx->pc = 0x1DA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA71Cu;
        // 0x1da720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA724u;
        goto label_1da724;
    }
    ctx->pc = 0x1DA71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA724u);
        ctx->pc = 0x1DA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA71Cu;
        // 0x1da720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA71Cu, 0x1DA724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA724u;
label_1da724:
    // 0x1da724: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1da724u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1da728:
    // 0x1da728: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1da72c:
    if (ctx->pc == 0x1DA72Cu) {
        ctx->pc = 0x1DA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA728u;
        // 0x1da72c: 0x8e22ecf0  lw          $v0, -0x1310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA730u;
        goto label_1da730;
    }
    ctx->pc = 0x1DA728u;
    {
        const bool branch_taken_0x1da728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA728u;
        // 0x1da72c: 0x8e22ecf0  lw          $v0, -0x1310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da728) {
            ctx->pc = 0x1DA73Cu;
            goto label_1da73c;
        }
    }
    ctx->pc = 0x1DA730u;
label_1da730:
    // 0x1da730: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x1da730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_1da734:
    // 0x1da734: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x1da734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_1da738:
    // 0x1da738: 0xae20ecf0  sw          $zero, -0x1310($s1)
    ctx->pc = 0x1da738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962416), GPR_U32(ctx, 0));
label_1da73c:
    // 0x1da73c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1da73cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1da740:
    // 0x1da740: 0x8e02ed14  lw          $v0, -0x12EC($s0)
    ctx->pc = 0x1da740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962452)));
label_1da744:
    // 0x1da744: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1da748:
    if (ctx->pc == 0x1DA748u) {
        ctx->pc = 0x1DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA744u;
        // 0x1da748: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA74Cu;
        goto label_1da74c;
    }
    ctx->pc = 0x1DA744u;
    {
        const bool branch_taken_0x1da744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA744u;
        // 0x1da748: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da744) {
            ctx->pc = 0x1DA780u;
            goto label_1da780;
        }
    }
    ctx->pc = 0x1DA74Cu;
label_1da74c:
    // 0x1da74c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1da74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1da750:
    // 0x1da750: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1da754:
    // 0x1da754: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1da754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1da758:
    // 0x1da758: 0x60f809  jalr        $v1
label_1da75c:
    if (ctx->pc == 0x1DA75Cu) {
        ctx->pc = 0x1DA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA758u;
        // 0x1da75c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA760u;
        goto label_1da760;
    }
    ctx->pc = 0x1DA758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA760u);
        ctx->pc = 0x1DA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA758u;
        // 0x1da75c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA758u, 0x1DA760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA760u;
label_1da760:
    // 0x1da760: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1da760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1da764:
    // 0x1da764: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1da768:
    // 0x1da768: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1da768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1da76c:
    // 0x1da76c: 0x60f809  jalr        $v1
label_1da770:
    if (ctx->pc == 0x1DA770u) {
        ctx->pc = 0x1DA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA76Cu;
        // 0x1da770: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA774u;
        goto label_1da774;
    }
    ctx->pc = 0x1DA76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA774u);
        ctx->pc = 0x1DA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA76Cu;
        // 0x1da770: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA76Cu, 0x1DA774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA774u;
label_1da774:
    // 0x1da774: 0xae00ed14  sw          $zero, -0x12EC($s0)
    ctx->pc = 0x1da774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294962452), GPR_U32(ctx, 0));
label_1da778:
    // 0x1da778: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1da77c:
    if (ctx->pc == 0x1DA77Cu) {
        ctx->pc = 0x1DA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA778u;
        // 0x1da77c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA780u;
        goto label_1da780;
    }
    ctx->pc = 0x1DA778u;
    {
        const bool branch_taken_0x1da778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA778u;
        // 0x1da77c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da778) {
            ctx->pc = 0x1DA7E8u;
            goto label_1da7e8;
        }
    }
    ctx->pc = 0x1DA780u;
label_1da780:
    // 0x1da780: 0x8e4245c8  lw          $v0, 0x45C8($s2)
    ctx->pc = 0x1da780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17864)));
label_1da784:
    // 0x1da784: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1da788:
    if (ctx->pc == 0x1DA788u) {
        ctx->pc = 0x1DA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA784u;
        // 0x1da788: 0x8e4445c0  lw          $a0, 0x45C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA78Cu;
        goto label_1da78c;
    }
    ctx->pc = 0x1DA784u;
    {
        const bool branch_taken_0x1da784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da784) {
            ctx->pc = 0x1DA788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA784u;
            // 0x1da788: 0x8e4445c0  lw          $a0, 0x45C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA7D0u;
            goto label_1da7d0;
        }
    }
    ctx->pc = 0x1DA78Cu;
label_1da78c:
    // 0x1da78c: 0x265007a0  addiu       $s0, $s2, 0x7A0
    ctx->pc = 0x1da78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_1da790:
    // 0x1da790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1da790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da794:
    // 0x1da794: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1da794u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1da798:
    // 0x1da798: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1da798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da79c:
    // 0x1da79c: 0x0  nop
    ctx->pc = 0x1da79cu;
    // NOP
label_1da7a0:
    // 0x1da7a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da7a4:
    // 0x1da7a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1da7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1da7a8:
    // 0x1da7a8: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1da7ac:
    // 0x1da7ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1da7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1da7b0:
    // 0x1da7b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1da7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1da7b4:
    // 0x1da7b4: 0x40f809  jalr        $v0
label_1da7b8:
    if (ctx->pc == 0x1DA7B8u) {
        ctx->pc = 0x1DA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B4u;
        // 0x1da7b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7BCu;
        goto label_1da7bc;
    }
    ctx->pc = 0x1DA7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA7BCu);
        ctx->pc = 0x1DA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B4u;
        // 0x1da7b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7B4u, 0x1DA7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA7BCu;
label_1da7bc:
    // 0x1da7bc: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1da7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1da7c0:
    // 0x1da7c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1da7c4:
    if (ctx->pc == 0x1DA7C4u) {
        ctx->pc = 0x1DA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C0u;
        // 0x1da7c4: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7C8u;
        goto label_1da7c8;
    }
    ctx->pc = 0x1DA7C0u;
    {
        const bool branch_taken_0x1da7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C0u;
        // 0x1da7c4: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c0) {
            ctx->pc = 0x1DA7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7a0;
        }
    }
    ctx->pc = 0x1DA7C8u;
label_1da7c8:
    // 0x1da7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1da7cc:
    if (ctx->pc == 0x1DA7CCu) {
        ctx->pc = 0x1DA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C8u;
        // 0x1da7cc: 0x8e4345c0  lw          $v1, 0x45C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7D0u;
        goto label_1da7d0;
    }
    ctx->pc = 0x1DA7C8u;
    {
        const bool branch_taken_0x1da7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C8u;
        // 0x1da7cc: 0x8e4345c0  lw          $v1, 0x45C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c8) {
            ctx->pc = 0x1DA7ECu;
            goto label_1da7ec;
        }
    }
    ctx->pc = 0x1DA7D0u;
label_1da7d0:
    // 0x1da7d0: 0x240206f0  addiu       $v0, $zero, 0x6F0
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
label_1da7d4:
    // 0x1da7d4: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1da7d8:
    // 0x1da7d8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1da7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1da7dc:
    // 0x1da7dc: 0x24841530  addiu       $a0, $a0, 0x1530
    ctx->pc = 0x1da7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
label_1da7e0:
    // 0x1da7e0: 0xc075876  jal         func_1D61D8
label_1da7e4:
    if (ctx->pc == 0x1DA7E4u) {
        ctx->pc = 0x1DA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7E0u;
        // 0x1da7e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7E8u;
        goto label_1da7e8;
    }
    ctx->pc = 0x1DA7E0u;
    SET_GPR_U32(ctx, 31, 0x1DA7E8u);
    ctx->pc = 0x1DA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7E0u;
    // 0x1da7e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D61D8u, 0x1DA7E0u, 0x1DA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7E8u;
label_1da7e8:
    // 0x1da7e8: 0x8e4345c0  lw          $v1, 0x45C0($s2)
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
label_1da7ec:
    // 0x1da7ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1da7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da7f0:
    // 0x1da7f0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1da7f4:
    if (ctx->pc == 0x1DA7F4u) {
        ctx->pc = 0x1DA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7F0u;
        // 0x1da7f4: 0x8e84aa84  lw          $a0, -0x557C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7F8u;
        goto label_1da7f8;
    }
    ctx->pc = 0x1DA7F0u;
    {
        const bool branch_taken_0x1da7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7F0u;
        // 0x1da7f4: 0x8e84aa84  lw          $a0, -0x557C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7f0) {
            ctx->pc = 0x1DA838u;
            goto label_1da838;
        }
    }
    ctx->pc = 0x1DA7F8u;
label_1da7f8:
    // 0x1da7f8: 0x8e4345c8  lw          $v1, 0x45C8($s2)
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17864)));
label_1da7fc:
    // 0x1da7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da800:
    // 0x1da800: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1da804:
    if (ctx->pc == 0x1DA804u) {
        ctx->pc = 0x1DA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA800u;
        // 0x1da804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA808u;
        goto label_1da808;
    }
    ctx->pc = 0x1DA800u;
    {
        const bool branch_taken_0x1da800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA800u;
        // 0x1da804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da800) {
            ctx->pc = 0x1DA83Cu;
            goto label_1da83c;
        }
    }
    ctx->pc = 0x1DA808u;
label_1da808:
    // 0x1da808: 0xc043d5e  jal         func_10F578
label_1da80c:
    if (ctx->pc == 0x1DA80Cu) {
        ctx->pc = 0x1DA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA808u;
        // 0x1da80c: 0x264445d4  addiu       $a0, $s2, 0x45D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA810u;
        goto label_1da810;
    }
    ctx->pc = 0x1DA808u;
    SET_GPR_U32(ctx, 31, 0x1DA810u);
    ctx->pc = 0x1DA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA808u;
    // 0x1da80c: 0x264445d4  addiu       $a0, $s2, 0x45D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1DA808u, 0x1DA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA810u;
label_1da810:
    // 0x1da810: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1da814:
    if (ctx->pc == 0x1DA814u) {
        ctx->pc = 0x1DA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA810u;
        // 0x1da814: 0x8e84aa84  lw          $a0, -0x557C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA818u;
        goto label_1da818;
    }
    ctx->pc = 0x1DA810u;
    {
        const bool branch_taken_0x1da810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA810u;
        // 0x1da814: 0x8e84aa84  lw          $a0, -0x557C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da810) {
            ctx->pc = 0x1DA848u;
            goto label_1da848;
        }
    }
    ctx->pc = 0x1DA818u;
label_1da818:
    // 0x1da818: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1da81c:
    // 0x1da81c: 0x24a56110  addiu       $a1, $a1, 0x6110
    ctx->pc = 0x1da81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
label_1da820:
    // 0x1da820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da824:
    // 0x1da824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da828:
    // 0x1da828: 0xc043f1c  jal         func_10FC70
label_1da82c:
    if (ctx->pc == 0x1DA82Cu) {
        ctx->pc = 0x1DA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA828u;
        // 0x1da82c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA830u;
        goto label_1da830;
    }
    ctx->pc = 0x1DA828u;
    SET_GPR_U32(ctx, 31, 0x1DA830u);
    ctx->pc = 0x1DA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA828u;
    // 0x1da82c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1DA828u, 0x1DA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA830u;
label_1da830:
    // 0x1da830: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da834:
    if (ctx->pc == 0x1DA834u) {
        ctx->pc = 0x1DA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA830u;
        // 0x1da834: 0xae4245d4  sw          $v0, 0x45D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA838u;
        goto label_1da838;
    }
    ctx->pc = 0x1DA830u;
    {
        const bool branch_taken_0x1da830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA830u;
        // 0x1da834: 0xae4245d4  sw          $v0, 0x45D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da830) {
            ctx->pc = 0x1DA844u;
            goto label_1da844;
        }
    }
    ctx->pc = 0x1DA838u;
label_1da838:
    // 0x1da838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da83c:
    // 0x1da83c: 0xc0440c6  jal         func_110318
label_1da840:
    if (ctx->pc == 0x1DA840u) {
        ctx->pc = 0x1DA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA83Cu;
        // 0x1da840: 0x8e4545d4  lw          $a1, 0x45D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA844u;
        goto label_1da844;
    }
    ctx->pc = 0x1DA83Cu;
    SET_GPR_U32(ctx, 31, 0x1DA844u);
    ctx->pc = 0x1DA840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA83Cu;
    // 0x1da840: 0x8e4545d4  lw          $a1, 0x45D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17876)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1DA83Cu, 0x1DA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA844u;
label_1da844:
    // 0x1da844: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x1da844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_1da848:
    // 0x1da848: 0xc044186  jal         func_110618
label_1da84c:
    if (ctx->pc == 0x1DA84Cu) {
        ctx->pc = 0x1DA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA848u;
        // 0x1da84c: 0x8e5045d4  lw          $s0, 0x45D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA850u;
        goto label_1da850;
    }
    ctx->pc = 0x1DA848u;
    SET_GPR_U32(ctx, 31, 0x1DA850u);
    ctx->pc = 0x1DA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA848u;
    // 0x1da84c: 0x8e5045d4  lw          $s0, 0x45D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17876)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110618u, 0x1DA848u, 0x1DA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA850u;
label_1da850:
    // 0x1da850: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x1da850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_1da854:
    // 0x1da854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da858:
    // 0x1da858: 0xc043fca  jal         func_10FF28
label_1da85c:
    if (ctx->pc == 0x1DA85Cu) {
        ctx->pc = 0x1DA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA858u;
        // 0x1da85c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA860u;
        goto label_1da860;
    }
    ctx->pc = 0x1DA858u;
    SET_GPR_U32(ctx, 31, 0x1DA860u);
    ctx->pc = 0x1DA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA858u;
    // 0x1da85c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF28u, 0x1DA858u, 0x1DA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA860u;
label_1da860:
    // 0x1da860: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1da860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1da864:
    // 0x1da864: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1da864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da868:
    // 0x1da868: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1da868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da86c:
    // 0x1da86c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1da86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da870:
    // 0x1da870: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1da870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da874:
    // 0x1da874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da878:
    // 0x1da878: 0x3e00008  jr          $ra
label_1da87c:
    if (ctx->pc == 0x1DA87Cu) {
        ctx->pc = 0x1DA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA878u;
        // 0x1da87c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA880u;
        goto label_fallthrough_0x1da878;
    }
    ctx->pc = 0x1DA878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA878u;
        // 0x1da87c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da878:
    ctx->pc = 0x1DA880u;
}
