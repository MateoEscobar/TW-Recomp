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

// Function: sub_0028F6C0
// Address: 0x28f6c0 - 0x28f8b8
void sub_0028F6C0_0x28f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F6C0_0x28f6c0");
#endif

    switch (ctx->pc) {
        case 0x28f6c0u: goto label_28f6c0;
        case 0x28f6c4u: goto label_28f6c4;
        case 0x28f6c8u: goto label_28f6c8;
        case 0x28f6ccu: goto label_28f6cc;
        case 0x28f6d0u: goto label_28f6d0;
        case 0x28f6d4u: goto label_28f6d4;
        case 0x28f6d8u: goto label_28f6d8;
        case 0x28f6dcu: goto label_28f6dc;
        case 0x28f6e0u: goto label_28f6e0;
        case 0x28f6e4u: goto label_28f6e4;
        case 0x28f6e8u: goto label_28f6e8;
        case 0x28f6ecu: goto label_28f6ec;
        case 0x28f6f0u: goto label_28f6f0;
        case 0x28f6f4u: goto label_28f6f4;
        case 0x28f6f8u: goto label_28f6f8;
        case 0x28f6fcu: goto label_28f6fc;
        case 0x28f700u: goto label_28f700;
        case 0x28f704u: goto label_28f704;
        case 0x28f708u: goto label_28f708;
        case 0x28f70cu: goto label_28f70c;
        case 0x28f710u: goto label_28f710;
        case 0x28f714u: goto label_28f714;
        case 0x28f718u: goto label_28f718;
        case 0x28f71cu: goto label_28f71c;
        case 0x28f720u: goto label_28f720;
        case 0x28f724u: goto label_28f724;
        case 0x28f728u: goto label_28f728;
        case 0x28f72cu: goto label_28f72c;
        case 0x28f730u: goto label_28f730;
        case 0x28f734u: goto label_28f734;
        case 0x28f738u: goto label_28f738;
        case 0x28f73cu: goto label_28f73c;
        case 0x28f740u: goto label_28f740;
        case 0x28f744u: goto label_28f744;
        case 0x28f748u: goto label_28f748;
        case 0x28f74cu: goto label_28f74c;
        case 0x28f750u: goto label_28f750;
        case 0x28f754u: goto label_28f754;
        case 0x28f758u: goto label_28f758;
        case 0x28f75cu: goto label_28f75c;
        case 0x28f760u: goto label_28f760;
        case 0x28f764u: goto label_28f764;
        case 0x28f768u: goto label_28f768;
        case 0x28f76cu: goto label_28f76c;
        case 0x28f770u: goto label_28f770;
        case 0x28f774u: goto label_28f774;
        case 0x28f778u: goto label_28f778;
        case 0x28f77cu: goto label_28f77c;
        case 0x28f780u: goto label_28f780;
        case 0x28f784u: goto label_28f784;
        case 0x28f788u: goto label_28f788;
        case 0x28f78cu: goto label_28f78c;
        case 0x28f790u: goto label_28f790;
        case 0x28f794u: goto label_28f794;
        case 0x28f798u: goto label_28f798;
        case 0x28f79cu: goto label_28f79c;
        case 0x28f7a0u: goto label_28f7a0;
        case 0x28f7a4u: goto label_28f7a4;
        case 0x28f7a8u: goto label_28f7a8;
        case 0x28f7acu: goto label_28f7ac;
        case 0x28f7b0u: goto label_28f7b0;
        case 0x28f7b4u: goto label_28f7b4;
        case 0x28f7b8u: goto label_28f7b8;
        case 0x28f7bcu: goto label_28f7bc;
        case 0x28f7c0u: goto label_28f7c0;
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7c8u: goto label_28f7c8;
        case 0x28f7ccu: goto label_28f7cc;
        case 0x28f7d0u: goto label_28f7d0;
        case 0x28f7d4u: goto label_28f7d4;
        case 0x28f7d8u: goto label_28f7d8;
        case 0x28f7dcu: goto label_28f7dc;
        case 0x28f7e0u: goto label_28f7e0;
        case 0x28f7e4u: goto label_28f7e4;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f7ecu: goto label_28f7ec;
        case 0x28f7f0u: goto label_28f7f0;
        case 0x28f7f4u: goto label_28f7f4;
        case 0x28f7f8u: goto label_28f7f8;
        case 0x28f7fcu: goto label_28f7fc;
        case 0x28f800u: goto label_28f800;
        case 0x28f804u: goto label_28f804;
        case 0x28f808u: goto label_28f808;
        case 0x28f80cu: goto label_28f80c;
        case 0x28f810u: goto label_28f810;
        case 0x28f814u: goto label_28f814;
        case 0x28f818u: goto label_28f818;
        case 0x28f81cu: goto label_28f81c;
        case 0x28f820u: goto label_28f820;
        case 0x28f824u: goto label_28f824;
        case 0x28f828u: goto label_28f828;
        case 0x28f82cu: goto label_28f82c;
        case 0x28f830u: goto label_28f830;
        case 0x28f834u: goto label_28f834;
        case 0x28f838u: goto label_28f838;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f840u: goto label_28f840;
        case 0x28f844u: goto label_28f844;
        case 0x28f848u: goto label_28f848;
        case 0x28f84cu: goto label_28f84c;
        case 0x28f850u: goto label_28f850;
        case 0x28f854u: goto label_28f854;
        case 0x28f858u: goto label_28f858;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f860u: goto label_28f860;
        case 0x28f864u: goto label_28f864;
        case 0x28f868u: goto label_28f868;
        case 0x28f86cu: goto label_28f86c;
        case 0x28f870u: goto label_28f870;
        case 0x28f874u: goto label_28f874;
        case 0x28f878u: goto label_28f878;
        case 0x28f87cu: goto label_28f87c;
        case 0x28f880u: goto label_28f880;
        case 0x28f884u: goto label_28f884;
        case 0x28f888u: goto label_28f888;
        case 0x28f88cu: goto label_28f88c;
        case 0x28f890u: goto label_28f890;
        case 0x28f894u: goto label_28f894;
        case 0x28f898u: goto label_28f898;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8a0u: goto label_28f8a0;
        case 0x28f8a4u: goto label_28f8a4;
        case 0x28f8a8u: goto label_28f8a8;
        case 0x28f8acu: goto label_28f8ac;
        case 0x28f8b0u: goto label_28f8b0;
        case 0x28f8b4u: goto label_28f8b4;
        default: break;
    }

    ctx->pc = 0x28f6c0u;

label_28f6c0:
    // 0x28f6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28f6c4:
    // 0x28f6c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_28f6c8:
    // 0x28f6c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_28f6cc:
    // 0x28f6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f6d0:
    // 0x28f6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28f6d4:
    // 0x28f6d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28f6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_28f6d8:
    // 0x28f6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28f6dc:
    // 0x28f6dc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x28f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_28f6e0:
    // 0x28f6e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28f6e4:
    // 0x28f6e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28f6e8:
    // 0x28f6e8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x28f6e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28f6ec:
    // 0x28f6ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_28f6f0:
    if (ctx->pc == 0x28F6F0u) {
        ctx->pc = 0x28F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6ECu;
        // 0x28f6f0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F6F4u;
        goto label_28f6f4;
    }
    ctx->pc = 0x28F6ECu;
    {
        const bool branch_taken_0x28f6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6ECu;
        // 0x28f6f0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6ec) {
            ctx->pc = 0x28F730u;
            goto label_28f730;
        }
    }
    ctx->pc = 0x28F6F4u;
label_28f6f4:
    // 0x28f6f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_28f6f8:
    // 0x28f6f8: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x28f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_28f6fc:
    // 0x28f6fc: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x28f6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
label_28f700:
    // 0x28f700: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_28f704:
    if (ctx->pc == 0x28F704u) {
        ctx->pc = 0x28F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F700u;
        // 0x28f704: 0x9202000a  lbu         $v0, 0xA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F708u;
        goto label_28f708;
    }
    ctx->pc = 0x28F700u;
    {
        const bool branch_taken_0x28f700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f700) {
            ctx->pc = 0x28F704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F700u;
            // 0x28f704: 0x9202000a  lbu         $v0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F718u;
            goto label_28f718;
        }
    }
    ctx->pc = 0x28F708u;
label_28f708:
    // 0x28f708: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x28f708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_28f70c:
    // 0x28f70c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_28f710:
    if (ctx->pc == 0x28F710u) {
        ctx->pc = 0x28F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F70Cu;
        // 0x28f710: 0x8604001c  lh          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F714u;
        goto label_28f714;
    }
    ctx->pc = 0x28F70Cu;
    {
        const bool branch_taken_0x28f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f70c) {
            ctx->pc = 0x28F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F70Cu;
            // 0x28f710: 0x8604001c  lh          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F734u;
            goto label_28f734;
        }
    }
    ctx->pc = 0x28F714u;
label_28f714:
    // 0x28f714: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x28f714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_28f718:
    // 0x28f718: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_28f71c:
    if (ctx->pc == 0x28F71Cu) {
        ctx->pc = 0x28F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F718u;
        // 0x28f71c: 0x8604001c  lh          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F720u;
        goto label_28f720;
    }
    ctx->pc = 0x28F718u;
    {
        const bool branch_taken_0x28f718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f718) {
            ctx->pc = 0x28F71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F718u;
            // 0x28f71c: 0x8604001c  lh          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F734u;
            goto label_28f734;
        }
    }
    ctx->pc = 0x28F720u;
label_28f720:
    // 0x28f720: 0xc089f4a  jal         func_227D28
label_28f724:
    if (ctx->pc == 0x28F724u) {
        ctx->pc = 0x28F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F720u;
        // 0x28f724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F728u;
        goto label_28f728;
    }
    ctx->pc = 0x28F720u;
    SET_GPR_U32(ctx, 31, 0x28F728u);
    ctx->pc = 0x28F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F720u;
    // 0x28f724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x28F720u, 0x28F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F728u;
label_28f728:
    // 0x28f728: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_28f72c:
    if (ctx->pc == 0x28F72Cu) {
        ctx->pc = 0x28F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F728u;
        // 0x28f72c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F730u;
        goto label_28f730;
    }
    ctx->pc = 0x28F728u;
    {
        const bool branch_taken_0x28f728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f728) {
            ctx->pc = 0x28F72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F728u;
            // 0x28f72c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F730u;
label_28f730:
    // 0x28f730: 0x8604001c  lh          $a0, 0x1C($s0)
    ctx->pc = 0x28f730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_28f734:
    // 0x28f734: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28f738:
    // 0x28f738: 0x40f809  jalr        $v0
label_28f73c:
    if (ctx->pc == 0x28F73Cu) {
        ctx->pc = 0x28F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F738u;
        // 0x28f73c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F740u;
        goto label_28f740;
    }
    ctx->pc = 0x28F738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F740u);
        ctx->pc = 0x28F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F738u;
        // 0x28f73c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F738u, 0x28F740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F740u;
label_28f740:
    // 0x28f740: 0xc0a63e2  jal         func_298F88
label_28f744:
    if (ctx->pc == 0x28F744u) {
        ctx->pc = 0x28F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F740u;
        // 0x28f744: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F748u;
        goto label_28f748;
    }
    ctx->pc = 0x28F740u;
    SET_GPR_U32(ctx, 31, 0x28F748u);
    ctx->pc = 0x28F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F740u;
    // 0x28f744: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F88u, 0x28F740u, 0x28F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F748u;
label_28f748:
    // 0x28f748: 0xc08a08a  jal         func_228228
label_28f74c:
    if (ctx->pc == 0x28F74Cu) {
        ctx->pc = 0x28F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F748u;
        // 0x28f74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F750u;
        goto label_28f750;
    }
    ctx->pc = 0x28F748u;
    SET_GPR_U32(ctx, 31, 0x28F750u);
    ctx->pc = 0x28F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F748u;
    // 0x28f74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x28F748u, 0x28F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F750u;
label_28f750:
    // 0x28f750: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
label_28f754:
    if (ctx->pc == 0x28F754u) {
        ctx->pc = 0x28F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F750u;
        // 0x28f754: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F758u;
        goto label_28f758;
    }
    ctx->pc = 0x28F750u;
    {
        const bool branch_taken_0x28f750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f750) {
            ctx->pc = 0x28F754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F750u;
            // 0x28f754: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F758u;
label_28f758:
    // 0x28f758: 0xc0a2acc  jal         func_28AB30
label_28f75c:
    if (ctx->pc == 0x28F75Cu) {
        ctx->pc = 0x28F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F758u;
        // 0x28f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F760u;
        goto label_28f760;
    }
    ctx->pc = 0x28F758u;
    SET_GPR_U32(ctx, 31, 0x28F760u);
    ctx->pc = 0x28F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F758u;
    // 0x28f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x28F758u, 0x28F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F760u;
label_28f760:
    // 0x28f760: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_28f764:
    if (ctx->pc == 0x28F764u) {
        ctx->pc = 0x28F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F760u;
        // 0x28f764: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F768u;
        goto label_28f768;
    }
    ctx->pc = 0x28F760u;
    {
        const bool branch_taken_0x28f760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f760) {
            ctx->pc = 0x28F764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F760u;
            // 0x28f764: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F768u;
label_28f768:
    // 0x28f768: 0xc0a40d2  jal         func_290348
label_28f76c:
    if (ctx->pc == 0x28F76Cu) {
        ctx->pc = 0x28F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F768u;
        // 0x28f76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F770u;
        goto label_28f770;
    }
    ctx->pc = 0x28F768u;
    SET_GPR_U32(ctx, 31, 0x28F770u);
    ctx->pc = 0x28F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F768u;
    // 0x28f76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x28F768u, 0x28F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F770u;
label_28f770:
    // 0x28f770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f774:
    // 0x28f774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f778:
    // 0x28f778: 0x5622001d  bnel        $s1, $v0, . + 4 + (0x1D << 2)
label_28f77c:
    if (ctx->pc == 0x28F77Cu) {
        ctx->pc = 0x28F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F778u;
        // 0x28f77c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F780u;
        goto label_28f780;
    }
    ctx->pc = 0x28F778u;
    {
        const bool branch_taken_0x28f778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f778) {
            ctx->pc = 0x28F77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F778u;
            // 0x28f77c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F7F0u;
            goto label_28f7f0;
        }
    }
    ctx->pc = 0x28F780u;
label_28f780:
    // 0x28f780: 0xc0893b2  jal         func_224EC8
label_28f784:
    if (ctx->pc == 0x28F784u) {
        ctx->pc = 0x28F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F780u;
        // 0x28f784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F788u;
        goto label_28f788;
    }
    ctx->pc = 0x28F780u;
    SET_GPR_U32(ctx, 31, 0x28F788u);
    ctx->pc = 0x28F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F780u;
    // 0x28f784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224EC8u, 0x28F780u, 0x28F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F788u;
label_28f788:
    // 0x28f788: 0x54510019  bnel        $v0, $s1, . + 4 + (0x19 << 2)
label_28f78c:
    if (ctx->pc == 0x28F78Cu) {
        ctx->pc = 0x28F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F788u;
        // 0x28f78c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F790u;
        goto label_28f790;
    }
    ctx->pc = 0x28F788u;
    {
        const bool branch_taken_0x28f788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f788) {
            ctx->pc = 0x28F78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F788u;
            // 0x28f78c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F7F0u;
            goto label_28f7f0;
        }
    }
    ctx->pc = 0x28F790u;
label_28f790:
    // 0x28f790: 0xc08a0b6  jal         func_2282D8
label_28f794:
    if (ctx->pc == 0x28F794u) {
        ctx->pc = 0x28F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F790u;
        // 0x28f794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F798u;
        goto label_28f798;
    }
    ctx->pc = 0x28F790u;
    SET_GPR_U32(ctx, 31, 0x28F798u);
    ctx->pc = 0x28F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F790u;
    // 0x28f794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282D8u, 0x28F790u, 0x28F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F798u;
label_28f798:
    // 0x28f798: 0x54510041  bnel        $v0, $s1, . + 4 + (0x41 << 2)
label_28f79c:
    if (ctx->pc == 0x28F79Cu) {
        ctx->pc = 0x28F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F798u;
        // 0x28f79c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7A0u;
        goto label_28f7a0;
    }
    ctx->pc = 0x28F798u;
    {
        const bool branch_taken_0x28f798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f798) {
            ctx->pc = 0x28F79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F798u;
            // 0x28f79c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F7A0u;
label_28f7a0:
    // 0x28f7a0: 0xc0a36c8  jal         func_28DB20
label_28f7a4:
    if (ctx->pc == 0x28F7A4u) {
        ctx->pc = 0x28F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7A0u;
        // 0x28f7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7A8u;
        goto label_28f7a8;
    }
    ctx->pc = 0x28F7A0u;
    SET_GPR_U32(ctx, 31, 0x28F7A8u);
    ctx->pc = 0x28F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7A0u;
    // 0x28f7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28F7A0u, 0x28F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7A8u;
label_28f7a8:
    // 0x28f7a8: 0x5451003d  bnel        $v0, $s1, . + 4 + (0x3D << 2)
label_28f7ac:
    if (ctx->pc == 0x28F7ACu) {
        ctx->pc = 0x28F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7A8u;
        // 0x28f7ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7B0u;
        goto label_28f7b0;
    }
    ctx->pc = 0x28F7A8u;
    {
        const bool branch_taken_0x28f7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f7a8) {
            ctx->pc = 0x28F7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F7A8u;
            // 0x28f7ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F7B0u;
label_28f7b0:
    // 0x28f7b0: 0xc0a367c  jal         func_28D9F0
label_28f7b4:
    if (ctx->pc == 0x28F7B4u) {
        ctx->pc = 0x28F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7B0u;
        // 0x28f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7B8u;
        goto label_28f7b8;
    }
    ctx->pc = 0x28F7B0u;
    SET_GPR_U32(ctx, 31, 0x28F7B8u);
    ctx->pc = 0x28F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7B0u;
    // 0x28f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28F7B0u, 0x28F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7B8u;
label_28f7b8:
    // 0x28f7b8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_28f7bc:
    if (ctx->pc == 0x28F7BCu) {
        ctx->pc = 0x28F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7B8u;
        // 0x28f7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7C0u;
        goto label_28f7c0;
    }
    ctx->pc = 0x28F7B8u;
    {
        const bool branch_taken_0x28f7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7B8u;
        // 0x28f7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7b8) {
            ctx->pc = 0x28F89Cu;
            goto label_28f89c;
        }
    }
    ctx->pc = 0x28F7C0u;
label_28f7c0:
    // 0x28f7c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28f7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_28f7c4:
    // 0x28f7c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28f7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28f7c8:
    // 0x28f7c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28f7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28f7cc:
    // 0x28f7cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f7d0:
    // 0x28f7d0: 0x24060299  addiu       $a2, $zero, 0x299
    ctx->pc = 0x28f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_28f7d4:
    // 0x28f7d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f7d8:
    // 0x28f7d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28f7d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_28f7dc:
    // 0x28f7dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28f7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f7e0:
    // 0x28f7e0: 0xc0be968  jal         func_2FA5A0
label_28f7e4:
    if (ctx->pc == 0x28F7E4u) {
        ctx->pc = 0x28F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7E0u;
        // 0x28f7e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7E8u;
        goto label_28f7e8;
    }
    ctx->pc = 0x28F7E0u;
    SET_GPR_U32(ctx, 31, 0x28F7E8u);
    ctx->pc = 0x28F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7E0u;
    // 0x28f7e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x28F7E0u, 0x28F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7E8u;
label_28f7e8:
    // 0x28f7e8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_28f7ec:
    if (ctx->pc == 0x28F7ECu) {
        ctx->pc = 0x28F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7E8u;
        // 0x28f7ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7F0u;
        goto label_28f7f0;
    }
    ctx->pc = 0x28F7E8u;
    {
        const bool branch_taken_0x28f7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7E8u;
        // 0x28f7ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7e8) {
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F7F0u;
label_28f7f0:
    // 0x28f7f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28f7f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f7f4:
    // 0x28f7f4: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
label_28f7f8:
    if (ctx->pc == 0x28F7F8u) {
        ctx->pc = 0x28F7FCu;
        goto label_28f7fc;
    }
    ctx->pc = 0x28F7F4u;
    {
        const bool branch_taken_0x28f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x28f7f4) {
            ctx->pc = 0x28F814u;
            goto label_28f814;
        }
    }
    ctx->pc = 0x28F7FCu;
label_28f7fc:
    // 0x28f7fc: 0x56330028  bnel        $s1, $s3, . + 4 + (0x28 << 2)
label_28f800:
    if (ctx->pc == 0x28F800u) {
        ctx->pc = 0x28F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7FCu;
        // 0x28f800: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F804u;
        goto label_28f804;
    }
    ctx->pc = 0x28F7FCu;
    {
        const bool branch_taken_0x28f7fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x28f7fc) {
            ctx->pc = 0x28F800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F7FCu;
            // 0x28f800: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F804u;
label_28f804:
    // 0x28f804: 0xc0893a8  jal         func_224EA0
label_28f808:
    if (ctx->pc == 0x28F808u) {
        ctx->pc = 0x28F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F804u;
        // 0x28f808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F80Cu;
        goto label_28f80c;
    }
    ctx->pc = 0x28F804u;
    SET_GPR_U32(ctx, 31, 0x28F80Cu);
    ctx->pc = 0x28F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F804u;
    // 0x28f808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224EA0u, 0x28F804u, 0x28F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F80Cu;
label_28f80c:
    // 0x28f80c: 0x54530024  bnel        $v0, $s3, . + 4 + (0x24 << 2)
label_28f810:
    if (ctx->pc == 0x28F810u) {
        ctx->pc = 0x28F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F80Cu;
        // 0x28f810: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F814u;
        goto label_28f814;
    }
    ctx->pc = 0x28F80Cu;
    {
        const bool branch_taken_0x28f80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x28f80c) {
            ctx->pc = 0x28F810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F80Cu;
            // 0x28f810: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F814u;
label_28f814:
    // 0x28f814: 0xc089bfc  jal         func_226FF0
label_28f818:
    if (ctx->pc == 0x28F818u) {
        ctx->pc = 0x28F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F814u;
        // 0x28f818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F81Cu;
        goto label_28f81c;
    }
    ctx->pc = 0x28F814u;
    SET_GPR_U32(ctx, 31, 0x28F81Cu);
    ctx->pc = 0x28F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F814u;
    // 0x28f818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x28F814u, 0x28F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F81Cu;
label_28f81c:
    // 0x28f81c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_28f820:
    if (ctx->pc == 0x28F820u) {
        ctx->pc = 0x28F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F81Cu;
        // 0x28f820: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F824u;
        goto label_28f824;
    }
    ctx->pc = 0x28F81Cu;
    {
        const bool branch_taken_0x28f81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f81c) {
            ctx->pc = 0x28F820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F81Cu;
            // 0x28f820: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F824u;
label_28f824:
    // 0x28f824: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28f828:
    // 0x28f828: 0x1453000a  bne         $v0, $s3, . + 4 + (0xA << 2)
label_28f82c:
    if (ctx->pc == 0x28F82Cu) {
        ctx->pc = 0x28F830u;
        goto label_28f830;
    }
    ctx->pc = 0x28F828u;
    {
        const bool branch_taken_0x28f828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x28f828) {
            ctx->pc = 0x28F854u;
            goto label_28f854;
        }
    }
    ctx->pc = 0x28F830u;
label_28f830:
    // 0x28f830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28f834:
    // 0x28f834: 0xc08a200  jal         func_228800
label_28f838:
    if (ctx->pc == 0x28F838u) {
        ctx->pc = 0x28F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F834u;
        // 0x28f838: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F83Cu;
        goto label_28f83c;
    }
    ctx->pc = 0x28F834u;
    SET_GPR_U32(ctx, 31, 0x28F83Cu);
    ctx->pc = 0x28F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F834u;
    // 0x28f838: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28F834u, 0x28F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F83Cu;
label_28f83c:
    // 0x28f83c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x28f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_28f840:
    // 0x28f840: 0x2444018c  addiu       $a0, $v0, 0x18C
    ctx->pc = 0x28f840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
label_28f844:
    // 0x28f844: 0xc10c313  jal         func_430C4C
label_28f848:
    if (ctx->pc == 0x28F848u) {
        ctx->pc = 0x28F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F844u;
        // 0x28f848: 0x24a5feb0  addiu       $a1, $a1, -0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F84Cu;
        goto label_28f84c;
    }
    ctx->pc = 0x28F844u;
    SET_GPR_U32(ctx, 31, 0x28F84Cu);
    ctx->pc = 0x28F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F844u;
    // 0x28f848: 0x24a5feb0  addiu       $a1, $a1, -0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x28F844u, 0x28F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F84Cu;
label_28f84c:
    // 0x28f84c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_28f850:
    if (ctx->pc == 0x28F850u) {
        ctx->pc = 0x28F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F84Cu;
        // 0x28f850: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F854u;
        goto label_28f854;
    }
    ctx->pc = 0x28F84Cu;
    {
        const bool branch_taken_0x28f84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f84c) {
            ctx->pc = 0x28F850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F84Cu;
            // 0x28f850: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F854u;
label_28f854:
    // 0x28f854: 0xc08a0b6  jal         func_2282D8
label_28f858:
    if (ctx->pc == 0x28F858u) {
        ctx->pc = 0x28F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F854u;
        // 0x28f858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F85Cu;
        goto label_28f85c;
    }
    ctx->pc = 0x28F854u;
    SET_GPR_U32(ctx, 31, 0x28F85Cu);
    ctx->pc = 0x28F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F854u;
    // 0x28f858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282D8u, 0x28F854u, 0x28F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F85Cu;
label_28f85c:
    // 0x28f85c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f860:
    // 0x28f860: 0x5633000f  bnel        $s1, $s3, . + 4 + (0xF << 2)
label_28f864:
    if (ctx->pc == 0x28F864u) {
        ctx->pc = 0x28F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F860u;
        // 0x28f864: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F868u;
        goto label_28f868;
    }
    ctx->pc = 0x28F860u;
    {
        const bool branch_taken_0x28f860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x28f860) {
            ctx->pc = 0x28F864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F860u;
            // 0x28f864: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F868u;
label_28f868:
    // 0x28f868: 0xc0a36c8  jal         func_28DB20
label_28f86c:
    if (ctx->pc == 0x28F86Cu) {
        ctx->pc = 0x28F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F868u;
        // 0x28f86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F870u;
        goto label_28f870;
    }
    ctx->pc = 0x28F868u;
    SET_GPR_U32(ctx, 31, 0x28F870u);
    ctx->pc = 0x28F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F868u;
    // 0x28f86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28F868u, 0x28F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F870u;
label_28f870:
    // 0x28f870: 0x5451000b  bnel        $v0, $s1, . + 4 + (0xB << 2)
label_28f874:
    if (ctx->pc == 0x28F874u) {
        ctx->pc = 0x28F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F870u;
        // 0x28f874: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F878u;
        goto label_28f878;
    }
    ctx->pc = 0x28F870u;
    {
        const bool branch_taken_0x28f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f870) {
            ctx->pc = 0x28F874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F870u;
            // 0x28f874: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8A0u;
            goto label_28f8a0;
        }
    }
    ctx->pc = 0x28F878u;
label_28f878:
    // 0x28f878: 0xc0a367c  jal         func_28D9F0
label_28f87c:
    if (ctx->pc == 0x28F87Cu) {
        ctx->pc = 0x28F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F878u;
        // 0x28f87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F880u;
        goto label_28f880;
    }
    ctx->pc = 0x28F878u;
    SET_GPR_U32(ctx, 31, 0x28F880u);
    ctx->pc = 0x28F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F878u;
    // 0x28f87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28F878u, 0x28F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F880u;
label_28f880:
    // 0x28f880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28f884:
    if (ctx->pc == 0x28F884u) {
        ctx->pc = 0x28F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F880u;
        // 0x28f884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F888u;
        goto label_28f888;
    }
    ctx->pc = 0x28F880u;
    {
        const bool branch_taken_0x28f880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F880u;
        // 0x28f884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f880) {
            ctx->pc = 0x28F89Cu;
            goto label_28f89c;
        }
    }
    ctx->pc = 0x28F888u;
label_28f888:
    // 0x28f888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f88c:
    // 0x28f88c: 0x240601dd  addiu       $a2, $zero, 0x1DD
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
label_28f890:
    // 0x28f890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28f890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f894:
    // 0x28f894: 0xc0be9b8  jal         func_2FA6E0
label_28f898:
    if (ctx->pc == 0x28F898u) {
        ctx->pc = 0x28F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F894u;
        // 0x28f898: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F89Cu;
        goto label_28f89c;
    }
    ctx->pc = 0x28F894u;
    SET_GPR_U32(ctx, 31, 0x28F89Cu);
    ctx->pc = 0x28F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F894u;
    // 0x28f898: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6E0u, 0x28F894u, 0x28F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F89Cu;
label_28f89c:
    // 0x28f89c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28f89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28f8a0:
    // 0x28f8a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28f8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28f8a4:
    // 0x28f8a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28f8a8:
    // 0x28f8a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28f8a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28f8ac:
    // 0x28f8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f8b0:
    // 0x28f8b0: 0x3e00008  jr          $ra
label_28f8b4:
    if (ctx->pc == 0x28F8B4u) {
        ctx->pc = 0x28F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8B0u;
        // 0x28f8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F8B8u;
        goto label_fallthrough_0x28f8b0;
    }
    ctx->pc = 0x28F8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8B0u;
        // 0x28f8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f8b0:
    ctx->pc = 0x28F8B8u;
}
