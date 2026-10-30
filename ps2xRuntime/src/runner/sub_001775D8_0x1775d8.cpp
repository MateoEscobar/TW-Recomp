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

// Function: sub_001775D8
// Address: 0x1775d8 - 0x177b00
void sub_001775D8_0x1775d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001775D8_0x1775d8");
#endif

    switch (ctx->pc) {
        case 0x1775d8u: goto label_1775d8;
        case 0x1775dcu: goto label_1775dc;
        case 0x1775e0u: goto label_1775e0;
        case 0x1775e4u: goto label_1775e4;
        case 0x1775e8u: goto label_1775e8;
        case 0x1775ecu: goto label_1775ec;
        case 0x1775f0u: goto label_1775f0;
        case 0x1775f4u: goto label_1775f4;
        case 0x1775f8u: goto label_1775f8;
        case 0x1775fcu: goto label_1775fc;
        case 0x177600u: goto label_177600;
        case 0x177604u: goto label_177604;
        case 0x177608u: goto label_177608;
        case 0x17760cu: goto label_17760c;
        case 0x177610u: goto label_177610;
        case 0x177614u: goto label_177614;
        case 0x177618u: goto label_177618;
        case 0x17761cu: goto label_17761c;
        case 0x177620u: goto label_177620;
        case 0x177624u: goto label_177624;
        case 0x177628u: goto label_177628;
        case 0x17762cu: goto label_17762c;
        case 0x177630u: goto label_177630;
        case 0x177634u: goto label_177634;
        case 0x177638u: goto label_177638;
        case 0x17763cu: goto label_17763c;
        case 0x177640u: goto label_177640;
        case 0x177644u: goto label_177644;
        case 0x177648u: goto label_177648;
        case 0x17764cu: goto label_17764c;
        case 0x177650u: goto label_177650;
        case 0x177654u: goto label_177654;
        case 0x177658u: goto label_177658;
        case 0x17765cu: goto label_17765c;
        case 0x177660u: goto label_177660;
        case 0x177664u: goto label_177664;
        case 0x177668u: goto label_177668;
        case 0x17766cu: goto label_17766c;
        case 0x177670u: goto label_177670;
        case 0x177674u: goto label_177674;
        case 0x177678u: goto label_177678;
        case 0x17767cu: goto label_17767c;
        case 0x177680u: goto label_177680;
        case 0x177684u: goto label_177684;
        case 0x177688u: goto label_177688;
        case 0x17768cu: goto label_17768c;
        case 0x177690u: goto label_177690;
        case 0x177694u: goto label_177694;
        case 0x177698u: goto label_177698;
        case 0x17769cu: goto label_17769c;
        case 0x1776a0u: goto label_1776a0;
        case 0x1776a4u: goto label_1776a4;
        case 0x1776a8u: goto label_1776a8;
        case 0x1776acu: goto label_1776ac;
        case 0x1776b0u: goto label_1776b0;
        case 0x1776b4u: goto label_1776b4;
        case 0x1776b8u: goto label_1776b8;
        case 0x1776bcu: goto label_1776bc;
        case 0x1776c0u: goto label_1776c0;
        case 0x1776c4u: goto label_1776c4;
        case 0x1776c8u: goto label_1776c8;
        case 0x1776ccu: goto label_1776cc;
        case 0x1776d0u: goto label_1776d0;
        case 0x1776d4u: goto label_1776d4;
        case 0x1776d8u: goto label_1776d8;
        case 0x1776dcu: goto label_1776dc;
        case 0x1776e0u: goto label_1776e0;
        case 0x1776e4u: goto label_1776e4;
        case 0x1776e8u: goto label_1776e8;
        case 0x1776ecu: goto label_1776ec;
        case 0x1776f0u: goto label_1776f0;
        case 0x1776f4u: goto label_1776f4;
        case 0x1776f8u: goto label_1776f8;
        case 0x1776fcu: goto label_1776fc;
        case 0x177700u: goto label_177700;
        case 0x177704u: goto label_177704;
        case 0x177708u: goto label_177708;
        case 0x17770cu: goto label_17770c;
        case 0x177710u: goto label_177710;
        case 0x177714u: goto label_177714;
        case 0x177718u: goto label_177718;
        case 0x17771cu: goto label_17771c;
        case 0x177720u: goto label_177720;
        case 0x177724u: goto label_177724;
        case 0x177728u: goto label_177728;
        case 0x17772cu: goto label_17772c;
        case 0x177730u: goto label_177730;
        case 0x177734u: goto label_177734;
        case 0x177738u: goto label_177738;
        case 0x17773cu: goto label_17773c;
        case 0x177740u: goto label_177740;
        case 0x177744u: goto label_177744;
        case 0x177748u: goto label_177748;
        case 0x17774cu: goto label_17774c;
        case 0x177750u: goto label_177750;
        case 0x177754u: goto label_177754;
        case 0x177758u: goto label_177758;
        case 0x17775cu: goto label_17775c;
        case 0x177760u: goto label_177760;
        case 0x177764u: goto label_177764;
        case 0x177768u: goto label_177768;
        case 0x17776cu: goto label_17776c;
        case 0x177770u: goto label_177770;
        case 0x177774u: goto label_177774;
        case 0x177778u: goto label_177778;
        case 0x17777cu: goto label_17777c;
        case 0x177780u: goto label_177780;
        case 0x177784u: goto label_177784;
        case 0x177788u: goto label_177788;
        case 0x17778cu: goto label_17778c;
        case 0x177790u: goto label_177790;
        case 0x177794u: goto label_177794;
        case 0x177798u: goto label_177798;
        case 0x17779cu: goto label_17779c;
        case 0x1777a0u: goto label_1777a0;
        case 0x1777a4u: goto label_1777a4;
        case 0x1777a8u: goto label_1777a8;
        case 0x1777acu: goto label_1777ac;
        case 0x1777b0u: goto label_1777b0;
        case 0x1777b4u: goto label_1777b4;
        case 0x1777b8u: goto label_1777b8;
        case 0x1777bcu: goto label_1777bc;
        case 0x1777c0u: goto label_1777c0;
        case 0x1777c4u: goto label_1777c4;
        case 0x1777c8u: goto label_1777c8;
        case 0x1777ccu: goto label_1777cc;
        case 0x1777d0u: goto label_1777d0;
        case 0x1777d4u: goto label_1777d4;
        case 0x1777d8u: goto label_1777d8;
        case 0x1777dcu: goto label_1777dc;
        case 0x1777e0u: goto label_1777e0;
        case 0x1777e4u: goto label_1777e4;
        case 0x1777e8u: goto label_1777e8;
        case 0x1777ecu: goto label_1777ec;
        case 0x1777f0u: goto label_1777f0;
        case 0x1777f4u: goto label_1777f4;
        case 0x1777f8u: goto label_1777f8;
        case 0x1777fcu: goto label_1777fc;
        case 0x177800u: goto label_177800;
        case 0x177804u: goto label_177804;
        case 0x177808u: goto label_177808;
        case 0x17780cu: goto label_17780c;
        case 0x177810u: goto label_177810;
        case 0x177814u: goto label_177814;
        case 0x177818u: goto label_177818;
        case 0x17781cu: goto label_17781c;
        case 0x177820u: goto label_177820;
        case 0x177824u: goto label_177824;
        case 0x177828u: goto label_177828;
        case 0x17782cu: goto label_17782c;
        case 0x177830u: goto label_177830;
        case 0x177834u: goto label_177834;
        case 0x177838u: goto label_177838;
        case 0x17783cu: goto label_17783c;
        case 0x177840u: goto label_177840;
        case 0x177844u: goto label_177844;
        case 0x177848u: goto label_177848;
        case 0x17784cu: goto label_17784c;
        case 0x177850u: goto label_177850;
        case 0x177854u: goto label_177854;
        case 0x177858u: goto label_177858;
        case 0x17785cu: goto label_17785c;
        case 0x177860u: goto label_177860;
        case 0x177864u: goto label_177864;
        case 0x177868u: goto label_177868;
        case 0x17786cu: goto label_17786c;
        case 0x177870u: goto label_177870;
        case 0x177874u: goto label_177874;
        case 0x177878u: goto label_177878;
        case 0x17787cu: goto label_17787c;
        case 0x177880u: goto label_177880;
        case 0x177884u: goto label_177884;
        case 0x177888u: goto label_177888;
        case 0x17788cu: goto label_17788c;
        case 0x177890u: goto label_177890;
        case 0x177894u: goto label_177894;
        case 0x177898u: goto label_177898;
        case 0x17789cu: goto label_17789c;
        case 0x1778a0u: goto label_1778a0;
        case 0x1778a4u: goto label_1778a4;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778acu: goto label_1778ac;
        case 0x1778b0u: goto label_1778b0;
        case 0x1778b4u: goto label_1778b4;
        case 0x1778b8u: goto label_1778b8;
        case 0x1778bcu: goto label_1778bc;
        case 0x1778c0u: goto label_1778c0;
        case 0x1778c4u: goto label_1778c4;
        case 0x1778c8u: goto label_1778c8;
        case 0x1778ccu: goto label_1778cc;
        case 0x1778d0u: goto label_1778d0;
        case 0x1778d4u: goto label_1778d4;
        case 0x1778d8u: goto label_1778d8;
        case 0x1778dcu: goto label_1778dc;
        case 0x1778e0u: goto label_1778e0;
        case 0x1778e4u: goto label_1778e4;
        case 0x1778e8u: goto label_1778e8;
        case 0x1778ecu: goto label_1778ec;
        case 0x1778f0u: goto label_1778f0;
        case 0x1778f4u: goto label_1778f4;
        case 0x1778f8u: goto label_1778f8;
        case 0x1778fcu: goto label_1778fc;
        case 0x177900u: goto label_177900;
        case 0x177904u: goto label_177904;
        case 0x177908u: goto label_177908;
        case 0x17790cu: goto label_17790c;
        case 0x177910u: goto label_177910;
        case 0x177914u: goto label_177914;
        case 0x177918u: goto label_177918;
        case 0x17791cu: goto label_17791c;
        case 0x177920u: goto label_177920;
        case 0x177924u: goto label_177924;
        case 0x177928u: goto label_177928;
        case 0x17792cu: goto label_17792c;
        case 0x177930u: goto label_177930;
        case 0x177934u: goto label_177934;
        case 0x177938u: goto label_177938;
        case 0x17793cu: goto label_17793c;
        case 0x177940u: goto label_177940;
        case 0x177944u: goto label_177944;
        case 0x177948u: goto label_177948;
        case 0x17794cu: goto label_17794c;
        case 0x177950u: goto label_177950;
        case 0x177954u: goto label_177954;
        case 0x177958u: goto label_177958;
        case 0x17795cu: goto label_17795c;
        case 0x177960u: goto label_177960;
        case 0x177964u: goto label_177964;
        case 0x177968u: goto label_177968;
        case 0x17796cu: goto label_17796c;
        case 0x177970u: goto label_177970;
        case 0x177974u: goto label_177974;
        case 0x177978u: goto label_177978;
        case 0x17797cu: goto label_17797c;
        case 0x177980u: goto label_177980;
        case 0x177984u: goto label_177984;
        case 0x177988u: goto label_177988;
        case 0x17798cu: goto label_17798c;
        case 0x177990u: goto label_177990;
        case 0x177994u: goto label_177994;
        case 0x177998u: goto label_177998;
        case 0x17799cu: goto label_17799c;
        case 0x1779a0u: goto label_1779a0;
        case 0x1779a4u: goto label_1779a4;
        case 0x1779a8u: goto label_1779a8;
        case 0x1779acu: goto label_1779ac;
        case 0x1779b0u: goto label_1779b0;
        case 0x1779b4u: goto label_1779b4;
        case 0x1779b8u: goto label_1779b8;
        case 0x1779bcu: goto label_1779bc;
        case 0x1779c0u: goto label_1779c0;
        case 0x1779c4u: goto label_1779c4;
        case 0x1779c8u: goto label_1779c8;
        case 0x1779ccu: goto label_1779cc;
        case 0x1779d0u: goto label_1779d0;
        case 0x1779d4u: goto label_1779d4;
        case 0x1779d8u: goto label_1779d8;
        case 0x1779dcu: goto label_1779dc;
        case 0x1779e0u: goto label_1779e0;
        case 0x1779e4u: goto label_1779e4;
        case 0x1779e8u: goto label_1779e8;
        case 0x1779ecu: goto label_1779ec;
        case 0x1779f0u: goto label_1779f0;
        case 0x1779f4u: goto label_1779f4;
        case 0x1779f8u: goto label_1779f8;
        case 0x1779fcu: goto label_1779fc;
        case 0x177a00u: goto label_177a00;
        case 0x177a04u: goto label_177a04;
        case 0x177a08u: goto label_177a08;
        case 0x177a0cu: goto label_177a0c;
        case 0x177a10u: goto label_177a10;
        case 0x177a14u: goto label_177a14;
        case 0x177a18u: goto label_177a18;
        case 0x177a1cu: goto label_177a1c;
        case 0x177a20u: goto label_177a20;
        case 0x177a24u: goto label_177a24;
        case 0x177a28u: goto label_177a28;
        case 0x177a2cu: goto label_177a2c;
        case 0x177a30u: goto label_177a30;
        case 0x177a34u: goto label_177a34;
        case 0x177a38u: goto label_177a38;
        case 0x177a3cu: goto label_177a3c;
        case 0x177a40u: goto label_177a40;
        case 0x177a44u: goto label_177a44;
        case 0x177a48u: goto label_177a48;
        case 0x177a4cu: goto label_177a4c;
        case 0x177a50u: goto label_177a50;
        case 0x177a54u: goto label_177a54;
        case 0x177a58u: goto label_177a58;
        case 0x177a5cu: goto label_177a5c;
        case 0x177a60u: goto label_177a60;
        case 0x177a64u: goto label_177a64;
        case 0x177a68u: goto label_177a68;
        case 0x177a6cu: goto label_177a6c;
        case 0x177a70u: goto label_177a70;
        case 0x177a74u: goto label_177a74;
        case 0x177a78u: goto label_177a78;
        case 0x177a7cu: goto label_177a7c;
        case 0x177a80u: goto label_177a80;
        case 0x177a84u: goto label_177a84;
        case 0x177a88u: goto label_177a88;
        case 0x177a8cu: goto label_177a8c;
        case 0x177a90u: goto label_177a90;
        case 0x177a94u: goto label_177a94;
        case 0x177a98u: goto label_177a98;
        case 0x177a9cu: goto label_177a9c;
        case 0x177aa0u: goto label_177aa0;
        case 0x177aa4u: goto label_177aa4;
        case 0x177aa8u: goto label_177aa8;
        case 0x177aacu: goto label_177aac;
        case 0x177ab0u: goto label_177ab0;
        case 0x177ab4u: goto label_177ab4;
        case 0x177ab8u: goto label_177ab8;
        case 0x177abcu: goto label_177abc;
        case 0x177ac0u: goto label_177ac0;
        case 0x177ac4u: goto label_177ac4;
        case 0x177ac8u: goto label_177ac8;
        case 0x177accu: goto label_177acc;
        case 0x177ad0u: goto label_177ad0;
        case 0x177ad4u: goto label_177ad4;
        case 0x177ad8u: goto label_177ad8;
        case 0x177adcu: goto label_177adc;
        case 0x177ae0u: goto label_177ae0;
        case 0x177ae4u: goto label_177ae4;
        case 0x177ae8u: goto label_177ae8;
        case 0x177aecu: goto label_177aec;
        case 0x177af0u: goto label_177af0;
        case 0x177af4u: goto label_177af4;
        case 0x177af8u: goto label_177af8;
        case 0x177afcu: goto label_177afc;
        default: break;
    }

    ctx->pc = 0x1775d8u;

label_1775d8:
    // 0x1775d8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1775dc:
    // 0x1775dc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1775dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1775e0:
    // 0x1775e0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1775e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1775e4:
    // 0x1775e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1775e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1775e8:
    // 0x1775e8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1775e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1775ec:
    // 0x1775ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1775ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1775f0:
    // 0x1775f0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1775f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1775f4:
    // 0x1775f4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1775f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1775f8:
    // 0x1775f8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1775f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1775fc:
    // 0x1775fc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1775fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_177600:
    // 0x177600: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x177600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_177604:
    // 0x177604: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x177604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_177608:
    // 0x177608: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17760c:
    // 0x17760c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_177610:
    // 0x177610: 0xc061664  jal         func_185990
label_177614:
    if (ctx->pc == 0x177614u) {
        ctx->pc = 0x177614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177610u;
        // 0x177614: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177618u;
        goto label_177618;
    }
    ctx->pc = 0x177610u;
    SET_GPR_U32(ctx, 31, 0x177618u);
    ctx->pc = 0x177614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177610u;
    // 0x177614: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x177610u, 0x177618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177618u;
label_177618:
    // 0x177618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17761c:
    if (ctx->pc == 0x17761Cu) {
        ctx->pc = 0x17761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177618u;
        // 0x17761c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177620u;
        goto label_177620;
    }
    ctx->pc = 0x177618u;
    {
        const bool branch_taken_0x177618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177618u;
        // 0x17761c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177618) {
            ctx->pc = 0x177638u;
            goto label_177638;
        }
    }
    ctx->pc = 0x177620u;
label_177620:
    // 0x177620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177624:
    // 0x177624: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x177624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_177628:
    // 0x177628: 0xc05dd34  jal         func_1774D0
label_17762c:
    if (ctx->pc == 0x17762Cu) {
        ctx->pc = 0x17762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177628u;
        // 0x17762c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177630u;
        goto label_177630;
    }
    ctx->pc = 0x177628u;
    SET_GPR_U32(ctx, 31, 0x177630u);
    ctx->pc = 0x17762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177628u;
    // 0x17762c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x177628u, 0x177630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177630u;
label_177630:
    // 0x177630: 0x10000127  b           . + 4 + (0x127 << 2)
label_177634:
    if (ctx->pc == 0x177634u) {
        ctx->pc = 0x177634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177630u;
        // 0x177634: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177638u;
        goto label_177638;
    }
    ctx->pc = 0x177630u;
    {
        const bool branch_taken_0x177630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177630u;
        // 0x177634: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177630) {
            ctx->pc = 0x177AD0u;
            goto label_177ad0;
        }
    }
    ctx->pc = 0x177638u;
label_177638:
    // 0x177638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17763c:
    // 0x17763c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x17763cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_177640:
    // 0x177640: 0xc05dd34  jal         func_1774D0
label_177644:
    if (ctx->pc == 0x177644u) {
        ctx->pc = 0x177644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177640u;
        // 0x177644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177648u;
        goto label_177648;
    }
    ctx->pc = 0x177640u;
    SET_GPR_U32(ctx, 31, 0x177648u);
    ctx->pc = 0x177644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177640u;
    // 0x177644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x177640u, 0x177648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177648u;
label_177648:
    // 0x177648: 0x14400120  bnez        $v0, . + 4 + (0x120 << 2)
label_17764c:
    if (ctx->pc == 0x17764Cu) {
        ctx->pc = 0x17764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177648u;
        // 0x17764c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177650u;
        goto label_177650;
    }
    ctx->pc = 0x177648u;
    {
        const bool branch_taken_0x177648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177648u;
        // 0x17764c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177648) {
            ctx->pc = 0x177ACCu;
            goto label_177acc;
        }
    }
    ctx->pc = 0x177650u;
label_177650:
    // 0x177650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x177650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_177654:
    // 0x177654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_177658:
    // 0x177658: 0x8c5127e4  lw          $s1, 0x27E4($v0)
    ctx->pc = 0x177658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_17765c:
    // 0x17765c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x17765cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177660:
    // 0x177660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177664:
    // 0x177664: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x177664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177668:
    // 0x177668: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17766c:
    // 0x17766c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17766cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177670:
    // 0x177670: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_177674:
    // 0x177674: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x177674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_177678:
    // 0x177678: 0xc061e6e  jal         func_1879B8
label_17767c:
    if (ctx->pc == 0x17767Cu) {
        ctx->pc = 0x17767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177678u;
        // 0x17767c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177680u;
        goto label_177680;
    }
    ctx->pc = 0x177678u;
    SET_GPR_U32(ctx, 31, 0x177680u);
    ctx->pc = 0x17767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177678u;
    // 0x17767c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x177678u, 0x177680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177680u;
label_177680:
    // 0x177680: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177684:
    // 0x177684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177688:
    // 0x177688: 0x60f809  jalr        $v1
label_17768c:
    if (ctx->pc == 0x17768Cu) {
        ctx->pc = 0x17768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177688u;
        // 0x17768c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177690u;
        goto label_177690;
    }
    ctx->pc = 0x177688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177690u);
        ctx->pc = 0x17768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177688u;
        // 0x17768c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177688u, 0x177690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177690u;
label_177690:
    // 0x177690: 0x56c0003f  bnel        $s6, $zero, . + 4 + (0x3F << 2)
label_177694:
    if (ctx->pc == 0x177694u) {
        ctx->pc = 0x177694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177690u;
        // 0x177694: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177698u;
        goto label_177698;
    }
    ctx->pc = 0x177690u;
    {
        const bool branch_taken_0x177690 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x177690) {
            ctx->pc = 0x177694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177690u;
            // 0x177694: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177790u;
            goto label_177790;
        }
    }
    ctx->pc = 0x177698u;
label_177698:
    // 0x177698: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17769c:
    // 0x17769c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1776a0:
    // 0x1776a0: 0xc137afa  jal         func_4DEBE8
label_1776a4:
    if (ctx->pc == 0x1776A4u) {
        ctx->pc = 0x1776A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776A0u;
        // 0x1776a4: 0x2666000c  addiu       $a2, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776A8u;
        goto label_1776a8;
    }
    ctx->pc = 0x1776A0u;
    SET_GPR_U32(ctx, 31, 0x1776A8u);
    ctx->pc = 0x1776A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776A0u;
    // 0x1776a4: 0x2666000c  addiu       $a2, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x1776A0u, 0x1776A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776A8u;
label_1776a8:
    // 0x1776a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1776ac:
    // 0x1776ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1776b0:
    // 0x1776b0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1776b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1776b4:
    // 0x1776b4: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_1776b8:
    if (ctx->pc == 0x1776B8u) {
        ctx->pc = 0x1776B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776B4u;
        // 0x1776b8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776BCu;
        goto label_1776bc;
    }
    ctx->pc = 0x1776B4u;
    {
        const bool branch_taken_0x1776b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1776B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776B4u;
        // 0x1776b8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776b4) {
            ctx->pc = 0x17777Cu;
            goto label_17777c;
        }
    }
    ctx->pc = 0x1776BCu;
label_1776bc:
    // 0x1776bc: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1776bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1776c0:
    // 0x1776c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1776c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1776c4:
    // 0x1776c4: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x1776c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1776c8:
    // 0x1776c8: 0xc061e58  jal         func_187960
label_1776cc:
    if (ctx->pc == 0x1776CCu) {
        ctx->pc = 0x1776CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776C8u;
        // 0x1776cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776D0u;
        goto label_1776d0;
    }
    ctx->pc = 0x1776C8u;
    SET_GPR_U32(ctx, 31, 0x1776D0u);
    ctx->pc = 0x1776CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776C8u;
    // 0x1776cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x1776C8u, 0x1776D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776D0u;
label_1776d0:
    // 0x1776d0: 0xc061234  jal         func_1848D0
label_1776d4:
    if (ctx->pc == 0x1776D4u) {
        ctx->pc = 0x1776D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776D0u;
        // 0x1776d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776D8u;
        goto label_1776d8;
    }
    ctx->pc = 0x1776D0u;
    SET_GPR_U32(ctx, 31, 0x1776D8u);
    ctx->pc = 0x1776D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776D0u;
    // 0x1776d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x1776D0u, 0x1776D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776D8u;
label_1776d8:
    // 0x1776d8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_1776dc:
    if (ctx->pc == 0x1776DCu) {
        ctx->pc = 0x1776DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776D8u;
        // 0x1776dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776E0u;
        goto label_1776e0;
    }
    ctx->pc = 0x1776D8u;
    {
        const bool branch_taken_0x1776d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776D8u;
        // 0x1776dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776d8) {
            ctx->pc = 0x1776F8u;
            goto label_1776f8;
        }
    }
    ctx->pc = 0x1776E0u;
label_1776e0:
    // 0x1776e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1776e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1776e4:
    // 0x1776e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1776e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1776e8:
    // 0x1776e8: 0xc061f4a  jal         func_187D28
label_1776ec:
    if (ctx->pc == 0x1776ECu) {
        ctx->pc = 0x1776ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776E8u;
        // 0x1776ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776F0u;
        goto label_1776f0;
    }
    ctx->pc = 0x1776E8u;
    SET_GPR_U32(ctx, 31, 0x1776F0u);
    ctx->pc = 0x1776ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776E8u;
    // 0x1776ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x1776E8u, 0x1776F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776F0u;
label_1776f0:
    // 0x1776f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1776f4:
    if (ctx->pc == 0x1776F4u) {
        ctx->pc = 0x1776F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776F0u;
        // 0x1776f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776F8u;
        goto label_1776f8;
    }
    ctx->pc = 0x1776F0u;
    {
        const bool branch_taken_0x1776f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776F0u;
        // 0x1776f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776f0) {
            ctx->pc = 0x17771Cu;
            goto label_17771c;
        }
    }
    ctx->pc = 0x1776F8u;
label_1776f8:
    // 0x1776f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1776f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1776fc:
    // 0x1776fc: 0xc061e6e  jal         func_1879B8
label_177700:
    if (ctx->pc == 0x177700u) {
        ctx->pc = 0x177700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776FCu;
        // 0x177700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177704u;
        goto label_177704;
    }
    ctx->pc = 0x1776FCu;
    SET_GPR_U32(ctx, 31, 0x177704u);
    ctx->pc = 0x177700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776FCu;
    // 0x177700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x1776FCu, 0x177704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177704u;
label_177704:
    // 0x177704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177708:
    // 0x177708: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17770c:
    // 0x17770c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_177710:
    // 0x177710: 0xa0f809  jalr        $a1
label_177714:
    if (ctx->pc == 0x177714u) {
        ctx->pc = 0x177714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177710u;
        // 0x177714: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177718u;
        goto label_177718;
    }
    ctx->pc = 0x177710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x177718u);
        ctx->pc = 0x177714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177710u;
        // 0x177714: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177710u, 0x177718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177718u;
label_177718:
    // 0x177718: 0x202a02b  sltu        $s4, $s0, $v0
    ctx->pc = 0x177718u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17771c:
    // 0x17771c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177720:
    // 0x177720: 0x5682001b  bnel        $s4, $v0, . + 4 + (0x1B << 2)
label_177724:
    if (ctx->pc == 0x177724u) {
        ctx->pc = 0x177724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177720u;
        // 0x177724: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177728u;
        goto label_177728;
    }
    ctx->pc = 0x177720u;
    {
        const bool branch_taken_0x177720 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x177720) {
            ctx->pc = 0x177724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177720u;
            // 0x177724: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177790u;
            goto label_177790;
        }
    }
    ctx->pc = 0x177728u;
label_177728:
    // 0x177728: 0x8fc927e4  lw          $t1, 0x27E4($fp)
    ctx->pc = 0x177728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_17772c:
    // 0x17772c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17772cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_177730:
    // 0x177730: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x177730u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_177734:
    // 0x177734: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_177738:
    // 0x177738: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x177738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_17773c:
    // 0x17773c: 0x24a51d38  addiu       $a1, $a1, 0x1D38
    ctx->pc = 0x17773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
label_177740:
    // 0x177740: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x177740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177744:
    // 0x177744: 0x25081d40  addiu       $t0, $t0, 0x1D40
    ctx->pc = 0x177744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7488));
label_177748:
    // 0x177748: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x177748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17774c:
    // 0x17774c: 0x254a1d70  addiu       $t2, $t2, 0x1D70
    ctx->pc = 0x17774cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7536));
label_177750:
    // 0x177750: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x177750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_177754:
    // 0x177754: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x177754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177758:
    // 0x177758: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_17775c:
    // 0x17775c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17775cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177760:
    // 0x177760: 0x40f809  jalr        $v0
label_177764:
    if (ctx->pc == 0x177764u) {
        ctx->pc = 0x177764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177760u;
        // 0x177764: 0x24090761  addiu       $t1, $zero, 0x761 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1889));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177768u;
        goto label_177768;
    }
    ctx->pc = 0x177760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177768u);
        ctx->pc = 0x177764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177760u;
        // 0x177764: 0x24090761  addiu       $t1, $zero, 0x761 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1889));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177760u, 0x177768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177768u;
label_177768:
    // 0x177768: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x177768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_17776c:
    // 0x17776c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x17776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_177770:
    // 0x177770: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x177770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177774:
    // 0x177774: 0x10000005  b           . + 4 + (0x5 << 2)
label_177778:
    if (ctx->pc == 0x177778u) {
        ctx->pc = 0x177778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177774u;
        // 0x177778: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17777Cu;
        goto label_17777c;
    }
    ctx->pc = 0x177774u;
    {
        const bool branch_taken_0x177774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177774u;
        // 0x177778: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177774) {
            ctx->pc = 0x17778Cu;
            goto label_17778c;
        }
    }
    ctx->pc = 0x17777Cu;
label_17777c:
    // 0x17777c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x17777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_177780:
    // 0x177780: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_177784:
    // 0x177784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_177788:
    // 0x177788: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x177788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17778c:
    // 0x17778c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x17778cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_177790:
    // 0x177790: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x177790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_177794:
    // 0x177794: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x177794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
label_177798:
    // 0x177798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17779c:
    // 0x17779c: 0xc137916  jal         func_4DE458
label_1777a0:
    if (ctx->pc == 0x1777A0u) {
        ctx->pc = 0x1777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17779Cu;
        // 0x1777a0: 0x26660004  addiu       $a2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777A4u;
        goto label_1777a4;
    }
    ctx->pc = 0x17779Cu;
    SET_GPR_U32(ctx, 31, 0x1777A4u);
    ctx->pc = 0x1777A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17779Cu;
    // 0x1777a0: 0x26660004  addiu       $a2, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x17779Cu, 0x1777A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777A4u;
label_1777a4:
    // 0x1777a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1777a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1777a8:
    // 0x1777a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1777ac:
    // 0x1777ac: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_1777b0:
    if (ctx->pc == 0x1777B0u) {
        ctx->pc = 0x1777B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777ACu;
        // 0x1777b0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777B4u;
        goto label_1777b4;
    }
    ctx->pc = 0x1777ACu;
    {
        const bool branch_taken_0x1777ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1777B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777ACu;
        // 0x1777b0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777ac) {
            ctx->pc = 0x177874u;
            goto label_177874;
        }
    }
    ctx->pc = 0x1777B4u;
label_1777b4:
    // 0x1777b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1777b8:
    // 0x1777b8: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
label_1777bc:
    if (ctx->pc == 0x1777BCu) {
        ctx->pc = 0x1777BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777B8u;
        // 0x1777bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777C0u;
        goto label_1777c0;
    }
    ctx->pc = 0x1777B8u;
    {
        const bool branch_taken_0x1777b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1777BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777B8u;
        // 0x1777bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777b8) {
            ctx->pc = 0x177884u;
            goto label_177884;
        }
    }
    ctx->pc = 0x1777C0u;
label_1777c0:
    // 0x1777c0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1777c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1777c4:
    // 0x1777c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1777c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1777c8:
    // 0x1777c8: 0xc061e58  jal         func_187960
label_1777cc:
    if (ctx->pc == 0x1777CCu) {
        ctx->pc = 0x1777CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777C8u;
        // 0x1777cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777D0u;
        goto label_1777d0;
    }
    ctx->pc = 0x1777C8u;
    SET_GPR_U32(ctx, 31, 0x1777D0u);
    ctx->pc = 0x1777CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777C8u;
    // 0x1777cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x1777C8u, 0x1777D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777D0u;
label_1777d0:
    // 0x1777d0: 0xc061234  jal         func_1848D0
label_1777d4:
    if (ctx->pc == 0x1777D4u) {
        ctx->pc = 0x1777D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777D0u;
        // 0x1777d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777D8u;
        goto label_1777d8;
    }
    ctx->pc = 0x1777D0u;
    SET_GPR_U32(ctx, 31, 0x1777D8u);
    ctx->pc = 0x1777D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777D0u;
    // 0x1777d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x1777D0u, 0x1777D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777D8u;
label_1777d8:
    // 0x1777d8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_1777dc:
    if (ctx->pc == 0x1777DCu) {
        ctx->pc = 0x1777DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777D8u;
        // 0x1777dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777E0u;
        goto label_1777e0;
    }
    ctx->pc = 0x1777D8u;
    {
        const bool branch_taken_0x1777d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777D8u;
        // 0x1777dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777d8) {
            ctx->pc = 0x1777F8u;
            goto label_1777f8;
        }
    }
    ctx->pc = 0x1777E0u;
label_1777e0:
    // 0x1777e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1777e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1777e4:
    // 0x1777e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1777e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1777e8:
    // 0x1777e8: 0xc061f4a  jal         func_187D28
label_1777ec:
    if (ctx->pc == 0x1777ECu) {
        ctx->pc = 0x1777ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777E8u;
        // 0x1777ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777F0u;
        goto label_1777f0;
    }
    ctx->pc = 0x1777E8u;
    SET_GPR_U32(ctx, 31, 0x1777F0u);
    ctx->pc = 0x1777ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777E8u;
    // 0x1777ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x1777E8u, 0x1777F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777F0u;
label_1777f0:
    // 0x1777f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1777f4:
    if (ctx->pc == 0x1777F4u) {
        ctx->pc = 0x1777F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777F0u;
        // 0x1777f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1777F8u;
        goto label_1777f8;
    }
    ctx->pc = 0x1777F0u;
    {
        const bool branch_taken_0x1777f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777F0u;
        // 0x1777f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777f0) {
            ctx->pc = 0x17781Cu;
            goto label_17781c;
        }
    }
    ctx->pc = 0x1777F8u;
label_1777f8:
    // 0x1777f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1777f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1777fc:
    // 0x1777fc: 0xc061e6e  jal         func_1879B8
label_177800:
    if (ctx->pc == 0x177800u) {
        ctx->pc = 0x177800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777FCu;
        // 0x177800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177804u;
        goto label_177804;
    }
    ctx->pc = 0x1777FCu;
    SET_GPR_U32(ctx, 31, 0x177804u);
    ctx->pc = 0x177800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777FCu;
    // 0x177800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x1777FCu, 0x177804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177804u;
label_177804:
    // 0x177804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177808:
    // 0x177808: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x177808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17780c:
    // 0x17780c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_177810:
    // 0x177810: 0xa0f809  jalr        $a1
label_177814:
    if (ctx->pc == 0x177814u) {
        ctx->pc = 0x177814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177810u;
        // 0x177814: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177818u;
        goto label_177818;
    }
    ctx->pc = 0x177810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x177818u);
        ctx->pc = 0x177814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177810u;
        // 0x177814: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177810u, 0x177818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177818u;
label_177818:
    // 0x177818: 0x202a02b  sltu        $s4, $s0, $v0
    ctx->pc = 0x177818u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17781c:
    // 0x17781c: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
label_177820:
    if (ctx->pc == 0x177820u) {
        ctx->pc = 0x177820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17781Cu;
        // 0x177820: 0x8fc927e4  lw          $t1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177824u;
        goto label_177824;
    }
    ctx->pc = 0x17781Cu;
    {
        const bool branch_taken_0x17781c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x177820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17781Cu;
        // 0x177820: 0x8fc927e4  lw          $t1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17781c) {
            ctx->pc = 0x177884u;
            goto label_177884;
        }
    }
    ctx->pc = 0x177824u;
label_177824:
    // 0x177824: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x177824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_177828:
    // 0x177828: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x177828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_17782c:
    // 0x17782c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_177830:
    // 0x177830: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_177834:
    // 0x177834: 0x24a51d38  addiu       $a1, $a1, 0x1D38
    ctx->pc = 0x177834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
label_177838:
    // 0x177838: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x177838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17783c:
    // 0x17783c: 0x25081d40  addiu       $t0, $t0, 0x1D40
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7488));
label_177840:
    // 0x177840: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x177840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_177844:
    // 0x177844: 0x254a1d70  addiu       $t2, $t2, 0x1D70
    ctx->pc = 0x177844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7536));
label_177848:
    // 0x177848: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x177848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17784c:
    // 0x17784c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x17784cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177850:
    // 0x177850: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x177850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_177854:
    // 0x177854: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177858:
    // 0x177858: 0x40f809  jalr        $v0
label_17785c:
    if (ctx->pc == 0x17785Cu) {
        ctx->pc = 0x17785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177858u;
        // 0x17785c: 0x24090773  addiu       $t1, $zero, 0x773 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1907));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177860u;
        goto label_177860;
    }
    ctx->pc = 0x177858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177860u);
        ctx->pc = 0x17785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177858u;
        // 0x17785c: 0x24090773  addiu       $t1, $zero, 0x773 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1907));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177858u, 0x177860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177860u;
label_177860:
    // 0x177860: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_177864:
    // 0x177864: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x177864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_177868:
    // 0x177868: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x177868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_17786c:
    // 0x17786c: 0x10000005  b           . + 4 + (0x5 << 2)
label_177870:
    if (ctx->pc == 0x177870u) {
        ctx->pc = 0x177870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17786Cu;
        // 0x177870: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177874u;
        goto label_177874;
    }
    ctx->pc = 0x17786Cu;
    {
        const bool branch_taken_0x17786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17786Cu;
        // 0x177870: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17786c) {
            ctx->pc = 0x177884u;
            goto label_177884;
        }
    }
    ctx->pc = 0x177874u;
label_177874:
    // 0x177874: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_177878:
    // 0x177878: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x177878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17787c:
    // 0x17787c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_177880:
    // 0x177880: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x177880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_177884:
    // 0x177884: 0x16c0003e  bnez        $s6, . + 4 + (0x3E << 2)
label_177888:
    if (ctx->pc == 0x177888u) {
        ctx->pc = 0x177888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177884u;
        // 0x177888: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17788Cu;
        goto label_17788c;
    }
    ctx->pc = 0x177884u;
    {
        const bool branch_taken_0x177884 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x177888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177884u;
        // 0x177888: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177884) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x17788Cu;
label_17788c:
    // 0x17788c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_177890:
    // 0x177890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177894:
    // 0x177894: 0xc137a34  jal         func_4DE8D0
label_177898:
    if (ctx->pc == 0x177898u) {
        ctx->pc = 0x177898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177894u;
        // 0x177898: 0x2666000c  addiu       $a2, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17789Cu;
        goto label_17789c;
    }
    ctx->pc = 0x177894u;
    SET_GPR_U32(ctx, 31, 0x17789Cu);
    ctx->pc = 0x177898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177894u;
    // 0x177898: 0x2666000c  addiu       $a2, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x177894u, 0x17789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17789Cu;
label_17789c:
    // 0x17789c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x17789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1778a0:
    // 0x1778a0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1778a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1778a4:
    // 0x1778a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1778a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1778a8:
    // 0x1778a8: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_1778ac:
    if (ctx->pc == 0x1778ACu) {
        ctx->pc = 0x1778ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778A8u;
        // 0x1778ac: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778B0u;
        goto label_1778b0;
    }
    ctx->pc = 0x1778A8u;
    {
        const bool branch_taken_0x1778a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1778ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778A8u;
        // 0x1778ac: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778a8) {
            ctx->pc = 0x177970u;
            goto label_177970;
        }
    }
    ctx->pc = 0x1778B0u;
label_1778b0:
    // 0x1778b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1778b4:
    // 0x1778b4: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
label_1778b8:
    if (ctx->pc == 0x1778B8u) {
        ctx->pc = 0x1778B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778B4u;
        // 0x1778b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778BCu;
        goto label_1778bc;
    }
    ctx->pc = 0x1778B4u;
    {
        const bool branch_taken_0x1778b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1778B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778B4u;
        // 0x1778b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778b4) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x1778BCu;
label_1778bc:
    // 0x1778bc: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1778bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1778c0:
    // 0x1778c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1778c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1778c4:
    // 0x1778c4: 0xc061e58  jal         func_187960
label_1778c8:
    if (ctx->pc == 0x1778C8u) {
        ctx->pc = 0x1778C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778C4u;
        // 0x1778c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778CCu;
        goto label_1778cc;
    }
    ctx->pc = 0x1778C4u;
    SET_GPR_U32(ctx, 31, 0x1778CCu);
    ctx->pc = 0x1778C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778C4u;
    // 0x1778c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x1778C4u, 0x1778CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778CCu;
label_1778cc:
    // 0x1778cc: 0xc061234  jal         func_1848D0
label_1778d0:
    if (ctx->pc == 0x1778D0u) {
        ctx->pc = 0x1778D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778CCu;
        // 0x1778d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778D4u;
        goto label_1778d4;
    }
    ctx->pc = 0x1778CCu;
    SET_GPR_U32(ctx, 31, 0x1778D4u);
    ctx->pc = 0x1778D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778CCu;
    // 0x1778d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x1778CCu, 0x1778D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778D4u;
label_1778d4:
    // 0x1778d4: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_1778d8:
    if (ctx->pc == 0x1778D8u) {
        ctx->pc = 0x1778D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778D4u;
        // 0x1778d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778DCu;
        goto label_1778dc;
    }
    ctx->pc = 0x1778D4u;
    {
        const bool branch_taken_0x1778d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778D4u;
        // 0x1778d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778d4) {
            ctx->pc = 0x1778F4u;
            goto label_1778f4;
        }
    }
    ctx->pc = 0x1778DCu;
label_1778dc:
    // 0x1778dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1778dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1778e0:
    // 0x1778e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1778e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1778e4:
    // 0x1778e4: 0xc061f4a  jal         func_187D28
label_1778e8:
    if (ctx->pc == 0x1778E8u) {
        ctx->pc = 0x1778E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778E4u;
        // 0x1778e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778ECu;
        goto label_1778ec;
    }
    ctx->pc = 0x1778E4u;
    SET_GPR_U32(ctx, 31, 0x1778ECu);
    ctx->pc = 0x1778E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778E4u;
    // 0x1778e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x1778E4u, 0x1778ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778ECu;
label_1778ec:
    // 0x1778ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_1778f0:
    if (ctx->pc == 0x1778F0u) {
        ctx->pc = 0x1778F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778ECu;
        // 0x1778f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778F4u;
        goto label_1778f4;
    }
    ctx->pc = 0x1778ECu;
    {
        const bool branch_taken_0x1778ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778ECu;
        // 0x1778f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778ec) {
            ctx->pc = 0x177918u;
            goto label_177918;
        }
    }
    ctx->pc = 0x1778F4u;
label_1778f4:
    // 0x1778f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1778f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1778f8:
    // 0x1778f8: 0xc061e6e  jal         func_1879B8
label_1778fc:
    if (ctx->pc == 0x1778FCu) {
        ctx->pc = 0x1778FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778F8u;
        // 0x1778fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177900u;
        goto label_177900;
    }
    ctx->pc = 0x1778F8u;
    SET_GPR_U32(ctx, 31, 0x177900u);
    ctx->pc = 0x1778FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778F8u;
    // 0x1778fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x1778F8u, 0x177900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177900u;
label_177900:
    // 0x177900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177904:
    // 0x177904: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x177904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_177908:
    // 0x177908: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x177908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17790c:
    // 0x17790c: 0xa0f809  jalr        $a1
label_177910:
    if (ctx->pc == 0x177910u) {
        ctx->pc = 0x177910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17790Cu;
        // 0x177910: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177914u;
        goto label_177914;
    }
    ctx->pc = 0x17790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x177914u);
        ctx->pc = 0x177910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17790Cu;
        // 0x177910: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17790Cu, 0x177914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177914u;
label_177914:
    // 0x177914: 0x202a02b  sltu        $s4, $s0, $v0
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_177918:
    // 0x177918: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
label_17791c:
    if (ctx->pc == 0x17791Cu) {
        ctx->pc = 0x17791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177918u;
        // 0x17791c: 0x8fc927e4  lw          $t1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177920u;
        goto label_177920;
    }
    ctx->pc = 0x177918u;
    {
        const bool branch_taken_0x177918 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177918u;
        // 0x17791c: 0x8fc927e4  lw          $t1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177918) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x177920u;
label_177920:
    // 0x177920: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x177920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_177924:
    // 0x177924: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x177924u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_177928:
    // 0x177928: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x177928u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_17792c:
    // 0x17792c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x17792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_177930:
    // 0x177930: 0x24a51d38  addiu       $a1, $a1, 0x1D38
    ctx->pc = 0x177930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
label_177934:
    // 0x177934: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x177934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177938:
    // 0x177938: 0x25081d40  addiu       $t0, $t0, 0x1D40
    ctx->pc = 0x177938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7488));
label_17793c:
    // 0x17793c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17793cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_177940:
    // 0x177940: 0x254a1d70  addiu       $t2, $t2, 0x1D70
    ctx->pc = 0x177940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7536));
label_177944:
    // 0x177944: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_177948:
    // 0x177948: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17794c:
    // 0x17794c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x17794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_177950:
    // 0x177950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x177950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177954:
    // 0x177954: 0x40f809  jalr        $v0
label_177958:
    if (ctx->pc == 0x177958u) {
        ctx->pc = 0x177958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177954u;
        // 0x177958: 0x24090787  addiu       $t1, $zero, 0x787 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1927));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17795Cu;
        goto label_17795c;
    }
    ctx->pc = 0x177954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17795Cu);
        ctx->pc = 0x177958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177954u;
        // 0x177958: 0x24090787  addiu       $t1, $zero, 0x787 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1927));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177954u, 0x17795Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17795Cu;
label_17795c:
    // 0x17795c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x17795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_177960:
    // 0x177960: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x177960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_177964:
    // 0x177964: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x177964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_177968:
    // 0x177968: 0x10000005  b           . + 4 + (0x5 << 2)
label_17796c:
    if (ctx->pc == 0x17796Cu) {
        ctx->pc = 0x17796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177968u;
        // 0x17796c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177970u;
        goto label_177970;
    }
    ctx->pc = 0x177968u;
    {
        const bool branch_taken_0x177968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177968u;
        // 0x17796c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177968) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x177970u;
label_177970:
    // 0x177970: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x177970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_177974:
    // 0x177974: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x177974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_177978:
    // 0x177978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17797c:
    // 0x17797c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17797cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_177980:
    // 0x177980: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_177984:
    if (ctx->pc == 0x177984u) {
        ctx->pc = 0x177984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177980u;
        // 0x177984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177988u;
        goto label_177988;
    }
    ctx->pc = 0x177980u;
    {
        const bool branch_taken_0x177980 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x177984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177980u;
        // 0x177984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177980) {
            ctx->pc = 0x1779CCu;
            goto label_1779cc;
        }
    }
    ctx->pc = 0x177988u;
label_177988:
    // 0x177988: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_17798c:
    // 0x17798c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x17798cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_177990:
    // 0x177990: 0x8fc827e4  lw          $t0, 0x27E4($fp)
    ctx->pc = 0x177990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_177994:
    // 0x177994: 0x0  nop
    ctx->pc = 0x177994u;
    // NOP
label_177998:
    // 0x177998: 0x26661d40  addiu       $a2, $s3, 0x1D40
    ctx->pc = 0x177998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 7488));
label_17799c:
    // 0x17799c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1779a0:
    // 0x1779a0: 0x24070793  addiu       $a3, $zero, 0x793
    ctx->pc = 0x1779a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1939));
label_1779a4:
    // 0x1779a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1779a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1779a8:
    // 0x1779a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1779a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1779ac:
    // 0x1779ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1779acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1779b0:
    // 0x1779b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1779b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1779b4:
    // 0x1779b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1779b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1779b8:
    // 0x1779b8: 0x60f809  jalr        $v1
label_1779bc:
    if (ctx->pc == 0x1779BCu) {
        ctx->pc = 0x1779BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779B8u;
        // 0x1779bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779C0u;
        goto label_1779c0;
    }
    ctx->pc = 0x1779B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1779C0u);
        ctx->pc = 0x1779BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779B8u;
        // 0x1779bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1779B8u, 0x1779C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1779C0u;
label_1779c0:
    // 0x1779c0: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x1779c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1779c4:
    // 0x1779c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1779c8:
    if (ctx->pc == 0x1779C8u) {
        ctx->pc = 0x1779C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779C4u;
        // 0x1779c8: 0x8fc827e4  lw          $t0, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779CCu;
        goto label_1779cc;
    }
    ctx->pc = 0x1779C4u;
    {
        const bool branch_taken_0x1779c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1779C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779C4u;
        // 0x1779c8: 0x8fc827e4  lw          $t0, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779c4) {
            ctx->pc = 0x177998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177998;
        }
    }
    ctx->pc = 0x1779CCu;
label_1779cc:
    // 0x1779cc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1779ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1779d0:
    // 0x1779d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1779d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1779d4:
    // 0x1779d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1779d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1779d8:
    // 0x1779d8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1779dc:
    if (ctx->pc == 0x1779DCu) {
        ctx->pc = 0x1779DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779D8u;
        // 0x1779dc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779E0u;
        goto label_1779e0;
    }
    ctx->pc = 0x1779D8u;
    {
        const bool branch_taken_0x1779d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1779DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779D8u;
        // 0x1779dc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779d8) {
            ctx->pc = 0x177A10u;
            goto label_177a10;
        }
    }
    ctx->pc = 0x1779E0u;
label_1779e0:
    // 0x1779e0: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1779e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1779e4:
    // 0x1779e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1779e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1779e8:
    // 0x1779e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1779e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1779ec:
    // 0x1779ec: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1779ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1779f0:
    // 0x1779f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1779f4:
    // 0x1779f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1779f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1779f8:
    // 0x1779f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1779f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1779fc:
    // 0x1779fc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1779fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_177a00:
    // 0x177a00: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_177a04:
    // 0x177a04: 0x40f809  jalr        $v0
label_177a08:
    if (ctx->pc == 0x177A08u) {
        ctx->pc = 0x177A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A04u;
        // 0x177a08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A0Cu;
        goto label_177a0c;
    }
    ctx->pc = 0x177A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177A0Cu);
        ctx->pc = 0x177A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A04u;
        // 0x177a08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A04u, 0x177A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177A0Cu;
label_177a0c:
    // 0x177a0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x177a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_177a10:
    // 0x177a10: 0x56c00022  bnel        $s6, $zero, . + 4 + (0x22 << 2)
label_177a14:
    if (ctx->pc == 0x177A14u) {
        ctx->pc = 0x177A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A10u;
        // 0x177a14: 0x8fd127e4  lw          $s1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A18u;
        goto label_177a18;
    }
    ctx->pc = 0x177A10u;
    {
        const bool branch_taken_0x177a10 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x177a10) {
            ctx->pc = 0x177A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177A10u;
            // 0x177a14: 0x8fd127e4  lw          $s1, 0x27E4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177A9Cu;
            goto label_177a9c;
        }
    }
    ctx->pc = 0x177A18u;
label_177a18:
    // 0x177a18: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x177a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_177a1c:
    // 0x177a1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x177a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_177a20:
    // 0x177a20: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_177a24:
    if (ctx->pc == 0x177A24u) {
        ctx->pc = 0x177A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A20u;
        // 0x177a24: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A28u;
        goto label_177a28;
    }
    ctx->pc = 0x177A20u;
    {
        const bool branch_taken_0x177a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A20u;
        // 0x177a24: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a20) {
            ctx->pc = 0x177A58u;
            goto label_177a58;
        }
    }
    ctx->pc = 0x177A28u;
label_177a28:
    // 0x177a28: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x177a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_177a2c:
    // 0x177a2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x177a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_177a30:
    // 0x177a30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177a34:
    // 0x177a34: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x177a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_177a38:
    // 0x177a38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_177a3c:
    // 0x177a3c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x177a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_177a40:
    // 0x177a40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x177a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_177a44:
    // 0x177a44: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x177a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_177a48:
    // 0x177a48: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x177a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_177a4c:
    // 0x177a4c: 0x40f809  jalr        $v0
label_177a50:
    if (ctx->pc == 0x177A50u) {
        ctx->pc = 0x177A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A4Cu;
        // 0x177a50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A54u;
        goto label_177a54;
    }
    ctx->pc = 0x177A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177A54u);
        ctx->pc = 0x177A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A4Cu;
        // 0x177a50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A4Cu, 0x177A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177A54u;
label_177a54:
    // 0x177a54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x177a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_177a58:
    // 0x177a58: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x177a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_177a5c:
    // 0x177a5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x177a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_177a60:
    // 0x177a60: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_177a64:
    if (ctx->pc == 0x177A64u) {
        ctx->pc = 0x177A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A60u;
        // 0x177a64: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A68u;
        goto label_177a68;
    }
    ctx->pc = 0x177A60u;
    {
        const bool branch_taken_0x177a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A60u;
        // 0x177a64: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a60) {
            ctx->pc = 0x177A98u;
            goto label_177a98;
        }
    }
    ctx->pc = 0x177A68u;
label_177a68:
    // 0x177a68: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_177a6c:
    // 0x177a6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_177a70:
    // 0x177a70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177a74:
    // 0x177a74: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x177a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_177a78:
    // 0x177a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_177a7c:
    // 0x177a7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x177a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_177a80:
    // 0x177a80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x177a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_177a84:
    // 0x177a84: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x177a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_177a88:
    // 0x177a88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x177a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_177a8c:
    // 0x177a8c: 0x40f809  jalr        $v0
label_177a90:
    if (ctx->pc == 0x177A90u) {
        ctx->pc = 0x177A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A8Cu;
        // 0x177a90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A94u;
        goto label_177a94;
    }
    ctx->pc = 0x177A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177A94u);
        ctx->pc = 0x177A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A8Cu;
        // 0x177a90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A8Cu, 0x177A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177A94u;
label_177a94:
    // 0x177a94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x177a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_177a98:
    // 0x177a98: 0x8fd127e4  lw          $s1, 0x27E4($fp)
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_177a9c:
    // 0x177a9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_177aa0:
    // 0x177aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177aa4:
    // 0x177aa4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x177aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_177aa8:
    // 0x177aa8: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_177aac:
    // 0x177aac: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x177aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_177ab0:
    // 0x177ab0: 0xc061e6e  jal         func_1879B8
label_177ab4:
    if (ctx->pc == 0x177AB4u) {
        ctx->pc = 0x177AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AB0u;
        // 0x177ab4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AB8u;
        goto label_177ab8;
    }
    ctx->pc = 0x177AB0u;
    SET_GPR_U32(ctx, 31, 0x177AB8u);
    ctx->pc = 0x177AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AB0u;
    // 0x177ab4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x177AB0u, 0x177AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AB8u;
label_177ab8:
    // 0x177ab8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x177ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177abc:
    // 0x177abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177ac0:
    // 0x177ac0: 0x60f809  jalr        $v1
label_177ac4:
    if (ctx->pc == 0x177AC4u) {
        ctx->pc = 0x177AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AC0u;
        // 0x177ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AC8u;
        goto label_177ac8;
    }
    ctx->pc = 0x177AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177AC8u);
        ctx->pc = 0x177AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AC0u;
        // 0x177ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177AC0u, 0x177AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177AC8u;
label_177ac8:
    // 0x177ac8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x177ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_177acc:
    // 0x177acc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x177accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_177ad0:
    // 0x177ad0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x177ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_177ad4:
    // 0x177ad4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x177ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_177ad8:
    // 0x177ad8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x177ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_177adc:
    // 0x177adc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x177adcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_177ae0:
    // 0x177ae0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x177ae0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_177ae4:
    // 0x177ae4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x177ae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_177ae8:
    // 0x177ae8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x177ae8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_177aec:
    // 0x177aec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x177aecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_177af0:
    // 0x177af0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x177af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_177af4:
    // 0x177af4: 0x3e00008  jr          $ra
label_177af8:
    if (ctx->pc == 0x177AF8u) {
        ctx->pc = 0x177AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AF4u;
        // 0x177af8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AFCu;
        goto label_177afc;
    }
    ctx->pc = 0x177AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AF4u;
        // 0x177af8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177AFCu;
label_177afc:
    // 0x177afc: 0x0  nop
    ctx->pc = 0x177afcu;
    // NOP
    ctx->pc = 0x177b00u;
}
