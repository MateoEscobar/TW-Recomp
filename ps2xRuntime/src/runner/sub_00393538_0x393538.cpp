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

// Function: sub_00393538
// Address: 0x393538 - 0x3939a8
void sub_00393538_0x393538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393538_0x393538");
#endif

    switch (ctx->pc) {
        case 0x393538u: goto label_393538;
        case 0x39353cu: goto label_39353c;
        case 0x393540u: goto label_393540;
        case 0x393544u: goto label_393544;
        case 0x393548u: goto label_393548;
        case 0x39354cu: goto label_39354c;
        case 0x393550u: goto label_393550;
        case 0x393554u: goto label_393554;
        case 0x393558u: goto label_393558;
        case 0x39355cu: goto label_39355c;
        case 0x393560u: goto label_393560;
        case 0x393564u: goto label_393564;
        case 0x393568u: goto label_393568;
        case 0x39356cu: goto label_39356c;
        case 0x393570u: goto label_393570;
        case 0x393574u: goto label_393574;
        case 0x393578u: goto label_393578;
        case 0x39357cu: goto label_39357c;
        case 0x393580u: goto label_393580;
        case 0x393584u: goto label_393584;
        case 0x393588u: goto label_393588;
        case 0x39358cu: goto label_39358c;
        case 0x393590u: goto label_393590;
        case 0x393594u: goto label_393594;
        case 0x393598u: goto label_393598;
        case 0x39359cu: goto label_39359c;
        case 0x3935a0u: goto label_3935a0;
        case 0x3935a4u: goto label_3935a4;
        case 0x3935a8u: goto label_3935a8;
        case 0x3935acu: goto label_3935ac;
        case 0x3935b0u: goto label_3935b0;
        case 0x3935b4u: goto label_3935b4;
        case 0x3935b8u: goto label_3935b8;
        case 0x3935bcu: goto label_3935bc;
        case 0x3935c0u: goto label_3935c0;
        case 0x3935c4u: goto label_3935c4;
        case 0x3935c8u: goto label_3935c8;
        case 0x3935ccu: goto label_3935cc;
        case 0x3935d0u: goto label_3935d0;
        case 0x3935d4u: goto label_3935d4;
        case 0x3935d8u: goto label_3935d8;
        case 0x3935dcu: goto label_3935dc;
        case 0x3935e0u: goto label_3935e0;
        case 0x3935e4u: goto label_3935e4;
        case 0x3935e8u: goto label_3935e8;
        case 0x3935ecu: goto label_3935ec;
        case 0x3935f0u: goto label_3935f0;
        case 0x3935f4u: goto label_3935f4;
        case 0x3935f8u: goto label_3935f8;
        case 0x3935fcu: goto label_3935fc;
        case 0x393600u: goto label_393600;
        case 0x393604u: goto label_393604;
        case 0x393608u: goto label_393608;
        case 0x39360cu: goto label_39360c;
        case 0x393610u: goto label_393610;
        case 0x393614u: goto label_393614;
        case 0x393618u: goto label_393618;
        case 0x39361cu: goto label_39361c;
        case 0x393620u: goto label_393620;
        case 0x393624u: goto label_393624;
        case 0x393628u: goto label_393628;
        case 0x39362cu: goto label_39362c;
        case 0x393630u: goto label_393630;
        case 0x393634u: goto label_393634;
        case 0x393638u: goto label_393638;
        case 0x39363cu: goto label_39363c;
        case 0x393640u: goto label_393640;
        case 0x393644u: goto label_393644;
        case 0x393648u: goto label_393648;
        case 0x39364cu: goto label_39364c;
        case 0x393650u: goto label_393650;
        case 0x393654u: goto label_393654;
        case 0x393658u: goto label_393658;
        case 0x39365cu: goto label_39365c;
        case 0x393660u: goto label_393660;
        case 0x393664u: goto label_393664;
        case 0x393668u: goto label_393668;
        case 0x39366cu: goto label_39366c;
        case 0x393670u: goto label_393670;
        case 0x393674u: goto label_393674;
        case 0x393678u: goto label_393678;
        case 0x39367cu: goto label_39367c;
        case 0x393680u: goto label_393680;
        case 0x393684u: goto label_393684;
        case 0x393688u: goto label_393688;
        case 0x39368cu: goto label_39368c;
        case 0x393690u: goto label_393690;
        case 0x393694u: goto label_393694;
        case 0x393698u: goto label_393698;
        case 0x39369cu: goto label_39369c;
        case 0x3936a0u: goto label_3936a0;
        case 0x3936a4u: goto label_3936a4;
        case 0x3936a8u: goto label_3936a8;
        case 0x3936acu: goto label_3936ac;
        case 0x3936b0u: goto label_3936b0;
        case 0x3936b4u: goto label_3936b4;
        case 0x3936b8u: goto label_3936b8;
        case 0x3936bcu: goto label_3936bc;
        case 0x3936c0u: goto label_3936c0;
        case 0x3936c4u: goto label_3936c4;
        case 0x3936c8u: goto label_3936c8;
        case 0x3936ccu: goto label_3936cc;
        case 0x3936d0u: goto label_3936d0;
        case 0x3936d4u: goto label_3936d4;
        case 0x3936d8u: goto label_3936d8;
        case 0x3936dcu: goto label_3936dc;
        case 0x3936e0u: goto label_3936e0;
        case 0x3936e4u: goto label_3936e4;
        case 0x3936e8u: goto label_3936e8;
        case 0x3936ecu: goto label_3936ec;
        case 0x3936f0u: goto label_3936f0;
        case 0x3936f4u: goto label_3936f4;
        case 0x3936f8u: goto label_3936f8;
        case 0x3936fcu: goto label_3936fc;
        case 0x393700u: goto label_393700;
        case 0x393704u: goto label_393704;
        case 0x393708u: goto label_393708;
        case 0x39370cu: goto label_39370c;
        case 0x393710u: goto label_393710;
        case 0x393714u: goto label_393714;
        case 0x393718u: goto label_393718;
        case 0x39371cu: goto label_39371c;
        case 0x393720u: goto label_393720;
        case 0x393724u: goto label_393724;
        case 0x393728u: goto label_393728;
        case 0x39372cu: goto label_39372c;
        case 0x393730u: goto label_393730;
        case 0x393734u: goto label_393734;
        case 0x393738u: goto label_393738;
        case 0x39373cu: goto label_39373c;
        case 0x393740u: goto label_393740;
        case 0x393744u: goto label_393744;
        case 0x393748u: goto label_393748;
        case 0x39374cu: goto label_39374c;
        case 0x393750u: goto label_393750;
        case 0x393754u: goto label_393754;
        case 0x393758u: goto label_393758;
        case 0x39375cu: goto label_39375c;
        case 0x393760u: goto label_393760;
        case 0x393764u: goto label_393764;
        case 0x393768u: goto label_393768;
        case 0x39376cu: goto label_39376c;
        case 0x393770u: goto label_393770;
        case 0x393774u: goto label_393774;
        case 0x393778u: goto label_393778;
        case 0x39377cu: goto label_39377c;
        case 0x393780u: goto label_393780;
        case 0x393784u: goto label_393784;
        case 0x393788u: goto label_393788;
        case 0x39378cu: goto label_39378c;
        case 0x393790u: goto label_393790;
        case 0x393794u: goto label_393794;
        case 0x393798u: goto label_393798;
        case 0x39379cu: goto label_39379c;
        case 0x3937a0u: goto label_3937a0;
        case 0x3937a4u: goto label_3937a4;
        case 0x3937a8u: goto label_3937a8;
        case 0x3937acu: goto label_3937ac;
        case 0x3937b0u: goto label_3937b0;
        case 0x3937b4u: goto label_3937b4;
        case 0x3937b8u: goto label_3937b8;
        case 0x3937bcu: goto label_3937bc;
        case 0x3937c0u: goto label_3937c0;
        case 0x3937c4u: goto label_3937c4;
        case 0x3937c8u: goto label_3937c8;
        case 0x3937ccu: goto label_3937cc;
        case 0x3937d0u: goto label_3937d0;
        case 0x3937d4u: goto label_3937d4;
        case 0x3937d8u: goto label_3937d8;
        case 0x3937dcu: goto label_3937dc;
        case 0x3937e0u: goto label_3937e0;
        case 0x3937e4u: goto label_3937e4;
        case 0x3937e8u: goto label_3937e8;
        case 0x3937ecu: goto label_3937ec;
        case 0x3937f0u: goto label_3937f0;
        case 0x3937f4u: goto label_3937f4;
        case 0x3937f8u: goto label_3937f8;
        case 0x3937fcu: goto label_3937fc;
        case 0x393800u: goto label_393800;
        case 0x393804u: goto label_393804;
        case 0x393808u: goto label_393808;
        case 0x39380cu: goto label_39380c;
        case 0x393810u: goto label_393810;
        case 0x393814u: goto label_393814;
        case 0x393818u: goto label_393818;
        case 0x39381cu: goto label_39381c;
        case 0x393820u: goto label_393820;
        case 0x393824u: goto label_393824;
        case 0x393828u: goto label_393828;
        case 0x39382cu: goto label_39382c;
        case 0x393830u: goto label_393830;
        case 0x393834u: goto label_393834;
        case 0x393838u: goto label_393838;
        case 0x39383cu: goto label_39383c;
        case 0x393840u: goto label_393840;
        case 0x393844u: goto label_393844;
        case 0x393848u: goto label_393848;
        case 0x39384cu: goto label_39384c;
        case 0x393850u: goto label_393850;
        case 0x393854u: goto label_393854;
        case 0x393858u: goto label_393858;
        case 0x39385cu: goto label_39385c;
        case 0x393860u: goto label_393860;
        case 0x393864u: goto label_393864;
        case 0x393868u: goto label_393868;
        case 0x39386cu: goto label_39386c;
        case 0x393870u: goto label_393870;
        case 0x393874u: goto label_393874;
        case 0x393878u: goto label_393878;
        case 0x39387cu: goto label_39387c;
        case 0x393880u: goto label_393880;
        case 0x393884u: goto label_393884;
        case 0x393888u: goto label_393888;
        case 0x39388cu: goto label_39388c;
        case 0x393890u: goto label_393890;
        case 0x393894u: goto label_393894;
        case 0x393898u: goto label_393898;
        case 0x39389cu: goto label_39389c;
        case 0x3938a0u: goto label_3938a0;
        case 0x3938a4u: goto label_3938a4;
        case 0x3938a8u: goto label_3938a8;
        case 0x3938acu: goto label_3938ac;
        case 0x3938b0u: goto label_3938b0;
        case 0x3938b4u: goto label_3938b4;
        case 0x3938b8u: goto label_3938b8;
        case 0x3938bcu: goto label_3938bc;
        case 0x3938c0u: goto label_3938c0;
        case 0x3938c4u: goto label_3938c4;
        case 0x3938c8u: goto label_3938c8;
        case 0x3938ccu: goto label_3938cc;
        case 0x3938d0u: goto label_3938d0;
        case 0x3938d4u: goto label_3938d4;
        case 0x3938d8u: goto label_3938d8;
        case 0x3938dcu: goto label_3938dc;
        case 0x3938e0u: goto label_3938e0;
        case 0x3938e4u: goto label_3938e4;
        case 0x3938e8u: goto label_3938e8;
        case 0x3938ecu: goto label_3938ec;
        case 0x3938f0u: goto label_3938f0;
        case 0x3938f4u: goto label_3938f4;
        case 0x3938f8u: goto label_3938f8;
        case 0x3938fcu: goto label_3938fc;
        case 0x393900u: goto label_393900;
        case 0x393904u: goto label_393904;
        case 0x393908u: goto label_393908;
        case 0x39390cu: goto label_39390c;
        case 0x393910u: goto label_393910;
        case 0x393914u: goto label_393914;
        case 0x393918u: goto label_393918;
        case 0x39391cu: goto label_39391c;
        case 0x393920u: goto label_393920;
        case 0x393924u: goto label_393924;
        case 0x393928u: goto label_393928;
        case 0x39392cu: goto label_39392c;
        case 0x393930u: goto label_393930;
        case 0x393934u: goto label_393934;
        case 0x393938u: goto label_393938;
        case 0x39393cu: goto label_39393c;
        case 0x393940u: goto label_393940;
        case 0x393944u: goto label_393944;
        case 0x393948u: goto label_393948;
        case 0x39394cu: goto label_39394c;
        case 0x393950u: goto label_393950;
        case 0x393954u: goto label_393954;
        case 0x393958u: goto label_393958;
        case 0x39395cu: goto label_39395c;
        case 0x393960u: goto label_393960;
        case 0x393964u: goto label_393964;
        case 0x393968u: goto label_393968;
        case 0x39396cu: goto label_39396c;
        case 0x393970u: goto label_393970;
        case 0x393974u: goto label_393974;
        case 0x393978u: goto label_393978;
        case 0x39397cu: goto label_39397c;
        case 0x393980u: goto label_393980;
        case 0x393984u: goto label_393984;
        case 0x393988u: goto label_393988;
        case 0x39398cu: goto label_39398c;
        case 0x393990u: goto label_393990;
        case 0x393994u: goto label_393994;
        case 0x393998u: goto label_393998;
        case 0x39399cu: goto label_39399c;
        case 0x3939a0u: goto label_3939a0;
        case 0x3939a4u: goto label_3939a4;
        default: break;
    }

    ctx->pc = 0x393538u;

label_393538:
    // 0x393538: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x393538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_39353c:
    // 0x39353c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x39353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_393540:
    // 0x393540: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x393540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_393544:
    // 0x393544: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x393544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_393548:
    // 0x393548: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x393548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_39354c:
    // 0x39354c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39354cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_393550:
    // 0x393550: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x393550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_393554:
    // 0x393554: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x393554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_393558:
    // 0x393558: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x393558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_39355c:
    // 0x39355c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39355cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393560:
    // 0x393560: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x393560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_393564:
    // 0x393564: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x393564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_393568:
    // 0x393568: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x393568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_39356c:
    // 0x39356c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x39356cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_393570:
    // 0x393570: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x393570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_393574:
    // 0x393574: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x393574u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_393578:
    // 0x393578: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x393578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_39357c:
    // 0x39357c: 0x13882b  sltu        $s1, $zero, $s3
    ctx->pc = 0x39357cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_393580:
    // 0x393580: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x393580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_393584:
    // 0x393584: 0xc0e57ce  jal         func_395F38
label_393588:
    if (ctx->pc == 0x393588u) {
        ctx->pc = 0x393588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393584u;
        // 0x393588: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39358Cu;
        goto label_39358c;
    }
    ctx->pc = 0x393584u;
    SET_GPR_U32(ctx, 31, 0x39358Cu);
    ctx->pc = 0x393588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393584u;
    // 0x393588: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x393584u, 0x39358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39358Cu;
label_39358c:
    // 0x39358c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39358cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393590:
    // 0x393590: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_393594:
    if (ctx->pc == 0x393594u) {
        ctx->pc = 0x393594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393590u;
        // 0x393594: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393598u;
        goto label_393598;
    }
    ctx->pc = 0x393590u;
    {
        const bool branch_taken_0x393590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x393594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393590u;
        // 0x393594: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393590) {
            ctx->pc = 0x3935C8u;
            goto label_3935c8;
        }
    }
    ctx->pc = 0x393598u;
label_393598:
    // 0x393598: 0x96a50112  lhu         $a1, 0x112($s5)
    ctx->pc = 0x393598u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
label_39359c:
    // 0x39359c: 0xc0e44cc  jal         func_391330
label_3935a0:
    if (ctx->pc == 0x3935A0u) {
        ctx->pc = 0x3935A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39359Cu;
        // 0x3935a0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935A4u;
        goto label_3935a4;
    }
    ctx->pc = 0x39359Cu;
    SET_GPR_U32(ctx, 31, 0x3935A4u);
    ctx->pc = 0x3935A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39359Cu;
    // 0x3935a0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39359Cu, 0x3935A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935A4u;
label_3935a4:
    // 0x3935a4: 0x80460086  lb          $a2, 0x86($v0)
    ctx->pc = 0x3935a4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_3935a8:
    // 0x3935a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3935a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3935ac:
    // 0x3935ac: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x3935acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_3935b0:
    // 0x3935b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3935b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3935b4:
    // 0x3935b4: 0x38c20023  xori        $v0, $a2, 0x23
    ctx->pc = 0x3935b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)35);
label_3935b8:
    // 0x3935b8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_3935bc:
    if (ctx->pc == 0x3935BCu) {
        ctx->pc = 0x3935BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935B8u;
        // 0x3935bc: 0xa2880a  movz        $s1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935C0u;
        goto label_3935c0;
    }
    ctx->pc = 0x3935B8u;
    {
        const bool branch_taken_0x3935b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3935BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935B8u;
        // 0x3935bc: 0xa2880a  movz        $s1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3935b8) {
            ctx->pc = 0x3935C8u;
            goto label_3935c8;
        }
    }
    ctx->pc = 0x3935C0u;
label_3935c0:
    // 0x3935c0: 0x38c20008  xori        $v0, $a2, 0x8
    ctx->pc = 0x3935c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)8);
label_3935c4:
    // 0x3935c4: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x3935c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_3935c8:
    // 0x3935c8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3935c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3935cc:
    // 0x3935cc: 0xc0e8b48  jal         func_3A2D20
label_3935d0:
    if (ctx->pc == 0x3935D0u) {
        ctx->pc = 0x3935D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935CCu;
        // 0x3935d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935D4u;
        goto label_3935d4;
    }
    ctx->pc = 0x3935CCu;
    SET_GPR_U32(ctx, 31, 0x3935D4u);
    ctx->pc = 0x3935D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935CCu;
    // 0x3935d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3935CCu, 0x3935D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935D4u;
label_3935d4:
    // 0x3935d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3935d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3935d8:
    // 0x3935d8: 0xc0e8b70  jal         func_3A2DC0
label_3935dc:
    if (ctx->pc == 0x3935DCu) {
        ctx->pc = 0x3935DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935D8u;
        // 0x3935dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935E0u;
        goto label_3935e0;
    }
    ctx->pc = 0x3935D8u;
    SET_GPR_U32(ctx, 31, 0x3935E0u);
    ctx->pc = 0x3935DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935D8u;
    // 0x3935dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3935D8u, 0x3935E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935E0u;
label_3935e0:
    // 0x3935e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3935e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3935e4:
    // 0x3935e4: 0xc0e8b70  jal         func_3A2DC0
label_3935e8:
    if (ctx->pc == 0x3935E8u) {
        ctx->pc = 0x3935E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935E4u;
        // 0x3935e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935ECu;
        goto label_3935ec;
    }
    ctx->pc = 0x3935E4u;
    SET_GPR_U32(ctx, 31, 0x3935ECu);
    ctx->pc = 0x3935E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935E4u;
    // 0x3935e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3935E4u, 0x3935ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935ECu;
label_3935ec:
    // 0x3935ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3935ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3935f0:
    // 0x3935f0: 0xc0e8b68  jal         func_3A2DA0
label_3935f4:
    if (ctx->pc == 0x3935F4u) {
        ctx->pc = 0x3935F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935F0u;
        // 0x3935f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935F8u;
        goto label_3935f8;
    }
    ctx->pc = 0x3935F0u;
    SET_GPR_U32(ctx, 31, 0x3935F8u);
    ctx->pc = 0x3935F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935F0u;
    // 0x3935f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3935F0u, 0x3935F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935F8u;
label_3935f8:
    // 0x3935f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3935f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3935fc:
    // 0x3935fc: 0xc0e8b68  jal         func_3A2DA0
label_393600:
    if (ctx->pc == 0x393600u) {
        ctx->pc = 0x393600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935FCu;
        // 0x393600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393604u;
        goto label_393604;
    }
    ctx->pc = 0x3935FCu;
    SET_GPR_U32(ctx, 31, 0x393604u);
    ctx->pc = 0x393600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935FCu;
    // 0x393600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3935FCu, 0x393604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393604u;
label_393604:
    // 0x393604: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x393604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_393608:
    // 0x393608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x393608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39360c:
    // 0x39360c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_393610:
    // 0x393610: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x393610u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_393614:
    // 0x393614: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x393614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_393618:
    // 0x393618: 0x60f809  jalr        $v1
label_39361c:
    if (ctx->pc == 0x39361Cu) {
        ctx->pc = 0x39361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393618u;
        // 0x39361c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393620u;
        goto label_393620;
    }
    ctx->pc = 0x393618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x393620u);
        ctx->pc = 0x39361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393618u;
        // 0x39361c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393618u, 0x393620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393620u;
label_393620:
    // 0x393620: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393624:
    // 0x393624: 0xc0e8b58  jal         func_3A2D60
label_393628:
    if (ctx->pc == 0x393628u) {
        ctx->pc = 0x393628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393624u;
        // 0x393628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39362Cu;
        goto label_39362c;
    }
    ctx->pc = 0x393624u;
    SET_GPR_U32(ctx, 31, 0x39362Cu);
    ctx->pc = 0x393628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393624u;
    // 0x393628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x393624u, 0x39362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39362Cu;
label_39362c:
    // 0x39362c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393630:
    // 0x393630: 0xc0e8b58  jal         func_3A2D60
label_393634:
    if (ctx->pc == 0x393634u) {
        ctx->pc = 0x393634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393630u;
        // 0x393634: 0x26850050  addiu       $a1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393638u;
        goto label_393638;
    }
    ctx->pc = 0x393630u;
    SET_GPR_U32(ctx, 31, 0x393638u);
    ctx->pc = 0x393634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393630u;
    // 0x393634: 0x26850050  addiu       $a1, $s4, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x393630u, 0x393638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393638u;
label_393638:
    // 0x393638: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39363c:
    // 0x39363c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39363cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393640:
    // 0x393640: 0xc0e8b80  jal         func_3A2E00
label_393644:
    if (ctx->pc == 0x393644u) {
        ctx->pc = 0x393644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393640u;
        // 0x393644: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393648u;
        goto label_393648;
    }
    ctx->pc = 0x393640u;
    SET_GPR_U32(ctx, 31, 0x393648u);
    ctx->pc = 0x393644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393640u;
    // 0x393644: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x393640u, 0x393648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393648u;
label_393648:
    // 0x393648: 0xc0e8b50  jal         func_3A2D40
label_39364c:
    if (ctx->pc == 0x39364Cu) {
        ctx->pc = 0x39364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393648u;
        // 0x39364c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393650u;
        goto label_393650;
    }
    ctx->pc = 0x393648u;
    SET_GPR_U32(ctx, 31, 0x393650u);
    ctx->pc = 0x39364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393648u;
    // 0x39364c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x393648u, 0x393650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393650u;
label_393650:
    // 0x393650: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_393654:
    if (ctx->pc == 0x393654u) {
        ctx->pc = 0x393654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393650u;
        // 0x393654: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393658u;
        goto label_393658;
    }
    ctx->pc = 0x393650u;
    {
        const bool branch_taken_0x393650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x393654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393650u;
        // 0x393654: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393650) {
            ctx->pc = 0x39366Cu;
            goto label_39366c;
        }
    }
    ctx->pc = 0x393658u;
label_393658:
    // 0x393658: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x393658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_39365c:
    // 0x39365c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x39365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_393660:
    // 0x393660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393664:
    // 0x393664: 0xc0a4daa  jal         func_2936A8
label_393668:
    if (ctx->pc == 0x393668u) {
        ctx->pc = 0x393668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393664u;
        // 0x393668: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39366Cu;
        goto label_39366c;
    }
    ctx->pc = 0x393664u;
    SET_GPR_U32(ctx, 31, 0x39366Cu);
    ctx->pc = 0x393668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393664u;
    // 0x393668: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x393664u, 0x39366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39366Cu;
label_39366c:
    // 0x39366c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_393670:
    if (ctx->pc == 0x393670u) {
        ctx->pc = 0x393670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39366Cu;
        // 0x393670: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393674u;
        goto label_393674;
    }
    ctx->pc = 0x39366Cu;
    {
        const bool branch_taken_0x39366c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x393670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39366Cu;
        // 0x393670: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39366c) {
            ctx->pc = 0x3936ACu;
            goto label_3936ac;
        }
    }
    ctx->pc = 0x393674u;
label_393674:
    // 0x393674: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x393674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393678:
    // 0x393678: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x393678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_39367c:
    // 0x39367c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39367cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393680:
    // 0x393680: 0xc10b1c6  jal         func_42C718
label_393684:
    if (ctx->pc == 0x393684u) {
        ctx->pc = 0x393684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393680u;
        // 0x393684: 0xafb20044  sw          $s2, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393688u;
        goto label_393688;
    }
    ctx->pc = 0x393680u;
    SET_GPR_U32(ctx, 31, 0x393688u);
    ctx->pc = 0x393684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393680u;
    // 0x393684: 0xafb20044  sw          $s2, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x393680u, 0x393688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393688u;
label_393688:
    // 0x393688: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x393688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_39368c:
    // 0x39368c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393690:
    // 0x393690: 0xa3b10031  sb          $s1, 0x31($sp)
    ctx->pc = 0x393690u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 17));
label_393694:
    // 0x393694: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x393694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_393698:
    // 0x393698: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x393698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39369c:
    // 0x39369c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x39369cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3936a0:
    // 0x3936a0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3936a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3936a4:
    // 0x3936a4: 0x40f809  jalr        $v0
label_3936a8:
    if (ctx->pc == 0x3936A8u) {
        ctx->pc = 0x3936A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936A4u;
        // 0x3936a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936ACu;
        goto label_3936ac;
    }
    ctx->pc = 0x3936A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3936ACu);
        ctx->pc = 0x3936A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936A4u;
        // 0x3936a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3936A4u, 0x3936ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3936ACu;
label_3936ac:
    // 0x3936ac: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3936acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3936b0:
    // 0x3936b0: 0x92a4010d  lbu         $a0, 0x10D($s5)
    ctx->pc = 0x3936b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 269)));
label_3936b4:
    // 0x3936b4: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x3936b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3936b8:
    // 0x3936b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3936b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3936bc:
    // 0x3936bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3936c0:
    if (ctx->pc == 0x3936C0u) {
        ctx->pc = 0x3936C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936BCu;
        // 0x3936c0: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936C4u;
        goto label_3936c4;
    }
    ctx->pc = 0x3936BCu;
    {
        const bool branch_taken_0x3936bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3936C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936BCu;
        // 0x3936c0: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936bc) {
            ctx->pc = 0x3936D0u;
            goto label_3936d0;
        }
    }
    ctx->pc = 0x3936C4u;
label_3936c4:
    // 0x3936c4: 0x92a2010e  lbu         $v0, 0x10E($s5)
    ctx->pc = 0x3936c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 270)));
label_3936c8:
    // 0x3936c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3936cc:
    if (ctx->pc == 0x3936CCu) {
        ctx->pc = 0x3936D0u;
        goto label_3936d0;
    }
    ctx->pc = 0x3936C8u;
    {
        const bool branch_taken_0x3936c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3936c8) {
            ctx->pc = 0x3936D4u;
            goto label_3936d4;
        }
    }
    ctx->pc = 0x3936D0u;
label_3936d0:
    // 0x3936d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3936d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3936d4:
    // 0x3936d4: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_3936d8:
    if (ctx->pc == 0x3936D8u) {
        ctx->pc = 0x3936D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936D4u;
        // 0x3936d8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936DCu;
        goto label_3936dc;
    }
    ctx->pc = 0x3936D4u;
    {
        const bool branch_taken_0x3936d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3936D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936D4u;
        // 0x3936d8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936d4) {
            ctx->pc = 0x393778u;
            goto label_393778;
        }
    }
    ctx->pc = 0x3936DCu;
label_3936dc:
    // 0x3936dc: 0x96a50112  lhu         $a1, 0x112($s5)
    ctx->pc = 0x3936dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
label_3936e0:
    // 0x3936e0: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x3936e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_3936e4:
    // 0x3936e4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x3936e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_3936e8:
    // 0x3936e8: 0xc0e44cc  jal         func_391330
label_3936ec:
    if (ctx->pc == 0x3936ECu) {
        ctx->pc = 0x3936ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936E8u;
        // 0x3936ec: 0x26920090  addiu       $s2, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936F0u;
        goto label_3936f0;
    }
    ctx->pc = 0x3936E8u;
    SET_GPR_U32(ctx, 31, 0x3936F0u);
    ctx->pc = 0x3936ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3936E8u;
    // 0x3936ec: 0x26920090  addiu       $s2, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3936E8u, 0x3936F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3936F0u;
label_3936f0:
    // 0x3936f0: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x3936f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_3936f4:
    // 0x3936f4: 0x96a50112  lhu         $a1, 0x112($s5)
    ctx->pc = 0x3936f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
label_3936f8:
    // 0x3936f8: 0xc0e44cc  jal         func_391330
label_3936fc:
    if (ctx->pc == 0x3936FCu) {
        ctx->pc = 0x3936FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936F8u;
        // 0x3936fc: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393700u;
        goto label_393700;
    }
    ctx->pc = 0x3936F8u;
    SET_GPR_U32(ctx, 31, 0x393700u);
    ctx->pc = 0x3936FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3936F8u;
    // 0x3936fc: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3936F8u, 0x393700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393700u;
label_393700:
    // 0x393700: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x393700u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_393704:
    // 0x393704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x393704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393708:
    // 0x393708: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x393708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_39370c:
    // 0x39370c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39370cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393710:
    // 0x393710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x393710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_393714:
    // 0x393714: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393718:
    // 0x393718: 0xc04420c  jal         func_110830
label_39371c:
    if (ctx->pc == 0x39371Cu) {
        ctx->pc = 0x39371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393718u;
        // 0x39371c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393720u;
        goto label_393720;
    }
    ctx->pc = 0x393718u;
    SET_GPR_U32(ctx, 31, 0x393720u);
    ctx->pc = 0x39371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393718u;
    // 0x39371c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393718u, 0x393720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393720u;
label_393720:
    // 0x393720: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x393720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_393724:
    // 0x393724: 0xc0e57ce  jal         func_395F38
label_393728:
    if (ctx->pc == 0x393728u) {
        ctx->pc = 0x393728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393724u;
        // 0x393728: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39372Cu;
        goto label_39372c;
    }
    ctx->pc = 0x393724u;
    SET_GPR_U32(ctx, 31, 0x39372Cu);
    ctx->pc = 0x393728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393724u;
    // 0x393728: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x393724u, 0x39372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39372Cu;
label_39372c:
    // 0x39372c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393730:
    // 0x393730: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_393734:
    if (ctx->pc == 0x393734u) {
        ctx->pc = 0x393734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393730u;
        // 0x393734: 0x8e242c04  lw          $a0, 0x2C04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393738u;
        goto label_393738;
    }
    ctx->pc = 0x393730u;
    {
        const bool branch_taken_0x393730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x393734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393730u;
        // 0x393734: 0x8e242c04  lw          $a0, 0x2C04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393730) {
            ctx->pc = 0x3937D0u;
            goto label_3937d0;
        }
    }
    ctx->pc = 0x393738u;
label_393738:
    // 0x393738: 0xc0e44cc  jal         func_391330
label_39373c:
    if (ctx->pc == 0x39373Cu) {
        ctx->pc = 0x39373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393738u;
        // 0x39373c: 0x96a50112  lhu         $a1, 0x112($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393740u;
        goto label_393740;
    }
    ctx->pc = 0x393738u;
    SET_GPR_U32(ctx, 31, 0x393740u);
    ctx->pc = 0x39373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393738u;
    // 0x39373c: 0x96a50112  lhu         $a1, 0x112($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393738u, 0x393740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393740u;
label_393740:
    // 0x393740: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x393740u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_393744:
    // 0x393744: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x393744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_393748:
    // 0x393748: 0xc0e44cc  jal         func_391330
label_39374c:
    if (ctx->pc == 0x39374Cu) {
        ctx->pc = 0x39374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393748u;
        // 0x39374c: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393750u;
        goto label_393750;
    }
    ctx->pc = 0x393748u;
    SET_GPR_U32(ctx, 31, 0x393750u);
    ctx->pc = 0x39374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393748u;
    // 0x39374c: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393748u, 0x393750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393750u;
label_393750:
    // 0x393750: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x393750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_393754:
    // 0x393754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x393754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393758:
    // 0x393758: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x393758u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_39375c:
    // 0x39375c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39375cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393760:
    // 0x393760: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x393760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_393764:
    // 0x393764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393768:
    // 0x393768: 0xc04420c  jal         func_110830
label_39376c:
    if (ctx->pc == 0x39376Cu) {
        ctx->pc = 0x39376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393768u;
        // 0x39376c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393770u;
        goto label_393770;
    }
    ctx->pc = 0x393768u;
    SET_GPR_U32(ctx, 31, 0x393770u);
    ctx->pc = 0x39376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393768u;
    // 0x39376c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393768u, 0x393770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393770u;
label_393770:
    // 0x393770: 0x10000017  b           . + 4 + (0x17 << 2)
label_393774:
    if (ctx->pc == 0x393774u) {
        ctx->pc = 0x393778u;
        goto label_393778;
    }
    ctx->pc = 0x393770u;
    {
        const bool branch_taken_0x393770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393770) {
            ctx->pc = 0x3937D0u;
            goto label_3937d0;
        }
    }
    ctx->pc = 0x393778u;
label_393778:
    // 0x393778: 0xc0e57ce  jal         func_395F38
label_39377c:
    if (ctx->pc == 0x39377Cu) {
        ctx->pc = 0x39377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393778u;
        // 0x39377c: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393780u;
        goto label_393780;
    }
    ctx->pc = 0x393778u;
    SET_GPR_U32(ctx, 31, 0x393780u);
    ctx->pc = 0x39377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393778u;
    // 0x39377c: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x393778u, 0x393780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393780u;
label_393780:
    // 0x393780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x393780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393784:
    // 0x393784: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_393788:
    if (ctx->pc == 0x393788u) {
        ctx->pc = 0x393788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393784u;
        // 0x393788: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39378Cu;
        goto label_39378c;
    }
    ctx->pc = 0x393784u;
    {
        const bool branch_taken_0x393784 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x393788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393784u;
        // 0x393788: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393784) {
            ctx->pc = 0x3937D0u;
            goto label_3937d0;
        }
    }
    ctx->pc = 0x39378Cu;
label_39378c:
    // 0x39378c: 0x96a50112  lhu         $a1, 0x112($s5)
    ctx->pc = 0x39378cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
label_393790:
    // 0x393790: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x393790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_393794:
    // 0x393794: 0xc0e44cc  jal         func_391330
label_393798:
    if (ctx->pc == 0x393798u) {
        ctx->pc = 0x393798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393794u;
        // 0x393798: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39379Cu;
        goto label_39379c;
    }
    ctx->pc = 0x393794u;
    SET_GPR_U32(ctx, 31, 0x39379Cu);
    ctx->pc = 0x393798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393794u;
    // 0x393798: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393794u, 0x39379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39379Cu;
label_39379c:
    // 0x39379c: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x39379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_3937a0:
    // 0x3937a0: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3937a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_3937a4:
    // 0x3937a4: 0xc0e44cc  jal         func_391330
label_3937a8:
    if (ctx->pc == 0x3937A8u) {
        ctx->pc = 0x3937A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937A4u;
        // 0x3937a8: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3937ACu;
        goto label_3937ac;
    }
    ctx->pc = 0x3937A4u;
    SET_GPR_U32(ctx, 31, 0x3937ACu);
    ctx->pc = 0x3937A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937A4u;
    // 0x3937a8: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3937A4u, 0x3937ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3937ACu;
label_3937ac:
    // 0x3937ac: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x3937acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_3937b0:
    // 0x3937b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3937b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3937b4:
    // 0x3937b4: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x3937b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_3937b8:
    // 0x3937b8: 0x26870090  addiu       $a3, $s4, 0x90
    ctx->pc = 0x3937b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3937bc:
    // 0x3937bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3937bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3937c0:
    // 0x3937c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3937c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3937c4:
    // 0x3937c4: 0xc04420c  jal         func_110830
label_3937c8:
    if (ctx->pc == 0x3937C8u) {
        ctx->pc = 0x3937C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937C4u;
        // 0x3937c8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3937CCu;
        goto label_3937cc;
    }
    ctx->pc = 0x3937C4u;
    SET_GPR_U32(ctx, 31, 0x3937CCu);
    ctx->pc = 0x3937C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937C4u;
    // 0x3937c8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x3937C4u, 0x3937CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3937CCu;
label_3937cc:
    // 0x3937cc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3937ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_3937d0:
    // 0x3937d0: 0x12600067  beqz        $s3, . + 4 + (0x67 << 2)
label_3937d4:
    if (ctx->pc == 0x3937D4u) {
        ctx->pc = 0x3937D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937D0u;
        // 0x3937d4: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3937D8u;
        goto label_3937d8;
    }
    ctx->pc = 0x3937D0u;
    {
        const bool branch_taken_0x3937d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3937D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937D0u;
        // 0x3937d4: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3937d0) {
            ctx->pc = 0x393970u;
            goto label_393970;
        }
    }
    ctx->pc = 0x3937D8u;
label_3937d8:
    // 0x3937d8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3937d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3937dc:
    // 0x3937dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3937dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3937e0:
    // 0x3937e0: 0xc043d5e  jal         func_10F578
label_3937e4:
    if (ctx->pc == 0x3937E4u) {
        ctx->pc = 0x3937E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937E0u;
        // 0x3937e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3937E8u;
        goto label_3937e8;
    }
    ctx->pc = 0x3937E0u;
    SET_GPR_U32(ctx, 31, 0x3937E8u);
    ctx->pc = 0x3937E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937E0u;
    // 0x3937e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3937E0u, 0x3937E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3937E8u;
label_3937e8:
    // 0x3937e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3937ec:
    if (ctx->pc == 0x3937ECu) {
        ctx->pc = 0x3937F0u;
        goto label_3937f0;
    }
    ctx->pc = 0x3937E8u;
    {
        const bool branch_taken_0x3937e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3937e8) {
            ctx->pc = 0x393804u;
            goto label_393804;
        }
    }
    ctx->pc = 0x3937F0u;
label_3937f0:
    // 0x3937f0: 0xc043d5e  jal         func_10F578
label_3937f4:
    if (ctx->pc == 0x3937F4u) {
        ctx->pc = 0x3937F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937F0u;
        // 0x3937f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3937F8u;
        goto label_3937f8;
    }
    ctx->pc = 0x3937F0u;
    SET_GPR_U32(ctx, 31, 0x3937F8u);
    ctx->pc = 0x3937F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937F0u;
    // 0x3937f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3937F0u, 0x3937F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3937F8u;
label_3937f8:
    // 0x3937f8: 0xc043c7a  jal         func_10F1E8
label_3937fc:
    if (ctx->pc == 0x3937FCu) {
        ctx->pc = 0x3937FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937F8u;
        // 0x3937fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393800u;
        goto label_393800;
    }
    ctx->pc = 0x3937F8u;
    SET_GPR_U32(ctx, 31, 0x393800u);
    ctx->pc = 0x3937FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937F8u;
    // 0x3937fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x3937F8u, 0x393800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393800u;
label_393800:
    // 0x393800: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x393800u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_393804:
    // 0x393804: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_393808:
    if (ctx->pc == 0x393808u) {
        ctx->pc = 0x393808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393804u;
        // 0x393808: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39380Cu;
        goto label_39380c;
    }
    ctx->pc = 0x393804u;
    {
        const bool branch_taken_0x393804 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x393808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393804u;
        // 0x393808: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393804) {
            ctx->pc = 0x393818u;
            goto label_393818;
        }
    }
    ctx->pc = 0x39380Cu;
label_39380c:
    // 0x39380c: 0xc104c06  jal         func_413018
label_393810:
    if (ctx->pc == 0x393810u) {
        ctx->pc = 0x393810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39380Cu;
        // 0x393810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393814u;
        goto label_393814;
    }
    ctx->pc = 0x39380Cu;
    SET_GPR_U32(ctx, 31, 0x393814u);
    ctx->pc = 0x393810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39380Cu;
    // 0x393810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x39380Cu, 0x393814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393814u;
label_393814:
    // 0x393814: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x393814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_393818:
    // 0x393818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39381c:
    // 0x39381c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393820:
    // 0x393820: 0xc0a4daa  jal         func_2936A8
label_393824:
    if (ctx->pc == 0x393824u) {
        ctx->pc = 0x393824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393820u;
        // 0x393824: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393828u;
        goto label_393828;
    }
    ctx->pc = 0x393820u;
    SET_GPR_U32(ctx, 31, 0x393828u);
    ctx->pc = 0x393824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393820u;
    // 0x393824: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x393820u, 0x393828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393828u;
label_393828:
    // 0x393828: 0x12e00022  beqz        $s7, . + 4 + (0x22 << 2)
label_39382c:
    if (ctx->pc == 0x39382Cu) {
        ctx->pc = 0x39382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393828u;
        // 0x39382c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393830u;
        goto label_393830;
    }
    ctx->pc = 0x393828u;
    {
        const bool branch_taken_0x393828 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393828u;
        // 0x39382c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393828) {
            ctx->pc = 0x3938B4u;
            goto label_3938b4;
        }
    }
    ctx->pc = 0x393830u;
label_393830:
    // 0x393830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x393830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393834:
    // 0x393834: 0xc0e3cde  jal         func_38F378
label_393838:
    if (ctx->pc == 0x393838u) {
        ctx->pc = 0x393838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393834u;
        // 0x393838: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39383Cu;
        goto label_39383c;
    }
    ctx->pc = 0x393834u;
    SET_GPR_U32(ctx, 31, 0x39383Cu);
    ctx->pc = 0x393838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393834u;
    // 0x393838: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F378u, 0x393834u, 0x39383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39383Cu;
label_39383c:
    // 0x39383c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x39383cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_393840:
    // 0x393840: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x393840u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_393844:
    // 0x393844: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_393848:
    if (ctx->pc == 0x393848u) {
        ctx->pc = 0x393848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393844u;
        // 0x393848: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39384Cu;
        goto label_39384c;
    }
    ctx->pc = 0x393844u;
    {
        const bool branch_taken_0x393844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393844u;
        // 0x393848: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393844) {
            ctx->pc = 0x393868u;
            goto label_393868;
        }
    }
    ctx->pc = 0x39384Cu;
label_39384c:
    // 0x39384c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393850:
    // 0x393850: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x393850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_393854:
    // 0x393854: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x393854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_393858:
    // 0x393858: 0xc13b652  jal         func_4ED948
label_39385c:
    if (ctx->pc == 0x39385Cu) {
        ctx->pc = 0x39385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393858u;
        // 0x39385c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393860u;
        goto label_393860;
    }
    ctx->pc = 0x393858u;
    SET_GPR_U32(ctx, 31, 0x393860u);
    ctx->pc = 0x39385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393858u;
    // 0x39385c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x393858u, 0x393860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393860u;
label_393860:
    // 0x393860: 0x10000014  b           . + 4 + (0x14 << 2)
label_393864:
    if (ctx->pc == 0x393864u) {
        ctx->pc = 0x393868u;
        goto label_393868;
    }
    ctx->pc = 0x393860u;
    {
        const bool branch_taken_0x393860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393860) {
            ctx->pc = 0x3938B4u;
            goto label_3938b4;
        }
    }
    ctx->pc = 0x393868u;
label_393868:
    // 0x393868: 0xc087502  jal         func_21D408
label_39386c:
    if (ctx->pc == 0x39386Cu) {
        ctx->pc = 0x39386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393868u;
        // 0x39386c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393870u;
        goto label_393870;
    }
    ctx->pc = 0x393868u;
    SET_GPR_U32(ctx, 31, 0x393870u);
    ctx->pc = 0x39386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393868u;
    // 0x39386c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x393868u, 0x393870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393870u;
label_393870:
    // 0x393870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393874:
    // 0x393874: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x393874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_393878:
    // 0x393878: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x393878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_39387c:
    // 0x39387c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_393880:
    if (ctx->pc == 0x393880u) {
        ctx->pc = 0x393884u;
        goto label_393884;
    }
    ctx->pc = 0x39387Cu;
    {
        const bool branch_taken_0x39387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39387c) {
            ctx->pc = 0x3938B4u;
            goto label_3938b4;
        }
    }
    ctx->pc = 0x393884u;
label_393884:
    // 0x393884: 0xc05959e  jal         func_165678
label_393888:
    if (ctx->pc == 0x393888u) {
        ctx->pc = 0x393888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393884u;
        // 0x393888: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39388Cu;
        goto label_39388c;
    }
    ctx->pc = 0x393884u;
    SET_GPR_U32(ctx, 31, 0x39388Cu);
    ctx->pc = 0x393888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393884u;
    // 0x393888: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x393884u, 0x39388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39388Cu;
label_39388c:
    // 0x39388c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_393890:
    if (ctx->pc == 0x393890u) {
        ctx->pc = 0x393894u;
        goto label_393894;
    }
    ctx->pc = 0x39388Cu;
    {
        const bool branch_taken_0x39388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39388c) {
            ctx->pc = 0x3938B4u;
            goto label_3938b4;
        }
    }
    ctx->pc = 0x393894u;
label_393894:
    // 0x393894: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x393894u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_393898:
    // 0x393898: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x393898u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_39389c:
    // 0x39389c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3938a0:
    if (ctx->pc == 0x3938A0u) {
        ctx->pc = 0x3938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39389Cu;
        // 0x3938a0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938A4u;
        goto label_3938a4;
    }
    ctx->pc = 0x39389Cu;
    {
        const bool branch_taken_0x39389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39389Cu;
        // 0x3938a0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39389c) {
            ctx->pc = 0x3938B4u;
            goto label_3938b4;
        }
    }
    ctx->pc = 0x3938A4u;
label_3938a4:
    // 0x3938a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3938a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3938a8:
    // 0x3938a8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x3938a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_3938ac:
    // 0x3938ac: 0xc13ce7a  jal         func_4F39E8
label_3938b0:
    if (ctx->pc == 0x3938B0u) {
        ctx->pc = 0x3938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938ACu;
        // 0x3938b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938B4u;
        goto label_3938b4;
    }
    ctx->pc = 0x3938ACu;
    SET_GPR_U32(ctx, 31, 0x3938B4u);
    ctx->pc = 0x3938B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3938ACu;
    // 0x3938b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x3938ACu, 0x3938B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3938B4u;
label_3938b4:
    // 0x3938b4: 0xc0e57ce  jal         func_395F38
label_3938b8:
    if (ctx->pc == 0x3938B8u) {
        ctx->pc = 0x3938B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938B4u;
        // 0x3938b8: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938BCu;
        goto label_3938bc;
    }
    ctx->pc = 0x3938B4u;
    SET_GPR_U32(ctx, 31, 0x3938BCu);
    ctx->pc = 0x3938B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3938B4u;
    // 0x3938b8: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3938B4u, 0x3938BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3938BCu;
label_3938bc:
    // 0x3938bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3938bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3938c0:
    // 0x3938c0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_3938c4:
    if (ctx->pc == 0x3938C4u) {
        ctx->pc = 0x3938C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938C0u;
        // 0x3938c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938C8u;
        goto label_3938c8;
    }
    ctx->pc = 0x3938C0u;
    {
        const bool branch_taken_0x3938c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938C0u;
        // 0x3938c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938c0) {
            ctx->pc = 0x393970u;
            goto label_393970;
        }
    }
    ctx->pc = 0x3938C8u;
label_3938c8:
    // 0x3938c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3938c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3938cc:
    // 0x3938cc: 0xc0e536a  jal         func_394DA8
label_3938d0:
    if (ctx->pc == 0x3938D0u) {
        ctx->pc = 0x3938D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938CCu;
        // 0x3938d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938D4u;
        goto label_3938d4;
    }
    ctx->pc = 0x3938CCu;
    SET_GPR_U32(ctx, 31, 0x3938D4u);
    ctx->pc = 0x3938D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3938CCu;
    // 0x3938d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394DA8u, 0x3938CCu, 0x3938D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3938D4u;
label_3938d4:
    // 0x3938d4: 0x9202010d  lbu         $v0, 0x10D($s0)
    ctx->pc = 0x3938d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3938d8:
    // 0x3938d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3938dc:
    if (ctx->pc == 0x3938DCu) {
        ctx->pc = 0x3938DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938D8u;
        // 0x3938dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938E0u;
        goto label_3938e0;
    }
    ctx->pc = 0x3938D8u;
    {
        const bool branch_taken_0x3938d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938D8u;
        // 0x3938dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938d8) {
            ctx->pc = 0x3938ECu;
            goto label_3938ec;
        }
    }
    ctx->pc = 0x3938E0u;
label_3938e0:
    // 0x3938e0: 0x9202010e  lbu         $v0, 0x10E($s0)
    ctx->pc = 0x3938e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 270)));
label_3938e4:
    // 0x3938e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3938e8:
    if (ctx->pc == 0x3938E8u) {
        ctx->pc = 0x3938ECu;
        goto label_3938ec;
    }
    ctx->pc = 0x3938E4u;
    {
        const bool branch_taken_0x3938e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3938e4) {
            ctx->pc = 0x3938F0u;
            goto label_3938f0;
        }
    }
    ctx->pc = 0x3938ECu;
label_3938ec:
    // 0x3938ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3938ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3938f0:
    // 0x3938f0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_3938f4:
    if (ctx->pc == 0x3938F4u) {
        ctx->pc = 0x3938F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938F0u;
        // 0x3938f4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938F8u;
        goto label_3938f8;
    }
    ctx->pc = 0x3938F0u;
    {
        const bool branch_taken_0x3938f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938F0u;
        // 0x3938f4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938f0) {
            ctx->pc = 0x393974u;
            goto label_393974;
        }
    }
    ctx->pc = 0x3938F8u;
label_3938f8:
    // 0x3938f8: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x3938f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_3938fc:
    // 0x3938fc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3938fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_393900:
    // 0x393900: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_393904:
    if (ctx->pc == 0x393904u) {
        ctx->pc = 0x393904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393900u;
        // 0x393904: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393908u;
        goto label_393908;
    }
    ctx->pc = 0x393900u;
    {
        const bool branch_taken_0x393900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393900u;
        // 0x393904: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393900) {
            ctx->pc = 0x393924u;
            goto label_393924;
        }
    }
    ctx->pc = 0x393908u;
label_393908:
    // 0x393908: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x393908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39390c:
    // 0x39390c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x39390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_393910:
    // 0x393910: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x393910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_393914:
    // 0x393914: 0xc13b652  jal         func_4ED948
label_393918:
    if (ctx->pc == 0x393918u) {
        ctx->pc = 0x393918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393914u;
        // 0x393918: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39391Cu;
        goto label_39391c;
    }
    ctx->pc = 0x393914u;
    SET_GPR_U32(ctx, 31, 0x39391Cu);
    ctx->pc = 0x393918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393914u;
    // 0x393918: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x393914u, 0x39391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39391Cu;
label_39391c:
    // 0x39391c: 0x10000015  b           . + 4 + (0x15 << 2)
label_393920:
    if (ctx->pc == 0x393920u) {
        ctx->pc = 0x393920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39391Cu;
        // 0x393920: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393924u;
        goto label_393924;
    }
    ctx->pc = 0x39391Cu;
    {
        const bool branch_taken_0x39391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39391Cu;
        // 0x393920: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39391c) {
            ctx->pc = 0x393974u;
            goto label_393974;
        }
    }
    ctx->pc = 0x393924u;
label_393924:
    // 0x393924: 0xc087502  jal         func_21D408
label_393928:
    if (ctx->pc == 0x393928u) {
        ctx->pc = 0x393928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393924u;
        // 0x393928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39392Cu;
        goto label_39392c;
    }
    ctx->pc = 0x393924u;
    SET_GPR_U32(ctx, 31, 0x39392Cu);
    ctx->pc = 0x393928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393924u;
    // 0x393928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x393924u, 0x39392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39392Cu;
label_39392c:
    // 0x39392c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393930:
    // 0x393930: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x393930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_393934:
    // 0x393934: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x393934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_393938:
    // 0x393938: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_39393c:
    if (ctx->pc == 0x39393Cu) {
        ctx->pc = 0x39393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393938u;
        // 0x39393c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393940u;
        goto label_393940;
    }
    ctx->pc = 0x393938u;
    {
        const bool branch_taken_0x393938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393938u;
        // 0x39393c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393938) {
            ctx->pc = 0x393974u;
            goto label_393974;
        }
    }
    ctx->pc = 0x393940u;
label_393940:
    // 0x393940: 0xc05959e  jal         func_165678
label_393944:
    if (ctx->pc == 0x393944u) {
        ctx->pc = 0x393944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393940u;
        // 0x393944: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393948u;
        goto label_393948;
    }
    ctx->pc = 0x393940u;
    SET_GPR_U32(ctx, 31, 0x393948u);
    ctx->pc = 0x393944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393940u;
    // 0x393944: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x393940u, 0x393948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393948u;
label_393948:
    // 0x393948: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39394c:
    if (ctx->pc == 0x39394Cu) {
        ctx->pc = 0x39394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393948u;
        // 0x39394c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393950u;
        goto label_393950;
    }
    ctx->pc = 0x393948u;
    {
        const bool branch_taken_0x393948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393948u;
        // 0x39394c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393948) {
            ctx->pc = 0x393974u;
            goto label_393974;
        }
    }
    ctx->pc = 0x393950u;
label_393950:
    // 0x393950: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x393950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_393954:
    // 0x393954: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x393954u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_393958:
    // 0x393958: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39395c:
    if (ctx->pc == 0x39395Cu) {
        ctx->pc = 0x39395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393958u;
        // 0x39395c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393960u;
        goto label_393960;
    }
    ctx->pc = 0x393958u;
    {
        const bool branch_taken_0x393958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393958u;
        // 0x39395c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393958) {
            ctx->pc = 0x393974u;
            goto label_393974;
        }
    }
    ctx->pc = 0x393960u;
label_393960:
    // 0x393960: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x393960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_393964:
    // 0x393964: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x393964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_393968:
    // 0x393968: 0xc13ce7a  jal         func_4F39E8
label_39396c:
    if (ctx->pc == 0x39396Cu) {
        ctx->pc = 0x39396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393968u;
        // 0x39396c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393970u;
        goto label_393970;
    }
    ctx->pc = 0x393968u;
    SET_GPR_U32(ctx, 31, 0x393970u);
    ctx->pc = 0x39396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393968u;
    // 0x39396c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x393968u, 0x393970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393970u;
label_393970:
    // 0x393970: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x393970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_393974:
    // 0x393974: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x393974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_393978:
    // 0x393978: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x393978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39397c:
    // 0x39397c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x39397cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_393980:
    // 0x393980: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x393980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_393984:
    // 0x393984: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x393984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_393988:
    // 0x393988: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x393988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39398c:
    // 0x39398c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x39398cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_393990:
    // 0x393990: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x393990u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_393994:
    // 0x393994: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x393994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_393998:
    // 0x393998: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x393998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39399c:
    // 0x39399c: 0x3e00008  jr          $ra
label_3939a0:
    if (ctx->pc == 0x3939A0u) {
        ctx->pc = 0x3939A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39399Cu;
        // 0x3939a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3939A4u;
        goto label_3939a4;
    }
    ctx->pc = 0x39399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3939A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39399Cu;
        // 0x3939a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3939A4u;
label_3939a4:
    // 0x3939a4: 0x0  nop
    ctx->pc = 0x3939a4u;
    // NOP
    ctx->pc = 0x3939a8u;
}
