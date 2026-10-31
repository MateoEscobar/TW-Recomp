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

// Function: sub_00291728
// Address: 0x291728 - 0x291960
void sub_00291728_0x291728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291728_0x291728");
#endif

    switch (ctx->pc) {
        case 0x291728u: goto label_291728;
        case 0x29172cu: goto label_29172c;
        case 0x291730u: goto label_291730;
        case 0x291734u: goto label_291734;
        case 0x291738u: goto label_291738;
        case 0x29173cu: goto label_29173c;
        case 0x291740u: goto label_291740;
        case 0x291744u: goto label_291744;
        case 0x291748u: goto label_291748;
        case 0x29174cu: goto label_29174c;
        case 0x291750u: goto label_291750;
        case 0x291754u: goto label_291754;
        case 0x291758u: goto label_291758;
        case 0x29175cu: goto label_29175c;
        case 0x291760u: goto label_291760;
        case 0x291764u: goto label_291764;
        case 0x291768u: goto label_291768;
        case 0x29176cu: goto label_29176c;
        case 0x291770u: goto label_291770;
        case 0x291774u: goto label_291774;
        case 0x291778u: goto label_291778;
        case 0x29177cu: goto label_29177c;
        case 0x291780u: goto label_291780;
        case 0x291784u: goto label_291784;
        case 0x291788u: goto label_291788;
        case 0x29178cu: goto label_29178c;
        case 0x291790u: goto label_291790;
        case 0x291794u: goto label_291794;
        case 0x291798u: goto label_291798;
        case 0x29179cu: goto label_29179c;
        case 0x2917a0u: goto label_2917a0;
        case 0x2917a4u: goto label_2917a4;
        case 0x2917a8u: goto label_2917a8;
        case 0x2917acu: goto label_2917ac;
        case 0x2917b0u: goto label_2917b0;
        case 0x2917b4u: goto label_2917b4;
        case 0x2917b8u: goto label_2917b8;
        case 0x2917bcu: goto label_2917bc;
        case 0x2917c0u: goto label_2917c0;
        case 0x2917c4u: goto label_2917c4;
        case 0x2917c8u: goto label_2917c8;
        case 0x2917ccu: goto label_2917cc;
        case 0x2917d0u: goto label_2917d0;
        case 0x2917d4u: goto label_2917d4;
        case 0x2917d8u: goto label_2917d8;
        case 0x2917dcu: goto label_2917dc;
        case 0x2917e0u: goto label_2917e0;
        case 0x2917e4u: goto label_2917e4;
        case 0x2917e8u: goto label_2917e8;
        case 0x2917ecu: goto label_2917ec;
        case 0x2917f0u: goto label_2917f0;
        case 0x2917f4u: goto label_2917f4;
        case 0x2917f8u: goto label_2917f8;
        case 0x2917fcu: goto label_2917fc;
        case 0x291800u: goto label_291800;
        case 0x291804u: goto label_291804;
        case 0x291808u: goto label_291808;
        case 0x29180cu: goto label_29180c;
        case 0x291810u: goto label_291810;
        case 0x291814u: goto label_291814;
        case 0x291818u: goto label_291818;
        case 0x29181cu: goto label_29181c;
        case 0x291820u: goto label_291820;
        case 0x291824u: goto label_291824;
        case 0x291828u: goto label_291828;
        case 0x29182cu: goto label_29182c;
        case 0x291830u: goto label_291830;
        case 0x291834u: goto label_291834;
        case 0x291838u: goto label_291838;
        case 0x29183cu: goto label_29183c;
        case 0x291840u: goto label_291840;
        case 0x291844u: goto label_291844;
        case 0x291848u: goto label_291848;
        case 0x29184cu: goto label_29184c;
        case 0x291850u: goto label_291850;
        case 0x291854u: goto label_291854;
        case 0x291858u: goto label_291858;
        case 0x29185cu: goto label_29185c;
        case 0x291860u: goto label_291860;
        case 0x291864u: goto label_291864;
        case 0x291868u: goto label_291868;
        case 0x29186cu: goto label_29186c;
        case 0x291870u: goto label_291870;
        case 0x291874u: goto label_291874;
        case 0x291878u: goto label_291878;
        case 0x29187cu: goto label_29187c;
        case 0x291880u: goto label_291880;
        case 0x291884u: goto label_291884;
        case 0x291888u: goto label_291888;
        case 0x29188cu: goto label_29188c;
        case 0x291890u: goto label_291890;
        case 0x291894u: goto label_291894;
        case 0x291898u: goto label_291898;
        case 0x29189cu: goto label_29189c;
        case 0x2918a0u: goto label_2918a0;
        case 0x2918a4u: goto label_2918a4;
        case 0x2918a8u: goto label_2918a8;
        case 0x2918acu: goto label_2918ac;
        case 0x2918b0u: goto label_2918b0;
        case 0x2918b4u: goto label_2918b4;
        case 0x2918b8u: goto label_2918b8;
        case 0x2918bcu: goto label_2918bc;
        case 0x2918c0u: goto label_2918c0;
        case 0x2918c4u: goto label_2918c4;
        case 0x2918c8u: goto label_2918c8;
        case 0x2918ccu: goto label_2918cc;
        case 0x2918d0u: goto label_2918d0;
        case 0x2918d4u: goto label_2918d4;
        case 0x2918d8u: goto label_2918d8;
        case 0x2918dcu: goto label_2918dc;
        case 0x2918e0u: goto label_2918e0;
        case 0x2918e4u: goto label_2918e4;
        case 0x2918e8u: goto label_2918e8;
        case 0x2918ecu: goto label_2918ec;
        case 0x2918f0u: goto label_2918f0;
        case 0x2918f4u: goto label_2918f4;
        case 0x2918f8u: goto label_2918f8;
        case 0x2918fcu: goto label_2918fc;
        case 0x291900u: goto label_291900;
        case 0x291904u: goto label_291904;
        case 0x291908u: goto label_291908;
        case 0x29190cu: goto label_29190c;
        case 0x291910u: goto label_291910;
        case 0x291914u: goto label_291914;
        case 0x291918u: goto label_291918;
        case 0x29191cu: goto label_29191c;
        case 0x291920u: goto label_291920;
        case 0x291924u: goto label_291924;
        case 0x291928u: goto label_291928;
        case 0x29192cu: goto label_29192c;
        case 0x291930u: goto label_291930;
        case 0x291934u: goto label_291934;
        case 0x291938u: goto label_291938;
        case 0x29193cu: goto label_29193c;
        case 0x291940u: goto label_291940;
        case 0x291944u: goto label_291944;
        case 0x291948u: goto label_291948;
        case 0x29194cu: goto label_29194c;
        case 0x291950u: goto label_291950;
        case 0x291954u: goto label_291954;
        case 0x291958u: goto label_291958;
        case 0x29195cu: goto label_29195c;
        default: break;
    }

    ctx->pc = 0x291728u;

label_291728:
    // 0x291728: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x291728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29172c:
    // 0x29172c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x29172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_291730:
    // 0x291730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_291734:
    // 0x291734: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x291734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_291738:
    // 0x291738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29173c:
    // 0x29173c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29173cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_291740:
    // 0x291740: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x291740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_291744:
    // 0x291744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_291748:
    // 0x291748: 0xc0a2acc  jal         func_28AB30
label_29174c:
    if (ctx->pc == 0x29174Cu) {
        ctx->pc = 0x29174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291748u;
        // 0x29174c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291750u;
        goto label_291750;
    }
    ctx->pc = 0x291748u;
    SET_GPR_U32(ctx, 31, 0x291750u);
    ctx->pc = 0x29174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291748u;
    // 0x29174c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x291748u, 0x291750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291750u;
label_291750:
    // 0x291750: 0x5050007c  beql        $v0, $s0, . + 4 + (0x7C << 2)
label_291754:
    if (ctx->pc == 0x291754u) {
        ctx->pc = 0x291754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291750u;
        // 0x291754: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291758u;
        goto label_291758;
    }
    ctx->pc = 0x291750u;
    {
        const bool branch_taken_0x291750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x291750) {
            ctx->pc = 0x291754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291750u;
            // 0x291754: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291758u;
label_291758:
    // 0x291758: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x291758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_29175c:
    // 0x29175c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_291760:
    if (ctx->pc == 0x291760u) {
        ctx->pc = 0x291760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29175Cu;
        // 0x291760: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291764u;
        goto label_291764;
    }
    ctx->pc = 0x29175Cu;
    {
        const bool branch_taken_0x29175c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29175Cu;
        // 0x291760: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29175c) {
            ctx->pc = 0x291850u;
            goto label_291850;
        }
    }
    ctx->pc = 0x291764u;
label_291764:
    // 0x291764: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x291764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_291768:
    // 0x291768: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x291768u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_29176c:
    // 0x29176c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29176cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_291770:
    // 0x291770: 0x50500074  beql        $v0, $s0, . + 4 + (0x74 << 2)
label_291774:
    if (ctx->pc == 0x291774u) {
        ctx->pc = 0x291774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291770u;
        // 0x291774: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291778u;
        goto label_291778;
    }
    ctx->pc = 0x291770u;
    {
        const bool branch_taken_0x291770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x291770) {
            ctx->pc = 0x291774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291770u;
            // 0x291774: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291778u;
label_291778:
    // 0x291778: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x291778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_29177c:
    // 0x29177c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29177cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_291780:
    // 0x291780: 0x50500070  beql        $v0, $s0, . + 4 + (0x70 << 2)
label_291784:
    if (ctx->pc == 0x291784u) {
        ctx->pc = 0x291784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291780u;
        // 0x291784: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291788u;
        goto label_291788;
    }
    ctx->pc = 0x291780u;
    {
        const bool branch_taken_0x291780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x291780) {
            ctx->pc = 0x291784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291780u;
            // 0x291784: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291788u;
label_291788:
    // 0x291788: 0xc08a08a  jal         func_228228
label_29178c:
    if (ctx->pc == 0x29178Cu) {
        ctx->pc = 0x29178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291788u;
        // 0x29178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291790u;
        goto label_291790;
    }
    ctx->pc = 0x291788u;
    SET_GPR_U32(ctx, 31, 0x291790u);
    ctx->pc = 0x29178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291788u;
    // 0x29178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x291788u, 0x291790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291790u;
label_291790:
    // 0x291790: 0x5050006c  beql        $v0, $s0, . + 4 + (0x6C << 2)
label_291794:
    if (ctx->pc == 0x291794u) {
        ctx->pc = 0x291794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291790u;
        // 0x291794: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291798u;
        goto label_291798;
    }
    ctx->pc = 0x291790u;
    {
        const bool branch_taken_0x291790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x291790) {
            ctx->pc = 0x291794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291790u;
            // 0x291794: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291798u;
label_291798:
    // 0x291798: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x291798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_29179c:
    // 0x29179c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2917a0:
    if (ctx->pc == 0x2917A0u) {
        ctx->pc = 0x2917A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29179Cu;
        // 0x2917a0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917A4u;
        goto label_2917a4;
    }
    ctx->pc = 0x29179Cu;
    {
        const bool branch_taken_0x29179c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2917A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29179Cu;
        // 0x2917a0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29179c) {
            ctx->pc = 0x2917B0u;
            goto label_2917b0;
        }
    }
    ctx->pc = 0x2917A4u;
label_2917a4:
    // 0x2917a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2917a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2917a8:
    // 0x2917a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2917ac:
    if (ctx->pc == 0x2917ACu) {
        ctx->pc = 0x2917ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917A8u;
        // 0x2917ac: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917B0u;
        goto label_2917b0;
    }
    ctx->pc = 0x2917A8u;
    {
        const bool branch_taken_0x2917a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917A8u;
        // 0x2917ac: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917a8) {
            ctx->pc = 0x2917B4u;
            goto label_2917b4;
        }
    }
    ctx->pc = 0x2917B0u;
label_2917b0:
    // 0x2917b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2917b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2917b4:
    // 0x2917b4: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_2917b8:
    if (ctx->pc == 0x2917B8u) {
        ctx->pc = 0x2917B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917B4u;
        // 0x2917b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917BCu;
        goto label_2917bc;
    }
    ctx->pc = 0x2917B4u;
    {
        const bool branch_taken_0x2917b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2917b4) {
            ctx->pc = 0x2917B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2917B4u;
            // 0x2917b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2917F0u;
            goto label_2917f0;
        }
    }
    ctx->pc = 0x2917BCu;
label_2917bc:
    // 0x2917bc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2917c0:
    // 0x2917c0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2917c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2917c4:
    // 0x2917c4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2917c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2917c8:
    // 0x2917c8: 0x40f809  jalr        $v0
label_2917cc:
    if (ctx->pc == 0x2917CCu) {
        ctx->pc = 0x2917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917C8u;
        // 0x2917cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917D0u;
        goto label_2917d0;
    }
    ctx->pc = 0x2917C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2917D0u);
        ctx->pc = 0x2917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917C8u;
        // 0x2917cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2917C8u, 0x2917D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2917D0u;
label_2917d0:
    // 0x2917d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2917d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2917d4:
    // 0x2917d4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2917d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2917d8:
    // 0x2917d8: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_2917dc:
    if (ctx->pc == 0x2917DCu) {
        ctx->pc = 0x2917DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917D8u;
        // 0x2917dc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917E0u;
        goto label_2917e0;
    }
    ctx->pc = 0x2917D8u;
    {
        const bool branch_taken_0x2917d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2917DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917D8u;
        // 0x2917dc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917d8) {
            ctx->pc = 0x291940u;
            goto label_291940;
        }
    }
    ctx->pc = 0x2917E0u;
label_2917e0:
    // 0x2917e0: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
label_2917e4:
    if (ctx->pc == 0x2917E4u) {
        ctx->pc = 0x2917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917E0u;
        // 0x2917e4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917E8u;
        goto label_2917e8;
    }
    ctx->pc = 0x2917E0u;
    {
        const bool branch_taken_0x2917e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917E0u;
        // 0x2917e4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917e0) {
            ctx->pc = 0x291940u;
            goto label_291940;
        }
    }
    ctx->pc = 0x2917E8u;
label_2917e8:
    // 0x2917e8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
label_2917ec:
    if (ctx->pc == 0x2917ECu) {
        ctx->pc = 0x2917ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917E8u;
        // 0x2917ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917F0u;
        goto label_2917f0;
    }
    ctx->pc = 0x2917E8u;
    {
        const bool branch_taken_0x2917e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2917ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917E8u;
        // 0x2917ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917e8) {
            ctx->pc = 0x291940u;
            goto label_291940;
        }
    }
    ctx->pc = 0x2917F0u;
label_2917f0:
    // 0x2917f0: 0xc0a3658  jal         func_28D960
label_2917f4:
    if (ctx->pc == 0x2917F4u) {
        ctx->pc = 0x2917F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F0u;
        // 0x2917f4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917F8u;
        goto label_2917f8;
    }
    ctx->pc = 0x2917F0u;
    SET_GPR_U32(ctx, 31, 0x2917F8u);
    ctx->pc = 0x2917F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917F0u;
    // 0x2917f4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2917F0u, 0x2917F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917F8u;
label_2917f8:
    // 0x2917f8: 0x8243002d  lb          $v1, 0x2D($s2)
    ctx->pc = 0x2917f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
label_2917fc:
    // 0x2917fc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2917fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_291800:
    // 0x291800: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_291804:
    if (ctx->pc == 0x291804u) {
        ctx->pc = 0x291804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291800u;
        // 0x291804: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291808u;
        goto label_291808;
    }
    ctx->pc = 0x291800u;
    {
        const bool branch_taken_0x291800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291800u;
        // 0x291804: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291800) {
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291808u;
label_291808:
    // 0x291808: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x291808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29180c:
    // 0x29180c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29180cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_291810:
    // 0x291810: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_291814:
    // 0x291814: 0x40f809  jalr        $v0
label_291818:
    if (ctx->pc == 0x291818u) {
        ctx->pc = 0x291818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291814u;
        // 0x291818: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29181Cu;
        goto label_29181c;
    }
    ctx->pc = 0x291814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29181Cu);
        ctx->pc = 0x291818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291814u;
        // 0x291818: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291814u, 0x29181Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29181Cu;
label_29181c:
    // 0x29181c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x29181cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_291820:
    // 0x291820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291824:
    // 0x291824: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x291824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_291828:
    // 0x291828: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x291828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29182c:
    // 0x29182c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291830:
    // 0x291830: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x291830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_291834:
    // 0x291834: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x291834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_291838:
    // 0x291838: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x291838u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_29183c:
    // 0x29183c: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x29183cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_291840:
    // 0x291840: 0xc0b8c24  jal         func_2E3090
label_291844:
    if (ctx->pc == 0x291844u) {
        ctx->pc = 0x291844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291840u;
        // 0x291844: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291848u;
        goto label_291848;
    }
    ctx->pc = 0x291840u;
    SET_GPR_U32(ctx, 31, 0x291848u);
    ctx->pc = 0x291844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291840u;
    // 0x291844: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x291840u, 0x291848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291848u;
label_291848:
    // 0x291848: 0x1000003e  b           . + 4 + (0x3E << 2)
label_29184c:
    if (ctx->pc == 0x29184Cu) {
        ctx->pc = 0x29184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291848u;
        // 0x29184c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291850u;
        goto label_291850;
    }
    ctx->pc = 0x291848u;
    {
        const bool branch_taken_0x291848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291848u;
        // 0x29184c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291848) {
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291850u;
label_291850:
    // 0x291850: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x291850u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_291854:
    // 0x291854: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_291858:
    // 0x291858: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x291858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_29185c:
    // 0x29185c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x29185cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_291860:
    // 0x291860: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x291860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_291864:
    // 0x291864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291868:
    // 0x291868: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x291868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_29186c:
    // 0x29186c: 0xc0cd8ec  jal         func_3363B0
label_291870:
    if (ctx->pc == 0x291870u) {
        ctx->pc = 0x291870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29186Cu;
        // 0x291870: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291874u;
        goto label_291874;
    }
    ctx->pc = 0x29186Cu;
    SET_GPR_U32(ctx, 31, 0x291874u);
    ctx->pc = 0x291870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29186Cu;
    // 0x291870: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x29186Cu, 0x291874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291874u;
label_291874:
    // 0x291874: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x291874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_291878:
    // 0x291878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29187c:
    // 0x29187c: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x29187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_291880:
    // 0x291880: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x291880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291884:
    // 0x291884: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x291884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_291888:
    // 0x291888: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x291888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29188c:
    // 0x29188c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29188cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_291890:
    // 0x291890: 0xc094ac2  jal         func_252B08
label_291894:
    if (ctx->pc == 0x291894u) {
        ctx->pc = 0x291894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291890u;
        // 0x291894: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291898u;
        goto label_291898;
    }
    ctx->pc = 0x291890u;
    SET_GPR_U32(ctx, 31, 0x291898u);
    ctx->pc = 0x291894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291890u;
    // 0x291894: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B08u, 0x291890u, 0x291898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291898u;
label_291898:
    // 0x291898: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_29189c:
    if (ctx->pc == 0x29189Cu) {
        ctx->pc = 0x29189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291898u;
        // 0x29189c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918A0u;
        goto label_2918a0;
    }
    ctx->pc = 0x291898u;
    {
        const bool branch_taken_0x291898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291898) {
            ctx->pc = 0x29189Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291898u;
            // 0x29189c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x2918A0u;
label_2918a0:
    // 0x2918a0: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x2918a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2918a4:
    // 0x2918a4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2918a8:
    if (ctx->pc == 0x2918A8u) {
        ctx->pc = 0x2918A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918A4u;
        // 0x2918a8: 0x9243002c  lbu         $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918ACu;
        goto label_2918ac;
    }
    ctx->pc = 0x2918A4u;
    {
        const bool branch_taken_0x2918a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2918A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918A4u;
        // 0x2918a8: 0x9243002c  lbu         $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918a4) {
            ctx->pc = 0x2918BCu;
            goto label_2918bc;
        }
    }
    ctx->pc = 0x2918ACu;
label_2918ac:
    // 0x2918ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2918b0:
    // 0x2918b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2918b4:
    // 0x2918b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2918b8:
    if (ctx->pc == 0x2918B8u) {
        ctx->pc = 0x2918B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918B4u;
        // 0x2918b8: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918BCu;
        goto label_2918bc;
    }
    ctx->pc = 0x2918B4u;
    {
        const bool branch_taken_0x2918b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918B4u;
        // 0x2918b8: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918b4) {
            ctx->pc = 0x2918C0u;
            goto label_2918c0;
        }
    }
    ctx->pc = 0x2918BCu;
label_2918bc:
    // 0x2918bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2918bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2918c0:
    // 0x2918c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2918c4:
    if (ctx->pc == 0x2918C4u) {
        ctx->pc = 0x2918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918C0u;
        // 0x2918c4: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918C8u;
        goto label_2918c8;
    }
    ctx->pc = 0x2918C0u;
    {
        const bool branch_taken_0x2918c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918C0u;
        // 0x2918c4: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918c0) {
            ctx->pc = 0x291940u;
            goto label_291940;
        }
    }
    ctx->pc = 0x2918C8u;
label_2918c8:
    // 0x2918c8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2918cc:
    // 0x2918cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2918d0:
    if (ctx->pc == 0x2918D0u) {
        ctx->pc = 0x2918D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918CCu;
        // 0x2918d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918D4u;
        goto label_2918d4;
    }
    ctx->pc = 0x2918CCu;
    {
        const bool branch_taken_0x2918cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2918D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918CCu;
        // 0x2918d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918cc) {
            ctx->pc = 0x2918E0u;
            goto label_2918e0;
        }
    }
    ctx->pc = 0x2918D4u;
label_2918d4:
    // 0x2918d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2918d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2918d8:
    // 0x2918d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2918dc:
    if (ctx->pc == 0x2918DCu) {
        ctx->pc = 0x2918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918D8u;
        // 0x2918dc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918E0u;
        goto label_2918e0;
    }
    ctx->pc = 0x2918D8u;
    {
        const bool branch_taken_0x2918d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918D8u;
        // 0x2918dc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918d8) {
            ctx->pc = 0x2918E4u;
            goto label_2918e4;
        }
    }
    ctx->pc = 0x2918E0u;
label_2918e0:
    // 0x2918e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2918e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2918e4:
    // 0x2918e4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2918e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2918e8:
    // 0x2918e8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2918ec:
    // 0x2918ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2918f0:
    // 0x2918f0: 0x40f809  jalr        $v0
label_2918f4:
    if (ctx->pc == 0x2918F4u) {
        ctx->pc = 0x2918F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918F0u;
        // 0x2918f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918F8u;
        goto label_2918f8;
    }
    ctx->pc = 0x2918F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2918F8u);
        ctx->pc = 0x2918F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918F0u;
        // 0x2918f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2918F0u, 0x2918F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2918F8u;
label_2918f8:
    // 0x2918f8: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2918f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2918fc:
    // 0x2918fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_291900:
    if (ctx->pc == 0x291900u) {
        ctx->pc = 0x291900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918FCu;
        // 0x291900: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291904u;
        goto label_291904;
    }
    ctx->pc = 0x2918FCu;
    {
        const bool branch_taken_0x2918fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918FCu;
        // 0x291900: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918fc) {
            ctx->pc = 0x291944u;
            goto label_291944;
        }
    }
    ctx->pc = 0x291904u;
label_291904:
    // 0x291904: 0xc0a4e54  jal         func_293950
label_291908:
    if (ctx->pc == 0x291908u) {
        ctx->pc = 0x29190Cu;
        goto label_29190c;
    }
    ctx->pc = 0x291904u;
    SET_GPR_U32(ctx, 31, 0x29190Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x291904u, 0x29190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29190Cu;
label_29190c:
    // 0x29190c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291910:
    // 0x291910: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_291914:
    if (ctx->pc == 0x291914u) {
        ctx->pc = 0x291914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291910u;
        // 0x291914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291918u;
        goto label_291918;
    }
    ctx->pc = 0x291910u;
    {
        const bool branch_taken_0x291910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291910u;
        // 0x291914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291910) {
            ctx->pc = 0x291934u;
            goto label_291934;
        }
    }
    ctx->pc = 0x291918u;
label_291918:
    // 0x291918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x291918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_29191c:
    // 0x29191c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29191cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_291920:
    // 0x291920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291924:
    // 0x291924: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x291924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_291928:
    // 0x291928: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x291928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29192c:
    // 0x29192c: 0xc0b709e  jal         func_2DC278
label_291930:
    if (ctx->pc == 0x291930u) {
        ctx->pc = 0x291930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29192Cu;
        // 0x291930: 0x24080fa0  addiu       $t0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291934u;
        goto label_291934;
    }
    ctx->pc = 0x29192Cu;
    SET_GPR_U32(ctx, 31, 0x291934u);
    ctx->pc = 0x291930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29192Cu;
    // 0x291930: 0x24080fa0  addiu       $t0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC278u, 0x29192Cu, 0x291934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291934u;
label_291934:
    // 0x291934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291938:
    // 0x291938: 0xc0a35d6  jal         func_28D758
label_29193c:
    if (ctx->pc == 0x29193Cu) {
        ctx->pc = 0x29193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291938u;
        // 0x29193c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291940u;
        goto label_291940;
    }
    ctx->pc = 0x291938u;
    SET_GPR_U32(ctx, 31, 0x291940u);
    ctx->pc = 0x29193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291938u;
    // 0x29193c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x291938u, 0x291940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291940u;
label_291940:
    // 0x291940: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x291940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_291944:
    // 0x291944: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x291944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_291948:
    // 0x291948: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x291948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29194c:
    // 0x29194c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29194cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291950:
    // 0x291950: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_291954:
    // 0x291954: 0x3e00008  jr          $ra
label_291958:
    if (ctx->pc == 0x291958u) {
        ctx->pc = 0x291958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291954u;
        // 0x291958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29195Cu;
        goto label_29195c;
    }
    ctx->pc = 0x291954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291954u;
        // 0x291958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29195Cu;
label_29195c:
    // 0x29195c: 0x0  nop
    ctx->pc = 0x29195cu;
    // NOP
    ctx->pc = 0x291960u;
}
