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

// Function: sub_004644A8
// Address: 0x4644a8 - 0x464978
void sub_004644A8_0x4644a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004644A8_0x4644a8");
#endif

    switch (ctx->pc) {
        case 0x4644a8u: goto label_4644a8;
        case 0x4644acu: goto label_4644ac;
        case 0x4644b0u: goto label_4644b0;
        case 0x4644b4u: goto label_4644b4;
        case 0x4644b8u: goto label_4644b8;
        case 0x4644bcu: goto label_4644bc;
        case 0x4644c0u: goto label_4644c0;
        case 0x4644c4u: goto label_4644c4;
        case 0x4644c8u: goto label_4644c8;
        case 0x4644ccu: goto label_4644cc;
        case 0x4644d0u: goto label_4644d0;
        case 0x4644d4u: goto label_4644d4;
        case 0x4644d8u: goto label_4644d8;
        case 0x4644dcu: goto label_4644dc;
        case 0x4644e0u: goto label_4644e0;
        case 0x4644e4u: goto label_4644e4;
        case 0x4644e8u: goto label_4644e8;
        case 0x4644ecu: goto label_4644ec;
        case 0x4644f0u: goto label_4644f0;
        case 0x4644f4u: goto label_4644f4;
        case 0x4644f8u: goto label_4644f8;
        case 0x4644fcu: goto label_4644fc;
        case 0x464500u: goto label_464500;
        case 0x464504u: goto label_464504;
        case 0x464508u: goto label_464508;
        case 0x46450cu: goto label_46450c;
        case 0x464510u: goto label_464510;
        case 0x464514u: goto label_464514;
        case 0x464518u: goto label_464518;
        case 0x46451cu: goto label_46451c;
        case 0x464520u: goto label_464520;
        case 0x464524u: goto label_464524;
        case 0x464528u: goto label_464528;
        case 0x46452cu: goto label_46452c;
        case 0x464530u: goto label_464530;
        case 0x464534u: goto label_464534;
        case 0x464538u: goto label_464538;
        case 0x46453cu: goto label_46453c;
        case 0x464540u: goto label_464540;
        case 0x464544u: goto label_464544;
        case 0x464548u: goto label_464548;
        case 0x46454cu: goto label_46454c;
        case 0x464550u: goto label_464550;
        case 0x464554u: goto label_464554;
        case 0x464558u: goto label_464558;
        case 0x46455cu: goto label_46455c;
        case 0x464560u: goto label_464560;
        case 0x464564u: goto label_464564;
        case 0x464568u: goto label_464568;
        case 0x46456cu: goto label_46456c;
        case 0x464570u: goto label_464570;
        case 0x464574u: goto label_464574;
        case 0x464578u: goto label_464578;
        case 0x46457cu: goto label_46457c;
        case 0x464580u: goto label_464580;
        case 0x464584u: goto label_464584;
        case 0x464588u: goto label_464588;
        case 0x46458cu: goto label_46458c;
        case 0x464590u: goto label_464590;
        case 0x464594u: goto label_464594;
        case 0x464598u: goto label_464598;
        case 0x46459cu: goto label_46459c;
        case 0x4645a0u: goto label_4645a0;
        case 0x4645a4u: goto label_4645a4;
        case 0x4645a8u: goto label_4645a8;
        case 0x4645acu: goto label_4645ac;
        case 0x4645b0u: goto label_4645b0;
        case 0x4645b4u: goto label_4645b4;
        case 0x4645b8u: goto label_4645b8;
        case 0x4645bcu: goto label_4645bc;
        case 0x4645c0u: goto label_4645c0;
        case 0x4645c4u: goto label_4645c4;
        case 0x4645c8u: goto label_4645c8;
        case 0x4645ccu: goto label_4645cc;
        case 0x4645d0u: goto label_4645d0;
        case 0x4645d4u: goto label_4645d4;
        case 0x4645d8u: goto label_4645d8;
        case 0x4645dcu: goto label_4645dc;
        case 0x4645e0u: goto label_4645e0;
        case 0x4645e4u: goto label_4645e4;
        case 0x4645e8u: goto label_4645e8;
        case 0x4645ecu: goto label_4645ec;
        case 0x4645f0u: goto label_4645f0;
        case 0x4645f4u: goto label_4645f4;
        case 0x4645f8u: goto label_4645f8;
        case 0x4645fcu: goto label_4645fc;
        case 0x464600u: goto label_464600;
        case 0x464604u: goto label_464604;
        case 0x464608u: goto label_464608;
        case 0x46460cu: goto label_46460c;
        case 0x464610u: goto label_464610;
        case 0x464614u: goto label_464614;
        case 0x464618u: goto label_464618;
        case 0x46461cu: goto label_46461c;
        case 0x464620u: goto label_464620;
        case 0x464624u: goto label_464624;
        case 0x464628u: goto label_464628;
        case 0x46462cu: goto label_46462c;
        case 0x464630u: goto label_464630;
        case 0x464634u: goto label_464634;
        case 0x464638u: goto label_464638;
        case 0x46463cu: goto label_46463c;
        case 0x464640u: goto label_464640;
        case 0x464644u: goto label_464644;
        case 0x464648u: goto label_464648;
        case 0x46464cu: goto label_46464c;
        case 0x464650u: goto label_464650;
        case 0x464654u: goto label_464654;
        case 0x464658u: goto label_464658;
        case 0x46465cu: goto label_46465c;
        case 0x464660u: goto label_464660;
        case 0x464664u: goto label_464664;
        case 0x464668u: goto label_464668;
        case 0x46466cu: goto label_46466c;
        case 0x464670u: goto label_464670;
        case 0x464674u: goto label_464674;
        case 0x464678u: goto label_464678;
        case 0x46467cu: goto label_46467c;
        case 0x464680u: goto label_464680;
        case 0x464684u: goto label_464684;
        case 0x464688u: goto label_464688;
        case 0x46468cu: goto label_46468c;
        case 0x464690u: goto label_464690;
        case 0x464694u: goto label_464694;
        case 0x464698u: goto label_464698;
        case 0x46469cu: goto label_46469c;
        case 0x4646a0u: goto label_4646a0;
        case 0x4646a4u: goto label_4646a4;
        case 0x4646a8u: goto label_4646a8;
        case 0x4646acu: goto label_4646ac;
        case 0x4646b0u: goto label_4646b0;
        case 0x4646b4u: goto label_4646b4;
        case 0x4646b8u: goto label_4646b8;
        case 0x4646bcu: goto label_4646bc;
        case 0x4646c0u: goto label_4646c0;
        case 0x4646c4u: goto label_4646c4;
        case 0x4646c8u: goto label_4646c8;
        case 0x4646ccu: goto label_4646cc;
        case 0x4646d0u: goto label_4646d0;
        case 0x4646d4u: goto label_4646d4;
        case 0x4646d8u: goto label_4646d8;
        case 0x4646dcu: goto label_4646dc;
        case 0x4646e0u: goto label_4646e0;
        case 0x4646e4u: goto label_4646e4;
        case 0x4646e8u: goto label_4646e8;
        case 0x4646ecu: goto label_4646ec;
        case 0x4646f0u: goto label_4646f0;
        case 0x4646f4u: goto label_4646f4;
        case 0x4646f8u: goto label_4646f8;
        case 0x4646fcu: goto label_4646fc;
        case 0x464700u: goto label_464700;
        case 0x464704u: goto label_464704;
        case 0x464708u: goto label_464708;
        case 0x46470cu: goto label_46470c;
        case 0x464710u: goto label_464710;
        case 0x464714u: goto label_464714;
        case 0x464718u: goto label_464718;
        case 0x46471cu: goto label_46471c;
        case 0x464720u: goto label_464720;
        case 0x464724u: goto label_464724;
        case 0x464728u: goto label_464728;
        case 0x46472cu: goto label_46472c;
        case 0x464730u: goto label_464730;
        case 0x464734u: goto label_464734;
        case 0x464738u: goto label_464738;
        case 0x46473cu: goto label_46473c;
        case 0x464740u: goto label_464740;
        case 0x464744u: goto label_464744;
        case 0x464748u: goto label_464748;
        case 0x46474cu: goto label_46474c;
        case 0x464750u: goto label_464750;
        case 0x464754u: goto label_464754;
        case 0x464758u: goto label_464758;
        case 0x46475cu: goto label_46475c;
        case 0x464760u: goto label_464760;
        case 0x464764u: goto label_464764;
        case 0x464768u: goto label_464768;
        case 0x46476cu: goto label_46476c;
        case 0x464770u: goto label_464770;
        case 0x464774u: goto label_464774;
        case 0x464778u: goto label_464778;
        case 0x46477cu: goto label_46477c;
        case 0x464780u: goto label_464780;
        case 0x464784u: goto label_464784;
        case 0x464788u: goto label_464788;
        case 0x46478cu: goto label_46478c;
        case 0x464790u: goto label_464790;
        case 0x464794u: goto label_464794;
        case 0x464798u: goto label_464798;
        case 0x46479cu: goto label_46479c;
        case 0x4647a0u: goto label_4647a0;
        case 0x4647a4u: goto label_4647a4;
        case 0x4647a8u: goto label_4647a8;
        case 0x4647acu: goto label_4647ac;
        case 0x4647b0u: goto label_4647b0;
        case 0x4647b4u: goto label_4647b4;
        case 0x4647b8u: goto label_4647b8;
        case 0x4647bcu: goto label_4647bc;
        case 0x4647c0u: goto label_4647c0;
        case 0x4647c4u: goto label_4647c4;
        case 0x4647c8u: goto label_4647c8;
        case 0x4647ccu: goto label_4647cc;
        case 0x4647d0u: goto label_4647d0;
        case 0x4647d4u: goto label_4647d4;
        case 0x4647d8u: goto label_4647d8;
        case 0x4647dcu: goto label_4647dc;
        case 0x4647e0u: goto label_4647e0;
        case 0x4647e4u: goto label_4647e4;
        case 0x4647e8u: goto label_4647e8;
        case 0x4647ecu: goto label_4647ec;
        case 0x4647f0u: goto label_4647f0;
        case 0x4647f4u: goto label_4647f4;
        case 0x4647f8u: goto label_4647f8;
        case 0x4647fcu: goto label_4647fc;
        case 0x464800u: goto label_464800;
        case 0x464804u: goto label_464804;
        case 0x464808u: goto label_464808;
        case 0x46480cu: goto label_46480c;
        case 0x464810u: goto label_464810;
        case 0x464814u: goto label_464814;
        case 0x464818u: goto label_464818;
        case 0x46481cu: goto label_46481c;
        case 0x464820u: goto label_464820;
        case 0x464824u: goto label_464824;
        case 0x464828u: goto label_464828;
        case 0x46482cu: goto label_46482c;
        case 0x464830u: goto label_464830;
        case 0x464834u: goto label_464834;
        case 0x464838u: goto label_464838;
        case 0x46483cu: goto label_46483c;
        case 0x464840u: goto label_464840;
        case 0x464844u: goto label_464844;
        case 0x464848u: goto label_464848;
        case 0x46484cu: goto label_46484c;
        case 0x464850u: goto label_464850;
        case 0x464854u: goto label_464854;
        case 0x464858u: goto label_464858;
        case 0x46485cu: goto label_46485c;
        case 0x464860u: goto label_464860;
        case 0x464864u: goto label_464864;
        case 0x464868u: goto label_464868;
        case 0x46486cu: goto label_46486c;
        case 0x464870u: goto label_464870;
        case 0x464874u: goto label_464874;
        case 0x464878u: goto label_464878;
        case 0x46487cu: goto label_46487c;
        case 0x464880u: goto label_464880;
        case 0x464884u: goto label_464884;
        case 0x464888u: goto label_464888;
        case 0x46488cu: goto label_46488c;
        case 0x464890u: goto label_464890;
        case 0x464894u: goto label_464894;
        case 0x464898u: goto label_464898;
        case 0x46489cu: goto label_46489c;
        case 0x4648a0u: goto label_4648a0;
        case 0x4648a4u: goto label_4648a4;
        case 0x4648a8u: goto label_4648a8;
        case 0x4648acu: goto label_4648ac;
        case 0x4648b0u: goto label_4648b0;
        case 0x4648b4u: goto label_4648b4;
        case 0x4648b8u: goto label_4648b8;
        case 0x4648bcu: goto label_4648bc;
        case 0x4648c0u: goto label_4648c0;
        case 0x4648c4u: goto label_4648c4;
        case 0x4648c8u: goto label_4648c8;
        case 0x4648ccu: goto label_4648cc;
        case 0x4648d0u: goto label_4648d0;
        case 0x4648d4u: goto label_4648d4;
        case 0x4648d8u: goto label_4648d8;
        case 0x4648dcu: goto label_4648dc;
        case 0x4648e0u: goto label_4648e0;
        case 0x4648e4u: goto label_4648e4;
        case 0x4648e8u: goto label_4648e8;
        case 0x4648ecu: goto label_4648ec;
        case 0x4648f0u: goto label_4648f0;
        case 0x4648f4u: goto label_4648f4;
        case 0x4648f8u: goto label_4648f8;
        case 0x4648fcu: goto label_4648fc;
        case 0x464900u: goto label_464900;
        case 0x464904u: goto label_464904;
        case 0x464908u: goto label_464908;
        case 0x46490cu: goto label_46490c;
        case 0x464910u: goto label_464910;
        case 0x464914u: goto label_464914;
        case 0x464918u: goto label_464918;
        case 0x46491cu: goto label_46491c;
        case 0x464920u: goto label_464920;
        case 0x464924u: goto label_464924;
        case 0x464928u: goto label_464928;
        case 0x46492cu: goto label_46492c;
        case 0x464930u: goto label_464930;
        case 0x464934u: goto label_464934;
        case 0x464938u: goto label_464938;
        case 0x46493cu: goto label_46493c;
        case 0x464940u: goto label_464940;
        case 0x464944u: goto label_464944;
        case 0x464948u: goto label_464948;
        case 0x46494cu: goto label_46494c;
        case 0x464950u: goto label_464950;
        case 0x464954u: goto label_464954;
        case 0x464958u: goto label_464958;
        case 0x46495cu: goto label_46495c;
        case 0x464960u: goto label_464960;
        case 0x464964u: goto label_464964;
        case 0x464968u: goto label_464968;
        case 0x46496cu: goto label_46496c;
        case 0x464970u: goto label_464970;
        case 0x464974u: goto label_464974;
        default: break;
    }

    ctx->pc = 0x4644a8u;

label_4644a8:
    // 0x4644a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4644a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4644ac:
    // 0x4644ac: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4644acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_4644b0:
    // 0x4644b0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x4644b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_4644b4:
    // 0x4644b4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4644b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_4644b8:
    // 0x4644b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4644b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4644bc:
    // 0x4644bc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4644bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_4644c0:
    // 0x4644c0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4644c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4644c4:
    // 0x4644c4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4644c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_4644c8:
    // 0x4644c8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4644c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4644cc:
    // 0x4644cc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4644ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4644d0:
    // 0x4644d0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x4644d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_4644d4:
    // 0x4644d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4644d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4644d8:
    // 0x4644d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4644d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_4644dc:
    // 0x4644dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4644dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4644e0:
    // 0x4644e0: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_4644e4:
    if (ctx->pc == 0x4644E4u) {
        ctx->pc = 0x4644E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4644E0u;
        // 0x4644e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4644E8u;
        goto label_4644e8;
    }
    ctx->pc = 0x4644E0u;
    {
        const bool branch_taken_0x4644e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4644E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4644E0u;
        // 0x4644e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4644e0) {
            ctx->pc = 0x464530u;
            goto label_464530;
        }
    }
    ctx->pc = 0x4644E8u;
label_4644e8:
    // 0x4644e8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4644ec:
    // 0x4644ec: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4644ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_4644f0:
    // 0x4644f0: 0x8c62ae30  lw          $v0, -0x51D0($v1)
    ctx->pc = 0x4644f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946352)));
label_4644f4:
    // 0x4644f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4644f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4644f8:
    // 0x4644f8: 0x8cc4e618  lw          $a0, -0x19E8($a2)
    ctx->pc = 0x4644f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960664)));
label_4644fc:
    // 0x4644fc: 0x40f809  jalr        $v0
label_464500:
    if (ctx->pc == 0x464500u) {
        ctx->pc = 0x464500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4644FCu;
        // 0x464500: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x464504u;
        goto label_464504;
    }
    ctx->pc = 0x4644FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x464504u);
        ctx->pc = 0x464500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4644FCu;
        // 0x464500: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4644FCu, 0x464504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x464504u;
label_464504:
    // 0x464504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464508:
    // 0x464508: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_46450c:
    if (ctx->pc == 0x46450Cu) {
        ctx->pc = 0x46450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464508u;
        // 0x46450c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464510u;
        goto label_464510;
    }
    ctx->pc = 0x464508u;
    {
        const bool branch_taken_0x464508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x46450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464508u;
        // 0x46450c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464508) {
            ctx->pc = 0x464518u;
            goto label_464518;
        }
    }
    ctx->pc = 0x464510u;
label_464510:
    // 0x464510: 0x10000008  b           . + 4 + (0x8 << 2)
label_464514:
    if (ctx->pc == 0x464514u) {
        ctx->pc = 0x464514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464510u;
        // 0x464514: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464518u;
        goto label_464518;
    }
    ctx->pc = 0x464510u;
    {
        const bool branch_taken_0x464510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464510u;
        // 0x464514: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464510) {
            ctx->pc = 0x464534u;
            goto label_464534;
        }
    }
    ctx->pc = 0x464518u;
label_464518:
    // 0x464518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46451c:
    // 0x46451c: 0xc10c1fa  jal         func_4307E8
label_464520:
    if (ctx->pc == 0x464520u) {
        ctx->pc = 0x464520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46451Cu;
        // 0x464520: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464524u;
        goto label_464524;
    }
    ctx->pc = 0x46451Cu;
    SET_GPR_U32(ctx, 31, 0x464524u);
    ctx->pc = 0x464520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46451Cu;
    // 0x464520: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46451Cu, 0x464524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464524u;
label_464524:
    // 0x464524: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x464524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_464528:
    // 0x464528: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x464528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_46452c:
    // 0x46452c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x46452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_464530:
    // 0x464530: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x464530u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464534:
    // 0x464534: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
label_464538:
    if (ctx->pc == 0x464538u) {
        ctx->pc = 0x464538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464534u;
        // 0x464538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46453Cu;
        goto label_46453c;
    }
    ctx->pc = 0x464534u;
    {
        const bool branch_taken_0x464534 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x464538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464534u;
        // 0x464538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464534) {
            ctx->pc = 0x4646F8u;
            goto label_4646f8;
        }
    }
    ctx->pc = 0x46453Cu;
label_46453c:
    // 0x46453c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x46453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_464540:
    // 0x464540: 0xc11ef80  jal         func_47BE00
label_464544:
    if (ctx->pc == 0x464544u) {
        ctx->pc = 0x464544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464540u;
        // 0x464544: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464548u;
        goto label_464548;
    }
    ctx->pc = 0x464540u;
    SET_GPR_U32(ctx, 31, 0x464548u);
    ctx->pc = 0x464544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464540u;
    // 0x464544: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x464540u, 0x464548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464548u;
label_464548:
    // 0x464548: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_46454c:
    if (ctx->pc == 0x46454Cu) {
        ctx->pc = 0x46454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464548u;
        // 0x46454c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464550u;
        goto label_464550;
    }
    ctx->pc = 0x464548u;
    {
        const bool branch_taken_0x464548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464548u;
        // 0x46454c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464548) {
            ctx->pc = 0x4646F8u;
            goto label_4646f8;
        }
    }
    ctx->pc = 0x464550u;
label_464550:
    // 0x464550: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x464550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_464554:
    // 0x464554: 0xc1193d8  jal         func_464F60
label_464558:
    if (ctx->pc == 0x464558u) {
        ctx->pc = 0x464558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464554u;
        // 0x464558: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46455Cu;
        goto label_46455c;
    }
    ctx->pc = 0x464554u;
    SET_GPR_U32(ctx, 31, 0x46455Cu);
    ctx->pc = 0x464558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464554u;
    // 0x464558: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x464F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464F60u, 0x464554u, 0x46455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46455Cu;
label_46455c:
    // 0x46455c: 0x27b70024  addiu       $s7, $sp, 0x24
    ctx->pc = 0x46455cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_464560:
    // 0x464560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464564:
    // 0x464564: 0x0  nop
    ctx->pc = 0x464564u;
    // NOP
label_464568:
    // 0x464568: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x464568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46456c:
    // 0x46456c: 0xc11ef80  jal         func_47BE00
label_464570:
    if (ctx->pc == 0x464570u) {
        ctx->pc = 0x464570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46456Cu;
        // 0x464570: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464574u;
        goto label_464574;
    }
    ctx->pc = 0x46456Cu;
    SET_GPR_U32(ctx, 31, 0x464574u);
    ctx->pc = 0x464570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46456Cu;
    // 0x464570: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46456Cu, 0x464574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464574u;
label_464574:
    // 0x464574: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_464578:
    if (ctx->pc == 0x464578u) {
        ctx->pc = 0x464578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464574u;
        // 0x464578: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46457Cu;
        goto label_46457c;
    }
    ctx->pc = 0x464574u;
    {
        const bool branch_taken_0x464574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464574u;
        // 0x464578: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464574) {
            ctx->pc = 0x4646F8u;
            goto label_4646f8;
        }
    }
    ctx->pc = 0x46457Cu;
label_46457c:
    // 0x46457c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x46457cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_464580:
    // 0x464580: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_464584:
    if (ctx->pc == 0x464584u) {
        ctx->pc = 0x464584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464580u;
        // 0x464584: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464588u;
        goto label_464588;
    }
    ctx->pc = 0x464580u;
    {
        const bool branch_taken_0x464580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464580u;
        // 0x464584: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464580) {
            ctx->pc = 0x464930u;
            goto label_464930;
        }
    }
    ctx->pc = 0x464588u;
label_464588:
    // 0x464588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x464588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46458c:
    // 0x46458c: 0x2442e8a0  addiu       $v0, $v0, -0x1760
    ctx->pc = 0x46458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961312));
label_464590:
    // 0x464590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x464590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_464594:
    // 0x464594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x464594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_464598:
    // 0x464598: 0x800008  jr          $a0
label_46459c:
    if (ctx->pc == 0x46459Cu) {
        ctx->pc = 0x4645A0u;
        goto label_4645a0;
    }
    ctx->pc = 0x464598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4645A0u: goto label_4645a0;
            case 0x46476Cu: goto label_46476c;
            case 0x464860u: goto label_464860;
            case 0x464930u: goto label_464930;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4645A0u;
label_4645a0:
    // 0x4645a0: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x4645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_4645a4:
    // 0x4645a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4645a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4645a8:
    // 0x4645a8: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x4645a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4645ac:
    // 0x4645ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4645acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4645b0:
    // 0x4645b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4645b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4645b4:
    // 0x4645b4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x4645b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_4645b8:
    // 0x4645b8: 0xc11ef6c  jal         func_47BDB0
label_4645bc:
    if (ctx->pc == 0x4645BCu) {
        ctx->pc = 0x4645BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645B8u;
        // 0x4645bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645C0u;
        goto label_4645c0;
    }
    ctx->pc = 0x4645B8u;
    SET_GPR_U32(ctx, 31, 0x4645C0u);
    ctx->pc = 0x4645BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4645B8u;
    // 0x4645bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x4645B8u, 0x4645C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4645C0u;
label_4645c0:
    // 0x4645c0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_4645c4:
    if (ctx->pc == 0x4645C4u) {
        ctx->pc = 0x4645C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645C0u;
        // 0x4645c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645C8u;
        goto label_4645c8;
    }
    ctx->pc = 0x4645C0u;
    {
        const bool branch_taken_0x4645c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4645C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645C0u;
        // 0x4645c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4645c0) {
            ctx->pc = 0x4646F8u;
            goto label_4646f8;
        }
    }
    ctx->pc = 0x4645C8u;
label_4645c8:
    // 0x4645c8: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x4645c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4645cc:
    // 0x4645cc: 0xc11ef80  jal         func_47BE00
label_4645d0:
    if (ctx->pc == 0x4645D0u) {
        ctx->pc = 0x4645D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645CCu;
        // 0x4645d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645D4u;
        goto label_4645d4;
    }
    ctx->pc = 0x4645CCu;
    SET_GPR_U32(ctx, 31, 0x4645D4u);
    ctx->pc = 0x4645D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4645CCu;
    // 0x4645d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4645CCu, 0x4645D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4645D4u;
label_4645d4:
    // 0x4645d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4645d8:
    if (ctx->pc == 0x4645D8u) {
        ctx->pc = 0x4645D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645D4u;
        // 0x4645d8: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645DCu;
        goto label_4645dc;
    }
    ctx->pc = 0x4645D4u;
    {
        const bool branch_taken_0x4645d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4645D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645D4u;
        // 0x4645d8: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4645d4) {
            ctx->pc = 0x464640u;
            goto label_464640;
        }
    }
    ctx->pc = 0x4645DCu;
label_4645dc:
    // 0x4645dc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4645e0:
    if (ctx->pc == 0x4645E0u) {
        ctx->pc = 0x4645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645DCu;
        // 0x4645e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645E4u;
        goto label_4645e4;
    }
    ctx->pc = 0x4645DCu;
    {
        const bool branch_taken_0x4645dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645DCu;
        // 0x4645e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4645dc) {
            ctx->pc = 0x464648u;
            goto label_464648;
        }
    }
    ctx->pc = 0x4645E4u;
label_4645e4:
    // 0x4645e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4645e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4645e8:
    // 0x4645e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4645e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4645ec:
    // 0x4645ec: 0xc11eeae  jal         func_47BAB8
label_4645f0:
    if (ctx->pc == 0x4645F0u) {
        ctx->pc = 0x4645F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645ECu;
        // 0x4645f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645F4u;
        goto label_4645f4;
    }
    ctx->pc = 0x4645ECu;
    SET_GPR_U32(ctx, 31, 0x4645F4u);
    ctx->pc = 0x4645F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4645ECu;
    // 0x4645f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4645ECu, 0x4645F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4645F4u;
label_4645f4:
    // 0x4645f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4645f8:
    if (ctx->pc == 0x4645F8u) {
        ctx->pc = 0x4645F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645F4u;
        // 0x4645f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4645FCu;
        goto label_4645fc;
    }
    ctx->pc = 0x4645F4u;
    {
        const bool branch_taken_0x4645f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4645F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645F4u;
        // 0x4645f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4645f4) {
            ctx->pc = 0x464650u;
            goto label_464650;
        }
    }
    ctx->pc = 0x4645FCu;
label_4645fc:
    // 0x4645fc: 0xc11f014  jal         func_47C050
label_464600:
    if (ctx->pc == 0x464600u) {
        ctx->pc = 0x464600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4645FCu;
        // 0x464600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464604u;
        goto label_464604;
    }
    ctx->pc = 0x4645FCu;
    SET_GPR_U32(ctx, 31, 0x464604u);
    ctx->pc = 0x464600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4645FCu;
    // 0x464600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x4645FCu, 0x464604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464604u;
label_464604:
    // 0x464604: 0xc1203b6  jal         func_480ED8
label_464608:
    if (ctx->pc == 0x464608u) {
        ctx->pc = 0x464608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464604u;
        // 0x464608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46460Cu;
        goto label_46460c;
    }
    ctx->pc = 0x464604u;
    SET_GPR_U32(ctx, 31, 0x46460Cu);
    ctx->pc = 0x464608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464604u;
    // 0x464608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480ED8u, 0x464604u, 0x46460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46460Cu;
label_46460c:
    // 0x46460c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464610:
    // 0x464610: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_464614:
    if (ctx->pc == 0x464614u) {
        ctx->pc = 0x464614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464610u;
        // 0x464614: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464618u;
        goto label_464618;
    }
    ctx->pc = 0x464610u;
    {
        const bool branch_taken_0x464610 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x464614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464610u;
        // 0x464614: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464610) {
            ctx->pc = 0x464650u;
            goto label_464650;
        }
    }
    ctx->pc = 0x464618u;
label_464618:
    // 0x464618: 0xc11f014  jal         func_47C050
label_46461c:
    if (ctx->pc == 0x46461Cu) {
        ctx->pc = 0x46461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464618u;
        // 0x46461c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464620u;
        goto label_464620;
    }
    ctx->pc = 0x464618u;
    SET_GPR_U32(ctx, 31, 0x464620u);
    ctx->pc = 0x46461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464618u;
    // 0x46461c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x464618u, 0x464620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464620u;
label_464620:
    // 0x464620: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x464620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_464624:
    // 0x464624: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x464624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_464628:
    // 0x464628: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_46462c:
    if (ctx->pc == 0x46462Cu) {
        ctx->pc = 0x46462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464628u;
        // 0x46462c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464630u;
        goto label_464630;
    }
    ctx->pc = 0x464628u;
    {
        const bool branch_taken_0x464628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x46462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464628u;
        // 0x46462c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464628) {
            ctx->pc = 0x46464Cu;
            goto label_46464c;
        }
    }
    ctx->pc = 0x464630u;
label_464630:
    // 0x464630: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_464634:
    if (ctx->pc == 0x464634u) {
        ctx->pc = 0x464634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464630u;
        // 0x464634: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464638u;
        goto label_464638;
    }
    ctx->pc = 0x464630u;
    {
        const bool branch_taken_0x464630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x464634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464630u;
        // 0x464634: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464630) {
            ctx->pc = 0x464650u;
            goto label_464650;
        }
    }
    ctx->pc = 0x464638u;
label_464638:
    // 0x464638: 0xc11f024  jal         func_47C090
label_46463c:
    if (ctx->pc == 0x46463Cu) {
        ctx->pc = 0x46463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464638u;
        // 0x46463c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464640u;
        goto label_464640;
    }
    ctx->pc = 0x464638u;
    SET_GPR_U32(ctx, 31, 0x464640u);
    ctx->pc = 0x46463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464638u;
    // 0x46463c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x464638u, 0x464640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464640u;
label_464640:
    // 0x464640: 0x10000003  b           . + 4 + (0x3 << 2)
label_464644:
    if (ctx->pc == 0x464644u) {
        ctx->pc = 0x464644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464640u;
        // 0x464644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464648u;
        goto label_464648;
    }
    ctx->pc = 0x464640u;
    {
        const bool branch_taken_0x464640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464640u;
        // 0x464644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464640) {
            ctx->pc = 0x464650u;
            goto label_464650;
        }
    }
    ctx->pc = 0x464648u;
label_464648:
    // 0x464648: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x464648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46464c:
    // 0x46464c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46464cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464650:
    // 0x464650: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_464654:
    if (ctx->pc == 0x464654u) {
        ctx->pc = 0x464654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464650u;
        // 0x464654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464658u;
        goto label_464658;
    }
    ctx->pc = 0x464650u;
    {
        const bool branch_taken_0x464650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464650u;
        // 0x464654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464650) {
            ctx->pc = 0x4646F8u;
            goto label_4646f8;
        }
    }
    ctx->pc = 0x464658u;
label_464658:
    // 0x464658: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x464658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_46465c:
    // 0x46465c: 0xc11ef80  jal         func_47BE00
label_464660:
    if (ctx->pc == 0x464660u) {
        ctx->pc = 0x464660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46465Cu;
        // 0x464660: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464664u;
        goto label_464664;
    }
    ctx->pc = 0x46465Cu;
    SET_GPR_U32(ctx, 31, 0x464664u);
    ctx->pc = 0x464660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46465Cu;
    // 0x464660: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46465Cu, 0x464664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464664u;
label_464664:
    // 0x464664: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_464668:
    if (ctx->pc == 0x464668u) {
        ctx->pc = 0x464668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464664u;
        // 0x464668: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46466Cu;
        goto label_46466c;
    }
    ctx->pc = 0x464664u;
    {
        const bool branch_taken_0x464664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464664u;
        // 0x464668: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464664) {
            ctx->pc = 0x4646D0u;
            goto label_4646d0;
        }
    }
    ctx->pc = 0x46466Cu;
label_46466c:
    // 0x46466c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_464670:
    if (ctx->pc == 0x464670u) {
        ctx->pc = 0x464670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46466Cu;
        // 0x464670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464674u;
        goto label_464674;
    }
    ctx->pc = 0x46466Cu;
    {
        const bool branch_taken_0x46466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46466Cu;
        // 0x464670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46466c) {
            ctx->pc = 0x4646D8u;
            goto label_4646d8;
        }
    }
    ctx->pc = 0x464674u;
label_464674:
    // 0x464674: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x464674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_464678:
    // 0x464678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x464678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46467c:
    // 0x46467c: 0xc11eeae  jal         func_47BAB8
label_464680:
    if (ctx->pc == 0x464680u) {
        ctx->pc = 0x464680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46467Cu;
        // 0x464680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464684u;
        goto label_464684;
    }
    ctx->pc = 0x46467Cu;
    SET_GPR_U32(ctx, 31, 0x464684u);
    ctx->pc = 0x464680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46467Cu;
    // 0x464680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46467Cu, 0x464684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464684u;
label_464684:
    // 0x464684: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_464688:
    if (ctx->pc == 0x464688u) {
        ctx->pc = 0x464688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464684u;
        // 0x464688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46468Cu;
        goto label_46468c;
    }
    ctx->pc = 0x464684u;
    {
        const bool branch_taken_0x464684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464684u;
        // 0x464688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464684) {
            ctx->pc = 0x4646E0u;
            goto label_4646e0;
        }
    }
    ctx->pc = 0x46468Cu;
label_46468c:
    // 0x46468c: 0xc11f014  jal         func_47C050
label_464690:
    if (ctx->pc == 0x464690u) {
        ctx->pc = 0x464690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46468Cu;
        // 0x464690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464694u;
        goto label_464694;
    }
    ctx->pc = 0x46468Cu;
    SET_GPR_U32(ctx, 31, 0x464694u);
    ctx->pc = 0x464690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46468Cu;
    // 0x464690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x46468Cu, 0x464694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464694u;
label_464694:
    // 0x464694: 0xc1203b6  jal         func_480ED8
label_464698:
    if (ctx->pc == 0x464698u) {
        ctx->pc = 0x464698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464694u;
        // 0x464698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46469Cu;
        goto label_46469c;
    }
    ctx->pc = 0x464694u;
    SET_GPR_U32(ctx, 31, 0x46469Cu);
    ctx->pc = 0x464698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464694u;
    // 0x464698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480ED8u, 0x464694u, 0x46469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46469Cu;
label_46469c:
    // 0x46469c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x46469cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4646a0:
    // 0x4646a0: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_4646a4:
    if (ctx->pc == 0x4646A4u) {
        ctx->pc = 0x4646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646A0u;
        // 0x4646a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646A8u;
        goto label_4646a8;
    }
    ctx->pc = 0x4646A0u;
    {
        const bool branch_taken_0x4646a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646A0u;
        // 0x4646a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4646a0) {
            ctx->pc = 0x4646E0u;
            goto label_4646e0;
        }
    }
    ctx->pc = 0x4646A8u;
label_4646a8:
    // 0x4646a8: 0xc11f014  jal         func_47C050
label_4646ac:
    if (ctx->pc == 0x4646ACu) {
        ctx->pc = 0x4646ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646A8u;
        // 0x4646ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646B0u;
        goto label_4646b0;
    }
    ctx->pc = 0x4646A8u;
    SET_GPR_U32(ctx, 31, 0x4646B0u);
    ctx->pc = 0x4646ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4646A8u;
    // 0x4646ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x4646A8u, 0x4646B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4646B0u;
label_4646b0:
    // 0x4646b0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4646b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4646b4:
    // 0x4646b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4646b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4646b8:
    // 0x4646b8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4646bc:
    if (ctx->pc == 0x4646BCu) {
        ctx->pc = 0x4646BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646B8u;
        // 0x4646bc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646C0u;
        goto label_4646c0;
    }
    ctx->pc = 0x4646B8u;
    {
        const bool branch_taken_0x4646b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4646BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646B8u;
        // 0x4646bc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4646b8) {
            ctx->pc = 0x4646DCu;
            goto label_4646dc;
        }
    }
    ctx->pc = 0x4646C0u;
label_4646c0:
    // 0x4646c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_4646c4:
    if (ctx->pc == 0x4646C4u) {
        ctx->pc = 0x4646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646C0u;
        // 0x4646c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646C8u;
        goto label_4646c8;
    }
    ctx->pc = 0x4646C0u;
    {
        const bool branch_taken_0x4646c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646C0u;
        // 0x4646c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4646c0) {
            ctx->pc = 0x4646E0u;
            goto label_4646e0;
        }
    }
    ctx->pc = 0x4646C8u;
label_4646c8:
    // 0x4646c8: 0xc11f024  jal         func_47C090
label_4646cc:
    if (ctx->pc == 0x4646CCu) {
        ctx->pc = 0x4646CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646C8u;
        // 0x4646cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646D0u;
        goto label_4646d0;
    }
    ctx->pc = 0x4646C8u;
    SET_GPR_U32(ctx, 31, 0x4646D0u);
    ctx->pc = 0x4646CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4646C8u;
    // 0x4646cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4646C8u, 0x4646D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4646D0u;
label_4646d0:
    // 0x4646d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4646d4:
    if (ctx->pc == 0x4646D4u) {
        ctx->pc = 0x4646D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646D0u;
        // 0x4646d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646D8u;
        goto label_4646d8;
    }
    ctx->pc = 0x4646D0u;
    {
        const bool branch_taken_0x4646d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4646D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646D0u;
        // 0x4646d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4646d0) {
            ctx->pc = 0x4646E0u;
            goto label_4646e0;
        }
    }
    ctx->pc = 0x4646D8u;
label_4646d8:
    // 0x4646d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4646d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4646dc:
    // 0x4646dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4646dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4646e0:
    // 0x4646e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4646e4:
    if (ctx->pc == 0x4646E4u) {
        ctx->pc = 0x4646E8u;
        goto label_4646e8;
    }
    ctx->pc = 0x4646E0u;
    {
        const bool branch_taken_0x4646e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4646e0) {
            ctx->pc = 0x464700u;
            goto label_464700;
        }
    }
    ctx->pc = 0x4646E8u;
label_4646e8:
    // 0x4646e8: 0x12000097  beqz        $s0, . + 4 + (0x97 << 2)
label_4646ec:
    if (ctx->pc == 0x4646ECu) {
        ctx->pc = 0x4646ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646E8u;
        // 0x4646ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646F0u;
        goto label_4646f0;
    }
    ctx->pc = 0x4646E8u;
    {
        const bool branch_taken_0x4646e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4646ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646E8u;
        // 0x4646ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4646e8) {
            ctx->pc = 0x464948u;
            goto label_464948;
        }
    }
    ctx->pc = 0x4646F0u;
label_4646f0:
    // 0x4646f0: 0xc122364  jal         func_488D90
label_4646f4:
    if (ctx->pc == 0x4646F4u) {
        ctx->pc = 0x4646F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646F0u;
        // 0x4646f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4646F8u;
        goto label_4646f8;
    }
    ctx->pc = 0x4646F0u;
    SET_GPR_U32(ctx, 31, 0x4646F8u);
    ctx->pc = 0x4646F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4646F0u;
    // 0x4646f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x4646F0u, 0x4646F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4646F8u;
label_4646f8:
    // 0x4646f8: 0x10000093  b           . + 4 + (0x93 << 2)
label_4646fc:
    if (ctx->pc == 0x4646FCu) {
        ctx->pc = 0x4646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646F8u;
        // 0x4646fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464700u;
        goto label_464700;
    }
    ctx->pc = 0x4646F8u;
    {
        const bool branch_taken_0x4646f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4646F8u;
        // 0x4646fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4646f8) {
            ctx->pc = 0x464948u;
            goto label_464948;
        }
    }
    ctx->pc = 0x464700u;
label_464700:
    // 0x464700: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_464704:
    if (ctx->pc == 0x464704u) {
        ctx->pc = 0x464708u;
        goto label_464708;
    }
    ctx->pc = 0x464700u;
    {
        const bool branch_taken_0x464700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x464700) {
            ctx->pc = 0x464730u;
            goto label_464730;
        }
    }
    ctx->pc = 0x464708u;
label_464708:
    // 0x464708: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x464708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_46470c:
    // 0x46470c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x46470cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_464710:
    // 0x464710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x464710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_464714:
    // 0x464714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x464714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464718:
    // 0x464718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x464718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46471c:
    // 0x46471c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x46471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464720:
    // 0x464720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x464720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_464724:
    // 0x464724: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x464724u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_464728:
    // 0x464728: 0x1000000b  b           . + 4 + (0xB << 2)
label_46472c:
    if (ctx->pc == 0x46472Cu) {
        ctx->pc = 0x46472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464728u;
        // 0x46472c: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x464730u;
        goto label_464730;
    }
    ctx->pc = 0x464728u;
    {
        const bool branch_taken_0x464728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464728u;
        // 0x46472c: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x464728) {
            ctx->pc = 0x464758u;
            goto label_464758;
        }
    }
    ctx->pc = 0x464730u;
label_464730:
    // 0x464730: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_464734:
    if (ctx->pc == 0x464734u) {
        ctx->pc = 0x464734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464730u;
        // 0x464734: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464738u;
        goto label_464738;
    }
    ctx->pc = 0x464730u;
    {
        const bool branch_taken_0x464730 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x464734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464730u;
        // 0x464734: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464730) {
            ctx->pc = 0x464750u;
            goto label_464750;
        }
    }
    ctx->pc = 0x464738u;
label_464738:
    // 0x464738: 0xc119432  jal         func_4650C8
label_46473c:
    if (ctx->pc == 0x46473Cu) {
        ctx->pc = 0x46473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464738u;
        // 0x46473c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464740u;
        goto label_464740;
    }
    ctx->pc = 0x464738u;
    SET_GPR_U32(ctx, 31, 0x464740u);
    ctx->pc = 0x46473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464738u;
    // 0x46473c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4650C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4650C8u, 0x464738u, 0x464740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464740u;
label_464740:
    // 0x464740: 0xc122364  jal         func_488D90
label_464744:
    if (ctx->pc == 0x464744u) {
        ctx->pc = 0x464744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464740u;
        // 0x464744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464748u;
        goto label_464748;
    }
    ctx->pc = 0x464740u;
    SET_GPR_U32(ctx, 31, 0x464748u);
    ctx->pc = 0x464744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464740u;
    // 0x464744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x464740u, 0x464748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464748u;
label_464748:
    // 0x464748: 0x10000004  b           . + 4 + (0x4 << 2)
label_46474c:
    if (ctx->pc == 0x46474Cu) {
        ctx->pc = 0x46474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464748u;
        // 0x46474c: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x464750u;
        goto label_464750;
    }
    ctx->pc = 0x464748u;
    {
        const bool branch_taken_0x464748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464748u;
        // 0x46474c: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x464748) {
            ctx->pc = 0x46475Cu;
            goto label_46475c;
        }
    }
    ctx->pc = 0x464750u;
label_464750:
    // 0x464750: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x464750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_464754:
    // 0x464754: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x464754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_464758:
    // 0x464758: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x464758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46475c:
    // 0x46475c: 0xc119512  jal         func_465448
label_464760:
    if (ctx->pc == 0x464760u) {
        ctx->pc = 0x464760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46475Cu;
        // 0x464760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464764u;
        goto label_464764;
    }
    ctx->pc = 0x46475Cu;
    SET_GPR_U32(ctx, 31, 0x464764u);
    ctx->pc = 0x464760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46475Cu;
    // 0x464760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465448u, 0x46475Cu, 0x464764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464764u;
label_464764:
    // 0x464764: 0x10000073  b           . + 4 + (0x73 << 2)
label_464768:
    if (ctx->pc == 0x464768u) {
        ctx->pc = 0x464768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464764u;
        // 0x464768: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46476Cu;
        goto label_46476c;
    }
    ctx->pc = 0x464764u;
    {
        const bool branch_taken_0x464764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464764u;
        // 0x464768: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464764) {
            ctx->pc = 0x464934u;
            goto label_464934;
        }
    }
    ctx->pc = 0x46476Cu;
label_46476c:
    // 0x46476c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46476cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464770:
    // 0x464770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464774:
    // 0x464774: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x464774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_464778:
    // 0x464778: 0xc11ef6c  jal         func_47BDB0
label_46477c:
    if (ctx->pc == 0x46477Cu) {
        ctx->pc = 0x46477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464778u;
        // 0x46477c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464780u;
        goto label_464780;
    }
    ctx->pc = 0x464778u;
    SET_GPR_U32(ctx, 31, 0x464780u);
    ctx->pc = 0x46477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464778u;
    // 0x46477c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x464778u, 0x464780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464780u;
label_464780:
    // 0x464780: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_464784:
    if (ctx->pc == 0x464784u) {
        ctx->pc = 0x464784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464780u;
        // 0x464784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464788u;
        goto label_464788;
    }
    ctx->pc = 0x464780u;
    {
        const bool branch_taken_0x464780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464780u;
        // 0x464784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464780) {
            ctx->pc = 0x4646F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4646f8;
        }
    }
    ctx->pc = 0x464788u;
label_464788:
    // 0x464788: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x464788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_46478c:
    // 0x46478c: 0xc11ef80  jal         func_47BE00
label_464790:
    if (ctx->pc == 0x464790u) {
        ctx->pc = 0x464790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46478Cu;
        // 0x464790: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464794u;
        goto label_464794;
    }
    ctx->pc = 0x46478Cu;
    SET_GPR_U32(ctx, 31, 0x464794u);
    ctx->pc = 0x464790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46478Cu;
    // 0x464790: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46478Cu, 0x464794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464794u;
label_464794:
    // 0x464794: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
label_464798:
    if (ctx->pc == 0x464798u) {
        ctx->pc = 0x464798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464794u;
        // 0x464798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46479Cu;
        goto label_46479c;
    }
    ctx->pc = 0x464794u;
    {
        const bool branch_taken_0x464794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464794u;
        // 0x464798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464794) {
            ctx->pc = 0x4646F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4646f8;
        }
    }
    ctx->pc = 0x46479Cu;
label_46479c:
    // 0x46479c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x46479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4647a0:
    // 0x4647a0: 0xc11ef80  jal         func_47BE00
label_4647a4:
    if (ctx->pc == 0x4647A4u) {
        ctx->pc = 0x4647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647A0u;
        // 0x4647a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647A8u;
        goto label_4647a8;
    }
    ctx->pc = 0x4647A0u;
    SET_GPR_U32(ctx, 31, 0x4647A8u);
    ctx->pc = 0x4647A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4647A0u;
    // 0x4647a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4647A0u, 0x4647A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4647A8u;
label_4647a8:
    // 0x4647a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4647ac:
    if (ctx->pc == 0x4647ACu) {
        ctx->pc = 0x4647ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647A8u;
        // 0x4647ac: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647B0u;
        goto label_4647b0;
    }
    ctx->pc = 0x4647A8u;
    {
        const bool branch_taken_0x4647a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4647ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647A8u;
        // 0x4647ac: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4647a8) {
            ctx->pc = 0x464814u;
            goto label_464814;
        }
    }
    ctx->pc = 0x4647B0u;
label_4647b0:
    // 0x4647b0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4647b4:
    if (ctx->pc == 0x4647B4u) {
        ctx->pc = 0x4647B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647B0u;
        // 0x4647b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647B8u;
        goto label_4647b8;
    }
    ctx->pc = 0x4647B0u;
    {
        const bool branch_taken_0x4647b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4647B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647B0u;
        // 0x4647b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4647b0) {
            ctx->pc = 0x46481Cu;
            goto label_46481c;
        }
    }
    ctx->pc = 0x4647B8u;
label_4647b8:
    // 0x4647b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4647b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4647bc:
    // 0x4647bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4647bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4647c0:
    // 0x4647c0: 0xc11eeae  jal         func_47BAB8
label_4647c4:
    if (ctx->pc == 0x4647C4u) {
        ctx->pc = 0x4647C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647C0u;
        // 0x4647c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647C8u;
        goto label_4647c8;
    }
    ctx->pc = 0x4647C0u;
    SET_GPR_U32(ctx, 31, 0x4647C8u);
    ctx->pc = 0x4647C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4647C0u;
    // 0x4647c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4647C0u, 0x4647C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4647C8u;
label_4647c8:
    // 0x4647c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4647cc:
    if (ctx->pc == 0x4647CCu) {
        ctx->pc = 0x4647CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647C8u;
        // 0x4647cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647D0u;
        goto label_4647d0;
    }
    ctx->pc = 0x4647C8u;
    {
        const bool branch_taken_0x4647c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4647CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647C8u;
        // 0x4647cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4647c8) {
            ctx->pc = 0x464820u;
            goto label_464820;
        }
    }
    ctx->pc = 0x4647D0u;
label_4647d0:
    // 0x4647d0: 0xc11f014  jal         func_47C050
label_4647d4:
    if (ctx->pc == 0x4647D4u) {
        ctx->pc = 0x4647D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647D0u;
        // 0x4647d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647D8u;
        goto label_4647d8;
    }
    ctx->pc = 0x4647D0u;
    SET_GPR_U32(ctx, 31, 0x4647D8u);
    ctx->pc = 0x4647D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4647D0u;
    // 0x4647d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x4647D0u, 0x4647D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4647D8u;
label_4647d8:
    // 0x4647d8: 0xc1203b6  jal         func_480ED8
label_4647dc:
    if (ctx->pc == 0x4647DCu) {
        ctx->pc = 0x4647DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647D8u;
        // 0x4647dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647E0u;
        goto label_4647e0;
    }
    ctx->pc = 0x4647D8u;
    SET_GPR_U32(ctx, 31, 0x4647E0u);
    ctx->pc = 0x4647DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4647D8u;
    // 0x4647dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480ED8u, 0x4647D8u, 0x4647E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4647E0u;
label_4647e0:
    // 0x4647e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4647e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4647e4:
    // 0x4647e4: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_4647e8:
    if (ctx->pc == 0x4647E8u) {
        ctx->pc = 0x4647E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647E4u;
        // 0x4647e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647ECu;
        goto label_4647ec;
    }
    ctx->pc = 0x4647E4u;
    {
        const bool branch_taken_0x4647e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4647E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647E4u;
        // 0x4647e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4647e4) {
            ctx->pc = 0x464820u;
            goto label_464820;
        }
    }
    ctx->pc = 0x4647ECu;
label_4647ec:
    // 0x4647ec: 0xc11f014  jal         func_47C050
label_4647f0:
    if (ctx->pc == 0x4647F0u) {
        ctx->pc = 0x4647F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647ECu;
        // 0x4647f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4647F4u;
        goto label_4647f4;
    }
    ctx->pc = 0x4647ECu;
    SET_GPR_U32(ctx, 31, 0x4647F4u);
    ctx->pc = 0x4647F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4647ECu;
    // 0x4647f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x4647ECu, 0x4647F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4647F4u;
label_4647f4:
    // 0x4647f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4647f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4647f8:
    // 0x4647f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4647f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4647fc:
    // 0x4647fc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_464800:
    if (ctx->pc == 0x464800u) {
        ctx->pc = 0x464800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647FCu;
        // 0x464800: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464804u;
        goto label_464804;
    }
    ctx->pc = 0x4647FCu;
    {
        const bool branch_taken_0x4647fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x464800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4647FCu;
        // 0x464800: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4647fc) {
            ctx->pc = 0x46481Cu;
            goto label_46481c;
        }
    }
    ctx->pc = 0x464804u;
label_464804:
    // 0x464804: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_464808:
    if (ctx->pc == 0x464808u) {
        ctx->pc = 0x464808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464804u;
        // 0x464808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46480Cu;
        goto label_46480c;
    }
    ctx->pc = 0x464804u;
    {
        const bool branch_taken_0x464804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x464808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464804u;
        // 0x464808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464804) {
            ctx->pc = 0x464820u;
            goto label_464820;
        }
    }
    ctx->pc = 0x46480Cu;
label_46480c:
    // 0x46480c: 0xc11f024  jal         func_47C090
label_464810:
    if (ctx->pc == 0x464810u) {
        ctx->pc = 0x464810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46480Cu;
        // 0x464810: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464814u;
        goto label_464814;
    }
    ctx->pc = 0x46480Cu;
    SET_GPR_U32(ctx, 31, 0x464814u);
    ctx->pc = 0x464810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46480Cu;
    // 0x464810: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46480Cu, 0x464814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464814u;
label_464814:
    // 0x464814: 0x10000002  b           . + 4 + (0x2 << 2)
label_464818:
    if (ctx->pc == 0x464818u) {
        ctx->pc = 0x464818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464814u;
        // 0x464818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46481Cu;
        goto label_46481c;
    }
    ctx->pc = 0x464814u;
    {
        const bool branch_taken_0x464814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464814u;
        // 0x464818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464814) {
            ctx->pc = 0x464820u;
            goto label_464820;
        }
    }
    ctx->pc = 0x46481Cu;
label_46481c:
    // 0x46481c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46481cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464820:
    // 0x464820: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_464824:
    if (ctx->pc == 0x464824u) {
        ctx->pc = 0x464824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464820u;
        // 0x464824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464828u;
        goto label_464828;
    }
    ctx->pc = 0x464820u;
    {
        const bool branch_taken_0x464820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464820u;
        // 0x464824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464820) {
            ctx->pc = 0x464948u;
            goto label_464948;
        }
    }
    ctx->pc = 0x464828u;
label_464828:
    // 0x464828: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_46482c:
    if (ctx->pc == 0x46482Cu) {
        ctx->pc = 0x46482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464828u;
        // 0x46482c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464830u;
        goto label_464830;
    }
    ctx->pc = 0x464828u;
    {
        const bool branch_taken_0x464828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464828u;
        // 0x46482c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464828) {
            ctx->pc = 0x464840u;
            goto label_464840;
        }
    }
    ctx->pc = 0x464830u;
label_464830:
    // 0x464830: 0xc11954e  jal         func_465538
label_464834:
    if (ctx->pc == 0x464834u) {
        ctx->pc = 0x464834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464830u;
        // 0x464834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464838u;
        goto label_464838;
    }
    ctx->pc = 0x464830u;
    SET_GPR_U32(ctx, 31, 0x464838u);
    ctx->pc = 0x464834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464830u;
    // 0x464834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465538u, 0x464830u, 0x464838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464838u;
label_464838:
    // 0x464838: 0xc122364  jal         func_488D90
label_46483c:
    if (ctx->pc == 0x46483Cu) {
        ctx->pc = 0x46483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464838u;
        // 0x46483c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464840u;
        goto label_464840;
    }
    ctx->pc = 0x464838u;
    SET_GPR_U32(ctx, 31, 0x464840u);
    ctx->pc = 0x46483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464838u;
    // 0x46483c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x464838u, 0x464840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464840u;
label_464840:
    // 0x464840: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x464840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_464844:
    // 0x464844: 0xc1195a8  jal         func_4656A0
label_464848:
    if (ctx->pc == 0x464848u) {
        ctx->pc = 0x464848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464844u;
        // 0x464848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46484Cu;
        goto label_46484c;
    }
    ctx->pc = 0x464844u;
    SET_GPR_U32(ctx, 31, 0x46484Cu);
    ctx->pc = 0x464848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464844u;
    // 0x464848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4656A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4656A0u, 0x464844u, 0x46484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46484Cu;
label_46484c:
    // 0x46484c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x46484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_464850:
    // 0x464850: 0xc11958c  jal         func_465630
label_464854:
    if (ctx->pc == 0x464854u) {
        ctx->pc = 0x464854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464850u;
        // 0x464854: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464858u;
        goto label_464858;
    }
    ctx->pc = 0x464850u;
    SET_GPR_U32(ctx, 31, 0x464858u);
    ctx->pc = 0x464854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464850u;
    // 0x464854: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465630u, 0x464850u, 0x464858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464858u;
label_464858:
    // 0x464858: 0x10000036  b           . + 4 + (0x36 << 2)
label_46485c:
    if (ctx->pc == 0x46485Cu) {
        ctx->pc = 0x46485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464858u;
        // 0x46485c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464860u;
        goto label_464860;
    }
    ctx->pc = 0x464858u;
    {
        const bool branch_taken_0x464858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464858u;
        // 0x46485c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464858) {
            ctx->pc = 0x464934u;
            goto label_464934;
        }
    }
    ctx->pc = 0x464860u;
label_464860:
    // 0x464860: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x464860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464864:
    // 0x464864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464868:
    // 0x464868: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x464868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46486c:
    // 0x46486c: 0xc11ef80  jal         func_47BE00
label_464870:
    if (ctx->pc == 0x464870u) {
        ctx->pc = 0x464870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46486Cu;
        // 0x464870: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464874u;
        goto label_464874;
    }
    ctx->pc = 0x46486Cu;
    SET_GPR_U32(ctx, 31, 0x464874u);
    ctx->pc = 0x464870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46486Cu;
    // 0x464870: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46486Cu, 0x464874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464874u;
label_464874:
    // 0x464874: 0x1040ffa0  beqz        $v0, . + 4 + (-0x60 << 2)
label_464878:
    if (ctx->pc == 0x464878u) {
        ctx->pc = 0x464878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464874u;
        // 0x464878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46487Cu;
        goto label_46487c;
    }
    ctx->pc = 0x464874u;
    {
        const bool branch_taken_0x464874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464874u;
        // 0x464878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464874) {
            ctx->pc = 0x4646F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4646f8;
        }
    }
    ctx->pc = 0x46487Cu;
label_46487c:
    // 0x46487c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x46487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_464880:
    // 0x464880: 0xc11ef80  jal         func_47BE00
label_464884:
    if (ctx->pc == 0x464884u) {
        ctx->pc = 0x464884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464880u;
        // 0x464884: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464888u;
        goto label_464888;
    }
    ctx->pc = 0x464880u;
    SET_GPR_U32(ctx, 31, 0x464888u);
    ctx->pc = 0x464884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464880u;
    // 0x464884: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x464880u, 0x464888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464888u;
label_464888:
    // 0x464888: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_46488c:
    if (ctx->pc == 0x46488Cu) {
        ctx->pc = 0x46488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464888u;
        // 0x46488c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464890u;
        goto label_464890;
    }
    ctx->pc = 0x464888u;
    {
        const bool branch_taken_0x464888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464888u;
        // 0x46488c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464888) {
            ctx->pc = 0x4648F4u;
            goto label_4648f4;
        }
    }
    ctx->pc = 0x464890u;
label_464890:
    // 0x464890: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_464894:
    if (ctx->pc == 0x464894u) {
        ctx->pc = 0x464894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464890u;
        // 0x464894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464898u;
        goto label_464898;
    }
    ctx->pc = 0x464890u;
    {
        const bool branch_taken_0x464890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464890u;
        // 0x464894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464890) {
            ctx->pc = 0x4648FCu;
            goto label_4648fc;
        }
    }
    ctx->pc = 0x464898u;
label_464898:
    // 0x464898: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x464898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46489c:
    // 0x46489c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46489cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4648a0:
    // 0x4648a0: 0xc11eeae  jal         func_47BAB8
label_4648a4:
    if (ctx->pc == 0x4648A4u) {
        ctx->pc = 0x4648A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648A0u;
        // 0x4648a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648A8u;
        goto label_4648a8;
    }
    ctx->pc = 0x4648A0u;
    SET_GPR_U32(ctx, 31, 0x4648A8u);
    ctx->pc = 0x4648A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4648A0u;
    // 0x4648a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4648A0u, 0x4648A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4648A8u;
label_4648a8:
    // 0x4648a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4648ac:
    if (ctx->pc == 0x4648ACu) {
        ctx->pc = 0x4648ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648A8u;
        // 0x4648ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648B0u;
        goto label_4648b0;
    }
    ctx->pc = 0x4648A8u;
    {
        const bool branch_taken_0x4648a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4648ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648A8u;
        // 0x4648ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4648a8) {
            ctx->pc = 0x464900u;
            goto label_464900;
        }
    }
    ctx->pc = 0x4648B0u;
label_4648b0:
    // 0x4648b0: 0xc11f014  jal         func_47C050
label_4648b4:
    if (ctx->pc == 0x4648B4u) {
        ctx->pc = 0x4648B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648B0u;
        // 0x4648b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648B8u;
        goto label_4648b8;
    }
    ctx->pc = 0x4648B0u;
    SET_GPR_U32(ctx, 31, 0x4648B8u);
    ctx->pc = 0x4648B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4648B0u;
    // 0x4648b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x4648B0u, 0x4648B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4648B8u;
label_4648b8:
    // 0x4648b8: 0xc1203b6  jal         func_480ED8
label_4648bc:
    if (ctx->pc == 0x4648BCu) {
        ctx->pc = 0x4648BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648B8u;
        // 0x4648bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648C0u;
        goto label_4648c0;
    }
    ctx->pc = 0x4648B8u;
    SET_GPR_U32(ctx, 31, 0x4648C0u);
    ctx->pc = 0x4648BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4648B8u;
    // 0x4648bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480ED8u, 0x4648B8u, 0x4648C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4648C0u;
label_4648c0:
    // 0x4648c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4648c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4648c4:
    // 0x4648c4: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_4648c8:
    if (ctx->pc == 0x4648C8u) {
        ctx->pc = 0x4648C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648C4u;
        // 0x4648c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648CCu;
        goto label_4648cc;
    }
    ctx->pc = 0x4648C4u;
    {
        const bool branch_taken_0x4648c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4648C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648C4u;
        // 0x4648c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4648c4) {
            ctx->pc = 0x464900u;
            goto label_464900;
        }
    }
    ctx->pc = 0x4648CCu;
label_4648cc:
    // 0x4648cc: 0xc11f014  jal         func_47C050
label_4648d0:
    if (ctx->pc == 0x4648D0u) {
        ctx->pc = 0x4648D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648CCu;
        // 0x4648d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648D4u;
        goto label_4648d4;
    }
    ctx->pc = 0x4648CCu;
    SET_GPR_U32(ctx, 31, 0x4648D4u);
    ctx->pc = 0x4648D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4648CCu;
    // 0x4648d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C050u, 0x4648CCu, 0x4648D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4648D4u;
label_4648d4:
    // 0x4648d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4648d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4648d8:
    // 0x4648d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4648d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4648dc:
    // 0x4648dc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_4648e0:
    if (ctx->pc == 0x4648E0u) {
        ctx->pc = 0x4648E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648DCu;
        // 0x4648e0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648E4u;
        goto label_4648e4;
    }
    ctx->pc = 0x4648DCu;
    {
        const bool branch_taken_0x4648dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4648E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648DCu;
        // 0x4648e0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4648dc) {
            ctx->pc = 0x4648FCu;
            goto label_4648fc;
        }
    }
    ctx->pc = 0x4648E4u;
label_4648e4:
    // 0x4648e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_4648e8:
    if (ctx->pc == 0x4648E8u) {
        ctx->pc = 0x4648E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648E4u;
        // 0x4648e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648ECu;
        goto label_4648ec;
    }
    ctx->pc = 0x4648E4u;
    {
        const bool branch_taken_0x4648e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4648E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648E4u;
        // 0x4648e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4648e4) {
            ctx->pc = 0x464900u;
            goto label_464900;
        }
    }
    ctx->pc = 0x4648ECu;
label_4648ec:
    // 0x4648ec: 0xc11f024  jal         func_47C090
label_4648f0:
    if (ctx->pc == 0x4648F0u) {
        ctx->pc = 0x4648F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648ECu;
        // 0x4648f0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648F4u;
        goto label_4648f4;
    }
    ctx->pc = 0x4648ECu;
    SET_GPR_U32(ctx, 31, 0x4648F4u);
    ctx->pc = 0x4648F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4648ECu;
    // 0x4648f0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4648ECu, 0x4648F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4648F4u;
label_4648f4:
    // 0x4648f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4648f8:
    if (ctx->pc == 0x4648F8u) {
        ctx->pc = 0x4648F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648F4u;
        // 0x4648f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4648FCu;
        goto label_4648fc;
    }
    ctx->pc = 0x4648F4u;
    {
        const bool branch_taken_0x4648f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4648F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4648F4u;
        // 0x4648f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4648f4) {
            ctx->pc = 0x464900u;
            goto label_464900;
        }
    }
    ctx->pc = 0x4648FCu;
label_4648fc:
    // 0x4648fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4648fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464900:
    // 0x464900: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_464904:
    if (ctx->pc == 0x464904u) {
        ctx->pc = 0x464904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464900u;
        // 0x464904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464908u;
        goto label_464908;
    }
    ctx->pc = 0x464900u;
    {
        const bool branch_taken_0x464900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464900u;
        // 0x464904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464900) {
            ctx->pc = 0x464948u;
            goto label_464948;
        }
    }
    ctx->pc = 0x464908u;
label_464908:
    // 0x464908: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_46490c:
    if (ctx->pc == 0x46490Cu) {
        ctx->pc = 0x46490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464908u;
        // 0x46490c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464910u;
        goto label_464910;
    }
    ctx->pc = 0x464908u;
    {
        const bool branch_taken_0x464908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464908u;
        // 0x46490c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464908) {
            ctx->pc = 0x464920u;
            goto label_464920;
        }
    }
    ctx->pc = 0x464910u;
label_464910:
    // 0x464910: 0xc119604  jal         func_465810
label_464914:
    if (ctx->pc == 0x464914u) {
        ctx->pc = 0x464914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464910u;
        // 0x464914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464918u;
        goto label_464918;
    }
    ctx->pc = 0x464910u;
    SET_GPR_U32(ctx, 31, 0x464918u);
    ctx->pc = 0x464914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464910u;
    // 0x464914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465810u, 0x464910u, 0x464918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464918u;
label_464918:
    // 0x464918: 0xc122364  jal         func_488D90
label_46491c:
    if (ctx->pc == 0x46491Cu) {
        ctx->pc = 0x46491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464918u;
        // 0x46491c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464920u;
        goto label_464920;
    }
    ctx->pc = 0x464918u;
    SET_GPR_U32(ctx, 31, 0x464920u);
    ctx->pc = 0x46491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464918u;
    // 0x46491c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x464918u, 0x464920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464920u;
label_464920:
    // 0x464920: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x464920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_464924:
    // 0x464924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x464924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_464928:
    // 0x464928: 0xc119634  jal         func_4658D0
label_46492c:
    if (ctx->pc == 0x46492Cu) {
        ctx->pc = 0x46492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464928u;
        // 0x46492c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464930u;
        goto label_464930;
    }
    ctx->pc = 0x464928u;
    SET_GPR_U32(ctx, 31, 0x464930u);
    ctx->pc = 0x46492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464928u;
    // 0x46492c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4658D0u, 0x464928u, 0x464930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464930u;
label_464930:
    // 0x464930: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x464930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_464934:
    // 0x464934: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x464934u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_464938:
    // 0x464938: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x464938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_46493c:
    // 0x46493c: 0x1460ff0a  bnez        $v1, . + 4 + (-0xF6 << 2)
label_464940:
    if (ctx->pc == 0x464940u) {
        ctx->pc = 0x464940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46493Cu;
        // 0x464940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464944u;
        goto label_464944;
    }
    ctx->pc = 0x46493Cu;
    {
        const bool branch_taken_0x46493c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x464940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46493Cu;
        // 0x464940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46493c) {
            ctx->pc = 0x464568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464568;
        }
    }
    ctx->pc = 0x464944u;
label_464944:
    // 0x464944: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x464944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464948:
    // 0x464948: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x464948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_46494c:
    // 0x46494c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x46494cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_464950:
    // 0x464950: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x464950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_464954:
    // 0x464954: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x464954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_464958:
    // 0x464958: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x464958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46495c:
    // 0x46495c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x46495cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_464960:
    // 0x464960: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x464960u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_464964:
    // 0x464964: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x464964u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_464968:
    // 0x464968: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x464968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_46496c:
    // 0x46496c: 0x3e00008  jr          $ra
label_464970:
    if (ctx->pc == 0x464970u) {
        ctx->pc = 0x464970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46496Cu;
        // 0x464970: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464974u;
        goto label_464974;
    }
    ctx->pc = 0x46496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46496Cu;
        // 0x464970: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464974u;
label_464974:
    // 0x464974: 0x0  nop
    ctx->pc = 0x464974u;
    // NOP
    ctx->pc = 0x464978u;
}
