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

// Function: sub_00277458
// Address: 0x277458 - 0x277958
void sub_00277458_0x277458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277458_0x277458");
#endif

    switch (ctx->pc) {
        case 0x277458u: goto label_277458;
        case 0x27745cu: goto label_27745c;
        case 0x277460u: goto label_277460;
        case 0x277464u: goto label_277464;
        case 0x277468u: goto label_277468;
        case 0x27746cu: goto label_27746c;
        case 0x277470u: goto label_277470;
        case 0x277474u: goto label_277474;
        case 0x277478u: goto label_277478;
        case 0x27747cu: goto label_27747c;
        case 0x277480u: goto label_277480;
        case 0x277484u: goto label_277484;
        case 0x277488u: goto label_277488;
        case 0x27748cu: goto label_27748c;
        case 0x277490u: goto label_277490;
        case 0x277494u: goto label_277494;
        case 0x277498u: goto label_277498;
        case 0x27749cu: goto label_27749c;
        case 0x2774a0u: goto label_2774a0;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774a8u: goto label_2774a8;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b0u: goto label_2774b0;
        case 0x2774b4u: goto label_2774b4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774bcu: goto label_2774bc;
        case 0x2774c0u: goto label_2774c0;
        case 0x2774c4u: goto label_2774c4;
        case 0x2774c8u: goto label_2774c8;
        case 0x2774ccu: goto label_2774cc;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774d4u: goto label_2774d4;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774e4u: goto label_2774e4;
        case 0x2774e8u: goto label_2774e8;
        case 0x2774ecu: goto label_2774ec;
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        case 0x277548u: goto label_277548;
        case 0x27754cu: goto label_27754c;
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775ecu: goto label_2775ec;
        case 0x2775f0u: goto label_2775f0;
        case 0x2775f4u: goto label_2775f4;
        case 0x2775f8u: goto label_2775f8;
        case 0x2775fcu: goto label_2775fc;
        case 0x277600u: goto label_277600;
        case 0x277604u: goto label_277604;
        case 0x277608u: goto label_277608;
        case 0x27760cu: goto label_27760c;
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        case 0x27776cu: goto label_27776c;
        case 0x277770u: goto label_277770;
        case 0x277774u: goto label_277774;
        case 0x277778u: goto label_277778;
        case 0x27777cu: goto label_27777c;
        case 0x277780u: goto label_277780;
        case 0x277784u: goto label_277784;
        case 0x277788u: goto label_277788;
        case 0x27778cu: goto label_27778c;
        case 0x277790u: goto label_277790;
        case 0x277794u: goto label_277794;
        case 0x277798u: goto label_277798;
        case 0x27779cu: goto label_27779c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777a4u: goto label_2777a4;
        case 0x2777a8u: goto label_2777a8;
        case 0x2777acu: goto label_2777ac;
        case 0x2777b0u: goto label_2777b0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777b8u: goto label_2777b8;
        case 0x2777bcu: goto label_2777bc;
        case 0x2777c0u: goto label_2777c0;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777c8u: goto label_2777c8;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777d0u: goto label_2777d0;
        case 0x2777d4u: goto label_2777d4;
        case 0x2777d8u: goto label_2777d8;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777e0u: goto label_2777e0;
        case 0x2777e4u: goto label_2777e4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777f0u: goto label_2777f0;
        case 0x2777f4u: goto label_2777f4;
        case 0x2777f8u: goto label_2777f8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277800u: goto label_277800;
        case 0x277804u: goto label_277804;
        case 0x277808u: goto label_277808;
        case 0x27780cu: goto label_27780c;
        case 0x277810u: goto label_277810;
        case 0x277814u: goto label_277814;
        case 0x277818u: goto label_277818;
        case 0x27781cu: goto label_27781c;
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        case 0x277858u: goto label_277858;
        case 0x27785cu: goto label_27785c;
        case 0x277860u: goto label_277860;
        case 0x277864u: goto label_277864;
        case 0x277868u: goto label_277868;
        case 0x27786cu: goto label_27786c;
        case 0x277870u: goto label_277870;
        case 0x277874u: goto label_277874;
        case 0x277878u: goto label_277878;
        case 0x27787cu: goto label_27787c;
        case 0x277880u: goto label_277880;
        case 0x277884u: goto label_277884;
        case 0x277888u: goto label_277888;
        case 0x27788cu: goto label_27788c;
        case 0x277890u: goto label_277890;
        case 0x277894u: goto label_277894;
        case 0x277898u: goto label_277898;
        case 0x27789cu: goto label_27789c;
        case 0x2778a0u: goto label_2778a0;
        case 0x2778a4u: goto label_2778a4;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778acu: goto label_2778ac;
        case 0x2778b0u: goto label_2778b0;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778bcu: goto label_2778bc;
        case 0x2778c0u: goto label_2778c0;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778c8u: goto label_2778c8;
        case 0x2778ccu: goto label_2778cc;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778d8u: goto label_2778d8;
        case 0x2778dcu: goto label_2778dc;
        case 0x2778e0u: goto label_2778e0;
        case 0x2778e4u: goto label_2778e4;
        case 0x2778e8u: goto label_2778e8;
        case 0x2778ecu: goto label_2778ec;
        case 0x2778f0u: goto label_2778f0;
        case 0x2778f4u: goto label_2778f4;
        case 0x2778f8u: goto label_2778f8;
        case 0x2778fcu: goto label_2778fc;
        case 0x277900u: goto label_277900;
        case 0x277904u: goto label_277904;
        case 0x277908u: goto label_277908;
        case 0x27790cu: goto label_27790c;
        case 0x277910u: goto label_277910;
        case 0x277914u: goto label_277914;
        case 0x277918u: goto label_277918;
        case 0x27791cu: goto label_27791c;
        case 0x277920u: goto label_277920;
        case 0x277924u: goto label_277924;
        case 0x277928u: goto label_277928;
        case 0x27792cu: goto label_27792c;
        case 0x277930u: goto label_277930;
        case 0x277934u: goto label_277934;
        case 0x277938u: goto label_277938;
        case 0x27793cu: goto label_27793c;
        case 0x277940u: goto label_277940;
        case 0x277944u: goto label_277944;
        case 0x277948u: goto label_277948;
        case 0x27794cu: goto label_27794c;
        case 0x277950u: goto label_277950;
        case 0x277954u: goto label_277954;
        default: break;
    }

    ctx->pc = 0x277458u;

label_277458:
    // 0x277458: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_27745c:
    // 0x27745c: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
label_277460:
    // 0x277460: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x277460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_277464:
    // 0x277464: 0x25294b00  addiu       $t1, $t1, 0x4B00
    ctx->pc = 0x277464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19200));
label_277468:
    // 0x277468: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x277468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_27746c:
    // 0x27746c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x27746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_277470:
    // 0x277470: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x277470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_277474:
    // 0x277474: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x277474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_277478:
    // 0x277478: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x277478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27747c:
    // 0x27747c: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x27747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_277480:
    // 0x277480: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_277484:
    // 0x277484: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x277484u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_277488:
    // 0x277488: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x277488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27748c:
    // 0x27748c: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x27748cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_277490:
    // 0x277490: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x277490u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_277494:
    // 0x277494: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x277494u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_277498:
    // 0x277498: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x277498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_27749c:
    // 0x27749c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x27749cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2774a0:
    // 0x2774a0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2774a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2774a4:
    // 0x2774a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2774a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2774a8:
    // 0x2774a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2774a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2774ac:
    // 0x2774ac: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2774acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2774b0:
    // 0x2774b0: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2774b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2774b4:
    // 0x2774b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2774b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2774b8:
    // 0x2774b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2774bc:
    // 0x2774bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2774bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2774c0:
    // 0x2774c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2774c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2774c4:
    // 0x2774c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2774c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2774c8:
    // 0x2774c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2774c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2774cc:
    // 0x2774cc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2774d0:
    // 0x2774d0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2774d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2774d4:
    // 0x2774d4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2774d4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2774d8:
    // 0x2774d8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2774d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2774dc:
    // 0x2774dc: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2774dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2774e0:
    // 0x2774e0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2774e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2774e4:
    // 0x2774e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2774e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2774e8:
    // 0x2774e8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x2774e8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_2774ec:
    // 0x2774ec: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2774ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2774f0:
    // 0x2774f0: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x2774f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_2774f4:
    // 0x2774f4: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2774f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2774f8:
    // 0x2774f8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2774f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2774fc:
    // 0x2774fc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2774fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277500:
    // 0x277500: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277500u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277504:
    // 0x277504: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x277504u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_277508:
    // 0x277508: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x277508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_27750c:
    // 0x27750c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x27750cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_277510:
    // 0x277510: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x277510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_277514:
    // 0x277514: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x277514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_277518:
    // 0x277518: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x277518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27751c:
    // 0x27751c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x27751cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_277520:
    // 0x277520: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x277520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_277524:
    // 0x277524: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x277524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_277528:
    // 0x277528: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x277528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_27752c:
    // 0x27752c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x27752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_277530:
    // 0x277530: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x277530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_277534:
    // 0x277534: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x277534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
label_277538:
    // 0x277538: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x277538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_27753c:
    // 0x27753c: 0xc0cd5ea  jal         func_3357A8
label_277540:
    if (ctx->pc == 0x277540u) {
        ctx->pc = 0x277540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27753Cu;
        // 0x277540: 0x7fa80020  sq          $t0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277544u;
        goto label_277544;
    }
    ctx->pc = 0x27753Cu;
    SET_GPR_U32(ctx, 31, 0x277544u);
    ctx->pc = 0x277540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27753Cu;
    // 0x277540: 0x7fa80020  sq          $t0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x27753Cu, 0x277544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277544u;
label_277544:
    // 0x277544: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x277544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_277548:
    // 0x277548: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x277548u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_27754c:
    // 0x27754c: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x27754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_277550:
    // 0x277550: 0x4615bd82  mul.s       $f22, $f23, $f21
    ctx->pc = 0x277550u;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_277554:
    // 0x277554: 0xc0cd5ea  jal         func_3357A8
label_277558:
    if (ctx->pc == 0x277558u) {
        ctx->pc = 0x277558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277554u;
        // 0x277558: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27755Cu;
        goto label_27755c;
    }
    ctx->pc = 0x277554u;
    SET_GPR_U32(ctx, 31, 0x27755Cu);
    ctx->pc = 0x277558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277554u;
    // 0x277558: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x277554u, 0x27755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27755Cu;
label_27755c:
    // 0x27755c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x27755cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_277560:
    // 0x277560: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x277560u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_277564:
    // 0x277564: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x277564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_277568:
    // 0x277568: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x277568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_27756c:
    // 0x27756c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x27756cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_277570:
    // 0x277570: 0x4615cd42  mul.s       $f21, $f25, $f21
    ctx->pc = 0x277570u;
    ctx->f[21] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
label_277574:
    // 0x277574: 0xc12e310  jal         func_4B8C40
label_277578:
    if (ctx->pc == 0x277578u) {
        ctx->pc = 0x277578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277574u;
        // 0x277578: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27757Cu;
        goto label_27757c;
    }
    ctx->pc = 0x277574u;
    SET_GPR_U32(ctx, 31, 0x27757Cu);
    ctx->pc = 0x277578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277574u;
    // 0x277578: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x277574u, 0x27757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27757Cu;
label_27757c:
    // 0x27757c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27757cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_277580:
    // 0x277580: 0xc12e29c  jal         func_4B8A70
label_277584:
    if (ctx->pc == 0x277584u) {
        ctx->pc = 0x277584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277580u;
        // 0x277584: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277588u;
        goto label_277588;
    }
    ctx->pc = 0x277580u;
    SET_GPR_U32(ctx, 31, 0x277588u);
    ctx->pc = 0x277584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277580u;
    // 0x277584: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x277580u, 0x277588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277588u;
label_277588:
    // 0x277588: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x277588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27758c:
    // 0x27758c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27758cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_277590:
    // 0x277590: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x277590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_277594:
    // 0x277594: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x277594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277598:
    // 0x277598: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x277598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_27759c:
    // 0x27759c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x27759cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2775a0:
    // 0x2775a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2775a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2775a4:
    // 0x2775a4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2775a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2775a8:
    // 0x2775a8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2775a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2775ac:
    // 0x2775ac: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2775acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2775b0:
    // 0x2775b0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2775b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2775b4:
    // 0x2775b4: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2775b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2775b8:
    // 0x2775b8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2775b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775bc:
    // 0x2775bc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2775bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2775c0:
    // 0x2775c0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2775c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2775c4:
    // 0x2775c4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2775c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2775c8:
    // 0x2775c8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2775c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2775cc:
    // 0x2775cc: 0xc12e310  jal         func_4B8C40
label_2775d0:
    if (ctx->pc == 0x2775D0u) {
        ctx->pc = 0x2775D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775CCu;
        // 0x2775d0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775D4u;
        goto label_2775d4;
    }
    ctx->pc = 0x2775CCu;
    SET_GPR_U32(ctx, 31, 0x2775D4u);
    ctx->pc = 0x2775D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775CCu;
    // 0x2775d0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2775CCu, 0x2775D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775D4u;
label_2775d4:
    // 0x2775d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2775d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2775d8:
    // 0x2775d8: 0xc12e29c  jal         func_4B8A70
label_2775dc:
    if (ctx->pc == 0x2775DCu) {
        ctx->pc = 0x2775DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775D8u;
        // 0x2775dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775E0u;
        goto label_2775e0;
    }
    ctx->pc = 0x2775D8u;
    SET_GPR_U32(ctx, 31, 0x2775E0u);
    ctx->pc = 0x2775DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775D8u;
    // 0x2775dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2775D8u, 0x2775E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775E0u;
label_2775e0:
    // 0x2775e0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2775e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2775e4:
    // 0x2775e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2775e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2775e8:
    // 0x2775e8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2775e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2775ec:
    // 0x2775ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2775ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2775f0:
    // 0x2775f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2775f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2775f4:
    // 0x2775f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2775f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2775f8:
    // 0x2775f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2775f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2775fc:
    // 0x2775fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2775fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_277600:
    // 0x277600: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x277600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_277604:
    // 0x277604: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x277604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_277608:
    // 0x277608: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x277608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27760c:
    // 0x27760c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x27760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277610:
    // 0x277610: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x277610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277614:
    // 0x277614: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x277614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_277618:
    // 0x277618: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x277618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27761c:
    // 0x27761c: 0xc08f3dc  jal         func_23CF70
label_277620:
    if (ctx->pc == 0x277620u) {
        ctx->pc = 0x277620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27761Cu;
        // 0x277620: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277624u;
        goto label_277624;
    }
    ctx->pc = 0x27761Cu;
    SET_GPR_U32(ctx, 31, 0x277624u);
    ctx->pc = 0x277620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27761Cu;
    // 0x277620: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x27761Cu, 0x277624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277624u;
label_277624:
    // 0x277624: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x277624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_277628:
    // 0x277628: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x277628u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_27762c:
    // 0x27762c: 0xc08f3e2  jal         func_23CF88
label_277630:
    if (ctx->pc == 0x277630u) {
        ctx->pc = 0x277630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27762Cu;
        // 0x277630: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277634u;
        goto label_277634;
    }
    ctx->pc = 0x27762Cu;
    SET_GPR_U32(ctx, 31, 0x277634u);
    ctx->pc = 0x277630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27762Cu;
    // 0x277630: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x27762Cu, 0x277634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277634u;
label_277634:
    // 0x277634: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x277634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_277638:
    // 0x277638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27763c:
    // 0x27763c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277640:
    // 0x277640: 0xc095106  jal         func_254418
label_277644:
    if (ctx->pc == 0x277644u) {
        ctx->pc = 0x277644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277640u;
        // 0x277644: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277648u;
        goto label_277648;
    }
    ctx->pc = 0x277640u;
    SET_GPR_U32(ctx, 31, 0x277648u);
    ctx->pc = 0x277644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277640u;
    // 0x277644: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x277640u, 0x277648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277648u;
label_277648:
    // 0x277648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27764c:
    // 0x27764c: 0xc095128  jal         func_2544A0
label_277650:
    if (ctx->pc == 0x277650u) {
        ctx->pc = 0x277650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27764Cu;
        // 0x277650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277654u;
        goto label_277654;
    }
    ctx->pc = 0x27764Cu;
    SET_GPR_U32(ctx, 31, 0x277654u);
    ctx->pc = 0x277650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27764Cu;
    // 0x277650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x27764Cu, 0x277654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277654u;
label_277654:
    // 0x277654: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x277654u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_277658:
    // 0x277658: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x277658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27765c:
    // 0x27765c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x27765cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277660:
    // 0x277660: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277664:
    // 0x277664: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x277664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277668:
    // 0x277668: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x277668u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_27766c:
    // 0x27766c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x27766cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277670:
    // 0x277670: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x277670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277674:
    // 0x277674: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x277674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277678:
    // 0x277678: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x277678u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_27767c:
    // 0x27767c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x27767cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277680:
    // 0x277680: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x277680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277684:
    // 0x277684: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x277684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277688:
    // 0x277688: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x277688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_27768c:
    // 0x27768c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x27768cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277690:
    // 0x277690: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x277690u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277694:
    // 0x277694: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x277694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277698:
    // 0x277698: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x277698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_27769c:
    // 0x27769c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x27769cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2776a0:
    // 0x2776a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2776a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2776a4:
    // 0x2776a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2776a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2776a8:
    // 0x2776a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2776a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2776ac:
    // 0x2776ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2776acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2776b0:
    // 0x2776b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2776b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2776b4:
    // 0x2776b4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2776b4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_2776b8:
    // 0x2776b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2776b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2776bc:
    // 0x2776bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2776bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2776c0:
    // 0x2776c0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2776c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2776c4:
    // 0x2776c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2776c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2776c8:
    // 0x2776c8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2776c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2776cc:
    // 0x2776cc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2776ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2776d0:
    // 0x2776d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2776d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2776d4:
    // 0x2776d4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2776d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2776d8:
    // 0x2776d8: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x2776d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_2776dc:
    // 0x2776dc: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2776dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2776e0:
    // 0x2776e0: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x2776e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_2776e4:
    // 0x2776e4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2776e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2776e8:
    // 0x2776e8: 0xc08f3dc  jal         func_23CF70
label_2776ec:
    if (ctx->pc == 0x2776ECu) {
        ctx->pc = 0x2776ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776E8u;
        // 0x2776ec: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776F0u;
        goto label_2776f0;
    }
    ctx->pc = 0x2776E8u;
    SET_GPR_U32(ctx, 31, 0x2776F0u);
    ctx->pc = 0x2776ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776E8u;
    // 0x2776ec: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x2776E8u, 0x2776F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776F0u;
label_2776f0:
    // 0x2776f0: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x2776f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_2776f4:
    // 0x2776f4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2776f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2776f8:
    // 0x2776f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2776f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2776fc:
    // 0x2776fc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x2776fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_277700:
    // 0x277700: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x277700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_277704:
    // 0x277704: 0xc08f3e2  jal         func_23CF88
label_277708:
    if (ctx->pc == 0x277708u) {
        ctx->pc = 0x277708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277704u;
        // 0x277708: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27770Cu;
        goto label_27770c;
    }
    ctx->pc = 0x277704u;
    SET_GPR_U32(ctx, 31, 0x27770Cu);
    ctx->pc = 0x277708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277704u;
    // 0x277708: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x277704u, 0x27770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27770Cu;
label_27770c:
    // 0x27770c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x27770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_277710:
    // 0x277710: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_277714:
    // 0x277714: 0xc08f4ae  jal         func_23D2B8
label_277718:
    if (ctx->pc == 0x277718u) {
        ctx->pc = 0x277718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277714u;
        // 0x277718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27771Cu;
        goto label_27771c;
    }
    ctx->pc = 0x277714u;
    SET_GPR_U32(ctx, 31, 0x27771Cu);
    ctx->pc = 0x277718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277714u;
    // 0x277718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x277714u, 0x27771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27771Cu;
label_27771c:
    // 0x27771c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27771cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277720:
    // 0x277720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277724:
    // 0x277724: 0xc095106  jal         func_254418
label_277728:
    if (ctx->pc == 0x277728u) {
        ctx->pc = 0x277728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277724u;
        // 0x277728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27772Cu;
        goto label_27772c;
    }
    ctx->pc = 0x277724u;
    SET_GPR_U32(ctx, 31, 0x27772Cu);
    ctx->pc = 0x277728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277724u;
    // 0x277728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x277724u, 0x27772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27772Cu;
label_27772c:
    // 0x27772c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277730:
    // 0x277730: 0xc095128  jal         func_2544A0
label_277734:
    if (ctx->pc == 0x277734u) {
        ctx->pc = 0x277734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277730u;
        // 0x277734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277738u;
        goto label_277738;
    }
    ctx->pc = 0x277730u;
    SET_GPR_U32(ctx, 31, 0x277738u);
    ctx->pc = 0x277734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277730u;
    // 0x277734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x277730u, 0x277738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277738u;
label_277738:
    // 0x277738: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x277738u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27773c:
    // 0x27773c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x27773cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_277740:
    // 0x277740: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x277740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277744:
    // 0x277744: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277748:
    // 0x277748: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x277748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_27774c:
    // 0x27774c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x27774cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277750:
    // 0x277750: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x277750u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277754:
    // 0x277754: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x277754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277758:
    // 0x277758: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x277758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_27775c:
    // 0x27775c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x27775cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277760:
    // 0x277760: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x277760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277764:
    // 0x277764: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x277764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277768:
    // 0x277768: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x277768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_27776c:
    // 0x27776c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x27776cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277770:
    // 0x277770: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x277770u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277774:
    // 0x277774: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x277774u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277778:
    // 0x277778: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x277778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_27777c:
    // 0x27777c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x27777cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277780:
    // 0x277780: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x277780u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_277784:
    // 0x277784: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x277784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277788:
    // 0x277788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27778c:
    // 0x27778c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x27778cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277790:
    // 0x277790: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277794:
    // 0x277794: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x277794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_277798:
    // 0x277798: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x277798u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_27779c:
    // 0x27779c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x27779cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2777a0:
    // 0x2777a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2777a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2777a4:
    // 0x2777a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2777a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2777a8:
    // 0x2777a8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2777a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2777ac:
    // 0x2777ac: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2777acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2777b0:
    // 0x2777b0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2777b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2777b4:
    // 0x2777b4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2777b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2777b8:
    // 0x2777b8: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x2777b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_2777bc:
    // 0x2777bc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2777bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_2777c0:
    // 0x2777c0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2777c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2777c4:
    // 0x2777c4: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x2777c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_2777c8:
    // 0x2777c8: 0xc08f3dc  jal         func_23CF70
label_2777cc:
    if (ctx->pc == 0x2777CCu) {
        ctx->pc = 0x2777CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777C8u;
        // 0x2777cc: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777D0u;
        goto label_2777d0;
    }
    ctx->pc = 0x2777C8u;
    SET_GPR_U32(ctx, 31, 0x2777D0u);
    ctx->pc = 0x2777CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2777C8u;
    // 0x2777cc: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x2777C8u, 0x2777D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777D0u;
label_2777d0:
    // 0x2777d0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2777d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2777d4:
    // 0x2777d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2777d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2777d8:
    // 0x2777d8: 0xc08f4ae  jal         func_23D2B8
label_2777dc:
    if (ctx->pc == 0x2777DCu) {
        ctx->pc = 0x2777DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777D8u;
        // 0x2777dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777E0u;
        goto label_2777e0;
    }
    ctx->pc = 0x2777D8u;
    SET_GPR_U32(ctx, 31, 0x2777E0u);
    ctx->pc = 0x2777DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2777D8u;
    // 0x2777dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x2777D8u, 0x2777E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777E0u;
label_2777e0:
    // 0x2777e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2777e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2777e4:
    // 0x2777e4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2777e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_2777e8:
    // 0x2777e8: 0xc08f3e2  jal         func_23CF88
label_2777ec:
    if (ctx->pc == 0x2777ECu) {
        ctx->pc = 0x2777ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777E8u;
        // 0x2777ec: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777F0u;
        goto label_2777f0;
    }
    ctx->pc = 0x2777E8u;
    SET_GPR_U32(ctx, 31, 0x2777F0u);
    ctx->pc = 0x2777ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2777E8u;
    // 0x2777ec: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2777E8u, 0x2777F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777F0u;
label_2777f0:
    // 0x2777f0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2777f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2777f4:
    // 0x2777f4: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x2777f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_2777f8:
    // 0x2777f8: 0x8c857198  lw          $a1, 0x7198($a0)
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29080)));
label_2777fc:
    // 0x2777fc: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x2777fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_277800:
    // 0x277800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277804:
    // 0x277804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277808:
    // 0x277808: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x277808u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27780c:
    // 0x27780c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_277810:
    if (ctx->pc == 0x277810u) {
        ctx->pc = 0x277810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27780Cu;
        // 0x277810: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277814u;
        goto label_277814;
    }
    ctx->pc = 0x27780Cu;
    {
        const bool branch_taken_0x27780c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27780Cu;
        // 0x277810: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27780c) {
            ctx->pc = 0x27781Cu;
            goto label_27781c;
        }
    }
    ctx->pc = 0x277814u;
label_277814:
    // 0x277814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277818:
    // 0x277818: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x277818u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
label_27781c:
    // 0x27781c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_277820:
    // 0x277820: 0x94b00010  lhu         $s0, 0x10($a1)
    ctx->pc = 0x277820u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_277824:
    // 0x277824: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277828:
    // 0x277828: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27782c:
    // 0x27782c: 0x40f809  jalr        $v0
label_277830:
    if (ctx->pc == 0x277830u) {
        ctx->pc = 0x277830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27782Cu;
        // 0x277830: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277834u;
        goto label_277834;
    }
    ctx->pc = 0x27782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277834u);
        ctx->pc = 0x277830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27782Cu;
        // 0x277830: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27782Cu, 0x277834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277834u;
label_277834:
    // 0x277834: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_277838:
    if (ctx->pc == 0x277838u) {
        ctx->pc = 0x277838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277834u;
        // 0x277838: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27783Cu;
        goto label_27783c;
    }
    ctx->pc = 0x277834u;
    {
        const bool branch_taken_0x277834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277834) {
            ctx->pc = 0x277838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277834u;
            // 0x277838: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277858u;
            goto label_277858;
        }
    }
    ctx->pc = 0x27783Cu;
label_27783c:
    // 0x27783c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_277840:
    // 0x277840: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277844:
    // 0x277844: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277848:
    // 0x277848: 0x40f809  jalr        $v0
label_27784c:
    if (ctx->pc == 0x27784Cu) {
        ctx->pc = 0x27784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277848u;
        // 0x27784c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277850u;
        goto label_277850;
    }
    ctx->pc = 0x277848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277850u);
        ctx->pc = 0x27784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277848u;
        // 0x27784c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277848u, 0x277850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277850u;
label_277850:
    // 0x277850: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x277850u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_277854:
    // 0x277854: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x277854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_277858:
    // 0x277858: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27785c:
    // 0x27785c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277860:
    // 0x277860: 0x40f809  jalr        $v0
label_277864:
    if (ctx->pc == 0x277864u) {
        ctx->pc = 0x277864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277860u;
        // 0x277864: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277868u;
        goto label_277868;
    }
    ctx->pc = 0x277860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277868u);
        ctx->pc = 0x277864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277860u;
        // 0x277864: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277860u, 0x277868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277868u;
label_277868:
    // 0x277868: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_27786c:
    if (ctx->pc == 0x27786Cu) {
        ctx->pc = 0x27786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277868u;
        // 0x27786c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277870u;
        goto label_277870;
    }
    ctx->pc = 0x277868u;
    {
        const bool branch_taken_0x277868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277868) {
            ctx->pc = 0x27786Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277868u;
            // 0x27786c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27788Cu;
            goto label_27788c;
        }
    }
    ctx->pc = 0x277870u;
label_277870:
    // 0x277870: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x277870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_277874:
    // 0x277874: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277878:
    // 0x277878: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27787c:
    // 0x27787c: 0x40f809  jalr        $v0
label_277880:
    if (ctx->pc == 0x277880u) {
        ctx->pc = 0x277880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27787Cu;
        // 0x277880: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277884u;
        goto label_277884;
    }
    ctx->pc = 0x27787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277884u);
        ctx->pc = 0x277880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27787Cu;
        // 0x277880: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27787Cu, 0x277884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277884u;
label_277884:
    // 0x277884: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x277884u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_277888:
    // 0x277888: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x277888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27788c:
    // 0x27788c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27788cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277890:
    // 0x277890: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277894:
    // 0x277894: 0x40f809  jalr        $v0
label_277898:
    if (ctx->pc == 0x277898u) {
        ctx->pc = 0x277898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277894u;
        // 0x277898: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27789Cu;
        goto label_27789c;
    }
    ctx->pc = 0x277894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27789Cu);
        ctx->pc = 0x277898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277894u;
        // 0x277898: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277894u, 0x27789Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27789Cu;
label_27789c:
    // 0x27789c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2778a0:
    if (ctx->pc == 0x2778A0u) {
        ctx->pc = 0x2778A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27789Cu;
        // 0x2778a0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778A4u;
        goto label_2778a4;
    }
    ctx->pc = 0x27789Cu;
    {
        const bool branch_taken_0x27789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27789c) {
            ctx->pc = 0x2778A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27789Cu;
            // 0x2778a0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2778C0u;
            goto label_2778c0;
        }
    }
    ctx->pc = 0x2778A4u;
label_2778a4:
    // 0x2778a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2778a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2778a8:
    // 0x2778a8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2778a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2778ac:
    // 0x2778ac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2778acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2778b0:
    // 0x2778b0: 0x40f809  jalr        $v0
label_2778b4:
    if (ctx->pc == 0x2778B4u) {
        ctx->pc = 0x2778B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778B0u;
        // 0x2778b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778B8u;
        goto label_2778b8;
    }
    ctx->pc = 0x2778B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2778B8u);
        ctx->pc = 0x2778B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778B0u;
        // 0x2778b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2778B0u, 0x2778B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2778B8u;
label_2778b8:
    // 0x2778b8: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x2778b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_2778bc:
    // 0x2778bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2778bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2778c0:
    // 0x2778c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2778c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2778c4:
    // 0x2778c4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2778c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2778c8:
    // 0x2778c8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2778c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2778cc:
    // 0x2778cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2778ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2778d0:
    // 0x2778d0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2778d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2778d4:
    // 0x2778d4: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x2778d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2778d8:
    // 0x2778d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2778d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2778dc:
    // 0x2778dc: 0xc0f809  jalr        $a2
label_2778e0:
    if (ctx->pc == 0x2778E0u) {
        ctx->pc = 0x2778E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778DCu;
        // 0x2778e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778E4u;
        goto label_2778e4;
    }
    ctx->pc = 0x2778DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2778E4u);
        ctx->pc = 0x2778E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778DCu;
        // 0x2778e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2778DCu, 0x2778E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2778E4u;
label_2778e4:
    // 0x2778e4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2778e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2778e8:
    // 0x2778e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2778e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2778ec:
    // 0x2778ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2778ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2778f0:
    // 0x2778f0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2778f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2778f4:
    // 0x2778f4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2778f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2778f8:
    // 0x2778f8: 0x40f809  jalr        $v0
label_2778fc:
    if (ctx->pc == 0x2778FCu) {
        ctx->pc = 0x2778FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778F8u;
        // 0x2778fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277900u;
        goto label_277900;
    }
    ctx->pc = 0x2778F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277900u);
        ctx->pc = 0x2778FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778F8u;
        // 0x2778fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2778F8u, 0x277900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277900u;
label_277900:
    // 0x277900: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x277900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_277904:
    // 0x277904: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_277908:
    // 0x277908: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x277908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27790c:
    // 0x27790c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x27790cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_277910:
    // 0x277910: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x277910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_277914:
    // 0x277914: 0x40f809  jalr        $v0
label_277918:
    if (ctx->pc == 0x277918u) {
        ctx->pc = 0x277918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277914u;
        // 0x277918: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27791Cu;
        goto label_27791c;
    }
    ctx->pc = 0x277914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27791Cu);
        ctx->pc = 0x277918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277914u;
        // 0x277918: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277914u, 0x27791Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27791Cu;
label_27791c:
    // 0x27791c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x27791cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_277920:
    // 0x277920: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x277920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_277924:
    // 0x277924: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x277924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_277928:
    // 0x277928: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x277928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_27792c:
    // 0x27792c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x27792cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_277930:
    // 0x277930: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x277930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_277934:
    // 0x277934: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x277934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_277938:
    // 0x277938: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x277938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_27793c:
    // 0x27793c: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x27793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_277940:
    // 0x277940: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x277940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_277944:
    // 0x277944: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x277944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_277948:
    // 0x277948: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x277948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27794c:
    // 0x27794c: 0x3e00008  jr          $ra
label_277950:
    if (ctx->pc == 0x277950u) {
        ctx->pc = 0x277950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27794Cu;
        // 0x277950: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277954u;
        goto label_277954;
    }
    ctx->pc = 0x27794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27794Cu;
        // 0x277950: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277954u;
label_277954:
    // 0x277954: 0x0  nop
    ctx->pc = 0x277954u;
    // NOP
    ctx->pc = 0x277958u;
}
