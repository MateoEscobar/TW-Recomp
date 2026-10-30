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

// Function: sub_00248428
// Address: 0x248428 - 0x248980
void sub_00248428_0x248428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248428_0x248428");
#endif

    switch (ctx->pc) {
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e0u: goto label_2485e0;
        case 0x2485e4u: goto label_2485e4;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485ecu: goto label_2485ec;
        case 0x2485f0u: goto label_2485f0;
        case 0x2485f4u: goto label_2485f4;
        case 0x2485f8u: goto label_2485f8;
        case 0x2485fcu: goto label_2485fc;
        case 0x248600u: goto label_248600;
        case 0x248604u: goto label_248604;
        case 0x248608u: goto label_248608;
        case 0x24860cu: goto label_24860c;
        case 0x248610u: goto label_248610;
        case 0x248614u: goto label_248614;
        case 0x248618u: goto label_248618;
        case 0x24861cu: goto label_24861c;
        case 0x248620u: goto label_248620;
        case 0x248624u: goto label_248624;
        case 0x248628u: goto label_248628;
        case 0x24862cu: goto label_24862c;
        case 0x248630u: goto label_248630;
        case 0x248634u: goto label_248634;
        case 0x248638u: goto label_248638;
        case 0x24863cu: goto label_24863c;
        case 0x248640u: goto label_248640;
        case 0x248644u: goto label_248644;
        case 0x248648u: goto label_248648;
        case 0x24864cu: goto label_24864c;
        case 0x248650u: goto label_248650;
        case 0x248654u: goto label_248654;
        case 0x248658u: goto label_248658;
        case 0x24865cu: goto label_24865c;
        case 0x248660u: goto label_248660;
        case 0x248664u: goto label_248664;
        case 0x248668u: goto label_248668;
        case 0x24866cu: goto label_24866c;
        case 0x248670u: goto label_248670;
        case 0x248674u: goto label_248674;
        case 0x248678u: goto label_248678;
        case 0x24867cu: goto label_24867c;
        case 0x248680u: goto label_248680;
        case 0x248684u: goto label_248684;
        case 0x248688u: goto label_248688;
        case 0x24868cu: goto label_24868c;
        case 0x248690u: goto label_248690;
        case 0x248694u: goto label_248694;
        case 0x248698u: goto label_248698;
        case 0x24869cu: goto label_24869c;
        case 0x2486a0u: goto label_2486a0;
        case 0x2486a4u: goto label_2486a4;
        case 0x2486a8u: goto label_2486a8;
        case 0x2486acu: goto label_2486ac;
        case 0x2486b0u: goto label_2486b0;
        case 0x2486b4u: goto label_2486b4;
        case 0x2486b8u: goto label_2486b8;
        case 0x2486bcu: goto label_2486bc;
        case 0x2486c0u: goto label_2486c0;
        case 0x2486c4u: goto label_2486c4;
        case 0x2486c8u: goto label_2486c8;
        case 0x2486ccu: goto label_2486cc;
        case 0x2486d0u: goto label_2486d0;
        case 0x2486d4u: goto label_2486d4;
        case 0x2486d8u: goto label_2486d8;
        case 0x2486dcu: goto label_2486dc;
        case 0x2486e0u: goto label_2486e0;
        case 0x2486e4u: goto label_2486e4;
        case 0x2486e8u: goto label_2486e8;
        case 0x2486ecu: goto label_2486ec;
        case 0x2486f0u: goto label_2486f0;
        case 0x2486f4u: goto label_2486f4;
        case 0x2486f8u: goto label_2486f8;
        case 0x2486fcu: goto label_2486fc;
        case 0x248700u: goto label_248700;
        case 0x248704u: goto label_248704;
        case 0x248708u: goto label_248708;
        case 0x24870cu: goto label_24870c;
        case 0x248710u: goto label_248710;
        case 0x248714u: goto label_248714;
        case 0x248718u: goto label_248718;
        case 0x24871cu: goto label_24871c;
        case 0x248720u: goto label_248720;
        case 0x248724u: goto label_248724;
        case 0x248728u: goto label_248728;
        case 0x24872cu: goto label_24872c;
        case 0x248730u: goto label_248730;
        case 0x248734u: goto label_248734;
        case 0x248738u: goto label_248738;
        case 0x24873cu: goto label_24873c;
        case 0x248740u: goto label_248740;
        case 0x248744u: goto label_248744;
        case 0x248748u: goto label_248748;
        case 0x24874cu: goto label_24874c;
        case 0x248750u: goto label_248750;
        case 0x248754u: goto label_248754;
        case 0x248758u: goto label_248758;
        case 0x24875cu: goto label_24875c;
        case 0x248760u: goto label_248760;
        case 0x248764u: goto label_248764;
        case 0x248768u: goto label_248768;
        case 0x24876cu: goto label_24876c;
        case 0x248770u: goto label_248770;
        case 0x248774u: goto label_248774;
        case 0x248778u: goto label_248778;
        case 0x24877cu: goto label_24877c;
        case 0x248780u: goto label_248780;
        case 0x248784u: goto label_248784;
        case 0x248788u: goto label_248788;
        case 0x24878cu: goto label_24878c;
        case 0x248790u: goto label_248790;
        case 0x248794u: goto label_248794;
        case 0x248798u: goto label_248798;
        case 0x24879cu: goto label_24879c;
        case 0x2487a0u: goto label_2487a0;
        case 0x2487a4u: goto label_2487a4;
        case 0x2487a8u: goto label_2487a8;
        case 0x2487acu: goto label_2487ac;
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b4u: goto label_2487b4;
        case 0x2487b8u: goto label_2487b8;
        case 0x2487bcu: goto label_2487bc;
        case 0x2487c0u: goto label_2487c0;
        case 0x2487c4u: goto label_2487c4;
        case 0x2487c8u: goto label_2487c8;
        case 0x2487ccu: goto label_2487cc;
        case 0x2487d0u: goto label_2487d0;
        case 0x2487d4u: goto label_2487d4;
        case 0x2487d8u: goto label_2487d8;
        case 0x2487dcu: goto label_2487dc;
        case 0x2487e0u: goto label_2487e0;
        case 0x2487e4u: goto label_2487e4;
        case 0x2487e8u: goto label_2487e8;
        case 0x2487ecu: goto label_2487ec;
        case 0x2487f0u: goto label_2487f0;
        case 0x2487f4u: goto label_2487f4;
        case 0x2487f8u: goto label_2487f8;
        case 0x2487fcu: goto label_2487fc;
        case 0x248800u: goto label_248800;
        case 0x248804u: goto label_248804;
        case 0x248808u: goto label_248808;
        case 0x24880cu: goto label_24880c;
        case 0x248810u: goto label_248810;
        case 0x248814u: goto label_248814;
        case 0x248818u: goto label_248818;
        case 0x24881cu: goto label_24881c;
        case 0x248820u: goto label_248820;
        case 0x248824u: goto label_248824;
        case 0x248828u: goto label_248828;
        case 0x24882cu: goto label_24882c;
        case 0x248830u: goto label_248830;
        case 0x248834u: goto label_248834;
        case 0x248838u: goto label_248838;
        case 0x24883cu: goto label_24883c;
        case 0x248840u: goto label_248840;
        case 0x248844u: goto label_248844;
        case 0x248848u: goto label_248848;
        case 0x24884cu: goto label_24884c;
        case 0x248850u: goto label_248850;
        case 0x248854u: goto label_248854;
        case 0x248858u: goto label_248858;
        case 0x24885cu: goto label_24885c;
        case 0x248860u: goto label_248860;
        case 0x248864u: goto label_248864;
        case 0x248868u: goto label_248868;
        case 0x24886cu: goto label_24886c;
        case 0x248870u: goto label_248870;
        case 0x248874u: goto label_248874;
        case 0x248878u: goto label_248878;
        case 0x24887cu: goto label_24887c;
        case 0x248880u: goto label_248880;
        case 0x248884u: goto label_248884;
        case 0x248888u: goto label_248888;
        case 0x24888cu: goto label_24888c;
        case 0x248890u: goto label_248890;
        case 0x248894u: goto label_248894;
        case 0x248898u: goto label_248898;
        case 0x24889cu: goto label_24889c;
        case 0x2488a0u: goto label_2488a0;
        case 0x2488a4u: goto label_2488a4;
        case 0x2488a8u: goto label_2488a8;
        case 0x2488acu: goto label_2488ac;
        case 0x2488b0u: goto label_2488b0;
        case 0x2488b4u: goto label_2488b4;
        case 0x2488b8u: goto label_2488b8;
        case 0x2488bcu: goto label_2488bc;
        case 0x2488c0u: goto label_2488c0;
        case 0x2488c4u: goto label_2488c4;
        case 0x2488c8u: goto label_2488c8;
        case 0x2488ccu: goto label_2488cc;
        case 0x2488d0u: goto label_2488d0;
        case 0x2488d4u: goto label_2488d4;
        case 0x2488d8u: goto label_2488d8;
        case 0x2488dcu: goto label_2488dc;
        case 0x2488e0u: goto label_2488e0;
        case 0x2488e4u: goto label_2488e4;
        case 0x2488e8u: goto label_2488e8;
        case 0x2488ecu: goto label_2488ec;
        case 0x2488f0u: goto label_2488f0;
        case 0x2488f4u: goto label_2488f4;
        case 0x2488f8u: goto label_2488f8;
        case 0x2488fcu: goto label_2488fc;
        case 0x248900u: goto label_248900;
        case 0x248904u: goto label_248904;
        case 0x248908u: goto label_248908;
        case 0x24890cu: goto label_24890c;
        case 0x248910u: goto label_248910;
        case 0x248914u: goto label_248914;
        case 0x248918u: goto label_248918;
        case 0x24891cu: goto label_24891c;
        case 0x248920u: goto label_248920;
        case 0x248924u: goto label_248924;
        case 0x248928u: goto label_248928;
        case 0x24892cu: goto label_24892c;
        case 0x248930u: goto label_248930;
        case 0x248934u: goto label_248934;
        case 0x248938u: goto label_248938;
        case 0x24893cu: goto label_24893c;
        case 0x248940u: goto label_248940;
        case 0x248944u: goto label_248944;
        case 0x248948u: goto label_248948;
        case 0x24894cu: goto label_24894c;
        case 0x248950u: goto label_248950;
        case 0x248954u: goto label_248954;
        case 0x248958u: goto label_248958;
        case 0x24895cu: goto label_24895c;
        case 0x248960u: goto label_248960;
        case 0x248964u: goto label_248964;
        case 0x248968u: goto label_248968;
        case 0x24896cu: goto label_24896c;
        case 0x248970u: goto label_248970;
        case 0x248974u: goto label_248974;
        case 0x248978u: goto label_248978;
        case 0x24897cu: goto label_24897c;
        default: break;
    }

    ctx->pc = 0x248428u;

label_248428:
    // 0x248428: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x248428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_24842c:
    // 0x24842c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x24842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_248430:
    // 0x248430: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x248430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_248434:
    // 0x248434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248438:
    // 0x248438: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x248438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_24843c:
    // 0x24843c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24843cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248440:
    // 0x248440: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x248440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_248444:
    // 0x248444: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x248444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_248448:
    // 0x248448: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x248448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24844c:
    // 0x24844c: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x24844cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_248450:
    // 0x248450: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x248450u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_248454:
    // 0x248454: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x248454u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_248458:
    // 0x248458: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x248458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_24845c:
    // 0x24845c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x24845cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_248460:
    // 0x248460: 0xc0920b8  jal         func_2482E0
label_248464:
    if (ctx->pc == 0x248464u) {
        ctx->pc = 0x248464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248460u;
        // 0x248464: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x248468u;
        goto label_248468;
    }
    ctx->pc = 0x248460u;
    SET_GPR_U32(ctx, 31, 0x248468u);
    ctx->pc = 0x248464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248460u;
    // 0x248464: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E0u, 0x248460u, 0x248468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248468u;
label_248468:
    // 0x248468: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
label_24846c:
    if (ctx->pc == 0x24846Cu) {
        ctx->pc = 0x24846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248468u;
        // 0x24846c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248470u;
        goto label_248470;
    }
    ctx->pc = 0x248468u;
    {
        const bool branch_taken_0x248468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248468u;
        // 0x24846c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248468) {
            ctx->pc = 0x24894Cu;
            goto label_24894c;
        }
    }
    ctx->pc = 0x248470u;
label_248470:
    // 0x248470: 0x92220333  lbu         $v0, 0x333($s1)
    ctx->pc = 0x248470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
label_248474:
    // 0x248474: 0x54400136  bnel        $v0, $zero, . + 4 + (0x136 << 2)
label_248478:
    if (ctx->pc == 0x248478u) {
        ctx->pc = 0x248478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248474u;
        // 0x248478: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24847Cu;
        goto label_24847c;
    }
    ctx->pc = 0x248474u;
    {
        const bool branch_taken_0x248474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248474) {
            ctx->pc = 0x248478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248474u;
            // 0x248478: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248950u;
            goto label_248950;
        }
    }
    ctx->pc = 0x24847Cu;
label_24847c:
    // 0x24847c: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_248480:
    // 0x248480: 0x12600132  beqz        $s3, . + 4 + (0x132 << 2)
label_248484:
    if (ctx->pc == 0x248484u) {
        ctx->pc = 0x248484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248480u;
        // 0x248484: 0x26240284  addiu       $a0, $s1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248488u;
        goto label_248488;
    }
    ctx->pc = 0x248480u;
    {
        const bool branch_taken_0x248480 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x248484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248480u;
        // 0x248484: 0x26240284  addiu       $a0, $s1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248480) {
            ctx->pc = 0x24894Cu;
            goto label_24894c;
        }
    }
    ctx->pc = 0x248488u;
label_248488:
    // 0x248488: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x248488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24848c:
    // 0x24848c: 0xc0a67f8  jal         func_299FE0
label_248490:
    if (ctx->pc == 0x248490u) {
        ctx->pc = 0x248490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24848Cu;
        // 0x248490: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248494u;
        goto label_248494;
    }
    ctx->pc = 0x24848Cu;
    SET_GPR_U32(ctx, 31, 0x248494u);
    ctx->pc = 0x248490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24848Cu;
    // 0x248490: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FE0u, 0x24848Cu, 0x248494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248494u;
label_248494:
    // 0x248494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_248498:
    if (ctx->pc == 0x248498u) {
        ctx->pc = 0x248498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248494u;
        // 0x248498: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24849Cu;
        goto label_24849c;
    }
    ctx->pc = 0x248494u;
    {
        const bool branch_taken_0x248494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248494u;
        // 0x248498: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248494) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x24849Cu;
label_24849c:
    // 0x24849c: 0xc4570004  lwc1        $f23, 0x4($v0)
    ctx->pc = 0x24849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2484a0:
    // 0x2484a0: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_2484a4:
    if (ctx->pc == 0x2484A4u) {
        ctx->pc = 0x2484A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484A0u;
        // 0x2484a4: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484A8u;
        goto label_2484a8;
    }
    ctx->pc = 0x2484A0u;
    {
        const bool branch_taken_0x2484a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484A0u;
        // 0x2484a4: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484a0) {
            ctx->pc = 0x2487E8u;
            goto label_2487e8;
        }
    }
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0xc0a67b8  jal         func_299EE0
label_2484ac:
    if (ctx->pc == 0x2484ACu) {
        ctx->pc = 0x2484ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484A8u;
        // 0x2484ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484B0u;
        goto label_2484b0;
    }
    ctx->pc = 0x2484A8u;
    SET_GPR_U32(ctx, 31, 0x2484B0u);
    ctx->pc = 0x2484ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484A8u;
    // 0x2484ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE0u, 0x2484A8u, 0x2484B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484B0u;
label_2484b0:
    // 0x2484b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2484b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2484b4:
    // 0x2484b4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2484b8:
    if (ctx->pc == 0x2484B8u) {
        ctx->pc = 0x2484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484B4u;
        // 0x2484b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484BCu;
        goto label_2484bc;
    }
    ctx->pc = 0x2484B4u;
    {
        const bool branch_taken_0x2484b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484B4u;
        // 0x2484b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484b4) {
            ctx->pc = 0x2484D4u;
            goto label_2484d4;
        }
    }
    ctx->pc = 0x2484BCu;
label_2484bc:
    // 0x2484bc: 0xc092260  jal         func_248980
label_2484c0:
    if (ctx->pc == 0x2484C0u) {
        ctx->pc = 0x2484C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484BCu;
        // 0x2484c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484C4u;
        goto label_2484c4;
    }
    ctx->pc = 0x2484BCu;
    SET_GPR_U32(ctx, 31, 0x2484C4u);
    ctx->pc = 0x2484C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484BCu;
    // 0x2484c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248980u, 0x2484BCu, 0x2484C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484C4u;
label_2484c4:
    // 0x2484c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2484c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2484c8:
    // 0x2484c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2484c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2484cc:
    // 0x2484cc: 0x10000027  b           . + 4 + (0x27 << 2)
label_2484d0:
    if (ctx->pc == 0x2484D0u) {
        ctx->pc = 0x2484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484CCu;
        // 0x2484d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484D4u;
        goto label_2484d4;
    }
    ctx->pc = 0x2484CCu;
    {
        const bool branch_taken_0x2484cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484CCu;
        // 0x2484d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484cc) {
            ctx->pc = 0x24856Cu;
            goto label_24856c;
        }
    }
    ctx->pc = 0x2484D4u;
label_2484d4:
    // 0x2484d4: 0xc0a681e  jal         func_29A078
label_2484d8:
    if (ctx->pc == 0x2484D8u) {
        ctx->pc = 0x2484D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484D4u;
        // 0x2484d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484DCu;
        goto label_2484dc;
    }
    ctx->pc = 0x2484D4u;
    SET_GPR_U32(ctx, 31, 0x2484DCu);
    ctx->pc = 0x2484D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484D4u;
    // 0x2484d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A078u, 0x2484D4u, 0x2484DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484DCu;
label_2484dc:
    // 0x2484dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2484dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2484e0:
    // 0x2484e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2484e4:
    if (ctx->pc == 0x2484E4u) {
        ctx->pc = 0x2484E8u;
        goto label_2484e8;
    }
    ctx->pc = 0x2484E0u;
    {
        const bool branch_taken_0x2484e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2484e0) {
            ctx->pc = 0x248530u;
            goto label_248530;
        }
    }
    ctx->pc = 0x2484E8u;
label_2484e8:
    // 0x2484e8: 0xc08a61a  jal         func_229868
label_2484ec:
    if (ctx->pc == 0x2484ECu) {
        ctx->pc = 0x2484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484E8u;
        // 0x2484ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484F0u;
        goto label_2484f0;
    }
    ctx->pc = 0x2484E8u;
    SET_GPR_U32(ctx, 31, 0x2484F0u);
    ctx->pc = 0x2484ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484E8u;
    // 0x2484ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2484E8u, 0x2484F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F0u;
label_2484f0:
    // 0x2484f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2484f4:
    if (ctx->pc == 0x2484F4u) {
        ctx->pc = 0x2484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484F0u;
        // 0x2484f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484F8u;
        goto label_2484f8;
    }
    ctx->pc = 0x2484F0u;
    {
        const bool branch_taken_0x2484f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484F0u;
        // 0x2484f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484f0) {
            ctx->pc = 0x248508u;
            goto label_248508;
        }
    }
    ctx->pc = 0x2484F8u;
label_2484f8:
    // 0x2484f8: 0xc0873e0  jal         func_21CF80
label_2484fc:
    if (ctx->pc == 0x2484FCu) {
        ctx->pc = 0x2484FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484F8u;
        // 0x2484fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248500u;
        goto label_248500;
    }
    ctx->pc = 0x2484F8u;
    SET_GPR_U32(ctx, 31, 0x248500u);
    ctx->pc = 0x2484FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484F8u;
    // 0x2484fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF80u, 0x2484F8u, 0x248500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248500u;
label_248500:
    // 0x248500: 0x10000008  b           . + 4 + (0x8 << 2)
label_248504:
    if (ctx->pc == 0x248504u) {
        ctx->pc = 0x248504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248500u;
        // 0x248504: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248508u;
        goto label_248508;
    }
    ctx->pc = 0x248500u;
    {
        const bool branch_taken_0x248500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248500u;
        // 0x248504: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248500) {
            ctx->pc = 0x248524u;
            goto label_248524;
        }
    }
    ctx->pc = 0x248508u;
label_248508:
    // 0x248508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x248508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24850c:
    // 0x24850c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_248510:
    // 0x248510: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x248510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_248514:
    // 0x248514: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x248514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_248518:
    // 0x248518: 0x60f809  jalr        $v1
label_24851c:
    if (ctx->pc == 0x24851Cu) {
        ctx->pc = 0x24851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248518u;
        // 0x24851c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248520u;
        goto label_248520;
    }
    ctx->pc = 0x248518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x248520u);
        ctx->pc = 0x24851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248518u;
        // 0x24851c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248518u, 0x248520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248520u;
label_248520:
    // 0x248520: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x248520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248524:
    // 0x248524: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x248524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_248528:
    // 0x248528: 0x10000010  b           . + 4 + (0x10 << 2)
label_24852c:
    if (ctx->pc == 0x24852Cu) {
        ctx->pc = 0x24852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248528u;
        // 0x24852c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248530u;
        goto label_248530;
    }
    ctx->pc = 0x248528u;
    {
        const bool branch_taken_0x248528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248528u;
        // 0x24852c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248528) {
            ctx->pc = 0x24856Cu;
            goto label_24856c;
        }
    }
    ctx->pc = 0x248530u;
label_248530:
    // 0x248530: 0xc0a67de  jal         func_299F78
label_248534:
    if (ctx->pc == 0x248534u) {
        ctx->pc = 0x248534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248530u;
        // 0x248534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248538u;
        goto label_248538;
    }
    ctx->pc = 0x248530u;
    SET_GPR_U32(ctx, 31, 0x248538u);
    ctx->pc = 0x248534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248530u;
    // 0x248534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F78u, 0x248530u, 0x248538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248538u;
label_248538:
    // 0x248538: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24853c:
    if (ctx->pc == 0x24853Cu) {
        ctx->pc = 0x24853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248538u;
        // 0x24853c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248540u;
        goto label_248540;
    }
    ctx->pc = 0x248538u;
    {
        const bool branch_taken_0x248538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248538u;
        // 0x24853c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248538) {
            ctx->pc = 0x248568u;
            goto label_248568;
        }
    }
    ctx->pc = 0x248540u;
label_248540:
    // 0x248540: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x248540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248544:
    // 0x248544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_248548:
    // 0x248548: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24854c:
    // 0x24854c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24854cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_248550:
    // 0x248550: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x248550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248554:
    // 0x248554: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x248554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_248558:
    // 0x248558: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x248558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24855c:
    // 0x24855c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x24855cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_248560:
    // 0x248560: 0x10000002  b           . + 4 + (0x2 << 2)
label_248564:
    if (ctx->pc == 0x248564u) {
        ctx->pc = 0x248564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248560u;
        // 0x248564: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x248568u;
        goto label_248568;
    }
    ctx->pc = 0x248560u;
    {
        const bool branch_taken_0x248560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248560u;
        // 0x248564: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248560) {
            ctx->pc = 0x24856Cu;
            goto label_24856c;
        }
    }
    ctx->pc = 0x248568u;
label_248568:
    // 0x248568: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x248568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24856c:
    // 0x24856c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248570:
    // 0x248570: 0x5462009e  bnel        $v1, $v0, . + 4 + (0x9E << 2)
label_248574:
    if (ctx->pc == 0x248574u) {
        ctx->pc = 0x248574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248570u;
        // 0x248574: 0x96420002  lhu         $v0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248578u;
        goto label_248578;
    }
    ctx->pc = 0x248570u;
    {
        const bool branch_taken_0x248570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248570) {
            ctx->pc = 0x248574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248570u;
            // 0x248574: 0x96420002  lhu         $v0, 0x2($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2487ECu;
            goto label_2487ec;
        }
    }
    ctx->pc = 0x248578u;
label_248578:
    // 0x248578: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x248578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_24857c:
    // 0x24857c: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x24857cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
label_248580:
    // 0x248580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248584:
    // 0x248584: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x248584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
label_248588:
    // 0x248588: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x248588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
label_24858c:
    // 0x24858c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24858cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248590:
    // 0x248590: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x248590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_248594:
    // 0x248594: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x248594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_248598:
    // 0x248598: 0x7a860000  lq          $a2, 0x0($s4)
    ctx->pc = 0x248598u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_24859c:
    // 0x24859c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x24859cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2485a0:
    // 0x2485a0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2485a4:
    // 0x2485a4: 0x7a230500  lq          $v1, 0x500($s1)
    ctx->pc = 0x2485a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1280)));
label_2485a8:
    // 0x2485a8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2485a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2485ac:
    // 0x2485ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2485acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2485b0:
    // 0x2485b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2485b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2485b4:
    // 0x2485b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2485b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2485b8:
    // 0x2485b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2485b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2485bc:
    // 0x2485bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2485bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2485c0:
    // 0x2485c0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2485c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2485c4:
    // 0x2485c4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2485c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2485c8:
    // 0x2485c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2485c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2485cc:
    // 0x2485cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2485ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2485d0:
    // 0x2485d0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2485d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2485d4:
    // 0x2485d4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2485d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2485d8:
    // 0x2485d8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2485d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2485dc:
    // 0x2485dc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2485dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2485e0:
    // 0x2485e0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2485e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2485e4:
    // 0x2485e4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2485e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2485e8:
    // 0x2485e8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2485e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2485ec:
    // 0x2485ec: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2485ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2485f0:
    // 0x2485f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2485f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2485f4:
    // 0x2485f4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2485f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2485f8:
    // 0x2485f8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2485f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2485fc:
    // 0x2485fc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2485fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_248600:
    // 0x248600: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x248600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_248604:
    // 0x248604: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x248604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_248608:
    // 0x248608: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x248608u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24860c:
    // 0x24860c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x24860cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_248610:
    // 0x248610: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x248610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_248614:
    // 0x248614: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x248614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_248618:
    // 0x248618: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x248618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24861c:
    // 0x24861c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24861cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_248620:
    // 0x248620: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x248620u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_248624:
    // 0x248624: 0x7a240530  lq          $a0, 0x530($s1)
    ctx->pc = 0x248624u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 1328)));
label_248628:
    // 0x248628: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x248628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_24862c:
    // 0x24862c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24862cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_248630:
    // 0x248630: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x248630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248634:
    // 0x248634: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x248634u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_248638:
    // 0x248638: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x248638u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_24863c:
    // 0x24863c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x24863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_248640:
    // 0x248640: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x248640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_248644:
    // 0x248644: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x248644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_248648:
    // 0x248648: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x248648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_24864c:
    // 0x24864c: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x24864cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_248650:
    // 0x248650: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x248650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_248654:
    // 0x248654: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x248654u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_248658:
    // 0x248658: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x248658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24865c:
    // 0x24865c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x24865cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_248660:
    // 0x248660: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x248660u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_248664:
    // 0x248664: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x248664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_248668:
    // 0x248668: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x248668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24866c:
    // 0x24866c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x24866cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248670:
    // 0x248670: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x248670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_248674:
    // 0x248674: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x248674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248678:
    // 0x248678: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x248678u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24867c:
    // 0x24867c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x24867cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_248680:
    // 0x248680: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x248680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_248684:
    // 0x248684: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x248684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_248688:
    // 0x248688: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x248688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_24868c:
    // 0x24868c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24868cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_248690:
    // 0x248690: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x248690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_248694:
    // 0x248694: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x248694u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_248698:
    // 0x248698: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x248698u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_24869c:
    // 0x24869c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24869cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2486a0:
    // 0x2486a0: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x2486a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2486a4:
    // 0x2486a4: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x2486a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2486a8:
    // 0x2486a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2486a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2486ac:
    // 0x2486ac: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x2486acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2486b0:
    // 0x2486b0: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x2486b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2486b4:
    // 0x2486b4: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x2486b4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
label_2486b8:
    // 0x2486b8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2486b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2486bc:
    // 0x2486bc: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x2486bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2486c0:
    // 0x2486c0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2486c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2486c4:
    // 0x2486c4: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x2486c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_2486c8:
    // 0x2486c8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2486c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_2486cc:
    // 0x2486cc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2486ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2486d0:
    // 0x2486d0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2486d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2486d4:
    // 0x2486d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2486d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2486d8:
    // 0x2486d8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2486d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2486dc:
    // 0x2486dc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2486dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2486e0:
    // 0x2486e0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2486e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2486e4:
    // 0x2486e4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2486e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2486e8:
    // 0x2486e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2486e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2486ec:
    // 0x2486ec: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2486ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2486f0:
    // 0x2486f0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2486f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2486f4:
    // 0x2486f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2486f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2486f8:
    // 0x2486f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2486f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2486fc:
    // 0x2486fc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2486fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248700:
    // 0x248700: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x248700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248704:
    // 0x248704: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x248704u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_248708:
    // 0x248708: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x248708u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24870c:
    // 0x24870c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x24870cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248710:
    // 0x248710: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x248710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248714:
    // 0x248714: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x248714u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_248718:
    // 0x248718: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x248718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_24871c:
    // 0x24871c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x24871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_248720:
    // 0x248720: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x248720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248724:
    // 0x248724: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x248724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_248728:
    // 0x248728: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x248728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24872c:
    // 0x24872c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x24872cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_248730:
    // 0x248730: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x248730u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_248734:
    // 0x248734: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x248734u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_248738:
    // 0x248738: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x248738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24873c:
    // 0x24873c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x24873cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248740:
    // 0x248740: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x248740u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_248744:
    // 0x248744: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x248744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_248748:
    // 0x248748: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x248748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_24874c:
    // 0x24874c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x24874cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248750:
    // 0x248750: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x248750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248754:
    // 0x248754: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x248754u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_248758:
    // 0x248758: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x248758u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24875c:
    // 0x24875c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x24875cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248760:
    // 0x248760: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x248760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_248764:
    // 0x248764: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x248764u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_248768:
    // 0x248768: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x248768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_24876c:
    // 0x24876c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x24876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_248770:
    // 0x248770: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x248770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_248774:
    // 0x248774: 0xc0cd5ea  jal         func_3357A8
label_248778:
    if (ctx->pc == 0x248778u) {
        ctx->pc = 0x248778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248774u;
        // 0x248778: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24877Cu;
        goto label_24877c;
    }
    ctx->pc = 0x248774u;
    SET_GPR_U32(ctx, 31, 0x24877Cu);
    ctx->pc = 0x248778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248774u;
    // 0x248778: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x248774u, 0x24877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24877Cu;
label_24877c:
    // 0x24877c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x24877cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_248780:
    // 0x248780: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_248784:
    // 0x248784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248788:
    // 0x248788: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x248788u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_24878c:
    // 0x24878c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x24878cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248790:
    // 0x248790: 0x0  nop
    ctx->pc = 0x248790u;
    // NOP
label_248794:
    // 0x248794: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_248798:
    if (ctx->pc == 0x248798u) {
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248794u;
        // 0x248798: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24879Cu;
        goto label_24879c;
    }
    ctx->pc = 0x248794u;
    {
        const bool branch_taken_0x248794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248794u;
        // 0x248798: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248794) {
            ctx->pc = 0x2487A4u;
            goto label_2487a4;
        }
    }
    ctx->pc = 0x24879Cu;
label_24879c:
    // 0x24879c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2487a0:
    if (ctx->pc == 0x2487A0u) {
        ctx->pc = 0x2487A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24879Cu;
        // 0x2487a0: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2487A4u;
        goto label_2487a4;
    }
    ctx->pc = 0x24879Cu;
    {
        const bool branch_taken_0x24879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24879Cu;
        // 0x2487a0: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24879c) {
            ctx->pc = 0x2487D8u;
            goto label_2487d8;
        }
    }
    ctx->pc = 0x2487A4u;
label_2487a4:
    // 0x2487a4: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x2487a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_2487a8:
    // 0x2487a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2487a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2487ac:
    // 0x2487ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2487acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2487b0:
    // 0x2487b0: 0x0  nop
    ctx->pc = 0x2487b0u;
    // NOP
label_2487b4:
    // 0x2487b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2487b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2487b8:
    // 0x2487b8: 0x0  nop
    ctx->pc = 0x2487b8u;
    // NOP
label_2487bc:
    // 0x2487bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2487c0:
    if (ctx->pc == 0x2487C0u) {
        ctx->pc = 0x2487C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487BCu;
        // 0x2487c0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2487C4u;
        goto label_2487c4;
    }
    ctx->pc = 0x2487BCu;
    {
        const bool branch_taken_0x2487bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2487C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487BCu;
        // 0x2487c0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487bc) {
            ctx->pc = 0x2487D4u;
            goto label_2487d4;
        }
    }
    ctx->pc = 0x2487C4u;
label_2487c4:
    // 0x2487c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2487c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2487c8:
    // 0x2487c8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2487c8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2487cc:
    // 0x2487cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2487d0:
    if (ctx->pc == 0x2487D0u) {
        ctx->pc = 0x2487D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487CCu;
        // 0x2487d0: 0x46000b47  neg.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2487D4u;
        goto label_2487d4;
    }
    ctx->pc = 0x2487CCu;
    {
        const bool branch_taken_0x2487cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487CCu;
        // 0x2487d0: 0x46000b47  neg.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487cc) {
            ctx->pc = 0x2487DCu;
            goto label_2487dc;
        }
    }
    ctx->pc = 0x2487D4u;
label_2487d4:
    // 0x2487d4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2487d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2487d8:
    // 0x2487d8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2487d8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2487dc:
    // 0x2487dc: 0xc0cd5ea  jal         func_3357A8
label_2487e0:
    if (ctx->pc == 0x2487E0u) {
        ctx->pc = 0x2487E4u;
        goto label_2487e4;
    }
    ctx->pc = 0x2487DCu;
    SET_GPR_U32(ctx, 31, 0x2487E4u);
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2487DCu, 0x2487E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487E4u;
label_2487e4:
    // 0x2487e4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2487e4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2487e8:
    // 0x2487e8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x2487e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2487ec:
    // 0x2487ec: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x2487ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
label_2487f0:
    // 0x2487f0: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2487f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2487f4:
    // 0x2487f4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2487f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_2487f8:
    // 0x2487f8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2487f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_2487fc:
    // 0x2487fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2487fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_248800:
    // 0x248800: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_248804:
    if (ctx->pc == 0x248804u) {
        ctx->pc = 0x248808u;
        goto label_248808;
    }
    ctx->pc = 0x248800u;
    {
        const bool branch_taken_0x248800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248800) {
            ctx->pc = 0x248814u;
            goto label_248814;
        }
    }
    ctx->pc = 0x248808u;
label_248808:
    // 0x248808: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x248808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_24880c:
    // 0x24880c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24880cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_248810:
    // 0x248810: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x248810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_248814:
    // 0x248814: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x248814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_248818:
    // 0x248818: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24881c:
    // 0x24881c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24881cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_248820:
    // 0x248820: 0x0  nop
    ctx->pc = 0x248820u;
    // NOP
label_248824:
    // 0x248824: 0x46176036  c.le.s      $f12, $f23
    ctx->pc = 0x248824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248828:
    // 0x248828: 0x0  nop
    ctx->pc = 0x248828u;
    // NOP
label_24882c:
    // 0x24882c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_248830:
    if (ctx->pc == 0x248830u) {
        ctx->pc = 0x248830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24882Cu;
        // 0x248830: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248834u;
        goto label_248834;
    }
    ctx->pc = 0x24882Cu;
    {
        const bool branch_taken_0x24882c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24882Cu;
        // 0x248830: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24882c) {
            ctx->pc = 0x248848u;
            goto label_248848;
        }
    }
    ctx->pc = 0x248834u;
label_248834:
    // 0x248834: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_248838:
    // 0x248838: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24883c:
    // 0x24883c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248840:
    // 0x248840: 0x0  nop
    ctx->pc = 0x248840u;
    // NOP
label_248844:
    // 0x248844: 0x4600bd69  min.s       $f21, $f23, $f0
    ctx->pc = 0x248844u;
    ctx->f[21] = std::min(ctx->f[23], ctx->f[0]);
label_248848:
    // 0x248848: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x248848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
label_24884c:
    // 0x24884c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24884cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248850:
    // 0x248850: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x248850u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_248854:
    // 0x248854: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_248858:
    if (ctx->pc == 0x248858u) {
        ctx->pc = 0x248858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248854u;
        // 0x248858: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24885Cu;
        goto label_24885c;
    }
    ctx->pc = 0x248854u;
    {
        const bool branch_taken_0x248854 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x248858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248854u;
        // 0x248858: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248854) {
            ctx->pc = 0x248860u;
            goto label_248860;
        }
    }
    ctx->pc = 0x24885Cu;
label_24885c:
    // 0x24885c: 0x4619a5a9  min.s       $f22, $f20, $f25
    ctx->pc = 0x24885cu;
    ctx->f[22] = std::min(ctx->f[20], ctx->f[25]);
label_248860:
    // 0x248860: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x248860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_248864:
    // 0x248864: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x248864u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_248868:
    // 0x248868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24886c:
    // 0x24886c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_248870:
    if (ctx->pc == 0x248870u) {
        ctx->pc = 0x248870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24886Cu;
        // 0x248870: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248874u;
        goto label_248874;
    }
    ctx->pc = 0x24886Cu;
    {
        const bool branch_taken_0x24886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24886Cu;
        // 0x248870: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24886c) {
            ctx->pc = 0x2488A4u;
            goto label_2488a4;
        }
    }
    ctx->pc = 0x248874u;
label_248874:
    // 0x248874: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x248874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_248878:
    // 0x248878: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x248878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_24887c:
    // 0x24887c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24887cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248880:
    // 0x248880: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x248880u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
label_248884:
    // 0x248884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248888:
    // 0x248888: 0x0  nop
    ctx->pc = 0x248888u;
    // NOP
label_24888c:
    // 0x24888c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_248890:
    if (ctx->pc == 0x248890u) {
        ctx->pc = 0x248890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24888Cu;
        // 0x248890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248894u;
        goto label_248894;
    }
    ctx->pc = 0x24888Cu;
    {
        const bool branch_taken_0x24888c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24888Cu;
        // 0x248890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24888c) {
            ctx->pc = 0x2488A4u;
            goto label_2488a4;
        }
    }
    ctx->pc = 0x248894u;
label_248894:
    // 0x248894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_248898:
    // 0x248898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24889c:
    // 0x24889c: 0xc0a67aa  jal         func_299EA8
label_2488a0:
    if (ctx->pc == 0x2488A0u) {
        ctx->pc = 0x2488A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24889Cu;
        // 0x2488a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2488A4u;
        goto label_2488a4;
    }
    ctx->pc = 0x24889Cu;
    SET_GPR_U32(ctx, 31, 0x2488A4u);
    ctx->pc = 0x2488A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24889Cu;
    // 0x2488a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x24889Cu, 0x2488A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488A4u;
label_2488a4:
    // 0x2488a4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2488a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_2488a8:
    // 0x2488a8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2488a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2488ac:
    // 0x2488ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2488acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2488b0:
    // 0x2488b0: 0xc0a67a2  jal         func_299E88
label_2488b4:
    if (ctx->pc == 0x2488B4u) {
        ctx->pc = 0x2488B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488B0u;
        // 0x2488b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2488B8u;
        goto label_2488b8;
    }
    ctx->pc = 0x2488B0u;
    SET_GPR_U32(ctx, 31, 0x2488B8u);
    ctx->pc = 0x2488B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488B0u;
    // 0x2488b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E88u, 0x2488B0u, 0x2488B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488B8u;
label_2488b8:
    // 0x2488b8: 0x3c013e56  lui         $at, 0x3E56
    ctx->pc = 0x2488b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15958 << 16));
label_2488bc:
    // 0x2488bc: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x2488bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_2488c0:
    // 0x2488c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2488c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2488c4:
    // 0x2488c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2488c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2488c8:
    // 0x2488c8: 0xc66d02a4  lwc1        $f13, 0x2A4($s3)
    ctx->pc = 0x2488c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2488cc:
    // 0x2488cc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2488ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2488d0:
    // 0x2488d0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2488d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2488d4:
    // 0x2488d4: 0xc0cdcee  jal         func_3373B8
label_2488d8:
    if (ctx->pc == 0x2488D8u) {
        ctx->pc = 0x2488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488D4u;
        // 0x2488d8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2488DCu;
        goto label_2488dc;
    }
    ctx->pc = 0x2488D4u;
    SET_GPR_U32(ctx, 31, 0x2488DCu);
    ctx->pc = 0x2488D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488D4u;
    // 0x2488d8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373B8u, 0x2488D4u, 0x2488DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488DCu;
label_2488dc:
    // 0x2488dc: 0xc66d02a0  lwc1        $f13, 0x2A0($s3)
    ctx->pc = 0x2488dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2488e0:
    // 0x2488e0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2488e0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2488e4:
    // 0x2488e4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2488e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2488e8:
    // 0x2488e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2488e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2488ec:
    // 0x2488ec: 0xc0cdcee  jal         func_3373B8
label_2488f0:
    if (ctx->pc == 0x2488F0u) {
        ctx->pc = 0x2488F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488ECu;
        // 0x2488f0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2488F4u;
        goto label_2488f4;
    }
    ctx->pc = 0x2488ECu;
    SET_GPR_U32(ctx, 31, 0x2488F4u);
    ctx->pc = 0x2488F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488ECu;
    // 0x2488f0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373B8u, 0x2488ECu, 0x2488F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488F4u;
label_2488f4:
    // 0x2488f4: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x2488f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_2488f8:
    // 0x2488f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2488f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2488fc:
    // 0x2488fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2488fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_248900:
    // 0x248900: 0x0  nop
    ctx->pc = 0x248900u;
    // NOP
label_248904:
    // 0x248904: 0x46176836  c.le.s      $f13, $f23
    ctx->pc = 0x248904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248908:
    // 0x248908: 0x0  nop
    ctx->pc = 0x248908u;
    // NOP
label_24890c:
    // 0x24890c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_248910:
    if (ctx->pc == 0x248910u) {
        ctx->pc = 0x248910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24890Cu;
        // 0x248910: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248914u;
        goto label_248914;
    }
    ctx->pc = 0x24890Cu;
    {
        const bool branch_taken_0x24890c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24890Cu;
        // 0x248910: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24890c) {
            ctx->pc = 0x248928u;
            goto label_248928;
        }
    }
    ctx->pc = 0x248914u;
label_248914:
    // 0x248914: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x248914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_248918:
    // 0x248918: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24891c:
    // 0x24891c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24891cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248920:
    // 0x248920: 0x0  nop
    ctx->pc = 0x248920u;
    // NOP
label_248924:
    // 0x248924: 0x4600bb69  min.s       $f13, $f23, $f0
    ctx->pc = 0x248924u;
    ctx->f[13] = std::min(ctx->f[23], ctx->f[0]);
label_248928:
    // 0x248928: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x248928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24892c:
    // 0x24892c: 0x0  nop
    ctx->pc = 0x24892cu;
    // NOP
label_248930:
    // 0x248930: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_248934:
    if (ctx->pc == 0x248934u) {
        ctx->pc = 0x248934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248930u;
        // 0x248934: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248938u;
        goto label_248938;
    }
    ctx->pc = 0x248930u;
    {
        const bool branch_taken_0x248930 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x248934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248930u;
        // 0x248934: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248930) {
            ctx->pc = 0x24893Cu;
            goto label_24893c;
        }
    }
    ctx->pc = 0x248938u;
label_248938:
    // 0x248938: 0x4619a029  min.s       $f0, $f20, $f25
    ctx->pc = 0x248938u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[25]);
label_24893c:
    // 0x24893c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248940:
    // 0x248940: 0xc05d716  jal         func_175C58
label_248944:
    if (ctx->pc == 0x248944u) {
        ctx->pc = 0x248944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248940u;
        // 0x248944: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248948u;
        goto label_248948;
    }
    ctx->pc = 0x248940u;
    SET_GPR_U32(ctx, 31, 0x248948u);
    ctx->pc = 0x248944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248940u;
    // 0x248944: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C58u, 0x248940u, 0x248948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248948u;
label_248948:
    // 0x248948: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x248948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24894c:
    // 0x24894c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x24894cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_248950:
    // 0x248950: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x248950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_248954:
    // 0x248954: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x248954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_248958:
    // 0x248958: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x248958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24895c:
    // 0x24895c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_248960:
    // 0x248960: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x248960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_248964:
    // 0x248964: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x248964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_248968:
    // 0x248968: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x248968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_24896c:
    // 0x24896c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x24896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_248970:
    // 0x248970: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x248970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_248974:
    // 0x248974: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x248974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_248978:
    // 0x248978: 0x3e00008  jr          $ra
label_24897c:
    if (ctx->pc == 0x24897Cu) {
        ctx->pc = 0x24897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248978u;
        // 0x24897c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248980u;
        goto label_fallthrough_0x248978;
    }
    ctx->pc = 0x248978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248978u;
        // 0x24897c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248978:
    ctx->pc = 0x248980u;
}
