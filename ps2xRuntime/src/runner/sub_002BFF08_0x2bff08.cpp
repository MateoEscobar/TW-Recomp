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

// Function: sub_002BFF08
// Address: 0x2bff08 - 0x2c0430
void sub_002BFF08_0x2bff08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFF08_0x2bff08");
#endif

    switch (ctx->pc) {
        case 0x2bff08u: goto label_2bff08;
        case 0x2bff0cu: goto label_2bff0c;
        case 0x2bff10u: goto label_2bff10;
        case 0x2bff14u: goto label_2bff14;
        case 0x2bff18u: goto label_2bff18;
        case 0x2bff1cu: goto label_2bff1c;
        case 0x2bff20u: goto label_2bff20;
        case 0x2bff24u: goto label_2bff24;
        case 0x2bff28u: goto label_2bff28;
        case 0x2bff2cu: goto label_2bff2c;
        case 0x2bff30u: goto label_2bff30;
        case 0x2bff34u: goto label_2bff34;
        case 0x2bff38u: goto label_2bff38;
        case 0x2bff3cu: goto label_2bff3c;
        case 0x2bff40u: goto label_2bff40;
        case 0x2bff44u: goto label_2bff44;
        case 0x2bff48u: goto label_2bff48;
        case 0x2bff4cu: goto label_2bff4c;
        case 0x2bff50u: goto label_2bff50;
        case 0x2bff54u: goto label_2bff54;
        case 0x2bff58u: goto label_2bff58;
        case 0x2bff5cu: goto label_2bff5c;
        case 0x2bff60u: goto label_2bff60;
        case 0x2bff64u: goto label_2bff64;
        case 0x2bff68u: goto label_2bff68;
        case 0x2bff6cu: goto label_2bff6c;
        case 0x2bff70u: goto label_2bff70;
        case 0x2bff74u: goto label_2bff74;
        case 0x2bff78u: goto label_2bff78;
        case 0x2bff7cu: goto label_2bff7c;
        case 0x2bff80u: goto label_2bff80;
        case 0x2bff84u: goto label_2bff84;
        case 0x2bff88u: goto label_2bff88;
        case 0x2bff8cu: goto label_2bff8c;
        case 0x2bff90u: goto label_2bff90;
        case 0x2bff94u: goto label_2bff94;
        case 0x2bff98u: goto label_2bff98;
        case 0x2bff9cu: goto label_2bff9c;
        case 0x2bffa0u: goto label_2bffa0;
        case 0x2bffa4u: goto label_2bffa4;
        case 0x2bffa8u: goto label_2bffa8;
        case 0x2bffacu: goto label_2bffac;
        case 0x2bffb0u: goto label_2bffb0;
        case 0x2bffb4u: goto label_2bffb4;
        case 0x2bffb8u: goto label_2bffb8;
        case 0x2bffbcu: goto label_2bffbc;
        case 0x2bffc0u: goto label_2bffc0;
        case 0x2bffc4u: goto label_2bffc4;
        case 0x2bffc8u: goto label_2bffc8;
        case 0x2bffccu: goto label_2bffcc;
        case 0x2bffd0u: goto label_2bffd0;
        case 0x2bffd4u: goto label_2bffd4;
        case 0x2bffd8u: goto label_2bffd8;
        case 0x2bffdcu: goto label_2bffdc;
        case 0x2bffe0u: goto label_2bffe0;
        case 0x2bffe4u: goto label_2bffe4;
        case 0x2bffe8u: goto label_2bffe8;
        case 0x2bffecu: goto label_2bffec;
        case 0x2bfff0u: goto label_2bfff0;
        case 0x2bfff4u: goto label_2bfff4;
        case 0x2bfff8u: goto label_2bfff8;
        case 0x2bfffcu: goto label_2bfffc;
        case 0x2c0000u: goto label_2c0000;
        case 0x2c0004u: goto label_2c0004;
        case 0x2c0008u: goto label_2c0008;
        case 0x2c000cu: goto label_2c000c;
        case 0x2c0010u: goto label_2c0010;
        case 0x2c0014u: goto label_2c0014;
        case 0x2c0018u: goto label_2c0018;
        case 0x2c001cu: goto label_2c001c;
        case 0x2c0020u: goto label_2c0020;
        case 0x2c0024u: goto label_2c0024;
        case 0x2c0028u: goto label_2c0028;
        case 0x2c002cu: goto label_2c002c;
        case 0x2c0030u: goto label_2c0030;
        case 0x2c0034u: goto label_2c0034;
        case 0x2c0038u: goto label_2c0038;
        case 0x2c003cu: goto label_2c003c;
        case 0x2c0040u: goto label_2c0040;
        case 0x2c0044u: goto label_2c0044;
        case 0x2c0048u: goto label_2c0048;
        case 0x2c004cu: goto label_2c004c;
        case 0x2c0050u: goto label_2c0050;
        case 0x2c0054u: goto label_2c0054;
        case 0x2c0058u: goto label_2c0058;
        case 0x2c005cu: goto label_2c005c;
        case 0x2c0060u: goto label_2c0060;
        case 0x2c0064u: goto label_2c0064;
        case 0x2c0068u: goto label_2c0068;
        case 0x2c006cu: goto label_2c006c;
        case 0x2c0070u: goto label_2c0070;
        case 0x2c0074u: goto label_2c0074;
        case 0x2c0078u: goto label_2c0078;
        case 0x2c007cu: goto label_2c007c;
        case 0x2c0080u: goto label_2c0080;
        case 0x2c0084u: goto label_2c0084;
        case 0x2c0088u: goto label_2c0088;
        case 0x2c008cu: goto label_2c008c;
        case 0x2c0090u: goto label_2c0090;
        case 0x2c0094u: goto label_2c0094;
        case 0x2c0098u: goto label_2c0098;
        case 0x2c009cu: goto label_2c009c;
        case 0x2c00a0u: goto label_2c00a0;
        case 0x2c00a4u: goto label_2c00a4;
        case 0x2c00a8u: goto label_2c00a8;
        case 0x2c00acu: goto label_2c00ac;
        case 0x2c00b0u: goto label_2c00b0;
        case 0x2c00b4u: goto label_2c00b4;
        case 0x2c00b8u: goto label_2c00b8;
        case 0x2c00bcu: goto label_2c00bc;
        case 0x2c00c0u: goto label_2c00c0;
        case 0x2c00c4u: goto label_2c00c4;
        case 0x2c00c8u: goto label_2c00c8;
        case 0x2c00ccu: goto label_2c00cc;
        case 0x2c00d0u: goto label_2c00d0;
        case 0x2c00d4u: goto label_2c00d4;
        case 0x2c00d8u: goto label_2c00d8;
        case 0x2c00dcu: goto label_2c00dc;
        case 0x2c00e0u: goto label_2c00e0;
        case 0x2c00e4u: goto label_2c00e4;
        case 0x2c00e8u: goto label_2c00e8;
        case 0x2c00ecu: goto label_2c00ec;
        case 0x2c00f0u: goto label_2c00f0;
        case 0x2c00f4u: goto label_2c00f4;
        case 0x2c00f8u: goto label_2c00f8;
        case 0x2c00fcu: goto label_2c00fc;
        case 0x2c0100u: goto label_2c0100;
        case 0x2c0104u: goto label_2c0104;
        case 0x2c0108u: goto label_2c0108;
        case 0x2c010cu: goto label_2c010c;
        case 0x2c0110u: goto label_2c0110;
        case 0x2c0114u: goto label_2c0114;
        case 0x2c0118u: goto label_2c0118;
        case 0x2c011cu: goto label_2c011c;
        case 0x2c0120u: goto label_2c0120;
        case 0x2c0124u: goto label_2c0124;
        case 0x2c0128u: goto label_2c0128;
        case 0x2c012cu: goto label_2c012c;
        case 0x2c0130u: goto label_2c0130;
        case 0x2c0134u: goto label_2c0134;
        case 0x2c0138u: goto label_2c0138;
        case 0x2c013cu: goto label_2c013c;
        case 0x2c0140u: goto label_2c0140;
        case 0x2c0144u: goto label_2c0144;
        case 0x2c0148u: goto label_2c0148;
        case 0x2c014cu: goto label_2c014c;
        case 0x2c0150u: goto label_2c0150;
        case 0x2c0154u: goto label_2c0154;
        case 0x2c0158u: goto label_2c0158;
        case 0x2c015cu: goto label_2c015c;
        case 0x2c0160u: goto label_2c0160;
        case 0x2c0164u: goto label_2c0164;
        case 0x2c0168u: goto label_2c0168;
        case 0x2c016cu: goto label_2c016c;
        case 0x2c0170u: goto label_2c0170;
        case 0x2c0174u: goto label_2c0174;
        case 0x2c0178u: goto label_2c0178;
        case 0x2c017cu: goto label_2c017c;
        case 0x2c0180u: goto label_2c0180;
        case 0x2c0184u: goto label_2c0184;
        case 0x2c0188u: goto label_2c0188;
        case 0x2c018cu: goto label_2c018c;
        case 0x2c0190u: goto label_2c0190;
        case 0x2c0194u: goto label_2c0194;
        case 0x2c0198u: goto label_2c0198;
        case 0x2c019cu: goto label_2c019c;
        case 0x2c01a0u: goto label_2c01a0;
        case 0x2c01a4u: goto label_2c01a4;
        case 0x2c01a8u: goto label_2c01a8;
        case 0x2c01acu: goto label_2c01ac;
        case 0x2c01b0u: goto label_2c01b0;
        case 0x2c01b4u: goto label_2c01b4;
        case 0x2c01b8u: goto label_2c01b8;
        case 0x2c01bcu: goto label_2c01bc;
        case 0x2c01c0u: goto label_2c01c0;
        case 0x2c01c4u: goto label_2c01c4;
        case 0x2c01c8u: goto label_2c01c8;
        case 0x2c01ccu: goto label_2c01cc;
        case 0x2c01d0u: goto label_2c01d0;
        case 0x2c01d4u: goto label_2c01d4;
        case 0x2c01d8u: goto label_2c01d8;
        case 0x2c01dcu: goto label_2c01dc;
        case 0x2c01e0u: goto label_2c01e0;
        case 0x2c01e4u: goto label_2c01e4;
        case 0x2c01e8u: goto label_2c01e8;
        case 0x2c01ecu: goto label_2c01ec;
        case 0x2c01f0u: goto label_2c01f0;
        case 0x2c01f4u: goto label_2c01f4;
        case 0x2c01f8u: goto label_2c01f8;
        case 0x2c01fcu: goto label_2c01fc;
        case 0x2c0200u: goto label_2c0200;
        case 0x2c0204u: goto label_2c0204;
        case 0x2c0208u: goto label_2c0208;
        case 0x2c020cu: goto label_2c020c;
        case 0x2c0210u: goto label_2c0210;
        case 0x2c0214u: goto label_2c0214;
        case 0x2c0218u: goto label_2c0218;
        case 0x2c021cu: goto label_2c021c;
        case 0x2c0220u: goto label_2c0220;
        case 0x2c0224u: goto label_2c0224;
        case 0x2c0228u: goto label_2c0228;
        case 0x2c022cu: goto label_2c022c;
        case 0x2c0230u: goto label_2c0230;
        case 0x2c0234u: goto label_2c0234;
        case 0x2c0238u: goto label_2c0238;
        case 0x2c023cu: goto label_2c023c;
        case 0x2c0240u: goto label_2c0240;
        case 0x2c0244u: goto label_2c0244;
        case 0x2c0248u: goto label_2c0248;
        case 0x2c024cu: goto label_2c024c;
        case 0x2c0250u: goto label_2c0250;
        case 0x2c0254u: goto label_2c0254;
        case 0x2c0258u: goto label_2c0258;
        case 0x2c025cu: goto label_2c025c;
        case 0x2c0260u: goto label_2c0260;
        case 0x2c0264u: goto label_2c0264;
        case 0x2c0268u: goto label_2c0268;
        case 0x2c026cu: goto label_2c026c;
        case 0x2c0270u: goto label_2c0270;
        case 0x2c0274u: goto label_2c0274;
        case 0x2c0278u: goto label_2c0278;
        case 0x2c027cu: goto label_2c027c;
        case 0x2c0280u: goto label_2c0280;
        case 0x2c0284u: goto label_2c0284;
        case 0x2c0288u: goto label_2c0288;
        case 0x2c028cu: goto label_2c028c;
        case 0x2c0290u: goto label_2c0290;
        case 0x2c0294u: goto label_2c0294;
        case 0x2c0298u: goto label_2c0298;
        case 0x2c029cu: goto label_2c029c;
        case 0x2c02a0u: goto label_2c02a0;
        case 0x2c02a4u: goto label_2c02a4;
        case 0x2c02a8u: goto label_2c02a8;
        case 0x2c02acu: goto label_2c02ac;
        case 0x2c02b0u: goto label_2c02b0;
        case 0x2c02b4u: goto label_2c02b4;
        case 0x2c02b8u: goto label_2c02b8;
        case 0x2c02bcu: goto label_2c02bc;
        case 0x2c02c0u: goto label_2c02c0;
        case 0x2c02c4u: goto label_2c02c4;
        case 0x2c02c8u: goto label_2c02c8;
        case 0x2c02ccu: goto label_2c02cc;
        case 0x2c02d0u: goto label_2c02d0;
        case 0x2c02d4u: goto label_2c02d4;
        case 0x2c02d8u: goto label_2c02d8;
        case 0x2c02dcu: goto label_2c02dc;
        case 0x2c02e0u: goto label_2c02e0;
        case 0x2c02e4u: goto label_2c02e4;
        case 0x2c02e8u: goto label_2c02e8;
        case 0x2c02ecu: goto label_2c02ec;
        case 0x2c02f0u: goto label_2c02f0;
        case 0x2c02f4u: goto label_2c02f4;
        case 0x2c02f8u: goto label_2c02f8;
        case 0x2c02fcu: goto label_2c02fc;
        case 0x2c0300u: goto label_2c0300;
        case 0x2c0304u: goto label_2c0304;
        case 0x2c0308u: goto label_2c0308;
        case 0x2c030cu: goto label_2c030c;
        case 0x2c0310u: goto label_2c0310;
        case 0x2c0314u: goto label_2c0314;
        case 0x2c0318u: goto label_2c0318;
        case 0x2c031cu: goto label_2c031c;
        case 0x2c0320u: goto label_2c0320;
        case 0x2c0324u: goto label_2c0324;
        case 0x2c0328u: goto label_2c0328;
        case 0x2c032cu: goto label_2c032c;
        case 0x2c0330u: goto label_2c0330;
        case 0x2c0334u: goto label_2c0334;
        case 0x2c0338u: goto label_2c0338;
        case 0x2c033cu: goto label_2c033c;
        case 0x2c0340u: goto label_2c0340;
        case 0x2c0344u: goto label_2c0344;
        case 0x2c0348u: goto label_2c0348;
        case 0x2c034cu: goto label_2c034c;
        case 0x2c0350u: goto label_2c0350;
        case 0x2c0354u: goto label_2c0354;
        case 0x2c0358u: goto label_2c0358;
        case 0x2c035cu: goto label_2c035c;
        case 0x2c0360u: goto label_2c0360;
        case 0x2c0364u: goto label_2c0364;
        case 0x2c0368u: goto label_2c0368;
        case 0x2c036cu: goto label_2c036c;
        case 0x2c0370u: goto label_2c0370;
        case 0x2c0374u: goto label_2c0374;
        case 0x2c0378u: goto label_2c0378;
        case 0x2c037cu: goto label_2c037c;
        case 0x2c0380u: goto label_2c0380;
        case 0x2c0384u: goto label_2c0384;
        case 0x2c0388u: goto label_2c0388;
        case 0x2c038cu: goto label_2c038c;
        case 0x2c0390u: goto label_2c0390;
        case 0x2c0394u: goto label_2c0394;
        case 0x2c0398u: goto label_2c0398;
        case 0x2c039cu: goto label_2c039c;
        case 0x2c03a0u: goto label_2c03a0;
        case 0x2c03a4u: goto label_2c03a4;
        case 0x2c03a8u: goto label_2c03a8;
        case 0x2c03acu: goto label_2c03ac;
        case 0x2c03b0u: goto label_2c03b0;
        case 0x2c03b4u: goto label_2c03b4;
        case 0x2c03b8u: goto label_2c03b8;
        case 0x2c03bcu: goto label_2c03bc;
        case 0x2c03c0u: goto label_2c03c0;
        case 0x2c03c4u: goto label_2c03c4;
        case 0x2c03c8u: goto label_2c03c8;
        case 0x2c03ccu: goto label_2c03cc;
        case 0x2c03d0u: goto label_2c03d0;
        case 0x2c03d4u: goto label_2c03d4;
        case 0x2c03d8u: goto label_2c03d8;
        case 0x2c03dcu: goto label_2c03dc;
        case 0x2c03e0u: goto label_2c03e0;
        case 0x2c03e4u: goto label_2c03e4;
        case 0x2c03e8u: goto label_2c03e8;
        case 0x2c03ecu: goto label_2c03ec;
        case 0x2c03f0u: goto label_2c03f0;
        case 0x2c03f4u: goto label_2c03f4;
        case 0x2c03f8u: goto label_2c03f8;
        case 0x2c03fcu: goto label_2c03fc;
        case 0x2c0400u: goto label_2c0400;
        case 0x2c0404u: goto label_2c0404;
        case 0x2c0408u: goto label_2c0408;
        case 0x2c040cu: goto label_2c040c;
        case 0x2c0410u: goto label_2c0410;
        case 0x2c0414u: goto label_2c0414;
        case 0x2c0418u: goto label_2c0418;
        case 0x2c041cu: goto label_2c041c;
        case 0x2c0420u: goto label_2c0420;
        case 0x2c0424u: goto label_2c0424;
        case 0x2c0428u: goto label_2c0428;
        case 0x2c042cu: goto label_2c042c;
        default: break;
    }

    ctx->pc = 0x2bff08u;

label_2bff08:
    // 0x2bff08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bff08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2bff0c:
    // 0x2bff0c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2bff10:
    // 0x2bff10: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2bff14:
    // 0x2bff14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bff14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bff18:
    // 0x2bff18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2bff1c:
    // 0x2bff1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2bff20:
    // 0x2bff20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bff24:
    // 0x2bff24: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bff24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2bff28:
    // 0x2bff28: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x2bff28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_2bff2c:
    // 0x2bff2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bff30:
    // 0x2bff30: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x2bff30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2bff34:
    // 0x2bff34: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
label_2bff38:
    if (ctx->pc == 0x2BFF38u) {
        ctx->pc = 0x2BFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF34u;
        // 0x2bff38: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF3Cu;
        goto label_2bff3c;
    }
    ctx->pc = 0x2BFF34u;
    {
        const bool branch_taken_0x2bff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF34u;
        // 0x2bff38: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff34) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2BFF3Cu;
label_2bff3c:
    // 0x2bff3c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2bff40:
    // 0x2bff40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2bff40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2bff44:
    // 0x2bff44: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2bff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_2bff48:
    // 0x2bff48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bff4c:
    // 0x2bff4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bff50:
    // 0x2bff50: 0x800008  jr          $a0
label_2bff54:
    if (ctx->pc == 0x2BFF54u) {
        ctx->pc = 0x2BFF58u;
        goto label_2bff58;
    }
    ctx->pc = 0x2BFF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BFF58u: goto label_2bff58;
            case 0x2C0064u: goto label_2c0064;
            case 0x2C039Cu: goto label_2c039c;
            case 0x2C03B8u: goto label_2c03b8;
            case 0x2C0404u: goto label_2c0404;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFF50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BFF58u;
label_2bff58:
    // 0x2bff58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bff5c:
    // 0x2bff5c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2bff5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2bff60:
    // 0x2bff60: 0x1c60012b  bgtz        $v1, . + 4 + (0x12B << 2)
label_2bff64:
    if (ctx->pc == 0x2BFF64u) {
        ctx->pc = 0x2BFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF60u;
        // 0x2bff64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF68u;
        goto label_2bff68;
    }
    ctx->pc = 0x2BFF60u;
    {
        const bool branch_taken_0x2bff60 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2BFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF60u;
        // 0x2bff64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff60) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2BFF68u;
label_2bff68:
    // 0x2bff68: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2bff68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2bff6c:
    // 0x2bff6c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2bff70:
    if (ctx->pc == 0x2BFF70u) {
        ctx->pc = 0x2BFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF6Cu;
        // 0x2bff70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF74u;
        goto label_2bff74;
    }
    ctx->pc = 0x2BFF6Cu;
    {
        const bool branch_taken_0x2bff6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF6Cu;
        // 0x2bff70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff6c) {
            ctx->pc = 0x2BFF88u;
            goto label_2bff88;
        }
    }
    ctx->pc = 0x2BFF74u;
label_2bff74:
    // 0x2bff74: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2bff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2bff78:
    // 0x2bff78: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2bff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bff7c:
    // 0x2bff7c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2bff7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bff80:
    // 0x2bff80: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
label_2bff84:
    if (ctx->pc == 0x2BFF84u) {
        ctx->pc = 0x2BFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF80u;
        // 0x2bff84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF88u;
        goto label_2bff88;
    }
    ctx->pc = 0x2BFF80u;
    {
        const bool branch_taken_0x2bff80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF80u;
        // 0x2bff84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff80) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2BFF88u;
label_2bff88:
    // 0x2bff88: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bff88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bff8c:
    // 0x2bff8c: 0xc0cd4e4  jal         func_335390
label_2bff90:
    if (ctx->pc == 0x2BFF90u) {
        ctx->pc = 0x2BFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF8Cu;
        // 0x2bff90: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF94u;
        goto label_2bff94;
    }
    ctx->pc = 0x2BFF8Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF94u);
    ctx->pc = 0x2BFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFF8Cu;
    // 0x2bff90: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2BFF8Cu, 0x2BFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF94u;
label_2bff94:
    // 0x2bff94: 0x8623001c  lh          $v1, 0x1C($s1)
    ctx->pc = 0x2bff94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_2bff98:
    // 0x2bff98: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bff98u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2bff9c:
    // 0x2bff9c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2bffa0:
    if (ctx->pc == 0x2BFFA0u) {
        ctx->pc = 0x2BFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF9Cu;
        // 0x2bffa0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFA4u;
        goto label_2bffa4;
    }
    ctx->pc = 0x2BFF9Cu;
    {
        const bool branch_taken_0x2bff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bff9c) {
            ctx->pc = 0x2BFFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFF9Cu;
            // 0x2bffa0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFFA4u;
            goto label_2bffa4;
        }
    }
    ctx->pc = 0x2BFFA4u;
label_2bffa4:
    // 0x2bffa4: 0x2010  mfhi        $a0
    ctx->pc = 0x2bffa4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2bffa8:
    // 0x2bffa8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2bffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2bffac:
    // 0x2bffac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2bffb0:
    if (ctx->pc == 0x2BFFB0u) {
        ctx->pc = 0x2BFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFACu;
        // 0x2bffb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFB4u;
        goto label_2bffb4;
    }
    ctx->pc = 0x2BFFACu;
    {
        const bool branch_taken_0x2bffac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFACu;
        // 0x2bffb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffac) {
            ctx->pc = 0x2BFFC8u;
            goto label_2bffc8;
        }
    }
    ctx->pc = 0x2BFFB4u;
label_2bffb4:
    // 0x2bffb4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2bffb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bffb8:
    // 0x2bffb8: 0x0  nop
    ctx->pc = 0x2bffb8u;
    // NOP
label_2bffbc:
    // 0x2bffbc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2bffbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2bffc0:
    // 0x2bffc0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2bffc4:
    if (ctx->pc == 0x2BFFC4u) {
        ctx->pc = 0x2BFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFC0u;
        // 0x2bffc4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFC8u;
        goto label_2bffc8;
    }
    ctx->pc = 0x2BFFC0u;
    {
        const bool branch_taken_0x2bffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFC0u;
        // 0x2bffc4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffc0) {
            ctx->pc = 0x2BFFE4u;
            goto label_2bffe4;
        }
    }
    ctx->pc = 0x2BFFC8u;
label_2bffc8:
    // 0x2bffc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2bffcc:
    // 0x2bffcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bffccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2bffd0:
    // 0x2bffd0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2bffd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bffd4:
    // 0x2bffd4: 0x0  nop
    ctx->pc = 0x2bffd4u;
    // NOP
label_2bffd8:
    // 0x2bffd8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2bffd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2bffdc:
    // 0x2bffdc: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2bffdcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2bffe0:
    // 0x2bffe0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2bffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2bffe4:
    // 0x2bffe4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bffe8:
    // 0x2bffe8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2bffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2bffec:
    // 0x2bffec: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2bffecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2bfff0:
    // 0x2bfff0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2bfff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2bfff4:
    // 0x2bfff4: 0x60f809  jalr        $v1
label_2bfff8:
    if (ctx->pc == 0x2BFFF8u) {
        ctx->pc = 0x2BFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFF4u;
        // 0x2bfff8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFFCu;
        goto label_2bfffc;
    }
    ctx->pc = 0x2BFFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BFFFCu);
        ctx->pc = 0x2BFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFF4u;
        // 0x2bfff8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFFF4u, 0x2BFFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BFFFCu;
label_2bfffc:
    // 0x2bfffc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2bfffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0000:
    // 0x2c0000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c0000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c0004:
    // 0x2c0004: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c0004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c0008:
    // 0x2c0008: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c0008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c000c:
    // 0x2c000c: 0xc0a92ba  jal         func_2A4AE8
label_2c0010:
    if (ctx->pc == 0x2C0010u) {
        ctx->pc = 0x2C0010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C000Cu;
        // 0x2c0010: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0014u;
        goto label_2c0014;
    }
    ctx->pc = 0x2C000Cu;
    SET_GPR_U32(ctx, 31, 0x2C0014u);
    ctx->pc = 0x2C0010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C000Cu;
    // 0x2c0010: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4AE8u, 0x2C000Cu, 0x2C0014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0014u;
label_2c0014:
    // 0x2c0014: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_2c0018:
    if (ctx->pc == 0x2C0018u) {
        ctx->pc = 0x2C0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0014u;
        // 0x2c0018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C001Cu;
        goto label_2c001c;
    }
    ctx->pc = 0x2C0014u;
    {
        const bool branch_taken_0x2c0014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0014u;
        // 0x2c0018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0014) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C001Cu;
label_2c001c:
    // 0x2c001c: 0xc0a367c  jal         func_28D9F0
label_2c0020:
    if (ctx->pc == 0x2C0020u) {
        ctx->pc = 0x2C0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C001Cu;
        // 0x2c0020: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0024u;
        goto label_2c0024;
    }
    ctx->pc = 0x2C001Cu;
    SET_GPR_U32(ctx, 31, 0x2C0024u);
    ctx->pc = 0x2C0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C001Cu;
    // 0x2c0020: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C001Cu, 0x2C0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0024u;
label_2c0024:
    // 0x2c0024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0028:
    // 0x2c0028: 0x108000f3  beqz        $a0, . + 4 + (0xF3 << 2)
label_2c002c:
    if (ctx->pc == 0x2C002Cu) {
        ctx->pc = 0x2C002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0028u;
        // 0x2c002c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0030u;
        goto label_2c0030;
    }
    ctx->pc = 0x2C0028u;
    {
        const bool branch_taken_0x2c0028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0028u;
        // 0x2c002c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0028) {
            ctx->pc = 0x2C03F8u;
            goto label_2c03f8;
        }
    }
    ctx->pc = 0x2C0030u;
label_2c0030:
    // 0x2c0030: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c0030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0034:
    // 0x2c0034: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c0034u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c0038:
    // 0x2c0038: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c0038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c003c:
    // 0x2c003c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c003cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c0040:
    // 0x2c0040: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c0040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c0044:
    // 0x2c0044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c0044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0048:
    // 0x2c0048: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c0048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c004c:
    // 0x2c004c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c004cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0050:
    // 0x2c0050: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2c0050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c0054:
    // 0x2c0054: 0xc0bee7a  jal         func_2FB9E8
label_2c0058:
    if (ctx->pc == 0x2C0058u) {
        ctx->pc = 0x2C0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0054u;
        // 0x2c0058: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C005Cu;
        goto label_2c005c;
    }
    ctx->pc = 0x2C0054u;
    SET_GPR_U32(ctx, 31, 0x2C005Cu);
    ctx->pc = 0x2C0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0054u;
    // 0x2c0058: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C0054u, 0x2C005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C005Cu;
label_2c005c:
    // 0x2c005c: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2c0060:
    if (ctx->pc == 0x2C0060u) {
        ctx->pc = 0x2C0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C005Cu;
        // 0x2c0060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0064u;
        goto label_2c0064;
    }
    ctx->pc = 0x2C005Cu;
    {
        const bool branch_taken_0x2c005c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C005Cu;
        // 0x2c0060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c005c) {
            ctx->pc = 0x2C03FCu;
            goto label_2c03fc;
        }
    }
    ctx->pc = 0x2C0064u;
label_2c0064:
    // 0x2c0064: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c0064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0068:
    // 0x2c0068: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c006c:
    // 0x2c006c: 0x1c6000e8  bgtz        $v1, . + 4 + (0xE8 << 2)
label_2c0070:
    if (ctx->pc == 0x2C0070u) {
        ctx->pc = 0x2C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C006Cu;
        // 0x2c0070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0074u;
        goto label_2c0074;
    }
    ctx->pc = 0x2C006Cu;
    {
        const bool branch_taken_0x2c006c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C006Cu;
        // 0x2c0070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c006c) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C0074u;
label_2c0074:
    // 0x2c0074: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2c0074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c0078:
    // 0x2c0078: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2c007c:
    if (ctx->pc == 0x2C007Cu) {
        ctx->pc = 0x2C007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0078u;
        // 0x2c007c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0080u;
        goto label_2c0080;
    }
    ctx->pc = 0x2C0078u;
    {
        const bool branch_taken_0x2c0078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0078u;
        // 0x2c007c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0078) {
            ctx->pc = 0x2C0094u;
            goto label_2c0094;
        }
    }
    ctx->pc = 0x2C0080u;
label_2c0080:
    // 0x2c0080: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c0080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c0084:
    // 0x2c0084: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c0084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c0088:
    // 0x2c0088: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2c0088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c008c:
    // 0x2c008c: 0x146000e0  bnez        $v1, . + 4 + (0xE0 << 2)
label_2c0090:
    if (ctx->pc == 0x2C0090u) {
        ctx->pc = 0x2C0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C008Cu;
        // 0x2c0090: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0094u;
        goto label_2c0094;
    }
    ctx->pc = 0x2C008Cu;
    {
        const bool branch_taken_0x2c008c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C008Cu;
        // 0x2c0090: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c008c) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C0094u;
label_2c0094:
    // 0x2c0094: 0xc087502  jal         func_21D408
label_2c0098:
    if (ctx->pc == 0x2C0098u) {
        ctx->pc = 0x2C0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0094u;
        // 0x2c0098: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C009Cu;
        goto label_2c009c;
    }
    ctx->pc = 0x2C0094u;
    SET_GPR_U32(ctx, 31, 0x2C009Cu);
    ctx->pc = 0x2C0098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0094u;
    // 0x2c0098: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C0094u, 0x2C009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C009Cu;
label_2c009c:
    // 0x2c009c: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x2c009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
label_2c00a0:
    // 0x2c00a0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_2c00a4:
    if (ctx->pc == 0x2C00A4u) {
        ctx->pc = 0x2C00A8u;
        goto label_2c00a8;
    }
    ctx->pc = 0x2C00A0u;
    {
        const bool branch_taken_0x2c00a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c00a0) {
            ctx->pc = 0x2C00F8u;
            goto label_2c00f8;
        }
    }
    ctx->pc = 0x2C00A8u;
label_2c00a8:
    // 0x2c00a8: 0xc089fac  jal         func_227EB0
label_2c00ac:
    if (ctx->pc == 0x2C00ACu) {
        ctx->pc = 0x2C00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00A8u;
        // 0x2c00ac: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00B0u;
        goto label_2c00b0;
    }
    ctx->pc = 0x2C00A8u;
    SET_GPR_U32(ctx, 31, 0x2C00B0u);
    ctx->pc = 0x2C00ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00A8u;
    // 0x2c00ac: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2C00A8u, 0x2C00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00B0u;
label_2c00b0:
    // 0x2c00b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2c00b4:
    if (ctx->pc == 0x2C00B4u) {
        ctx->pc = 0x2C00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00B0u;
        // 0x2c00b4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00B8u;
        goto label_2c00b8;
    }
    ctx->pc = 0x2C00B0u;
    {
        const bool branch_taken_0x2c00b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c00b0) {
            ctx->pc = 0x2C00B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00B0u;
            // 0x2c00b4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C00CCu;
            goto label_2c00cc;
        }
    }
    ctx->pc = 0x2C00B8u;
label_2c00b8:
    // 0x2c00b8: 0xc088edc  jal         func_223B70
label_2c00bc:
    if (ctx->pc == 0x2C00BCu) {
        ctx->pc = 0x2C00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00B8u;
        // 0x2c00bc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00C0u;
        goto label_2c00c0;
    }
    ctx->pc = 0x2C00B8u;
    SET_GPR_U32(ctx, 31, 0x2C00C0u);
    ctx->pc = 0x2C00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00B8u;
    // 0x2c00bc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2C00B8u, 0x2C00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00C0u;
label_2c00c0:
    // 0x2c00c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2c00c4:
    if (ctx->pc == 0x2C00C4u) {
        ctx->pc = 0x2C00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00C0u;
        // 0x2c00c4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00C8u;
        goto label_2c00c8;
    }
    ctx->pc = 0x2C00C0u;
    {
        const bool branch_taken_0x2c00c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c00c0) {
            ctx->pc = 0x2C00C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00C0u;
            // 0x2c00c4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C00E8u;
            goto label_2c00e8;
        }
    }
    ctx->pc = 0x2C00C8u;
label_2c00c8:
    // 0x2c00c8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c00cc:
    // 0x2c00cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2c00d0:
    if (ctx->pc == 0x2C00D0u) {
        ctx->pc = 0x2C00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00CCu;
        // 0x2c00d0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00D4u;
        goto label_2c00d4;
    }
    ctx->pc = 0x2C00CCu;
    {
        const bool branch_taken_0x2c00cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c00cc) {
            ctx->pc = 0x2C00D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00CCu;
            // 0x2c00d0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C00E0u;
            goto label_2c00e0;
        }
    }
    ctx->pc = 0x2C00D4u;
label_2c00d4:
    // 0x2c00d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c00d8:
    // 0x2c00d8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2c00dc:
    if (ctx->pc == 0x2C00DCu) {
        ctx->pc = 0x2C00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00D8u;
        // 0x2c00dc: 0xa6220010  sh          $v0, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00E0u;
        goto label_2c00e0;
    }
    ctx->pc = 0x2C00D8u;
    {
        const bool branch_taken_0x2c00d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00D8u;
        // 0x2c00dc: 0xa6220010  sh          $v0, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00d8) {
            ctx->pc = 0x2C01D4u;
            goto label_2c01d4;
        }
    }
    ctx->pc = 0x2C00E0u;
label_2c00e0:
    // 0x2c00e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c00e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c00e4:
    // 0x2c00e4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2c00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2c00e8:
    // 0x2c00e8: 0xc087502  jal         func_21D408
label_2c00ec:
    if (ctx->pc == 0x2C00ECu) {
        ctx->pc = 0x2C00F0u;
        goto label_2c00f0;
    }
    ctx->pc = 0x2C00E8u;
    SET_GPR_U32(ctx, 31, 0x2C00F0u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C00E8u, 0x2C00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00F0u;
label_2c00f0:
    // 0x2c00f0: 0x10000038  b           . + 4 + (0x38 << 2)
label_2c00f4:
    if (ctx->pc == 0x2C00F4u) {
        ctx->pc = 0x2C00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00F0u;
        // 0x2c00f4: 0xac520288  sw          $s2, 0x288($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00F8u;
        goto label_2c00f8;
    }
    ctx->pc = 0x2C00F0u;
    {
        const bool branch_taken_0x2c00f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00F0u;
        // 0x2c00f4: 0xac520288  sw          $s2, 0x288($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00f0) {
            ctx->pc = 0x2C01D4u;
            goto label_2c01d4;
        }
    }
    ctx->pc = 0x2C00F8u;
label_2c00f8:
    // 0x2c00f8: 0xc089fac  jal         func_227EB0
label_2c00fc:
    if (ctx->pc == 0x2C00FCu) {
        ctx->pc = 0x2C00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00F8u;
        // 0x2c00fc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0100u;
        goto label_2c0100;
    }
    ctx->pc = 0x2C00F8u;
    SET_GPR_U32(ctx, 31, 0x2C0100u);
    ctx->pc = 0x2C00FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00F8u;
    // 0x2c00fc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2C00F8u, 0x2C0100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0100u;
label_2c0100:
    // 0x2c0100: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2c0104:
    if (ctx->pc == 0x2C0104u) {
        ctx->pc = 0x2C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0100u;
        // 0x2c0104: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0108u;
        goto label_2c0108;
    }
    ctx->pc = 0x2C0100u;
    {
        const bool branch_taken_0x2c0100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0100) {
            ctx->pc = 0x2C0104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0100u;
            // 0x2c0104: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0130u;
            goto label_2c0130;
        }
    }
    ctx->pc = 0x2C0108u;
label_2c0108:
    // 0x2c0108: 0xc088edc  jal         func_223B70
label_2c010c:
    if (ctx->pc == 0x2C010Cu) {
        ctx->pc = 0x2C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0108u;
        // 0x2c010c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0110u;
        goto label_2c0110;
    }
    ctx->pc = 0x2C0108u;
    SET_GPR_U32(ctx, 31, 0x2C0110u);
    ctx->pc = 0x2C010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0108u;
    // 0x2c010c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2C0108u, 0x2C0110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0110u;
label_2c0110:
    // 0x2c0110: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2c0114:
    if (ctx->pc == 0x2C0114u) {
        ctx->pc = 0x2C0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0110u;
        // 0x2c0114: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0118u;
        goto label_2c0118;
    }
    ctx->pc = 0x2C0110u;
    {
        const bool branch_taken_0x2c0110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0110) {
            ctx->pc = 0x2C0114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0110u;
            // 0x2c0114: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0130u;
            goto label_2c0130;
        }
    }
    ctx->pc = 0x2C0118u;
label_2c0118:
    // 0x2c0118: 0xc087502  jal         func_21D408
label_2c011c:
    if (ctx->pc == 0x2C011Cu) {
        ctx->pc = 0x2C011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0118u;
        // 0x2c011c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0120u;
        goto label_2c0120;
    }
    ctx->pc = 0x2C0118u;
    SET_GPR_U32(ctx, 31, 0x2C0120u);
    ctx->pc = 0x2C011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0118u;
    // 0x2c011c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C0118u, 0x2C0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0120u;
label_2c0120:
    // 0x2c0120: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x2c0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
label_2c0124:
    // 0x2c0124: 0x5072002c  beql        $v1, $s2, . + 4 + (0x2C << 2)
label_2c0128:
    if (ctx->pc == 0x2C0128u) {
        ctx->pc = 0x2C0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0124u;
        // 0x2c0128: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C012Cu;
        goto label_2c012c;
    }
    ctx->pc = 0x2C0124u;
    {
        const bool branch_taken_0x2c0124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c0124) {
            ctx->pc = 0x2C0128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0124u;
            // 0x2c0128: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C01D8u;
            goto label_2c01d8;
        }
    }
    ctx->pc = 0x2C012Cu;
label_2c012c:
    // 0x2c012c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0130:
    // 0x2c0130: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x2c0130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_2c0134:
    // 0x2c0134: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2c0138:
    if (ctx->pc == 0x2C0138u) {
        ctx->pc = 0x2C0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0134u;
        // 0x2c0138: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C013Cu;
        goto label_2c013c;
    }
    ctx->pc = 0x2C0134u;
    {
        const bool branch_taken_0x2c0134 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2C0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0134u;
        // 0x2c0138: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0134) {
            ctx->pc = 0x2C0150u;
            goto label_2c0150;
        }
    }
    ctx->pc = 0x2C013Cu;
label_2c013c:
    // 0x2c013c: 0x8c63020c  lw          $v1, 0x20C($v1)
    ctx->pc = 0x2c013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2c0140:
    // 0x2c0140: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c0140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c0144:
    // 0x2c0144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c0148:
    // 0x2c0148: 0x10000011  b           . + 4 + (0x11 << 2)
label_2c014c:
    if (ctx->pc == 0x2C014Cu) {
        ctx->pc = 0x2C014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0148u;
        // 0x2c014c: 0x8c5006ac  lw          $s0, 0x6AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0150u;
        goto label_2c0150;
    }
    ctx->pc = 0x2C0148u;
    {
        const bool branch_taken_0x2c0148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0148u;
        // 0x2c014c: 0x8c5006ac  lw          $s0, 0x6AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0148) {
            ctx->pc = 0x2C0190u;
            goto label_2c0190;
        }
    }
    ctx->pc = 0x2C0150u;
label_2c0150:
    // 0x2c0150: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2c0150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c0154:
    // 0x2c0154: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c0158:
    // 0x2c0158: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2c0158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c015c:
    // 0x2c015c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c0160:
    // 0x2c0160: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c0160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c0164:
    // 0x2c0164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0168:
    // 0x2c0168: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2c0168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c016c:
    // 0x2c016c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c016cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0170:
    // 0x2c0170: 0xc105df6  jal         func_4177D8
label_2c0174:
    if (ctx->pc == 0x2C0174u) {
        ctx->pc = 0x2C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0170u;
        // 0x2c0174: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0178u;
        goto label_2c0178;
    }
    ctx->pc = 0x2C0170u;
    SET_GPR_U32(ctx, 31, 0x2C0178u);
    ctx->pc = 0x2C0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0170u;
    // 0x2c0174: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2C0170u, 0x2C0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0178u;
label_2c0178:
    // 0x2c0178: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c017c:
    // 0x2c017c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c017cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c0180:
    // 0x2c0180: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2c0180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c0184:
    // 0x2c0184: 0xa0f809  jalr        $a1
label_2c0188:
    if (ctx->pc == 0x2C0188u) {
        ctx->pc = 0x2C0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0184u;
        // 0x2c0188: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C018Cu;
        goto label_2c018c;
    }
    ctx->pc = 0x2C0184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C018Cu);
        ctx->pc = 0x2C0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0184u;
        // 0x2c0188: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0184u, 0x2C018Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C018Cu;
label_2c018c:
    // 0x2c018c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c018cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0190:
    // 0x2c0190: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c0190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c0194:
    // 0x2c0194: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c0194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c0198:
    // 0x2c0198: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c019c:
    // 0x2c019c: 0x40f809  jalr        $v0
label_2c01a0:
    if (ctx->pc == 0x2C01A0u) {
        ctx->pc = 0x2C01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C019Cu;
        // 0x2c01a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01A4u;
        goto label_2c01a4;
    }
    ctx->pc = 0x2C019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C01A4u);
        ctx->pc = 0x2C01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C019Cu;
        // 0x2c01a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C019Cu, 0x2C01A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C01A4u;
label_2c01a4:
    // 0x2c01a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c01a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c01a8:
    // 0x2c01a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c01ac:
    // 0x2c01ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c01acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c01b0:
    // 0x2c01b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c01b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c01b4:
    // 0x2c01b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c01b8:
    // 0x2c01b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c01b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c01bc:
    // 0x2c01bc: 0xc0b6a04  jal         func_2DA810
label_2c01c0:
    if (ctx->pc == 0x2C01C0u) {
        ctx->pc = 0x2C01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01BCu;
        // 0x2c01c0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01C4u;
        goto label_2c01c4;
    }
    ctx->pc = 0x2C01BCu;
    SET_GPR_U32(ctx, 31, 0x2C01C4u);
    ctx->pc = 0x2C01C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01BCu;
    // 0x2c01c0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2C01BCu, 0x2C01C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01C4u;
label_2c01c4:
    // 0x2c01c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c01c8:
    // 0x2c01c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c01c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c01cc:
    // 0x2c01cc: 0x10000090  b           . + 4 + (0x90 << 2)
label_2c01d0:
    if (ctx->pc == 0x2C01D0u) {
        ctx->pc = 0x2C01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01CCu;
        // 0x2c01d0: 0xa6230010  sh          $v1, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01D4u;
        goto label_2c01d4;
    }
    ctx->pc = 0x2C01CCu;
    {
        const bool branch_taken_0x2c01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01CCu;
        // 0x2c01d0: 0xa6230010  sh          $v1, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01cc) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C01D4u;
label_2c01d4:
    // 0x2c01d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c01d8:
    // 0x2c01d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2c01dc:
    if (ctx->pc == 0x2C01DCu) {
        ctx->pc = 0x2C01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01D8u;
        // 0x2c01dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01E0u;
        goto label_2c01e0;
    }
    ctx->pc = 0x2C01D8u;
    {
        const bool branch_taken_0x2c01d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01D8u;
        // 0x2c01dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01d8) {
            ctx->pc = 0x2C0200u;
            goto label_2c0200;
        }
    }
    ctx->pc = 0x2C01E0u;
label_2c01e0:
    // 0x2c01e0: 0xc0aff38  jal         func_2BFCE0
label_2c01e4:
    if (ctx->pc == 0x2C01E4u) {
        ctx->pc = 0x2C01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01E0u;
        // 0x2c01e4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01E8u;
        goto label_2c01e8;
    }
    ctx->pc = 0x2C01E0u;
    SET_GPR_U32(ctx, 31, 0x2C01E8u);
    ctx->pc = 0x2C01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01E0u;
    // 0x2c01e4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFCE0u, 0x2C01E0u, 0x2C01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01E8u;
label_2c01e8:
    // 0x2c01e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c01ec:
    if (ctx->pc == 0x2C01ECu) {
        ctx->pc = 0x2C01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01E8u;
        // 0x2c01ec: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01F0u;
        goto label_2c01f0;
    }
    ctx->pc = 0x2C01E8u;
    {
        const bool branch_taken_0x2c01e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01E8u;
        // 0x2c01ec: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01e8) {
            ctx->pc = 0x2C01FCu;
            goto label_2c01fc;
        }
    }
    ctx->pc = 0x2C01F0u;
label_2c01f0:
    // 0x2c01f0: 0xc087502  jal         func_21D408
label_2c01f4:
    if (ctx->pc == 0x2C01F4u) {
        ctx->pc = 0x2C01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01F0u;
        // 0x2c01f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C01F8u;
        goto label_2c01f8;
    }
    ctx->pc = 0x2C01F0u;
    SET_GPR_U32(ctx, 31, 0x2C01F8u);
    ctx->pc = 0x2C01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01F0u;
    // 0x2c01f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C01F0u, 0x2C01F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01F8u;
label_2c01f8:
    // 0x2c01f8: 0xac520288  sw          $s2, 0x288($v0)
    ctx->pc = 0x2c01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 18));
label_2c01fc:
    // 0x2c01fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c0200:
    // 0x2c0200: 0x2453b880  addiu       $s3, $v0, -0x4780
    ctx->pc = 0x2c0200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2c0204:
    // 0x2c0204: 0xc0cd4e4  jal         func_335390
label_2c0208:
    if (ctx->pc == 0x2C0208u) {
        ctx->pc = 0x2C0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0204u;
        // 0x2c0208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C020Cu;
        goto label_2c020c;
    }
    ctx->pc = 0x2C0204u;
    SET_GPR_U32(ctx, 31, 0x2C020Cu);
    ctx->pc = 0x2C0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0204u;
    // 0x2c0208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2C0204u, 0x2C020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C020Cu;
label_2c020c:
    // 0x2c020c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c020cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2c0210:
    // 0x2c0210: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_2c0214:
    if (ctx->pc == 0x2C0214u) {
        ctx->pc = 0x2C0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0210u;
        // 0x2c0214: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0218u;
        goto label_2c0218;
    }
    ctx->pc = 0x2C0210u;
    {
        const bool branch_taken_0x2c0210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0210u;
        // 0x2c0214: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0210) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C0218u;
label_2c0218:
    // 0x2c0218: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c0218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c021c:
    // 0x2c021c: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2c021cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_2c0220:
    // 0x2c0220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c0220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c0224:
    // 0x2c0224: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2c0224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2c0228:
    // 0x2c0228: 0xc0cd4e4  jal         func_335390
label_2c022c:
    if (ctx->pc == 0x2C022Cu) {
        ctx->pc = 0x2C022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0228u;
        // 0x2c022c: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0230u;
        goto label_2c0230;
    }
    ctx->pc = 0x2C0228u;
    SET_GPR_U32(ctx, 31, 0x2C0230u);
    ctx->pc = 0x2C022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0228u;
    // 0x2c022c: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2C0228u, 0x2C0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0230u;
label_2c0230:
    // 0x2c0230: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c0230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c0234:
    // 0x2c0234: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2c0234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c0238:
    // 0x2c0238: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c0238u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2c023c:
    // 0x2c023c: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x2c023cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2c0240:
    // 0x2c0240: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2c0244:
    if (ctx->pc == 0x2C0244u) {
        ctx->pc = 0x2C0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0240u;
        // 0x2c0244: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0248u;
        goto label_2c0248;
    }
    ctx->pc = 0x2C0240u;
    {
        const bool branch_taken_0x2c0240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0240) {
            ctx->pc = 0x2C0244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0240u;
            // 0x2c0244: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0248u;
            goto label_2c0248;
        }
    }
    ctx->pc = 0x2C0248u;
label_2c0248:
    // 0x2c0248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c0248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c024c:
    // 0x2c024c: 0x2810  mfhi        $a1
    ctx->pc = 0x2c024cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2c0250:
    // 0x2c0250: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2c0250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2c0254:
    // 0x2c0254: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2c0254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2c0258:
    // 0x2c0258: 0xc0cd4e4  jal         func_335390
label_2c025c:
    if (ctx->pc == 0x2C025Cu) {
        ctx->pc = 0x2C025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0258u;
        // 0x2c025c: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0260u;
        goto label_2c0260;
    }
    ctx->pc = 0x2C0258u;
    SET_GPR_U32(ctx, 31, 0x2C0260u);
    ctx->pc = 0x2C025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0258u;
    // 0x2c025c: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2C0258u, 0x2C0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0260u;
label_2c0260:
    // 0x2c0260: 0x8623001c  lh          $v1, 0x1C($s1)
    ctx->pc = 0x2c0260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_2c0264:
    // 0x2c0264: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c0264u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2c0268:
    // 0x2c0268: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2c026c:
    if (ctx->pc == 0x2C026Cu) {
        ctx->pc = 0x2C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0268u;
        // 0x2c026c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0270u;
        goto label_2c0270;
    }
    ctx->pc = 0x2C0268u;
    {
        const bool branch_taken_0x2c0268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0268) {
            ctx->pc = 0x2C026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0268u;
            // 0x2c026c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0270u;
            goto label_2c0270;
        }
    }
    ctx->pc = 0x2C0270u;
label_2c0270:
    // 0x2c0270: 0x2010  mfhi        $a0
    ctx->pc = 0x2c0270u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2c0274:
    // 0x2c0274: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2c0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2c0278:
    // 0x2c0278: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2c027c:
    if (ctx->pc == 0x2C027Cu) {
        ctx->pc = 0x2C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0278u;
        // 0x2c027c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0280u;
        goto label_2c0280;
    }
    ctx->pc = 0x2C0278u;
    {
        const bool branch_taken_0x2c0278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0278u;
        // 0x2c027c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0278) {
            ctx->pc = 0x2C0294u;
            goto label_2c0294;
        }
    }
    ctx->pc = 0x2C0280u;
label_2c0280:
    // 0x2c0280: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2c0280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c0284:
    // 0x2c0284: 0x0  nop
    ctx->pc = 0x2c0284u;
    // NOP
label_2c0288:
    // 0x2c0288: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2c0288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2c028c:
    // 0x2c028c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c0290:
    if (ctx->pc == 0x2C0290u) {
        ctx->pc = 0x2C0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C028Cu;
        // 0x2c0290: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0294u;
        goto label_2c0294;
    }
    ctx->pc = 0x2C028Cu;
    {
        const bool branch_taken_0x2c028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C028Cu;
        // 0x2c0290: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c028c) {
            ctx->pc = 0x2C02B0u;
            goto label_2c02b0;
        }
    }
    ctx->pc = 0x2C0294u;
label_2c0294:
    // 0x2c0294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c0298:
    // 0x2c0298: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c0298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c029c:
    // 0x2c029c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2c029cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c02a0:
    // 0x2c02a0: 0x0  nop
    ctx->pc = 0x2c02a0u;
    // NOP
label_2c02a4:
    // 0x2c02a4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2c02a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2c02a8:
    // 0x2c02a8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2c02a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2c02ac:
    // 0x2c02ac: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2c02acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c02b0:
    // 0x2c02b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c02b4:
    // 0x2c02b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c02b8:
    // 0x2c02b8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2c02b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2c02bc:
    // 0x2c02bc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2c02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2c02c0:
    // 0x2c02c0: 0x60f809  jalr        $v1
label_2c02c4:
    if (ctx->pc == 0x2C02C4u) {
        ctx->pc = 0x2C02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02C0u;
        // 0x2c02c4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02C8u;
        goto label_2c02c8;
    }
    ctx->pc = 0x2C02C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C02C8u);
        ctx->pc = 0x2C02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02C0u;
        // 0x2c02c4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C02C0u, 0x2C02C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C02C8u;
label_2c02c8:
    // 0x2c02c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2c02c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c02cc:
    // 0x2c02cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c02ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c02d0:
    // 0x2c02d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c02d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c02d4:
    // 0x2c02d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c02d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c02d8:
    // 0x2c02d8: 0xc0a92ba  jal         func_2A4AE8
label_2c02dc:
    if (ctx->pc == 0x2C02DCu) {
        ctx->pc = 0x2C02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02D8u;
        // 0x2c02dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02E0u;
        goto label_2c02e0;
    }
    ctx->pc = 0x2C02D8u;
    SET_GPR_U32(ctx, 31, 0x2C02E0u);
    ctx->pc = 0x2C02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C02D8u;
    // 0x2c02dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4AE8u, 0x2C02D8u, 0x2C02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02E0u;
label_2c02e0:
    // 0x2c02e0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_2c02e4:
    if (ctx->pc == 0x2C02E4u) {
        ctx->pc = 0x2C02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02E0u;
        // 0x2c02e4: 0x8e4300d4  lw          $v1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02E8u;
        goto label_2c02e8;
    }
    ctx->pc = 0x2C02E0u;
    {
        const bool branch_taken_0x2c02e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c02e0) {
            ctx->pc = 0x2C02E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C02E0u;
            // 0x2c02e4: 0x8e4300d4  lw          $v1, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0330u;
            goto label_2c0330;
        }
    }
    ctx->pc = 0x2C02E8u;
label_2c02e8:
    // 0x2c02e8: 0xc0a367c  jal         func_28D9F0
label_2c02ec:
    if (ctx->pc == 0x2C02ECu) {
        ctx->pc = 0x2C02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02E8u;
        // 0x2c02ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02F0u;
        goto label_2c02f0;
    }
    ctx->pc = 0x2C02E8u;
    SET_GPR_U32(ctx, 31, 0x2C02F0u);
    ctx->pc = 0x2C02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C02E8u;
    // 0x2c02ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C02E8u, 0x2C02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02F0u;
label_2c02f0:
    // 0x2c02f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c02f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c02f4:
    // 0x2c02f4: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
label_2c02f8:
    if (ctx->pc == 0x2C02F8u) {
        ctx->pc = 0x2C02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02F4u;
        // 0x2c02f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02FCu;
        goto label_2c02fc;
    }
    ctx->pc = 0x2C02F4u;
    {
        const bool branch_taken_0x2c02f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02F4u;
        // 0x2c02f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02f4) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C02FCu;
label_2c02fc:
    // 0x2c02fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c02fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0300:
    // 0x2c0300: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c0300u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c0304:
    // 0x2c0304: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c0304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c0308:
    // 0x2c0308: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c0308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c030c:
    // 0x2c030c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c030cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c0310:
    // 0x2c0310: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c0310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0314:
    // 0x2c0314: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c0318:
    // 0x2c0318: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c0318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c031c:
    // 0x2c031c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2c031cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c0320:
    // 0x2c0320: 0xc0bee7a  jal         func_2FB9E8
label_2c0324:
    if (ctx->pc == 0x2C0324u) {
        ctx->pc = 0x2C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0320u;
        // 0x2c0324: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0328u;
        goto label_2c0328;
    }
    ctx->pc = 0x2C0320u;
    SET_GPR_U32(ctx, 31, 0x2C0328u);
    ctx->pc = 0x2C0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0320u;
    // 0x2c0324: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C0320u, 0x2C0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0328u;
label_2c0328:
    // 0x2c0328: 0x10000039  b           . + 4 + (0x39 << 2)
label_2c032c:
    if (ctx->pc == 0x2C032Cu) {
        ctx->pc = 0x2C032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0328u;
        // 0x2c032c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0330u;
        goto label_2c0330;
    }
    ctx->pc = 0x2C0328u;
    {
        const bool branch_taken_0x2c0328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0328u;
        // 0x2c032c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0328) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C0330u;
label_2c0330:
    // 0x2c0330: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c0330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c0334:
    // 0x2c0334: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x2c0334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
label_2c0338:
    // 0x2c0338: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c033c:
    if (ctx->pc == 0x2C033Cu) {
        ctx->pc = 0x2C033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0338u;
        // 0x2c033c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0340u;
        goto label_2c0340;
    }
    ctx->pc = 0x2C0338u;
    {
        const bool branch_taken_0x2c0338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0338u;
        // 0x2c033c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0338) {
            ctx->pc = 0x2C0360u;
            goto label_2c0360;
        }
    }
    ctx->pc = 0x2C0340u;
label_2c0340:
    // 0x2c0340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0344:
    // 0x2c0344: 0xc089998  jal         func_226660
label_2c0348:
    if (ctx->pc == 0x2C0348u) {
        ctx->pc = 0x2C0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0344u;
        // 0x2c0348: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C034Cu;
        goto label_2c034c;
    }
    ctx->pc = 0x2C0344u;
    SET_GPR_U32(ctx, 31, 0x2C034Cu);
    ctx->pc = 0x2C0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0344u;
    // 0x2c0348: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2C0344u, 0x2C034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C034Cu;
label_2c034c:
    // 0x2c034c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c0350:
    if (ctx->pc == 0x2C0350u) {
        ctx->pc = 0x2C0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C034Cu;
        // 0x2c0350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0354u;
        goto label_2c0354;
    }
    ctx->pc = 0x2C034Cu;
    {
        const bool branch_taken_0x2c034c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C034Cu;
        // 0x2c0350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c034c) {
            ctx->pc = 0x2C0360u;
            goto label_2c0360;
        }
    }
    ctx->pc = 0x2C0354u;
label_2c0354:
    // 0x2c0354: 0xc088680  jal         func_221A00
label_2c0358:
    if (ctx->pc == 0x2C0358u) {
        ctx->pc = 0x2C0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0354u;
        // 0x2c0358: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C035Cu;
        goto label_2c035c;
    }
    ctx->pc = 0x2C0354u;
    SET_GPR_U32(ctx, 31, 0x2C035Cu);
    ctx->pc = 0x2C0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0354u;
    // 0x2c0358: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2C0354u, 0x2C035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C035Cu;
label_2c035c:
    // 0x2c035c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2c035cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c0360:
    // 0x2c0360: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_2c0364:
    if (ctx->pc == 0x2C0364u) {
        ctx->pc = 0x2C0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0360u;
        // 0x2c0364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0368u;
        goto label_2c0368;
    }
    ctx->pc = 0x2C0360u;
    {
        const bool branch_taken_0x2c0360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0360u;
        // 0x2c0364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0360) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C0368u;
label_2c0368:
    // 0x2c0368: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2c036c:
    // 0x2c036c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c036cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c0370:
    // 0x2c0370: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c0370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0374:
    // 0x2c0374: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2c0374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c0378:
    // 0x2c0378: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c0378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c037c:
    // 0x2c037c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c037cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0380:
    // 0x2c0380: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c0384:
    // 0x2c0384: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c0384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0388:
    // 0x2c0388: 0xc0968f8  jal         func_25A3E0
label_2c038c:
    if (ctx->pc == 0x2C038Cu) {
        ctx->pc = 0x2C038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0388u;
        // 0x2c038c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0390u;
        goto label_2c0390;
    }
    ctx->pc = 0x2C0388u;
    SET_GPR_U32(ctx, 31, 0x2C0390u);
    ctx->pc = 0x2C038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0388u;
    // 0x2c038c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2C0388u, 0x2C0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0390u;
label_2c0390:
    // 0x2c0390: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c0390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c0394:
    // 0x2c0394: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2c0398:
    if (ctx->pc == 0x2C0398u) {
        ctx->pc = 0x2C0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0394u;
        // 0x2c0398: 0xa6230010  sh          $v1, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C039Cu;
        goto label_2c039c;
    }
    ctx->pc = 0x2C0394u;
    {
        const bool branch_taken_0x2c0394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0394u;
        // 0x2c0398: 0xa6230010  sh          $v1, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0394) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C039Cu;
label_2c039c:
    // 0x2c039c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c03a0:
    // 0x2c03a0: 0xc089998  jal         func_226660
label_2c03a4:
    if (ctx->pc == 0x2C03A4u) {
        ctx->pc = 0x2C03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03A0u;
        // 0x2c03a4: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03A8u;
        goto label_2c03a8;
    }
    ctx->pc = 0x2C03A0u;
    SET_GPR_U32(ctx, 31, 0x2C03A8u);
    ctx->pc = 0x2C03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C03A0u;
    // 0x2c03a4: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2C03A0u, 0x2C03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03A8u;
label_2c03a8:
    // 0x2c03a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2c03ac:
    if (ctx->pc == 0x2C03ACu) {
        ctx->pc = 0x2C03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03A8u;
        // 0x2c03ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03B0u;
        goto label_2c03b0;
    }
    ctx->pc = 0x2C03A8u;
    {
        const bool branch_taken_0x2c03a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03A8u;
        // 0x2c03ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03a8) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C03B0u;
label_2c03b0:
    // 0x2c03b0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2c03b4:
    if (ctx->pc == 0x2C03B4u) {
        ctx->pc = 0x2C03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03B0u;
        // 0x2c03b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03B8u;
        goto label_2c03b8;
    }
    ctx->pc = 0x2C03B0u;
    {
        const bool branch_taken_0x2c03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03B0u;
        // 0x2c03b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03b0) {
            ctx->pc = 0x2C03FCu;
            goto label_2c03fc;
        }
    }
    ctx->pc = 0x2C03B8u;
label_2c03b8:
    // 0x2c03b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c03bc:
    // 0x2c03bc: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c03bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c03c0:
    // 0x2c03c0: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
label_2c03c4:
    if (ctx->pc == 0x2C03C4u) {
        ctx->pc = 0x2C03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03C0u;
        // 0x2c03c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03C8u;
        goto label_2c03c8;
    }
    ctx->pc = 0x2C03C0u;
    {
        const bool branch_taken_0x2c03c0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03C0u;
        // 0x2c03c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03c0) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C03C8u;
label_2c03c8:
    // 0x2c03c8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2c03cc:
    // 0x2c03cc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2c03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c03d0:
    // 0x2c03d0: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2c03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2c03d4:
    // 0x2c03d4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2c03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c03d8:
    // 0x2c03d8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c03d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c03dc:
    // 0x2c03dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2c03e0:
    if (ctx->pc == 0x2C03E0u) {
        ctx->pc = 0x2C03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03DCu;
        // 0x2c03e0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03E4u;
        goto label_2c03e4;
    }
    ctx->pc = 0x2C03DCu;
    {
        const bool branch_taken_0x2c03dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03DCu;
        // 0x2c03e0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03dc) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C03E4u;
label_2c03e4:
    // 0x2c03e4: 0xc0cd4e4  jal         func_335390
label_2c03e8:
    if (ctx->pc == 0x2C03E8u) {
        ctx->pc = 0x2C03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03E4u;
        // 0x2c03e8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03ECu;
        goto label_2c03ec;
    }
    ctx->pc = 0x2C03E4u;
    SET_GPR_U32(ctx, 31, 0x2C03ECu);
    ctx->pc = 0x2C03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C03E4u;
    // 0x2c03e8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2C03E4u, 0x2C03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03ECu;
label_2c03ec:
    // 0x2c03ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c03ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2c03f0:
    // 0x2c03f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2c03f4:
    if (ctx->pc == 0x2C03F4u) {
        ctx->pc = 0x2C03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03F0u;
        // 0x2c03f4: 0xa6200010  sh          $zero, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C03F8u;
        goto label_2c03f8;
    }
    ctx->pc = 0x2C03F0u;
    {
        const bool branch_taken_0x2c03f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c03f0) {
            ctx->pc = 0x2C03F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C03F0u;
            // 0x2c03f4: 0xa6200010  sh          $zero, 0x10($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C03F8u;
label_2c03f8:
    // 0x2c03f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c03fc:
    // 0x2c03fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2c0400:
    if (ctx->pc == 0x2C0400u) {
        ctx->pc = 0x2C0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03FCu;
        // 0x2c0400: 0xa6220010  sh          $v0, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0404u;
        goto label_2c0404;
    }
    ctx->pc = 0x2C03FCu;
    {
        const bool branch_taken_0x2c03fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03FCu;
        // 0x2c0400: 0xa6220010  sh          $v0, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03fc) {
            ctx->pc = 0x2C040Cu;
            goto label_2c040c;
        }
    }
    ctx->pc = 0x2C0404u;
label_2c0404:
    // 0x2c0404: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c0408:
    if (ctx->pc == 0x2C0408u) {
        ctx->pc = 0x2C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0404u;
        // 0x2c0408: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C040Cu;
        goto label_2c040c;
    }
    ctx->pc = 0x2C0404u;
    {
        const bool branch_taken_0x2c0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0404u;
        // 0x2c0408: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0404) {
            ctx->pc = 0x2C0410u;
            goto label_2c0410;
        }
    }
    ctx->pc = 0x2C040Cu;
label_2c040c:
    // 0x2c040c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c040cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0410:
    // 0x2c0410: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c0410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c0414:
    // 0x2c0414: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c0414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c0418:
    // 0x2c0418: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c0418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c041c:
    // 0x2c041c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c041cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c0420:
    // 0x2c0420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c0420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c0424:
    // 0x2c0424: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2c0424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c0428:
    // 0x2c0428: 0x3e00008  jr          $ra
label_2c042c:
    if (ctx->pc == 0x2C042Cu) {
        ctx->pc = 0x2C042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0428u;
        // 0x2c042c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0430u;
        goto label_fallthrough_0x2c0428;
    }
    ctx->pc = 0x2C0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0428u;
        // 0x2c042c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c0428:
    ctx->pc = 0x2C0430u;
}
