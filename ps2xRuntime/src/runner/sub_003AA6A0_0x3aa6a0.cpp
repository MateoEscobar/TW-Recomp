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

// Function: sub_003AA6A0
// Address: 0x3aa6a0 - 0x3aa8f0
void sub_003AA6A0_0x3aa6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA6A0_0x3aa6a0");
#endif

    switch (ctx->pc) {
        case 0x3aa6a0u: goto label_3aa6a0;
        case 0x3aa6a4u: goto label_3aa6a4;
        case 0x3aa6a8u: goto label_3aa6a8;
        case 0x3aa6acu: goto label_3aa6ac;
        case 0x3aa6b0u: goto label_3aa6b0;
        case 0x3aa6b4u: goto label_3aa6b4;
        case 0x3aa6b8u: goto label_3aa6b8;
        case 0x3aa6bcu: goto label_3aa6bc;
        case 0x3aa6c0u: goto label_3aa6c0;
        case 0x3aa6c4u: goto label_3aa6c4;
        case 0x3aa6c8u: goto label_3aa6c8;
        case 0x3aa6ccu: goto label_3aa6cc;
        case 0x3aa6d0u: goto label_3aa6d0;
        case 0x3aa6d4u: goto label_3aa6d4;
        case 0x3aa6d8u: goto label_3aa6d8;
        case 0x3aa6dcu: goto label_3aa6dc;
        case 0x3aa6e0u: goto label_3aa6e0;
        case 0x3aa6e4u: goto label_3aa6e4;
        case 0x3aa6e8u: goto label_3aa6e8;
        case 0x3aa6ecu: goto label_3aa6ec;
        case 0x3aa6f0u: goto label_3aa6f0;
        case 0x3aa6f4u: goto label_3aa6f4;
        case 0x3aa6f8u: goto label_3aa6f8;
        case 0x3aa6fcu: goto label_3aa6fc;
        case 0x3aa700u: goto label_3aa700;
        case 0x3aa704u: goto label_3aa704;
        case 0x3aa708u: goto label_3aa708;
        case 0x3aa70cu: goto label_3aa70c;
        case 0x3aa710u: goto label_3aa710;
        case 0x3aa714u: goto label_3aa714;
        case 0x3aa718u: goto label_3aa718;
        case 0x3aa71cu: goto label_3aa71c;
        case 0x3aa720u: goto label_3aa720;
        case 0x3aa724u: goto label_3aa724;
        case 0x3aa728u: goto label_3aa728;
        case 0x3aa72cu: goto label_3aa72c;
        case 0x3aa730u: goto label_3aa730;
        case 0x3aa734u: goto label_3aa734;
        case 0x3aa738u: goto label_3aa738;
        case 0x3aa73cu: goto label_3aa73c;
        case 0x3aa740u: goto label_3aa740;
        case 0x3aa744u: goto label_3aa744;
        case 0x3aa748u: goto label_3aa748;
        case 0x3aa74cu: goto label_3aa74c;
        case 0x3aa750u: goto label_3aa750;
        case 0x3aa754u: goto label_3aa754;
        case 0x3aa758u: goto label_3aa758;
        case 0x3aa75cu: goto label_3aa75c;
        case 0x3aa760u: goto label_3aa760;
        case 0x3aa764u: goto label_3aa764;
        case 0x3aa768u: goto label_3aa768;
        case 0x3aa76cu: goto label_3aa76c;
        case 0x3aa770u: goto label_3aa770;
        case 0x3aa774u: goto label_3aa774;
        case 0x3aa778u: goto label_3aa778;
        case 0x3aa77cu: goto label_3aa77c;
        case 0x3aa780u: goto label_3aa780;
        case 0x3aa784u: goto label_3aa784;
        case 0x3aa788u: goto label_3aa788;
        case 0x3aa78cu: goto label_3aa78c;
        case 0x3aa790u: goto label_3aa790;
        case 0x3aa794u: goto label_3aa794;
        case 0x3aa798u: goto label_3aa798;
        case 0x3aa79cu: goto label_3aa79c;
        case 0x3aa7a0u: goto label_3aa7a0;
        case 0x3aa7a4u: goto label_3aa7a4;
        case 0x3aa7a8u: goto label_3aa7a8;
        case 0x3aa7acu: goto label_3aa7ac;
        case 0x3aa7b0u: goto label_3aa7b0;
        case 0x3aa7b4u: goto label_3aa7b4;
        case 0x3aa7b8u: goto label_3aa7b8;
        case 0x3aa7bcu: goto label_3aa7bc;
        case 0x3aa7c0u: goto label_3aa7c0;
        case 0x3aa7c4u: goto label_3aa7c4;
        case 0x3aa7c8u: goto label_3aa7c8;
        case 0x3aa7ccu: goto label_3aa7cc;
        case 0x3aa7d0u: goto label_3aa7d0;
        case 0x3aa7d4u: goto label_3aa7d4;
        case 0x3aa7d8u: goto label_3aa7d8;
        case 0x3aa7dcu: goto label_3aa7dc;
        case 0x3aa7e0u: goto label_3aa7e0;
        case 0x3aa7e4u: goto label_3aa7e4;
        case 0x3aa7e8u: goto label_3aa7e8;
        case 0x3aa7ecu: goto label_3aa7ec;
        case 0x3aa7f0u: goto label_3aa7f0;
        case 0x3aa7f4u: goto label_3aa7f4;
        case 0x3aa7f8u: goto label_3aa7f8;
        case 0x3aa7fcu: goto label_3aa7fc;
        case 0x3aa800u: goto label_3aa800;
        case 0x3aa804u: goto label_3aa804;
        case 0x3aa808u: goto label_3aa808;
        case 0x3aa80cu: goto label_3aa80c;
        case 0x3aa810u: goto label_3aa810;
        case 0x3aa814u: goto label_3aa814;
        case 0x3aa818u: goto label_3aa818;
        case 0x3aa81cu: goto label_3aa81c;
        case 0x3aa820u: goto label_3aa820;
        case 0x3aa824u: goto label_3aa824;
        case 0x3aa828u: goto label_3aa828;
        case 0x3aa82cu: goto label_3aa82c;
        case 0x3aa830u: goto label_3aa830;
        case 0x3aa834u: goto label_3aa834;
        case 0x3aa838u: goto label_3aa838;
        case 0x3aa83cu: goto label_3aa83c;
        case 0x3aa840u: goto label_3aa840;
        case 0x3aa844u: goto label_3aa844;
        case 0x3aa848u: goto label_3aa848;
        case 0x3aa84cu: goto label_3aa84c;
        case 0x3aa850u: goto label_3aa850;
        case 0x3aa854u: goto label_3aa854;
        case 0x3aa858u: goto label_3aa858;
        case 0x3aa85cu: goto label_3aa85c;
        case 0x3aa860u: goto label_3aa860;
        case 0x3aa864u: goto label_3aa864;
        case 0x3aa868u: goto label_3aa868;
        case 0x3aa86cu: goto label_3aa86c;
        case 0x3aa870u: goto label_3aa870;
        case 0x3aa874u: goto label_3aa874;
        case 0x3aa878u: goto label_3aa878;
        case 0x3aa87cu: goto label_3aa87c;
        case 0x3aa880u: goto label_3aa880;
        case 0x3aa884u: goto label_3aa884;
        case 0x3aa888u: goto label_3aa888;
        case 0x3aa88cu: goto label_3aa88c;
        case 0x3aa890u: goto label_3aa890;
        case 0x3aa894u: goto label_3aa894;
        case 0x3aa898u: goto label_3aa898;
        case 0x3aa89cu: goto label_3aa89c;
        case 0x3aa8a0u: goto label_3aa8a0;
        case 0x3aa8a4u: goto label_3aa8a4;
        case 0x3aa8a8u: goto label_3aa8a8;
        case 0x3aa8acu: goto label_3aa8ac;
        case 0x3aa8b0u: goto label_3aa8b0;
        case 0x3aa8b4u: goto label_3aa8b4;
        case 0x3aa8b8u: goto label_3aa8b8;
        case 0x3aa8bcu: goto label_3aa8bc;
        case 0x3aa8c0u: goto label_3aa8c0;
        case 0x3aa8c4u: goto label_3aa8c4;
        case 0x3aa8c8u: goto label_3aa8c8;
        case 0x3aa8ccu: goto label_3aa8cc;
        case 0x3aa8d0u: goto label_3aa8d0;
        case 0x3aa8d4u: goto label_3aa8d4;
        case 0x3aa8d8u: goto label_3aa8d8;
        case 0x3aa8dcu: goto label_3aa8dc;
        case 0x3aa8e0u: goto label_3aa8e0;
        case 0x3aa8e4u: goto label_3aa8e4;
        case 0x3aa8e8u: goto label_3aa8e8;
        case 0x3aa8ecu: goto label_3aa8ec;
        default: break;
    }

    ctx->pc = 0x3aa6a0u;

label_3aa6a0:
    // 0x3aa6a0: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x3aa6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_3aa6a4:
    // 0x3aa6a4: 0x7fb00530  sq          $s0, 0x530($sp)
    ctx->pc = 0x3aa6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 16));
label_3aa6a8:
    // 0x3aa6a8: 0x7fb10520  sq          $s1, 0x520($sp)
    ctx->pc = 0x3aa6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 17));
label_3aa6ac:
    // 0x3aa6ac: 0x7fb20510  sq          $s2, 0x510($sp)
    ctx->pc = 0x3aa6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 18));
label_3aa6b0:
    // 0x3aa6b0: 0x7fb30500  sq          $s3, 0x500($sp)
    ctx->pc = 0x3aa6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 19));
label_3aa6b4:
    // 0x3aa6b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3aa6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa6b8:
    // 0x3aa6b8: 0x7fb504e0  sq          $s5, 0x4E0($sp)
    ctx->pc = 0x3aa6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 21));
label_3aa6bc:
    // 0x3aa6bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3aa6bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3aa6c0:
    // 0x3aa6c0: 0x7fb404f0  sq          $s4, 0x4F0($sp)
    ctx->pc = 0x3aa6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 20));
label_3aa6c4:
    // 0x3aa6c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3aa6c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa6c8:
    // 0x3aa6c8: 0x7fb604d0  sq          $s6, 0x4D0($sp)
    ctx->pc = 0x3aa6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 22));
label_3aa6cc:
    // 0x3aa6cc: 0x7fb704c0  sq          $s7, 0x4C0($sp)
    ctx->pc = 0x3aa6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 23));
label_3aa6d0:
    // 0x3aa6d0: 0x7fbe04b0  sq          $fp, 0x4B0($sp)
    ctx->pc = 0x3aa6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 30));
label_3aa6d4:
    // 0x3aa6d4: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3aa6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3aa6d8:
    // 0x3aa6d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aa6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa6dc:
    // 0x3aa6dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aa6dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aa6e0:
    // 0x3aa6e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aa6e4:
    // 0x3aa6e4: 0x40f809  jalr        $v0
label_3aa6e8:
    if (ctx->pc == 0x3AA6E8u) {
        ctx->pc = 0x3AA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6E4u;
        // 0x3aa6e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6ECu;
        goto label_3aa6ec;
    }
    ctx->pc = 0x3AA6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA6ECu);
        ctx->pc = 0x3AA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6E4u;
        // 0x3aa6e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA6E4u, 0x3AA6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA6ECu;
label_3aa6ec:
    // 0x3aa6ec: 0xc0ea146  jal         func_3A8518
label_3aa6f0:
    if (ctx->pc == 0x3AA6F0u) {
        ctx->pc = 0x3AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6ECu;
        // 0x3aa6f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6F4u;
        goto label_3aa6f4;
    }
    ctx->pc = 0x3AA6ECu;
    SET_GPR_U32(ctx, 31, 0x3AA6F4u);
    ctx->pc = 0x3AA6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA6ECu;
    // 0x3aa6f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA6ECu, 0x3AA6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA6F4u;
label_3aa6f4:
    // 0x3aa6f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa6f8:
    // 0x3aa6f8: 0xc0ea12a  jal         func_3A84A8
label_3aa6fc:
    if (ctx->pc == 0x3AA6FCu) {
        ctx->pc = 0x3AA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6F8u;
        // 0x3aa6fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA700u;
        goto label_3aa700;
    }
    ctx->pc = 0x3AA6F8u;
    SET_GPR_U32(ctx, 31, 0x3AA700u);
    ctx->pc = 0x3AA6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA6F8u;
    // 0x3aa6fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA6F8u, 0x3AA700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA700u;
label_3aa700:
    // 0x3aa700: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa704:
    // 0x3aa704: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa708:
    // 0x3aa708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aa708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aa70c:
    // 0x3aa70c: 0xc0ea12a  jal         func_3A84A8
label_3aa710:
    if (ctx->pc == 0x3AA710u) {
        ctx->pc = 0x3AA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA70Cu;
        // 0x3aa710: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA714u;
        goto label_3aa714;
    }
    ctx->pc = 0x3AA70Cu;
    SET_GPR_U32(ctx, 31, 0x3AA714u);
    ctx->pc = 0x3AA710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA70Cu;
    // 0x3aa710: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA70Cu, 0x3AA714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA714u;
label_3aa714:
    // 0x3aa714: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa718:
    // 0x3aa718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aa718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aa71c:
    // 0x3aa71c: 0xc0ea146  jal         func_3A8518
label_3aa720:
    if (ctx->pc == 0x3AA720u) {
        ctx->pc = 0x3AA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA71Cu;
        // 0x3aa720: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA724u;
        goto label_3aa724;
    }
    ctx->pc = 0x3AA71Cu;
    SET_GPR_U32(ctx, 31, 0x3AA724u);
    ctx->pc = 0x3AA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA71Cu;
    // 0x3aa720: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA71Cu, 0x3AA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA724u;
label_3aa724:
    // 0x3aa724: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aa724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa728:
    // 0x3aa728: 0xc0ea14c  jal         func_3A8530
label_3aa72c:
    if (ctx->pc == 0x3AA72Cu) {
        ctx->pc = 0x3AA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA728u;
        // 0x3aa72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA730u;
        goto label_3aa730;
    }
    ctx->pc = 0x3AA728u;
    SET_GPR_U32(ctx, 31, 0x3AA730u);
    ctx->pc = 0x3AA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA728u;
    // 0x3aa72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AA728u, 0x3AA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA730u;
label_3aa730:
    // 0x3aa730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aa730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa734:
    // 0x3aa734: 0xc0ea146  jal         func_3A8518
label_3aa738:
    if (ctx->pc == 0x3AA738u) {
        ctx->pc = 0x3AA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA734u;
        // 0x3aa738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA73Cu;
        goto label_3aa73c;
    }
    ctx->pc = 0x3AA734u;
    SET_GPR_U32(ctx, 31, 0x3AA73Cu);
    ctx->pc = 0x3AA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA734u;
    // 0x3aa738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA734u, 0x3AA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA73Cu;
label_3aa73c:
    // 0x3aa73c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aa73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa740:
    // 0x3aa740: 0xc0e858c  jal         func_3A1630
label_3aa744:
    if (ctx->pc == 0x3AA744u) {
        ctx->pc = 0x3AA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA740u;
        // 0x3aa744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA748u;
        goto label_3aa748;
    }
    ctx->pc = 0x3AA740u;
    SET_GPR_U32(ctx, 31, 0x3AA748u);
    ctx->pc = 0x3AA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA740u;
    // 0x3aa744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AA740u, 0x3AA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA748u;
label_3aa748:
    // 0x3aa748: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3aa748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3aa74c:
    // 0x3aa74c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3aa74cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3aa750:
    // 0x3aa750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa754:
    // 0x3aa754: 0xc0e896e  jal         func_3A25B8
label_3aa758:
    if (ctx->pc == 0x3AA758u) {
        ctx->pc = 0x3AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA754u;
        // 0x3aa758: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA75Cu;
        goto label_3aa75c;
    }
    ctx->pc = 0x3AA754u;
    SET_GPR_U32(ctx, 31, 0x3AA75Cu);
    ctx->pc = 0x3AA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA754u;
    // 0x3aa758: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3AA754u, 0x3AA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA75Cu;
label_3aa75c:
    // 0x3aa75c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aa75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa760:
    // 0x3aa760: 0xc0e862e  jal         func_3A18B8
label_3aa764:
    if (ctx->pc == 0x3AA764u) {
        ctx->pc = 0x3AA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA760u;
        // 0x3aa764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA768u;
        goto label_3aa768;
    }
    ctx->pc = 0x3AA760u;
    SET_GPR_U32(ctx, 31, 0x3AA768u);
    ctx->pc = 0x3AA764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA760u;
    // 0x3aa764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3AA760u, 0x3AA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA768u;
label_3aa768:
    // 0x3aa768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa76c:
    // 0x3aa76c: 0xc0e896c  jal         func_3A25B0
label_3aa770:
    if (ctx->pc == 0x3AA770u) {
        ctx->pc = 0x3AA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA76Cu;
        // 0x3aa770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA774u;
        goto label_3aa774;
    }
    ctx->pc = 0x3AA76Cu;
    SET_GPR_U32(ctx, 31, 0x3AA774u);
    ctx->pc = 0x3AA770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA76Cu;
    // 0x3aa770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3AA76Cu, 0x3AA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA774u;
label_3aa774:
    // 0x3aa774: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3aa774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa778:
    // 0x3aa778: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3aa778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa77c:
    // 0x3aa77c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3aa77cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3aa780:
    // 0x3aa780: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3aa780u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3aa784:
    // 0x3aa784: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3aa784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3aa788:
    // 0x3aa788: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x3aa788u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
label_3aa78c:
    // 0x3aa78c: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x3aa78cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3aa790:
    // 0x3aa790: 0x27b70450  addiu       $s7, $sp, 0x450
    ctx->pc = 0x3aa790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3aa794:
    // 0x3aa794: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3aa798:
    if (ctx->pc == 0x3AA798u) {
        ctx->pc = 0x3AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA794u;
        // 0x3aa798: 0x27b40470  addiu       $s4, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA79Cu;
        goto label_3aa79c;
    }
    ctx->pc = 0x3AA794u;
    {
        const bool branch_taken_0x3aa794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA794u;
        // 0x3aa798: 0x27b40470  addiu       $s4, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa794) {
            ctx->pc = 0x3AA800u;
            goto label_3aa800;
        }
    }
    ctx->pc = 0x3AA79Cu;
label_3aa79c:
    // 0x3aa79c: 0x0  nop
    ctx->pc = 0x3aa79cu;
    // NOP
label_3aa7a0:
    // 0x3aa7a0: 0xc0e8b36  jal         func_3A2CD8
label_3aa7a4:
    if (ctx->pc == 0x3AA7A4u) {
        ctx->pc = 0x3AA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7A0u;
        // 0x3aa7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7A8u;
        goto label_3aa7a8;
    }
    ctx->pc = 0x3AA7A0u;
    SET_GPR_U32(ctx, 31, 0x3AA7A8u);
    ctx->pc = 0x3AA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA7A0u;
    // 0x3aa7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3AA7A0u, 0x3AA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA7A8u;
label_3aa7a8:
    // 0x3aa7a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3aa7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3aa7ac:
    // 0x3aa7ac: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x3aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3aa7b0:
    // 0x3aa7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aa7b4:
    // 0x3aa7b4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3aa7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3aa7b8:
    // 0x3aa7b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aa7bc:
    // 0x3aa7bc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3aa7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3aa7c0:
    // 0x3aa7c0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3aa7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3aa7c4:
    // 0x3aa7c4: 0x40f809  jalr        $v0
label_3aa7c8:
    if (ctx->pc == 0x3AA7C8u) {
        ctx->pc = 0x3AA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7C4u;
        // 0x3aa7c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7CCu;
        goto label_3aa7cc;
    }
    ctx->pc = 0x3AA7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA7CCu);
        ctx->pc = 0x3AA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7C4u;
        // 0x3aa7c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA7C4u, 0x3AA7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA7CCu;
label_3aa7cc:
    // 0x3aa7cc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3aa7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3aa7d0:
    // 0x3aa7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aa7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa7d4:
    // 0x3aa7d4: 0xc10d74c  jal         func_435D30
label_3aa7d8:
    if (ctx->pc == 0x3AA7D8u) {
        ctx->pc = 0x3AA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7D4u;
        // 0x3aa7d8: 0x24841d10  addiu       $a0, $a0, 0x1D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7DCu;
        goto label_3aa7dc;
    }
    ctx->pc = 0x3AA7D4u;
    SET_GPR_U32(ctx, 31, 0x3AA7DCu);
    ctx->pc = 0x3AA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA7D4u;
    // 0x3aa7d8: 0x24841d10  addiu       $a0, $a0, 0x1D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x3AA7D4u, 0x3AA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA7DCu;
label_3aa7dc:
    // 0x3aa7dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3aa7e0:
    if (ctx->pc == 0x3AA7E0u) {
        ctx->pc = 0x3AA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7DCu;
        // 0x3aa7e0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7E4u;
        goto label_3aa7e4;
    }
    ctx->pc = 0x3AA7DCu;
    {
        const bool branch_taken_0x3aa7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7DCu;
        // 0x3aa7e0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa7dc) {
            ctx->pc = 0x3AA7FCu;
            goto label_3aa7fc;
        }
    }
    ctx->pc = 0x3AA7E4u;
label_3aa7e4:
    // 0x3aa7e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aa7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aa7e8:
    // 0x3aa7e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3aa7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aa7ec:
    // 0x3aa7ec: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3aa7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3aa7f0:
    // 0x3aa7f0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3aa7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3aa7f4:
    // 0x3aa7f4: 0x60f809  jalr        $v1
label_3aa7f8:
    if (ctx->pc == 0x3AA7F8u) {
        ctx->pc = 0x3AA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7F4u;
        // 0x3aa7f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7FCu;
        goto label_3aa7fc;
    }
    ctx->pc = 0x3AA7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AA7FCu);
        ctx->pc = 0x3AA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7F4u;
        // 0x3aa7f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA7F4u, 0x3AA7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA7FCu;
label_3aa7fc:
    // 0x3aa7fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3aa7fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3aa800:
    // 0x3aa800: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3aa800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3aa804:
    // 0x3aa804: 0xc0e8b36  jal         func_3A2CD8
label_3aa808:
    if (ctx->pc == 0x3AA808u) {
        ctx->pc = 0x3AA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA804u;
        // 0x3aa808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA80Cu;
        goto label_3aa80c;
    }
    ctx->pc = 0x3AA804u;
    SET_GPR_U32(ctx, 31, 0x3AA80Cu);
    ctx->pc = 0x3AA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA804u;
    // 0x3aa808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3AA804u, 0x3AA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA80Cu;
label_3aa80c:
    // 0x3aa80c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3aa80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3aa810:
    // 0x3aa810: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3aa810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3aa814:
    // 0x3aa814: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x3aa814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3aa818:
    // 0x3aa818: 0xa0f809  jalr        $a1
label_3aa81c:
    if (ctx->pc == 0x3AA81Cu) {
        ctx->pc = 0x3AA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA818u;
        // 0x3aa81c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA820u;
        goto label_3aa820;
    }
    ctx->pc = 0x3AA818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3AA820u);
        ctx->pc = 0x3AA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA818u;
        // 0x3aa81c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA818u, 0x3AA820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA820u;
label_3aa820:
    // 0x3aa820: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3aa820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3aa824:
    // 0x3aa824: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_3aa828:
    if (ctx->pc == 0x3AA828u) {
        ctx->pc = 0x3AA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA824u;
        // 0x3aa828: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA82Cu;
        goto label_3aa82c;
    }
    ctx->pc = 0x3AA824u;
    {
        const bool branch_taken_0x3aa824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA824u;
        // 0x3aa828: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa824) {
            ctx->pc = 0x3AA7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa7a0;
        }
    }
    ctx->pc = 0x3AA82Cu;
label_3aa82c:
    // 0x3aa82c: 0x3c04813c  lui         $a0, 0x813C
    ctx->pc = 0x3aa82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33084 << 16));
label_3aa830:
    // 0x3aa830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3aa830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3aa834:
    // 0x3aa834: 0x3484858a  ori         $a0, $a0, 0x858A
    ctx->pc = 0x3aa834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34186);
label_3aa838:
    // 0x3aa838: 0xc045c8e  jal         func_117238
label_3aa83c:
    if (ctx->pc == 0x3AA83Cu) {
        ctx->pc = 0x3AA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA838u;
        // 0x3aa83c: 0x27d01d28  addiu       $s0, $fp, 0x1D28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 7464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA840u;
        goto label_3aa840;
    }
    ctx->pc = 0x3AA838u;
    SET_GPR_U32(ctx, 31, 0x3AA840u);
    ctx->pc = 0x3AA83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA838u;
    // 0x3aa83c: 0x27d01d28  addiu       $s0, $fp, 0x1D28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 7464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3AA838u, 0x3AA840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA840u;
label_3aa840:
    // 0x3aa840: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3aa840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3aa844:
    // 0x3aa844: 0xc0e90ca  jal         func_3A4328
label_3aa848:
    if (ctx->pc == 0x3AA848u) {
        ctx->pc = 0x3AA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA844u;
        // 0x3aa848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA84Cu;
        goto label_3aa84c;
    }
    ctx->pc = 0x3AA844u;
    SET_GPR_U32(ctx, 31, 0x3AA84Cu);
    ctx->pc = 0x3AA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA844u;
    // 0x3aa848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AA844u, 0x3AA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA84Cu;
label_3aa84c:
    // 0x3aa84c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3aa84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3aa850:
    // 0x3aa850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa854:
    // 0x3aa854: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3aa854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa858:
    // 0x3aa858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aa858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aa85c:
    // 0x3aa85c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aa85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aa860:
    // 0x3aa860: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3aa860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aa864:
    // 0x3aa864: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3aa864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3aa868:
    // 0x3aa868: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3aa868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aa86c:
    // 0x3aa86c: 0xafa00474  sw          $zero, 0x474($sp)
    ctx->pc = 0x3aa86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 0));
label_3aa870:
    // 0x3aa870: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x3aa870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3aa874:
    // 0x3aa874: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x3aa874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3aa878:
    // 0x3aa878: 0x7ba70470  lq          $a3, 0x470($sp)
    ctx->pc = 0x3aa878u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3aa87c:
    // 0x3aa87c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3aa87cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3aa880:
    // 0x3aa880: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3aa880u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa884:
    // 0x3aa884: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aa884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aa888:
    // 0x3aa888: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3aa888u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3aa88c:
    // 0x3aa88c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3aa88cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aa890:
    // 0x3aa890: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3aa890u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aa894:
    // 0x3aa894: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3aa894u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aa898:
    // 0x3aa898: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3aa898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3aa89c:
    // 0x3aa89c: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3aa89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3aa8a0:
    // 0x3aa8a0: 0x7fa70460  sq          $a3, 0x460($sp)
    ctx->pc = 0x3aa8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 7));
label_3aa8a4:
    // 0x3aa8a4: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3aa8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3aa8a8:
    // 0x3aa8a8: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3aa8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3aa8ac:
    // 0x3aa8ac: 0xc0e9f84  jal         func_3A7E10
label_3aa8b0:
    if (ctx->pc == 0x3AA8B0u) {
        ctx->pc = 0x3AA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8ACu;
        // 0x3aa8b0: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8B4u;
        goto label_3aa8b4;
    }
    ctx->pc = 0x3AA8ACu;
    SET_GPR_U32(ctx, 31, 0x3AA8B4u);
    ctx->pc = 0x3AA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA8ACu;
    // 0x3aa8b0: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3AA8ACu, 0x3AA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8B4u;
label_3aa8b4:
    // 0x3aa8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa8b8:
    // 0x3aa8b8: 0xc0f15bc  jal         func_3C56F0
label_3aa8bc:
    if (ctx->pc == 0x3AA8BCu) {
        ctx->pc = 0x3AA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8B8u;
        // 0x3aa8bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8C0u;
        goto label_3aa8c0;
    }
    ctx->pc = 0x3AA8B8u;
    SET_GPR_U32(ctx, 31, 0x3AA8C0u);
    ctx->pc = 0x3AA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA8B8u;
    // 0x3aa8bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AA8B8u, 0x3AA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8C0u;
label_3aa8c0:
    // 0x3aa8c0: 0x7bb00530  lq          $s0, 0x530($sp)
    ctx->pc = 0x3aa8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3aa8c4:
    // 0x3aa8c4: 0x7bb10520  lq          $s1, 0x520($sp)
    ctx->pc = 0x3aa8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3aa8c8:
    // 0x3aa8c8: 0x7bb20510  lq          $s2, 0x510($sp)
    ctx->pc = 0x3aa8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3aa8cc:
    // 0x3aa8cc: 0x7bb30500  lq          $s3, 0x500($sp)
    ctx->pc = 0x3aa8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3aa8d0:
    // 0x3aa8d0: 0x7bb404f0  lq          $s4, 0x4F0($sp)
    ctx->pc = 0x3aa8d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3aa8d4:
    // 0x3aa8d4: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x3aa8d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3aa8d8:
    // 0x3aa8d8: 0x7bb604d0  lq          $s6, 0x4D0($sp)
    ctx->pc = 0x3aa8d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3aa8dc:
    // 0x3aa8dc: 0x7bb704c0  lq          $s7, 0x4C0($sp)
    ctx->pc = 0x3aa8dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3aa8e0:
    // 0x3aa8e0: 0x7bbe04b0  lq          $fp, 0x4B0($sp)
    ctx->pc = 0x3aa8e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3aa8e4:
    // 0x3aa8e4: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3aa8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3aa8e8:
    // 0x3aa8e8: 0x3e00008  jr          $ra
label_3aa8ec:
    if (ctx->pc == 0x3AA8ECu) {
        ctx->pc = 0x3AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E8u;
        // 0x3aa8ec: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8F0u;
        goto label_fallthrough_0x3aa8e8;
    }
    ctx->pc = 0x3AA8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E8u;
        // 0x3aa8ec: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aa8e8:
    ctx->pc = 0x3AA8F0u;
}
