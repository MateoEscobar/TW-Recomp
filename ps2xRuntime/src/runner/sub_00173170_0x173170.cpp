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

// Function: sub_00173170
// Address: 0x173170 - 0x1736a0
void sub_00173170_0x173170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173170_0x173170");
#endif

    switch (ctx->pc) {
        case 0x173170u: goto label_173170;
        case 0x173174u: goto label_173174;
        case 0x173178u: goto label_173178;
        case 0x17317cu: goto label_17317c;
        case 0x173180u: goto label_173180;
        case 0x173184u: goto label_173184;
        case 0x173188u: goto label_173188;
        case 0x17318cu: goto label_17318c;
        case 0x173190u: goto label_173190;
        case 0x173194u: goto label_173194;
        case 0x173198u: goto label_173198;
        case 0x17319cu: goto label_17319c;
        case 0x1731a0u: goto label_1731a0;
        case 0x1731a4u: goto label_1731a4;
        case 0x1731a8u: goto label_1731a8;
        case 0x1731acu: goto label_1731ac;
        case 0x1731b0u: goto label_1731b0;
        case 0x1731b4u: goto label_1731b4;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731bcu: goto label_1731bc;
        case 0x1731c0u: goto label_1731c0;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731c8u: goto label_1731c8;
        case 0x1731ccu: goto label_1731cc;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731d4u: goto label_1731d4;
        case 0x1731d8u: goto label_1731d8;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731e0u: goto label_1731e0;
        case 0x1731e4u: goto label_1731e4;
        case 0x1731e8u: goto label_1731e8;
        case 0x1731ecu: goto label_1731ec;
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        case 0x173210u: goto label_173210;
        case 0x173214u: goto label_173214;
        case 0x173218u: goto label_173218;
        case 0x17321cu: goto label_17321c;
        case 0x173220u: goto label_173220;
        case 0x173224u: goto label_173224;
        case 0x173228u: goto label_173228;
        case 0x17322cu: goto label_17322c;
        case 0x173230u: goto label_173230;
        case 0x173234u: goto label_173234;
        case 0x173238u: goto label_173238;
        case 0x17323cu: goto label_17323c;
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        case 0x173258u: goto label_173258;
        case 0x17325cu: goto label_17325c;
        case 0x173260u: goto label_173260;
        case 0x173264u: goto label_173264;
        case 0x173268u: goto label_173268;
        case 0x17326cu: goto label_17326c;
        case 0x173270u: goto label_173270;
        case 0x173274u: goto label_173274;
        case 0x173278u: goto label_173278;
        case 0x17327cu: goto label_17327c;
        case 0x173280u: goto label_173280;
        case 0x173284u: goto label_173284;
        case 0x173288u: goto label_173288;
        case 0x17328cu: goto label_17328c;
        case 0x173290u: goto label_173290;
        case 0x173294u: goto label_173294;
        case 0x173298u: goto label_173298;
        case 0x17329cu: goto label_17329c;
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a4u: goto label_1732a4;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732acu: goto label_1732ac;
        case 0x1732b0u: goto label_1732b0;
        case 0x1732b4u: goto label_1732b4;
        case 0x1732b8u: goto label_1732b8;
        case 0x1732bcu: goto label_1732bc;
        case 0x1732c0u: goto label_1732c0;
        case 0x1732c4u: goto label_1732c4;
        case 0x1732c8u: goto label_1732c8;
        case 0x1732ccu: goto label_1732cc;
        case 0x1732d0u: goto label_1732d0;
        case 0x1732d4u: goto label_1732d4;
        case 0x1732d8u: goto label_1732d8;
        case 0x1732dcu: goto label_1732dc;
        case 0x1732e0u: goto label_1732e0;
        case 0x1732e4u: goto label_1732e4;
        case 0x1732e8u: goto label_1732e8;
        case 0x1732ecu: goto label_1732ec;
        case 0x1732f0u: goto label_1732f0;
        case 0x1732f4u: goto label_1732f4;
        case 0x1732f8u: goto label_1732f8;
        case 0x1732fcu: goto label_1732fc;
        case 0x173300u: goto label_173300;
        case 0x173304u: goto label_173304;
        case 0x173308u: goto label_173308;
        case 0x17330cu: goto label_17330c;
        case 0x173310u: goto label_173310;
        case 0x173314u: goto label_173314;
        case 0x173318u: goto label_173318;
        case 0x17331cu: goto label_17331c;
        case 0x173320u: goto label_173320;
        case 0x173324u: goto label_173324;
        case 0x173328u: goto label_173328;
        case 0x17332cu: goto label_17332c;
        case 0x173330u: goto label_173330;
        case 0x173334u: goto label_173334;
        case 0x173338u: goto label_173338;
        case 0x17333cu: goto label_17333c;
        case 0x173340u: goto label_173340;
        case 0x173344u: goto label_173344;
        case 0x173348u: goto label_173348;
        case 0x17334cu: goto label_17334c;
        case 0x173350u: goto label_173350;
        case 0x173354u: goto label_173354;
        case 0x173358u: goto label_173358;
        case 0x17335cu: goto label_17335c;
        case 0x173360u: goto label_173360;
        case 0x173364u: goto label_173364;
        case 0x173368u: goto label_173368;
        case 0x17336cu: goto label_17336c;
        case 0x173370u: goto label_173370;
        case 0x173374u: goto label_173374;
        case 0x173378u: goto label_173378;
        case 0x17337cu: goto label_17337c;
        case 0x173380u: goto label_173380;
        case 0x173384u: goto label_173384;
        case 0x173388u: goto label_173388;
        case 0x17338cu: goto label_17338c;
        case 0x173390u: goto label_173390;
        case 0x173394u: goto label_173394;
        case 0x173398u: goto label_173398;
        case 0x17339cu: goto label_17339c;
        case 0x1733a0u: goto label_1733a0;
        case 0x1733a4u: goto label_1733a4;
        case 0x1733a8u: goto label_1733a8;
        case 0x1733acu: goto label_1733ac;
        case 0x1733b0u: goto label_1733b0;
        case 0x1733b4u: goto label_1733b4;
        case 0x1733b8u: goto label_1733b8;
        case 0x1733bcu: goto label_1733bc;
        case 0x1733c0u: goto label_1733c0;
        case 0x1733c4u: goto label_1733c4;
        case 0x1733c8u: goto label_1733c8;
        case 0x1733ccu: goto label_1733cc;
        case 0x1733d0u: goto label_1733d0;
        case 0x1733d4u: goto label_1733d4;
        case 0x1733d8u: goto label_1733d8;
        case 0x1733dcu: goto label_1733dc;
        case 0x1733e0u: goto label_1733e0;
        case 0x1733e4u: goto label_1733e4;
        case 0x1733e8u: goto label_1733e8;
        case 0x1733ecu: goto label_1733ec;
        case 0x1733f0u: goto label_1733f0;
        case 0x1733f4u: goto label_1733f4;
        case 0x1733f8u: goto label_1733f8;
        case 0x1733fcu: goto label_1733fc;
        case 0x173400u: goto label_173400;
        case 0x173404u: goto label_173404;
        case 0x173408u: goto label_173408;
        case 0x17340cu: goto label_17340c;
        case 0x173410u: goto label_173410;
        case 0x173414u: goto label_173414;
        case 0x173418u: goto label_173418;
        case 0x17341cu: goto label_17341c;
        case 0x173420u: goto label_173420;
        case 0x173424u: goto label_173424;
        case 0x173428u: goto label_173428;
        case 0x17342cu: goto label_17342c;
        case 0x173430u: goto label_173430;
        case 0x173434u: goto label_173434;
        case 0x173438u: goto label_173438;
        case 0x17343cu: goto label_17343c;
        case 0x173440u: goto label_173440;
        case 0x173444u: goto label_173444;
        case 0x173448u: goto label_173448;
        case 0x17344cu: goto label_17344c;
        case 0x173450u: goto label_173450;
        case 0x173454u: goto label_173454;
        case 0x173458u: goto label_173458;
        case 0x17345cu: goto label_17345c;
        case 0x173460u: goto label_173460;
        case 0x173464u: goto label_173464;
        case 0x173468u: goto label_173468;
        case 0x17346cu: goto label_17346c;
        case 0x173470u: goto label_173470;
        case 0x173474u: goto label_173474;
        case 0x173478u: goto label_173478;
        case 0x17347cu: goto label_17347c;
        case 0x173480u: goto label_173480;
        case 0x173484u: goto label_173484;
        case 0x173488u: goto label_173488;
        case 0x17348cu: goto label_17348c;
        case 0x173490u: goto label_173490;
        case 0x173494u: goto label_173494;
        case 0x173498u: goto label_173498;
        case 0x17349cu: goto label_17349c;
        case 0x1734a0u: goto label_1734a0;
        case 0x1734a4u: goto label_1734a4;
        case 0x1734a8u: goto label_1734a8;
        case 0x1734acu: goto label_1734ac;
        case 0x1734b0u: goto label_1734b0;
        case 0x1734b4u: goto label_1734b4;
        case 0x1734b8u: goto label_1734b8;
        case 0x1734bcu: goto label_1734bc;
        case 0x1734c0u: goto label_1734c0;
        case 0x1734c4u: goto label_1734c4;
        case 0x1734c8u: goto label_1734c8;
        case 0x1734ccu: goto label_1734cc;
        case 0x1734d0u: goto label_1734d0;
        case 0x1734d4u: goto label_1734d4;
        case 0x1734d8u: goto label_1734d8;
        case 0x1734dcu: goto label_1734dc;
        case 0x1734e0u: goto label_1734e0;
        case 0x1734e4u: goto label_1734e4;
        case 0x1734e8u: goto label_1734e8;
        case 0x1734ecu: goto label_1734ec;
        case 0x1734f0u: goto label_1734f0;
        case 0x1734f4u: goto label_1734f4;
        case 0x1734f8u: goto label_1734f8;
        case 0x1734fcu: goto label_1734fc;
        case 0x173500u: goto label_173500;
        case 0x173504u: goto label_173504;
        case 0x173508u: goto label_173508;
        case 0x17350cu: goto label_17350c;
        case 0x173510u: goto label_173510;
        case 0x173514u: goto label_173514;
        case 0x173518u: goto label_173518;
        case 0x17351cu: goto label_17351c;
        case 0x173520u: goto label_173520;
        case 0x173524u: goto label_173524;
        case 0x173528u: goto label_173528;
        case 0x17352cu: goto label_17352c;
        case 0x173530u: goto label_173530;
        case 0x173534u: goto label_173534;
        case 0x173538u: goto label_173538;
        case 0x17353cu: goto label_17353c;
        case 0x173540u: goto label_173540;
        case 0x173544u: goto label_173544;
        case 0x173548u: goto label_173548;
        case 0x17354cu: goto label_17354c;
        case 0x173550u: goto label_173550;
        case 0x173554u: goto label_173554;
        case 0x173558u: goto label_173558;
        case 0x17355cu: goto label_17355c;
        case 0x173560u: goto label_173560;
        case 0x173564u: goto label_173564;
        case 0x173568u: goto label_173568;
        case 0x17356cu: goto label_17356c;
        case 0x173570u: goto label_173570;
        case 0x173574u: goto label_173574;
        case 0x173578u: goto label_173578;
        case 0x17357cu: goto label_17357c;
        case 0x173580u: goto label_173580;
        case 0x173584u: goto label_173584;
        case 0x173588u: goto label_173588;
        case 0x17358cu: goto label_17358c;
        case 0x173590u: goto label_173590;
        case 0x173594u: goto label_173594;
        case 0x173598u: goto label_173598;
        case 0x17359cu: goto label_17359c;
        case 0x1735a0u: goto label_1735a0;
        case 0x1735a4u: goto label_1735a4;
        case 0x1735a8u: goto label_1735a8;
        case 0x1735acu: goto label_1735ac;
        case 0x1735b0u: goto label_1735b0;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735b8u: goto label_1735b8;
        case 0x1735bcu: goto label_1735bc;
        case 0x1735c0u: goto label_1735c0;
        case 0x1735c4u: goto label_1735c4;
        case 0x1735c8u: goto label_1735c8;
        case 0x1735ccu: goto label_1735cc;
        case 0x1735d0u: goto label_1735d0;
        case 0x1735d4u: goto label_1735d4;
        case 0x1735d8u: goto label_1735d8;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e0u: goto label_1735e0;
        case 0x1735e4u: goto label_1735e4;
        case 0x1735e8u: goto label_1735e8;
        case 0x1735ecu: goto label_1735ec;
        case 0x1735f0u: goto label_1735f0;
        case 0x1735f4u: goto label_1735f4;
        case 0x1735f8u: goto label_1735f8;
        case 0x1735fcu: goto label_1735fc;
        case 0x173600u: goto label_173600;
        case 0x173604u: goto label_173604;
        case 0x173608u: goto label_173608;
        case 0x17360cu: goto label_17360c;
        case 0x173610u: goto label_173610;
        case 0x173614u: goto label_173614;
        case 0x173618u: goto label_173618;
        case 0x17361cu: goto label_17361c;
        case 0x173620u: goto label_173620;
        case 0x173624u: goto label_173624;
        case 0x173628u: goto label_173628;
        case 0x17362cu: goto label_17362c;
        case 0x173630u: goto label_173630;
        case 0x173634u: goto label_173634;
        case 0x173638u: goto label_173638;
        case 0x17363cu: goto label_17363c;
        case 0x173640u: goto label_173640;
        case 0x173644u: goto label_173644;
        case 0x173648u: goto label_173648;
        case 0x17364cu: goto label_17364c;
        case 0x173650u: goto label_173650;
        case 0x173654u: goto label_173654;
        case 0x173658u: goto label_173658;
        case 0x17365cu: goto label_17365c;
        case 0x173660u: goto label_173660;
        case 0x173664u: goto label_173664;
        case 0x173668u: goto label_173668;
        case 0x17366cu: goto label_17366c;
        case 0x173670u: goto label_173670;
        case 0x173674u: goto label_173674;
        case 0x173678u: goto label_173678;
        case 0x17367cu: goto label_17367c;
        case 0x173680u: goto label_173680;
        case 0x173684u: goto label_173684;
        case 0x173688u: goto label_173688;
        case 0x17368cu: goto label_17368c;
        case 0x173690u: goto label_173690;
        case 0x173694u: goto label_173694;
        case 0x173698u: goto label_173698;
        case 0x17369cu: goto label_17369c;
        default: break;
    }

    ctx->pc = 0x173170u;

label_173170:
    // 0x173170: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_173174:
    // 0x173174: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x173174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_173178:
    // 0x173178: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x173178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_17317c:
    // 0x17317c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17317cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173180:
    // 0x173180: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x173180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_173184:
    // 0x173184: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x173184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173188:
    // 0x173188: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x173188u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17318c:
    // 0x17318c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x17318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_173190:
    // 0x173190: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x173190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_173194:
    // 0x173194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173198:
    // 0x173198: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x173198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_17319c:
    // 0x17319c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1731a0:
    // 0x1731a0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1731a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1731a4:
    // 0x1731a4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1731a8:
    // 0x1731a8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1731a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1731ac:
    // 0x1731ac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1731acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1731b0:
    // 0x1731b0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1731b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1731b4:
    // 0x1731b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1731b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1731b8:
    // 0x1731b8: 0xc10c1fa  jal         func_4307E8
label_1731bc:
    if (ctx->pc == 0x1731BCu) {
        ctx->pc = 0x1731BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731B8u;
        // 0x1731bc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731C0u;
        goto label_1731c0;
    }
    ctx->pc = 0x1731B8u;
    SET_GPR_U32(ctx, 31, 0x1731C0u);
    ctx->pc = 0x1731BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731B8u;
    // 0x1731bc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1731B8u, 0x1731C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731C0u;
label_1731c0:
    // 0x1731c0: 0xc061664  jal         func_185990
label_1731c4:
    if (ctx->pc == 0x1731C4u) {
        ctx->pc = 0x1731C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731C0u;
        // 0x1731c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731C8u;
        goto label_1731c8;
    }
    ctx->pc = 0x1731C0u;
    SET_GPR_U32(ctx, 31, 0x1731C8u);
    ctx->pc = 0x1731C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731C0u;
    // 0x1731c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x1731C0u, 0x1731C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731C8u;
label_1731c8:
    // 0x1731c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1731cc:
    if (ctx->pc == 0x1731CCu) {
        ctx->pc = 0x1731CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731C8u;
        // 0x1731cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731D0u;
        goto label_1731d0;
    }
    ctx->pc = 0x1731C8u;
    {
        const bool branch_taken_0x1731c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731C8u;
        // 0x1731cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731c8) {
            ctx->pc = 0x1731E4u;
            goto label_1731e4;
        }
    }
    ctx->pc = 0x1731D0u;
label_1731d0:
    // 0x1731d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1731d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1731d4:
    // 0x1731d4: 0xc05cc1a  jal         func_173068
label_1731d8:
    if (ctx->pc == 0x1731D8u) {
        ctx->pc = 0x1731D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731D4u;
        // 0x1731d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731DCu;
        goto label_1731dc;
    }
    ctx->pc = 0x1731D4u;
    SET_GPR_U32(ctx, 31, 0x1731DCu);
    ctx->pc = 0x1731D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731D4u;
    // 0x1731d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173068u, 0x1731D4u, 0x1731DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731DCu;
label_1731dc:
    // 0x1731dc: 0x10000120  b           . + 4 + (0x120 << 2)
label_1731e0:
    if (ctx->pc == 0x1731E0u) {
        ctx->pc = 0x1731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731DCu;
        // 0x1731e0: 0x2a80a  movz        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731E4u;
        goto label_1731e4;
    }
    ctx->pc = 0x1731DCu;
    {
        const bool branch_taken_0x1731dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731DCu;
        // 0x1731e0: 0x2a80a  movz        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731dc) {
            ctx->pc = 0x173660u;
            goto label_173660;
        }
    }
    ctx->pc = 0x1731E4u;
label_1731e4:
    // 0x1731e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1731e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1731e8:
    // 0x1731e8: 0xc05cc1a  jal         func_173068
label_1731ec:
    if (ctx->pc == 0x1731ECu) {
        ctx->pc = 0x1731ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731E8u;
        // 0x1731ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731F0u;
        goto label_1731f0;
    }
    ctx->pc = 0x1731E8u;
    SET_GPR_U32(ctx, 31, 0x1731F0u);
    ctx->pc = 0x1731ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731E8u;
    // 0x1731ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173068u, 0x1731E8u, 0x1731F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731F0u;
label_1731f0:
    // 0x1731f0: 0x1440011c  bnez        $v0, . + 4 + (0x11C << 2)
label_1731f4:
    if (ctx->pc == 0x1731F4u) {
        ctx->pc = 0x1731F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731F0u;
        // 0x1731f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731F8u;
        goto label_1731f8;
    }
    ctx->pc = 0x1731F0u;
    {
        const bool branch_taken_0x1731f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1731F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731F0u;
        // 0x1731f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731f0) {
            ctx->pc = 0x173664u;
            goto label_173664;
        }
    }
    ctx->pc = 0x1731F8u;
label_1731f8:
    // 0x1731f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1731f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1731fc:
    // 0x1731fc: 0x26720020  addiu       $s2, $s3, 0x20
    ctx->pc = 0x1731fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_173200:
    // 0x173200: 0x8c5127e4  lw          $s1, 0x27E4($v0)
    ctx->pc = 0x173200u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_173204:
    // 0x173204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173208:
    // 0x173208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17320c:
    // 0x17320c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173210:
    // 0x173210: 0xafb20060  sw          $s2, 0x60($sp)
    ctx->pc = 0x173210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
label_173214:
    // 0x173214: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x173214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_173218:
    // 0x173218: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x173218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_17321c:
    // 0x17321c: 0xc061e6e  jal         func_1879B8
label_173220:
    if (ctx->pc == 0x173220u) {
        ctx->pc = 0x173220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17321Cu;
        // 0x173220: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173224u;
        goto label_173224;
    }
    ctx->pc = 0x17321Cu;
    SET_GPR_U32(ctx, 31, 0x173224u);
    ctx->pc = 0x173220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17321Cu;
    // 0x173220: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x17321Cu, 0x173224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173224u;
label_173224:
    // 0x173224: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173228:
    // 0x173228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17322c:
    // 0x17322c: 0x60f809  jalr        $v1
label_173230:
    if (ctx->pc == 0x173230u) {
        ctx->pc = 0x173230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17322Cu;
        // 0x173230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173234u;
        goto label_173234;
    }
    ctx->pc = 0x17322Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173234u);
        ctx->pc = 0x173230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17322Cu;
        // 0x173230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17322Cu, 0x173234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173234u;
label_173234:
    // 0x173234: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_173238:
    // 0x173238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17323c:
    // 0x17323c: 0xc137a1a  jal         func_4DE868
label_173240:
    if (ctx->pc == 0x173240u) {
        ctx->pc = 0x173240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17323Cu;
        // 0x173240: 0x26860008  addiu       $a2, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173244u;
        goto label_173244;
    }
    ctx->pc = 0x17323Cu;
    SET_GPR_U32(ctx, 31, 0x173244u);
    ctx->pc = 0x173240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17323Cu;
    // 0x173240: 0x26860008  addiu       $a2, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x17323Cu, 0x173244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173244u;
label_173244:
    // 0x173244: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_173248:
    // 0x173248: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x173248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17324c:
    // 0x17324c: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_173250:
    if (ctx->pc == 0x173250u) {
        ctx->pc = 0x173250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17324Cu;
        // 0x173250: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173254u;
        goto label_173254;
    }
    ctx->pc = 0x17324Cu;
    {
        const bool branch_taken_0x17324c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17324Cu;
        // 0x173250: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17324c) {
            ctx->pc = 0x173310u;
            goto label_173310;
        }
    }
    ctx->pc = 0x173254u;
label_173254:
    // 0x173254: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x173254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_173258:
    // 0x173258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17325c:
    // 0x17325c: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x17325cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_173260:
    // 0x173260: 0xc061e58  jal         func_187960
label_173264:
    if (ctx->pc == 0x173264u) {
        ctx->pc = 0x173264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173260u;
        // 0x173264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173268u;
        goto label_173268;
    }
    ctx->pc = 0x173260u;
    SET_GPR_U32(ctx, 31, 0x173268u);
    ctx->pc = 0x173264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173260u;
    // 0x173264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x173260u, 0x173268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173268u;
label_173268:
    // 0x173268: 0xc061234  jal         func_1848D0
label_17326c:
    if (ctx->pc == 0x17326Cu) {
        ctx->pc = 0x17326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173268u;
        // 0x17326c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173270u;
        goto label_173270;
    }
    ctx->pc = 0x173268u;
    SET_GPR_U32(ctx, 31, 0x173270u);
    ctx->pc = 0x17326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173268u;
    // 0x17326c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x173268u, 0x173270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173270u;
label_173270:
    // 0x173270: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_173274:
    if (ctx->pc == 0x173274u) {
        ctx->pc = 0x173274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173270u;
        // 0x173274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173278u;
        goto label_173278;
    }
    ctx->pc = 0x173270u;
    {
        const bool branch_taken_0x173270 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x173274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173270u;
        // 0x173274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173270) {
            ctx->pc = 0x173290u;
            goto label_173290;
        }
    }
    ctx->pc = 0x173278u;
label_173278:
    // 0x173278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17327c:
    // 0x17327c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173280:
    // 0x173280: 0xc061f4a  jal         func_187D28
label_173284:
    if (ctx->pc == 0x173284u) {
        ctx->pc = 0x173284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173280u;
        // 0x173284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173288u;
        goto label_173288;
    }
    ctx->pc = 0x173280u;
    SET_GPR_U32(ctx, 31, 0x173288u);
    ctx->pc = 0x173284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173280u;
    // 0x173284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x173280u, 0x173288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173288u;
label_173288:
    // 0x173288: 0x1000000a  b           . + 4 + (0xA << 2)
label_17328c:
    if (ctx->pc == 0x17328Cu) {
        ctx->pc = 0x17328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173288u;
        // 0x17328c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173290u;
        goto label_173290;
    }
    ctx->pc = 0x173288u;
    {
        const bool branch_taken_0x173288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173288u;
        // 0x17328c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173288) {
            ctx->pc = 0x1732B4u;
            goto label_1732b4;
        }
    }
    ctx->pc = 0x173290u;
label_173290:
    // 0x173290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173294:
    // 0x173294: 0xc061e6e  jal         func_1879B8
label_173298:
    if (ctx->pc == 0x173298u) {
        ctx->pc = 0x173298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173294u;
        // 0x173298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17329Cu;
        goto label_17329c;
    }
    ctx->pc = 0x173294u;
    SET_GPR_U32(ctx, 31, 0x17329Cu);
    ctx->pc = 0x173298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173294u;
    // 0x173298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x173294u, 0x17329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17329Cu;
label_17329c:
    // 0x17329c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1732a0:
    // 0x1732a0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1732a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1732a4:
    // 0x1732a4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1732a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1732a8:
    // 0x1732a8: 0xa0f809  jalr        $a1
label_1732ac:
    if (ctx->pc == 0x1732ACu) {
        ctx->pc = 0x1732ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732A8u;
        // 0x1732ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732B0u;
        goto label_1732b0;
    }
    ctx->pc = 0x1732A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1732B0u);
        ctx->pc = 0x1732ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732A8u;
        // 0x1732ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732A8u, 0x1732B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1732B0u;
label_1732b0:
    // 0x1732b0: 0x202a82b  sltu        $s5, $s0, $v0
    ctx->pc = 0x1732b0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1732b4:
    // 0x1732b4: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_1732b8:
    if (ctx->pc == 0x1732B8u) {
        ctx->pc = 0x1732B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732B4u;
        // 0x1732b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732BCu;
        goto label_1732bc;
    }
    ctx->pc = 0x1732B4u;
    {
        const bool branch_taken_0x1732b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732B4u;
        // 0x1732b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732b4) {
            ctx->pc = 0x173320u;
            goto label_173320;
        }
    }
    ctx->pc = 0x1732BCu;
label_1732bc:
    // 0x1732bc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1732bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1732c0:
    // 0x1732c0: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x1732c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1732c4:
    // 0x1732c4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1732c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1732c8:
    // 0x1732c8: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1732c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1732cc:
    // 0x1732cc: 0x24a51b28  addiu       $a1, $a1, 0x1B28
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6952));
label_1732d0:
    // 0x1732d0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1732d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1732d4:
    // 0x1732d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1732d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1732d8:
    // 0x1732d8: 0x25081b30  addiu       $t0, $t0, 0x1B30
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6960));
label_1732dc:
    // 0x1732dc: 0x254a1b58  addiu       $t2, $t2, 0x1B58
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7000));
label_1732e0:
    // 0x1732e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1732e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1732e4:
    // 0x1732e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1732e8:
    // 0x1732e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1732e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1732ec:
    // 0x1732ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1732ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1732f0:
    // 0x1732f0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1732f4:
    // 0x1732f4: 0x40f809  jalr        $v0
label_1732f8:
    if (ctx->pc == 0x1732F8u) {
        ctx->pc = 0x1732F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732F4u;
        // 0x1732f8: 0x2409037d  addiu       $t1, $zero, 0x37D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732FCu;
        goto label_1732fc;
    }
    ctx->pc = 0x1732F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1732FCu);
        ctx->pc = 0x1732F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732F4u;
        // 0x1732f8: 0x2409037d  addiu       $t1, $zero, 0x37D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732F4u, 0x1732FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1732FCu;
label_1732fc:
    // 0x1732fc: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_173300:
    // 0x173300: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_173304:
    // 0x173304: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x173304u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173308:
    // 0x173308: 0x10000005  b           . + 4 + (0x5 << 2)
label_17330c:
    if (ctx->pc == 0x17330Cu) {
        ctx->pc = 0x17330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173308u;
        // 0x17330c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173310u;
        goto label_173310;
    }
    ctx->pc = 0x173308u;
    {
        const bool branch_taken_0x173308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173308u;
        // 0x17330c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173308) {
            ctx->pc = 0x173320u;
            goto label_173320;
        }
    }
    ctx->pc = 0x173310u;
label_173310:
    // 0x173310: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x173310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173314:
    // 0x173314: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x173314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_173318:
    // 0x173318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17331c:
    // 0x17331c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17331cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_173320:
    // 0x173320: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_173324:
    // 0x173324: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173328:
    // 0x173328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17332c:
    // 0x17332c: 0xc137a34  jal         func_4DE8D0
label_173330:
    if (ctx->pc == 0x173330u) {
        ctx->pc = 0x173330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17332Cu;
        // 0x173330: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173334u;
        goto label_173334;
    }
    ctx->pc = 0x17332Cu;
    SET_GPR_U32(ctx, 31, 0x173334u);
    ctx->pc = 0x173330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17332Cu;
    // 0x173330: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x17332Cu, 0x173334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173334u;
label_173334:
    // 0x173334: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x173334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173338:
    // 0x173338: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17333c:
    // 0x17333c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_173340:
    // 0x173340: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_173344:
    if (ctx->pc == 0x173344u) {
        ctx->pc = 0x173344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173340u;
        // 0x173344: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173348u;
        goto label_173348;
    }
    ctx->pc = 0x173340u;
    {
        const bool branch_taken_0x173340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173340u;
        // 0x173344: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173340) {
            ctx->pc = 0x173408u;
            goto label_173408;
        }
    }
    ctx->pc = 0x173348u;
label_173348:
    // 0x173348: 0x12a00033  beqz        $s5, . + 4 + (0x33 << 2)
label_17334c:
    if (ctx->pc == 0x17334Cu) {
        ctx->pc = 0x17334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173348u;
        // 0x17334c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173350u;
        goto label_173350;
    }
    ctx->pc = 0x173348u;
    {
        const bool branch_taken_0x173348 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173348u;
        // 0x17334c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173348) {
            ctx->pc = 0x173418u;
            goto label_173418;
        }
    }
    ctx->pc = 0x173350u;
label_173350:
    // 0x173350: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x173350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_173354:
    // 0x173354: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x173354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_173358:
    // 0x173358: 0xc061e58  jal         func_187960
label_17335c:
    if (ctx->pc == 0x17335Cu) {
        ctx->pc = 0x17335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173358u;
        // 0x17335c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173360u;
        goto label_173360;
    }
    ctx->pc = 0x173358u;
    SET_GPR_U32(ctx, 31, 0x173360u);
    ctx->pc = 0x17335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173358u;
    // 0x17335c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x173358u, 0x173360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173360u;
label_173360:
    // 0x173360: 0xc061234  jal         func_1848D0
label_173364:
    if (ctx->pc == 0x173364u) {
        ctx->pc = 0x173364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173360u;
        // 0x173364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173368u;
        goto label_173368;
    }
    ctx->pc = 0x173360u;
    SET_GPR_U32(ctx, 31, 0x173368u);
    ctx->pc = 0x173364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173360u;
    // 0x173364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x173360u, 0x173368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173368u;
label_173368:
    // 0x173368: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_17336c:
    if (ctx->pc == 0x17336Cu) {
        ctx->pc = 0x17336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173368u;
        // 0x17336c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173370u;
        goto label_173370;
    }
    ctx->pc = 0x173368u;
    {
        const bool branch_taken_0x173368 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x17336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173368u;
        // 0x17336c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173368) {
            ctx->pc = 0x173388u;
            goto label_173388;
        }
    }
    ctx->pc = 0x173370u;
label_173370:
    // 0x173370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173374:
    // 0x173374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173378:
    // 0x173378: 0xc061f4a  jal         func_187D28
label_17337c:
    if (ctx->pc == 0x17337Cu) {
        ctx->pc = 0x17337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173378u;
        // 0x17337c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173380u;
        goto label_173380;
    }
    ctx->pc = 0x173378u;
    SET_GPR_U32(ctx, 31, 0x173380u);
    ctx->pc = 0x17337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173378u;
    // 0x17337c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x173378u, 0x173380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173380u;
label_173380:
    // 0x173380: 0x1000000a  b           . + 4 + (0xA << 2)
label_173384:
    if (ctx->pc == 0x173384u) {
        ctx->pc = 0x173384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173380u;
        // 0x173384: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173388u;
        goto label_173388;
    }
    ctx->pc = 0x173380u;
    {
        const bool branch_taken_0x173380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173380u;
        // 0x173384: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173380) {
            ctx->pc = 0x1733ACu;
            goto label_1733ac;
        }
    }
    ctx->pc = 0x173388u;
label_173388:
    // 0x173388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17338c:
    // 0x17338c: 0xc061e6e  jal         func_1879B8
label_173390:
    if (ctx->pc == 0x173390u) {
        ctx->pc = 0x173390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17338Cu;
        // 0x173390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173394u;
        goto label_173394;
    }
    ctx->pc = 0x17338Cu;
    SET_GPR_U32(ctx, 31, 0x173394u);
    ctx->pc = 0x173390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17338Cu;
    // 0x173390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x17338Cu, 0x173394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173394u;
label_173394:
    // 0x173394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173398:
    // 0x173398: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x173398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17339c:
    // 0x17339c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x17339cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1733a0:
    // 0x1733a0: 0xa0f809  jalr        $a1
label_1733a4:
    if (ctx->pc == 0x1733A4u) {
        ctx->pc = 0x1733A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733A0u;
        // 0x1733a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1733A8u;
        goto label_1733a8;
    }
    ctx->pc = 0x1733A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1733A8u);
        ctx->pc = 0x1733A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733A0u;
        // 0x1733a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733A0u, 0x1733A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1733A8u;
label_1733a8:
    // 0x1733a8: 0x202a82b  sltu        $s5, $s0, $v0
    ctx->pc = 0x1733a8u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1733ac:
    // 0x1733ac: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_1733b0:
    if (ctx->pc == 0x1733B0u) {
        ctx->pc = 0x1733B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733ACu;
        // 0x1733b0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1733B4u;
        goto label_1733b4;
    }
    ctx->pc = 0x1733ACu;
    {
        const bool branch_taken_0x1733ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733ACu;
        // 0x1733b0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733ac) {
            ctx->pc = 0x173418u;
            goto label_173418;
        }
    }
    ctx->pc = 0x1733B4u;
label_1733b4:
    // 0x1733b4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1733b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1733b8:
    // 0x1733b8: 0x8c6927e4  lw          $t1, 0x27E4($v1)
    ctx->pc = 0x1733b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1733bc:
    // 0x1733bc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1733bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1733c0:
    // 0x1733c0: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1733c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1733c4:
    // 0x1733c4: 0x24a51b28  addiu       $a1, $a1, 0x1B28
    ctx->pc = 0x1733c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6952));
label_1733c8:
    // 0x1733c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1733c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1733cc:
    // 0x1733cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1733ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1733d0:
    // 0x1733d0: 0x25081b30  addiu       $t0, $t0, 0x1B30
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6960));
label_1733d4:
    // 0x1733d4: 0x254a1b58  addiu       $t2, $t2, 0x1B58
    ctx->pc = 0x1733d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7000));
label_1733d8:
    // 0x1733d8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1733d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1733dc:
    // 0x1733dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1733e0:
    // 0x1733e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1733e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1733e4:
    // 0x1733e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1733e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1733e8:
    // 0x1733e8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1733e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1733ec:
    // 0x1733ec: 0x40f809  jalr        $v0
label_1733f0:
    if (ctx->pc == 0x1733F0u) {
        ctx->pc = 0x1733F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733ECu;
        // 0x1733f0: 0x2409038d  addiu       $t1, $zero, 0x38D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 909));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1733F4u;
        goto label_1733f4;
    }
    ctx->pc = 0x1733ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1733F4u);
        ctx->pc = 0x1733F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733ECu;
        // 0x1733f0: 0x2409038d  addiu       $t1, $zero, 0x38D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 909));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733ECu, 0x1733F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1733F4u;
label_1733f4:
    // 0x1733f4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1733f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1733f8:
    // 0x1733f8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1733fc:
    // 0x1733fc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_173400:
    // 0x173400: 0x10000005  b           . + 4 + (0x5 << 2)
label_173404:
    if (ctx->pc == 0x173404u) {
        ctx->pc = 0x173404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173400u;
        // 0x173404: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173408u;
        goto label_173408;
    }
    ctx->pc = 0x173400u;
    {
        const bool branch_taken_0x173400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173400u;
        // 0x173404: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173400) {
            ctx->pc = 0x173418u;
            goto label_173418;
        }
    }
    ctx->pc = 0x173408u;
label_173408:
    // 0x173408: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x173408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17340c:
    // 0x17340c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_173410:
    // 0x173410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_173414:
    // 0x173414: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x173414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_173418:
    // 0x173418: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x173418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_17341c:
    // 0x17341c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x17341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_173420:
    // 0x173420: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_173424:
    if (ctx->pc == 0x173424u) {
        ctx->pc = 0x173424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173420u;
        // 0x173424: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173428u;
        goto label_173428;
    }
    ctx->pc = 0x173420u;
    {
        const bool branch_taken_0x173420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173420u;
        // 0x173424: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173420) {
            ctx->pc = 0x17351Cu;
            goto label_17351c;
        }
    }
    ctx->pc = 0x173428u;
label_173428:
    // 0x173428: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x173428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17342c:
    // 0x17342c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x17342cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_173430:
    // 0x173430: 0xc137a34  jal         func_4DE8D0
label_173434:
    if (ctx->pc == 0x173434u) {
        ctx->pc = 0x173434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173430u;
        // 0x173434: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173438u;
        goto label_173438;
    }
    ctx->pc = 0x173430u;
    SET_GPR_U32(ctx, 31, 0x173438u);
    ctx->pc = 0x173434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173430u;
    // 0x173434: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x173430u, 0x173438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173438u;
label_173438:
    // 0x173438: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_17343c:
    // 0x17343c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x17343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_173440:
    // 0x173440: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x173440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_173444:
    // 0x173444: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_173448:
    if (ctx->pc == 0x173448u) {
        ctx->pc = 0x173448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173444u;
        // 0x173448: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17344Cu;
        goto label_17344c;
    }
    ctx->pc = 0x173444u;
    {
        const bool branch_taken_0x173444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173444u;
        // 0x173448: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173444) {
            ctx->pc = 0x17350Cu;
            goto label_17350c;
        }
    }
    ctx->pc = 0x17344Cu;
label_17344c:
    // 0x17344c: 0x12a00033  beqz        $s5, . + 4 + (0x33 << 2)
label_173450:
    if (ctx->pc == 0x173450u) {
        ctx->pc = 0x173450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17344Cu;
        // 0x173450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173454u;
        goto label_173454;
    }
    ctx->pc = 0x17344Cu;
    {
        const bool branch_taken_0x17344c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x173450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17344Cu;
        // 0x173450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17344c) {
            ctx->pc = 0x17351Cu;
            goto label_17351c;
        }
    }
    ctx->pc = 0x173454u;
label_173454:
    // 0x173454: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_173458:
    // 0x173458: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x173458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17345c:
    // 0x17345c: 0xc061e58  jal         func_187960
label_173460:
    if (ctx->pc == 0x173460u) {
        ctx->pc = 0x173460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17345Cu;
        // 0x173460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173464u;
        goto label_173464;
    }
    ctx->pc = 0x17345Cu;
    SET_GPR_U32(ctx, 31, 0x173464u);
    ctx->pc = 0x173460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17345Cu;
    // 0x173460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x17345Cu, 0x173464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173464u;
label_173464:
    // 0x173464: 0xc061234  jal         func_1848D0
label_173468:
    if (ctx->pc == 0x173468u) {
        ctx->pc = 0x173468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173464u;
        // 0x173468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17346Cu;
        goto label_17346c;
    }
    ctx->pc = 0x173464u;
    SET_GPR_U32(ctx, 31, 0x17346Cu);
    ctx->pc = 0x173468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173464u;
    // 0x173468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x173464u, 0x17346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17346Cu;
label_17346c:
    // 0x17346c: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_173470:
    if (ctx->pc == 0x173470u) {
        ctx->pc = 0x173470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17346Cu;
        // 0x173470: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173474u;
        goto label_173474;
    }
    ctx->pc = 0x17346Cu;
    {
        const bool branch_taken_0x17346c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x173470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17346Cu;
        // 0x173470: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17346c) {
            ctx->pc = 0x17348Cu;
            goto label_17348c;
        }
    }
    ctx->pc = 0x173474u;
label_173474:
    // 0x173474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173478:
    // 0x173478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17347c:
    // 0x17347c: 0xc061f4a  jal         func_187D28
label_173480:
    if (ctx->pc == 0x173480u) {
        ctx->pc = 0x173480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17347Cu;
        // 0x173480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173484u;
        goto label_173484;
    }
    ctx->pc = 0x17347Cu;
    SET_GPR_U32(ctx, 31, 0x173484u);
    ctx->pc = 0x173480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17347Cu;
    // 0x173480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x17347Cu, 0x173484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173484u;
label_173484:
    // 0x173484: 0x1000000a  b           . + 4 + (0xA << 2)
label_173488:
    if (ctx->pc == 0x173488u) {
        ctx->pc = 0x173488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173484u;
        // 0x173488: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17348Cu;
        goto label_17348c;
    }
    ctx->pc = 0x173484u;
    {
        const bool branch_taken_0x173484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173484u;
        // 0x173488: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173484) {
            ctx->pc = 0x1734B0u;
            goto label_1734b0;
        }
    }
    ctx->pc = 0x17348Cu;
label_17348c:
    // 0x17348c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173490:
    // 0x173490: 0xc061e6e  jal         func_1879B8
label_173494:
    if (ctx->pc == 0x173494u) {
        ctx->pc = 0x173494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173490u;
        // 0x173494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173498u;
        goto label_173498;
    }
    ctx->pc = 0x173490u;
    SET_GPR_U32(ctx, 31, 0x173498u);
    ctx->pc = 0x173494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173490u;
    // 0x173494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x173490u, 0x173498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173498u;
label_173498:
    // 0x173498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17349c:
    // 0x17349c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17349cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1734a0:
    // 0x1734a0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1734a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1734a4:
    // 0x1734a4: 0xa0f809  jalr        $a1
label_1734a8:
    if (ctx->pc == 0x1734A8u) {
        ctx->pc = 0x1734A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734A4u;
        // 0x1734a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1734ACu;
        goto label_1734ac;
    }
    ctx->pc = 0x1734A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1734ACu);
        ctx->pc = 0x1734A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734A4u;
        // 0x1734a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1734A4u, 0x1734ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1734ACu;
label_1734ac:
    // 0x1734ac: 0x202a82b  sltu        $s5, $s0, $v0
    ctx->pc = 0x1734acu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1734b0:
    // 0x1734b0: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_1734b4:
    if (ctx->pc == 0x1734B4u) {
        ctx->pc = 0x1734B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734B0u;
        // 0x1734b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1734B8u;
        goto label_1734b8;
    }
    ctx->pc = 0x1734B0u;
    {
        const bool branch_taken_0x1734b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734B0u;
        // 0x1734b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734b0) {
            ctx->pc = 0x17351Cu;
            goto label_17351c;
        }
    }
    ctx->pc = 0x1734B8u;
label_1734b8:
    // 0x1734b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1734b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1734bc:
    // 0x1734bc: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x1734bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1734c0:
    // 0x1734c0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1734c4:
    // 0x1734c4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1734c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1734c8:
    // 0x1734c8: 0x24a51b28  addiu       $a1, $a1, 0x1B28
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6952));
label_1734cc:
    // 0x1734cc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1734d0:
    // 0x1734d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1734d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1734d4:
    // 0x1734d4: 0x25081b30  addiu       $t0, $t0, 0x1B30
    ctx->pc = 0x1734d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6960));
label_1734d8:
    // 0x1734d8: 0x254a1b58  addiu       $t2, $t2, 0x1B58
    ctx->pc = 0x1734d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7000));
label_1734dc:
    // 0x1734dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1734dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1734e0:
    // 0x1734e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1734e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1734e4:
    // 0x1734e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1734e8:
    // 0x1734e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1734e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1734ec:
    // 0x1734ec: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1734ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1734f0:
    // 0x1734f0: 0x40f809  jalr        $v0
label_1734f4:
    if (ctx->pc == 0x1734F4u) {
        ctx->pc = 0x1734F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734F0u;
        // 0x1734f4: 0x240903a0  addiu       $t1, $zero, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1734F8u;
        goto label_1734f8;
    }
    ctx->pc = 0x1734F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1734F8u);
        ctx->pc = 0x1734F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734F0u;
        // 0x1734f4: 0x240903a0  addiu       $t1, $zero, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1734F0u, 0x1734F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1734F8u;
label_1734f8:
    // 0x1734f8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1734fc:
    // 0x1734fc: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1734fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_173500:
    // 0x173500: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x173500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_173504:
    // 0x173504: 0x10000005  b           . + 4 + (0x5 << 2)
label_173508:
    if (ctx->pc == 0x173508u) {
        ctx->pc = 0x173508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173504u;
        // 0x173508: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17350Cu;
        goto label_17350c;
    }
    ctx->pc = 0x173504u;
    {
        const bool branch_taken_0x173504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173504u;
        // 0x173508: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173504) {
            ctx->pc = 0x17351Cu;
            goto label_17351c;
        }
    }
    ctx->pc = 0x17350Cu;
label_17350c:
    // 0x17350c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173510:
    // 0x173510: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_173514:
    // 0x173514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_173518:
    // 0x173518: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x173518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17351c:
    // 0x17351c: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
label_173520:
    if (ctx->pc == 0x173520u) {
        ctx->pc = 0x173520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17351Cu;
        // 0x173520: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173524u;
        goto label_173524;
    }
    ctx->pc = 0x17351Cu;
    {
        const bool branch_taken_0x17351c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x173520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17351Cu;
        // 0x173520: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17351c) {
            ctx->pc = 0x173568u;
            goto label_173568;
        }
    }
    ctx->pc = 0x173524u;
label_173524:
    // 0x173524: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x173524u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_173528:
    // 0x173528: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x173528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17352c:
    // 0x17352c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_173530:
    // 0x173530: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x173530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_173534:
    // 0x173534: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x173534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_173538:
    // 0x173538: 0x26461b30  addiu       $a2, $s2, 0x1B30
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6960));
label_17353c:
    // 0x17353c: 0x240703ac  addiu       $a3, $zero, 0x3AC
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 940));
label_173540:
    // 0x173540: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_173544:
    // 0x173544: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_173548:
    // 0x173548: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17354c:
    // 0x17354c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_173550:
    // 0x173550: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x173550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_173554:
    // 0x173554: 0x60f809  jalr        $v1
label_173558:
    if (ctx->pc == 0x173558u) {
        ctx->pc = 0x173558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173554u;
        // 0x173558: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17355Cu;
        goto label_17355c;
    }
    ctx->pc = 0x173554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17355Cu);
        ctx->pc = 0x173558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173554u;
        // 0x173558: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173554u, 0x17355Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17355Cu;
label_17355c:
    // 0x17355c: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x17355cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_173560:
    // 0x173560: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_173564:
    if (ctx->pc == 0x173564u) {
        ctx->pc = 0x173564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173560u;
        // 0x173564: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173568u;
        goto label_173568;
    }
    ctx->pc = 0x173560u;
    {
        const bool branch_taken_0x173560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173560u;
        // 0x173564: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173560) {
            ctx->pc = 0x173530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173530;
        }
    }
    ctx->pc = 0x173568u;
label_173568:
    // 0x173568: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_17356c:
    // 0x17356c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_173570:
    // 0x173570: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_173574:
    if (ctx->pc == 0x173574u) {
        ctx->pc = 0x173574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173570u;
        // 0x173574: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173578u;
        goto label_173578;
    }
    ctx->pc = 0x173570u;
    {
        const bool branch_taken_0x173570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173570u;
        // 0x173574: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173570) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x173578u;
label_173578:
    // 0x173578: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x173578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17357c:
    // 0x17357c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17357cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_173580:
    // 0x173580: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173584:
    // 0x173584: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x173584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_173588:
    // 0x173588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17358c:
    // 0x17358c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_173590:
    // 0x173590: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x173590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_173594:
    // 0x173594: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x173594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_173598:
    // 0x173598: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x173598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17359c:
    // 0x17359c: 0x40f809  jalr        $v0
label_1735a0:
    if (ctx->pc == 0x1735A0u) {
        ctx->pc = 0x1735A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17359Cu;
        // 0x1735a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735A4u;
        goto label_1735a4;
    }
    ctx->pc = 0x17359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1735A4u);
        ctx->pc = 0x1735A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17359Cu;
        // 0x1735a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17359Cu, 0x1735A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1735A4u;
label_1735a4:
    // 0x1735a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1735a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1735a8:
    // 0x1735a8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1735ac:
    // 0x1735ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1735acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1735b0:
    // 0x1735b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1735b4:
    if (ctx->pc == 0x1735B4u) {
        ctx->pc = 0x1735B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735B0u;
        // 0x1735b4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735B8u;
        goto label_1735b8;
    }
    ctx->pc = 0x1735B0u;
    {
        const bool branch_taken_0x1735b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1735B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735B0u;
        // 0x1735b4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735b0) {
            ctx->pc = 0x1735E8u;
            goto label_1735e8;
        }
    }
    ctx->pc = 0x1735B8u;
label_1735b8:
    // 0x1735b8: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1735bc:
    // 0x1735bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1735c0:
    // 0x1735c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1735c4:
    // 0x1735c4: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1735c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1735c8:
    // 0x1735c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1735c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1735cc:
    // 0x1735cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1735ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1735d0:
    // 0x1735d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1735d4:
    // 0x1735d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1735d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1735d8:
    // 0x1735d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1735dc:
    // 0x1735dc: 0x40f809  jalr        $v0
label_1735e0:
    if (ctx->pc == 0x1735E0u) {
        ctx->pc = 0x1735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735DCu;
        // 0x1735e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735E4u;
        goto label_1735e4;
    }
    ctx->pc = 0x1735DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1735E4u);
        ctx->pc = 0x1735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735DCu;
        // 0x1735e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735DCu, 0x1735E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1735E4u;
label_1735e4:
    // 0x1735e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1735e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1735e8:
    // 0x1735e8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1735ec:
    // 0x1735ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1735f0:
    // 0x1735f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1735f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1735f4:
    // 0x1735f4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1735f8:
    if (ctx->pc == 0x1735F8u) {
        ctx->pc = 0x1735F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735F4u;
        // 0x1735f8: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735FCu;
        goto label_1735fc;
    }
    ctx->pc = 0x1735F4u;
    {
        const bool branch_taken_0x1735f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1735F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735F4u;
        // 0x1735f8: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735f4) {
            ctx->pc = 0x17362Cu;
            goto label_17362c;
        }
    }
    ctx->pc = 0x1735FCu;
label_1735fc:
    // 0x1735fc: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173600:
    // 0x173600: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x173600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_173604:
    // 0x173604: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173608:
    // 0x173608: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x173608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17360c:
    // 0x17360c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_173610:
    // 0x173610: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x173610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_173614:
    // 0x173614: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_173618:
    // 0x173618: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x173618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17361c:
    // 0x17361c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_173620:
    // 0x173620: 0x40f809  jalr        $v0
label_173624:
    if (ctx->pc == 0x173624u) {
        ctx->pc = 0x173624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173620u;
        // 0x173624: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173628u;
        goto label_173628;
    }
    ctx->pc = 0x173620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173628u);
        ctx->pc = 0x173624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173620u;
        // 0x173624: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173620u, 0x173628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173628u;
label_173628:
    // 0x173628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x173628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17362c:
    // 0x17362c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_173630:
    // 0x173630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173634:
    // 0x173634: 0x8c5127e4  lw          $s1, 0x27E4($v0)
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_173638:
    // 0x173638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17363c:
    // 0x17363c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x17363cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173640:
    // 0x173640: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_173644:
    // 0x173644: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x173644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_173648:
    // 0x173648: 0xc061e6e  jal         func_1879B8
label_17364c:
    if (ctx->pc == 0x17364Cu) {
        ctx->pc = 0x17364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173648u;
        // 0x17364c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173650u;
        goto label_173650;
    }
    ctx->pc = 0x173648u;
    SET_GPR_U32(ctx, 31, 0x173650u);
    ctx->pc = 0x17364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173648u;
    // 0x17364c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x173648u, 0x173650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173650u;
label_173650:
    // 0x173650: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173654:
    // 0x173654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173658:
    // 0x173658: 0x60f809  jalr        $v1
label_17365c:
    if (ctx->pc == 0x17365Cu) {
        ctx->pc = 0x17365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173658u;
        // 0x17365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173660u;
        goto label_173660;
    }
    ctx->pc = 0x173658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173660u);
        ctx->pc = 0x17365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173658u;
        // 0x17365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173658u, 0x173660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173660u;
label_173660:
    // 0x173660: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x173660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_173664:
    // 0x173664: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x173664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_173668:
    // 0x173668: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x173668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_17366c:
    // 0x17366c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x17366cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_173670:
    // 0x173670: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x173670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_173674:
    // 0x173674: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x173674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_173678:
    // 0x173678: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x173678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17367c:
    // 0x17367c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x17367cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_173680:
    // 0x173680: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x173680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_173684:
    // 0x173684: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x173684u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_173688:
    // 0x173688: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17368c:
    // 0x17368c: 0x3e00008  jr          $ra
label_173690:
    if (ctx->pc == 0x173690u) {
        ctx->pc = 0x173690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17368Cu;
        // 0x173690: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173694u;
        goto label_173694;
    }
    ctx->pc = 0x17368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17368Cu;
        // 0x173690: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173694u;
label_173694:
    // 0x173694: 0x0  nop
    ctx->pc = 0x173694u;
    // NOP
label_173698:
    // 0x173698: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17369c:
    // 0x17369c: 0x0  nop
    ctx->pc = 0x17369cu;
    // NOP
    ctx->pc = 0x1736a0u;
}
