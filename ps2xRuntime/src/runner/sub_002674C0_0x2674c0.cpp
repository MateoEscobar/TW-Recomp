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

// Function: sub_002674C0
// Address: 0x2674c0 - 0x267870
void sub_002674C0_0x2674c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002674C0_0x2674c0");
#endif

    switch (ctx->pc) {
        case 0x2674c0u: goto label_2674c0;
        case 0x2674c4u: goto label_2674c4;
        case 0x2674c8u: goto label_2674c8;
        case 0x2674ccu: goto label_2674cc;
        case 0x2674d0u: goto label_2674d0;
        case 0x2674d4u: goto label_2674d4;
        case 0x2674d8u: goto label_2674d8;
        case 0x2674dcu: goto label_2674dc;
        case 0x2674e0u: goto label_2674e0;
        case 0x2674e4u: goto label_2674e4;
        case 0x2674e8u: goto label_2674e8;
        case 0x2674ecu: goto label_2674ec;
        case 0x2674f0u: goto label_2674f0;
        case 0x2674f4u: goto label_2674f4;
        case 0x2674f8u: goto label_2674f8;
        case 0x2674fcu: goto label_2674fc;
        case 0x267500u: goto label_267500;
        case 0x267504u: goto label_267504;
        case 0x267508u: goto label_267508;
        case 0x26750cu: goto label_26750c;
        case 0x267510u: goto label_267510;
        case 0x267514u: goto label_267514;
        case 0x267518u: goto label_267518;
        case 0x26751cu: goto label_26751c;
        case 0x267520u: goto label_267520;
        case 0x267524u: goto label_267524;
        case 0x267528u: goto label_267528;
        case 0x26752cu: goto label_26752c;
        case 0x267530u: goto label_267530;
        case 0x267534u: goto label_267534;
        case 0x267538u: goto label_267538;
        case 0x26753cu: goto label_26753c;
        case 0x267540u: goto label_267540;
        case 0x267544u: goto label_267544;
        case 0x267548u: goto label_267548;
        case 0x26754cu: goto label_26754c;
        case 0x267550u: goto label_267550;
        case 0x267554u: goto label_267554;
        case 0x267558u: goto label_267558;
        case 0x26755cu: goto label_26755c;
        case 0x267560u: goto label_267560;
        case 0x267564u: goto label_267564;
        case 0x267568u: goto label_267568;
        case 0x26756cu: goto label_26756c;
        case 0x267570u: goto label_267570;
        case 0x267574u: goto label_267574;
        case 0x267578u: goto label_267578;
        case 0x26757cu: goto label_26757c;
        case 0x267580u: goto label_267580;
        case 0x267584u: goto label_267584;
        case 0x267588u: goto label_267588;
        case 0x26758cu: goto label_26758c;
        case 0x267590u: goto label_267590;
        case 0x267594u: goto label_267594;
        case 0x267598u: goto label_267598;
        case 0x26759cu: goto label_26759c;
        case 0x2675a0u: goto label_2675a0;
        case 0x2675a4u: goto label_2675a4;
        case 0x2675a8u: goto label_2675a8;
        case 0x2675acu: goto label_2675ac;
        case 0x2675b0u: goto label_2675b0;
        case 0x2675b4u: goto label_2675b4;
        case 0x2675b8u: goto label_2675b8;
        case 0x2675bcu: goto label_2675bc;
        case 0x2675c0u: goto label_2675c0;
        case 0x2675c4u: goto label_2675c4;
        case 0x2675c8u: goto label_2675c8;
        case 0x2675ccu: goto label_2675cc;
        case 0x2675d0u: goto label_2675d0;
        case 0x2675d4u: goto label_2675d4;
        case 0x2675d8u: goto label_2675d8;
        case 0x2675dcu: goto label_2675dc;
        case 0x2675e0u: goto label_2675e0;
        case 0x2675e4u: goto label_2675e4;
        case 0x2675e8u: goto label_2675e8;
        case 0x2675ecu: goto label_2675ec;
        case 0x2675f0u: goto label_2675f0;
        case 0x2675f4u: goto label_2675f4;
        case 0x2675f8u: goto label_2675f8;
        case 0x2675fcu: goto label_2675fc;
        case 0x267600u: goto label_267600;
        case 0x267604u: goto label_267604;
        case 0x267608u: goto label_267608;
        case 0x26760cu: goto label_26760c;
        case 0x267610u: goto label_267610;
        case 0x267614u: goto label_267614;
        case 0x267618u: goto label_267618;
        case 0x26761cu: goto label_26761c;
        case 0x267620u: goto label_267620;
        case 0x267624u: goto label_267624;
        case 0x267628u: goto label_267628;
        case 0x26762cu: goto label_26762c;
        case 0x267630u: goto label_267630;
        case 0x267634u: goto label_267634;
        case 0x267638u: goto label_267638;
        case 0x26763cu: goto label_26763c;
        case 0x267640u: goto label_267640;
        case 0x267644u: goto label_267644;
        case 0x267648u: goto label_267648;
        case 0x26764cu: goto label_26764c;
        case 0x267650u: goto label_267650;
        case 0x267654u: goto label_267654;
        case 0x267658u: goto label_267658;
        case 0x26765cu: goto label_26765c;
        case 0x267660u: goto label_267660;
        case 0x267664u: goto label_267664;
        case 0x267668u: goto label_267668;
        case 0x26766cu: goto label_26766c;
        case 0x267670u: goto label_267670;
        case 0x267674u: goto label_267674;
        case 0x267678u: goto label_267678;
        case 0x26767cu: goto label_26767c;
        case 0x267680u: goto label_267680;
        case 0x267684u: goto label_267684;
        case 0x267688u: goto label_267688;
        case 0x26768cu: goto label_26768c;
        case 0x267690u: goto label_267690;
        case 0x267694u: goto label_267694;
        case 0x267698u: goto label_267698;
        case 0x26769cu: goto label_26769c;
        case 0x2676a0u: goto label_2676a0;
        case 0x2676a4u: goto label_2676a4;
        case 0x2676a8u: goto label_2676a8;
        case 0x2676acu: goto label_2676ac;
        case 0x2676b0u: goto label_2676b0;
        case 0x2676b4u: goto label_2676b4;
        case 0x2676b8u: goto label_2676b8;
        case 0x2676bcu: goto label_2676bc;
        case 0x2676c0u: goto label_2676c0;
        case 0x2676c4u: goto label_2676c4;
        case 0x2676c8u: goto label_2676c8;
        case 0x2676ccu: goto label_2676cc;
        case 0x2676d0u: goto label_2676d0;
        case 0x2676d4u: goto label_2676d4;
        case 0x2676d8u: goto label_2676d8;
        case 0x2676dcu: goto label_2676dc;
        case 0x2676e0u: goto label_2676e0;
        case 0x2676e4u: goto label_2676e4;
        case 0x2676e8u: goto label_2676e8;
        case 0x2676ecu: goto label_2676ec;
        case 0x2676f0u: goto label_2676f0;
        case 0x2676f4u: goto label_2676f4;
        case 0x2676f8u: goto label_2676f8;
        case 0x2676fcu: goto label_2676fc;
        case 0x267700u: goto label_267700;
        case 0x267704u: goto label_267704;
        case 0x267708u: goto label_267708;
        case 0x26770cu: goto label_26770c;
        case 0x267710u: goto label_267710;
        case 0x267714u: goto label_267714;
        case 0x267718u: goto label_267718;
        case 0x26771cu: goto label_26771c;
        case 0x267720u: goto label_267720;
        case 0x267724u: goto label_267724;
        case 0x267728u: goto label_267728;
        case 0x26772cu: goto label_26772c;
        case 0x267730u: goto label_267730;
        case 0x267734u: goto label_267734;
        case 0x267738u: goto label_267738;
        case 0x26773cu: goto label_26773c;
        case 0x267740u: goto label_267740;
        case 0x267744u: goto label_267744;
        case 0x267748u: goto label_267748;
        case 0x26774cu: goto label_26774c;
        case 0x267750u: goto label_267750;
        case 0x267754u: goto label_267754;
        case 0x267758u: goto label_267758;
        case 0x26775cu: goto label_26775c;
        case 0x267760u: goto label_267760;
        case 0x267764u: goto label_267764;
        case 0x267768u: goto label_267768;
        case 0x26776cu: goto label_26776c;
        case 0x267770u: goto label_267770;
        case 0x267774u: goto label_267774;
        case 0x267778u: goto label_267778;
        case 0x26777cu: goto label_26777c;
        case 0x267780u: goto label_267780;
        case 0x267784u: goto label_267784;
        case 0x267788u: goto label_267788;
        case 0x26778cu: goto label_26778c;
        case 0x267790u: goto label_267790;
        case 0x267794u: goto label_267794;
        case 0x267798u: goto label_267798;
        case 0x26779cu: goto label_26779c;
        case 0x2677a0u: goto label_2677a0;
        case 0x2677a4u: goto label_2677a4;
        case 0x2677a8u: goto label_2677a8;
        case 0x2677acu: goto label_2677ac;
        case 0x2677b0u: goto label_2677b0;
        case 0x2677b4u: goto label_2677b4;
        case 0x2677b8u: goto label_2677b8;
        case 0x2677bcu: goto label_2677bc;
        case 0x2677c0u: goto label_2677c0;
        case 0x2677c4u: goto label_2677c4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677ccu: goto label_2677cc;
        case 0x2677d0u: goto label_2677d0;
        case 0x2677d4u: goto label_2677d4;
        case 0x2677d8u: goto label_2677d8;
        case 0x2677dcu: goto label_2677dc;
        case 0x2677e0u: goto label_2677e0;
        case 0x2677e4u: goto label_2677e4;
        case 0x2677e8u: goto label_2677e8;
        case 0x2677ecu: goto label_2677ec;
        case 0x2677f0u: goto label_2677f0;
        case 0x2677f4u: goto label_2677f4;
        case 0x2677f8u: goto label_2677f8;
        case 0x2677fcu: goto label_2677fc;
        case 0x267800u: goto label_267800;
        case 0x267804u: goto label_267804;
        case 0x267808u: goto label_267808;
        case 0x26780cu: goto label_26780c;
        case 0x267810u: goto label_267810;
        case 0x267814u: goto label_267814;
        case 0x267818u: goto label_267818;
        case 0x26781cu: goto label_26781c;
        case 0x267820u: goto label_267820;
        case 0x267824u: goto label_267824;
        case 0x267828u: goto label_267828;
        case 0x26782cu: goto label_26782c;
        case 0x267830u: goto label_267830;
        case 0x267834u: goto label_267834;
        case 0x267838u: goto label_267838;
        case 0x26783cu: goto label_26783c;
        case 0x267840u: goto label_267840;
        case 0x267844u: goto label_267844;
        case 0x267848u: goto label_267848;
        case 0x26784cu: goto label_26784c;
        case 0x267850u: goto label_267850;
        case 0x267854u: goto label_267854;
        case 0x267858u: goto label_267858;
        case 0x26785cu: goto label_26785c;
        case 0x267860u: goto label_267860;
        case 0x267864u: goto label_267864;
        case 0x267868u: goto label_267868;
        case 0x26786cu: goto label_26786c;
        default: break;
    }

    ctx->pc = 0x2674c0u;

label_2674c0:
    // 0x2674c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2674c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2674c4:
    // 0x2674c4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2674c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2674c8:
    // 0x2674c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2674c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2674cc:
    // 0x2674cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2674ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2674d0:
    // 0x2674d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2674d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2674d4:
    // 0x2674d4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2674d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2674d8:
    // 0x2674d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2674d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2674dc:
    // 0x2674dc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2674dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2674e0:
    // 0x2674e0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2674e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2674e4:
    // 0x2674e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2674e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2674e8:
    // 0x2674e8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2674e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2674ec:
    // 0x2674ec: 0x8e5600d4  lw          $s6, 0xD4($s2)
    ctx->pc = 0x2674ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2674f0:
    // 0x2674f0: 0x12c000d5  beqz        $s6, . + 4 + (0xD5 << 2)
label_2674f4:
    if (ctx->pc == 0x2674F4u) {
        ctx->pc = 0x2674F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674F0u;
        // 0x2674f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2674F8u;
        goto label_2674f8;
    }
    ctx->pc = 0x2674F0u;
    {
        const bool branch_taken_0x2674f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674F0u;
        // 0x2674f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674f0) {
            ctx->pc = 0x267848u;
            goto label_267848;
        }
    }
    ctx->pc = 0x2674F8u;
label_2674f8:
    // 0x2674f8: 0xc089fe4  jal         func_227F90
label_2674fc:
    if (ctx->pc == 0x2674FCu) {
        ctx->pc = 0x267500u;
        goto label_267500;
    }
    ctx->pc = 0x2674F8u;
    SET_GPR_U32(ctx, 31, 0x267500u);
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x2674F8u, 0x267500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267500u;
label_267500:
    // 0x267500: 0x144000d1  bnez        $v0, . + 4 + (0xD1 << 2)
label_267504:
    if (ctx->pc == 0x267504u) {
        ctx->pc = 0x267504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267500u;
        // 0x267504: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267508u;
        goto label_267508;
    }
    ctx->pc = 0x267500u;
    {
        const bool branch_taken_0x267500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267500u;
        // 0x267504: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267500) {
            ctx->pc = 0x267848u;
            goto label_267848;
        }
    }
    ctx->pc = 0x267508u;
label_267508:
    // 0x267508: 0x34058200  ori         $a1, $zero, 0x8200
    ctx->pc = 0x267508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
label_26750c:
    // 0x26750c: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x26750cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
label_267510:
    // 0x267510: 0x34a5800f  ori         $a1, $a1, 0x800F
    ctx->pc = 0x267510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32783);
label_267514:
    // 0x267514: 0xc089988  jal         func_226620
label_267518:
    if (ctx->pc == 0x267518u) {
        ctx->pc = 0x267518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267514u;
        // 0x267518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26751Cu;
        goto label_26751c;
    }
    ctx->pc = 0x267514u;
    SET_GPR_U32(ctx, 31, 0x26751Cu);
    ctx->pc = 0x267518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267514u;
    // 0x267518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x267514u, 0x26751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26751Cu;
label_26751c:
    // 0x26751c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267520:
    // 0x267520: 0xc0899aa  jal         func_2266A8
label_267524:
    if (ctx->pc == 0x267524u) {
        ctx->pc = 0x267524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267520u;
        // 0x267524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267528u;
        goto label_267528;
    }
    ctx->pc = 0x267520u;
    SET_GPR_U32(ctx, 31, 0x267528u);
    ctx->pc = 0x267524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267520u;
    // 0x267524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x267520u, 0x267528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267528u;
label_267528:
    // 0x267528: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x267528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_26752c:
    // 0x26752c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x26752cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_267530:
    // 0x267530: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x267530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_267534:
    // 0x267534: 0x8c860790  lw          $a2, 0x790($a0)
    ctx->pc = 0x267534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1936)));
label_267538:
    // 0x267538: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x267538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_26753c:
    // 0x26753c: 0xa6c00118  sh          $zero, 0x118($s6)
    ctx->pc = 0x26753cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 280), (uint16_t)GPR_U32(ctx, 0));
label_267540:
    // 0x267540: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x267540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_267544:
    // 0x267544: 0xaec300f0  sw          $v1, 0xF0($s6)
    ctx->pc = 0x267544u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 3));
label_267548:
    // 0x267548: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x267548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_26754c:
    // 0x26754c: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x26754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
label_267550:
    // 0x267550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_267554:
    // 0x267554: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_267558:
    if (ctx->pc == 0x267558u) {
        ctx->pc = 0x267558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267554u;
        // 0x267558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26755Cu;
        goto label_26755c;
    }
    ctx->pc = 0x267554u;
    {
        const bool branch_taken_0x267554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267554u;
        // 0x267558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267554) {
            ctx->pc = 0x26757Cu;
            goto label_26757c;
        }
    }
    ctx->pc = 0x26755Cu;
label_26755c:
    // 0x26755c: 0xc08c0ca  jal         func_230328
label_267560:
    if (ctx->pc == 0x267560u) {
        ctx->pc = 0x267560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26755Cu;
        // 0x267560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267564u;
        goto label_267564;
    }
    ctx->pc = 0x26755Cu;
    SET_GPR_U32(ctx, 31, 0x267564u);
    ctx->pc = 0x267560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26755Cu;
    // 0x267560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x26755Cu, 0x267564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267564u;
label_267564:
    // 0x267564: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x267564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_267568:
    // 0x267568: 0x8ec300f0  lw          $v1, 0xF0($s6)
    ctx->pc = 0x267568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_26756c:
    // 0x26756c: 0x8c440794  lw          $a0, 0x794($v0)
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1940)));
label_267570:
    // 0x267570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x267570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_267574:
    // 0x267574: 0x1000005e  b           . + 4 + (0x5E << 2)
label_267578:
    if (ctx->pc == 0x267578u) {
        ctx->pc = 0x267578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267574u;
        // 0x267578: 0xaec300f0  sw          $v1, 0xF0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26757Cu;
        goto label_26757c;
    }
    ctx->pc = 0x267574u;
    {
        const bool branch_taken_0x267574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267574u;
        // 0x267578: 0xaec300f0  sw          $v1, 0xF0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267574) {
            ctx->pc = 0x2676F0u;
            goto label_2676f0;
        }
    }
    ctx->pc = 0x26757Cu;
label_26757c:
    // 0x26757c: 0xc088edc  jal         func_223B70
label_267580:
    if (ctx->pc == 0x267580u) {
        ctx->pc = 0x267580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26757Cu;
        // 0x267580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267584u;
        goto label_267584;
    }
    ctx->pc = 0x26757Cu;
    SET_GPR_U32(ctx, 31, 0x267584u);
    ctx->pc = 0x267580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26757Cu;
    // 0x267580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x26757Cu, 0x267584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267584u;
label_267584:
    // 0x267584: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_267588:
    if (ctx->pc == 0x267588u) {
        ctx->pc = 0x267588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267584u;
        // 0x267588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26758Cu;
        goto label_26758c;
    }
    ctx->pc = 0x267584u;
    {
        const bool branch_taken_0x267584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267584u;
        // 0x267588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267584) {
            ctx->pc = 0x267640u;
            goto label_267640;
        }
    }
    ctx->pc = 0x26758Cu;
label_26758c:
    // 0x26758c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x26758cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_267590:
    // 0x267590: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x267590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_267594:
    // 0x267594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_267598:
    // 0x267598: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_26759c:
    if (ctx->pc == 0x26759Cu) {
        ctx->pc = 0x2675A0u;
        goto label_2675a0;
    }
    ctx->pc = 0x267598u;
    {
        const bool branch_taken_0x267598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267598) {
            ctx->pc = 0x267640u;
            goto label_267640;
        }
    }
    ctx->pc = 0x2675A0u;
label_2675a0:
    // 0x2675a0: 0xc089f66  jal         func_227D98
label_2675a4:
    if (ctx->pc == 0x2675A4u) {
        ctx->pc = 0x2675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675A0u;
        // 0x2675a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675A8u;
        goto label_2675a8;
    }
    ctx->pc = 0x2675A0u;
    SET_GPR_U32(ctx, 31, 0x2675A8u);
    ctx->pc = 0x2675A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675A0u;
    // 0x2675a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x2675A0u, 0x2675A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675A8u;
label_2675a8:
    // 0x2675a8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_2675ac:
    if (ctx->pc == 0x2675ACu) {
        ctx->pc = 0x2675ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675A8u;
        // 0x2675ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675B0u;
        goto label_2675b0;
    }
    ctx->pc = 0x2675A8u;
    {
        const bool branch_taken_0x2675a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2675a8) {
            ctx->pc = 0x2675ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2675A8u;
            // 0x2675ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267640u;
            goto label_267640;
        }
    }
    ctx->pc = 0x2675B0u;
label_2675b0:
    // 0x2675b0: 0xc08be9e  jal         func_22FA78
label_2675b4:
    if (ctx->pc == 0x2675B4u) {
        ctx->pc = 0x2675B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675B0u;
        // 0x2675b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675B8u;
        goto label_2675b8;
    }
    ctx->pc = 0x2675B0u;
    SET_GPR_U32(ctx, 31, 0x2675B8u);
    ctx->pc = 0x2675B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675B0u;
    // 0x2675b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FA78u, 0x2675B0u, 0x2675B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675B8u;
label_2675b8:
    // 0x2675b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2675b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2675bc:
    // 0x2675bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2675bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2675c0:
    // 0x2675c0: 0xc08cb18  jal         func_232C60
label_2675c4:
    if (ctx->pc == 0x2675C4u) {
        ctx->pc = 0x2675C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675C0u;
        // 0x2675c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675C8u;
        goto label_2675c8;
    }
    ctx->pc = 0x2675C0u;
    SET_GPR_U32(ctx, 31, 0x2675C8u);
    ctx->pc = 0x2675C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675C0u;
    // 0x2675c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C60u, 0x2675C0u, 0x2675C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675C8u;
label_2675c8:
    // 0x2675c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2675c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2675cc:
    // 0x2675cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2675d0:
    // 0x2675d0: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x2675d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_2675d4:
    // 0x2675d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2675d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2675d8:
    // 0x2675d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2675dc:
    // 0x2675dc: 0x40f809  jalr        $v0
label_2675e0:
    if (ctx->pc == 0x2675E0u) {
        ctx->pc = 0x2675E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675DCu;
        // 0x2675e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675E4u;
        goto label_2675e4;
    }
    ctx->pc = 0x2675DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2675E4u);
        ctx->pc = 0x2675E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675DCu;
        // 0x2675e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2675DCu, 0x2675E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2675E4u;
label_2675e4:
    // 0x2675e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2675e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2675e8:
    // 0x2675e8: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x2675e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
label_2675ec:
    // 0x2675ec: 0xc071462  jal         func_1C5188
label_2675f0:
    if (ctx->pc == 0x2675F0u) {
        ctx->pc = 0x2675F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675ECu;
        // 0x2675f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675F4u;
        goto label_2675f4;
    }
    ctx->pc = 0x2675ECu;
    SET_GPR_U32(ctx, 31, 0x2675F4u);
    ctx->pc = 0x2675F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675ECu;
    // 0x2675f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2675ECu, 0x2675F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675F4u;
label_2675f4:
    // 0x2675f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2675f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2675f8:
    // 0x2675f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2675fc:
    if (ctx->pc == 0x2675FCu) {
        ctx->pc = 0x267600u;
        goto label_267600;
    }
    ctx->pc = 0x2675F8u;
    {
        const bool branch_taken_0x2675f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2675f8) {
            ctx->pc = 0x267620u;
            goto label_267620;
        }
    }
    ctx->pc = 0x267600u;
label_267600:
    // 0x267600: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x267600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_267604:
    // 0x267604: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x267604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_267608:
    // 0x267608: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x267608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26760c:
    // 0x26760c: 0x40f809  jalr        $v0
label_267610:
    if (ctx->pc == 0x267610u) {
        ctx->pc = 0x267610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26760Cu;
        // 0x267610: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267614u;
        goto label_267614;
    }
    ctx->pc = 0x26760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267614u);
        ctx->pc = 0x267610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26760Cu;
        // 0x267610: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26760Cu, 0x267614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267614u;
label_267614:
    // 0x267614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267618:
    // 0x267618: 0xc06cad6  jal         func_1B2B58
label_26761c:
    if (ctx->pc == 0x26761Cu) {
        ctx->pc = 0x26761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267618u;
        // 0x26761c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267620u;
        goto label_267620;
    }
    ctx->pc = 0x267618u;
    SET_GPR_U32(ctx, 31, 0x267620u);
    ctx->pc = 0x26761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267618u;
    // 0x26761c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x267618u, 0x267620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267620u;
label_267620:
    // 0x267620: 0xc0e4060  jal         func_390180
label_267624:
    if (ctx->pc == 0x267624u) {
        ctx->pc = 0x267624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267620u;
        // 0x267624: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267628u;
        goto label_267628;
    }
    ctx->pc = 0x267620u;
    SET_GPR_U32(ctx, 31, 0x267628u);
    ctx->pc = 0x267624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267620u;
    // 0x267624: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x267620u, 0x267628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267628u;
label_267628:
    // 0x267628: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_26762c:
    if (ctx->pc == 0x26762Cu) {
        ctx->pc = 0x267630u;
        goto label_267630;
    }
    ctx->pc = 0x267628u;
    {
        const bool branch_taken_0x267628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267628) {
            ctx->pc = 0x2676F0u;
            goto label_2676f0;
        }
    }
    ctx->pc = 0x267630u;
label_267630:
    // 0x267630: 0xc089ce2  jal         func_227388
label_267634:
    if (ctx->pc == 0x267634u) {
        ctx->pc = 0x267634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267630u;
        // 0x267634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267638u;
        goto label_267638;
    }
    ctx->pc = 0x267630u;
    SET_GPR_U32(ctx, 31, 0x267638u);
    ctx->pc = 0x267634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267630u;
    // 0x267634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x267630u, 0x267638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267638u;
label_267638:
    // 0x267638: 0x1000002d  b           . + 4 + (0x2D << 2)
label_26763c:
    if (ctx->pc == 0x26763Cu) {
        ctx->pc = 0x267640u;
        goto label_267640;
    }
    ctx->pc = 0x267638u;
    {
        const bool branch_taken_0x267638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267638) {
            ctx->pc = 0x2676F0u;
            goto label_2676f0;
        }
    }
    ctx->pc = 0x267640u;
label_267640:
    // 0x267640: 0xc08c0ca  jal         func_230328
label_267644:
    if (ctx->pc == 0x267644u) {
        ctx->pc = 0x267644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267640u;
        // 0x267644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267648u;
        goto label_267648;
    }
    ctx->pc = 0x267640u;
    SET_GPR_U32(ctx, 31, 0x267648u);
    ctx->pc = 0x267644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267640u;
    // 0x267644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x267640u, 0x267648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267648u;
label_267648:
    // 0x267648: 0xc089f66  jal         func_227D98
label_26764c:
    if (ctx->pc == 0x26764Cu) {
        ctx->pc = 0x26764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267648u;
        // 0x26764c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267650u;
        goto label_267650;
    }
    ctx->pc = 0x267648u;
    SET_GPR_U32(ctx, 31, 0x267650u);
    ctx->pc = 0x26764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267648u;
    // 0x26764c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x267648u, 0x267650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267650u;
label_267650:
    // 0x267650: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_267654:
    if (ctx->pc == 0x267654u) {
        ctx->pc = 0x267654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267650u;
        // 0x267654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267658u;
        goto label_267658;
    }
    ctx->pc = 0x267650u;
    {
        const bool branch_taken_0x267650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267650u;
        // 0x267654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267650) {
            ctx->pc = 0x267668u;
            goto label_267668;
        }
    }
    ctx->pc = 0x267658u;
label_267658:
    // 0x267658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x267658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26765c:
    // 0x26765c: 0xc08cb18  jal         func_232C60
label_267660:
    if (ctx->pc == 0x267660u) {
        ctx->pc = 0x267660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26765Cu;
        // 0x267660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267664u;
        goto label_267664;
    }
    ctx->pc = 0x26765Cu;
    SET_GPR_U32(ctx, 31, 0x267664u);
    ctx->pc = 0x267660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26765Cu;
    // 0x267660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C60u, 0x26765Cu, 0x267664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267664u;
label_267664:
    // 0x267664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267668:
    // 0x267668: 0xc089988  jal         func_226620
label_26766c:
    if (ctx->pc == 0x26766Cu) {
        ctx->pc = 0x26766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267668u;
        // 0x26766c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267670u;
        goto label_267670;
    }
    ctx->pc = 0x267668u;
    SET_GPR_U32(ctx, 31, 0x267670u);
    ctx->pc = 0x26766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267668u;
    // 0x26766c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x267668u, 0x267670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267670u;
label_267670:
    // 0x267670: 0xc08a1a0  jal         func_228680
label_267674:
    if (ctx->pc == 0x267674u) {
        ctx->pc = 0x267674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267670u;
        // 0x267674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267678u;
        goto label_267678;
    }
    ctx->pc = 0x267670u;
    SET_GPR_U32(ctx, 31, 0x267678u);
    ctx->pc = 0x267674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267670u;
    // 0x267674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x267670u, 0x267678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267678u;
label_267678:
    // 0x267678: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x267678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_26767c:
    // 0x26767c: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x26767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_267680:
    // 0x267680: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
label_267684:
    if (ctx->pc == 0x267684u) {
        ctx->pc = 0x267688u;
        goto label_267688;
    }
    ctx->pc = 0x267680u;
    {
        const bool branch_taken_0x267680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x267680) {
            ctx->pc = 0x2676E8u;
            goto label_2676e8;
        }
    }
    ctx->pc = 0x267688u;
label_267688:
    // 0x267688: 0xc08a1a0  jal         func_228680
label_26768c:
    if (ctx->pc == 0x26768Cu) {
        ctx->pc = 0x26768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267688u;
        // 0x26768c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267690u;
        goto label_267690;
    }
    ctx->pc = 0x267688u;
    SET_GPR_U32(ctx, 31, 0x267690u);
    ctx->pc = 0x26768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267688u;
    // 0x26768c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x267688u, 0x267690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267690u;
label_267690:
    // 0x267690: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x267690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_267694:
    // 0x267694: 0xc0e4080  jal         func_390200
label_267698:
    if (ctx->pc == 0x267698u) {
        ctx->pc = 0x267698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267694u;
        // 0x267698: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26769Cu;
        goto label_26769c;
    }
    ctx->pc = 0x267694u;
    SET_GPR_U32(ctx, 31, 0x26769Cu);
    ctx->pc = 0x267698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267694u;
    // 0x267698: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x267694u, 0x26769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26769Cu;
label_26769c:
    // 0x26769c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26769cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2676a0:
    // 0x2676a0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2676a4:
    if (ctx->pc == 0x2676A4u) {
        ctx->pc = 0x2676A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A0u;
        // 0x2676a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676A8u;
        goto label_2676a8;
    }
    ctx->pc = 0x2676A0u;
    {
        const bool branch_taken_0x2676a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A0u;
        // 0x2676a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676a0) {
            ctx->pc = 0x2676E8u;
            goto label_2676e8;
        }
    }
    ctx->pc = 0x2676A8u;
label_2676a8:
    // 0x2676a8: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2676a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_2676ac:
    // 0x2676ac: 0xc0e44cc  jal         func_391330
label_2676b0:
    if (ctx->pc == 0x2676B0u) {
        ctx->pc = 0x2676B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676ACu;
        // 0x2676b0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676B4u;
        goto label_2676b4;
    }
    ctx->pc = 0x2676ACu;
    SET_GPR_U32(ctx, 31, 0x2676B4u);
    ctx->pc = 0x2676B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676ACu;
    // 0x2676b0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2676ACu, 0x2676B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676B4u;
label_2676b4:
    // 0x2676b4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2676b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_2676b8:
    // 0x2676b8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2676bc:
    // 0x2676bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2676c0:
    if (ctx->pc == 0x2676C0u) {
        ctx->pc = 0x2676C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676BCu;
        // 0x2676c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676C4u;
        goto label_2676c4;
    }
    ctx->pc = 0x2676BCu;
    {
        const bool branch_taken_0x2676bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2676C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676BCu;
        // 0x2676c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676bc) {
            ctx->pc = 0x2676E8u;
            goto label_2676e8;
        }
    }
    ctx->pc = 0x2676C4u;
label_2676c4:
    // 0x2676c4: 0xc089988  jal         func_226620
label_2676c8:
    if (ctx->pc == 0x2676C8u) {
        ctx->pc = 0x2676C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676C4u;
        // 0x2676c8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676CCu;
        goto label_2676cc;
    }
    ctx->pc = 0x2676C4u;
    SET_GPR_U32(ctx, 31, 0x2676CCu);
    ctx->pc = 0x2676C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676C4u;
    // 0x2676c8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x2676C4u, 0x2676CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676CCu;
label_2676cc:
    // 0x2676cc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2676ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2676d0:
    // 0x2676d0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x2676d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_2676d4:
    // 0x2676d4: 0xc089974  jal         func_2265D0
label_2676d8:
    if (ctx->pc == 0x2676D8u) {
        ctx->pc = 0x2676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D4u;
        // 0x2676d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676DCu;
        goto label_2676dc;
    }
    ctx->pc = 0x2676D4u;
    SET_GPR_U32(ctx, 31, 0x2676DCu);
    ctx->pc = 0x2676D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676D4u;
    // 0x2676d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2676D4u, 0x2676DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676DCu;
label_2676dc:
    // 0x2676dc: 0xaec000f0  sw          $zero, 0xF0($s6)
    ctx->pc = 0x2676dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 0));
label_2676e0:
    // 0x2676e0: 0xc0873c8  jal         func_21CF20
label_2676e4:
    if (ctx->pc == 0x2676E4u) {
        ctx->pc = 0x2676E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676E0u;
        // 0x2676e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676E8u;
        goto label_2676e8;
    }
    ctx->pc = 0x2676E0u;
    SET_GPR_U32(ctx, 31, 0x2676E8u);
    ctx->pc = 0x2676E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676E0u;
    // 0x2676e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF20u, 0x2676E0u, 0x2676E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676E8u;
label_2676e8:
    // 0x2676e8: 0xc08c1d0  jal         func_230740
label_2676ec:
    if (ctx->pc == 0x2676ECu) {
        ctx->pc = 0x2676ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676E8u;
        // 0x2676ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676F0u;
        goto label_2676f0;
    }
    ctx->pc = 0x2676E8u;
    SET_GPR_U32(ctx, 31, 0x2676F0u);
    ctx->pc = 0x2676ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676E8u;
    // 0x2676ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230740u, 0x2676E8u, 0x2676F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676F0u;
label_2676f0:
    // 0x2676f0: 0xc088edc  jal         func_223B70
label_2676f4:
    if (ctx->pc == 0x2676F4u) {
        ctx->pc = 0x2676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F0u;
        // 0x2676f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676F8u;
        goto label_2676f8;
    }
    ctx->pc = 0x2676F0u;
    SET_GPR_U32(ctx, 31, 0x2676F8u);
    ctx->pc = 0x2676F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676F0u;
    // 0x2676f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2676F0u, 0x2676F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676F8u;
label_2676f8:
    // 0x2676f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2676fc:
    if (ctx->pc == 0x2676FCu) {
        ctx->pc = 0x2676FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F8u;
        // 0x2676fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267700u;
        goto label_267700;
    }
    ctx->pc = 0x2676F8u;
    {
        const bool branch_taken_0x2676f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F8u;
        // 0x2676fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f8) {
            ctx->pc = 0x26770Cu;
            goto label_26770c;
        }
    }
    ctx->pc = 0x267700u;
label_267700:
    // 0x267700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267704:
    // 0x267704: 0xc094d7c  jal         func_2535F0
label_267708:
    if (ctx->pc == 0x267708u) {
        ctx->pc = 0x267708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267704u;
        // 0x267708: 0x24060143  addiu       $a2, $zero, 0x143 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26770Cu;
        goto label_26770c;
    }
    ctx->pc = 0x267704u;
    SET_GPR_U32(ctx, 31, 0x26770Cu);
    ctx->pc = 0x267708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267704u;
    // 0x267708: 0x24060143  addiu       $a2, $zero, 0x143 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x267704u, 0x26770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26770Cu;
label_26770c:
    // 0x26770c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x26770cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_267710:
    // 0x267710: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x267710u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_267714:
    // 0x267714: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_267718:
    if (ctx->pc == 0x267718u) {
        ctx->pc = 0x267718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267714u;
        // 0x267718: 0x26570358  addiu       $s7, $s2, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26771Cu;
        goto label_26771c;
    }
    ctx->pc = 0x267714u;
    {
        const bool branch_taken_0x267714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267714u;
        // 0x267718: 0x26570358  addiu       $s7, $s2, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267714) {
            ctx->pc = 0x26779Cu;
            goto label_26779c;
        }
    }
    ctx->pc = 0x26771Cu;
label_26771c:
    // 0x26771c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_267720:
    // 0x267720: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x267720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267724:
    // 0x267724: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x267724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_267728:
    // 0x267728: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x267728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_26772c:
    // 0x26772c: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
label_267730:
    if (ctx->pc == 0x267730u) {
        ctx->pc = 0x267730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26772Cu;
        // 0x267730: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267734u;
        goto label_267734;
    }
    ctx->pc = 0x26772Cu;
    {
        const bool branch_taken_0x26772c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x267730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26772Cu;
        // 0x267730: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26772c) {
            ctx->pc = 0x26779Cu;
            goto label_26779c;
        }
    }
    ctx->pc = 0x267734u;
label_267734:
    // 0x267734: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x267734u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_267738:
    // 0x267738: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x267738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_26773c:
    // 0x26773c: 0xc0e409a  jal         func_390268
label_267740:
    if (ctx->pc == 0x267740u) {
        ctx->pc = 0x267740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26773Cu;
        // 0x267740: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267744u;
        goto label_267744;
    }
    ctx->pc = 0x26773Cu;
    SET_GPR_U32(ctx, 31, 0x267744u);
    ctx->pc = 0x267740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26773Cu;
    // 0x267740: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26773Cu, 0x267744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267744u;
label_267744:
    // 0x267744: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267748:
    // 0x267748: 0xc089f76  jal         func_227DD8
label_26774c:
    if (ctx->pc == 0x26774Cu) {
        ctx->pc = 0x26774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267748u;
        // 0x26774c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267750u;
        goto label_267750;
    }
    ctx->pc = 0x267748u;
    SET_GPR_U32(ctx, 31, 0x267750u);
    ctx->pc = 0x26774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267748u;
    // 0x26774c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x267748u, 0x267750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267750u;
label_267750:
    // 0x267750: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_267754:
    if (ctx->pc == 0x267754u) {
        ctx->pc = 0x267754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267750u;
        // 0x267754: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267758u;
        goto label_267758;
    }
    ctx->pc = 0x267750u;
    {
        const bool branch_taken_0x267750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267750u;
        // 0x267754: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267750) {
            ctx->pc = 0x267788u;
            goto label_267788;
        }
    }
    ctx->pc = 0x267758u;
label_267758:
    // 0x267758: 0xc087502  jal         func_21D408
label_26775c:
    if (ctx->pc == 0x26775Cu) {
        ctx->pc = 0x26775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267758u;
        // 0x26775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267760u;
        goto label_267760;
    }
    ctx->pc = 0x267758u;
    SET_GPR_U32(ctx, 31, 0x267760u);
    ctx->pc = 0x26775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267758u;
    // 0x26775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x267758u, 0x267760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267760u;
label_267760:
    // 0x267760: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x267760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_267764:
    // 0x267764: 0xc087502  jal         func_21D408
label_267768:
    if (ctx->pc == 0x267768u) {
        ctx->pc = 0x267768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267764u;
        // 0x267768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26776Cu;
        goto label_26776c;
    }
    ctx->pc = 0x267764u;
    SET_GPR_U32(ctx, 31, 0x26776Cu);
    ctx->pc = 0x267768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267764u;
    // 0x267768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x267764u, 0x26776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26776Cu;
label_26776c:
    // 0x26776c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x26776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_267770:
    // 0x267770: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_267774:
    if (ctx->pc == 0x267774u) {
        ctx->pc = 0x267774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267770u;
        // 0x267774: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267778u;
        goto label_267778;
    }
    ctx->pc = 0x267770u;
    {
        const bool branch_taken_0x267770 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x267774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267770u;
        // 0x267774: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267770) {
            ctx->pc = 0x267788u;
            goto label_267788;
        }
    }
    ctx->pc = 0x267778u;
label_267778:
    // 0x267778: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x267778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26777c:
    // 0x26777c: 0x8ec200f0  lw          $v0, 0xF0($s6)
    ctx->pc = 0x26777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_267780:
    // 0x267780: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x267780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
label_267784:
    // 0x267784: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x267784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_267788:
    // 0x267788: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x267788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_26778c:
    // 0x26778c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x26778cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_267790:
    // 0x267790: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x267790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_267794:
    // 0x267794: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_267798:
    if (ctx->pc == 0x267798u) {
        ctx->pc = 0x267798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267794u;
        // 0x267798: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26779Cu;
        goto label_26779c;
    }
    ctx->pc = 0x267794u;
    {
        const bool branch_taken_0x267794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267794u;
        // 0x267798: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267794) {
            ctx->pc = 0x267738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267738;
        }
    }
    ctx->pc = 0x26779Cu;
label_26779c:
    // 0x26779c: 0xc0e4080  jal         func_390200
label_2677a0:
    if (ctx->pc == 0x2677A0u) {
        ctx->pc = 0x2677A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26779Cu;
        // 0x2677a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677A4u;
        goto label_2677a4;
    }
    ctx->pc = 0x26779Cu;
    SET_GPR_U32(ctx, 31, 0x2677A4u);
    ctx->pc = 0x2677A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26779Cu;
    // 0x2677a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x26779Cu, 0x2677A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677A4u;
label_2677a4:
    // 0x2677a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2677a8:
    if (ctx->pc == 0x2677A8u) {
        ctx->pc = 0x2677ACu;
        goto label_2677ac;
    }
    ctx->pc = 0x2677A4u;
    {
        const bool branch_taken_0x2677a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677a4) {
            ctx->pc = 0x2677B4u;
            goto label_2677b4;
        }
    }
    ctx->pc = 0x2677ACu;
label_2677ac:
    // 0x2677ac: 0xc0932b2  jal         func_24CAC8
label_2677b0:
    if (ctx->pc == 0x2677B0u) {
        ctx->pc = 0x2677B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677ACu;
        // 0x2677b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677B4u;
        goto label_2677b4;
    }
    ctx->pc = 0x2677ACu;
    SET_GPR_U32(ctx, 31, 0x2677B4u);
    ctx->pc = 0x2677B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677ACu;
    // 0x2677b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CAC8u, 0x2677ACu, 0x2677B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677B4u;
label_2677b4:
    // 0x2677b4: 0xc089fac  jal         func_227EB0
label_2677b8:
    if (ctx->pc == 0x2677B8u) {
        ctx->pc = 0x2677B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677B4u;
        // 0x2677b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677BCu;
        goto label_2677bc;
    }
    ctx->pc = 0x2677B4u;
    SET_GPR_U32(ctx, 31, 0x2677BCu);
    ctx->pc = 0x2677B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677B4u;
    // 0x2677b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2677B4u, 0x2677BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677BCu;
label_2677bc:
    // 0x2677bc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2677c0:
    if (ctx->pc == 0x2677C0u) {
        ctx->pc = 0x2677C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677BCu;
        // 0x2677c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677C4u;
        goto label_2677c4;
    }
    ctx->pc = 0x2677BCu;
    {
        const bool branch_taken_0x2677bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677bc) {
            ctx->pc = 0x2677C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2677BCu;
            // 0x2677c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267800u;
            goto label_267800;
        }
    }
    ctx->pc = 0x2677C4u;
label_2677c4:
    // 0x2677c4: 0xc0960cc  jal         func_258330
label_2677c8:
    if (ctx->pc == 0x2677C8u) {
        ctx->pc = 0x2677C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677C4u;
        // 0x2677c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677CCu;
        goto label_2677cc;
    }
    ctx->pc = 0x2677C4u;
    SET_GPR_U32(ctx, 31, 0x2677CCu);
    ctx->pc = 0x2677C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677C4u;
    // 0x2677c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x2677C4u, 0x2677CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677CCu;
label_2677cc:
    // 0x2677cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2677ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2677d0:
    // 0x2677d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2677d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2677d4:
    // 0x2677d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2677d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2677d8:
    // 0x2677d8: 0x40f809  jalr        $v0
label_2677dc:
    if (ctx->pc == 0x2677DCu) {
        ctx->pc = 0x2677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677D8u;
        // 0x2677dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677E0u;
        goto label_2677e0;
    }
    ctx->pc = 0x2677D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2677E0u);
        ctx->pc = 0x2677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677D8u;
        // 0x2677dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2677D8u, 0x2677E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2677E0u;
label_2677e0:
    // 0x2677e0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2677e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2677e4:
    // 0x2677e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2677e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2677e8:
    // 0x2677e8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2677ec:
    if (ctx->pc == 0x2677ECu) {
        ctx->pc = 0x2677ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677E8u;
        // 0x2677ec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677F0u;
        goto label_2677f0;
    }
    ctx->pc = 0x2677E8u;
    {
        const bool branch_taken_0x2677e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2677ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677E8u;
        // 0x2677ec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677e8) {
            ctx->pc = 0x267848u;
            goto label_267848;
        }
    }
    ctx->pc = 0x2677F0u;
label_2677f0:
    // 0x2677f0: 0xc0873c8  jal         func_21CF20
label_2677f4:
    if (ctx->pc == 0x2677F4u) {
        ctx->pc = 0x2677F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677F0u;
        // 0x2677f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677F8u;
        goto label_2677f8;
    }
    ctx->pc = 0x2677F0u;
    SET_GPR_U32(ctx, 31, 0x2677F8u);
    ctx->pc = 0x2677F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677F0u;
    // 0x2677f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF20u, 0x2677F0u, 0x2677F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677F8u;
label_2677f8:
    // 0x2677f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2677fc:
    if (ctx->pc == 0x2677FCu) {
        ctx->pc = 0x2677FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677F8u;
        // 0x2677fc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267800u;
        goto label_267800;
    }
    ctx->pc = 0x2677F8u;
    {
        const bool branch_taken_0x2677f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677F8u;
        // 0x2677fc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677f8) {
            ctx->pc = 0x267848u;
            goto label_267848;
        }
    }
    ctx->pc = 0x267800u;
label_267800:
    // 0x267800: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x267800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_267804:
    // 0x267804: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x267804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_267808:
    // 0x267808: 0x40f809  jalr        $v0
label_26780c:
    if (ctx->pc == 0x26780Cu) {
        ctx->pc = 0x26780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267808u;
        // 0x26780c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267810u;
        goto label_267810;
    }
    ctx->pc = 0x267808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267810u);
        ctx->pc = 0x26780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267808u;
        // 0x26780c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267808u, 0x267810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267810u;
label_267810:
    // 0x267810: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x267810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_267814:
    // 0x267814: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x267814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_267818:
    // 0x267818: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x267818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_26781c:
    // 0x26781c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x26781cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_267820:
    // 0x267820: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x267820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_267824:
    // 0x267824: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x267824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_267828:
    // 0x267828: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x267828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_26782c:
    // 0x26782c: 0x40f809  jalr        $v0
label_267830:
    if (ctx->pc == 0x267830u) {
        ctx->pc = 0x267830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26782Cu;
        // 0x267830: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267834u;
        goto label_267834;
    }
    ctx->pc = 0x26782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267834u);
        ctx->pc = 0x267830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26782Cu;
        // 0x267830: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26782Cu, 0x267834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267834u;
label_267834:
    // 0x267834: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x267834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_267838:
    // 0x267838: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x267838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_26783c:
    // 0x26783c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_267840:
    // 0x267840: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x267840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_267844:
    // 0x267844: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x267844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_267848:
    // 0x267848: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x267848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26784c:
    // 0x26784c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26784cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_267850:
    // 0x267850: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x267850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_267854:
    // 0x267854: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x267854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_267858:
    // 0x267858: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x267858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26785c:
    // 0x26785c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26785cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_267860:
    // 0x267860: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x267860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_267864:
    // 0x267864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_267868:
    // 0x267868: 0x3e00008  jr          $ra
label_26786c:
    if (ctx->pc == 0x26786Cu) {
        ctx->pc = 0x26786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267868u;
        // 0x26786c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267870u;
        goto label_fallthrough_0x267868;
    }
    ctx->pc = 0x267868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267868u;
        // 0x26786c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x267868:
    ctx->pc = 0x267870u;
}
