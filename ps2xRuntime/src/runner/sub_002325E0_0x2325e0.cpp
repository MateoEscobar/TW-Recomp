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

// Function: sub_002325E0
// Address: 0x2325e0 - 0x232b78
void sub_002325E0_0x2325e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002325E0_0x2325e0");
#endif

    switch (ctx->pc) {
        case 0x2325e0u: goto label_2325e0;
        case 0x2325e4u: goto label_2325e4;
        case 0x2325e8u: goto label_2325e8;
        case 0x2325ecu: goto label_2325ec;
        case 0x2325f0u: goto label_2325f0;
        case 0x2325f4u: goto label_2325f4;
        case 0x2325f8u: goto label_2325f8;
        case 0x2325fcu: goto label_2325fc;
        case 0x232600u: goto label_232600;
        case 0x232604u: goto label_232604;
        case 0x232608u: goto label_232608;
        case 0x23260cu: goto label_23260c;
        case 0x232610u: goto label_232610;
        case 0x232614u: goto label_232614;
        case 0x232618u: goto label_232618;
        case 0x23261cu: goto label_23261c;
        case 0x232620u: goto label_232620;
        case 0x232624u: goto label_232624;
        case 0x232628u: goto label_232628;
        case 0x23262cu: goto label_23262c;
        case 0x232630u: goto label_232630;
        case 0x232634u: goto label_232634;
        case 0x232638u: goto label_232638;
        case 0x23263cu: goto label_23263c;
        case 0x232640u: goto label_232640;
        case 0x232644u: goto label_232644;
        case 0x232648u: goto label_232648;
        case 0x23264cu: goto label_23264c;
        case 0x232650u: goto label_232650;
        case 0x232654u: goto label_232654;
        case 0x232658u: goto label_232658;
        case 0x23265cu: goto label_23265c;
        case 0x232660u: goto label_232660;
        case 0x232664u: goto label_232664;
        case 0x232668u: goto label_232668;
        case 0x23266cu: goto label_23266c;
        case 0x232670u: goto label_232670;
        case 0x232674u: goto label_232674;
        case 0x232678u: goto label_232678;
        case 0x23267cu: goto label_23267c;
        case 0x232680u: goto label_232680;
        case 0x232684u: goto label_232684;
        case 0x232688u: goto label_232688;
        case 0x23268cu: goto label_23268c;
        case 0x232690u: goto label_232690;
        case 0x232694u: goto label_232694;
        case 0x232698u: goto label_232698;
        case 0x23269cu: goto label_23269c;
        case 0x2326a0u: goto label_2326a0;
        case 0x2326a4u: goto label_2326a4;
        case 0x2326a8u: goto label_2326a8;
        case 0x2326acu: goto label_2326ac;
        case 0x2326b0u: goto label_2326b0;
        case 0x2326b4u: goto label_2326b4;
        case 0x2326b8u: goto label_2326b8;
        case 0x2326bcu: goto label_2326bc;
        case 0x2326c0u: goto label_2326c0;
        case 0x2326c4u: goto label_2326c4;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326ccu: goto label_2326cc;
        case 0x2326d0u: goto label_2326d0;
        case 0x2326d4u: goto label_2326d4;
        case 0x2326d8u: goto label_2326d8;
        case 0x2326dcu: goto label_2326dc;
        case 0x2326e0u: goto label_2326e0;
        case 0x2326e4u: goto label_2326e4;
        case 0x2326e8u: goto label_2326e8;
        case 0x2326ecu: goto label_2326ec;
        case 0x2326f0u: goto label_2326f0;
        case 0x2326f4u: goto label_2326f4;
        case 0x2326f8u: goto label_2326f8;
        case 0x2326fcu: goto label_2326fc;
        case 0x232700u: goto label_232700;
        case 0x232704u: goto label_232704;
        case 0x232708u: goto label_232708;
        case 0x23270cu: goto label_23270c;
        case 0x232710u: goto label_232710;
        case 0x232714u: goto label_232714;
        case 0x232718u: goto label_232718;
        case 0x23271cu: goto label_23271c;
        case 0x232720u: goto label_232720;
        case 0x232724u: goto label_232724;
        case 0x232728u: goto label_232728;
        case 0x23272cu: goto label_23272c;
        case 0x232730u: goto label_232730;
        case 0x232734u: goto label_232734;
        case 0x232738u: goto label_232738;
        case 0x23273cu: goto label_23273c;
        case 0x232740u: goto label_232740;
        case 0x232744u: goto label_232744;
        case 0x232748u: goto label_232748;
        case 0x23274cu: goto label_23274c;
        case 0x232750u: goto label_232750;
        case 0x232754u: goto label_232754;
        case 0x232758u: goto label_232758;
        case 0x23275cu: goto label_23275c;
        case 0x232760u: goto label_232760;
        case 0x232764u: goto label_232764;
        case 0x232768u: goto label_232768;
        case 0x23276cu: goto label_23276c;
        case 0x232770u: goto label_232770;
        case 0x232774u: goto label_232774;
        case 0x232778u: goto label_232778;
        case 0x23277cu: goto label_23277c;
        case 0x232780u: goto label_232780;
        case 0x232784u: goto label_232784;
        case 0x232788u: goto label_232788;
        case 0x23278cu: goto label_23278c;
        case 0x232790u: goto label_232790;
        case 0x232794u: goto label_232794;
        case 0x232798u: goto label_232798;
        case 0x23279cu: goto label_23279c;
        case 0x2327a0u: goto label_2327a0;
        case 0x2327a4u: goto label_2327a4;
        case 0x2327a8u: goto label_2327a8;
        case 0x2327acu: goto label_2327ac;
        case 0x2327b0u: goto label_2327b0;
        case 0x2327b4u: goto label_2327b4;
        case 0x2327b8u: goto label_2327b8;
        case 0x2327bcu: goto label_2327bc;
        case 0x2327c0u: goto label_2327c0;
        case 0x2327c4u: goto label_2327c4;
        case 0x2327c8u: goto label_2327c8;
        case 0x2327ccu: goto label_2327cc;
        case 0x2327d0u: goto label_2327d0;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327d8u: goto label_2327d8;
        case 0x2327dcu: goto label_2327dc;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327e4u: goto label_2327e4;
        case 0x2327e8u: goto label_2327e8;
        case 0x2327ecu: goto label_2327ec;
        case 0x2327f0u: goto label_2327f0;
        case 0x2327f4u: goto label_2327f4;
        case 0x2327f8u: goto label_2327f8;
        case 0x2327fcu: goto label_2327fc;
        case 0x232800u: goto label_232800;
        case 0x232804u: goto label_232804;
        case 0x232808u: goto label_232808;
        case 0x23280cu: goto label_23280c;
        case 0x232810u: goto label_232810;
        case 0x232814u: goto label_232814;
        case 0x232818u: goto label_232818;
        case 0x23281cu: goto label_23281c;
        case 0x232820u: goto label_232820;
        case 0x232824u: goto label_232824;
        case 0x232828u: goto label_232828;
        case 0x23282cu: goto label_23282c;
        case 0x232830u: goto label_232830;
        case 0x232834u: goto label_232834;
        case 0x232838u: goto label_232838;
        case 0x23283cu: goto label_23283c;
        case 0x232840u: goto label_232840;
        case 0x232844u: goto label_232844;
        case 0x232848u: goto label_232848;
        case 0x23284cu: goto label_23284c;
        case 0x232850u: goto label_232850;
        case 0x232854u: goto label_232854;
        case 0x232858u: goto label_232858;
        case 0x23285cu: goto label_23285c;
        case 0x232860u: goto label_232860;
        case 0x232864u: goto label_232864;
        case 0x232868u: goto label_232868;
        case 0x23286cu: goto label_23286c;
        case 0x232870u: goto label_232870;
        case 0x232874u: goto label_232874;
        case 0x232878u: goto label_232878;
        case 0x23287cu: goto label_23287c;
        case 0x232880u: goto label_232880;
        case 0x232884u: goto label_232884;
        case 0x232888u: goto label_232888;
        case 0x23288cu: goto label_23288c;
        case 0x232890u: goto label_232890;
        case 0x232894u: goto label_232894;
        case 0x232898u: goto label_232898;
        case 0x23289cu: goto label_23289c;
        case 0x2328a0u: goto label_2328a0;
        case 0x2328a4u: goto label_2328a4;
        case 0x2328a8u: goto label_2328a8;
        case 0x2328acu: goto label_2328ac;
        case 0x2328b0u: goto label_2328b0;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328b8u: goto label_2328b8;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c0u: goto label_2328c0;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328d0u: goto label_2328d0;
        case 0x2328d4u: goto label_2328d4;
        case 0x2328d8u: goto label_2328d8;
        case 0x2328dcu: goto label_2328dc;
        case 0x2328e0u: goto label_2328e0;
        case 0x2328e4u: goto label_2328e4;
        case 0x2328e8u: goto label_2328e8;
        case 0x2328ecu: goto label_2328ec;
        case 0x2328f0u: goto label_2328f0;
        case 0x2328f4u: goto label_2328f4;
        case 0x2328f8u: goto label_2328f8;
        case 0x2328fcu: goto label_2328fc;
        case 0x232900u: goto label_232900;
        case 0x232904u: goto label_232904;
        case 0x232908u: goto label_232908;
        case 0x23290cu: goto label_23290c;
        case 0x232910u: goto label_232910;
        case 0x232914u: goto label_232914;
        case 0x232918u: goto label_232918;
        case 0x23291cu: goto label_23291c;
        case 0x232920u: goto label_232920;
        case 0x232924u: goto label_232924;
        case 0x232928u: goto label_232928;
        case 0x23292cu: goto label_23292c;
        case 0x232930u: goto label_232930;
        case 0x232934u: goto label_232934;
        case 0x232938u: goto label_232938;
        case 0x23293cu: goto label_23293c;
        case 0x232940u: goto label_232940;
        case 0x232944u: goto label_232944;
        case 0x232948u: goto label_232948;
        case 0x23294cu: goto label_23294c;
        case 0x232950u: goto label_232950;
        case 0x232954u: goto label_232954;
        case 0x232958u: goto label_232958;
        case 0x23295cu: goto label_23295c;
        case 0x232960u: goto label_232960;
        case 0x232964u: goto label_232964;
        case 0x232968u: goto label_232968;
        case 0x23296cu: goto label_23296c;
        case 0x232970u: goto label_232970;
        case 0x232974u: goto label_232974;
        case 0x232978u: goto label_232978;
        case 0x23297cu: goto label_23297c;
        case 0x232980u: goto label_232980;
        case 0x232984u: goto label_232984;
        case 0x232988u: goto label_232988;
        case 0x23298cu: goto label_23298c;
        case 0x232990u: goto label_232990;
        case 0x232994u: goto label_232994;
        case 0x232998u: goto label_232998;
        case 0x23299cu: goto label_23299c;
        case 0x2329a0u: goto label_2329a0;
        case 0x2329a4u: goto label_2329a4;
        case 0x2329a8u: goto label_2329a8;
        case 0x2329acu: goto label_2329ac;
        case 0x2329b0u: goto label_2329b0;
        case 0x2329b4u: goto label_2329b4;
        case 0x2329b8u: goto label_2329b8;
        case 0x2329bcu: goto label_2329bc;
        case 0x2329c0u: goto label_2329c0;
        case 0x2329c4u: goto label_2329c4;
        case 0x2329c8u: goto label_2329c8;
        case 0x2329ccu: goto label_2329cc;
        case 0x2329d0u: goto label_2329d0;
        case 0x2329d4u: goto label_2329d4;
        case 0x2329d8u: goto label_2329d8;
        case 0x2329dcu: goto label_2329dc;
        case 0x2329e0u: goto label_2329e0;
        case 0x2329e4u: goto label_2329e4;
        case 0x2329e8u: goto label_2329e8;
        case 0x2329ecu: goto label_2329ec;
        case 0x2329f0u: goto label_2329f0;
        case 0x2329f4u: goto label_2329f4;
        case 0x2329f8u: goto label_2329f8;
        case 0x2329fcu: goto label_2329fc;
        case 0x232a00u: goto label_232a00;
        case 0x232a04u: goto label_232a04;
        case 0x232a08u: goto label_232a08;
        case 0x232a0cu: goto label_232a0c;
        case 0x232a10u: goto label_232a10;
        case 0x232a14u: goto label_232a14;
        case 0x232a18u: goto label_232a18;
        case 0x232a1cu: goto label_232a1c;
        case 0x232a20u: goto label_232a20;
        case 0x232a24u: goto label_232a24;
        case 0x232a28u: goto label_232a28;
        case 0x232a2cu: goto label_232a2c;
        case 0x232a30u: goto label_232a30;
        case 0x232a34u: goto label_232a34;
        case 0x232a38u: goto label_232a38;
        case 0x232a3cu: goto label_232a3c;
        case 0x232a40u: goto label_232a40;
        case 0x232a44u: goto label_232a44;
        case 0x232a48u: goto label_232a48;
        case 0x232a4cu: goto label_232a4c;
        case 0x232a50u: goto label_232a50;
        case 0x232a54u: goto label_232a54;
        case 0x232a58u: goto label_232a58;
        case 0x232a5cu: goto label_232a5c;
        case 0x232a60u: goto label_232a60;
        case 0x232a64u: goto label_232a64;
        case 0x232a68u: goto label_232a68;
        case 0x232a6cu: goto label_232a6c;
        case 0x232a70u: goto label_232a70;
        case 0x232a74u: goto label_232a74;
        case 0x232a78u: goto label_232a78;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a80u: goto label_232a80;
        case 0x232a84u: goto label_232a84;
        case 0x232a88u: goto label_232a88;
        case 0x232a8cu: goto label_232a8c;
        case 0x232a90u: goto label_232a90;
        case 0x232a94u: goto label_232a94;
        case 0x232a98u: goto label_232a98;
        case 0x232a9cu: goto label_232a9c;
        case 0x232aa0u: goto label_232aa0;
        case 0x232aa4u: goto label_232aa4;
        case 0x232aa8u: goto label_232aa8;
        case 0x232aacu: goto label_232aac;
        case 0x232ab0u: goto label_232ab0;
        case 0x232ab4u: goto label_232ab4;
        case 0x232ab8u: goto label_232ab8;
        case 0x232abcu: goto label_232abc;
        case 0x232ac0u: goto label_232ac0;
        case 0x232ac4u: goto label_232ac4;
        case 0x232ac8u: goto label_232ac8;
        case 0x232accu: goto label_232acc;
        case 0x232ad0u: goto label_232ad0;
        case 0x232ad4u: goto label_232ad4;
        case 0x232ad8u: goto label_232ad8;
        case 0x232adcu: goto label_232adc;
        case 0x232ae0u: goto label_232ae0;
        case 0x232ae4u: goto label_232ae4;
        case 0x232ae8u: goto label_232ae8;
        case 0x232aecu: goto label_232aec;
        case 0x232af0u: goto label_232af0;
        case 0x232af4u: goto label_232af4;
        case 0x232af8u: goto label_232af8;
        case 0x232afcu: goto label_232afc;
        case 0x232b00u: goto label_232b00;
        case 0x232b04u: goto label_232b04;
        case 0x232b08u: goto label_232b08;
        case 0x232b0cu: goto label_232b0c;
        case 0x232b10u: goto label_232b10;
        case 0x232b14u: goto label_232b14;
        case 0x232b18u: goto label_232b18;
        case 0x232b1cu: goto label_232b1c;
        case 0x232b20u: goto label_232b20;
        case 0x232b24u: goto label_232b24;
        case 0x232b28u: goto label_232b28;
        case 0x232b2cu: goto label_232b2c;
        case 0x232b30u: goto label_232b30;
        case 0x232b34u: goto label_232b34;
        case 0x232b38u: goto label_232b38;
        case 0x232b3cu: goto label_232b3c;
        case 0x232b40u: goto label_232b40;
        case 0x232b44u: goto label_232b44;
        case 0x232b48u: goto label_232b48;
        case 0x232b4cu: goto label_232b4c;
        case 0x232b50u: goto label_232b50;
        case 0x232b54u: goto label_232b54;
        case 0x232b58u: goto label_232b58;
        case 0x232b5cu: goto label_232b5c;
        case 0x232b60u: goto label_232b60;
        case 0x232b64u: goto label_232b64;
        case 0x232b68u: goto label_232b68;
        case 0x232b6cu: goto label_232b6c;
        case 0x232b70u: goto label_232b70;
        case 0x232b74u: goto label_232b74;
        default: break;
    }

    ctx->pc = 0x2325e0u;

label_2325e0:
    // 0x2325e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2325e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2325e4:
    // 0x2325e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2325e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2325e8:
    // 0x2325e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2325e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2325ec:
    // 0x2325ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2325f0:
    // 0x2325f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2325f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2325f4:
    // 0x2325f4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2325f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2325f8:
    // 0x2325f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2325f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2325fc:
    // 0x2325fc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2325fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_232600:
    // 0x232600: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_232604:
    // 0x232604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232608:
    // 0x232608: 0xc089998  jal         func_226660
label_23260c:
    if (ctx->pc == 0x23260Cu) {
        ctx->pc = 0x23260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232608u;
        // 0x23260c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232610u;
        goto label_232610;
    }
    ctx->pc = 0x232608u;
    SET_GPR_U32(ctx, 31, 0x232610u);
    ctx->pc = 0x23260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232608u;
    // 0x23260c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x232608u, 0x232610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232610u;
label_232610:
    // 0x232610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_232614:
    if (ctx->pc == 0x232614u) {
        ctx->pc = 0x232618u;
        goto label_232618;
    }
    ctx->pc = 0x232610u;
    {
        const bool branch_taken_0x232610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232610) {
            ctx->pc = 0x232620u;
            goto label_232620;
        }
    }
    ctx->pc = 0x232618u;
label_232618:
    // 0x232618: 0xc08a588  jal         func_229620
label_23261c:
    if (ctx->pc == 0x23261Cu) {
        ctx->pc = 0x23261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232618u;
        // 0x23261c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232620u;
        goto label_232620;
    }
    ctx->pc = 0x232618u;
    SET_GPR_U32(ctx, 31, 0x232620u);
    ctx->pc = 0x23261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232618u;
    // 0x23261c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x232618u, 0x232620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232620u;
label_232620:
    // 0x232620: 0xc08c94e  jal         func_232538
label_232624:
    if (ctx->pc == 0x232624u) {
        ctx->pc = 0x232628u;
        goto label_232628;
    }
    ctx->pc = 0x232620u;
    SET_GPR_U32(ctx, 31, 0x232628u);
    ctx->pc = 0x232538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232538u, 0x232620u, 0x232628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232628u;
label_232628:
    // 0x232628: 0xc08bf84  jal         func_22FE10
label_23262c:
    if (ctx->pc == 0x23262Cu) {
        ctx->pc = 0x23262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232628u;
        // 0x23262c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232630u;
        goto label_232630;
    }
    ctx->pc = 0x232628u;
    SET_GPR_U32(ctx, 31, 0x232630u);
    ctx->pc = 0x23262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232628u;
    // 0x23262c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE10u, 0x232628u, 0x232630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232630u;
label_232630:
    // 0x232630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232634:
    // 0x232634: 0xc08b900  jal         func_22E400
label_232638:
    if (ctx->pc == 0x232638u) {
        ctx->pc = 0x232638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232634u;
        // 0x232638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23263Cu;
        goto label_23263c;
    }
    ctx->pc = 0x232634u;
    SET_GPR_U32(ctx, 31, 0x23263Cu);
    ctx->pc = 0x232638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232634u;
    // 0x232638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x232634u, 0x23263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23263Cu;
label_23263c:
    // 0x23263c: 0xc08cade  jal         func_232B78
label_232640:
    if (ctx->pc == 0x232640u) {
        ctx->pc = 0x232640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23263Cu;
        // 0x232640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232644u;
        goto label_232644;
    }
    ctx->pc = 0x23263Cu;
    SET_GPR_U32(ctx, 31, 0x232644u);
    ctx->pc = 0x232640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23263Cu;
    // 0x232640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x23263Cu, 0x232644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232644u;
label_232644:
    // 0x232644: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x232644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_232648:
    // 0x232648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23264c:
    // 0x23264c: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x23264cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_232650:
    // 0x232650: 0x3405e003  ori         $a1, $zero, 0xE003
    ctx->pc = 0x232650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57347);
label_232654:
    // 0x232654: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x232654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_232658:
    // 0x232658: 0x34a5c327  ori         $a1, $a1, 0xC327
    ctx->pc = 0x232658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49959);
label_23265c:
    // 0x23265c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x23265cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_232660:
    // 0x232660: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x232660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_232664:
    // 0x232664: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x232664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_232668:
    // 0x232668: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x232668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
label_23266c:
    // 0x23266c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_232670:
    // 0x232670: 0xc08997c  jal         func_2265F0
label_232674:
    if (ctx->pc == 0x232674u) {
        ctx->pc = 0x232674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232670u;
        // 0x232674: 0xae220644  sw          $v0, 0x644($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232678u;
        goto label_232678;
    }
    ctx->pc = 0x232670u;
    SET_GPR_U32(ctx, 31, 0x232678u);
    ctx->pc = 0x232674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232670u;
    // 0x232674: 0xae220644  sw          $v0, 0x644($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232670u, 0x232678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232678u;
label_232678:
    // 0x232678: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
label_23267c:
    if (ctx->pc == 0x23267Cu) {
        ctx->pc = 0x232680u;
        goto label_232680;
    }
    ctx->pc = 0x232678u;
    {
        const bool branch_taken_0x232678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232678) {
            ctx->pc = 0x232920u;
            goto label_232920;
        }
    }
    ctx->pc = 0x232680u;
label_232680:
    // 0x232680: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_232684:
    if (ctx->pc == 0x232684u) {
        ctx->pc = 0x232688u;
        goto label_232688;
    }
    ctx->pc = 0x232680u;
    {
        const bool branch_taken_0x232680 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x232680) {
            ctx->pc = 0x232690u;
            goto label_232690;
        }
    }
    ctx->pc = 0x232688u;
label_232688:
    // 0x232688: 0xc0962a2  jal         func_258A88
label_23268c:
    if (ctx->pc == 0x23268Cu) {
        ctx->pc = 0x23268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232688u;
        // 0x23268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232690u;
        goto label_232690;
    }
    ctx->pc = 0x232688u;
    SET_GPR_U32(ctx, 31, 0x232690u);
    ctx->pc = 0x23268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232688u;
    // 0x23268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x232688u, 0x232690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232690u;
label_232690:
    // 0x232690: 0xc08a014  jal         func_228050
label_232694:
    if (ctx->pc == 0x232694u) {
        ctx->pc = 0x232694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232690u;
        // 0x232694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232698u;
        goto label_232698;
    }
    ctx->pc = 0x232690u;
    SET_GPR_U32(ctx, 31, 0x232698u);
    ctx->pc = 0x232694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232690u;
    // 0x232694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x232690u, 0x232698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232698u;
label_232698:
    // 0x232698: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23269c:
    if (ctx->pc == 0x23269Cu) {
        ctx->pc = 0x2326A0u;
        goto label_2326a0;
    }
    ctx->pc = 0x232698u;
    {
        const bool branch_taken_0x232698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232698) {
            ctx->pc = 0x2326A8u;
            goto label_2326a8;
        }
    }
    ctx->pc = 0x2326A0u;
label_2326a0:
    // 0x2326a0: 0xc08b58a  jal         func_22D628
label_2326a4:
    if (ctx->pc == 0x2326A4u) {
        ctx->pc = 0x2326A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326A0u;
        // 0x2326a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326A8u;
        goto label_2326a8;
    }
    ctx->pc = 0x2326A0u;
    SET_GPR_U32(ctx, 31, 0x2326A8u);
    ctx->pc = 0x2326A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326A0u;
    // 0x2326a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x2326A0u, 0x2326A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326A8u;
label_2326a8:
    // 0x2326a8: 0xc08a00a  jal         func_228028
label_2326ac:
    if (ctx->pc == 0x2326ACu) {
        ctx->pc = 0x2326ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326A8u;
        // 0x2326ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326B0u;
        goto label_2326b0;
    }
    ctx->pc = 0x2326A8u;
    SET_GPR_U32(ctx, 31, 0x2326B0u);
    ctx->pc = 0x2326ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326A8u;
    // 0x2326ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228028u, 0x2326A8u, 0x2326B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326B0u;
label_2326b0:
    // 0x2326b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2326b4:
    if (ctx->pc == 0x2326B4u) {
        ctx->pc = 0x2326B8u;
        goto label_2326b8;
    }
    ctx->pc = 0x2326B0u;
    {
        const bool branch_taken_0x2326b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2326b0) {
            ctx->pc = 0x2326C0u;
            goto label_2326c0;
        }
    }
    ctx->pc = 0x2326B8u;
label_2326b8:
    // 0x2326b8: 0xc08b4c4  jal         func_22D310
label_2326bc:
    if (ctx->pc == 0x2326BCu) {
        ctx->pc = 0x2326BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326B8u;
        // 0x2326bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326C0u;
        goto label_2326c0;
    }
    ctx->pc = 0x2326B8u;
    SET_GPR_U32(ctx, 31, 0x2326C0u);
    ctx->pc = 0x2326BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326B8u;
    // 0x2326bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D310u, 0x2326B8u, 0x2326C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326C0u;
label_2326c0:
    // 0x2326c0: 0xc08a000  jal         func_228000
label_2326c4:
    if (ctx->pc == 0x2326C4u) {
        ctx->pc = 0x2326C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326C0u;
        // 0x2326c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326C8u;
        goto label_2326c8;
    }
    ctx->pc = 0x2326C0u;
    SET_GPR_U32(ctx, 31, 0x2326C8u);
    ctx->pc = 0x2326C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326C0u;
    // 0x2326c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228000u, 0x2326C0u, 0x2326C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326C8u;
label_2326c8:
    // 0x2326c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2326cc:
    if (ctx->pc == 0x2326CCu) {
        ctx->pc = 0x2326CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326C8u;
        // 0x2326cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326D0u;
        goto label_2326d0;
    }
    ctx->pc = 0x2326C8u;
    {
        const bool branch_taken_0x2326c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326C8u;
        // 0x2326cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326c8) {
            ctx->pc = 0x2326DCu;
            goto label_2326dc;
        }
    }
    ctx->pc = 0x2326D0u;
label_2326d0:
    // 0x2326d0: 0xc08b4e0  jal         func_22D380
label_2326d4:
    if (ctx->pc == 0x2326D4u) {
        ctx->pc = 0x2326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326D0u;
        // 0x2326d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326D8u;
        goto label_2326d8;
    }
    ctx->pc = 0x2326D0u;
    SET_GPR_U32(ctx, 31, 0x2326D8u);
    ctx->pc = 0x2326D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326D0u;
    // 0x2326d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D380u, 0x2326D0u, 0x2326D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326D8u;
label_2326d8:
    // 0x2326d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2326d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2326dc:
    // 0x2326dc: 0xc08997c  jal         func_2265F0
label_2326e0:
    if (ctx->pc == 0x2326E0u) {
        ctx->pc = 0x2326E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326DCu;
        // 0x2326e0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326E4u;
        goto label_2326e4;
    }
    ctx->pc = 0x2326DCu;
    SET_GPR_U32(ctx, 31, 0x2326E4u);
    ctx->pc = 0x2326E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326DCu;
    // 0x2326e0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2326DCu, 0x2326E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326E4u;
label_2326e4:
    // 0x2326e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2326e8:
    if (ctx->pc == 0x2326E8u) {
        ctx->pc = 0x2326E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326E4u;
        // 0x2326e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326ECu;
        goto label_2326ec;
    }
    ctx->pc = 0x2326E4u;
    {
        const bool branch_taken_0x2326e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326E4u;
        // 0x2326e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326e4) {
            ctx->pc = 0x232700u;
            goto label_232700;
        }
    }
    ctx->pc = 0x2326ECu;
label_2326ec:
    // 0x2326ec: 0xc0e409a  jal         func_390268
label_2326f0:
    if (ctx->pc == 0x2326F0u) {
        ctx->pc = 0x2326F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326ECu;
        // 0x2326f0: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326F4u;
        goto label_2326f4;
    }
    ctx->pc = 0x2326ECu;
    SET_GPR_U32(ctx, 31, 0x2326F4u);
    ctx->pc = 0x2326F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326ECu;
    // 0x2326f0: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2326ECu, 0x2326F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326F4u;
label_2326f4:
    // 0x2326f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2326f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2326f8:
    // 0x2326f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2326fc:
    if (ctx->pc == 0x2326FCu) {
        ctx->pc = 0x2326FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326F8u;
        // 0x2326fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232700u;
        goto label_232700;
    }
    ctx->pc = 0x2326F8u;
    {
        const bool branch_taken_0x2326f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326F8u;
        // 0x2326fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326f8) {
            ctx->pc = 0x232720u;
            goto label_232720;
        }
    }
    ctx->pc = 0x232700u;
label_232700:
    // 0x232700: 0xc08997c  jal         func_2265F0
label_232704:
    if (ctx->pc == 0x232704u) {
        ctx->pc = 0x232704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232700u;
        // 0x232704: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232708u;
        goto label_232708;
    }
    ctx->pc = 0x232700u;
    SET_GPR_U32(ctx, 31, 0x232708u);
    ctx->pc = 0x232704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232700u;
    // 0x232704: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232700u, 0x232708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232708u;
label_232708:
    // 0x232708: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23270c:
    if (ctx->pc == 0x23270Cu) {
        ctx->pc = 0x23270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232708u;
        // 0x23270c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232710u;
        goto label_232710;
    }
    ctx->pc = 0x232708u;
    {
        const bool branch_taken_0x232708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232708u;
        // 0x23270c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232708) {
            ctx->pc = 0x232730u;
            goto label_232730;
        }
    }
    ctx->pc = 0x232710u;
label_232710:
    // 0x232710: 0xc0e409a  jal         func_390268
label_232714:
    if (ctx->pc == 0x232714u) {
        ctx->pc = 0x232714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232710u;
        // 0x232714: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232718u;
        goto label_232718;
    }
    ctx->pc = 0x232710u;
    SET_GPR_U32(ctx, 31, 0x232718u);
    ctx->pc = 0x232714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232710u;
    // 0x232714: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232710u, 0x232718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232718u;
label_232718:
    // 0x232718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x232718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23271c:
    // 0x23271c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23271cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232720:
    // 0x232720: 0xc08b3ae  jal         func_22CEB8
label_232724:
    if (ctx->pc == 0x232724u) {
        ctx->pc = 0x232724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232720u;
        // 0x232724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232728u;
        goto label_232728;
    }
    ctx->pc = 0x232720u;
    SET_GPR_U32(ctx, 31, 0x232728u);
    ctx->pc = 0x232724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232720u;
    // 0x232724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x232720u, 0x232728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232728u;
label_232728:
    // 0x232728: 0x10000037  b           . + 4 + (0x37 << 2)
label_23272c:
    if (ctx->pc == 0x23272Cu) {
        ctx->pc = 0x23272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232728u;
        // 0x23272c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232730u;
        goto label_232730;
    }
    ctx->pc = 0x232728u;
    {
        const bool branch_taken_0x232728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232728u;
        // 0x23272c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232728) {
            ctx->pc = 0x232808u;
            goto label_232808;
        }
    }
    ctx->pc = 0x232730u;
label_232730:
    // 0x232730: 0xc08997c  jal         func_2265F0
label_232734:
    if (ctx->pc == 0x232734u) {
        ctx->pc = 0x232734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232730u;
        // 0x232734: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232738u;
        goto label_232738;
    }
    ctx->pc = 0x232730u;
    SET_GPR_U32(ctx, 31, 0x232738u);
    ctx->pc = 0x232734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232730u;
    // 0x232734: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232730u, 0x232738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232738u;
label_232738:
    // 0x232738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23273c:
    if (ctx->pc == 0x23273Cu) {
        ctx->pc = 0x232740u;
        goto label_232740;
    }
    ctx->pc = 0x232738u;
    {
        const bool branch_taken_0x232738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232738) {
            ctx->pc = 0x232750u;
            goto label_232750;
        }
    }
    ctx->pc = 0x232740u;
label_232740:
    // 0x232740: 0xc08ba12  jal         func_22E848
label_232744:
    if (ctx->pc == 0x232744u) {
        ctx->pc = 0x232744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232740u;
        // 0x232744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232748u;
        goto label_232748;
    }
    ctx->pc = 0x232740u;
    SET_GPR_U32(ctx, 31, 0x232748u);
    ctx->pc = 0x232744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232740u;
    // 0x232744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x232740u, 0x232748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232748u;
label_232748:
    // 0x232748: 0x1000002f  b           . + 4 + (0x2F << 2)
label_23274c:
    if (ctx->pc == 0x23274Cu) {
        ctx->pc = 0x23274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232748u;
        // 0x23274c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232750u;
        goto label_232750;
    }
    ctx->pc = 0x232748u;
    {
        const bool branch_taken_0x232748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232748u;
        // 0x23274c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232748) {
            ctx->pc = 0x232808u;
            goto label_232808;
        }
    }
    ctx->pc = 0x232750u;
label_232750:
    // 0x232750: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_232754:
    // 0x232754: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x232754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_232758:
    // 0x232758: 0xc08997c  jal         func_2265F0
label_23275c:
    if (ctx->pc == 0x23275Cu) {
        ctx->pc = 0x23275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232758u;
        // 0x23275c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232760u;
        goto label_232760;
    }
    ctx->pc = 0x232758u;
    SET_GPR_U32(ctx, 31, 0x232760u);
    ctx->pc = 0x23275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232758u;
    // 0x23275c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232758u, 0x232760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232760u;
label_232760:
    // 0x232760: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_232764:
    if (ctx->pc == 0x232764u) {
        ctx->pc = 0x232768u;
        goto label_232768;
    }
    ctx->pc = 0x232760u;
    {
        const bool branch_taken_0x232760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232760) {
            ctx->pc = 0x23277Cu;
            goto label_23277c;
        }
    }
    ctx->pc = 0x232768u;
label_232768:
    // 0x232768: 0xc0e409a  jal         func_390268
label_23276c:
    if (ctx->pc == 0x23276Cu) {
        ctx->pc = 0x23276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232768u;
        // 0x23276c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232770u;
        goto label_232770;
    }
    ctx->pc = 0x232768u;
    SET_GPR_U32(ctx, 31, 0x232770u);
    ctx->pc = 0x23276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232768u;
    // 0x23276c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232768u, 0x232770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232770u;
label_232770:
    // 0x232770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232774:
    // 0x232774: 0x1000000b  b           . + 4 + (0xB << 2)
label_232778:
    if (ctx->pc == 0x232778u) {
        ctx->pc = 0x232778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232774u;
        // 0x232778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23277Cu;
        goto label_23277c;
    }
    ctx->pc = 0x232774u;
    {
        const bool branch_taken_0x232774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232774u;
        // 0x232778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232774) {
            ctx->pc = 0x2327A4u;
            goto label_2327a4;
        }
    }
    ctx->pc = 0x23277Cu;
label_23277c:
    // 0x23277c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23277cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_232780:
    // 0x232780: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x232780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
label_232784:
    // 0x232784: 0xc08997c  jal         func_2265F0
label_232788:
    if (ctx->pc == 0x232788u) {
        ctx->pc = 0x232788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232784u;
        // 0x232788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23278Cu;
        goto label_23278c;
    }
    ctx->pc = 0x232784u;
    SET_GPR_U32(ctx, 31, 0x23278Cu);
    ctx->pc = 0x232788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232784u;
    // 0x232788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232784u, 0x23278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23278Cu;
label_23278c:
    // 0x23278c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_232790:
    if (ctx->pc == 0x232790u) {
        ctx->pc = 0x232790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23278Cu;
        // 0x232790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232794u;
        goto label_232794;
    }
    ctx->pc = 0x23278Cu;
    {
        const bool branch_taken_0x23278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23278Cu;
        // 0x232790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23278c) {
            ctx->pc = 0x2327B4u;
            goto label_2327b4;
        }
    }
    ctx->pc = 0x232794u;
label_232794:
    // 0x232794: 0xc0e409a  jal         func_390268
label_232798:
    if (ctx->pc == 0x232798u) {
        ctx->pc = 0x232798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232794u;
        // 0x232798: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23279Cu;
        goto label_23279c;
    }
    ctx->pc = 0x232794u;
    SET_GPR_U32(ctx, 31, 0x23279Cu);
    ctx->pc = 0x232798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232794u;
    // 0x232798: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232794u, 0x23279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23279Cu;
label_23279c:
    // 0x23279c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2327a0:
    // 0x2327a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2327a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2327a4:
    // 0x2327a4: 0xc08b47e  jal         func_22D1F8
label_2327a8:
    if (ctx->pc == 0x2327A8u) {
        ctx->pc = 0x2327A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327A4u;
        // 0x2327a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327ACu;
        goto label_2327ac;
    }
    ctx->pc = 0x2327A4u;
    SET_GPR_U32(ctx, 31, 0x2327ACu);
    ctx->pc = 0x2327A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327A4u;
    // 0x2327a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x2327A4u, 0x2327ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327ACu;
label_2327ac:
    // 0x2327ac: 0x10000016  b           . + 4 + (0x16 << 2)
label_2327b0:
    if (ctx->pc == 0x2327B0u) {
        ctx->pc = 0x2327B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327ACu;
        // 0x2327b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327B4u;
        goto label_2327b4;
    }
    ctx->pc = 0x2327ACu;
    {
        const bool branch_taken_0x2327ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327ACu;
        // 0x2327b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327ac) {
            ctx->pc = 0x232808u;
            goto label_232808;
        }
    }
    ctx->pc = 0x2327B4u;
label_2327b4:
    // 0x2327b4: 0xc08997c  jal         func_2265F0
label_2327b8:
    if (ctx->pc == 0x2327B8u) {
        ctx->pc = 0x2327B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327B4u;
        // 0x2327b8: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327BCu;
        goto label_2327bc;
    }
    ctx->pc = 0x2327B4u;
    SET_GPR_U32(ctx, 31, 0x2327BCu);
    ctx->pc = 0x2327B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327B4u;
    // 0x2327b8: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2327B4u, 0x2327BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327BCu;
label_2327bc:
    // 0x2327bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2327c0:
    if (ctx->pc == 0x2327C0u) {
        ctx->pc = 0x2327C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327BCu;
        // 0x2327c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327C4u;
        goto label_2327c4;
    }
    ctx->pc = 0x2327BCu;
    {
        const bool branch_taken_0x2327bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327BCu;
        // 0x2327c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327bc) {
            ctx->pc = 0x2327E0u;
            goto label_2327e0;
        }
    }
    ctx->pc = 0x2327C4u;
label_2327c4:
    // 0x2327c4: 0xc0e409a  jal         func_390268
label_2327c8:
    if (ctx->pc == 0x2327C8u) {
        ctx->pc = 0x2327C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327C4u;
        // 0x2327c8: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327CCu;
        goto label_2327cc;
    }
    ctx->pc = 0x2327C4u;
    SET_GPR_U32(ctx, 31, 0x2327CCu);
    ctx->pc = 0x2327C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327C4u;
    // 0x2327c8: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2327C4u, 0x2327CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327CCu;
label_2327cc:
    // 0x2327cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2327ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2327d0:
    // 0x2327d0: 0xc08b186  jal         func_22C618
label_2327d4:
    if (ctx->pc == 0x2327D4u) {
        ctx->pc = 0x2327D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327D0u;
        // 0x2327d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327D8u;
        goto label_2327d8;
    }
    ctx->pc = 0x2327D0u;
    SET_GPR_U32(ctx, 31, 0x2327D8u);
    ctx->pc = 0x2327D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327D0u;
    // 0x2327d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x2327D0u, 0x2327D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327D8u;
label_2327d8:
    // 0x2327d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2327dc:
    if (ctx->pc == 0x2327DCu) {
        ctx->pc = 0x2327DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327D8u;
        // 0x2327dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327E0u;
        goto label_2327e0;
    }
    ctx->pc = 0x2327D8u;
    {
        const bool branch_taken_0x2327d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327D8u;
        // 0x2327dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327d8) {
            ctx->pc = 0x232808u;
            goto label_232808;
        }
    }
    ctx->pc = 0x2327E0u;
label_2327e0:
    // 0x2327e0: 0xc08997c  jal         func_2265F0
label_2327e4:
    if (ctx->pc == 0x2327E4u) {
        ctx->pc = 0x2327E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327E0u;
        // 0x2327e4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327E8u;
        goto label_2327e8;
    }
    ctx->pc = 0x2327E0u;
    SET_GPR_U32(ctx, 31, 0x2327E8u);
    ctx->pc = 0x2327E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E0u;
    // 0x2327e4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2327E0u, 0x2327E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327E8u;
label_2327e8:
    // 0x2327e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2327ec:
    if (ctx->pc == 0x2327ECu) {
        ctx->pc = 0x2327ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327E8u;
        // 0x2327ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327F0u;
        goto label_2327f0;
    }
    ctx->pc = 0x2327E8u;
    {
        const bool branch_taken_0x2327e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327E8u;
        // 0x2327ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327e8) {
            ctx->pc = 0x232808u;
            goto label_232808;
        }
    }
    ctx->pc = 0x2327F0u;
label_2327f0:
    // 0x2327f0: 0xc0e409a  jal         func_390268
label_2327f4:
    if (ctx->pc == 0x2327F4u) {
        ctx->pc = 0x2327F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327F0u;
        // 0x2327f4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327F8u;
        goto label_2327f8;
    }
    ctx->pc = 0x2327F0u;
    SET_GPR_U32(ctx, 31, 0x2327F8u);
    ctx->pc = 0x2327F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327F0u;
    // 0x2327f4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2327F0u, 0x2327F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327F8u;
label_2327f8:
    // 0x2327f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2327f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2327fc:
    // 0x2327fc: 0xc08b186  jal         func_22C618
label_232800:
    if (ctx->pc == 0x232800u) {
        ctx->pc = 0x232800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327FCu;
        // 0x232800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232804u;
        goto label_232804;
    }
    ctx->pc = 0x2327FCu;
    SET_GPR_U32(ctx, 31, 0x232804u);
    ctx->pc = 0x232800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327FCu;
    // 0x232800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x2327FCu, 0x232804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232804u;
label_232804:
    // 0x232804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232808:
    // 0x232808: 0xc08997c  jal         func_2265F0
label_23280c:
    if (ctx->pc == 0x23280Cu) {
        ctx->pc = 0x23280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232808u;
        // 0x23280c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232810u;
        goto label_232810;
    }
    ctx->pc = 0x232808u;
    SET_GPR_U32(ctx, 31, 0x232810u);
    ctx->pc = 0x23280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232808u;
    // 0x23280c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232808u, 0x232810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232810u;
label_232810:
    // 0x232810: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_232814:
    if (ctx->pc == 0x232814u) {
        ctx->pc = 0x232814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232810u;
        // 0x232814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232818u;
        goto label_232818;
    }
    ctx->pc = 0x232810u;
    {
        const bool branch_taken_0x232810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232810u;
        // 0x232814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232810) {
            ctx->pc = 0x232834u;
            goto label_232834;
        }
    }
    ctx->pc = 0x232818u;
label_232818:
    // 0x232818: 0xc0e409a  jal         func_390268
label_23281c:
    if (ctx->pc == 0x23281Cu) {
        ctx->pc = 0x23281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232818u;
        // 0x23281c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232820u;
        goto label_232820;
    }
    ctx->pc = 0x232818u;
    SET_GPR_U32(ctx, 31, 0x232820u);
    ctx->pc = 0x23281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232818u;
    // 0x23281c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232818u, 0x232820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232820u;
label_232820:
    // 0x232820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x232820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232824:
    // 0x232824: 0xc08b0e2  jal         func_22C388
label_232828:
    if (ctx->pc == 0x232828u) {
        ctx->pc = 0x232828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232824u;
        // 0x232828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23282Cu;
        goto label_23282c;
    }
    ctx->pc = 0x232824u;
    SET_GPR_U32(ctx, 31, 0x23282Cu);
    ctx->pc = 0x232828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232824u;
    // 0x232828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x232824u, 0x23282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23282Cu;
label_23282c:
    // 0x23282c: 0x10000028  b           . + 4 + (0x28 << 2)
label_232830:
    if (ctx->pc == 0x232830u) {
        ctx->pc = 0x232830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23282Cu;
        // 0x232830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232834u;
        goto label_232834;
    }
    ctx->pc = 0x23282Cu;
    {
        const bool branch_taken_0x23282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23282Cu;
        // 0x232830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23282c) {
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x232834u;
label_232834:
    // 0x232834: 0xc08997c  jal         func_2265F0
label_232838:
    if (ctx->pc == 0x232838u) {
        ctx->pc = 0x232838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232834u;
        // 0x232838: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23283Cu;
        goto label_23283c;
    }
    ctx->pc = 0x232834u;
    SET_GPR_U32(ctx, 31, 0x23283Cu);
    ctx->pc = 0x232838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232834u;
    // 0x232838: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232834u, 0x23283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23283Cu;
label_23283c:
    // 0x23283c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_232840:
    if (ctx->pc == 0x232840u) {
        ctx->pc = 0x232840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23283Cu;
        // 0x232840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232844u;
        goto label_232844;
    }
    ctx->pc = 0x23283Cu;
    {
        const bool branch_taken_0x23283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23283Cu;
        // 0x232840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23283c) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x232844u;
label_232844:
    // 0x232844: 0xc0e409a  jal         func_390268
label_232848:
    if (ctx->pc == 0x232848u) {
        ctx->pc = 0x232848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232844u;
        // 0x232848: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23284Cu;
        goto label_23284c;
    }
    ctx->pc = 0x232844u;
    SET_GPR_U32(ctx, 31, 0x23284Cu);
    ctx->pc = 0x232848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232844u;
    // 0x232848: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232844u, 0x23284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23284Cu;
label_23284c:
    // 0x23284c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232850:
    // 0x232850: 0xc08b0e2  jal         func_22C388
label_232854:
    if (ctx->pc == 0x232854u) {
        ctx->pc = 0x232854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232850u;
        // 0x232854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232858u;
        goto label_232858;
    }
    ctx->pc = 0x232850u;
    SET_GPR_U32(ctx, 31, 0x232858u);
    ctx->pc = 0x232854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232850u;
    // 0x232854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x232850u, 0x232858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232858u;
label_232858:
    // 0x232858: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23285c:
    if (ctx->pc == 0x23285Cu) {
        ctx->pc = 0x23285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232858u;
        // 0x23285c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232860u;
        goto label_232860;
    }
    ctx->pc = 0x232858u;
    {
        const bool branch_taken_0x232858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232858u;
        // 0x23285c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232858) {
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x232860u;
label_232860:
    // 0x232860: 0xc08997c  jal         func_2265F0
label_232864:
    if (ctx->pc == 0x232864u) {
        ctx->pc = 0x232864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232860u;
        // 0x232864: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232868u;
        goto label_232868;
    }
    ctx->pc = 0x232860u;
    SET_GPR_U32(ctx, 31, 0x232868u);
    ctx->pc = 0x232864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232860u;
    // 0x232864: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232860u, 0x232868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232868u;
label_232868:
    // 0x232868: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_23286c:
    if (ctx->pc == 0x23286Cu) {
        ctx->pc = 0x23286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232868u;
        // 0x23286c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232870u;
        goto label_232870;
    }
    ctx->pc = 0x232868u;
    {
        const bool branch_taken_0x232868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232868) {
            ctx->pc = 0x23286Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232868u;
            // 0x23286c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232898u;
            goto label_232898;
        }
    }
    ctx->pc = 0x232870u;
label_232870:
    // 0x232870: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_232874:
    // 0x232874: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_232878:
    // 0x232878: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_23287c:
    // 0x23287c: 0x40f809  jalr        $v0
label_232880:
    if (ctx->pc == 0x232880u) {
        ctx->pc = 0x232880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23287Cu;
        // 0x232880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232884u;
        goto label_232884;
    }
    ctx->pc = 0x23287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232884u);
        ctx->pc = 0x232880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23287Cu;
        // 0x232880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23287Cu, 0x232884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232884u;
label_232884:
    // 0x232884: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_232888:
    // 0x232888: 0xc08cafa  jal         func_232BE8
label_23288c:
    if (ctx->pc == 0x23288Cu) {
        ctx->pc = 0x23288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232888u;
        // 0x23288c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232890u;
        goto label_232890;
    }
    ctx->pc = 0x232888u;
    SET_GPR_U32(ctx, 31, 0x232890u);
    ctx->pc = 0x23288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232888u;
    // 0x23288c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232BE8u, 0x232888u, 0x232890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232890u;
label_232890:
    // 0x232890: 0x1000000f  b           . + 4 + (0xF << 2)
label_232894:
    if (ctx->pc == 0x232894u) {
        ctx->pc = 0x232894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232890u;
        // 0x232894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232898u;
        goto label_232898;
    }
    ctx->pc = 0x232890u;
    {
        const bool branch_taken_0x232890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232890u;
        // 0x232894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232890) {
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x232898u;
label_232898:
    // 0x232898: 0xc08997c  jal         func_2265F0
label_23289c:
    if (ctx->pc == 0x23289Cu) {
        ctx->pc = 0x23289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232898u;
        // 0x23289c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328A0u;
        goto label_2328a0;
    }
    ctx->pc = 0x232898u;
    SET_GPR_U32(ctx, 31, 0x2328A0u);
    ctx->pc = 0x23289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232898u;
    // 0x23289c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232898u, 0x2328A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328A0u;
label_2328a0:
    // 0x2328a0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2328a4:
    if (ctx->pc == 0x2328A4u) {
        ctx->pc = 0x2328A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328A0u;
        // 0x2328a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328A8u;
        goto label_2328a8;
    }
    ctx->pc = 0x2328A0u;
    {
        const bool branch_taken_0x2328a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328a0) {
            ctx->pc = 0x2328A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2328A0u;
            // 0x2328a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x2328A8u;
label_2328a8:
    // 0x2328a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2328a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2328ac:
    // 0x2328ac: 0x8e3000c4  lw          $s0, 0xC4($s1)
    ctx->pc = 0x2328acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2328b0:
    // 0x2328b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2328b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2328b4:
    // 0x2328b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2328b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2328b8:
    // 0x2328b8: 0x40f809  jalr        $v0
label_2328bc:
    if (ctx->pc == 0x2328BCu) {
        ctx->pc = 0x2328BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328B8u;
        // 0x2328bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328C0u;
        goto label_2328c0;
    }
    ctx->pc = 0x2328B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2328C0u);
        ctx->pc = 0x2328BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328B8u;
        // 0x2328bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2328B8u, 0x2328C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2328C0u;
label_2328c0:
    // 0x2328c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2328c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2328c4:
    // 0x2328c4: 0xc08cafa  jal         func_232BE8
label_2328c8:
    if (ctx->pc == 0x2328C8u) {
        ctx->pc = 0x2328C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328C4u;
        // 0x2328c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328CCu;
        goto label_2328cc;
    }
    ctx->pc = 0x2328C4u;
    SET_GPR_U32(ctx, 31, 0x2328CCu);
    ctx->pc = 0x2328C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328C4u;
    // 0x2328c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232BE8u, 0x2328C4u, 0x2328CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328CCu;
label_2328cc:
    // 0x2328cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2328ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2328d0:
    // 0x2328d0: 0xc08997c  jal         func_2265F0
label_2328d4:
    if (ctx->pc == 0x2328D4u) {
        ctx->pc = 0x2328D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328D0u;
        // 0x2328d4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328D8u;
        goto label_2328d8;
    }
    ctx->pc = 0x2328D0u;
    SET_GPR_U32(ctx, 31, 0x2328D8u);
    ctx->pc = 0x2328D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328D0u;
    // 0x2328d4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2328D0u, 0x2328D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328D8u;
label_2328d8:
    // 0x2328d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2328dc:
    if (ctx->pc == 0x2328DCu) {
        ctx->pc = 0x2328DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328D8u;
        // 0x2328dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328E0u;
        goto label_2328e0;
    }
    ctx->pc = 0x2328D8u;
    {
        const bool branch_taken_0x2328d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328D8u;
        // 0x2328dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328d8) {
            ctx->pc = 0x2328ECu;
            goto label_2328ec;
        }
    }
    ctx->pc = 0x2328E0u;
label_2328e0:
    // 0x2328e0: 0xc08bf00  jal         func_22FC00
label_2328e4:
    if (ctx->pc == 0x2328E4u) {
        ctx->pc = 0x2328E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328E0u;
        // 0x2328e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328E8u;
        goto label_2328e8;
    }
    ctx->pc = 0x2328E0u;
    SET_GPR_U32(ctx, 31, 0x2328E8u);
    ctx->pc = 0x2328E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328E0u;
    // 0x2328e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FC00u, 0x2328E0u, 0x2328E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328E8u;
label_2328e8:
    // 0x2328e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2328e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2328ec:
    // 0x2328ec: 0xc08997c  jal         func_2265F0
label_2328f0:
    if (ctx->pc == 0x2328F0u) {
        ctx->pc = 0x2328F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328ECu;
        // 0x2328f0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328F4u;
        goto label_2328f4;
    }
    ctx->pc = 0x2328ECu;
    SET_GPR_U32(ctx, 31, 0x2328F4u);
    ctx->pc = 0x2328F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328ECu;
    // 0x2328f0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2328ECu, 0x2328F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328F4u;
label_2328f4:
    // 0x2328f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2328f8:
    if (ctx->pc == 0x2328F8u) {
        ctx->pc = 0x2328F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328F4u;
        // 0x2328f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328FCu;
        goto label_2328fc;
    }
    ctx->pc = 0x2328F4u;
    {
        const bool branch_taken_0x2328f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328F4u;
        // 0x2328f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328f4) {
            ctx->pc = 0x232908u;
            goto label_232908;
        }
    }
    ctx->pc = 0x2328FCu;
label_2328fc:
    // 0x2328fc: 0xc08bcf2  jal         func_22F3C8
label_232900:
    if (ctx->pc == 0x232900u) {
        ctx->pc = 0x232900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328FCu;
        // 0x232900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232904u;
        goto label_232904;
    }
    ctx->pc = 0x2328FCu;
    SET_GPR_U32(ctx, 31, 0x232904u);
    ctx->pc = 0x232900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328FCu;
    // 0x232900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x2328FCu, 0x232904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232904u;
label_232904:
    // 0x232904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232908:
    // 0x232908: 0xc08997c  jal         func_2265F0
label_23290c:
    if (ctx->pc == 0x23290Cu) {
        ctx->pc = 0x23290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232908u;
        // 0x23290c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232910u;
        goto label_232910;
    }
    ctx->pc = 0x232908u;
    SET_GPR_U32(ctx, 31, 0x232910u);
    ctx->pc = 0x23290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232908u;
    // 0x23290c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232908u, 0x232910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232910u;
label_232910:
    // 0x232910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_232914:
    if (ctx->pc == 0x232914u) {
        ctx->pc = 0x232918u;
        goto label_232918;
    }
    ctx->pc = 0x232910u;
    {
        const bool branch_taken_0x232910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232910) {
            ctx->pc = 0x232920u;
            goto label_232920;
        }
    }
    ctx->pc = 0x232918u;
label_232918:
    // 0x232918: 0xc08be36  jal         func_22F8D8
label_23291c:
    if (ctx->pc == 0x23291Cu) {
        ctx->pc = 0x23291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232918u;
        // 0x23291c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232920u;
        goto label_232920;
    }
    ctx->pc = 0x232918u;
    SET_GPR_U32(ctx, 31, 0x232920u);
    ctx->pc = 0x23291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232918u;
    // 0x23291c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x232918u, 0x232920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232920u;
label_232920:
    // 0x232920: 0xc08c68e  jal         func_231A38
label_232924:
    if (ctx->pc == 0x232924u) {
        ctx->pc = 0x232924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232920u;
        // 0x232924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232928u;
        goto label_232928;
    }
    ctx->pc = 0x232920u;
    SET_GPR_U32(ctx, 31, 0x232928u);
    ctx->pc = 0x232924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232920u;
    // 0x232924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x232920u, 0x232928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232928u;
label_232928:
    // 0x232928: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_23292c:
    // 0x23292c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_232930:
    if (ctx->pc == 0x232930u) {
        ctx->pc = 0x232934u;
        goto label_232934;
    }
    ctx->pc = 0x23292Cu;
    {
        const bool branch_taken_0x23292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23292c) {
            ctx->pc = 0x232948u;
            goto label_232948;
        }
    }
    ctx->pc = 0x232934u;
label_232934:
    // 0x232934: 0xc08c68e  jal         func_231A38
label_232938:
    if (ctx->pc == 0x232938u) {
        ctx->pc = 0x232938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232934u;
        // 0x232938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23293Cu;
        goto label_23293c;
    }
    ctx->pc = 0x232934u;
    SET_GPR_U32(ctx, 31, 0x23293Cu);
    ctx->pc = 0x232938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232934u;
    // 0x232938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x232934u, 0x23293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23293Cu;
label_23293c:
    // 0x23293c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_232940:
    // 0x232940: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_232944:
    if (ctx->pc == 0x232944u) {
        ctx->pc = 0x232944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232940u;
        // 0x232944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232948u;
        goto label_232948;
    }
    ctx->pc = 0x232940u;
    {
        const bool branch_taken_0x232940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232940) {
            ctx->pc = 0x232944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232940u;
            // 0x232944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232954u;
            goto label_232954;
        }
    }
    ctx->pc = 0x232948u;
label_232948:
    // 0x232948: 0xc095fce  jal         func_257F38
label_23294c:
    if (ctx->pc == 0x23294Cu) {
        ctx->pc = 0x23294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232948u;
        // 0x23294c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232950u;
        goto label_232950;
    }
    ctx->pc = 0x232948u;
    SET_GPR_U32(ctx, 31, 0x232950u);
    ctx->pc = 0x23294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232948u;
    // 0x23294c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x232948u, 0x232950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232950u;
label_232950:
    // 0x232950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232954:
    // 0x232954: 0xc093390  jal         func_24CE40
label_232958:
    if (ctx->pc == 0x232958u) {
        ctx->pc = 0x232958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232954u;
        // 0x232958: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23295Cu;
        goto label_23295c;
    }
    ctx->pc = 0x232954u;
    SET_GPR_U32(ctx, 31, 0x23295Cu);
    ctx->pc = 0x232958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232954u;
    // 0x232958: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x232954u, 0x23295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23295Cu;
label_23295c:
    // 0x23295c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x23295cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232960:
    // 0x232960: 0xc08bfbc  jal         func_22FEF0
label_232964:
    if (ctx->pc == 0x232964u) {
        ctx->pc = 0x232964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232960u;
        // 0x232964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232968u;
        goto label_232968;
    }
    ctx->pc = 0x232960u;
    SET_GPR_U32(ctx, 31, 0x232968u);
    ctx->pc = 0x232964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232960u;
    // 0x232964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x232960u, 0x232968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232968u;
label_232968:
    // 0x232968: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23296c:
    // 0x23296c: 0xc0e409a  jal         func_390268
label_232970:
    if (ctx->pc == 0x232970u) {
        ctx->pc = 0x232970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23296Cu;
        // 0x232970: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232974u;
        goto label_232974;
    }
    ctx->pc = 0x23296Cu;
    SET_GPR_U32(ctx, 31, 0x232974u);
    ctx->pc = 0x232970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23296Cu;
    // 0x232970: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23296Cu, 0x232974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232974u;
label_232974:
    // 0x232974: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x232974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_232978:
    // 0x232978: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x232978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23297c:
    // 0x23297c: 0xc0e409a  jal         func_390268
label_232980:
    if (ctx->pc == 0x232980u) {
        ctx->pc = 0x232980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23297Cu;
        // 0x232980: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232984u;
        goto label_232984;
    }
    ctx->pc = 0x23297Cu;
    SET_GPR_U32(ctx, 31, 0x232984u);
    ctx->pc = 0x232980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23297Cu;
    // 0x232980: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23297Cu, 0x232984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232984u;
label_232984:
    // 0x232984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232988:
    // 0x232988: 0x3c0141ef  lui         $at, 0x41EF
    ctx->pc = 0x232988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16879 << 16));
label_23298c:
    // 0x23298c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x23298cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_232990:
    // 0x232990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232994:
    // 0x232994: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x232994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_232998:
    // 0x232998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x232998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23299c:
    // 0x23299c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23299cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2329a0:
    // 0x2329a0: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x2329a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2329a4:
    // 0x2329a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2329a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2329a8:
    // 0x2329a8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2329a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2329ac:
    // 0x2329ac: 0x0  nop
    ctx->pc = 0x2329acu;
    // NOP
label_2329b0:
    // 0x2329b0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2329b4:
    if (ctx->pc == 0x2329B4u) {
        ctx->pc = 0x2329B8u;
        goto label_2329b8;
    }
    ctx->pc = 0x2329B0u;
    {
        const bool branch_taken_0x2329b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2329b0) {
            ctx->pc = 0x2329E0u;
            goto label_2329e0;
        }
    }
    ctx->pc = 0x2329B8u;
label_2329b8:
    // 0x2329b8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2329bc:
    if (ctx->pc == 0x2329BCu) {
        ctx->pc = 0x2329C0u;
        goto label_2329c0;
    }
    ctx->pc = 0x2329B8u;
    {
        const bool branch_taken_0x2329b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329b8) {
            ctx->pc = 0x2329CCu;
            goto label_2329cc;
        }
    }
    ctx->pc = 0x2329C0u;
label_2329c0:
    // 0x2329c0: 0x924203bb  lbu         $v0, 0x3BB($s2)
    ctx->pc = 0x2329c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 955)));
label_2329c4:
    // 0x2329c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2329c8:
    if (ctx->pc == 0x2329C8u) {
        ctx->pc = 0x2329CCu;
        goto label_2329cc;
    }
    ctx->pc = 0x2329C4u;
    {
        const bool branch_taken_0x2329c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2329c4) {
            ctx->pc = 0x2329E0u;
            goto label_2329e0;
        }
    }
    ctx->pc = 0x2329CCu;
label_2329cc:
    // 0x2329cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2329d0:
    if (ctx->pc == 0x2329D0u) {
        ctx->pc = 0x2329D4u;
        goto label_2329d4;
    }
    ctx->pc = 0x2329CCu;
    {
        const bool branch_taken_0x2329cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329cc) {
            ctx->pc = 0x232A08u;
            goto label_232a08;
        }
    }
    ctx->pc = 0x2329D4u;
label_2329d4:
    // 0x2329d4: 0x920203bb  lbu         $v0, 0x3BB($s0)
    ctx->pc = 0x2329d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 955)));
label_2329d8:
    // 0x2329d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2329dc:
    if (ctx->pc == 0x2329DCu) {
        ctx->pc = 0x2329E0u;
        goto label_2329e0;
    }
    ctx->pc = 0x2329D8u;
    {
        const bool branch_taken_0x2329d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329d8) {
            ctx->pc = 0x232A08u;
            goto label_232a08;
        }
    }
    ctx->pc = 0x2329E0u;
label_2329e0:
    // 0x2329e0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2329e4:
    if (ctx->pc == 0x2329E4u) {
        ctx->pc = 0x2329E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329E0u;
        // 0x2329e4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2329E8u;
        goto label_2329e8;
    }
    ctx->pc = 0x2329E0u;
    {
        const bool branch_taken_0x2329e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329E0u;
        // 0x2329e4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329e0) {
            ctx->pc = 0x2329F4u;
            goto label_2329f4;
        }
    }
    ctx->pc = 0x2329E8u;
label_2329e8:
    // 0x2329e8: 0xc106ad8  jal         func_41AB60
label_2329ec:
    if (ctx->pc == 0x2329ECu) {
        ctx->pc = 0x2329ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329E8u;
        // 0x2329ec: 0x824501b0  lb          $a1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2329F0u;
        goto label_2329f0;
    }
    ctx->pc = 0x2329E8u;
    SET_GPR_U32(ctx, 31, 0x2329F0u);
    ctx->pc = 0x2329ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329E8u;
    // 0x2329ec: 0x824501b0  lb          $a1, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x2329E8u, 0x2329F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329F0u;
label_2329f0:
    // 0x2329f0: 0xa24003bb  sb          $zero, 0x3BB($s2)
    ctx->pc = 0x2329f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 955), (uint8_t)GPR_U32(ctx, 0));
label_2329f4:
    // 0x2329f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2329f8:
    if (ctx->pc == 0x2329F8u) {
        ctx->pc = 0x2329F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329F4u;
        // 0x2329f8: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2329FCu;
        goto label_2329fc;
    }
    ctx->pc = 0x2329F4u;
    {
        const bool branch_taken_0x2329f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329F4u;
        // 0x2329f8: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329f4) {
            ctx->pc = 0x232A08u;
            goto label_232a08;
        }
    }
    ctx->pc = 0x2329FCu;
label_2329fc:
    // 0x2329fc: 0xc106ad8  jal         func_41AB60
label_232a00:
    if (ctx->pc == 0x232A00u) {
        ctx->pc = 0x232A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329FCu;
        // 0x232a00: 0x820501b0  lb          $a1, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A04u;
        goto label_232a04;
    }
    ctx->pc = 0x2329FCu;
    SET_GPR_U32(ctx, 31, 0x232A04u);
    ctx->pc = 0x232A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329FCu;
    // 0x232a00: 0x820501b0  lb          $a1, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x2329FCu, 0x232A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A04u;
label_232a04:
    // 0x232a04: 0xa20003bb  sb          $zero, 0x3BB($s0)
    ctx->pc = 0x232a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 955), (uint8_t)GPR_U32(ctx, 0));
label_232a08:
    // 0x232a08: 0x12800051  beqz        $s4, . + 4 + (0x51 << 2)
label_232a0c:
    if (ctx->pc == 0x232A0Cu) {
        ctx->pc = 0x232A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A08u;
        // 0x232a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A10u;
        goto label_232a10;
    }
    ctx->pc = 0x232A08u;
    {
        const bool branch_taken_0x232a08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A08u;
        // 0x232a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a08) {
            ctx->pc = 0x232B50u;
            goto label_232b50;
        }
    }
    ctx->pc = 0x232A10u;
label_232a10:
    // 0x232a10: 0xc089f86  jal         func_227E18
label_232a14:
    if (ctx->pc == 0x232A14u) {
        ctx->pc = 0x232A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A10u;
        // 0x232a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A18u;
        goto label_232a18;
    }
    ctx->pc = 0x232A10u;
    SET_GPR_U32(ctx, 31, 0x232A18u);
    ctx->pc = 0x232A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A10u;
    // 0x232a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x232A10u, 0x232A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A18u;
label_232a18:
    // 0x232a18: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_232a1c:
    if (ctx->pc == 0x232A1Cu) {
        ctx->pc = 0x232A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A18u;
        // 0x232a1c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A20u;
        goto label_232a20;
    }
    ctx->pc = 0x232A18u;
    {
        const bool branch_taken_0x232a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a18) {
            ctx->pc = 0x232A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232A18u;
            // 0x232a1c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232A34u;
            goto label_232a34;
        }
    }
    ctx->pc = 0x232A20u;
label_232a20:
    // 0x232a20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x232a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_232a24:
    // 0x232a24: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x232a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_232a28:
    // 0x232a28: 0xc089988  jal         func_226620
label_232a2c:
    if (ctx->pc == 0x232A2Cu) {
        ctx->pc = 0x232A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A28u;
        // 0x232a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A30u;
        goto label_232a30;
    }
    ctx->pc = 0x232A28u;
    SET_GPR_U32(ctx, 31, 0x232A30u);
    ctx->pc = 0x232A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A28u;
    // 0x232a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x232A28u, 0x232A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A30u;
label_232a30:
    // 0x232a30: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_232a34:
    // 0x232a34: 0x84830144  lh          $v1, 0x144($a0)
    ctx->pc = 0x232a34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 324)));
label_232a38:
    // 0x232a38: 0x84820118  lh          $v0, 0x118($a0)
    ctx->pc = 0x232a38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
label_232a3c:
    // 0x232a3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x232a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_232a40:
    // 0x232a40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_232a44:
    if (ctx->pc == 0x232A44u) {
        ctx->pc = 0x232A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A40u;
        // 0x232a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A48u;
        goto label_232a48;
    }
    ctx->pc = 0x232A40u;
    {
        const bool branch_taken_0x232a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A40u;
        // 0x232a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a40) {
            ctx->pc = 0x232A54u;
            goto label_232a54;
        }
    }
    ctx->pc = 0x232A48u;
label_232a48:
    // 0x232a48: 0xa4820144  sh          $v0, 0x144($a0)
    ctx->pc = 0x232a48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 324), (uint16_t)GPR_U32(ctx, 2));
label_232a4c:
    // 0x232a4c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x232a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_232a50:
    // 0x232a50: 0xa4600118  sh          $zero, 0x118($v1)
    ctx->pc = 0x232a50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
label_232a54:
    // 0x232a54: 0xc089fe4  jal         func_227F90
label_232a58:
    if (ctx->pc == 0x232A58u) {
        ctx->pc = 0x232A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A54u;
        // 0x232a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A5Cu;
        goto label_232a5c;
    }
    ctx->pc = 0x232A54u;
    SET_GPR_U32(ctx, 31, 0x232A5Cu);
    ctx->pc = 0x232A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A54u;
    // 0x232a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x232A54u, 0x232A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A5Cu;
label_232a5c:
    // 0x232a5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_232a60:
    if (ctx->pc == 0x232A60u) {
        ctx->pc = 0x232A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A5Cu;
        // 0x232a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A64u;
        goto label_232a64;
    }
    ctx->pc = 0x232A5Cu;
    {
        const bool branch_taken_0x232a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A5Cu;
        // 0x232a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a5c) {
            ctx->pc = 0x232A6Cu;
            goto label_232a6c;
        }
    }
    ctx->pc = 0x232A64u;
label_232a64:
    // 0x232a64: 0xc0e8870  jal         func_3A21C0
label_232a68:
    if (ctx->pc == 0x232A68u) {
        ctx->pc = 0x232A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A64u;
        // 0x232a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A6Cu;
        goto label_232a6c;
    }
    ctx->pc = 0x232A64u;
    SET_GPR_U32(ctx, 31, 0x232A6Cu);
    ctx->pc = 0x232A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A64u;
    // 0x232a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A21C0u, 0x232A64u, 0x232A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A6Cu;
label_232a6c:
    // 0x232a6c: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x232a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_232a70:
    // 0x232a70: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x232a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
label_232a74:
    // 0x232a74: 0xc089988  jal         func_226620
label_232a78:
    if (ctx->pc == 0x232A78u) {
        ctx->pc = 0x232A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A74u;
        // 0x232a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A7Cu;
        goto label_232a7c;
    }
    ctx->pc = 0x232A74u;
    SET_GPR_U32(ctx, 31, 0x232A7Cu);
    ctx->pc = 0x232A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A74u;
    // 0x232a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x232A74u, 0x232A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A7Cu;
label_232a7c:
    // 0x232a7c: 0xc088f04  jal         func_223C10
label_232a80:
    if (ctx->pc == 0x232A80u) {
        ctx->pc = 0x232A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A7Cu;
        // 0x232a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A84u;
        goto label_232a84;
    }
    ctx->pc = 0x232A7Cu;
    SET_GPR_U32(ctx, 31, 0x232A84u);
    ctx->pc = 0x232A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A7Cu;
    // 0x232a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x232A7Cu, 0x232A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A84u;
label_232a84:
    // 0x232a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_232a88:
    if (ctx->pc == 0x232A88u) {
        ctx->pc = 0x232A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A84u;
        // 0x232a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A8Cu;
        goto label_232a8c;
    }
    ctx->pc = 0x232A84u;
    {
        const bool branch_taken_0x232a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A84u;
        // 0x232a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a84) {
            ctx->pc = 0x232A98u;
            goto label_232a98;
        }
    }
    ctx->pc = 0x232A8Cu;
label_232a8c:
    // 0x232a8c: 0xc0a04da  jal         func_281368
label_232a90:
    if (ctx->pc == 0x232A90u) {
        ctx->pc = 0x232A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A8Cu;
        // 0x232a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A94u;
        goto label_232a94;
    }
    ctx->pc = 0x232A8Cu;
    SET_GPR_U32(ctx, 31, 0x232A94u);
    ctx->pc = 0x232A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A8Cu;
    // 0x232a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281368u, 0x232A8Cu, 0x232A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A94u;
label_232a94:
    // 0x232a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232a98:
    // 0x232a98: 0xc089998  jal         func_226660
label_232a9c:
    if (ctx->pc == 0x232A9Cu) {
        ctx->pc = 0x232A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A98u;
        // 0x232a9c: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AA0u;
        goto label_232aa0;
    }
    ctx->pc = 0x232A98u;
    SET_GPR_U32(ctx, 31, 0x232AA0u);
    ctx->pc = 0x232A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A98u;
    // 0x232a9c: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x232A98u, 0x232AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AA0u;
label_232aa0:
    // 0x232aa0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_232aa4:
    if (ctx->pc == 0x232AA4u) {
        ctx->pc = 0x232AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AA0u;
        // 0x232aa4: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AA8u;
        goto label_232aa8;
    }
    ctx->pc = 0x232AA0u;
    {
        const bool branch_taken_0x232aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232aa0) {
            ctx->pc = 0x232AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AA0u;
            // 0x232aa4: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232AFCu;
            goto label_232afc;
        }
    }
    ctx->pc = 0x232AA8u;
label_232aa8:
    // 0x232aa8: 0xc089c18  jal         func_227060
label_232aac:
    if (ctx->pc == 0x232AACu) {
        ctx->pc = 0x232AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AA8u;
        // 0x232aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AB0u;
        goto label_232ab0;
    }
    ctx->pc = 0x232AA8u;
    SET_GPR_U32(ctx, 31, 0x232AB0u);
    ctx->pc = 0x232AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AA8u;
    // 0x232aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x232AA8u, 0x232AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AB0u;
label_232ab0:
    // 0x232ab0: 0xc0e57ce  jal         func_395F38
label_232ab4:
    if (ctx->pc == 0x232AB4u) {
        ctx->pc = 0x232AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AB0u;
        // 0x232ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AB8u;
        goto label_232ab8;
    }
    ctx->pc = 0x232AB0u;
    SET_GPR_U32(ctx, 31, 0x232AB8u);
    ctx->pc = 0x232AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AB0u;
    // 0x232ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x232AB0u, 0x232AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AB8u;
label_232ab8:
    // 0x232ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232abc:
    // 0x232abc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_232ac0:
    if (ctx->pc == 0x232AC0u) {
        ctx->pc = 0x232AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232ABCu;
        // 0x232ac0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AC4u;
        goto label_232ac4;
    }
    ctx->pc = 0x232ABCu;
    {
        const bool branch_taken_0x232abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x232AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232ABCu;
        // 0x232ac0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232abc) {
            ctx->pc = 0x232AF8u;
            goto label_232af8;
        }
    }
    ctx->pc = 0x232AC4u;
label_232ac4:
    // 0x232ac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232ac8:
    // 0x232ac8: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x232ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_232acc:
    // 0x232acc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x232accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ad0:
    // 0x232ad0: 0xc0e637e  jal         func_398DF8
label_232ad4:
    if (ctx->pc == 0x232AD4u) {
        ctx->pc = 0x232AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AD0u;
        // 0x232ad4: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AD8u;
        goto label_232ad8;
    }
    ctx->pc = 0x232AD0u;
    SET_GPR_U32(ctx, 31, 0x232AD8u);
    ctx->pc = 0x232AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AD0u;
    // 0x232ad4: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x232AD0u, 0x232AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AD8u;
label_232ad8:
    // 0x232ad8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_232adc:
    // 0x232adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ae0:
    // 0x232ae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232ae4:
    // 0x232ae4: 0xc08a5b0  jal         func_2296C0
label_232ae8:
    if (ctx->pc == 0x232AE8u) {
        ctx->pc = 0x232AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AE4u;
        // 0x232ae8: 0x24c616c0  addiu       $a2, $a2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AECu;
        goto label_232aec;
    }
    ctx->pc = 0x232AE4u;
    SET_GPR_U32(ctx, 31, 0x232AECu);
    ctx->pc = 0x232AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AE4u;
    // 0x232ae8: 0x24c616c0  addiu       $a2, $a2, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C0u, 0x232AE4u, 0x232AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AECu;
label_232aec:
    // 0x232aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232af0:
    // 0x232af0: 0xc089c20  jal         func_227080
label_232af4:
    if (ctx->pc == 0x232AF4u) {
        ctx->pc = 0x232AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AF0u;
        // 0x232af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AF8u;
        goto label_232af8;
    }
    ctx->pc = 0x232AF0u;
    SET_GPR_U32(ctx, 31, 0x232AF8u);
    ctx->pc = 0x232AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AF0u;
    // 0x232af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x232AF0u, 0x232AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AF8u;
label_232af8:
    // 0x232af8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x232af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_232afc:
    // 0x232afc: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_232b00:
    if (ctx->pc == 0x232B00u) {
        ctx->pc = 0x232B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AFCu;
        // 0x232b00: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B04u;
        goto label_232b04;
    }
    ctx->pc = 0x232AFCu;
    {
        const bool branch_taken_0x232afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232afc) {
            ctx->pc = 0x232B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AFCu;
            // 0x232b00: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232B3Cu;
            goto label_232b3c;
        }
    }
    ctx->pc = 0x232B04u;
label_232b04:
    // 0x232b04: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x232b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_232b08:
    // 0x232b08: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_232b0c:
    if (ctx->pc == 0x232B0Cu) {
        ctx->pc = 0x232B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B08u;
        // 0x232b0c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B10u;
        goto label_232b10;
    }
    ctx->pc = 0x232B08u;
    {
        const bool branch_taken_0x232b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232b08) {
            ctx->pc = 0x232B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232B08u;
            // 0x232b0c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232B3Cu;
            goto label_232b3c;
        }
    }
    ctx->pc = 0x232B10u;
label_232b10:
    // 0x232b10: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x232b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_232b14:
    // 0x232b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232b18:
    // 0x232b18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232b1c:
    // 0x232b1c: 0xc097c6e  jal         func_25F1B8
label_232b20:
    if (ctx->pc == 0x232B20u) {
        ctx->pc = 0x232B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B1Cu;
        // 0x232b20: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B24u;
        goto label_232b24;
    }
    ctx->pc = 0x232B1Cu;
    SET_GPR_U32(ctx, 31, 0x232B24u);
    ctx->pc = 0x232B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B1Cu;
    // 0x232b20: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B8u, 0x232B1Cu, 0x232B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B24u;
label_232b24:
    // 0x232b24: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x232b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_232b28:
    // 0x232b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232b2c:
    // 0x232b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232b30:
    // 0x232b30: 0xc0899aa  jal         func_2266A8
label_232b34:
    if (ctx->pc == 0x232B34u) {
        ctx->pc = 0x232B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B30u;
        // 0x232b34: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B38u;
        goto label_232b38;
    }
    ctx->pc = 0x232B30u;
    SET_GPR_U32(ctx, 31, 0x232B38u);
    ctx->pc = 0x232B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B30u;
    // 0x232b34: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x232B30u, 0x232B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B38u;
label_232b38:
    // 0x232b38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_232b3c:
    // 0x232b3c: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_232b40:
    // 0x232b40: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_232b44:
    // 0x232b44: 0x60f809  jalr        $v1
label_232b48:
    if (ctx->pc == 0x232B48u) {
        ctx->pc = 0x232B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B44u;
        // 0x232b48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B4Cu;
        goto label_232b4c;
    }
    ctx->pc = 0x232B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x232B4Cu);
        ctx->pc = 0x232B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B44u;
        // 0x232b48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232B44u, 0x232B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232B4Cu;
label_232b4c:
    // 0x232b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232b50:
    // 0x232b50: 0xc089974  jal         func_2265D0
label_232b54:
    if (ctx->pc == 0x232B54u) {
        ctx->pc = 0x232B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B50u;
        // 0x232b54: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B58u;
        goto label_232b58;
    }
    ctx->pc = 0x232B50u;
    SET_GPR_U32(ctx, 31, 0x232B58u);
    ctx->pc = 0x232B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B50u;
    // 0x232b54: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x232B50u, 0x232B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B58u;
label_232b58:
    // 0x232b58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x232b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_232b5c:
    // 0x232b5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x232b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_232b60:
    // 0x232b60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x232b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_232b64:
    // 0x232b64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x232b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_232b68:
    // 0x232b68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x232b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_232b6c:
    // 0x232b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232b70:
    // 0x232b70: 0x3e00008  jr          $ra
label_232b74:
    if (ctx->pc == 0x232B74u) {
        ctx->pc = 0x232B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B70u;
        // 0x232b74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B78u;
        goto label_fallthrough_0x232b70;
    }
    ctx->pc = 0x232B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B70u;
        // 0x232b74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x232b70:
    ctx->pc = 0x232B78u;
}
