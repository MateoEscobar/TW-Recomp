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

// Function: sub_003D7678
// Address: 0x3d7678 - 0x3d7920
void sub_003D7678_0x3d7678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7678_0x3d7678");
#endif

    switch (ctx->pc) {
        case 0x3d7678u: goto label_3d7678;
        case 0x3d767cu: goto label_3d767c;
        case 0x3d7680u: goto label_3d7680;
        case 0x3d7684u: goto label_3d7684;
        case 0x3d7688u: goto label_3d7688;
        case 0x3d768cu: goto label_3d768c;
        case 0x3d7690u: goto label_3d7690;
        case 0x3d7694u: goto label_3d7694;
        case 0x3d7698u: goto label_3d7698;
        case 0x3d769cu: goto label_3d769c;
        case 0x3d76a0u: goto label_3d76a0;
        case 0x3d76a4u: goto label_3d76a4;
        case 0x3d76a8u: goto label_3d76a8;
        case 0x3d76acu: goto label_3d76ac;
        case 0x3d76b0u: goto label_3d76b0;
        case 0x3d76b4u: goto label_3d76b4;
        case 0x3d76b8u: goto label_3d76b8;
        case 0x3d76bcu: goto label_3d76bc;
        case 0x3d76c0u: goto label_3d76c0;
        case 0x3d76c4u: goto label_3d76c4;
        case 0x3d76c8u: goto label_3d76c8;
        case 0x3d76ccu: goto label_3d76cc;
        case 0x3d76d0u: goto label_3d76d0;
        case 0x3d76d4u: goto label_3d76d4;
        case 0x3d76d8u: goto label_3d76d8;
        case 0x3d76dcu: goto label_3d76dc;
        case 0x3d76e0u: goto label_3d76e0;
        case 0x3d76e4u: goto label_3d76e4;
        case 0x3d76e8u: goto label_3d76e8;
        case 0x3d76ecu: goto label_3d76ec;
        case 0x3d76f0u: goto label_3d76f0;
        case 0x3d76f4u: goto label_3d76f4;
        case 0x3d76f8u: goto label_3d76f8;
        case 0x3d76fcu: goto label_3d76fc;
        case 0x3d7700u: goto label_3d7700;
        case 0x3d7704u: goto label_3d7704;
        case 0x3d7708u: goto label_3d7708;
        case 0x3d770cu: goto label_3d770c;
        case 0x3d7710u: goto label_3d7710;
        case 0x3d7714u: goto label_3d7714;
        case 0x3d7718u: goto label_3d7718;
        case 0x3d771cu: goto label_3d771c;
        case 0x3d7720u: goto label_3d7720;
        case 0x3d7724u: goto label_3d7724;
        case 0x3d7728u: goto label_3d7728;
        case 0x3d772cu: goto label_3d772c;
        case 0x3d7730u: goto label_3d7730;
        case 0x3d7734u: goto label_3d7734;
        case 0x3d7738u: goto label_3d7738;
        case 0x3d773cu: goto label_3d773c;
        case 0x3d7740u: goto label_3d7740;
        case 0x3d7744u: goto label_3d7744;
        case 0x3d7748u: goto label_3d7748;
        case 0x3d774cu: goto label_3d774c;
        case 0x3d7750u: goto label_3d7750;
        case 0x3d7754u: goto label_3d7754;
        case 0x3d7758u: goto label_3d7758;
        case 0x3d775cu: goto label_3d775c;
        case 0x3d7760u: goto label_3d7760;
        case 0x3d7764u: goto label_3d7764;
        case 0x3d7768u: goto label_3d7768;
        case 0x3d776cu: goto label_3d776c;
        case 0x3d7770u: goto label_3d7770;
        case 0x3d7774u: goto label_3d7774;
        case 0x3d7778u: goto label_3d7778;
        case 0x3d777cu: goto label_3d777c;
        case 0x3d7780u: goto label_3d7780;
        case 0x3d7784u: goto label_3d7784;
        case 0x3d7788u: goto label_3d7788;
        case 0x3d778cu: goto label_3d778c;
        case 0x3d7790u: goto label_3d7790;
        case 0x3d7794u: goto label_3d7794;
        case 0x3d7798u: goto label_3d7798;
        case 0x3d779cu: goto label_3d779c;
        case 0x3d77a0u: goto label_3d77a0;
        case 0x3d77a4u: goto label_3d77a4;
        case 0x3d77a8u: goto label_3d77a8;
        case 0x3d77acu: goto label_3d77ac;
        case 0x3d77b0u: goto label_3d77b0;
        case 0x3d77b4u: goto label_3d77b4;
        case 0x3d77b8u: goto label_3d77b8;
        case 0x3d77bcu: goto label_3d77bc;
        case 0x3d77c0u: goto label_3d77c0;
        case 0x3d77c4u: goto label_3d77c4;
        case 0x3d77c8u: goto label_3d77c8;
        case 0x3d77ccu: goto label_3d77cc;
        case 0x3d77d0u: goto label_3d77d0;
        case 0x3d77d4u: goto label_3d77d4;
        case 0x3d77d8u: goto label_3d77d8;
        case 0x3d77dcu: goto label_3d77dc;
        case 0x3d77e0u: goto label_3d77e0;
        case 0x3d77e4u: goto label_3d77e4;
        case 0x3d77e8u: goto label_3d77e8;
        case 0x3d77ecu: goto label_3d77ec;
        case 0x3d77f0u: goto label_3d77f0;
        case 0x3d77f4u: goto label_3d77f4;
        case 0x3d77f8u: goto label_3d77f8;
        case 0x3d77fcu: goto label_3d77fc;
        case 0x3d7800u: goto label_3d7800;
        case 0x3d7804u: goto label_3d7804;
        case 0x3d7808u: goto label_3d7808;
        case 0x3d780cu: goto label_3d780c;
        case 0x3d7810u: goto label_3d7810;
        case 0x3d7814u: goto label_3d7814;
        case 0x3d7818u: goto label_3d7818;
        case 0x3d781cu: goto label_3d781c;
        case 0x3d7820u: goto label_3d7820;
        case 0x3d7824u: goto label_3d7824;
        case 0x3d7828u: goto label_3d7828;
        case 0x3d782cu: goto label_3d782c;
        case 0x3d7830u: goto label_3d7830;
        case 0x3d7834u: goto label_3d7834;
        case 0x3d7838u: goto label_3d7838;
        case 0x3d783cu: goto label_3d783c;
        case 0x3d7840u: goto label_3d7840;
        case 0x3d7844u: goto label_3d7844;
        case 0x3d7848u: goto label_3d7848;
        case 0x3d784cu: goto label_3d784c;
        case 0x3d7850u: goto label_3d7850;
        case 0x3d7854u: goto label_3d7854;
        case 0x3d7858u: goto label_3d7858;
        case 0x3d785cu: goto label_3d785c;
        case 0x3d7860u: goto label_3d7860;
        case 0x3d7864u: goto label_3d7864;
        case 0x3d7868u: goto label_3d7868;
        case 0x3d786cu: goto label_3d786c;
        case 0x3d7870u: goto label_3d7870;
        case 0x3d7874u: goto label_3d7874;
        case 0x3d7878u: goto label_3d7878;
        case 0x3d787cu: goto label_3d787c;
        case 0x3d7880u: goto label_3d7880;
        case 0x3d7884u: goto label_3d7884;
        case 0x3d7888u: goto label_3d7888;
        case 0x3d788cu: goto label_3d788c;
        case 0x3d7890u: goto label_3d7890;
        case 0x3d7894u: goto label_3d7894;
        case 0x3d7898u: goto label_3d7898;
        case 0x3d789cu: goto label_3d789c;
        case 0x3d78a0u: goto label_3d78a0;
        case 0x3d78a4u: goto label_3d78a4;
        case 0x3d78a8u: goto label_3d78a8;
        case 0x3d78acu: goto label_3d78ac;
        case 0x3d78b0u: goto label_3d78b0;
        case 0x3d78b4u: goto label_3d78b4;
        case 0x3d78b8u: goto label_3d78b8;
        case 0x3d78bcu: goto label_3d78bc;
        case 0x3d78c0u: goto label_3d78c0;
        case 0x3d78c4u: goto label_3d78c4;
        case 0x3d78c8u: goto label_3d78c8;
        case 0x3d78ccu: goto label_3d78cc;
        case 0x3d78d0u: goto label_3d78d0;
        case 0x3d78d4u: goto label_3d78d4;
        case 0x3d78d8u: goto label_3d78d8;
        case 0x3d78dcu: goto label_3d78dc;
        case 0x3d78e0u: goto label_3d78e0;
        case 0x3d78e4u: goto label_3d78e4;
        case 0x3d78e8u: goto label_3d78e8;
        case 0x3d78ecu: goto label_3d78ec;
        case 0x3d78f0u: goto label_3d78f0;
        case 0x3d78f4u: goto label_3d78f4;
        case 0x3d78f8u: goto label_3d78f8;
        case 0x3d78fcu: goto label_3d78fc;
        case 0x3d7900u: goto label_3d7900;
        case 0x3d7904u: goto label_3d7904;
        case 0x3d7908u: goto label_3d7908;
        case 0x3d790cu: goto label_3d790c;
        case 0x3d7910u: goto label_3d7910;
        case 0x3d7914u: goto label_3d7914;
        case 0x3d7918u: goto label_3d7918;
        case 0x3d791cu: goto label_3d791c;
        default: break;
    }

    ctx->pc = 0x3d7678u;

label_3d7678:
    // 0x3d7678: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3d7678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3d767c:
    // 0x3d767c: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3d767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3d7680:
    // 0x3d7680: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d7680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3d7684:
    // 0x3d7684: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d7684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3d7688:
    // 0x3d7688: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d7688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d768c:
    // 0x3d768c: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_3d7690:
    // 0x3d7690: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d7690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_3d7694:
    // 0x3d7694: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3d7694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3d7698:
    // 0x3d7698: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3d7698u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d769c:
    // 0x3d769c: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_3d76a0:
    // 0x3d76a0: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d76a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d76a4:
    // 0x3d76a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d76a8:
    // 0x3d76a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d76a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d76ac:
    // 0x3d76ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d76b0:
    // 0x3d76b0: 0x40f809  jalr        $v0
label_3d76b4:
    if (ctx->pc == 0x3D76B4u) {
        ctx->pc = 0x3D76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76B0u;
        // 0x3d76b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76B8u;
        goto label_3d76b8;
    }
    ctx->pc = 0x3D76B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D76B8u);
        ctx->pc = 0x3D76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76B0u;
        // 0x3d76b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D76B0u, 0x3D76B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D76B8u;
label_3d76b8:
    // 0x3d76b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d76b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d76bc:
    // 0x3d76bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d76bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d76c0:
    // 0x3d76c0: 0xc0e858c  jal         func_3A1630
label_3d76c4:
    if (ctx->pc == 0x3D76C4u) {
        ctx->pc = 0x3D76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76C0u;
        // 0x3d76c4: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76C8u;
        goto label_3d76c8;
    }
    ctx->pc = 0x3D76C0u;
    SET_GPR_U32(ctx, 31, 0x3D76C8u);
    ctx->pc = 0x3D76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D76C0u;
    // 0x3d76c4: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D76C0u, 0x3D76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D76C8u;
label_3d76c8:
    // 0x3d76c8: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3d76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3d76cc:
    // 0x3d76cc: 0xc0ea14c  jal         func_3A8530
label_3d76d0:
    if (ctx->pc == 0x3D76D0u) {
        ctx->pc = 0x3D76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76CCu;
        // 0x3d76d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76D4u;
        goto label_3d76d4;
    }
    ctx->pc = 0x3D76CCu;
    SET_GPR_U32(ctx, 31, 0x3D76D4u);
    ctx->pc = 0x3D76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D76CCu;
    // 0x3d76d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D76CCu, 0x3D76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D76D4u;
label_3d76d4:
    // 0x3d76d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d76d8:
    // 0x3d76d8: 0xc0ea12a  jal         func_3A84A8
label_3d76dc:
    if (ctx->pc == 0x3D76DCu) {
        ctx->pc = 0x3D76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76D8u;
        // 0x3d76dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76E0u;
        goto label_3d76e0;
    }
    ctx->pc = 0x3D76D8u;
    SET_GPR_U32(ctx, 31, 0x3D76E0u);
    ctx->pc = 0x3D76DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D76D8u;
    // 0x3d76dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D76D8u, 0x3D76E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D76E0u;
label_3d76e0:
    // 0x3d76e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d76e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d76e4:
    // 0x3d76e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d76e8:
    // 0x3d76e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d76e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d76ec:
    // 0x3d76ec: 0xc0ea12a  jal         func_3A84A8
label_3d76f0:
    if (ctx->pc == 0x3D76F0u) {
        ctx->pc = 0x3D76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76ECu;
        // 0x3d76f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76F4u;
        goto label_3d76f4;
    }
    ctx->pc = 0x3D76ECu;
    SET_GPR_U32(ctx, 31, 0x3D76F4u);
    ctx->pc = 0x3D76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D76ECu;
    // 0x3d76f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D76ECu, 0x3D76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D76F4u;
label_3d76f4:
    // 0x3d76f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d76f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d76f8:
    // 0x3d76f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d76fc:
    // 0x3d76fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d7700:
    // 0x3d7700: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d7700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d7704:
    // 0x3d7704: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3d7704u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3d7708:
    // 0x3d7708: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d7708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d770c:
    // 0x3d770c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d7710:
    // 0x3d7710: 0xc0cd4ee  jal         func_3353B8
label_3d7714:
    if (ctx->pc == 0x3D7714u) {
        ctx->pc = 0x3D7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7710u;
        // 0x3d7714: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7718u;
        goto label_3d7718;
    }
    ctx->pc = 0x3D7710u;
    SET_GPR_U32(ctx, 31, 0x3D7718u);
    ctx->pc = 0x3D7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7710u;
    // 0x3d7714: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D7710u, 0x3D7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7718u;
label_3d7718:
    // 0x3d7718: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3d771c:
    // 0x3d771c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3d771cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d7720:
    // 0x3d7720: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3d7720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3d7724:
    // 0x3d7724: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3d7724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_3d7728:
    // 0x3d7728: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3d7728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3d772c:
    // 0x3d772c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d772cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d7730:
    // 0x3d7730: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d7730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d7734:
    // 0x3d7734: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d7734u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7738:
    // 0x3d7738: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3d7738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_3d773c:
    // 0x3d773c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d773cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d7740:
    // 0x3d7740: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d7740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7744:
    // 0x3d7744: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3d7744u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3d7748:
    // 0x3d7748: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3d7748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3d774c:
    // 0x3d774c: 0x8e470054  lw          $a3, 0x54($s2)
    ctx->pc = 0x3d774cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d7750:
    // 0x3d7750: 0xc0e93a2  jal         func_3A4E88
label_3d7754:
    if (ctx->pc == 0x3D7754u) {
        ctx->pc = 0x3D7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7750u;
        // 0x3d7754: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7758u;
        goto label_3d7758;
    }
    ctx->pc = 0x3D7750u;
    SET_GPR_U32(ctx, 31, 0x3D7758u);
    ctx->pc = 0x3D7754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7750u;
    // 0x3d7754: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3D7750u, 0x3D7758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7758u;
label_3d7758:
    // 0x3d7758: 0x3c013c90  lui         $at, 0x3C90
    ctx->pc = 0x3d7758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15504 << 16));
label_3d775c:
    // 0x3d775c: 0x3421abb4  ori         $at, $at, 0xABB4
    ctx->pc = 0x3d775cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43956);
label_3d7760:
    // 0x3d7760: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3d7760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3d7764:
    // 0x3d7764: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3d7764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d7768:
    // 0x3d7768: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3d7768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3d776c:
    // 0x3d776c: 0x3c01c04b  lui         $at, 0xC04B
    ctx->pc = 0x3d776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49227 << 16));
label_3d7770:
    // 0x3d7770: 0x3421c212  ori         $at, $at, 0xC212
    ctx->pc = 0x3d7770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49682);
label_3d7774:
    // 0x3d7774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d7774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d7778:
    // 0x3d7778: 0x3c013f8a  lui         $at, 0x3F8A
    ctx->pc = 0x3d7778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16266 << 16));
label_3d777c:
    // 0x3d777c: 0x34210179  ori         $at, $at, 0x179
    ctx->pc = 0x3d777cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)377);
label_3d7780:
    // 0x3d7780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d7780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d7784:
    // 0x3d7784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d7784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d7788:
    // 0x3d7788: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3d7788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d778c:
    // 0x3d778c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x3d778cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3d7790:
    // 0x3d7790: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3d7790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d7794:
    // 0x3d7794: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3d7794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d7798:
    // 0x3d7798: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x3d7798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d779c:
    // 0x3d779c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3d779cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d77a0:
    // 0x3d77a0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3d77a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3d77a4:
    // 0x3d77a4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d77a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d77a8:
    // 0x3d77a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d77a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d77ac:
    // 0x3d77ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d77acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d77b0:
    // 0x3d77b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d77b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d77b4:
    // 0x3d77b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d77b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d77b8:
    // 0x3d77b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d77b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d77bc:
    // 0x3d77bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d77bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d77c0:
    // 0x3d77c0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d77c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d77c4:
    // 0x3d77c4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d77c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d77c8:
    // 0x3d77c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d77c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d77cc:
    // 0x3d77cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d77ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d77d0:
    // 0x3d77d0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d77d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d77d4:
    // 0x3d77d4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d77d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d77d8:
    // 0x3d77d8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d77d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d77dc:
    // 0x3d77dc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d77dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d77e0:
    // 0x3d77e0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d77e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d77e4:
    // 0x3d77e4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d77e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d77e8:
    // 0x3d77e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d77e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d77ec:
    // 0x3d77ec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d77f0:
    // 0x3d77f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d77f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d77f4:
    // 0x3d77f4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3d77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3d77f8:
    // 0x3d77f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d77f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d77fc:
    // 0x3d77fc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3d77fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3d7800:
    // 0x3d7800: 0xc136b18  jal         func_4DAC60
label_3d7804:
    if (ctx->pc == 0x3D7804u) {
        ctx->pc = 0x3D7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7800u;
        // 0x3d7804: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7808u;
        goto label_3d7808;
    }
    ctx->pc = 0x3D7800u;
    SET_GPR_U32(ctx, 31, 0x3D7808u);
    ctx->pc = 0x3D7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7800u;
    // 0x3d7804: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D7800u, 0x3D7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7808u;
label_3d7808:
    // 0x3d7808: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d7808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d780c:
    // 0x3d780c: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x3d780cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d7810:
    // 0x3d7810: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3d7810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3d7814:
    // 0x3d7814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d7814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d7818:
    // 0x3d7818: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3d7818u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3d781c:
    // 0x3d781c: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x3d781cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
label_3d7820:
    // 0x3d7820: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d7820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d7824:
    // 0x3d7824: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d7824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d7828:
    // 0x3d7828: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3d7828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d782c:
    // 0x3d782c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3d782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3d7830:
    // 0x3d7830: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x3d7830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d7834:
    // 0x3d7834: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d7838:
    // 0x3d7838: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3d7838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d783c:
    // 0x3d783c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3d783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3d7840:
    // 0x3d7840: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3d7840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7844:
    // 0x3d7844: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3d7844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3d7848:
    // 0x3d7848: 0x26315050  addiu       $s1, $s1, 0x5050
    ctx->pc = 0x3d7848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20560));
label_3d784c:
    // 0x3d784c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d7850:
    // 0x3d7850: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d7850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d7854:
    // 0x3d7854: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3d7854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d7858:
    // 0x3d7858: 0xc0ea040  jal         func_3A8100
label_3d785c:
    if (ctx->pc == 0x3D785Cu) {
        ctx->pc = 0x3D785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7858u;
        // 0x3d785c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7860u;
        goto label_3d7860;
    }
    ctx->pc = 0x3D7858u;
    SET_GPR_U32(ctx, 31, 0x3D7860u);
    ctx->pc = 0x3D785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7858u;
    // 0x3d785c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D7858u, 0x3D7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7860u;
label_3d7860:
    // 0x3d7860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7864:
    // 0x3d7864: 0xc0f15bc  jal         func_3C56F0
label_3d7868:
    if (ctx->pc == 0x3D7868u) {
        ctx->pc = 0x3D7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7864u;
        // 0x3d7868: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D786Cu;
        goto label_3d786c;
    }
    ctx->pc = 0x3D7864u;
    SET_GPR_U32(ctx, 31, 0x3D786Cu);
    ctx->pc = 0x3D7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7864u;
    // 0x3d7868: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D7864u, 0x3D786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D786Cu;
label_3d786c:
    // 0x3d786c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3d786cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_3d7870:
    // 0x3d7870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d7870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7874:
    // 0x3d7874: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x3d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
label_3d7878:
    // 0x3d7878: 0xafa40470  sw          $a0, 0x470($sp)
    ctx->pc = 0x3d7878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 4));
label_3d787c:
    // 0x3d787c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d787cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7880:
    // 0x3d7880: 0x344280ff  ori         $v0, $v0, 0x80FF
    ctx->pc = 0x3d7880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
label_3d7884:
    // 0x3d7884: 0xafb20450  sw          $s2, 0x450($sp)
    ctx->pc = 0x3d7884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 18));
label_3d7888:
    // 0x3d7888: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d7888u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d788c:
    // 0x3d788c: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x3d788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
label_3d7890:
    // 0x3d7890: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3d7890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d7894:
    // 0x3d7894: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3d7894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3d7898:
    // 0x3d7898: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d7898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d789c:
    // 0x3d789c: 0x26104f68  addiu       $s0, $s0, 0x4F68
    ctx->pc = 0x3d789cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20328));
label_3d78a0:
    // 0x3d78a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d78a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d78a4:
    // 0x3d78a4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d78a8:
    // 0x3d78a8: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3d78a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d78ac:
    // 0x3d78ac: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3d78acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d78b0:
    // 0x3d78b0: 0x27a90480  addiu       $t1, $sp, 0x480
    ctx->pc = 0x3d78b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d78b4:
    // 0x3d78b4: 0xafa30480  sw          $v1, 0x480($sp)
    ctx->pc = 0x3d78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 3));
label_3d78b8:
    // 0x3d78b8: 0x27aa0490  addiu       $t2, $sp, 0x490
    ctx->pc = 0x3d78b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d78bc:
    // 0x3d78bc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3d78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d78c0:
    // 0x3d78c0: 0xc0ea040  jal         func_3A8100
label_3d78c4:
    if (ctx->pc == 0x3D78C4u) {
        ctx->pc = 0x3D78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78C0u;
        // 0x3d78c4: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78C8u;
        goto label_3d78c8;
    }
    ctx->pc = 0x3D78C0u;
    SET_GPR_U32(ctx, 31, 0x3D78C8u);
    ctx->pc = 0x3D78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D78C0u;
    // 0x3d78c4: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D78C0u, 0x3D78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D78C8u;
label_3d78c8:
    // 0x3d78c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d78c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d78cc:
    // 0x3d78cc: 0xc0f15bc  jal         func_3C56F0
label_3d78d0:
    if (ctx->pc == 0x3D78D0u) {
        ctx->pc = 0x3D78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78CCu;
        // 0x3d78d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78D4u;
        goto label_3d78d4;
    }
    ctx->pc = 0x3D78CCu;
    SET_GPR_U32(ctx, 31, 0x3D78D4u);
    ctx->pc = 0x3D78D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D78CCu;
    // 0x3d78d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D78CCu, 0x3D78D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D78D4u;
label_3d78d4:
    // 0x3d78d4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3d78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_3d78d8:
    // 0x3d78d8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3d78d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d78dc:
    // 0x3d78dc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3d78dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3d78e0:
    // 0x3d78e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d78e4:
    // 0x3d78e4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d78e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d78e8:
    // 0x3d78e8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d78ec:
    // 0x3d78ec: 0x60f809  jalr        $v1
label_3d78f0:
    if (ctx->pc == 0x3D78F0u) {
        ctx->pc = 0x3D78F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78ECu;
        // 0x3d78f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78F4u;
        goto label_3d78f4;
    }
    ctx->pc = 0x3D78ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D78F4u);
        ctx->pc = 0x3D78F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78ECu;
        // 0x3d78f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D78ECu, 0x3D78F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D78F4u;
label_3d78f4:
    // 0x3d78f4: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3d78f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3d78f8:
    // 0x3d78f8: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3d78f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3d78fc:
    // 0x3d78fc: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d78fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3d7900:
    // 0x3d7900: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d7900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d7904:
    // 0x3d7904: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d7904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d7908:
    // 0x3d7908: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d7908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d790c:
    // 0x3d790c: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d790cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d7910:
    // 0x3d7910: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d7910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d7914:
    // 0x3d7914: 0x3e00008  jr          $ra
label_3d7918:
    if (ctx->pc == 0x3D7918u) {
        ctx->pc = 0x3D7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7914u;
        // 0x3d7918: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D791Cu;
        goto label_3d791c;
    }
    ctx->pc = 0x3D7914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7914u;
        // 0x3d7918: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D791Cu;
label_3d791c:
    // 0x3d791c: 0x0  nop
    ctx->pc = 0x3d791cu;
    // NOP
    ctx->pc = 0x3d7920u;
}
