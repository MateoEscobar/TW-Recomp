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

// Function: sub_002761C8
// Address: 0x2761c8 - 0x2766b0
void sub_002761C8_0x2761c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002761C8_0x2761c8");
#endif

    switch (ctx->pc) {
        case 0x2761c8u: goto label_2761c8;
        case 0x2761ccu: goto label_2761cc;
        case 0x2761d0u: goto label_2761d0;
        case 0x2761d4u: goto label_2761d4;
        case 0x2761d8u: goto label_2761d8;
        case 0x2761dcu: goto label_2761dc;
        case 0x2761e0u: goto label_2761e0;
        case 0x2761e4u: goto label_2761e4;
        case 0x2761e8u: goto label_2761e8;
        case 0x2761ecu: goto label_2761ec;
        case 0x2761f0u: goto label_2761f0;
        case 0x2761f4u: goto label_2761f4;
        case 0x2761f8u: goto label_2761f8;
        case 0x2761fcu: goto label_2761fc;
        case 0x276200u: goto label_276200;
        case 0x276204u: goto label_276204;
        case 0x276208u: goto label_276208;
        case 0x27620cu: goto label_27620c;
        case 0x276210u: goto label_276210;
        case 0x276214u: goto label_276214;
        case 0x276218u: goto label_276218;
        case 0x27621cu: goto label_27621c;
        case 0x276220u: goto label_276220;
        case 0x276224u: goto label_276224;
        case 0x276228u: goto label_276228;
        case 0x27622cu: goto label_27622c;
        case 0x276230u: goto label_276230;
        case 0x276234u: goto label_276234;
        case 0x276238u: goto label_276238;
        case 0x27623cu: goto label_27623c;
        case 0x276240u: goto label_276240;
        case 0x276244u: goto label_276244;
        case 0x276248u: goto label_276248;
        case 0x27624cu: goto label_27624c;
        case 0x276250u: goto label_276250;
        case 0x276254u: goto label_276254;
        case 0x276258u: goto label_276258;
        case 0x27625cu: goto label_27625c;
        case 0x276260u: goto label_276260;
        case 0x276264u: goto label_276264;
        case 0x276268u: goto label_276268;
        case 0x27626cu: goto label_27626c;
        case 0x276270u: goto label_276270;
        case 0x276274u: goto label_276274;
        case 0x276278u: goto label_276278;
        case 0x27627cu: goto label_27627c;
        case 0x276280u: goto label_276280;
        case 0x276284u: goto label_276284;
        case 0x276288u: goto label_276288;
        case 0x27628cu: goto label_27628c;
        case 0x276290u: goto label_276290;
        case 0x276294u: goto label_276294;
        case 0x276298u: goto label_276298;
        case 0x27629cu: goto label_27629c;
        case 0x2762a0u: goto label_2762a0;
        case 0x2762a4u: goto label_2762a4;
        case 0x2762a8u: goto label_2762a8;
        case 0x2762acu: goto label_2762ac;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762b4u: goto label_2762b4;
        case 0x2762b8u: goto label_2762b8;
        case 0x2762bcu: goto label_2762bc;
        case 0x2762c0u: goto label_2762c0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762c8u: goto label_2762c8;
        case 0x2762ccu: goto label_2762cc;
        case 0x2762d0u: goto label_2762d0;
        case 0x2762d4u: goto label_2762d4;
        case 0x2762d8u: goto label_2762d8;
        case 0x2762dcu: goto label_2762dc;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762e4u: goto label_2762e4;
        case 0x2762e8u: goto label_2762e8;
        case 0x2762ecu: goto label_2762ec;
        case 0x2762f0u: goto label_2762f0;
        case 0x2762f4u: goto label_2762f4;
        case 0x2762f8u: goto label_2762f8;
        case 0x2762fcu: goto label_2762fc;
        case 0x276300u: goto label_276300;
        case 0x276304u: goto label_276304;
        case 0x276308u: goto label_276308;
        case 0x27630cu: goto label_27630c;
        case 0x276310u: goto label_276310;
        case 0x276314u: goto label_276314;
        case 0x276318u: goto label_276318;
        case 0x27631cu: goto label_27631c;
        case 0x276320u: goto label_276320;
        case 0x276324u: goto label_276324;
        case 0x276328u: goto label_276328;
        case 0x27632cu: goto label_27632c;
        case 0x276330u: goto label_276330;
        case 0x276334u: goto label_276334;
        case 0x276338u: goto label_276338;
        case 0x27633cu: goto label_27633c;
        case 0x276340u: goto label_276340;
        case 0x276344u: goto label_276344;
        case 0x276348u: goto label_276348;
        case 0x27634cu: goto label_27634c;
        case 0x276350u: goto label_276350;
        case 0x276354u: goto label_276354;
        case 0x276358u: goto label_276358;
        case 0x27635cu: goto label_27635c;
        case 0x276360u: goto label_276360;
        case 0x276364u: goto label_276364;
        case 0x276368u: goto label_276368;
        case 0x27636cu: goto label_27636c;
        case 0x276370u: goto label_276370;
        case 0x276374u: goto label_276374;
        case 0x276378u: goto label_276378;
        case 0x27637cu: goto label_27637c;
        case 0x276380u: goto label_276380;
        case 0x276384u: goto label_276384;
        case 0x276388u: goto label_276388;
        case 0x27638cu: goto label_27638c;
        case 0x276390u: goto label_276390;
        case 0x276394u: goto label_276394;
        case 0x276398u: goto label_276398;
        case 0x27639cu: goto label_27639c;
        case 0x2763a0u: goto label_2763a0;
        case 0x2763a4u: goto label_2763a4;
        case 0x2763a8u: goto label_2763a8;
        case 0x2763acu: goto label_2763ac;
        case 0x2763b0u: goto label_2763b0;
        case 0x2763b4u: goto label_2763b4;
        case 0x2763b8u: goto label_2763b8;
        case 0x2763bcu: goto label_2763bc;
        case 0x2763c0u: goto label_2763c0;
        case 0x2763c4u: goto label_2763c4;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763ccu: goto label_2763cc;
        case 0x2763d0u: goto label_2763d0;
        case 0x2763d4u: goto label_2763d4;
        case 0x2763d8u: goto label_2763d8;
        case 0x2763dcu: goto label_2763dc;
        case 0x2763e0u: goto label_2763e0;
        case 0x2763e4u: goto label_2763e4;
        case 0x2763e8u: goto label_2763e8;
        case 0x2763ecu: goto label_2763ec;
        case 0x2763f0u: goto label_2763f0;
        case 0x2763f4u: goto label_2763f4;
        case 0x2763f8u: goto label_2763f8;
        case 0x2763fcu: goto label_2763fc;
        case 0x276400u: goto label_276400;
        case 0x276404u: goto label_276404;
        case 0x276408u: goto label_276408;
        case 0x27640cu: goto label_27640c;
        case 0x276410u: goto label_276410;
        case 0x276414u: goto label_276414;
        case 0x276418u: goto label_276418;
        case 0x27641cu: goto label_27641c;
        case 0x276420u: goto label_276420;
        case 0x276424u: goto label_276424;
        case 0x276428u: goto label_276428;
        case 0x27642cu: goto label_27642c;
        case 0x276430u: goto label_276430;
        case 0x276434u: goto label_276434;
        case 0x276438u: goto label_276438;
        case 0x27643cu: goto label_27643c;
        case 0x276440u: goto label_276440;
        case 0x276444u: goto label_276444;
        case 0x276448u: goto label_276448;
        case 0x27644cu: goto label_27644c;
        case 0x276450u: goto label_276450;
        case 0x276454u: goto label_276454;
        case 0x276458u: goto label_276458;
        case 0x27645cu: goto label_27645c;
        case 0x276460u: goto label_276460;
        case 0x276464u: goto label_276464;
        case 0x276468u: goto label_276468;
        case 0x27646cu: goto label_27646c;
        case 0x276470u: goto label_276470;
        case 0x276474u: goto label_276474;
        case 0x276478u: goto label_276478;
        case 0x27647cu: goto label_27647c;
        case 0x276480u: goto label_276480;
        case 0x276484u: goto label_276484;
        case 0x276488u: goto label_276488;
        case 0x27648cu: goto label_27648c;
        case 0x276490u: goto label_276490;
        case 0x276494u: goto label_276494;
        case 0x276498u: goto label_276498;
        case 0x27649cu: goto label_27649c;
        case 0x2764a0u: goto label_2764a0;
        case 0x2764a4u: goto label_2764a4;
        case 0x2764a8u: goto label_2764a8;
        case 0x2764acu: goto label_2764ac;
        case 0x2764b0u: goto label_2764b0;
        case 0x2764b4u: goto label_2764b4;
        case 0x2764b8u: goto label_2764b8;
        case 0x2764bcu: goto label_2764bc;
        case 0x2764c0u: goto label_2764c0;
        case 0x2764c4u: goto label_2764c4;
        case 0x2764c8u: goto label_2764c8;
        case 0x2764ccu: goto label_2764cc;
        case 0x2764d0u: goto label_2764d0;
        case 0x2764d4u: goto label_2764d4;
        case 0x2764d8u: goto label_2764d8;
        case 0x2764dcu: goto label_2764dc;
        case 0x2764e0u: goto label_2764e0;
        case 0x2764e4u: goto label_2764e4;
        case 0x2764e8u: goto label_2764e8;
        case 0x2764ecu: goto label_2764ec;
        case 0x2764f0u: goto label_2764f0;
        case 0x2764f4u: goto label_2764f4;
        case 0x2764f8u: goto label_2764f8;
        case 0x2764fcu: goto label_2764fc;
        case 0x276500u: goto label_276500;
        case 0x276504u: goto label_276504;
        case 0x276508u: goto label_276508;
        case 0x27650cu: goto label_27650c;
        case 0x276510u: goto label_276510;
        case 0x276514u: goto label_276514;
        case 0x276518u: goto label_276518;
        case 0x27651cu: goto label_27651c;
        case 0x276520u: goto label_276520;
        case 0x276524u: goto label_276524;
        case 0x276528u: goto label_276528;
        case 0x27652cu: goto label_27652c;
        case 0x276530u: goto label_276530;
        case 0x276534u: goto label_276534;
        case 0x276538u: goto label_276538;
        case 0x27653cu: goto label_27653c;
        case 0x276540u: goto label_276540;
        case 0x276544u: goto label_276544;
        case 0x276548u: goto label_276548;
        case 0x27654cu: goto label_27654c;
        case 0x276550u: goto label_276550;
        case 0x276554u: goto label_276554;
        case 0x276558u: goto label_276558;
        case 0x27655cu: goto label_27655c;
        case 0x276560u: goto label_276560;
        case 0x276564u: goto label_276564;
        case 0x276568u: goto label_276568;
        case 0x27656cu: goto label_27656c;
        case 0x276570u: goto label_276570;
        case 0x276574u: goto label_276574;
        case 0x276578u: goto label_276578;
        case 0x27657cu: goto label_27657c;
        case 0x276580u: goto label_276580;
        case 0x276584u: goto label_276584;
        case 0x276588u: goto label_276588;
        case 0x27658cu: goto label_27658c;
        case 0x276590u: goto label_276590;
        case 0x276594u: goto label_276594;
        case 0x276598u: goto label_276598;
        case 0x27659cu: goto label_27659c;
        case 0x2765a0u: goto label_2765a0;
        case 0x2765a4u: goto label_2765a4;
        case 0x2765a8u: goto label_2765a8;
        case 0x2765acu: goto label_2765ac;
        case 0x2765b0u: goto label_2765b0;
        case 0x2765b4u: goto label_2765b4;
        case 0x2765b8u: goto label_2765b8;
        case 0x2765bcu: goto label_2765bc;
        case 0x2765c0u: goto label_2765c0;
        case 0x2765c4u: goto label_2765c4;
        case 0x2765c8u: goto label_2765c8;
        case 0x2765ccu: goto label_2765cc;
        case 0x2765d0u: goto label_2765d0;
        case 0x2765d4u: goto label_2765d4;
        case 0x2765d8u: goto label_2765d8;
        case 0x2765dcu: goto label_2765dc;
        case 0x2765e0u: goto label_2765e0;
        case 0x2765e4u: goto label_2765e4;
        case 0x2765e8u: goto label_2765e8;
        case 0x2765ecu: goto label_2765ec;
        case 0x2765f0u: goto label_2765f0;
        case 0x2765f4u: goto label_2765f4;
        case 0x2765f8u: goto label_2765f8;
        case 0x2765fcu: goto label_2765fc;
        case 0x276600u: goto label_276600;
        case 0x276604u: goto label_276604;
        case 0x276608u: goto label_276608;
        case 0x27660cu: goto label_27660c;
        case 0x276610u: goto label_276610;
        case 0x276614u: goto label_276614;
        case 0x276618u: goto label_276618;
        case 0x27661cu: goto label_27661c;
        case 0x276620u: goto label_276620;
        case 0x276624u: goto label_276624;
        case 0x276628u: goto label_276628;
        case 0x27662cu: goto label_27662c;
        case 0x276630u: goto label_276630;
        case 0x276634u: goto label_276634;
        case 0x276638u: goto label_276638;
        case 0x27663cu: goto label_27663c;
        case 0x276640u: goto label_276640;
        case 0x276644u: goto label_276644;
        case 0x276648u: goto label_276648;
        case 0x27664cu: goto label_27664c;
        case 0x276650u: goto label_276650;
        case 0x276654u: goto label_276654;
        case 0x276658u: goto label_276658;
        case 0x27665cu: goto label_27665c;
        case 0x276660u: goto label_276660;
        case 0x276664u: goto label_276664;
        case 0x276668u: goto label_276668;
        case 0x27666cu: goto label_27666c;
        case 0x276670u: goto label_276670;
        case 0x276674u: goto label_276674;
        case 0x276678u: goto label_276678;
        case 0x27667cu: goto label_27667c;
        case 0x276680u: goto label_276680;
        case 0x276684u: goto label_276684;
        case 0x276688u: goto label_276688;
        case 0x27668cu: goto label_27668c;
        case 0x276690u: goto label_276690;
        case 0x276694u: goto label_276694;
        case 0x276698u: goto label_276698;
        case 0x27669cu: goto label_27669c;
        case 0x2766a0u: goto label_2766a0;
        case 0x2766a4u: goto label_2766a4;
        case 0x2766a8u: goto label_2766a8;
        case 0x2766acu: goto label_2766ac;
        default: break;
    }

    ctx->pc = 0x2761c8u;

label_2761c8:
    // 0x2761c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2761c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2761cc:
    // 0x2761cc: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2761ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_2761d0:
    // 0x2761d0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2761d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_2761d4:
    // 0x2761d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2761d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2761d8:
    // 0x2761d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2761d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2761dc:
    // 0x2761dc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2761dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_2761e0:
    // 0x2761e0: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2761e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2761e4:
    // 0x2761e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2761e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2761e8:
    // 0x2761e8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2761e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_2761ec:
    // 0x2761ec: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2761ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2761f0:
    // 0x2761f0: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2761f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_2761f4:
    // 0x2761f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2761f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2761f8:
    // 0x2761f8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2761f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_2761fc:
    // 0x2761fc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2761fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_276200:
    // 0x276200: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x276200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_276204:
    // 0x276204: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x276204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_276208:
    // 0x276208: 0xc0e896e  jal         func_3A25B8
label_27620c:
    if (ctx->pc == 0x27620Cu) {
        ctx->pc = 0x27620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276208u;
        // 0x27620c: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276210u;
        goto label_276210;
    }
    ctx->pc = 0x276208u;
    SET_GPR_U32(ctx, 31, 0x276210u);
    ctx->pc = 0x27620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276208u;
    // 0x27620c: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x276208u, 0x276210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276210u;
label_276210:
    // 0x276210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x276210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_276214:
    // 0x276214: 0xc0e57ce  jal         func_395F38
label_276218:
    if (ctx->pc == 0x276218u) {
        ctx->pc = 0x276218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276214u;
        // 0x276218: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27621Cu;
        goto label_27621c;
    }
    ctx->pc = 0x276214u;
    SET_GPR_U32(ctx, 31, 0x27621Cu);
    ctx->pc = 0x276218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276214u;
    // 0x276218: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x276214u, 0x27621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27621Cu;
label_27621c:
    // 0x27621c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_276220:
    // 0x276220: 0xc08a61a  jal         func_229868
label_276224:
    if (ctx->pc == 0x276224u) {
        ctx->pc = 0x276224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276220u;
        // 0x276224: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276228u;
        goto label_276228;
    }
    ctx->pc = 0x276220u;
    SET_GPR_U32(ctx, 31, 0x276228u);
    ctx->pc = 0x276224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276220u;
    // 0x276224: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x276220u, 0x276228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276228u;
label_276228:
    // 0x276228: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_27622c:
    // 0x27622c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x27622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_276230:
    // 0x276230: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x276230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_276234:
    // 0x276234: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276238:
    // 0x276238: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_27623c:
    // 0x27623c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_276240:
    // 0x276240: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x276240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_276244:
    // 0x276244: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_276248:
    if (ctx->pc == 0x276248u) {
        ctx->pc = 0x276248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276244u;
        // 0x276248: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27624Cu;
        goto label_27624c;
    }
    ctx->pc = 0x276244u;
    {
        const bool branch_taken_0x276244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x276248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276244u;
        // 0x276248: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276244) {
            ctx->pc = 0x276254u;
            goto label_276254;
        }
    }
    ctx->pc = 0x27624Cu;
label_27624c:
    // 0x27624c: 0x10000008  b           . + 4 + (0x8 << 2)
label_276250:
    if (ctx->pc == 0x276250u) {
        ctx->pc = 0x276250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27624Cu;
        // 0x276250: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276254u;
        goto label_276254;
    }
    ctx->pc = 0x27624Cu;
    {
        const bool branch_taken_0x27624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27624Cu;
        // 0x276250: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27624c) {
            ctx->pc = 0x276270u;
            goto label_276270;
        }
    }
    ctx->pc = 0x276254u;
label_276254:
    // 0x276254: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x276254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_276258:
    // 0x276258: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x276258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27625c:
    // 0x27625c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276260:
    // 0x276260: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_276264:
    // 0x276264: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x276264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_276268:
    // 0x276268: 0x40f809  jalr        $v0
label_27626c:
    if (ctx->pc == 0x27626Cu) {
        ctx->pc = 0x27626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276268u;
        // 0x27626c: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276270u;
        goto label_276270;
    }
    ctx->pc = 0x276268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x276270u);
        ctx->pc = 0x27626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276268u;
        // 0x27626c: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276268u, 0x276270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276270u;
label_276270:
    // 0x276270: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x276270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_276274:
    // 0x276274: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_276278:
    if (ctx->pc == 0x276278u) {
        ctx->pc = 0x276278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276274u;
        // 0x276278: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27627Cu;
        goto label_27627c;
    }
    ctx->pc = 0x276274u;
    {
        const bool branch_taken_0x276274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x276278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276274u;
        // 0x276278: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276274) {
            ctx->pc = 0x27628Cu;
            goto label_27628c;
        }
    }
    ctx->pc = 0x27627Cu;
label_27627c:
    // 0x27627c: 0xc0e87c0  jal         func_3A1F00
label_276280:
    if (ctx->pc == 0x276280u) {
        ctx->pc = 0x276280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27627Cu;
        // 0x276280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276284u;
        goto label_276284;
    }
    ctx->pc = 0x27627Cu;
    SET_GPR_U32(ctx, 31, 0x276284u);
    ctx->pc = 0x276280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27627Cu;
    // 0x276280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x27627Cu, 0x276284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276284u;
label_276284:
    // 0x276284: 0x10000004  b           . + 4 + (0x4 << 2)
label_276288:
    if (ctx->pc == 0x276288u) {
        ctx->pc = 0x276288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276284u;
        // 0x276288: 0x78420000  lq          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27628Cu;
        goto label_27628c;
    }
    ctx->pc = 0x276284u;
    {
        const bool branch_taken_0x276284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276284u;
        // 0x276288: 0x78420000  lq          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276284) {
            ctx->pc = 0x276298u;
            goto label_276298;
        }
    }
    ctx->pc = 0x27628Cu;
label_27628c:
    // 0x27628c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_276290:
    // 0x276290: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_276294:
    // 0x276294: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x276294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_276298:
    // 0x276298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x276298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27629c:
    // 0x27629c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27629cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2762a0:
    // 0x2762a0: 0xc040596  jal         func_101658
label_2762a4:
    if (ctx->pc == 0x2762A4u) {
        ctx->pc = 0x2762A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762A0u;
        // 0x2762a4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762A8u;
        goto label_2762a8;
    }
    ctx->pc = 0x2762A0u;
    SET_GPR_U32(ctx, 31, 0x2762A8u);
    ctx->pc = 0x2762A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762A0u;
    // 0x2762a4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x2762A0u, 0x2762A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762A8u;
label_2762a8:
    // 0x2762a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2762a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2762ac:
    // 0x2762ac: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2762acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2762b0:
    // 0x2762b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2762b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2762b4:
    // 0x2762b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2762b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2762b8:
    // 0x2762b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2762b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2762bc:
    // 0x2762bc: 0xc095128  jal         func_2544A0
label_2762c0:
    if (ctx->pc == 0x2762C0u) {
        ctx->pc = 0x2762C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762BCu;
        // 0x2762c0: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762C4u;
        goto label_2762c4;
    }
    ctx->pc = 0x2762BCu;
    SET_GPR_U32(ctx, 31, 0x2762C4u);
    ctx->pc = 0x2762C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762BCu;
    // 0x2762c0: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2762BCu, 0x2762C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762C4u;
label_2762c4:
    // 0x2762c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2762c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2762c8:
    // 0x2762c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2762c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2762cc:
    // 0x2762cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2762ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2762d0:
    // 0x2762d0: 0xc095106  jal         func_254418
label_2762d4:
    if (ctx->pc == 0x2762D4u) {
        ctx->pc = 0x2762D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762D0u;
        // 0x2762d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762D8u;
        goto label_2762d8;
    }
    ctx->pc = 0x2762D0u;
    SET_GPR_U32(ctx, 31, 0x2762D8u);
    ctx->pc = 0x2762D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762D0u;
    // 0x2762d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x2762D0u, 0x2762D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762D8u;
label_2762d8:
    // 0x2762d8: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_2762dc:
    if (ctx->pc == 0x2762DCu) {
        ctx->pc = 0x2762E0u;
        goto label_2762e0;
    }
    ctx->pc = 0x2762D8u;
    {
        const bool branch_taken_0x2762d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2762d8) {
            ctx->pc = 0x276348u;
            goto label_276348;
        }
    }
    ctx->pc = 0x2762E0u;
label_2762e0:
    // 0x2762e0: 0xc087408  jal         func_21D020
label_2762e4:
    if (ctx->pc == 0x2762E4u) {
        ctx->pc = 0x2762E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762E0u;
        // 0x2762e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762E8u;
        goto label_2762e8;
    }
    ctx->pc = 0x2762E0u;
    SET_GPR_U32(ctx, 31, 0x2762E8u);
    ctx->pc = 0x2762E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762E0u;
    // 0x2762e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x2762E0u, 0x2762E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762E8u;
label_2762e8:
    // 0x2762e8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2762e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2762ec:
    // 0x2762ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2762ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2762f0:
    // 0x2762f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2762f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2762f4:
    // 0x2762f4: 0x0  nop
    ctx->pc = 0x2762f4u;
    // NOP
label_2762f8:
    // 0x2762f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2762f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2762fc:
    // 0x2762fc: 0x0  nop
    ctx->pc = 0x2762fcu;
    // NOP
label_276300:
    // 0x276300: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_276304:
    if (ctx->pc == 0x276304u) {
        ctx->pc = 0x276304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276300u;
        // 0x276304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276308u;
        goto label_276308;
    }
    ctx->pc = 0x276300u;
    {
        const bool branch_taken_0x276300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276300u;
        // 0x276304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276300) {
            ctx->pc = 0x27631Cu;
            goto label_27631c;
        }
    }
    ctx->pc = 0x276308u;
label_276308:
    // 0x276308: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x276308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_27630c:
    // 0x27630c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x27630cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_276310:
    // 0x276310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276314:
    // 0x276314: 0x10000032  b           . + 4 + (0x32 << 2)
label_276318:
    if (ctx->pc == 0x276318u) {
        ctx->pc = 0x276318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276314u;
        // 0x276318: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27631Cu;
        goto label_27631c;
    }
    ctx->pc = 0x276314u;
    {
        const bool branch_taken_0x276314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276314u;
        // 0x276318: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276314) {
            ctx->pc = 0x2763E0u;
            goto label_2763e0;
        }
    }
    ctx->pc = 0x27631Cu;
label_27631c:
    // 0x27631c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_276320:
    // 0x276320: 0xc099cb4  jal         func_2672D0
label_276324:
    if (ctx->pc == 0x276324u) {
        ctx->pc = 0x276324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276320u;
        // 0x276324: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276328u;
        goto label_276328;
    }
    ctx->pc = 0x276320u;
    SET_GPR_U32(ctx, 31, 0x276328u);
    ctx->pc = 0x276324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276320u;
    // 0x276324: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x276320u, 0x276328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276328u;
label_276328:
    // 0x276328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x276328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27632c:
    // 0x27632c: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
label_276330:
    if (ctx->pc == 0x276330u) {
        ctx->pc = 0x276334u;
        goto label_276334;
    }
    ctx->pc = 0x27632Cu;
    {
        const bool branch_taken_0x27632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27632c) {
            ctx->pc = 0x2763E0u;
            goto label_2763e0;
        }
    }
    ctx->pc = 0x276334u;
label_276334:
    // 0x276334: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x276334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_276338:
    // 0x276338: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x276338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27633c:
    // 0x27633c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27633cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276340:
    // 0x276340: 0x10000027  b           . + 4 + (0x27 << 2)
label_276344:
    if (ctx->pc == 0x276344u) {
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276340u;
        // 0x276344: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276348u;
        goto label_276348;
    }
    ctx->pc = 0x276340u;
    {
        const bool branch_taken_0x276340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276340u;
        // 0x276344: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276340) {
            ctx->pc = 0x2763E0u;
            goto label_2763e0;
        }
    }
    ctx->pc = 0x276348u;
label_276348:
    // 0x276348: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
label_27634c:
    if (ctx->pc == 0x27634Cu) {
        ctx->pc = 0x27634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276348u;
        // 0x27634c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276350u;
        goto label_276350;
    }
    ctx->pc = 0x276348u;
    {
        const bool branch_taken_0x276348 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276348u;
        // 0x27634c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276348) {
            ctx->pc = 0x2763E0u;
            goto label_2763e0;
        }
    }
    ctx->pc = 0x276350u;
label_276350:
    // 0x276350: 0x96c50112  lhu         $a1, 0x112($s6)
    ctx->pc = 0x276350u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 274)));
label_276354:
    // 0x276354: 0xc0e44cc  jal         func_391330
label_276358:
    if (ctx->pc == 0x276358u) {
        ctx->pc = 0x276358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276354u;
        // 0x276358: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27635Cu;
        goto label_27635c;
    }
    ctx->pc = 0x276354u;
    SET_GPR_U32(ctx, 31, 0x27635Cu);
    ctx->pc = 0x276358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276354u;
    // 0x276358: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x276354u, 0x27635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27635Cu;
label_27635c:
    // 0x27635c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27635cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276360:
    // 0x276360: 0xc0e45f6  jal         func_3917D8
label_276364:
    if (ctx->pc == 0x276364u) {
        ctx->pc = 0x276364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276360u;
        // 0x276364: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276368u;
        goto label_276368;
    }
    ctx->pc = 0x276360u;
    SET_GPR_U32(ctx, 31, 0x276368u);
    ctx->pc = 0x276364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276360u;
    // 0x276364: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x276360u, 0x276368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276368u;
label_276368:
    // 0x276368: 0x7ac30020  lq          $v1, 0x20($s6)
    ctx->pc = 0x276368u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 32)));
label_27636c:
    // 0x27636c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x27636cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_276370:
    // 0x276370: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x276370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276374:
    // 0x276374: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x276374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276378:
    // 0x276378: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x276378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_27637c:
    // 0x27637c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x27637cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_276380:
    // 0x276380: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x276380u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_276384:
    // 0x276384: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x276384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276388:
    // 0x276388: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x276388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_27638c:
    // 0x27638c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x27638cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276390:
    // 0x276390: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x276390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276394:
    // 0x276394: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x276394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_276398:
    // 0x276398: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x276398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_27639c:
    // 0x27639c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x27639cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2763a0:
    // 0x2763a0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2763a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2763a4:
    // 0x2763a4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2763a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2763a8:
    // 0x2763a8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2763a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2763ac:
    // 0x2763ac: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2763acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2763b0:
    // 0x2763b0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2763b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2763b4:
    // 0x2763b4: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x2763b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2763b8:
    // 0x2763b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2763b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2763bc:
    // 0x2763bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2763bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2763c0:
    // 0x2763c0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2763c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2763c4:
    // 0x2763c4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2763c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2763c8:
    // 0x2763c8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2763c8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_2763cc:
    // 0x2763cc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2763ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_2763d0:
    // 0x2763d0: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x2763d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_2763d4:
    // 0x2763d4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2763d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2763d8:
    // 0x2763d8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2763d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2763dc:
    // 0x2763dc: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x2763dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_2763e0:
    // 0x2763e0: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2763e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2763e4:
    // 0x2763e4: 0x0  nop
    ctx->pc = 0x2763e4u;
    // NOP
label_2763e8:
    // 0x2763e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2763ec:
    if (ctx->pc == 0x2763ECu) {
        ctx->pc = 0x2763ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763E8u;
        // 0x2763ec: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2763F0u;
        goto label_2763f0;
    }
    ctx->pc = 0x2763E8u;
    {
        const bool branch_taken_0x2763e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2763e8) {
            ctx->pc = 0x2763ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2763E8u;
            // 0x2763ec: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2763F0u;
            goto label_2763f0;
        }
    }
    ctx->pc = 0x2763F0u;
label_2763f0:
    // 0x2763f0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2763f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2763f4:
    // 0x2763f4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2763f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2763f8:
    // 0x2763f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2763f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2763fc:
    // 0x2763fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2763fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276400:
    // 0x276400: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x276400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_276404:
    // 0x276404: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x276404u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_276408:
    // 0x276408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27640c:
    // 0x27640c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27640cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276410:
    // 0x276410: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x276410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_276414:
    // 0x276414: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x276414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276418:
    // 0x276418: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x276418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_27641c:
    // 0x27641c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x27641cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276420:
    // 0x276420: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x276420u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_276424:
    // 0x276424: 0x4a0003bf  vwaitq
    ctx->pc = 0x276424u;
    // VWAITQ (Q already resolved in this runtime)
label_276428:
    // 0x276428: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x276428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_27642c:
    // 0x27642c: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x27642cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_276430:
    // 0x276430: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x276430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
label_276434:
    // 0x276434: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x276434u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276438:
    // 0x276438: 0x0  nop
    ctx->pc = 0x276438u;
    // NOP
label_27643c:
    // 0x27643c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27643cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276440:
    // 0x276440: 0x0  nop
    ctx->pc = 0x276440u;
    // NOP
label_276444:
    // 0x276444: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_276448:
    if (ctx->pc == 0x276448u) {
        ctx->pc = 0x276448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276444u;
        // 0x276448: 0x7fa50070  sq          $a1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27644Cu;
        goto label_27644c;
    }
    ctx->pc = 0x276444u;
    {
        const bool branch_taken_0x276444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276444u;
        // 0x276448: 0x7fa50070  sq          $a1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276444) {
            ctx->pc = 0x276560u;
            goto label_276560;
        }
    }
    ctx->pc = 0x27644Cu;
label_27644c:
    // 0x27644c: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x27644cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_276450:
    // 0x276450: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x276450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_276454:
    // 0x276454: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x276454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_276458:
    // 0x276458: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x276458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_27645c:
    // 0x27645c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x27645cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276460:
    // 0x276460: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x276460u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_276464:
    // 0x276464: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x276464u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276468:
    // 0x276468: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x276468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_27646c:
    // 0x27646c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x27646cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_276470:
    // 0x276470: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276474:
    // 0x276474: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276474u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276478:
    // 0x276478: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x276478u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_27647c:
    // 0x27647c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x27647cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_276480:
    // 0x276480: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x276480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_276484:
    // 0x276484: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276488:
    // 0x276488: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276488u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_27648c:
    // 0x27648c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x27648cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_276490:
    // 0x276490: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276494:
    // 0x276494: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x276494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276498:
    // 0x276498: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x276498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_27649c:
    // 0x27649c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x27649cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2764a0:
    // 0x2764a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2764a0u;
    // VWAITQ (Q already resolved in this runtime)
label_2764a4:
    // 0x2764a4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2764a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2764a8:
    // 0x2764a8: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2764a8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_2764ac:
    // 0x2764ac: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x2764acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_2764b0:
    // 0x2764b0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2764b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2764b4:
    // 0x2764b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2764b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2764b8:
    // 0x2764b8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2764b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2764bc:
    // 0x2764bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2764bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2764c0:
    // 0x2764c0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2764c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2764c4:
    // 0x2764c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2764c4u;
    // VWAITQ (Q already resolved in this runtime)
label_2764c8:
    // 0x2764c8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2764c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2764cc:
    // 0x2764cc: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2764ccu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_2764d0:
    // 0x2764d0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2764d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2764d4:
    // 0x2764d4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2764d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2764d8:
    // 0x2764d8: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x2764d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_2764dc:
    // 0x2764dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2764dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2764e0:
    // 0x2764e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2764e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2764e4:
    // 0x2764e4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2764e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_2764e8:
    // 0x2764e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2764ec:
    if (ctx->pc == 0x2764ECu) {
        ctx->pc = 0x2764ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764E8u;
        // 0x2764ec: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2764F0u;
        goto label_2764f0;
    }
    ctx->pc = 0x2764E8u;
    {
        const bool branch_taken_0x2764e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2764ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764E8u;
        // 0x2764ec: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764e8) {
            ctx->pc = 0x276558u;
            goto label_276558;
        }
    }
    ctx->pc = 0x2764F0u;
label_2764f0:
    // 0x2764f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2764f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2764f4:
    // 0x2764f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2764f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2764f8:
    // 0x2764f8: 0x0  nop
    ctx->pc = 0x2764f8u;
    // NOP
label_2764fc:
    // 0x2764fc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2764fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_276500:
    // 0x276500: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x276500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_276504:
    // 0x276504: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x276504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_276508:
    // 0x276508: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x276508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_27650c:
    // 0x27650c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x27650cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_276510:
    // 0x276510: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x276510u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_276514:
    // 0x276514: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x276514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_276518:
    // 0x276518: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x276518u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_27651c:
    // 0x27651c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x27651cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276520:
    // 0x276520: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x276520u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276524:
    // 0x276524: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x276524u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_276528:
    // 0x276528: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x276528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_27652c:
    // 0x27652c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x27652cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276530:
    // 0x276530: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x276530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_276534:
    // 0x276534: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276534u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276538:
    // 0x276538: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276538u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_27653c:
    // 0x27653c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x27653cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_276540:
    // 0x276540: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x276540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_276544:
    // 0x276544: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x276544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_276548:
    // 0x276548: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x276548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_27654c:
    // 0x27654c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x27654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_276550:
    // 0x276550: 0x10000013  b           . + 4 + (0x13 << 2)
label_276554:
    if (ctx->pc == 0x276554u) {
        ctx->pc = 0x276554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276550u;
        // 0x276554: 0x7fa400a0  sq          $a0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276558u;
        goto label_276558;
    }
    ctx->pc = 0x276550u;
    {
        const bool branch_taken_0x276550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276550u;
        // 0x276554: 0x7fa400a0  sq          $a0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276550) {
            ctx->pc = 0x2765A0u;
            goto label_2765a0;
        }
    }
    ctx->pc = 0x276558u;
label_276558:
    // 0x276558: 0x10000011  b           . + 4 + (0x11 << 2)
label_27655c:
    if (ctx->pc == 0x27655Cu) {
        ctx->pc = 0x27655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276558u;
        // 0x27655c: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276560u;
        goto label_276560;
    }
    ctx->pc = 0x276558u;
    {
        const bool branch_taken_0x276558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276558u;
        // 0x27655c: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276558) {
            ctx->pc = 0x2765A0u;
            goto label_2765a0;
        }
    }
    ctx->pc = 0x276560u;
label_276560:
    // 0x276560: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x276560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_276564:
    // 0x276564: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276568:
    // 0x276568: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x276568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_27656c:
    // 0x27656c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x27656cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276570:
    // 0x276570: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x276570u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276574:
    // 0x276574: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x276574u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_276578:
    // 0x276578: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x276578u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27657c:
    // 0x27657c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x27657cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276580:
    // 0x276580: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x276580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276584:
    // 0x276584: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276584u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276588:
    // 0x276588: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276588u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_27658c:
    // 0x27658c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x27658cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_276590:
    // 0x276590: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x276590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_276594:
    // 0x276594: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x276594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_276598:
    // 0x276598: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x276598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_27659c:
    // 0x27659c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x27659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2765a0:
    // 0x2765a0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2765a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2765a4:
    // 0x2765a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2765a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2765a8:
    // 0x2765a8: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2765a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2765ac:
    // 0x2765ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2765acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2765b0:
    // 0x2765b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2765b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2765b4:
    // 0x2765b4: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2765b4u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2765b8:
    // 0x2765b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2765b8u;
    // VWAITQ (Q already resolved in this runtime)
label_2765bc:
    // 0x2765bc: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x2765bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2765c0:
    // 0x2765c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2765c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2765c4:
    // 0x2765c4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2765c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2765c8:
    // 0x2765c8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2765c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2765cc:
    // 0x2765cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2765ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2765d0:
    // 0x2765d0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2765d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2765d4:
    // 0x2765d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2765d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2765d8:
    // 0x2765d8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2765d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_2765dc:
    // 0x2765dc: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2765dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2765e0:
    // 0x2765e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2765e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2765e4:
    // 0x2765e4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2765e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2765e8:
    // 0x2765e8: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2765e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2765ec:
    // 0x2765ec: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2765ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2765f0:
    // 0x2765f0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2765f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2765f4:
    // 0x2765f4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2765f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2765f8:
    // 0x2765f8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2765f8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2765fc:
    // 0x2765fc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276600:
    // 0x276600: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x276600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_276604:
    // 0x276604: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x276604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_276608:
    // 0x276608: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x276608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_27660c:
    // 0x27660c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x27660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_276610:
    // 0x276610: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x276610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_276614:
    // 0x276614: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x276614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_276618:
    // 0x276618: 0xc0cd5ea  jal         func_3357A8
label_27661c:
    if (ctx->pc == 0x27661Cu) {
        ctx->pc = 0x27661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276618u;
        // 0x27661c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276620u;
        goto label_276620;
    }
    ctx->pc = 0x276618u;
    SET_GPR_U32(ctx, 31, 0x276620u);
    ctx->pc = 0x27661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276618u;
    // 0x27661c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x276618u, 0x276620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276620u;
label_276620:
    // 0x276620: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x276620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_276624:
    // 0x276624: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276624u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_276628:
    // 0x276628: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x276628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_27662c:
    // 0x27662c: 0xc0cd5ea  jal         func_3357A8
label_276630:
    if (ctx->pc == 0x276630u) {
        ctx->pc = 0x276630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27662Cu;
        // 0x276630: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276634u;
        goto label_276634;
    }
    ctx->pc = 0x27662Cu;
    SET_GPR_U32(ctx, 31, 0x276634u);
    ctx->pc = 0x276630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27662Cu;
    // 0x276630: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x27662Cu, 0x276634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276634u;
label_276634:
    // 0x276634: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x276634u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_276638:
    // 0x276638: 0xc08a61a  jal         func_229868
label_27663c:
    if (ctx->pc == 0x27663Cu) {
        ctx->pc = 0x27663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276638u;
        // 0x27663c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276640u;
        goto label_276640;
    }
    ctx->pc = 0x276638u;
    SET_GPR_U32(ctx, 31, 0x276640u);
    ctx->pc = 0x27663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276638u;
    // 0x27663c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x276638u, 0x276640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276640u;
label_276640:
    // 0x276640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_276644:
    if (ctx->pc == 0x276644u) {
        ctx->pc = 0x276648u;
        goto label_276648;
    }
    ctx->pc = 0x276640u;
    {
        const bool branch_taken_0x276640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276640) {
            ctx->pc = 0x276650u;
            goto label_276650;
        }
    }
    ctx->pc = 0x276648u;
label_276648:
    // 0x276648: 0xc08f3dc  jal         func_23CF70
label_27664c:
    if (ctx->pc == 0x27664Cu) {
        ctx->pc = 0x27664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276648u;
        // 0x27664c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276650u;
        goto label_276650;
    }
    ctx->pc = 0x276648u;
    SET_GPR_U32(ctx, 31, 0x276650u);
    ctx->pc = 0x27664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276648u;
    // 0x27664c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276648u, 0x276650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276650u;
label_276650:
    // 0x276650: 0xc08f3dc  jal         func_23CF70
label_276654:
    if (ctx->pc == 0x276654u) {
        ctx->pc = 0x276654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276650u;
        // 0x276654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276658u;
        goto label_276658;
    }
    ctx->pc = 0x276650u;
    SET_GPR_U32(ctx, 31, 0x276658u);
    ctx->pc = 0x276654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276650u;
    // 0x276654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276650u, 0x276658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276658u;
label_276658:
    // 0x276658: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x276658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27665c:
    // 0x27665c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_276660:
    // 0x276660: 0xc08f3e2  jal         func_23CF88
label_276664:
    if (ctx->pc == 0x276664u) {
        ctx->pc = 0x276664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276660u;
        // 0x276664: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276668u;
        goto label_276668;
    }
    ctx->pc = 0x276660u;
    SET_GPR_U32(ctx, 31, 0x276668u);
    ctx->pc = 0x276664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276660u;
    // 0x276664: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x276660u, 0x276668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276668u;
label_276668:
    // 0x276668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x276668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27666c:
    // 0x27666c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x27666cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_276670:
    // 0x276670: 0xc08f4ae  jal         func_23D2B8
label_276674:
    if (ctx->pc == 0x276674u) {
        ctx->pc = 0x276674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276670u;
        // 0x276674: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276678u;
        goto label_276678;
    }
    ctx->pc = 0x276670u;
    SET_GPR_U32(ctx, 31, 0x276678u);
    ctx->pc = 0x276674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276670u;
    // 0x276674: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x276670u, 0x276678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276678u;
label_276678:
    // 0x276678: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x276678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_27667c:
    // 0x27667c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x27667cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_276680:
    // 0x276680: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x276680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_276684:
    // 0x276684: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x276684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_276688:
    // 0x276688: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x276688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_27668c:
    // 0x27668c: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x27668cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_276690:
    // 0x276690: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x276690u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_276694:
    // 0x276694: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x276694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_276698:
    // 0x276698: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x276698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27669c:
    // 0x27669c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x27669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2766a0:
    // 0x2766a0: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2766a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2766a4:
    // 0x2766a4: 0x3e00008  jr          $ra
label_2766a8:
    if (ctx->pc == 0x2766A8u) {
        ctx->pc = 0x2766A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766A4u;
        // 0x2766a8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2766ACu;
        goto label_2766ac;
    }
    ctx->pc = 0x2766A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766A4u;
        // 0x2766a8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766ACu;
label_2766ac:
    // 0x2766ac: 0x0  nop
    ctx->pc = 0x2766acu;
    // NOP
    ctx->pc = 0x2766b0u;
}
