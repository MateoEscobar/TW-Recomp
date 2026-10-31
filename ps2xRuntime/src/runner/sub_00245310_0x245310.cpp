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

// Function: sub_00245310
// Address: 0x245310 - 0x245920
void sub_00245310_0x245310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245310_0x245310");
#endif

    switch (ctx->pc) {
        case 0x245310u: goto label_245310;
        case 0x245314u: goto label_245314;
        case 0x245318u: goto label_245318;
        case 0x24531cu: goto label_24531c;
        case 0x245320u: goto label_245320;
        case 0x245324u: goto label_245324;
        case 0x245328u: goto label_245328;
        case 0x24532cu: goto label_24532c;
        case 0x245330u: goto label_245330;
        case 0x245334u: goto label_245334;
        case 0x245338u: goto label_245338;
        case 0x24533cu: goto label_24533c;
        case 0x245340u: goto label_245340;
        case 0x245344u: goto label_245344;
        case 0x245348u: goto label_245348;
        case 0x24534cu: goto label_24534c;
        case 0x245350u: goto label_245350;
        case 0x245354u: goto label_245354;
        case 0x245358u: goto label_245358;
        case 0x24535cu: goto label_24535c;
        case 0x245360u: goto label_245360;
        case 0x245364u: goto label_245364;
        case 0x245368u: goto label_245368;
        case 0x24536cu: goto label_24536c;
        case 0x245370u: goto label_245370;
        case 0x245374u: goto label_245374;
        case 0x245378u: goto label_245378;
        case 0x24537cu: goto label_24537c;
        case 0x245380u: goto label_245380;
        case 0x245384u: goto label_245384;
        case 0x245388u: goto label_245388;
        case 0x24538cu: goto label_24538c;
        case 0x245390u: goto label_245390;
        case 0x245394u: goto label_245394;
        case 0x245398u: goto label_245398;
        case 0x24539cu: goto label_24539c;
        case 0x2453a0u: goto label_2453a0;
        case 0x2453a4u: goto label_2453a4;
        case 0x2453a8u: goto label_2453a8;
        case 0x2453acu: goto label_2453ac;
        case 0x2453b0u: goto label_2453b0;
        case 0x2453b4u: goto label_2453b4;
        case 0x2453b8u: goto label_2453b8;
        case 0x2453bcu: goto label_2453bc;
        case 0x2453c0u: goto label_2453c0;
        case 0x2453c4u: goto label_2453c4;
        case 0x2453c8u: goto label_2453c8;
        case 0x2453ccu: goto label_2453cc;
        case 0x2453d0u: goto label_2453d0;
        case 0x2453d4u: goto label_2453d4;
        case 0x2453d8u: goto label_2453d8;
        case 0x2453dcu: goto label_2453dc;
        case 0x2453e0u: goto label_2453e0;
        case 0x2453e4u: goto label_2453e4;
        case 0x2453e8u: goto label_2453e8;
        case 0x2453ecu: goto label_2453ec;
        case 0x2453f0u: goto label_2453f0;
        case 0x2453f4u: goto label_2453f4;
        case 0x2453f8u: goto label_2453f8;
        case 0x2453fcu: goto label_2453fc;
        case 0x245400u: goto label_245400;
        case 0x245404u: goto label_245404;
        case 0x245408u: goto label_245408;
        case 0x24540cu: goto label_24540c;
        case 0x245410u: goto label_245410;
        case 0x245414u: goto label_245414;
        case 0x245418u: goto label_245418;
        case 0x24541cu: goto label_24541c;
        case 0x245420u: goto label_245420;
        case 0x245424u: goto label_245424;
        case 0x245428u: goto label_245428;
        case 0x24542cu: goto label_24542c;
        case 0x245430u: goto label_245430;
        case 0x245434u: goto label_245434;
        case 0x245438u: goto label_245438;
        case 0x24543cu: goto label_24543c;
        case 0x245440u: goto label_245440;
        case 0x245444u: goto label_245444;
        case 0x245448u: goto label_245448;
        case 0x24544cu: goto label_24544c;
        case 0x245450u: goto label_245450;
        case 0x245454u: goto label_245454;
        case 0x245458u: goto label_245458;
        case 0x24545cu: goto label_24545c;
        case 0x245460u: goto label_245460;
        case 0x245464u: goto label_245464;
        case 0x245468u: goto label_245468;
        case 0x24546cu: goto label_24546c;
        case 0x245470u: goto label_245470;
        case 0x245474u: goto label_245474;
        case 0x245478u: goto label_245478;
        case 0x24547cu: goto label_24547c;
        case 0x245480u: goto label_245480;
        case 0x245484u: goto label_245484;
        case 0x245488u: goto label_245488;
        case 0x24548cu: goto label_24548c;
        case 0x245490u: goto label_245490;
        case 0x245494u: goto label_245494;
        case 0x245498u: goto label_245498;
        case 0x24549cu: goto label_24549c;
        case 0x2454a0u: goto label_2454a0;
        case 0x2454a4u: goto label_2454a4;
        case 0x2454a8u: goto label_2454a8;
        case 0x2454acu: goto label_2454ac;
        case 0x2454b0u: goto label_2454b0;
        case 0x2454b4u: goto label_2454b4;
        case 0x2454b8u: goto label_2454b8;
        case 0x2454bcu: goto label_2454bc;
        case 0x2454c0u: goto label_2454c0;
        case 0x2454c4u: goto label_2454c4;
        case 0x2454c8u: goto label_2454c8;
        case 0x2454ccu: goto label_2454cc;
        case 0x2454d0u: goto label_2454d0;
        case 0x2454d4u: goto label_2454d4;
        case 0x2454d8u: goto label_2454d8;
        case 0x2454dcu: goto label_2454dc;
        case 0x2454e0u: goto label_2454e0;
        case 0x2454e4u: goto label_2454e4;
        case 0x2454e8u: goto label_2454e8;
        case 0x2454ecu: goto label_2454ec;
        case 0x2454f0u: goto label_2454f0;
        case 0x2454f4u: goto label_2454f4;
        case 0x2454f8u: goto label_2454f8;
        case 0x2454fcu: goto label_2454fc;
        case 0x245500u: goto label_245500;
        case 0x245504u: goto label_245504;
        case 0x245508u: goto label_245508;
        case 0x24550cu: goto label_24550c;
        case 0x245510u: goto label_245510;
        case 0x245514u: goto label_245514;
        case 0x245518u: goto label_245518;
        case 0x24551cu: goto label_24551c;
        case 0x245520u: goto label_245520;
        case 0x245524u: goto label_245524;
        case 0x245528u: goto label_245528;
        case 0x24552cu: goto label_24552c;
        case 0x245530u: goto label_245530;
        case 0x245534u: goto label_245534;
        case 0x245538u: goto label_245538;
        case 0x24553cu: goto label_24553c;
        case 0x245540u: goto label_245540;
        case 0x245544u: goto label_245544;
        case 0x245548u: goto label_245548;
        case 0x24554cu: goto label_24554c;
        case 0x245550u: goto label_245550;
        case 0x245554u: goto label_245554;
        case 0x245558u: goto label_245558;
        case 0x24555cu: goto label_24555c;
        case 0x245560u: goto label_245560;
        case 0x245564u: goto label_245564;
        case 0x245568u: goto label_245568;
        case 0x24556cu: goto label_24556c;
        case 0x245570u: goto label_245570;
        case 0x245574u: goto label_245574;
        case 0x245578u: goto label_245578;
        case 0x24557cu: goto label_24557c;
        case 0x245580u: goto label_245580;
        case 0x245584u: goto label_245584;
        case 0x245588u: goto label_245588;
        case 0x24558cu: goto label_24558c;
        case 0x245590u: goto label_245590;
        case 0x245594u: goto label_245594;
        case 0x245598u: goto label_245598;
        case 0x24559cu: goto label_24559c;
        case 0x2455a0u: goto label_2455a0;
        case 0x2455a4u: goto label_2455a4;
        case 0x2455a8u: goto label_2455a8;
        case 0x2455acu: goto label_2455ac;
        case 0x2455b0u: goto label_2455b0;
        case 0x2455b4u: goto label_2455b4;
        case 0x2455b8u: goto label_2455b8;
        case 0x2455bcu: goto label_2455bc;
        case 0x2455c0u: goto label_2455c0;
        case 0x2455c4u: goto label_2455c4;
        case 0x2455c8u: goto label_2455c8;
        case 0x2455ccu: goto label_2455cc;
        case 0x2455d0u: goto label_2455d0;
        case 0x2455d4u: goto label_2455d4;
        case 0x2455d8u: goto label_2455d8;
        case 0x2455dcu: goto label_2455dc;
        case 0x2455e0u: goto label_2455e0;
        case 0x2455e4u: goto label_2455e4;
        case 0x2455e8u: goto label_2455e8;
        case 0x2455ecu: goto label_2455ec;
        case 0x2455f0u: goto label_2455f0;
        case 0x2455f4u: goto label_2455f4;
        case 0x2455f8u: goto label_2455f8;
        case 0x2455fcu: goto label_2455fc;
        case 0x245600u: goto label_245600;
        case 0x245604u: goto label_245604;
        case 0x245608u: goto label_245608;
        case 0x24560cu: goto label_24560c;
        case 0x245610u: goto label_245610;
        case 0x245614u: goto label_245614;
        case 0x245618u: goto label_245618;
        case 0x24561cu: goto label_24561c;
        case 0x245620u: goto label_245620;
        case 0x245624u: goto label_245624;
        case 0x245628u: goto label_245628;
        case 0x24562cu: goto label_24562c;
        case 0x245630u: goto label_245630;
        case 0x245634u: goto label_245634;
        case 0x245638u: goto label_245638;
        case 0x24563cu: goto label_24563c;
        case 0x245640u: goto label_245640;
        case 0x245644u: goto label_245644;
        case 0x245648u: goto label_245648;
        case 0x24564cu: goto label_24564c;
        case 0x245650u: goto label_245650;
        case 0x245654u: goto label_245654;
        case 0x245658u: goto label_245658;
        case 0x24565cu: goto label_24565c;
        case 0x245660u: goto label_245660;
        case 0x245664u: goto label_245664;
        case 0x245668u: goto label_245668;
        case 0x24566cu: goto label_24566c;
        case 0x245670u: goto label_245670;
        case 0x245674u: goto label_245674;
        case 0x245678u: goto label_245678;
        case 0x24567cu: goto label_24567c;
        case 0x245680u: goto label_245680;
        case 0x245684u: goto label_245684;
        case 0x245688u: goto label_245688;
        case 0x24568cu: goto label_24568c;
        case 0x245690u: goto label_245690;
        case 0x245694u: goto label_245694;
        case 0x245698u: goto label_245698;
        case 0x24569cu: goto label_24569c;
        case 0x2456a0u: goto label_2456a0;
        case 0x2456a4u: goto label_2456a4;
        case 0x2456a8u: goto label_2456a8;
        case 0x2456acu: goto label_2456ac;
        case 0x2456b0u: goto label_2456b0;
        case 0x2456b4u: goto label_2456b4;
        case 0x2456b8u: goto label_2456b8;
        case 0x2456bcu: goto label_2456bc;
        case 0x2456c0u: goto label_2456c0;
        case 0x2456c4u: goto label_2456c4;
        case 0x2456c8u: goto label_2456c8;
        case 0x2456ccu: goto label_2456cc;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456d4u: goto label_2456d4;
        case 0x2456d8u: goto label_2456d8;
        case 0x2456dcu: goto label_2456dc;
        case 0x2456e0u: goto label_2456e0;
        case 0x2456e4u: goto label_2456e4;
        case 0x2456e8u: goto label_2456e8;
        case 0x2456ecu: goto label_2456ec;
        case 0x2456f0u: goto label_2456f0;
        case 0x2456f4u: goto label_2456f4;
        case 0x2456f8u: goto label_2456f8;
        case 0x2456fcu: goto label_2456fc;
        case 0x245700u: goto label_245700;
        case 0x245704u: goto label_245704;
        case 0x245708u: goto label_245708;
        case 0x24570cu: goto label_24570c;
        case 0x245710u: goto label_245710;
        case 0x245714u: goto label_245714;
        case 0x245718u: goto label_245718;
        case 0x24571cu: goto label_24571c;
        case 0x245720u: goto label_245720;
        case 0x245724u: goto label_245724;
        case 0x245728u: goto label_245728;
        case 0x24572cu: goto label_24572c;
        case 0x245730u: goto label_245730;
        case 0x245734u: goto label_245734;
        case 0x245738u: goto label_245738;
        case 0x24573cu: goto label_24573c;
        case 0x245740u: goto label_245740;
        case 0x245744u: goto label_245744;
        case 0x245748u: goto label_245748;
        case 0x24574cu: goto label_24574c;
        case 0x245750u: goto label_245750;
        case 0x245754u: goto label_245754;
        case 0x245758u: goto label_245758;
        case 0x24575cu: goto label_24575c;
        case 0x245760u: goto label_245760;
        case 0x245764u: goto label_245764;
        case 0x245768u: goto label_245768;
        case 0x24576cu: goto label_24576c;
        case 0x245770u: goto label_245770;
        case 0x245774u: goto label_245774;
        case 0x245778u: goto label_245778;
        case 0x24577cu: goto label_24577c;
        case 0x245780u: goto label_245780;
        case 0x245784u: goto label_245784;
        case 0x245788u: goto label_245788;
        case 0x24578cu: goto label_24578c;
        case 0x245790u: goto label_245790;
        case 0x245794u: goto label_245794;
        case 0x245798u: goto label_245798;
        case 0x24579cu: goto label_24579c;
        case 0x2457a0u: goto label_2457a0;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457a8u: goto label_2457a8;
        case 0x2457acu: goto label_2457ac;
        case 0x2457b0u: goto label_2457b0;
        case 0x2457b4u: goto label_2457b4;
        case 0x2457b8u: goto label_2457b8;
        case 0x2457bcu: goto label_2457bc;
        case 0x2457c0u: goto label_2457c0;
        case 0x2457c4u: goto label_2457c4;
        case 0x2457c8u: goto label_2457c8;
        case 0x2457ccu: goto label_2457cc;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457d4u: goto label_2457d4;
        case 0x2457d8u: goto label_2457d8;
        case 0x2457dcu: goto label_2457dc;
        case 0x2457e0u: goto label_2457e0;
        case 0x2457e4u: goto label_2457e4;
        case 0x2457e8u: goto label_2457e8;
        case 0x2457ecu: goto label_2457ec;
        case 0x2457f0u: goto label_2457f0;
        case 0x2457f4u: goto label_2457f4;
        case 0x2457f8u: goto label_2457f8;
        case 0x2457fcu: goto label_2457fc;
        case 0x245800u: goto label_245800;
        case 0x245804u: goto label_245804;
        case 0x245808u: goto label_245808;
        case 0x24580cu: goto label_24580c;
        case 0x245810u: goto label_245810;
        case 0x245814u: goto label_245814;
        case 0x245818u: goto label_245818;
        case 0x24581cu: goto label_24581c;
        case 0x245820u: goto label_245820;
        case 0x245824u: goto label_245824;
        case 0x245828u: goto label_245828;
        case 0x24582cu: goto label_24582c;
        case 0x245830u: goto label_245830;
        case 0x245834u: goto label_245834;
        case 0x245838u: goto label_245838;
        case 0x24583cu: goto label_24583c;
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458dcu: goto label_2458dc;
        case 0x2458e0u: goto label_2458e0;
        case 0x2458e4u: goto label_2458e4;
        case 0x2458e8u: goto label_2458e8;
        case 0x2458ecu: goto label_2458ec;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458f4u: goto label_2458f4;
        case 0x2458f8u: goto label_2458f8;
        case 0x2458fcu: goto label_2458fc;
        case 0x245900u: goto label_245900;
        case 0x245904u: goto label_245904;
        case 0x245908u: goto label_245908;
        case 0x24590cu: goto label_24590c;
        case 0x245910u: goto label_245910;
        case 0x245914u: goto label_245914;
        case 0x245918u: goto label_245918;
        case 0x24591cu: goto label_24591c;
        default: break;
    }

    ctx->pc = 0x245310u;

label_245310:
    // 0x245310: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x245310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_245314:
    // 0x245314: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x245314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_245318:
    // 0x245318: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x245318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_24531c:
    // 0x24531c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245320:
    // 0x245320: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x245320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_245324:
    // 0x245324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245328:
    // 0x245328: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x245328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_24532c:
    // 0x24532c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24532cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245330:
    // 0x245330: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x245330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_245334:
    // 0x245334: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x245334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_245338:
    // 0x245338: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x245338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_24533c:
    // 0x24533c: 0xe7ba0120  swc1        $f26, 0x120($sp)
    ctx->pc = 0x24533cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_245340:
    // 0x245340: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x245340u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_245344:
    // 0x245344: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x245344u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_245348:
    // 0x245348: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x245348u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_24534c:
    // 0x24534c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x24534cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_245350:
    // 0x245350: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x245350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_245354:
    // 0x245354: 0xc0874fa  jal         func_21D3E8
label_245358:
    if (ctx->pc == 0x245358u) {
        ctx->pc = 0x245358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245354u;
        // 0x245358: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24535Cu;
        goto label_24535c;
    }
    ctx->pc = 0x245354u;
    SET_GPR_U32(ctx, 31, 0x24535Cu);
    ctx->pc = 0x245358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245354u;
    // 0x245358: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x245354u, 0x24535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24535Cu;
label_24535c:
    // 0x24535c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24535cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245360:
    // 0x245360: 0xc0874fa  jal         func_21D3E8
label_245364:
    if (ctx->pc == 0x245364u) {
        ctx->pc = 0x245364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245360u;
        // 0x245364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245368u;
        goto label_245368;
    }
    ctx->pc = 0x245360u;
    SET_GPR_U32(ctx, 31, 0x245368u);
    ctx->pc = 0x245364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245360u;
    // 0x245364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x245360u, 0x245368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245368u;
label_245368:
    // 0x245368: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x245368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_24536c:
    // 0x24536c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_245370:
    if (ctx->pc == 0x245370u) {
        ctx->pc = 0x245374u;
        goto label_245374;
    }
    ctx->pc = 0x24536Cu;
    {
        const bool branch_taken_0x24536c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24536c) {
            ctx->pc = 0x2453D4u;
            goto label_2453d4;
        }
    }
    ctx->pc = 0x245374u;
label_245374:
    // 0x245374: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x245374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_245378:
    // 0x245378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24537c:
    if (ctx->pc == 0x24537Cu) {
        ctx->pc = 0x245380u;
        goto label_245380;
    }
    ctx->pc = 0x245378u;
    {
        const bool branch_taken_0x245378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245378) {
            ctx->pc = 0x245388u;
            goto label_245388;
        }
    }
    ctx->pc = 0x245380u;
label_245380:
    // 0x245380: 0xc088420  jal         func_221080
label_245384:
    if (ctx->pc == 0x245384u) {
        ctx->pc = 0x245384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245380u;
        // 0x245384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245388u;
        goto label_245388;
    }
    ctx->pc = 0x245380u;
    SET_GPR_U32(ctx, 31, 0x245388u);
    ctx->pc = 0x245384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245380u;
    // 0x245384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x245380u, 0x245388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245388u;
label_245388:
    // 0x245388: 0xc089f12  jal         func_227C48
label_24538c:
    if (ctx->pc == 0x24538Cu) {
        ctx->pc = 0x24538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245388u;
        // 0x24538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245390u;
        goto label_245390;
    }
    ctx->pc = 0x245388u;
    SET_GPR_U32(ctx, 31, 0x245390u);
    ctx->pc = 0x24538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245388u;
    // 0x24538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x245388u, 0x245390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245390u;
label_245390:
    // 0x245390: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x245390u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_245394:
    // 0x245394: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_245398:
    if (ctx->pc == 0x245398u) {
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245394u;
        // 0x245398: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24539Cu;
        goto label_24539c;
    }
    ctx->pc = 0x245394u;
    {
        const bool branch_taken_0x245394 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245394u;
        // 0x245398: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245394) {
            ctx->pc = 0x2453BCu;
            goto label_2453bc;
        }
    }
    ctx->pc = 0x24539Cu;
label_24539c:
    // 0x24539c: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_2453a0:
    // 0x2453a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2453a4:
    // 0x2453a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2453a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2453a8:
    // 0x2453a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2453a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2453ac:
    // 0x2453ac: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x2453acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_2453b0:
    // 0x2453b0: 0x12383f  dsra32      $a3, $s2, 0
    ctx->pc = 0x2453b0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 18) >> (32 + 0));
label_2453b4:
    // 0x2453b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2453b8:
    if (ctx->pc == 0x2453B8u) {
        ctx->pc = 0x2453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453B4u;
        // 0x2453b8: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453BCu;
        goto label_2453bc;
    }
    ctx->pc = 0x2453B4u;
    {
        const bool branch_taken_0x2453b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453B4u;
        // 0x2453b8: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453b4) {
            ctx->pc = 0x2453C4u;
            goto label_2453c4;
        }
    }
    ctx->pc = 0x2453BCu;
label_2453bc:
    // 0x2453bc: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x2453bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_2453c0:
    // 0x2453c0: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x2453c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_2453c4:
    // 0x2453c4: 0x4a00029  bltz        $a1, . + 4 + (0x29 << 2)
label_2453c8:
    if (ctx->pc == 0x2453C8u) {
        ctx->pc = 0x2453C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453C4u;
        // 0x2453c8: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453CCu;
        goto label_2453cc;
    }
    ctx->pc = 0x2453C4u;
    {
        const bool branch_taken_0x2453c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2453C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453C4u;
        // 0x2453c8: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453c4) {
            ctx->pc = 0x24546Cu;
            goto label_24546c;
        }
    }
    ctx->pc = 0x2453CCu;
label_2453cc:
    // 0x2453cc: 0x10000024  b           . + 4 + (0x24 << 2)
label_2453d0:
    if (ctx->pc == 0x2453D0u) {
        ctx->pc = 0x2453D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453CCu;
        // 0x2453d0: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453D4u;
        goto label_2453d4;
    }
    ctx->pc = 0x2453CCu;
    {
        const bool branch_taken_0x2453cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453CCu;
        // 0x2453d0: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453cc) {
            ctx->pc = 0x245460u;
            goto label_245460;
        }
    }
    ctx->pc = 0x2453D4u;
label_2453d4:
    // 0x2453d4: 0xc088e60  jal         func_223980
label_2453d8:
    if (ctx->pc == 0x2453D8u) {
        ctx->pc = 0x2453D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453D4u;
        // 0x2453d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453DCu;
        goto label_2453dc;
    }
    ctx->pc = 0x2453D4u;
    SET_GPR_U32(ctx, 31, 0x2453DCu);
    ctx->pc = 0x2453D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453D4u;
    // 0x2453d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2453D4u, 0x2453DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453DCu;
label_2453dc:
    // 0x2453dc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2453e0:
    if (ctx->pc == 0x2453E0u) {
        ctx->pc = 0x2453E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453DCu;
        // 0x2453e0: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453E4u;
        goto label_2453e4;
    }
    ctx->pc = 0x2453DCu;
    {
        const bool branch_taken_0x2453dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2453E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453DCu;
        // 0x2453e0: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453dc) {
            ctx->pc = 0x245488u;
            goto label_245488;
        }
    }
    ctx->pc = 0x2453E4u;
label_2453e4:
    // 0x2453e4: 0xc08a01c  jal         func_228070
label_2453e8:
    if (ctx->pc == 0x2453E8u) {
        ctx->pc = 0x2453E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453E4u;
        // 0x2453e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453ECu;
        goto label_2453ec;
    }
    ctx->pc = 0x2453E4u;
    SET_GPR_U32(ctx, 31, 0x2453ECu);
    ctx->pc = 0x2453E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453E4u;
    // 0x2453e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2453E4u, 0x2453ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453ECu;
label_2453ec:
    // 0x2453ec: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2453f0:
    if (ctx->pc == 0x2453F0u) {
        ctx->pc = 0x2453F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453ECu;
        // 0x2453f0: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453F4u;
        goto label_2453f4;
    }
    ctx->pc = 0x2453ECu;
    {
        const bool branch_taken_0x2453ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2453F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453ECu;
        // 0x2453f0: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453ec) {
            ctx->pc = 0x245488u;
            goto label_245488;
        }
    }
    ctx->pc = 0x2453F4u;
label_2453f4:
    // 0x2453f4: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x2453f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_2453f8:
    // 0x2453f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2453fc:
    if (ctx->pc == 0x2453FCu) {
        ctx->pc = 0x2453FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453F8u;
        // 0x2453fc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245400u;
        goto label_245400;
    }
    ctx->pc = 0x2453F8u;
    {
        const bool branch_taken_0x2453f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453F8u;
        // 0x2453fc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453f8) {
            ctx->pc = 0x24540Cu;
            goto label_24540c;
        }
    }
    ctx->pc = 0x245400u;
label_245400:
    // 0x245400: 0xc088420  jal         func_221080
label_245404:
    if (ctx->pc == 0x245404u) {
        ctx->pc = 0x245404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245400u;
        // 0x245404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245408u;
        goto label_245408;
    }
    ctx->pc = 0x245400u;
    SET_GPR_U32(ctx, 31, 0x245408u);
    ctx->pc = 0x245404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245400u;
    // 0x245404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x245400u, 0x245408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245408u;
label_245408:
    // 0x245408: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x245408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_24540c:
    // 0x24540c: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x24540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_245410:
    // 0x245410: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x245410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_245414:
    // 0x245414: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x245414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_245418:
    // 0x245418: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x245418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24541c:
    // 0x24541c: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x24541cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_245420:
    // 0x245420: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x245420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_245424:
    // 0x245424: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_245428:
    if (ctx->pc == 0x245428u) {
        ctx->pc = 0x245428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245424u;
        // 0x245428: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24542Cu;
        goto label_24542c;
    }
    ctx->pc = 0x245424u;
    {
        const bool branch_taken_0x245424 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x245428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245424u;
        // 0x245428: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245424) {
            ctx->pc = 0x24544Cu;
            goto label_24544c;
        }
    }
    ctx->pc = 0x24542Cu;
label_24542c:
    // 0x24542c: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_245430:
    // 0x245430: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x245430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_245434:
    // 0x245434: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x245434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_245438:
    // 0x245438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24543c:
    // 0x24543c: 0xdc73fff8  ld          $s3, -0x8($v1)
    ctx->pc = 0x24543cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_245440:
    // 0x245440: 0x13383f  dsra32      $a3, $s3, 0
    ctx->pc = 0x245440u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> (32 + 0));
label_245444:
    // 0x245444: 0x10000003  b           . + 4 + (0x3 << 2)
label_245448:
    if (ctx->pc == 0x245448u) {
        ctx->pc = 0x245448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245444u;
        // 0x245448: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24544Cu;
        goto label_24544c;
    }
    ctx->pc = 0x245444u;
    {
        const bool branch_taken_0x245444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245444u;
        // 0x245448: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245444) {
            ctx->pc = 0x245454u;
            goto label_245454;
        }
    }
    ctx->pc = 0x24544Cu;
label_24544c:
    // 0x24544c: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x24544cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_245450:
    // 0x245450: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x245450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_245454:
    // 0x245454: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_245458:
    if (ctx->pc == 0x245458u) {
        ctx->pc = 0x245458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245454u;
        // 0x245458: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24545Cu;
        goto label_24545c;
    }
    ctx->pc = 0x245454u;
    {
        const bool branch_taken_0x245454 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x245458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245454u;
        // 0x245458: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245454) {
            ctx->pc = 0x24546Cu;
            goto label_24546c;
        }
    }
    ctx->pc = 0x24545Cu;
label_24545c:
    // 0x24545c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24545cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_245460:
    // 0x245460: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x245460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_245464:
    // 0x245464: 0x10000002  b           . + 4 + (0x2 << 2)
label_245468:
    if (ctx->pc == 0x245468u) {
        ctx->pc = 0x245468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245464u;
        // 0x245468: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24546Cu;
        goto label_24546c;
    }
    ctx->pc = 0x245464u;
    {
        const bool branch_taken_0x245464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245464u;
        // 0x245468: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245464) {
            ctx->pc = 0x245470u;
            goto label_245470;
        }
    }
    ctx->pc = 0x24546Cu;
label_24546c:
    // 0x24546c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24546cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_245470:
    // 0x245470: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x245470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_245474:
    // 0x245474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245478:
    // 0x245478: 0xe0f809  jalr        $a3
label_24547c:
    if (ctx->pc == 0x24547Cu) {
        ctx->pc = 0x24547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245478u;
        // 0x24547c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245480u;
        goto label_245480;
    }
    ctx->pc = 0x245478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x245480u);
        ctx->pc = 0x24547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245478u;
        // 0x24547c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245478u, 0x245480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245480u;
label_245480:
    // 0x245480: 0x10000118  b           . + 4 + (0x118 << 2)
label_245484:
    if (ctx->pc == 0x245484u) {
        ctx->pc = 0x245484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245480u;
        // 0x245484: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245488u;
        goto label_245488;
    }
    ctx->pc = 0x245480u;
    {
        const bool branch_taken_0x245480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245480u;
        // 0x245484: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245480) {
            ctx->pc = 0x2458E4u;
            goto label_2458e4;
        }
    }
    ctx->pc = 0x245488u;
label_245488:
    // 0x245488: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x245488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_24548c:
    // 0x24548c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x24548cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_245490:
    // 0x245490: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x245490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_245494:
    // 0x245494: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_245498:
    // 0x245498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24549c:
    // 0x24549c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24549cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2454a0:
    // 0x2454a0: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2454a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2454a4:
    // 0x2454a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2454a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2454a8:
    // 0x2454a8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2454a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2454ac:
    // 0x2454ac: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x2454acu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_2454b0:
    // 0x2454b0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2454b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2454b4:
    // 0x2454b4: 0xc088f2c  jal         func_223CB0
label_2454b8:
    if (ctx->pc == 0x2454B8u) {
        ctx->pc = 0x2454B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454B4u;
        // 0x2454b8: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454BCu;
        goto label_2454bc;
    }
    ctx->pc = 0x2454B4u;
    SET_GPR_U32(ctx, 31, 0x2454BCu);
    ctx->pc = 0x2454B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454B4u;
    // 0x2454b8: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x2454B4u, 0x2454BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454BCu;
label_2454bc:
    // 0x2454bc: 0x54400109  bnel        $v0, $zero, . + 4 + (0x109 << 2)
label_2454c0:
    if (ctx->pc == 0x2454C0u) {
        ctx->pc = 0x2454C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454BCu;
        // 0x2454c0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454C4u;
        goto label_2454c4;
    }
    ctx->pc = 0x2454BCu;
    {
        const bool branch_taken_0x2454bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2454bc) {
            ctx->pc = 0x2454C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2454BCu;
            // 0x2454c0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2458E4u;
            goto label_2458e4;
        }
    }
    ctx->pc = 0x2454C4u;
label_2454c4:
    // 0x2454c4: 0xc089f4a  jal         func_227D28
label_2454c8:
    if (ctx->pc == 0x2454C8u) {
        ctx->pc = 0x2454C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454C4u;
        // 0x2454c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454CCu;
        goto label_2454cc;
    }
    ctx->pc = 0x2454C4u;
    SET_GPR_U32(ctx, 31, 0x2454CCu);
    ctx->pc = 0x2454C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454C4u;
    // 0x2454c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x2454C4u, 0x2454CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454CCu;
label_2454cc:
    // 0x2454cc: 0x54400105  bnel        $v0, $zero, . + 4 + (0x105 << 2)
label_2454d0:
    if (ctx->pc == 0x2454D0u) {
        ctx->pc = 0x2454D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454CCu;
        // 0x2454d0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454D4u;
        goto label_2454d4;
    }
    ctx->pc = 0x2454CCu;
    {
        const bool branch_taken_0x2454cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2454cc) {
            ctx->pc = 0x2454D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2454CCu;
            // 0x2454d0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2458E4u;
            goto label_2458e4;
        }
    }
    ctx->pc = 0x2454D4u;
label_2454d4:
    // 0x2454d4: 0xc08a01c  jal         func_228070
label_2454d8:
    if (ctx->pc == 0x2454D8u) {
        ctx->pc = 0x2454D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454D4u;
        // 0x2454d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454DCu;
        goto label_2454dc;
    }
    ctx->pc = 0x2454D4u;
    SET_GPR_U32(ctx, 31, 0x2454DCu);
    ctx->pc = 0x2454D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454D4u;
    // 0x2454d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2454D4u, 0x2454DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454DCu;
label_2454dc:
    // 0x2454dc: 0x54400101  bnel        $v0, $zero, . + 4 + (0x101 << 2)
label_2454e0:
    if (ctx->pc == 0x2454E0u) {
        ctx->pc = 0x2454E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454DCu;
        // 0x2454e0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454E4u;
        goto label_2454e4;
    }
    ctx->pc = 0x2454DCu;
    {
        const bool branch_taken_0x2454dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2454dc) {
            ctx->pc = 0x2454E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2454DCu;
            // 0x2454e0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2458E4u;
            goto label_2458e4;
        }
    }
    ctx->pc = 0x2454E4u;
label_2454e4:
    // 0x2454e4: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x2454e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_2454e8:
    // 0x2454e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2454ec:
    // 0x2454ec: 0xc46102e8  lwc1        $f1, 0x2E8($v1)
    ctx->pc = 0x2454ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2454f0:
    // 0x2454f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2454f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2454f4:
    // 0x2454f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2454f8:
    // 0x2454f8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2454f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2454fc:
    // 0x2454fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2454fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245500:
    // 0x245500: 0x0  nop
    ctx->pc = 0x245500u;
    // NOP
label_245504:
    // 0x245504: 0x450000f6  bc1f        . + 4 + (0xF6 << 2)
label_245508:
    if (ctx->pc == 0x245508u) {
        ctx->pc = 0x245508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245504u;
        // 0x245508: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24550Cu;
        goto label_24550c;
    }
    ctx->pc = 0x245504u;
    {
        const bool branch_taken_0x245504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245504u;
        // 0x245508: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245504) {
            ctx->pc = 0x2458E0u;
            goto label_2458e0;
        }
    }
    ctx->pc = 0x24550Cu;
label_24550c:
    // 0x24550c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x24550cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_245510:
    // 0x245510: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x245510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_245514:
    // 0x245514: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x245514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_245518:
    // 0x245518: 0xc0cd8ec  jal         func_3363B0
label_24551c:
    if (ctx->pc == 0x24551Cu) {
        ctx->pc = 0x24551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245518u;
        // 0x24551c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245520u;
        goto label_245520;
    }
    ctx->pc = 0x245518u;
    SET_GPR_U32(ctx, 31, 0x245520u);
    ctx->pc = 0x24551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245518u;
    // 0x24551c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x245518u, 0x245520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245520u;
label_245520:
    // 0x245520: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x245520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_245524:
    // 0x245524: 0xc0cd5ea  jal         func_3357A8
label_245528:
    if (ctx->pc == 0x245528u) {
        ctx->pc = 0x245528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245524u;
        // 0x245528: 0xc7ad0040  lwc1        $f13, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24552Cu;
        goto label_24552c;
    }
    ctx->pc = 0x245524u;
    SET_GPR_U32(ctx, 31, 0x24552Cu);
    ctx->pc = 0x245528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245524u;
    // 0x245528: 0xc7ad0040  lwc1        $f13, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x245524u, 0x24552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24552Cu;
label_24552c:
    // 0x24552c: 0x92a30018  lbu         $v1, 0x18($s5)
    ctx->pc = 0x24552cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_245530:
    // 0x245530: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x245530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_245534:
    // 0x245534: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245538:
    // 0x245538: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x245538u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_24553c:
    // 0x24553c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24553cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_245540:
    // 0x245540: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x245540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_245544:
    // 0x245544: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_245548:
    // 0x245548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24554c:
    // 0x24554c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245550:
    // 0x245550: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x245550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245554:
    // 0x245554: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x245554u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_245558:
    // 0x245558: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x245558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24555c:
    // 0x24555c: 0x0  nop
    ctx->pc = 0x24555cu;
    // NOP
label_245560:
    // 0x245560: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_245564:
    if (ctx->pc == 0x245564u) {
        ctx->pc = 0x245568u;
        goto label_245568;
    }
    ctx->pc = 0x245560u;
    {
        const bool branch_taken_0x245560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245560) {
            ctx->pc = 0x24557Cu;
            goto label_24557c;
        }
    }
    ctx->pc = 0x245568u;
label_245568:
    // 0x245568: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x245568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_24556c:
    // 0x24556c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24556cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_245570:
    // 0x245570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245574:
    // 0x245574: 0x0  nop
    ctx->pc = 0x245574u;
    // NOP
label_245578:
    // 0x245578: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x245578u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_24557c:
    // 0x24557c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x24557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_245580:
    // 0x245580: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_245584:
    // 0x245584: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x245584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_245588:
    // 0x245588: 0x0  nop
    ctx->pc = 0x245588u;
    // NOP
label_24558c:
    // 0x24558c: 0x4602b036  c.le.s      $f22, $f2
    ctx->pc = 0x24558cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245590:
    // 0x245590: 0x0  nop
    ctx->pc = 0x245590u;
    // NOP
label_245594:
    // 0x245594: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_245598:
    if (ctx->pc == 0x245598u) {
        ctx->pc = 0x245598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245594u;
        // 0x245598: 0x4619b501  sub.s       $f20, $f22, $f25 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24559Cu;
        goto label_24559c;
    }
    ctx->pc = 0x245594u;
    {
        const bool branch_taken_0x245594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245594) {
            ctx->pc = 0x245598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245594u;
            // 0x245598: 0x4619b501  sub.s       $f20, $f22, $f25 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2455B4u;
            goto label_2455b4;
        }
    }
    ctx->pc = 0x24559Cu;
label_24559c:
    // 0x24559c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x24559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2455a0:
    // 0x2455a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2455a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2455a4:
    // 0x2455a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2455a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2455a8:
    // 0x2455a8: 0x0  nop
    ctx->pc = 0x2455a8u;
    // NOP
label_2455ac:
    // 0x2455ac: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2455acu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2455b0:
    // 0x2455b0: 0x4619b501  sub.s       $f20, $f22, $f25
    ctx->pc = 0x2455b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[25]);
label_2455b4:
    // 0x2455b4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2455b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2455b8:
    // 0x2455b8: 0x0  nop
    ctx->pc = 0x2455b8u;
    // NOP
label_2455bc:
    // 0x2455bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2455c0:
    if (ctx->pc == 0x2455C0u) {
        ctx->pc = 0x2455C4u;
        goto label_2455c4;
    }
    ctx->pc = 0x2455BCu;
    {
        const bool branch_taken_0x2455bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2455bc) {
            ctx->pc = 0x2455D8u;
            goto label_2455d8;
        }
    }
    ctx->pc = 0x2455C4u;
label_2455c4:
    // 0x2455c4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2455c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2455c8:
    // 0x2455c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2455c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2455cc:
    // 0x2455cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2455ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2455d0:
    // 0x2455d0: 0x0  nop
    ctx->pc = 0x2455d0u;
    // NOP
label_2455d4:
    // 0x2455d4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2455d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2455d8:
    // 0x2455d8: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x2455d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2455dc:
    // 0x2455dc: 0x0  nop
    ctx->pc = 0x2455dcu;
    // NOP
label_2455e0:
    // 0x2455e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2455e4:
    if (ctx->pc == 0x2455E4u) {
        ctx->pc = 0x2455E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455E0u;
        // 0x2455e4: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2455E8u;
        goto label_2455e8;
    }
    ctx->pc = 0x2455E0u;
    {
        const bool branch_taken_0x2455e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2455E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455E0u;
        // 0x2455e4: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455e0) {
            ctx->pc = 0x2455FCu;
            goto label_2455fc;
        }
    }
    ctx->pc = 0x2455E8u;
label_2455e8:
    // 0x2455e8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2455e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2455ec:
    // 0x2455ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2455ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2455f0:
    // 0x2455f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2455f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2455f4:
    // 0x2455f4: 0x0  nop
    ctx->pc = 0x2455f4u;
    // NOP
label_2455f8:
    // 0x2455f8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2455f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2455fc:
    // 0x2455fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2455fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245600:
    // 0x245600: 0x4600a605  abs.s       $f24, $f20
    ctx->pc = 0x245600u;
    ctx->f[24] = FPU_ABS_S(ctx->f[20]);
label_245604:
    // 0x245604: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x245604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_245608:
    // 0x245608: 0xc0884f6  jal         func_2213D8
label_24560c:
    if (ctx->pc == 0x24560Cu) {
        ctx->pc = 0x24560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245608u;
        // 0x24560c: 0xc45a0170  lwc1        $f26, 0x170($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245610u;
        goto label_245610;
    }
    ctx->pc = 0x245608u;
    SET_GPR_U32(ctx, 31, 0x245610u);
    ctx->pc = 0x24560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245608u;
    // 0x24560c: 0xc45a0170  lwc1        $f26, 0x170($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x245608u, 0x245610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245610u;
label_245610:
    // 0x245610: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_245614:
    // 0x245614: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x245614u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_245618:
    // 0x245618: 0x8c620308  lw          $v0, 0x308($v1)
    ctx->pc = 0x245618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 776)));
label_24561c:
    // 0x24561c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_245620:
    if (ctx->pc == 0x245620u) {
        ctx->pc = 0x245620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24561Cu;
        // 0x245620: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245624u;
        goto label_245624;
    }
    ctx->pc = 0x24561Cu;
    {
        const bool branch_taken_0x24561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24561Cu;
        // 0x245620: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24561c) {
            ctx->pc = 0x245634u;
            goto label_245634;
        }
    }
    ctx->pc = 0x245624u;
label_245624:
    // 0x245624: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x245624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_245628:
    // 0x245628: 0x8c430304  lw          $v1, 0x304($v0)
    ctx->pc = 0x245628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_24562c:
    // 0x24562c: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_245630:
    if (ctx->pc == 0x245630u) {
        ctx->pc = 0x245634u;
        goto label_245634;
    }
    ctx->pc = 0x24562Cu;
    {
        const bool branch_taken_0x24562c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24562c) {
            ctx->pc = 0x245788u;
            goto label_245788;
        }
    }
    ctx->pc = 0x245634u;
label_245634:
    // 0x245634: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x245634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_245638:
    // 0x245638: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24563c:
    // 0x24563c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24563cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245640:
    // 0x245640: 0x0  nop
    ctx->pc = 0x245640u;
    // NOP
label_245644:
    // 0x245644: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x245644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245648:
    // 0x245648: 0x0  nop
    ctx->pc = 0x245648u;
    // NOP
label_24564c:
    // 0x24564c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_245650:
    if (ctx->pc == 0x245650u) {
        ctx->pc = 0x245650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24564Cu;
        // 0x245650: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245654u;
        goto label_245654;
    }
    ctx->pc = 0x24564Cu;
    {
        const bool branch_taken_0x24564c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24564Cu;
        // 0x245650: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24564c) {
            ctx->pc = 0x2456ACu;
            goto label_2456ac;
        }
    }
    ctx->pc = 0x245654u;
label_245654:
    // 0x245654: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x245654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245658:
    // 0x245658: 0x0  nop
    ctx->pc = 0x245658u;
    // NOP
label_24565c:
    // 0x24565c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_245660:
    if (ctx->pc == 0x245660u) {
        ctx->pc = 0x245664u;
        goto label_245664;
    }
    ctx->pc = 0x24565Cu;
    {
        const bool branch_taken_0x24565c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24565c) {
            ctx->pc = 0x245678u;
            goto label_245678;
        }
    }
    ctx->pc = 0x245664u;
label_245664:
    // 0x245664: 0xc60005e4  lwc1        $f0, 0x5E4($s0)
    ctx->pc = 0x245664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245668:
    // 0x245668: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x245668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24566c:
    // 0x24566c: 0x0  nop
    ctx->pc = 0x24566cu;
    // NOP
label_245670:
    // 0x245670: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_245674:
    if (ctx->pc == 0x245674u) {
        ctx->pc = 0x245678u;
        goto label_245678;
    }
    ctx->pc = 0x245670u;
    {
        const bool branch_taken_0x245670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245670) {
            ctx->pc = 0x24569Cu;
            goto label_24569c;
        }
    }
    ctx->pc = 0x245678u;
label_245678:
    // 0x245678: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x245678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24567c:
    // 0x24567c: 0x0  nop
    ctx->pc = 0x24567cu;
    // NOP
label_245680:
    // 0x245680: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_245684:
    if (ctx->pc == 0x245684u) {
        ctx->pc = 0x245684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245680u;
        // 0x245684: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245688u;
        goto label_245688;
    }
    ctx->pc = 0x245680u;
    {
        const bool branch_taken_0x245680 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245680u;
        // 0x245684: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245680) {
            ctx->pc = 0x2456ACu;
            goto label_2456ac;
        }
    }
    ctx->pc = 0x245688u;
label_245688:
    // 0x245688: 0xc60005e4  lwc1        $f0, 0x5E4($s0)
    ctx->pc = 0x245688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24568c:
    // 0x24568c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x24568cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245690:
    // 0x245690: 0x0  nop
    ctx->pc = 0x245690u;
    // NOP
label_245694:
    // 0x245694: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_245698:
    if (ctx->pc == 0x245698u) {
        ctx->pc = 0x245698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245694u;
        // 0x245698: 0xc60005e0  lwc1        $f0, 0x5E0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24569Cu;
        goto label_24569c;
    }
    ctx->pc = 0x245694u;
    {
        const bool branch_taken_0x245694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245694) {
            ctx->pc = 0x245698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245694u;
            // 0x245698: 0xc60005e0  lwc1        $f0, 0x5E0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2456B0u;
            goto label_2456b0;
        }
    }
    ctx->pc = 0x24569Cu;
label_24569c:
    // 0x24569c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x24569cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_2456a0:
    // 0x2456a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2456a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2456a4:
    // 0x2456a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2456a8:
    if (ctx->pc == 0x2456A8u) {
        ctx->pc = 0x2456A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456A4u;
        // 0x2456a8: 0xc60005e0  lwc1        $f0, 0x5E0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456ACu;
        goto label_2456ac;
    }
    ctx->pc = 0x2456A4u;
    {
        const bool branch_taken_0x2456a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456A4u;
        // 0x2456a8: 0xc60005e0  lwc1        $f0, 0x5E0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456a4) {
            ctx->pc = 0x2456B4u;
            goto label_2456b4;
        }
    }
    ctx->pc = 0x2456ACu;
label_2456ac:
    // 0x2456ac: 0xc60005e0  lwc1        $f0, 0x5E0($s0)
    ctx->pc = 0x2456acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2456b0:
    // 0x2456b0: 0xc4410314  lwc1        $f1, 0x314($v0)
    ctx->pc = 0x2456b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2456b4:
    // 0x2456b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2456b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2456b8:
    // 0x2456b8: 0xe60005e0  swc1        $f0, 0x5E0($s0)
    ctx->pc = 0x2456b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1504), bits); }
label_2456bc:
    // 0x2456bc: 0x8c820308  lw          $v0, 0x308($a0)
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 776)));
label_2456c0:
    // 0x2456c0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2456c4:
    if (ctx->pc == 0x2456C4u) {
        ctx->pc = 0x2456C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456C0u;
        // 0x2456c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456C8u;
        goto label_2456c8;
    }
    ctx->pc = 0x2456C0u;
    {
        const bool branch_taken_0x2456c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456C0u;
        // 0x2456c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456c0) {
            ctx->pc = 0x24572Cu;
            goto label_24572c;
        }
    }
    ctx->pc = 0x2456C8u;
label_2456c8:
    // 0x2456c8: 0xc4400318  lwc1        $f0, 0x318($v0)
    ctx->pc = 0x2456c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2456cc:
    // 0x2456cc: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2456ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2456d0:
    // 0x2456d0: 0x0  nop
    ctx->pc = 0x2456d0u;
    // NOP
label_2456d4:
    // 0x2456d4: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_2456d8:
    if (ctx->pc == 0x2456D8u) {
        ctx->pc = 0x2456D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456D4u;
        // 0x2456d8: 0xc60005e0  lwc1        $f0, 0x5E0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456DCu;
        goto label_2456dc;
    }
    ctx->pc = 0x2456D4u;
    {
        const bool branch_taken_0x2456d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2456d4) {
            ctx->pc = 0x2456D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2456D4u;
            // 0x2456d8: 0xc60005e0  lwc1        $f0, 0x5E0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x245748u;
            goto label_245748;
        }
    }
    ctx->pc = 0x2456DCu;
label_2456dc:
    // 0x2456dc: 0x0  nop
    ctx->pc = 0x2456dcu;
    // NOP
label_2456e0:
    // 0x2456e0: 0x0  nop
    ctx->pc = 0x2456e0u;
    // NOP
label_2456e4:
    // 0x2456e4: 0x4600c303  div.s       $f12, $f24, $f0
    ctx->pc = 0x2456e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
label_2456e8:
    // 0x2456e8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2456e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2456ec:
    // 0x2456ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2456ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2456f0:
    // 0x2456f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2456f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2456f4:
    // 0x2456f4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2456f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2456f8:
    // 0x2456f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2456f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2456fc:
    // 0x2456fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2456fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245700:
    // 0x245700: 0x0  nop
    ctx->pc = 0x245700u;
    // NOP
label_245704:
    // 0x245704: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x245704u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_245708:
    // 0x245708: 0xc12e310  jal         func_4B8C40
label_24570c:
    if (ctx->pc == 0x24570Cu) {
        ctx->pc = 0x24570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245708u;
        // 0x24570c: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245710u;
        goto label_245710;
    }
    ctx->pc = 0x245708u;
    SET_GPR_U32(ctx, 31, 0x245710u);
    ctx->pc = 0x24570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245708u;
    // 0x24570c: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x245708u, 0x245710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245710u;
label_245710:
    // 0x245710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_245714:
    // 0x245714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_245718:
    // 0x245718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_24571c:
    // 0x24571c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24571cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_245720:
    // 0x245720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x245720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_245724:
    // 0x245724: 0x10000006  b           . + 4 + (0x6 << 2)
label_245728:
    if (ctx->pc == 0x245728u) {
        ctx->pc = 0x245728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245724u;
        // 0x245728: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24572Cu;
        goto label_24572c;
    }
    ctx->pc = 0x245724u;
    {
        const bool branch_taken_0x245724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245724u;
        // 0x245728: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245724) {
            ctx->pc = 0x245740u;
            goto label_245740;
        }
    }
    ctx->pc = 0x24572Cu;
label_24572c:
    // 0x24572c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_245730:
    // 0x245730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_245734:
    // 0x245734: 0xc4400318  lwc1        $f0, 0x318($v0)
    ctx->pc = 0x245734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245738:
    // 0x245738: 0x4600c003  div.s       $f0, $f24, $f0
    ctx->pc = 0x245738u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
label_24573c:
    // 0x24573c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x24573cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_245740:
    // 0x245740: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x245740u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_245744:
    // 0x245744: 0xc60005e0  lwc1        $f0, 0x5E0($s0)
    ctx->pc = 0x245744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245748:
    // 0x245748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24574c:
    // 0x24574c: 0xc0884f6  jal         func_2213D8
label_245750:
    if (ctx->pc == 0x245750u) {
        ctx->pc = 0x245750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24574Cu;
        // 0x245750: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245754u;
        goto label_245754;
    }
    ctx->pc = 0x24574Cu;
    SET_GPR_U32(ctx, 31, 0x245754u);
    ctx->pc = 0x245750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24574Cu;
    // 0x245750: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x24574Cu, 0x245754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245754u;
label_245754:
    // 0x245754: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x245754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245758:
    // 0x245758: 0x0  nop
    ctx->pc = 0x245758u;
    // NOP
label_24575c:
    // 0x24575c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_245760:
    if (ctx->pc == 0x245760u) {
        ctx->pc = 0x245764u;
        goto label_245764;
    }
    ctx->pc = 0x24575Cu;
    {
        const bool branch_taken_0x24575c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24575c) {
            ctx->pc = 0x245770u;
            goto label_245770;
        }
    }
    ctx->pc = 0x245764u;
label_245764:
    // 0x245764: 0xc0884f6  jal         func_2213D8
label_245768:
    if (ctx->pc == 0x245768u) {
        ctx->pc = 0x245768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245764u;
        // 0x245768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24576Cu;
        goto label_24576c;
    }
    ctx->pc = 0x245764u;
    SET_GPR_U32(ctx, 31, 0x24576Cu);
    ctx->pc = 0x245768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245764u;
    // 0x245768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x245764u, 0x24576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24576Cu;
label_24576c:
    // 0x24576c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x24576cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_245770:
    // 0x245770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245774:
    // 0x245774: 0x0  nop
    ctx->pc = 0x245774u;
    // NOP
label_245778:
    // 0x245778: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x245778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24577c:
    // 0x24577c: 0x0  nop
    ctx->pc = 0x24577cu;
    // NOP
label_245780:
    // 0x245780: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_245784:
    if (ctx->pc == 0x245784u) {
        ctx->pc = 0x245784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245780u;
        // 0x245784: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245788u;
        goto label_245788;
    }
    ctx->pc = 0x245780u;
    {
        const bool branch_taken_0x245780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245780) {
            ctx->pc = 0x245784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245780u;
            // 0x245784: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x245788u;
            goto label_245788;
        }
    }
    ctx->pc = 0x245788u;
label_245788:
    // 0x245788: 0x4618a834  c.lt.s      $f21, $f24
    ctx->pc = 0x245788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24578c:
    // 0x24578c: 0xe61405e4  swc1        $f20, 0x5E4($s0)
    ctx->pc = 0x24578cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1508), bits); }
label_245790:
    // 0x245790: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_245794:
    if (ctx->pc == 0x245794u) {
        ctx->pc = 0x245794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245790u;
        // 0x245794: 0xe61505e0  swc1        $f21, 0x5E0($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1504), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245798u;
        goto label_245798;
    }
    ctx->pc = 0x245790u;
    {
        const bool branch_taken_0x245790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245790u;
        // 0x245794: 0xe61505e0  swc1        $f21, 0x5E0($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245790) {
            ctx->pc = 0x2457B4u;
            goto label_2457b4;
        }
    }
    ctx->pc = 0x245798u;
label_245798:
    // 0x245798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24579c:
    // 0x24579c: 0x0  nop
    ctx->pc = 0x24579cu;
    // NOP
label_2457a0:
    // 0x2457a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2457a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2457a4:
    // 0x2457a4: 0x0  nop
    ctx->pc = 0x2457a4u;
    // NOP
label_2457a8:
    // 0x2457a8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2457ac:
    if (ctx->pc == 0x2457ACu) {
        ctx->pc = 0x2457ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457A8u;
        // 0x2457ac: 0x4615cd80  add.s       $f22, $f25, $f21 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457B0u;
        goto label_2457b0;
    }
    ctx->pc = 0x2457A8u;
    {
        const bool branch_taken_0x2457a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2457a8) {
            ctx->pc = 0x2457ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2457A8u;
            // 0x2457ac: 0x4615cd80  add.s       $f22, $f25, $f21 (Delay Slot)
            ctx->f[22] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2457B4u;
            goto label_2457b4;
        }
    }
    ctx->pc = 0x2457B0u;
label_2457b0:
    // 0x2457b0: 0x4615cd81  sub.s       $f22, $f25, $f21
    ctx->pc = 0x2457b0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[25], ctx->f[21]);
label_2457b4:
    // 0x2457b4: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x2457b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_2457b8:
    // 0x2457b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2457b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2457bc:
    // 0x2457bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2457bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2457c0:
    // 0x2457c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2457c4:
    // 0x2457c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2457c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2457c8:
    // 0x2457c8: 0xc12e29c  jal         func_4B8A70
label_2457cc:
    if (ctx->pc == 0x2457CCu) {
        ctx->pc = 0x2457CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C8u;
        // 0x2457cc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457D0u;
        goto label_2457d0;
    }
    ctx->pc = 0x2457C8u;
    SET_GPR_U32(ctx, 31, 0x2457D0u);
    ctx->pc = 0x2457CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457C8u;
    // 0x2457cc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2457C8u, 0x2457D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457D0u;
label_2457d0:
    // 0x2457d0: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x2457d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_2457d4:
    // 0x2457d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2457d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2457d8:
    // 0x2457d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2457d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2457dc:
    // 0x2457dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2457e0:
    // 0x2457e0: 0xc12e310  jal         func_4B8C40
label_2457e4:
    if (ctx->pc == 0x2457E4u) {
        ctx->pc = 0x2457E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457E0u;
        // 0x2457e4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457E8u;
        goto label_2457e8;
    }
    ctx->pc = 0x2457E0u;
    SET_GPR_U32(ctx, 31, 0x2457E8u);
    ctx->pc = 0x2457E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457E0u;
    // 0x2457e4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2457E0u, 0x2457E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457E8u;
label_2457e8:
    // 0x2457e8: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x2457e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2457ec:
    // 0x2457ec: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2457ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2457f0:
    // 0x2457f0: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2457f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2457f4:
    // 0x2457f4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2457f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2457f8:
    // 0x2457f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2457f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2457fc:
    // 0x2457fc: 0x4403d000  mfc1        $v1, $f26
    ctx->pc = 0x2457fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[26], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_245800:
    // 0x245800: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x245800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_245804:
    // 0x245804: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x245804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245808:
    // 0x245808: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x245808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24580c:
    // 0x24580c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24580cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_245810:
    // 0x245810: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x245810u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_245814:
    // 0x245814: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x245814u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_245818:
    // 0x245818: 0xc12e29c  jal         func_4B8A70
label_24581c:
    if (ctx->pc == 0x24581Cu) {
        ctx->pc = 0x24581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245818u;
        // 0x24581c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245820u;
        goto label_245820;
    }
    ctx->pc = 0x245818u;
    SET_GPR_U32(ctx, 31, 0x245820u);
    ctx->pc = 0x24581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245818u;
    // 0x24581c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x245818u, 0x245820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245820u;
label_245820:
    // 0x245820: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x245820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_245824:
    // 0x245824: 0xc12e310  jal         func_4B8C40
label_245828:
    if (ctx->pc == 0x245828u) {
        ctx->pc = 0x245828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245824u;
        // 0x245828: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24582Cu;
        goto label_24582c;
    }
    ctx->pc = 0x245824u;
    SET_GPR_U32(ctx, 31, 0x24582Cu);
    ctx->pc = 0x245828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245824u;
    // 0x245828: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x245824u, 0x24582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24582Cu;
label_24582c:
    // 0x24582c: 0x4600d047  neg.s       $f1, $f26
    ctx->pc = 0x24582cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[26]);
label_245830:
    // 0x245830: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x245830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_245834:
    // 0x245834: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x245834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_245838:
    // 0x245838: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x245838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24583c:
    // 0x24583c: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x24583cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_245840:
    // 0x245840: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x245840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_245844:
    // 0x245844: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x245844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_245848:
    // 0x245848: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x245848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_24584c:
    // 0x24584c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x24584cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_245850:
    // 0x245850: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x245850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245854:
    // 0x245854: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x245854u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_245858:
    // 0x245858: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x245858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24585c:
    // 0x24585c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24585cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_245860:
    // 0x245860: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x245860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_245864:
    // 0x245864: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_245868:
    // 0x245868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24586c:
    // 0x24586c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x24586cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_245870:
    // 0x245870: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x245870u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_245874:
    // 0x245874: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_245878:
    // 0x245878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24587c:
    // 0x24587c: 0xc60003a0  lwc1        $f0, 0x3A0($s0)
    ctx->pc = 0x24587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245880:
    // 0x245880: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x245880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_245884:
    // 0x245884: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x245884u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_245888:
    // 0x245888: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x245888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24588c:
    // 0x24588c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24588cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_245890:
    // 0x245890: 0xc12e310  jal         func_4B8C40
label_245894:
    if (ctx->pc == 0x245894u) {
        ctx->pc = 0x245894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245890u;
        // 0x245894: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245898u;
        goto label_245898;
    }
    ctx->pc = 0x245890u;
    SET_GPR_U32(ctx, 31, 0x245898u);
    ctx->pc = 0x245894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245890u;
    // 0x245894: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x245890u, 0x245898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245898u;
label_245898:
    // 0x245898: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x245898u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_24589c:
    // 0x24589c: 0xc12e29c  jal         func_4B8A70
label_2458a0:
    if (ctx->pc == 0x2458A0u) {
        ctx->pc = 0x2458A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24589Cu;
        // 0x2458a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458A4u;
        goto label_2458a4;
    }
    ctx->pc = 0x24589Cu;
    SET_GPR_U32(ctx, 31, 0x2458A4u);
    ctx->pc = 0x2458A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24589Cu;
    // 0x2458a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x24589Cu, 0x2458A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458A4u;
label_2458a4:
    // 0x2458a4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2458a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2458a8:
    // 0x2458a8: 0x4405a800  mfc1        $a1, $f21
    ctx->pc = 0x2458a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2458ac:
    // 0x2458ac: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x2458acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_2458b0:
    // 0x2458b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2458b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2458b4:
    // 0x2458b4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2458b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2458b8:
    // 0x2458b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2458b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2458bc:
    // 0x2458bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2458bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2458c0:
    // 0x2458c0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2458c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2458c4:
    // 0x2458c4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2458c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2458c8:
    // 0x2458c8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2458c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2458cc:
    // 0x2458cc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2458ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2458d0:
    // 0x2458d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2458d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2458d4:
    // 0x2458d4: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x2458d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2458d8:
    // 0x2458d8: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2458d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_2458dc:
    // 0x2458dc: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x2458dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2458e0:
    // 0x2458e0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2458e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2458e4:
    // 0x2458e4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2458e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2458e8:
    // 0x2458e8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2458e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2458ec:
    // 0x2458ec: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2458ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2458f0:
    // 0x2458f0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2458f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2458f4:
    // 0x2458f4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2458f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2458f8:
    // 0x2458f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2458f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2458fc:
    // 0x2458fc: 0xc7ba0120  lwc1        $f26, 0x120($sp)
    ctx->pc = 0x2458fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_245900:
    // 0x245900: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x245900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_245904:
    // 0x245904: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x245904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_245908:
    // 0x245908: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x245908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_24590c:
    // 0x24590c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x24590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_245910:
    // 0x245910: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x245910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_245914:
    // 0x245914: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x245914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_245918:
    // 0x245918: 0x3e00008  jr          $ra
label_24591c:
    if (ctx->pc == 0x24591Cu) {
        ctx->pc = 0x24591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245918u;
        // 0x24591c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245920u;
        goto label_fallthrough_0x245918;
    }
    ctx->pc = 0x245918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245918u;
        // 0x24591c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245918:
    ctx->pc = 0x245920u;
}
