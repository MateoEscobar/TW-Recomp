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

// Function: sub_002E0088
// Address: 0x2e0088 - 0x2e05a8
void sub_002E0088_0x2e0088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0088_0x2e0088");
#endif

    switch (ctx->pc) {
        case 0x2e0088u: goto label_2e0088;
        case 0x2e008cu: goto label_2e008c;
        case 0x2e0090u: goto label_2e0090;
        case 0x2e0094u: goto label_2e0094;
        case 0x2e0098u: goto label_2e0098;
        case 0x2e009cu: goto label_2e009c;
        case 0x2e00a0u: goto label_2e00a0;
        case 0x2e00a4u: goto label_2e00a4;
        case 0x2e00a8u: goto label_2e00a8;
        case 0x2e00acu: goto label_2e00ac;
        case 0x2e00b0u: goto label_2e00b0;
        case 0x2e00b4u: goto label_2e00b4;
        case 0x2e00b8u: goto label_2e00b8;
        case 0x2e00bcu: goto label_2e00bc;
        case 0x2e00c0u: goto label_2e00c0;
        case 0x2e00c4u: goto label_2e00c4;
        case 0x2e00c8u: goto label_2e00c8;
        case 0x2e00ccu: goto label_2e00cc;
        case 0x2e00d0u: goto label_2e00d0;
        case 0x2e00d4u: goto label_2e00d4;
        case 0x2e00d8u: goto label_2e00d8;
        case 0x2e00dcu: goto label_2e00dc;
        case 0x2e00e0u: goto label_2e00e0;
        case 0x2e00e4u: goto label_2e00e4;
        case 0x2e00e8u: goto label_2e00e8;
        case 0x2e00ecu: goto label_2e00ec;
        case 0x2e00f0u: goto label_2e00f0;
        case 0x2e00f4u: goto label_2e00f4;
        case 0x2e00f8u: goto label_2e00f8;
        case 0x2e00fcu: goto label_2e00fc;
        case 0x2e0100u: goto label_2e0100;
        case 0x2e0104u: goto label_2e0104;
        case 0x2e0108u: goto label_2e0108;
        case 0x2e010cu: goto label_2e010c;
        case 0x2e0110u: goto label_2e0110;
        case 0x2e0114u: goto label_2e0114;
        case 0x2e0118u: goto label_2e0118;
        case 0x2e011cu: goto label_2e011c;
        case 0x2e0120u: goto label_2e0120;
        case 0x2e0124u: goto label_2e0124;
        case 0x2e0128u: goto label_2e0128;
        case 0x2e012cu: goto label_2e012c;
        case 0x2e0130u: goto label_2e0130;
        case 0x2e0134u: goto label_2e0134;
        case 0x2e0138u: goto label_2e0138;
        case 0x2e013cu: goto label_2e013c;
        case 0x2e0140u: goto label_2e0140;
        case 0x2e0144u: goto label_2e0144;
        case 0x2e0148u: goto label_2e0148;
        case 0x2e014cu: goto label_2e014c;
        case 0x2e0150u: goto label_2e0150;
        case 0x2e0154u: goto label_2e0154;
        case 0x2e0158u: goto label_2e0158;
        case 0x2e015cu: goto label_2e015c;
        case 0x2e0160u: goto label_2e0160;
        case 0x2e0164u: goto label_2e0164;
        case 0x2e0168u: goto label_2e0168;
        case 0x2e016cu: goto label_2e016c;
        case 0x2e0170u: goto label_2e0170;
        case 0x2e0174u: goto label_2e0174;
        case 0x2e0178u: goto label_2e0178;
        case 0x2e017cu: goto label_2e017c;
        case 0x2e0180u: goto label_2e0180;
        case 0x2e0184u: goto label_2e0184;
        case 0x2e0188u: goto label_2e0188;
        case 0x2e018cu: goto label_2e018c;
        case 0x2e0190u: goto label_2e0190;
        case 0x2e0194u: goto label_2e0194;
        case 0x2e0198u: goto label_2e0198;
        case 0x2e019cu: goto label_2e019c;
        case 0x2e01a0u: goto label_2e01a0;
        case 0x2e01a4u: goto label_2e01a4;
        case 0x2e01a8u: goto label_2e01a8;
        case 0x2e01acu: goto label_2e01ac;
        case 0x2e01b0u: goto label_2e01b0;
        case 0x2e01b4u: goto label_2e01b4;
        case 0x2e01b8u: goto label_2e01b8;
        case 0x2e01bcu: goto label_2e01bc;
        case 0x2e01c0u: goto label_2e01c0;
        case 0x2e01c4u: goto label_2e01c4;
        case 0x2e01c8u: goto label_2e01c8;
        case 0x2e01ccu: goto label_2e01cc;
        case 0x2e01d0u: goto label_2e01d0;
        case 0x2e01d4u: goto label_2e01d4;
        case 0x2e01d8u: goto label_2e01d8;
        case 0x2e01dcu: goto label_2e01dc;
        case 0x2e01e0u: goto label_2e01e0;
        case 0x2e01e4u: goto label_2e01e4;
        case 0x2e01e8u: goto label_2e01e8;
        case 0x2e01ecu: goto label_2e01ec;
        case 0x2e01f0u: goto label_2e01f0;
        case 0x2e01f4u: goto label_2e01f4;
        case 0x2e01f8u: goto label_2e01f8;
        case 0x2e01fcu: goto label_2e01fc;
        case 0x2e0200u: goto label_2e0200;
        case 0x2e0204u: goto label_2e0204;
        case 0x2e0208u: goto label_2e0208;
        case 0x2e020cu: goto label_2e020c;
        case 0x2e0210u: goto label_2e0210;
        case 0x2e0214u: goto label_2e0214;
        case 0x2e0218u: goto label_2e0218;
        case 0x2e021cu: goto label_2e021c;
        case 0x2e0220u: goto label_2e0220;
        case 0x2e0224u: goto label_2e0224;
        case 0x2e0228u: goto label_2e0228;
        case 0x2e022cu: goto label_2e022c;
        case 0x2e0230u: goto label_2e0230;
        case 0x2e0234u: goto label_2e0234;
        case 0x2e0238u: goto label_2e0238;
        case 0x2e023cu: goto label_2e023c;
        case 0x2e0240u: goto label_2e0240;
        case 0x2e0244u: goto label_2e0244;
        case 0x2e0248u: goto label_2e0248;
        case 0x2e024cu: goto label_2e024c;
        case 0x2e0250u: goto label_2e0250;
        case 0x2e0254u: goto label_2e0254;
        case 0x2e0258u: goto label_2e0258;
        case 0x2e025cu: goto label_2e025c;
        case 0x2e0260u: goto label_2e0260;
        case 0x2e0264u: goto label_2e0264;
        case 0x2e0268u: goto label_2e0268;
        case 0x2e026cu: goto label_2e026c;
        case 0x2e0270u: goto label_2e0270;
        case 0x2e0274u: goto label_2e0274;
        case 0x2e0278u: goto label_2e0278;
        case 0x2e027cu: goto label_2e027c;
        case 0x2e0280u: goto label_2e0280;
        case 0x2e0284u: goto label_2e0284;
        case 0x2e0288u: goto label_2e0288;
        case 0x2e028cu: goto label_2e028c;
        case 0x2e0290u: goto label_2e0290;
        case 0x2e0294u: goto label_2e0294;
        case 0x2e0298u: goto label_2e0298;
        case 0x2e029cu: goto label_2e029c;
        case 0x2e02a0u: goto label_2e02a0;
        case 0x2e02a4u: goto label_2e02a4;
        case 0x2e02a8u: goto label_2e02a8;
        case 0x2e02acu: goto label_2e02ac;
        case 0x2e02b0u: goto label_2e02b0;
        case 0x2e02b4u: goto label_2e02b4;
        case 0x2e02b8u: goto label_2e02b8;
        case 0x2e02bcu: goto label_2e02bc;
        case 0x2e02c0u: goto label_2e02c0;
        case 0x2e02c4u: goto label_2e02c4;
        case 0x2e02c8u: goto label_2e02c8;
        case 0x2e02ccu: goto label_2e02cc;
        case 0x2e02d0u: goto label_2e02d0;
        case 0x2e02d4u: goto label_2e02d4;
        case 0x2e02d8u: goto label_2e02d8;
        case 0x2e02dcu: goto label_2e02dc;
        case 0x2e02e0u: goto label_2e02e0;
        case 0x2e02e4u: goto label_2e02e4;
        case 0x2e02e8u: goto label_2e02e8;
        case 0x2e02ecu: goto label_2e02ec;
        case 0x2e02f0u: goto label_2e02f0;
        case 0x2e02f4u: goto label_2e02f4;
        case 0x2e02f8u: goto label_2e02f8;
        case 0x2e02fcu: goto label_2e02fc;
        case 0x2e0300u: goto label_2e0300;
        case 0x2e0304u: goto label_2e0304;
        case 0x2e0308u: goto label_2e0308;
        case 0x2e030cu: goto label_2e030c;
        case 0x2e0310u: goto label_2e0310;
        case 0x2e0314u: goto label_2e0314;
        case 0x2e0318u: goto label_2e0318;
        case 0x2e031cu: goto label_2e031c;
        case 0x2e0320u: goto label_2e0320;
        case 0x2e0324u: goto label_2e0324;
        case 0x2e0328u: goto label_2e0328;
        case 0x2e032cu: goto label_2e032c;
        case 0x2e0330u: goto label_2e0330;
        case 0x2e0334u: goto label_2e0334;
        case 0x2e0338u: goto label_2e0338;
        case 0x2e033cu: goto label_2e033c;
        case 0x2e0340u: goto label_2e0340;
        case 0x2e0344u: goto label_2e0344;
        case 0x2e0348u: goto label_2e0348;
        case 0x2e034cu: goto label_2e034c;
        case 0x2e0350u: goto label_2e0350;
        case 0x2e0354u: goto label_2e0354;
        case 0x2e0358u: goto label_2e0358;
        case 0x2e035cu: goto label_2e035c;
        case 0x2e0360u: goto label_2e0360;
        case 0x2e0364u: goto label_2e0364;
        case 0x2e0368u: goto label_2e0368;
        case 0x2e036cu: goto label_2e036c;
        case 0x2e0370u: goto label_2e0370;
        case 0x2e0374u: goto label_2e0374;
        case 0x2e0378u: goto label_2e0378;
        case 0x2e037cu: goto label_2e037c;
        case 0x2e0380u: goto label_2e0380;
        case 0x2e0384u: goto label_2e0384;
        case 0x2e0388u: goto label_2e0388;
        case 0x2e038cu: goto label_2e038c;
        case 0x2e0390u: goto label_2e0390;
        case 0x2e0394u: goto label_2e0394;
        case 0x2e0398u: goto label_2e0398;
        case 0x2e039cu: goto label_2e039c;
        case 0x2e03a0u: goto label_2e03a0;
        case 0x2e03a4u: goto label_2e03a4;
        case 0x2e03a8u: goto label_2e03a8;
        case 0x2e03acu: goto label_2e03ac;
        case 0x2e03b0u: goto label_2e03b0;
        case 0x2e03b4u: goto label_2e03b4;
        case 0x2e03b8u: goto label_2e03b8;
        case 0x2e03bcu: goto label_2e03bc;
        case 0x2e03c0u: goto label_2e03c0;
        case 0x2e03c4u: goto label_2e03c4;
        case 0x2e03c8u: goto label_2e03c8;
        case 0x2e03ccu: goto label_2e03cc;
        case 0x2e03d0u: goto label_2e03d0;
        case 0x2e03d4u: goto label_2e03d4;
        case 0x2e03d8u: goto label_2e03d8;
        case 0x2e03dcu: goto label_2e03dc;
        case 0x2e03e0u: goto label_2e03e0;
        case 0x2e03e4u: goto label_2e03e4;
        case 0x2e03e8u: goto label_2e03e8;
        case 0x2e03ecu: goto label_2e03ec;
        case 0x2e03f0u: goto label_2e03f0;
        case 0x2e03f4u: goto label_2e03f4;
        case 0x2e03f8u: goto label_2e03f8;
        case 0x2e03fcu: goto label_2e03fc;
        case 0x2e0400u: goto label_2e0400;
        case 0x2e0404u: goto label_2e0404;
        case 0x2e0408u: goto label_2e0408;
        case 0x2e040cu: goto label_2e040c;
        case 0x2e0410u: goto label_2e0410;
        case 0x2e0414u: goto label_2e0414;
        case 0x2e0418u: goto label_2e0418;
        case 0x2e041cu: goto label_2e041c;
        case 0x2e0420u: goto label_2e0420;
        case 0x2e0424u: goto label_2e0424;
        case 0x2e0428u: goto label_2e0428;
        case 0x2e042cu: goto label_2e042c;
        case 0x2e0430u: goto label_2e0430;
        case 0x2e0434u: goto label_2e0434;
        case 0x2e0438u: goto label_2e0438;
        case 0x2e043cu: goto label_2e043c;
        case 0x2e0440u: goto label_2e0440;
        case 0x2e0444u: goto label_2e0444;
        case 0x2e0448u: goto label_2e0448;
        case 0x2e044cu: goto label_2e044c;
        case 0x2e0450u: goto label_2e0450;
        case 0x2e0454u: goto label_2e0454;
        case 0x2e0458u: goto label_2e0458;
        case 0x2e045cu: goto label_2e045c;
        case 0x2e0460u: goto label_2e0460;
        case 0x2e0464u: goto label_2e0464;
        case 0x2e0468u: goto label_2e0468;
        case 0x2e046cu: goto label_2e046c;
        case 0x2e0470u: goto label_2e0470;
        case 0x2e0474u: goto label_2e0474;
        case 0x2e0478u: goto label_2e0478;
        case 0x2e047cu: goto label_2e047c;
        case 0x2e0480u: goto label_2e0480;
        case 0x2e0484u: goto label_2e0484;
        case 0x2e0488u: goto label_2e0488;
        case 0x2e048cu: goto label_2e048c;
        case 0x2e0490u: goto label_2e0490;
        case 0x2e0494u: goto label_2e0494;
        case 0x2e0498u: goto label_2e0498;
        case 0x2e049cu: goto label_2e049c;
        case 0x2e04a0u: goto label_2e04a0;
        case 0x2e04a4u: goto label_2e04a4;
        case 0x2e04a8u: goto label_2e04a8;
        case 0x2e04acu: goto label_2e04ac;
        case 0x2e04b0u: goto label_2e04b0;
        case 0x2e04b4u: goto label_2e04b4;
        case 0x2e04b8u: goto label_2e04b8;
        case 0x2e04bcu: goto label_2e04bc;
        case 0x2e04c0u: goto label_2e04c0;
        case 0x2e04c4u: goto label_2e04c4;
        case 0x2e04c8u: goto label_2e04c8;
        case 0x2e04ccu: goto label_2e04cc;
        case 0x2e04d0u: goto label_2e04d0;
        case 0x2e04d4u: goto label_2e04d4;
        case 0x2e04d8u: goto label_2e04d8;
        case 0x2e04dcu: goto label_2e04dc;
        case 0x2e04e0u: goto label_2e04e0;
        case 0x2e04e4u: goto label_2e04e4;
        case 0x2e04e8u: goto label_2e04e8;
        case 0x2e04ecu: goto label_2e04ec;
        case 0x2e04f0u: goto label_2e04f0;
        case 0x2e04f4u: goto label_2e04f4;
        case 0x2e04f8u: goto label_2e04f8;
        case 0x2e04fcu: goto label_2e04fc;
        case 0x2e0500u: goto label_2e0500;
        case 0x2e0504u: goto label_2e0504;
        case 0x2e0508u: goto label_2e0508;
        case 0x2e050cu: goto label_2e050c;
        case 0x2e0510u: goto label_2e0510;
        case 0x2e0514u: goto label_2e0514;
        case 0x2e0518u: goto label_2e0518;
        case 0x2e051cu: goto label_2e051c;
        case 0x2e0520u: goto label_2e0520;
        case 0x2e0524u: goto label_2e0524;
        case 0x2e0528u: goto label_2e0528;
        case 0x2e052cu: goto label_2e052c;
        case 0x2e0530u: goto label_2e0530;
        case 0x2e0534u: goto label_2e0534;
        case 0x2e0538u: goto label_2e0538;
        case 0x2e053cu: goto label_2e053c;
        case 0x2e0540u: goto label_2e0540;
        case 0x2e0544u: goto label_2e0544;
        case 0x2e0548u: goto label_2e0548;
        case 0x2e054cu: goto label_2e054c;
        case 0x2e0550u: goto label_2e0550;
        case 0x2e0554u: goto label_2e0554;
        case 0x2e0558u: goto label_2e0558;
        case 0x2e055cu: goto label_2e055c;
        case 0x2e0560u: goto label_2e0560;
        case 0x2e0564u: goto label_2e0564;
        case 0x2e0568u: goto label_2e0568;
        case 0x2e056cu: goto label_2e056c;
        case 0x2e0570u: goto label_2e0570;
        case 0x2e0574u: goto label_2e0574;
        case 0x2e0578u: goto label_2e0578;
        case 0x2e057cu: goto label_2e057c;
        case 0x2e0580u: goto label_2e0580;
        case 0x2e0584u: goto label_2e0584;
        case 0x2e0588u: goto label_2e0588;
        case 0x2e058cu: goto label_2e058c;
        case 0x2e0590u: goto label_2e0590;
        case 0x2e0594u: goto label_2e0594;
        case 0x2e0598u: goto label_2e0598;
        case 0x2e059cu: goto label_2e059c;
        case 0x2e05a0u: goto label_2e05a0;
        case 0x2e05a4u: goto label_2e05a4;
        default: break;
    }

    ctx->pc = 0x2e0088u;

label_2e0088:
    // 0x2e0088: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2e008c:
    // 0x2e008c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2e008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2e0090:
    // 0x2e0090: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2e0090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2e0094:
    // 0x2e0094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0098:
    // 0x2e0098: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2e0098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2e009c:
    // 0x2e009c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e00a0:
    // 0x2e00a0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2e00a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2e00a4:
    // 0x2e00a4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2e00a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2e00a8:
    // 0x2e00a8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2e00a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2e00ac:
    // 0x2e00ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e00acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2e00b0:
    // 0x2e00b0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2e00b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2e00b4:
    // 0x2e00b4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2e00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2e00b8:
    // 0x2e00b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e00bc:
    // 0x2e00bc: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2e00bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2e00c0:
    // 0x2e00c0: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2e00c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2e00c4:
    // 0x2e00c4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2e00c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2e00c8:
    // 0x2e00c8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e00cc:
    // 0x2e00cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2e00ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e00d0:
    // 0x2e00d0: 0xc0e409a  jal         func_390268
label_2e00d4:
    if (ctx->pc == 0x2E00D4u) {
        ctx->pc = 0x2E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00D0u;
        // 0x2e00d4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00D8u;
        goto label_2e00d8;
    }
    ctx->pc = 0x2E00D0u;
    SET_GPR_U32(ctx, 31, 0x2E00D8u);
    ctx->pc = 0x2E00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E00D0u;
    // 0x2e00d4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E00D0u, 0x2E00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00D8u;
label_2e00d8:
    // 0x2e00d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e00dc:
    // 0x2e00dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e00dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e00e0:
    // 0x2e00e0: 0xc0a352c  jal         func_28D4B0
label_2e00e4:
    if (ctx->pc == 0x2E00E4u) {
        ctx->pc = 0x2E00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00E0u;
        // 0x2e00e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00E8u;
        goto label_2e00e8;
    }
    ctx->pc = 0x2E00E0u;
    SET_GPR_U32(ctx, 31, 0x2E00E8u);
    ctx->pc = 0x2E00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E00E0u;
    // 0x2e00e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2E00E0u, 0x2E00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00E8u;
label_2e00e8:
    // 0x2e00e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e00e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e00ec:
    // 0x2e00ec: 0x1280011f  beqz        $s4, . + 4 + (0x11F << 2)
label_2e00f0:
    if (ctx->pc == 0x2E00F0u) {
        ctx->pc = 0x2E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00ECu;
        // 0x2e00f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00F4u;
        goto label_2e00f4;
    }
    ctx->pc = 0x2E00ECu;
    {
        const bool branch_taken_0x2e00ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00ECu;
        // 0x2e00f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00ec) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E00F4u;
label_2e00f4:
    // 0x2e00f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e00f8:
    // 0x2e00f8: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2e00fc:
    // 0x2e00fc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2e0100:
    if (ctx->pc == 0x2E0100u) {
        ctx->pc = 0x2E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00FCu;
        // 0x2e0100: 0x8082002e  lb          $v0, 0x2E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0104u;
        goto label_2e0104;
    }
    ctx->pc = 0x2E00FCu;
    {
        const bool branch_taken_0x2e00fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e00fc) {
            ctx->pc = 0x2E0100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E00FCu;
            // 0x2e0100: 0x8082002e  lb          $v0, 0x2E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E010Cu;
            goto label_2e010c;
        }
    }
    ctx->pc = 0x2E0104u;
label_2e0104:
    // 0x2e0104: 0x10000119  b           . + 4 + (0x119 << 2)
label_2e0108:
    if (ctx->pc == 0x2E0108u) {
        ctx->pc = 0x2E0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0104u;
        // 0x2e0108: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E010Cu;
        goto label_2e010c;
    }
    ctx->pc = 0x2E0104u;
    {
        const bool branch_taken_0x2e0104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0104u;
        // 0x2e0108: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0104) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E010Cu;
label_2e010c:
    // 0x2e010c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e010cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0110:
    // 0x2e0110: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_2e0114:
    if (ctx->pc == 0x2E0114u) {
        ctx->pc = 0x2E0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0110u;
        // 0x2e0114: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0118u;
        goto label_2e0118;
    }
    ctx->pc = 0x2E0110u;
    {
        const bool branch_taken_0x2e0110 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0110u;
        // 0x2e0114: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0110) {
            ctx->pc = 0x2E0158u;
            goto label_2e0158;
        }
    }
    ctx->pc = 0x2E0118u;
label_2e0118:
    // 0x2e0118: 0xc0a36c2  jal         func_28DB08
label_2e011c:
    if (ctx->pc == 0x2E011Cu) {
        ctx->pc = 0x2E0120u;
        goto label_2e0120;
    }
    ctx->pc = 0x2E0118u;
    SET_GPR_U32(ctx, 31, 0x2E0120u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E0118u, 0x2E0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0120u;
label_2e0120:
    // 0x2e0120: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e0124:
    // 0x2e0124: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e0124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e0128:
    // 0x2e0128: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e0128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e012c:
    // 0x2e012c: 0xa0f809  jalr        $a1
label_2e0130:
    if (ctx->pc == 0x2E0130u) {
        ctx->pc = 0x2E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E012Cu;
        // 0x2e0130: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0134u;
        goto label_2e0134;
    }
    ctx->pc = 0x2E012Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E0134u);
        ctx->pc = 0x2E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E012Cu;
        // 0x2e0130: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E012Cu, 0x2E0134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0134u;
label_2e0134:
    // 0x2e0134: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e0134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0138:
    // 0x2e0138: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e0138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e013c:
    // 0x2e013c: 0x1062010b  beq         $v1, $v0, . + 4 + (0x10B << 2)
label_2e0140:
    if (ctx->pc == 0x2E0140u) {
        ctx->pc = 0x2E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E013Cu;
        // 0x2e0140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0144u;
        goto label_2e0144;
    }
    ctx->pc = 0x2E013Cu;
    {
        const bool branch_taken_0x2e013c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E013Cu;
        // 0x2e0140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e013c) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E0144u;
label_2e0144:
    // 0x2e0144: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
label_2e0148:
    if (ctx->pc == 0x2E0148u) {
        ctx->pc = 0x2E0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0144u;
        // 0x2e0148: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E014Cu;
        goto label_2e014c;
    }
    ctx->pc = 0x2E0144u;
    {
        const bool branch_taken_0x2e0144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e0144) {
            ctx->pc = 0x2E0148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0144u;
            // 0x2e0148: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E015Cu;
            goto label_2e015c;
        }
    }
    ctx->pc = 0x2E014Cu;
label_2e014c:
    // 0x2e014c: 0xc0a36c2  jal         func_28DB08
label_2e0150:
    if (ctx->pc == 0x2E0150u) {
        ctx->pc = 0x2E0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E014Cu;
        // 0x2e0150: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0154u;
        goto label_2e0154;
    }
    ctx->pc = 0x2E014Cu;
    SET_GPR_U32(ctx, 31, 0x2E0154u);
    ctx->pc = 0x2E0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E014Cu;
    // 0x2e0150: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E014Cu, 0x2E0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0154u;
label_2e0154:
    // 0x2e0154: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e0154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0158:
    // 0x2e0158: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e0158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e015c:
    // 0x2e015c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e0160:
    // 0x2e0160: 0xc08a0d0  jal         func_228340
label_2e0164:
    if (ctx->pc == 0x2E0164u) {
        ctx->pc = 0x2E0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0160u;
        // 0x2e0164: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0168u;
        goto label_2e0168;
    }
    ctx->pc = 0x2E0160u;
    SET_GPR_U32(ctx, 31, 0x2E0168u);
    ctx->pc = 0x2E0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0160u;
    // 0x2e0164: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2E0160u, 0x2E0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0168u;
label_2e0168:
    // 0x2e0168: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e016c:
    if (ctx->pc == 0x2E016Cu) {
        ctx->pc = 0x2E016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0168u;
        // 0x2e016c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0170u;
        goto label_2e0170;
    }
    ctx->pc = 0x2E0168u;
    {
        const bool branch_taken_0x2e0168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0168) {
            ctx->pc = 0x2E016Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0168u;
            // 0x2e016c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E017Cu;
            goto label_2e017c;
        }
    }
    ctx->pc = 0x2E0170u;
label_2e0170:
    // 0x2e0170: 0xc08bfbc  jal         func_22FEF0
label_2e0174:
    if (ctx->pc == 0x2E0174u) {
        ctx->pc = 0x2E0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0170u;
        // 0x2e0174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0178u;
        goto label_2e0178;
    }
    ctx->pc = 0x2E0170u;
    SET_GPR_U32(ctx, 31, 0x2E0178u);
    ctx->pc = 0x2E0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0170u;
    // 0x2e0174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E0170u, 0x2E0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0178u;
label_2e0178:
    // 0x2e0178: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e0178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e017c:
    // 0x2e017c: 0xc08750a  jal         func_21D428
label_2e0180:
    if (ctx->pc == 0x2E0180u) {
        ctx->pc = 0x2E0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E017Cu;
        // 0x2e0180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0184u;
        goto label_2e0184;
    }
    ctx->pc = 0x2E017Cu;
    SET_GPR_U32(ctx, 31, 0x2E0184u);
    ctx->pc = 0x2E0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E017Cu;
    // 0x2e0180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2E017Cu, 0x2E0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0184u;
label_2e0184:
    // 0x2e0184: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e0184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0188:
    // 0x2e0188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e0188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e018c:
    // 0x2e018c: 0xc0a5832  jal         func_2960C8
label_2e0190:
    if (ctx->pc == 0x2E0190u) {
        ctx->pc = 0x2E0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E018Cu;
        // 0x2e0190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0194u;
        goto label_2e0194;
    }
    ctx->pc = 0x2E018Cu;
    SET_GPR_U32(ctx, 31, 0x2E0194u);
    ctx->pc = 0x2E0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E018Cu;
    // 0x2e0190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960C8u, 0x2E018Cu, 0x2E0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0194u;
label_2e0194:
    // 0x2e0194: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
label_2e0198:
    if (ctx->pc == 0x2E0198u) {
        ctx->pc = 0x2E0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0194u;
        // 0x2e0198: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E019Cu;
        goto label_2e019c;
    }
    ctx->pc = 0x2E0194u;
    {
        const bool branch_taken_0x2e0194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0194u;
        // 0x2e0198: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0194) {
            ctx->pc = 0x2E0104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0104;
        }
    }
    ctx->pc = 0x2E019Cu;
label_2e019c:
    // 0x2e019c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e019cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e01a0:
    // 0x2e01a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2e01a4:
    if (ctx->pc == 0x2E01A4u) {
        ctx->pc = 0x2E01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01A0u;
        // 0x2e01a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E01A8u;
        goto label_2e01a8;
    }
    ctx->pc = 0x2E01A0u;
    {
        const bool branch_taken_0x2e01a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e01a0) {
            ctx->pc = 0x2E01A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E01A0u;
            // 0x2e01a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E01A8u;
            goto label_2e01a8;
        }
    }
    ctx->pc = 0x2E01A8u;
label_2e01a8:
    // 0x2e01a8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2e01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2e01ac:
    // 0x2e01ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e01acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2e01b0:
    // 0x2e01b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2e01b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e01b4:
    // 0x2e01b4: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
label_2e01b8:
    if (ctx->pc == 0x2E01B8u) {
        ctx->pc = 0x2E01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01B4u;
        // 0x2e01b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E01BCu;
        goto label_2e01bc;
    }
    ctx->pc = 0x2E01B4u;
    {
        const bool branch_taken_0x2e01b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e01b4) {
            ctx->pc = 0x2E01B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E01B4u;
            // 0x2e01b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E01F4u;
            goto label_2e01f4;
        }
    }
    ctx->pc = 0x2E01BCu;
label_2e01bc:
    // 0x2e01bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e01bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e01c0:
    // 0x2e01c0: 0xc0a5780  jal         func_295E00
label_2e01c4:
    if (ctx->pc == 0x2E01C4u) {
        ctx->pc = 0x2E01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01C0u;
        // 0x2e01c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E01C8u;
        goto label_2e01c8;
    }
    ctx->pc = 0x2E01C0u;
    SET_GPR_U32(ctx, 31, 0x2E01C8u);
    ctx->pc = 0x2E01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E01C0u;
    // 0x2e01c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x2E01C0u, 0x2E01C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E01C8u;
label_2e01c8:
    // 0x2e01c8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2e01cc:
    if (ctx->pc == 0x2E01CCu) {
        ctx->pc = 0x2E01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01C8u;
        // 0x2e01cc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E01D0u;
        goto label_2e01d0;
    }
    ctx->pc = 0x2E01C8u;
    {
        const bool branch_taken_0x2e01c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e01c8) {
            ctx->pc = 0x2E01CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E01C8u;
            // 0x2e01cc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E01F4u;
            goto label_2e01f4;
        }
    }
    ctx->pc = 0x2E01D0u;
label_2e01d0:
    // 0x2e01d0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2e01d4:
    // 0x2e01d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e01d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e01d8:
    // 0x2e01d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e01d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e01dc:
    // 0x2e01dc: 0xc0a578e  jal         func_295E38
label_2e01e0:
    if (ctx->pc == 0x2E01E0u) {
        ctx->pc = 0x2E01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01DCu;
        // 0x2e01e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E01E4u;
        goto label_2e01e4;
    }
    ctx->pc = 0x2E01DCu;
    SET_GPR_U32(ctx, 31, 0x2E01E4u);
    ctx->pc = 0x2E01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E01DCu;
    // 0x2e01e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x2E01DCu, 0x2E01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E01E4u;
label_2e01e4:
    // 0x2e01e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e01e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e01e8:
    // 0x2e01e8: 0xc0a7de4  jal         func_29F790
label_2e01ec:
    if (ctx->pc == 0x2E01ECu) {
        ctx->pc = 0x2E01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01E8u;
        // 0x2e01ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E01F0u;
        goto label_2e01f0;
    }
    ctx->pc = 0x2E01E8u;
    SET_GPR_U32(ctx, 31, 0x2E01F0u);
    ctx->pc = 0x2E01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E01E8u;
    // 0x2e01ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F790u, 0x2E01E8u, 0x2E01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E01F0u;
label_2e01f0:
    // 0x2e01f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e01f4:
    // 0x2e01f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e01f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e01f8:
    // 0x2e01f8: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x2e01f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2e01fc:
    // 0x2e01fc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2e01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2e0200:
    // 0x2e0200: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e0204:
    if (ctx->pc == 0x2E0204u) {
        ctx->pc = 0x2E0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0200u;
        // 0x2e0204: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0208u;
        goto label_2e0208;
    }
    ctx->pc = 0x2E0200u;
    {
        const bool branch_taken_0x2e0200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0200) {
            ctx->pc = 0x2E0204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0200u;
            // 0x2e0204: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0208u;
            goto label_2e0208;
        }
    }
    ctx->pc = 0x2E0208u;
label_2e0208:
    // 0x2e0208: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e0208u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2e020c:
    // 0x2e020c: 0x1810  mfhi        $v1
    ctx->pc = 0x2e020cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2e0210:
    // 0x2e0210: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2e0214:
    if (ctx->pc == 0x2E0214u) {
        ctx->pc = 0x2E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0210u;
        // 0x2e0214: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0218u;
        goto label_2e0218;
    }
    ctx->pc = 0x2E0210u;
    {
        const bool branch_taken_0x2e0210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0210u;
        // 0x2e0214: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0210) {
            ctx->pc = 0x2E023Cu;
            goto label_2e023c;
        }
    }
    ctx->pc = 0x2E0218u;
label_2e0218:
    // 0x2e0218: 0x92230036  lbu         $v1, 0x36($s1)
    ctx->pc = 0x2e0218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_2e021c:
    // 0x2e021c: 0x8e8401a8  lw          $a0, 0x1A8($s4)
    ctx->pc = 0x2e021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2e0220:
    // 0x2e0220: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2e0220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e0224:
    // 0x2e0224: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e0224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e0228:
    // 0x2e0228: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e022c:
    if (ctx->pc == 0x2E022Cu) {
        ctx->pc = 0x2E022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0228u;
        // 0x2e022c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0230u;
        goto label_2e0230;
    }
    ctx->pc = 0x2E0228u;
    {
        const bool branch_taken_0x2e0228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0228u;
        // 0x2e022c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0228) {
            ctx->pc = 0x2E0234u;
            goto label_2e0234;
        }
    }
    ctx->pc = 0x2E0230u;
label_2e0230:
    // 0x2e0230: 0x28870003  slti        $a3, $a0, 0x3
    ctx->pc = 0x2e0230u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e0234:
    // 0x2e0234: 0xa2240036  sb          $a0, 0x36($s1)
    ctx->pc = 0x2e0234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 4));
label_2e0238:
    // 0x2e0238: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e0238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2e023c:
    // 0x2e023c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2e023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2e0240:
    // 0x2e0240: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2e0244:
    // 0x2e0244: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e0248:
    // 0x2e0248: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e0248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2e024c:
    // 0x2e024c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e0250:
    if (ctx->pc == 0x2E0250u) {
        ctx->pc = 0x2E0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E024Cu;
        // 0x2e0250: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0254u;
        goto label_2e0254;
    }
    ctx->pc = 0x2E024Cu;
    {
        const bool branch_taken_0x2e024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E024Cu;
        // 0x2e0250: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e024c) {
            ctx->pc = 0x2E026Cu;
            goto label_2e026c;
        }
    }
    ctx->pc = 0x2E0254u;
label_2e0254:
    // 0x2e0254: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
label_2e0258:
    if (ctx->pc == 0x2E0258u) {
        ctx->pc = 0x2E0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0254u;
        // 0x2e0258: 0x8cc3b734  lw          $v1, -0x48CC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E025Cu;
        goto label_2e025c;
    }
    ctx->pc = 0x2E0254u;
    {
        const bool branch_taken_0x2e0254 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0254u;
        // 0x2e0258: 0x8cc3b734  lw          $v1, -0x48CC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0254) {
            ctx->pc = 0x2E0270u;
            goto label_2e0270;
        }
    }
    ctx->pc = 0x2E025Cu;
label_2e025c:
    // 0x2e025c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0260:
    // 0x2e0260: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e0260u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2e0264:
    // 0x2e0264: 0x1c6000c1  bgtz        $v1, . + 4 + (0xC1 << 2)
label_2e0268:
    if (ctx->pc == 0x2E0268u) {
        ctx->pc = 0x2E0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0264u;
        // 0x2e0268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E026Cu;
        goto label_2e026c;
    }
    ctx->pc = 0x2E0264u;
    {
        const bool branch_taken_0x2e0264 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0264u;
        // 0x2e0268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0264) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E026Cu;
label_2e026c:
    // 0x2e026c: 0x8cc3b734  lw          $v1, -0x48CC($a2)
    ctx->pc = 0x2e026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
label_2e0270:
    // 0x2e0270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e0274:
    // 0x2e0274: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2e0274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2e0278:
    // 0x2e0278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e0278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e027c:
    // 0x2e027c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2e027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e0280:
    // 0x2e0280: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e0280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e0284:
    // 0x2e0284: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2e0284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2e0288:
    // 0x2e0288: 0xc0a578e  jal         func_295E38
label_2e028c:
    if (ctx->pc == 0x2E028Cu) {
        ctx->pc = 0x2E028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0288u;
        // 0x2e028c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0290u;
        goto label_2e0290;
    }
    ctx->pc = 0x2E0288u;
    SET_GPR_U32(ctx, 31, 0x2E0290u);
    ctx->pc = 0x2E028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0288u;
    // 0x2e028c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x2E0288u, 0x2E0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0290u;
label_2e0290:
    // 0x2e0290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0294:
    // 0x2e0294: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2e0298:
    if (ctx->pc == 0x2E0298u) {
        ctx->pc = 0x2E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0294u;
        // 0x2e0298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E029Cu;
        goto label_2e029c;
    }
    ctx->pc = 0x2E0294u;
    {
        const bool branch_taken_0x2e0294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0294u;
        // 0x2e0298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0294) {
            ctx->pc = 0x2E02A8u;
            goto label_2e02a8;
        }
    }
    ctx->pc = 0x2E029Cu;
label_2e029c:
    // 0x2e029c: 0xc6360024  lwc1        $f22, 0x24($s1)
    ctx->pc = 0x2e029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e02a0:
    // 0x2e02a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e02a4:
    if (ctx->pc == 0x2E02A4u) {
        ctx->pc = 0x2E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02A0u;
        // 0x2e02a4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02A8u;
        goto label_2e02a8;
    }
    ctx->pc = 0x2E02A0u;
    {
        const bool branch_taken_0x2e02a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02A0u;
        // 0x2e02a4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02a0) {
            ctx->pc = 0x2E02CCu;
            goto label_2e02cc;
        }
    }
    ctx->pc = 0x2E02A8u;
label_2e02a8:
    // 0x2e02a8: 0xc0a58bc  jal         func_2962F0
label_2e02ac:
    if (ctx->pc == 0x2E02ACu) {
        ctx->pc = 0x2E02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02A8u;
        // 0x2e02ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02B0u;
        goto label_2e02b0;
    }
    ctx->pc = 0x2E02A8u;
    SET_GPR_U32(ctx, 31, 0x2E02B0u);
    ctx->pc = 0x2E02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02A8u;
    // 0x2e02ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x2E02A8u, 0x2E02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02B0u;
label_2e02b0:
    // 0x2e02b0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2e02b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_2e02b4:
    // 0x2e02b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2e02b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2e02b8:
    // 0x2e02b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e02b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e02bc:
    // 0x2e02bc: 0xc0a58ec  jal         func_2963B0
label_2e02c0:
    if (ctx->pc == 0x2E02C0u) {
        ctx->pc = 0x2E02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02BCu;
        // 0x2e02c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02C4u;
        goto label_2e02c4;
    }
    ctx->pc = 0x2E02BCu;
    SET_GPR_U32(ctx, 31, 0x2E02C4u);
    ctx->pc = 0x2E02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02BCu;
    // 0x2e02c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963B0u, 0x2E02BCu, 0x2E02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02C4u;
label_2e02c4:
    // 0x2e02c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e02c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e02c8:
    // 0x2e02c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e02c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e02cc:
    // 0x2e02cc: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x2e02ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_2e02d0:
    // 0x2e02d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2e02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e02d4:
    // 0x2e02d4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2e02d8:
    if (ctx->pc == 0x2E02D8u) {
        ctx->pc = 0x2E02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02D4u;
        // 0x2e02d8: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02DCu;
        goto label_2e02dc;
    }
    ctx->pc = 0x2E02D4u;
    {
        const bool branch_taken_0x2e02d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02D4u;
        // 0x2e02d8: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02d4) {
            ctx->pc = 0x2E03C0u;
            goto label_2e03c0;
        }
    }
    ctx->pc = 0x2E02DCu;
label_2e02dc:
    // 0x2e02dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2e02dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e02e0:
    // 0x2e02e0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2e02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e02e4:
    // 0x2e02e4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e02e4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2e02e8:
    // 0x2e02e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e02ec:
    if (ctx->pc == 0x2E02ECu) {
        ctx->pc = 0x2E02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02E8u;
        // 0x2e02ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02F0u;
        goto label_2e02f0;
    }
    ctx->pc = 0x2E02E8u;
    {
        const bool branch_taken_0x2e02e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e02e8) {
            ctx->pc = 0x2E02ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E02E8u;
            // 0x2e02ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E02F0u;
            goto label_2e02f0;
        }
    }
    ctx->pc = 0x2E02F0u;
label_2e02f0:
    // 0x2e02f0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e02f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2e02f4:
    // 0x2e02f4: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
label_2e02f8:
    if (ctx->pc == 0x2E02F8u) {
        ctx->pc = 0x2E02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02F4u;
        // 0x2e02f8: 0x9622002a  lhu         $v0, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02FCu;
        goto label_2e02fc;
    }
    ctx->pc = 0x2E02F4u;
    {
        const bool branch_taken_0x2e02f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e02f4) {
            ctx->pc = 0x2E02F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E02F4u;
            // 0x2e02f8: 0x9622002a  lhu         $v0, 0x2A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E03B4u;
            goto label_2e03b4;
        }
    }
    ctx->pc = 0x2E02FCu;
label_2e02fc:
    // 0x2e02fc: 0x7a6202b0  lq          $v0, 0x2B0($s3)
    ctx->pc = 0x2e02fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 688)));
label_2e0300:
    // 0x2e0300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e0300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0304:
    // 0x2e0304: 0xc091e56  jal         func_247958
label_2e0308:
    if (ctx->pc == 0x2E0308u) {
        ctx->pc = 0x2E0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0304u;
        // 0x2e0308: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E030Cu;
        goto label_2e030c;
    }
    ctx->pc = 0x2E0304u;
    SET_GPR_U32(ctx, 31, 0x2E030Cu);
    ctx->pc = 0x2E0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0304u;
    // 0x2e0308: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x2E0304u, 0x2E030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E030Cu;
label_2e030c:
    // 0x2e030c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e0310:
    if (ctx->pc == 0x2E0310u) {
        ctx->pc = 0x2E0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E030Cu;
        // 0x2e0310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0314u;
        goto label_2e0314;
    }
    ctx->pc = 0x2E030Cu;
    {
        const bool branch_taken_0x2e030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E030Cu;
        // 0x2e0310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e030c) {
            ctx->pc = 0x2E0328u;
            goto label_2e0328;
        }
    }
    ctx->pc = 0x2E0314u;
label_2e0314:
    // 0x2e0314: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e0314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e0318:
    // 0x2e0318: 0xc094454  jal         func_251150
label_2e031c:
    if (ctx->pc == 0x2E031Cu) {
        ctx->pc = 0x2E031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0318u;
        // 0x2e031c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0320u;
        goto label_2e0320;
    }
    ctx->pc = 0x2E0318u;
    SET_GPR_U32(ctx, 31, 0x2E0320u);
    ctx->pc = 0x2E031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0318u;
    // 0x2e031c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x2E0318u, 0x2E0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0320u;
label_2e0320:
    // 0x2e0320: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2e0324:
    if (ctx->pc == 0x2E0324u) {
        ctx->pc = 0x2E0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0320u;
        // 0x2e0324: 0x9622002a  lhu         $v0, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0328u;
        goto label_2e0328;
    }
    ctx->pc = 0x2E0320u;
    {
        const bool branch_taken_0x2e0320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0320) {
            ctx->pc = 0x2E0324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0320u;
            // 0x2e0324: 0x9622002a  lhu         $v0, 0x2A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E03B4u;
            goto label_2e03b4;
        }
    }
    ctx->pc = 0x2E0328u;
label_2e0328:
    // 0x2e0328: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e0328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2e032c:
    // 0x2e032c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e032cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e0330:
    // 0x2e0330: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x2e0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
label_2e0334:
    // 0x2e0334: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e0334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e0338:
    // 0x2e0338: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e0338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e033c:
    // 0x2e033c: 0x2477f2f0  addiu       $s7, $v1, -0xD10
    ctx->pc = 0x2e033cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_2e0340:
    // 0x2e0340: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e0340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0344:
    // 0x2e0344: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e0344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2e0348:
    // 0x2e0348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e034c:
    // 0x2e034c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e0350:
    // 0x2e0350: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0354:
    // 0x2e0354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e0354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0358:
    // 0x2e0358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e0358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e035c:
    // 0x2e035c: 0xc0a757c  jal         func_29D5F0
label_2e0360:
    if (ctx->pc == 0x2E0360u) {
        ctx->pc = 0x2E0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E035Cu;
        // 0x2e0360: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0364u;
        goto label_2e0364;
    }
    ctx->pc = 0x2E035Cu;
    SET_GPR_U32(ctx, 31, 0x2E0364u);
    ctx->pc = 0x2E0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E035Cu;
    // 0x2e0360: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2E035Cu, 0x2E0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0364u;
label_2e0364:
    // 0x2e0364: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e0364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0368:
    // 0x2e0368: 0x52400011  beql        $s2, $zero, . + 4 + (0x11 << 2)
label_2e036c:
    if (ctx->pc == 0x2E036Cu) {
        ctx->pc = 0x2E036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0368u;
        // 0x2e036c: 0xafb70020  sw          $s7, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0370u;
        goto label_2e0370;
    }
    ctx->pc = 0x2E0368u;
    {
        const bool branch_taken_0x2e0368 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0368) {
            ctx->pc = 0x2E036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0368u;
            // 0x2e036c: 0xafb70020  sw          $s7, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E03B0u;
            goto label_2e03b0;
        }
    }
    ctx->pc = 0x2E0370u;
label_2e0370:
    // 0x2e0370: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e0370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0374:
    // 0x2e0374: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e0374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e0378:
    // 0x2e0378: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e0378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e037c:
    // 0x2e037c: 0x40f809  jalr        $v0
label_2e0380:
    if (ctx->pc == 0x2E0380u) {
        ctx->pc = 0x2E0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E037Cu;
        // 0x2e0380: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0384u;
        goto label_2e0384;
    }
    ctx->pc = 0x2E037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0384u);
        ctx->pc = 0x2E0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E037Cu;
        // 0x2e0380: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E037Cu, 0x2E0384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0384u;
label_2e0384:
    // 0x2e0384: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e0388:
    // 0x2e0388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e038c:
    // 0x2e038c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e038cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e0390:
    // 0x2e0390: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e0394:
    // 0x2e0394: 0x40f809  jalr        $v0
label_2e0398:
    if (ctx->pc == 0x2E0398u) {
        ctx->pc = 0x2E0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0394u;
        // 0x2e0398: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E039Cu;
        goto label_2e039c;
    }
    ctx->pc = 0x2E0394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E039Cu);
        ctx->pc = 0x2E0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0394u;
        // 0x2e0398: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0394u, 0x2E039Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E039Cu;
label_2e039c:
    // 0x2e039c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e039cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e03a0:
    // 0x2e03a0: 0xc0b758c  jal         func_2DD630
label_2e03a4:
    if (ctx->pc == 0x2E03A4u) {
        ctx->pc = 0x2E03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03A0u;
        // 0x2e03a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03A8u;
        goto label_2e03a8;
    }
    ctx->pc = 0x2E03A0u;
    SET_GPR_U32(ctx, 31, 0x2E03A8u);
    ctx->pc = 0x2E03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03A0u;
    // 0x2e03a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD630u, 0x2E03A0u, 0x2E03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03A8u;
label_2e03a8:
    // 0x2e03a8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2e03ac:
    if (ctx->pc == 0x2E03ACu) {
        ctx->pc = 0x2E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03A8u;
        // 0x2e03ac: 0xafb70020  sw          $s7, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03B0u;
        goto label_2e03b0;
    }
    ctx->pc = 0x2E03A8u;
    {
        const bool branch_taken_0x2e03a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03A8u;
        // 0x2e03ac: 0xafb70020  sw          $s7, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03a8) {
            ctx->pc = 0x2E0568u;
            goto label_2e0568;
        }
    }
    ctx->pc = 0x2E03B0u;
label_2e03b0:
    // 0x2e03b0: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x2e03b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_2e03b4:
    // 0x2e03b4: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2e03b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2e03b8:
    // 0x2e03b8: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_2e03bc:
    if (ctx->pc == 0x2E03BCu) {
        ctx->pc = 0x2E03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03B8u;
        // 0x2e03bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03C0u;
        goto label_2e03c0;
    }
    ctx->pc = 0x2E03B8u;
    {
        const bool branch_taken_0x2e03b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03B8u;
        // 0x2e03bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03b8) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E03C0u;
label_2e03c0:
    // 0x2e03c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e03c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e03c4:
    // 0x2e03c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e03c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e03c8:
    // 0x2e03c8: 0xc091e94  jal         func_247A50
label_2e03cc:
    if (ctx->pc == 0x2E03CCu) {
        ctx->pc = 0x2E03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03C8u;
        // 0x2e03cc: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03D0u;
        goto label_2e03d0;
    }
    ctx->pc = 0x2E03C8u;
    SET_GPR_U32(ctx, 31, 0x2E03D0u);
    ctx->pc = 0x2E03CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03C8u;
    // 0x2e03cc: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A50u, 0x2E03C8u, 0x2E03D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03D0u;
label_2e03d0:
    // 0x2e03d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2e03d4:
    if (ctx->pc == 0x2E03D4u) {
        ctx->pc = 0x2E03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03D0u;
        // 0x2e03d4: 0xa620002a  sh          $zero, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03D8u;
        goto label_2e03d8;
    }
    ctx->pc = 0x2E03D0u;
    {
        const bool branch_taken_0x2e03d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e03d0) {
            ctx->pc = 0x2E03D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E03D0u;
            // 0x2e03d4: 0xa620002a  sh          $zero, 0x2A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E03E8u;
            goto label_2e03e8;
        }
    }
    ctx->pc = 0x2E03D8u;
label_2e03d8:
    // 0x2e03d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e03dc:
    // 0x2e03dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e03dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e03e0:
    // 0x2e03e0: 0x10000062  b           . + 4 + (0x62 << 2)
label_2e03e4:
    if (ctx->pc == 0x2E03E4u) {
        ctx->pc = 0x2E03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03E0u;
        // 0x2e03e4: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03E8u;
        goto label_2e03e8;
    }
    ctx->pc = 0x2E03E0u;
    {
        const bool branch_taken_0x2e03e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03E0u;
        // 0x2e03e4: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03e0) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E03E8u;
label_2e03e8:
    // 0x2e03e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e03ec:
    // 0x2e03ec: 0xc69501ac  lwc1        $f21, 0x1AC($s4)
    ctx->pc = 0x2e03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e03f0:
    // 0x2e03f0: 0xc08abac  jal         func_22AEB0
label_2e03f4:
    if (ctx->pc == 0x2E03F4u) {
        ctx->pc = 0x2E03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03F0u;
        // 0x2e03f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E03F8u;
        goto label_2e03f8;
    }
    ctx->pc = 0x2E03F0u;
    SET_GPR_U32(ctx, 31, 0x2E03F8u);
    ctx->pc = 0x2E03F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03F0u;
    // 0x2e03f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x2E03F0u, 0x2E03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03F8u;
label_2e03f8:
    // 0x2e03f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2e03fc:
    if (ctx->pc == 0x2E03FCu) {
        ctx->pc = 0x2E03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03F8u;
        // 0x2e03fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0400u;
        goto label_2e0400;
    }
    ctx->pc = 0x2E03F8u;
    {
        const bool branch_taken_0x2e03f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03F8u;
        // 0x2e03fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03f8) {
            ctx->pc = 0x2E0418u;
            goto label_2e0418;
        }
    }
    ctx->pc = 0x2E0400u;
label_2e0400:
    // 0x2e0400: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2e0400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e0404:
    // 0x2e0404: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2e0404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e0408:
    // 0x2e0408: 0x0  nop
    ctx->pc = 0x2e0408u;
    // NOP
label_2e040c:
    // 0x2e040c: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_2e0410:
    if (ctx->pc == 0x2E0410u) {
        ctx->pc = 0x2E0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E040Cu;
        // 0x2e0410: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0414u;
        goto label_2e0414;
    }
    ctx->pc = 0x2E040Cu;
    {
        const bool branch_taken_0x2e040c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E040Cu;
        // 0x2e0410: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e040c) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E0414u;
label_2e0414:
    // 0x2e0414: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e0414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0418:
    // 0x2e0418: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
label_2e041c:
    if (ctx->pc == 0x2E041Cu) {
        ctx->pc = 0x2E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0418u;
        // 0x2e041c: 0x10267c  dsll32      $a0, $s0, 25 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0420u;
        goto label_2e0420;
    }
    ctx->pc = 0x2E0418u;
    {
        const bool branch_taken_0x2e0418 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0418u;
        // 0x2e041c: 0x10267c  dsll32      $a0, $s0, 25 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0418) {
            ctx->pc = 0x2E044Cu;
            goto label_2e044c;
        }
    }
    ctx->pc = 0x2E0420u;
label_2e0420:
    // 0x2e0420: 0xdec20048  ld          $v0, 0x48($s6)
    ctx->pc = 0x2e0420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 72)));
label_2e0424:
    // 0x2e0424: 0x3403fdff  ori         $v1, $zero, 0xFDFF
    ctx->pc = 0x2e0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_2e0428:
    // 0x2e0428: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e0428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2e042c:
    // 0x2e042c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e042cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e0430:
    // 0x2e0430: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e0430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2e0434:
    // 0x2e0434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e0434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e0438:
    // 0x2e0438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e0438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2e043c:
    // 0x2e043c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e0440:
    // 0x2e0440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e0440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e0444:
    // 0x2e0444: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e0444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e0448:
    // 0x2e0448: 0xfec20048  sd          $v0, 0x48($s6)
    ctx->pc = 0x2e0448u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
label_2e044c:
    // 0x2e044c: 0xc7b40034  lwc1        $f20, 0x34($sp)
    ctx->pc = 0x2e044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e0450:
    // 0x2e0450: 0xc087502  jal         func_21D408
label_2e0454:
    if (ctx->pc == 0x2E0454u) {
        ctx->pc = 0x2E0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0450u;
        // 0x2e0454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0458u;
        goto label_2e0458;
    }
    ctx->pc = 0x2E0450u;
    SET_GPR_U32(ctx, 31, 0x2E0458u);
    ctx->pc = 0x2E0454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0450u;
    // 0x2e0454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E0450u, 0x2E0458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0458u;
label_2e0458:
    // 0x2e0458: 0x904502d5  lbu         $a1, 0x2D5($v0)
    ctx->pc = 0x2e0458u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_2e045c:
    // 0x2e045c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e045cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2e0460:
    // 0x2e0460: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e0464:
    // 0x2e0464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e0468:
    // 0x2e0468: 0xc0b7fbe  jal         func_2DFEF8
label_2e046c:
    if (ctx->pc == 0x2E046Cu) {
        ctx->pc = 0x2E046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0468u;
        // 0x2e046c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0470u;
        goto label_2e0470;
    }
    ctx->pc = 0x2E0468u;
    SET_GPR_U32(ctx, 31, 0x2E0470u);
    ctx->pc = 0x2E046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0468u;
    // 0x2e046c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEF8u, 0x2E0468u, 0x2E0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0470u;
label_2e0470:
    // 0x2e0470: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e0470u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2e0474:
    // 0x2e0474: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2e0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e0478:
    // 0x2e0478: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e0478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2e047c:
    // 0x2e047c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e047cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e0480:
    // 0x2e0480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e0484:
    // 0x2e0484: 0x0  nop
    ctx->pc = 0x2e0484u;
    // NOP
label_2e0488:
    // 0x2e0488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e0488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e048c:
    // 0x2e048c: 0x0  nop
    ctx->pc = 0x2e048cu;
    // NOP
label_2e0490:
    // 0x2e0490: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_2e0494:
    if (ctx->pc == 0x2E0494u) {
        ctx->pc = 0x2E0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0490u;
        // 0x2e0494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0498u;
        goto label_2e0498;
    }
    ctx->pc = 0x2E0490u;
    {
        const bool branch_taken_0x2e0490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0490u;
        // 0x2e0494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0490) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E0498u;
label_2e0498:
    // 0x2e0498: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e0498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e049c:
    // 0x2e049c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e04a0:
    // 0x2e04a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e04a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e04a4:
    // 0x2e04a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e04a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e04a8:
    // 0x2e04a8: 0xc0a3398  jal         func_28CE60
label_2e04ac:
    if (ctx->pc == 0x2E04ACu) {
        ctx->pc = 0x2E04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04A8u;
        // 0x2e04ac: 0x82250038  lb          $a1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04B0u;
        goto label_2e04b0;
    }
    ctx->pc = 0x2E04A8u;
    SET_GPR_U32(ctx, 31, 0x2E04B0u);
    ctx->pc = 0x2E04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04A8u;
    // 0x2e04ac: 0x82250038  lb          $a1, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2E04A8u, 0x2E04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04B0u;
label_2e04b0:
    // 0x2e04b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e04b4:
    // 0x2e04b4: 0x57c20001  bnel        $fp, $v0, . + 4 + (0x1 << 2)
label_2e04b8:
    if (ctx->pc == 0x2E04B8u) {
        ctx->pc = 0x2E04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04B4u;
        // 0x2e04b8: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04BCu;
        goto label_2e04bc;
    }
    ctx->pc = 0x2E04B4u;
    {
        const bool branch_taken_0x2e04b4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e04b4) {
            ctx->pc = 0x2E04B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E04B4u;
            // 0x2e04b8: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E04BCu;
            goto label_2e04bc;
        }
    }
    ctx->pc = 0x2E04BCu;
label_2e04bc:
    // 0x2e04bc: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2e04c0:
    if (ctx->pc == 0x2E04C0u) {
        ctx->pc = 0x2E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04BCu;
        // 0x2e04c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04C4u;
        goto label_2e04c4;
    }
    ctx->pc = 0x2E04BCu;
    {
        const bool branch_taken_0x2e04bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04BCu;
        // 0x2e04c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04bc) {
            ctx->pc = 0x2E04D4u;
            goto label_2e04d4;
        }
    }
    ctx->pc = 0x2E04C4u;
label_2e04c4:
    // 0x2e04c4: 0xc0beef8  jal         func_2FBBE0
label_2e04c8:
    if (ctx->pc == 0x2E04C8u) {
        ctx->pc = 0x2E04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04C4u;
        // 0x2e04c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04CCu;
        goto label_2e04cc;
    }
    ctx->pc = 0x2E04C4u;
    SET_GPR_U32(ctx, 31, 0x2E04CCu);
    ctx->pc = 0x2E04C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04C4u;
    // 0x2e04c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE0u, 0x2E04C4u, 0x2E04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04CCu;
label_2e04cc:
    // 0x2e04cc: 0x10000026  b           . + 4 + (0x26 << 2)
label_2e04d0:
    if (ctx->pc == 0x2E04D0u) {
        ctx->pc = 0x2E04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04CCu;
        // 0x2e04d0: 0xe6d4002c  swc1        $f20, 0x2C($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04D4u;
        goto label_2e04d4;
    }
    ctx->pc = 0x2E04CCu;
    {
        const bool branch_taken_0x2e04cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04CCu;
        // 0x2e04d0: 0xe6d4002c  swc1        $f20, 0x2C($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04cc) {
            ctx->pc = 0x2E0568u;
            goto label_2e0568;
        }
    }
    ctx->pc = 0x2E04D4u;
label_2e04d4:
    // 0x2e04d4: 0xc0a367c  jal         func_28D9F0
label_2e04d8:
    if (ctx->pc == 0x2E04D8u) {
        ctx->pc = 0x2E04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04D4u;
        // 0x2e04d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04DCu;
        goto label_2e04dc;
    }
    ctx->pc = 0x2E04D4u;
    SET_GPR_U32(ctx, 31, 0x2E04DCu);
    ctx->pc = 0x2E04D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04D4u;
    // 0x2e04d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E04D4u, 0x2E04DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04DCu;
label_2e04dc:
    // 0x2e04dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e04dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e04e0:
    // 0x2e04e0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2e04e4:
    if (ctx->pc == 0x2E04E4u) {
        ctx->pc = 0x2E04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04E0u;
        // 0x2e04e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E04E8u;
        goto label_2e04e8;
    }
    ctx->pc = 0x2E04E0u;
    {
        const bool branch_taken_0x2e04e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04E0u;
        // 0x2e04e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04e0) {
            ctx->pc = 0x2E050Cu;
            goto label_2e050c;
        }
    }
    ctx->pc = 0x2E04E8u;
label_2e04e8:
    // 0x2e04e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e04ec:
    // 0x2e04ec: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e04ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e04f0:
    // 0x2e04f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e04f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e04f4:
    // 0x2e04f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e04f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2e04f8:
    // 0x2e04f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e04f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2e04fc:
    // 0x2e04fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e04fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0500:
    // 0x2e0500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e0500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0504:
    // 0x2e0504: 0xc0beeb8  jal         func_2FBAE0
label_2e0508:
    if (ctx->pc == 0x2E0508u) {
        ctx->pc = 0x2E0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0504u;
        // 0x2e0508: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E050Cu;
        goto label_2e050c;
    }
    ctx->pc = 0x2E0504u;
    SET_GPR_U32(ctx, 31, 0x2E050Cu);
    ctx->pc = 0x2E0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0504u;
    // 0x2e0508: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBAE0u, 0x2E0504u, 0x2E050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E050Cu;
label_2e050c:
    // 0x2e050c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0510:
    // 0x2e0510: 0xc136b80  jal         func_4DAE00
label_2e0514:
    if (ctx->pc == 0x2E0514u) {
        ctx->pc = 0x2E0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0510u;
        // 0x2e0514: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0518u;
        goto label_2e0518;
    }
    ctx->pc = 0x2E0510u;
    SET_GPR_U32(ctx, 31, 0x2E0518u);
    ctx->pc = 0x2E0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0510u;
    // 0x2e0514: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2E0510u, 0x2E0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0518u;
label_2e0518:
    // 0x2e0518: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2e051c:
    if (ctx->pc == 0x2E051Cu) {
        ctx->pc = 0x2E051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0518u;
        // 0x2e051c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0520u;
        goto label_2e0520;
    }
    ctx->pc = 0x2E0518u;
    {
        const bool branch_taken_0x2e0518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0518u;
        // 0x2e051c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0518) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E0520u;
label_2e0520:
    // 0x2e0520: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0524:
    // 0x2e0524: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2e0524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_2e0528:
    // 0x2e0528: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2e052c:
    if (ctx->pc == 0x2E052Cu) {
        ctx->pc = 0x2E052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0528u;
        // 0x2e052c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0530u;
        goto label_2e0530;
    }
    ctx->pc = 0x2E0528u;
    {
        const bool branch_taken_0x2e0528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0528u;
        // 0x2e052c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0528) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E0530u;
label_2e0530:
    // 0x2e0530: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2e0530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2e0534:
    // 0x2e0534: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e0534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e0538:
    // 0x2e0538: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x2e0538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_2e053c:
    // 0x2e053c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2e053cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2e0540:
    // 0x2e0540: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e0540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e0544:
    // 0x2e0544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e0544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0548:
    // 0x2e0548: 0xc088708  jal         func_221C20
label_2e054c:
    if (ctx->pc == 0x2E054Cu) {
        ctx->pc = 0x2E054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0548u;
        // 0x2e054c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0550u;
        goto label_2e0550;
    }
    ctx->pc = 0x2E0548u;
    SET_GPR_U32(ctx, 31, 0x2E0550u);
    ctx->pc = 0x2E054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0548u;
    // 0x2e054c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2E0548u, 0x2E0550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0550u;
label_2e0550:
    // 0x2e0550: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x2e0550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2e0554:
    // 0x2e0554: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e0554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0558:
    // 0x2e0558: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e055c:
    // 0x2e055c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2e055cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2e0560:
    // 0x2e0560: 0xc0a3398  jal         func_28CE60
label_2e0564:
    if (ctx->pc == 0x2E0564u) {
        ctx->pc = 0x2E0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0560u;
        // 0x2e0564: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0568u;
        goto label_2e0568;
    }
    ctx->pc = 0x2E0560u;
    SET_GPR_U32(ctx, 31, 0x2E0568u);
    ctx->pc = 0x2E0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0560u;
    // 0x2e0564: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2E0560u, 0x2E0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0568u;
label_2e0568:
    // 0x2e0568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e056c:
    // 0x2e056c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2e056cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e0570:
    // 0x2e0570: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2e0570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e0574:
    // 0x2e0574: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2e0574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e0578:
    // 0x2e0578: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2e0578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e057c:
    // 0x2e057c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2e057cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e0580:
    // 0x2e0580: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2e0580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e0584:
    // 0x2e0584: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e0584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e0588:
    // 0x2e0588: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2e0588u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e058c:
    // 0x2e058c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2e058cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e0590:
    // 0x2e0590: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e0590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e0594:
    // 0x2e0594: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2e0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e0598:
    // 0x2e0598: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2e0598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e059c:
    // 0x2e059c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2e059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e05a0:
    // 0x2e05a0: 0x3e00008  jr          $ra
label_2e05a4:
    if (ctx->pc == 0x2E05A4u) {
        ctx->pc = 0x2E05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05A0u;
        // 0x2e05a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E05A8u;
        goto label_fallthrough_0x2e05a0;
    }
    ctx->pc = 0x2E05A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05A0u;
        // 0x2e05a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E05A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e05a0:
    ctx->pc = 0x2E05A8u;
}
