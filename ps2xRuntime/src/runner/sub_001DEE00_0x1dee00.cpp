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

// Function: sub_001DEE00
// Address: 0x1dee00 - 0x1df3a8
void sub_001DEE00_0x1dee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEE00_0x1dee00");
#endif

    switch (ctx->pc) {
        case 0x1dee00u: goto label_1dee00;
        case 0x1dee04u: goto label_1dee04;
        case 0x1dee08u: goto label_1dee08;
        case 0x1dee0cu: goto label_1dee0c;
        case 0x1dee10u: goto label_1dee10;
        case 0x1dee14u: goto label_1dee14;
        case 0x1dee18u: goto label_1dee18;
        case 0x1dee1cu: goto label_1dee1c;
        case 0x1dee20u: goto label_1dee20;
        case 0x1dee24u: goto label_1dee24;
        case 0x1dee28u: goto label_1dee28;
        case 0x1dee2cu: goto label_1dee2c;
        case 0x1dee30u: goto label_1dee30;
        case 0x1dee34u: goto label_1dee34;
        case 0x1dee38u: goto label_1dee38;
        case 0x1dee3cu: goto label_1dee3c;
        case 0x1dee40u: goto label_1dee40;
        case 0x1dee44u: goto label_1dee44;
        case 0x1dee48u: goto label_1dee48;
        case 0x1dee4cu: goto label_1dee4c;
        case 0x1dee50u: goto label_1dee50;
        case 0x1dee54u: goto label_1dee54;
        case 0x1dee58u: goto label_1dee58;
        case 0x1dee5cu: goto label_1dee5c;
        case 0x1dee60u: goto label_1dee60;
        case 0x1dee64u: goto label_1dee64;
        case 0x1dee68u: goto label_1dee68;
        case 0x1dee6cu: goto label_1dee6c;
        case 0x1dee70u: goto label_1dee70;
        case 0x1dee74u: goto label_1dee74;
        case 0x1dee78u: goto label_1dee78;
        case 0x1dee7cu: goto label_1dee7c;
        case 0x1dee80u: goto label_1dee80;
        case 0x1dee84u: goto label_1dee84;
        case 0x1dee88u: goto label_1dee88;
        case 0x1dee8cu: goto label_1dee8c;
        case 0x1dee90u: goto label_1dee90;
        case 0x1dee94u: goto label_1dee94;
        case 0x1dee98u: goto label_1dee98;
        case 0x1dee9cu: goto label_1dee9c;
        case 0x1deea0u: goto label_1deea0;
        case 0x1deea4u: goto label_1deea4;
        case 0x1deea8u: goto label_1deea8;
        case 0x1deeacu: goto label_1deeac;
        case 0x1deeb0u: goto label_1deeb0;
        case 0x1deeb4u: goto label_1deeb4;
        case 0x1deeb8u: goto label_1deeb8;
        case 0x1deebcu: goto label_1deebc;
        case 0x1deec0u: goto label_1deec0;
        case 0x1deec4u: goto label_1deec4;
        case 0x1deec8u: goto label_1deec8;
        case 0x1deeccu: goto label_1deecc;
        case 0x1deed0u: goto label_1deed0;
        case 0x1deed4u: goto label_1deed4;
        case 0x1deed8u: goto label_1deed8;
        case 0x1deedcu: goto label_1deedc;
        case 0x1deee0u: goto label_1deee0;
        case 0x1deee4u: goto label_1deee4;
        case 0x1deee8u: goto label_1deee8;
        case 0x1deeecu: goto label_1deeec;
        case 0x1deef0u: goto label_1deef0;
        case 0x1deef4u: goto label_1deef4;
        case 0x1deef8u: goto label_1deef8;
        case 0x1deefcu: goto label_1deefc;
        case 0x1def00u: goto label_1def00;
        case 0x1def04u: goto label_1def04;
        case 0x1def08u: goto label_1def08;
        case 0x1def0cu: goto label_1def0c;
        case 0x1def10u: goto label_1def10;
        case 0x1def14u: goto label_1def14;
        case 0x1def18u: goto label_1def18;
        case 0x1def1cu: goto label_1def1c;
        case 0x1def20u: goto label_1def20;
        case 0x1def24u: goto label_1def24;
        case 0x1def28u: goto label_1def28;
        case 0x1def2cu: goto label_1def2c;
        case 0x1def30u: goto label_1def30;
        case 0x1def34u: goto label_1def34;
        case 0x1def38u: goto label_1def38;
        case 0x1def3cu: goto label_1def3c;
        case 0x1def40u: goto label_1def40;
        case 0x1def44u: goto label_1def44;
        case 0x1def48u: goto label_1def48;
        case 0x1def4cu: goto label_1def4c;
        case 0x1def50u: goto label_1def50;
        case 0x1def54u: goto label_1def54;
        case 0x1def58u: goto label_1def58;
        case 0x1def5cu: goto label_1def5c;
        case 0x1def60u: goto label_1def60;
        case 0x1def64u: goto label_1def64;
        case 0x1def68u: goto label_1def68;
        case 0x1def6cu: goto label_1def6c;
        case 0x1def70u: goto label_1def70;
        case 0x1def74u: goto label_1def74;
        case 0x1def78u: goto label_1def78;
        case 0x1def7cu: goto label_1def7c;
        case 0x1def80u: goto label_1def80;
        case 0x1def84u: goto label_1def84;
        case 0x1def88u: goto label_1def88;
        case 0x1def8cu: goto label_1def8c;
        case 0x1def90u: goto label_1def90;
        case 0x1def94u: goto label_1def94;
        case 0x1def98u: goto label_1def98;
        case 0x1def9cu: goto label_1def9c;
        case 0x1defa0u: goto label_1defa0;
        case 0x1defa4u: goto label_1defa4;
        case 0x1defa8u: goto label_1defa8;
        case 0x1defacu: goto label_1defac;
        case 0x1defb0u: goto label_1defb0;
        case 0x1defb4u: goto label_1defb4;
        case 0x1defb8u: goto label_1defb8;
        case 0x1defbcu: goto label_1defbc;
        case 0x1defc0u: goto label_1defc0;
        case 0x1defc4u: goto label_1defc4;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defccu: goto label_1defcc;
        case 0x1defd0u: goto label_1defd0;
        case 0x1defd4u: goto label_1defd4;
        case 0x1defd8u: goto label_1defd8;
        case 0x1defdcu: goto label_1defdc;
        case 0x1defe0u: goto label_1defe0;
        case 0x1defe4u: goto label_1defe4;
        case 0x1defe8u: goto label_1defe8;
        case 0x1defecu: goto label_1defec;
        case 0x1deff0u: goto label_1deff0;
        case 0x1deff4u: goto label_1deff4;
        case 0x1deff8u: goto label_1deff8;
        case 0x1deffcu: goto label_1deffc;
        case 0x1df000u: goto label_1df000;
        case 0x1df004u: goto label_1df004;
        case 0x1df008u: goto label_1df008;
        case 0x1df00cu: goto label_1df00c;
        case 0x1df010u: goto label_1df010;
        case 0x1df014u: goto label_1df014;
        case 0x1df018u: goto label_1df018;
        case 0x1df01cu: goto label_1df01c;
        case 0x1df020u: goto label_1df020;
        case 0x1df024u: goto label_1df024;
        case 0x1df028u: goto label_1df028;
        case 0x1df02cu: goto label_1df02c;
        case 0x1df030u: goto label_1df030;
        case 0x1df034u: goto label_1df034;
        case 0x1df038u: goto label_1df038;
        case 0x1df03cu: goto label_1df03c;
        case 0x1df040u: goto label_1df040;
        case 0x1df044u: goto label_1df044;
        case 0x1df048u: goto label_1df048;
        case 0x1df04cu: goto label_1df04c;
        case 0x1df050u: goto label_1df050;
        case 0x1df054u: goto label_1df054;
        case 0x1df058u: goto label_1df058;
        case 0x1df05cu: goto label_1df05c;
        case 0x1df060u: goto label_1df060;
        case 0x1df064u: goto label_1df064;
        case 0x1df068u: goto label_1df068;
        case 0x1df06cu: goto label_1df06c;
        case 0x1df070u: goto label_1df070;
        case 0x1df074u: goto label_1df074;
        case 0x1df078u: goto label_1df078;
        case 0x1df07cu: goto label_1df07c;
        case 0x1df080u: goto label_1df080;
        case 0x1df084u: goto label_1df084;
        case 0x1df088u: goto label_1df088;
        case 0x1df08cu: goto label_1df08c;
        case 0x1df090u: goto label_1df090;
        case 0x1df094u: goto label_1df094;
        case 0x1df098u: goto label_1df098;
        case 0x1df09cu: goto label_1df09c;
        case 0x1df0a0u: goto label_1df0a0;
        case 0x1df0a4u: goto label_1df0a4;
        case 0x1df0a8u: goto label_1df0a8;
        case 0x1df0acu: goto label_1df0ac;
        case 0x1df0b0u: goto label_1df0b0;
        case 0x1df0b4u: goto label_1df0b4;
        case 0x1df0b8u: goto label_1df0b8;
        case 0x1df0bcu: goto label_1df0bc;
        case 0x1df0c0u: goto label_1df0c0;
        case 0x1df0c4u: goto label_1df0c4;
        case 0x1df0c8u: goto label_1df0c8;
        case 0x1df0ccu: goto label_1df0cc;
        case 0x1df0d0u: goto label_1df0d0;
        case 0x1df0d4u: goto label_1df0d4;
        case 0x1df0d8u: goto label_1df0d8;
        case 0x1df0dcu: goto label_1df0dc;
        case 0x1df0e0u: goto label_1df0e0;
        case 0x1df0e4u: goto label_1df0e4;
        case 0x1df0e8u: goto label_1df0e8;
        case 0x1df0ecu: goto label_1df0ec;
        case 0x1df0f0u: goto label_1df0f0;
        case 0x1df0f4u: goto label_1df0f4;
        case 0x1df0f8u: goto label_1df0f8;
        case 0x1df0fcu: goto label_1df0fc;
        case 0x1df100u: goto label_1df100;
        case 0x1df104u: goto label_1df104;
        case 0x1df108u: goto label_1df108;
        case 0x1df10cu: goto label_1df10c;
        case 0x1df110u: goto label_1df110;
        case 0x1df114u: goto label_1df114;
        case 0x1df118u: goto label_1df118;
        case 0x1df11cu: goto label_1df11c;
        case 0x1df120u: goto label_1df120;
        case 0x1df124u: goto label_1df124;
        case 0x1df128u: goto label_1df128;
        case 0x1df12cu: goto label_1df12c;
        case 0x1df130u: goto label_1df130;
        case 0x1df134u: goto label_1df134;
        case 0x1df138u: goto label_1df138;
        case 0x1df13cu: goto label_1df13c;
        case 0x1df140u: goto label_1df140;
        case 0x1df144u: goto label_1df144;
        case 0x1df148u: goto label_1df148;
        case 0x1df14cu: goto label_1df14c;
        case 0x1df150u: goto label_1df150;
        case 0x1df154u: goto label_1df154;
        case 0x1df158u: goto label_1df158;
        case 0x1df15cu: goto label_1df15c;
        case 0x1df160u: goto label_1df160;
        case 0x1df164u: goto label_1df164;
        case 0x1df168u: goto label_1df168;
        case 0x1df16cu: goto label_1df16c;
        case 0x1df170u: goto label_1df170;
        case 0x1df174u: goto label_1df174;
        case 0x1df178u: goto label_1df178;
        case 0x1df17cu: goto label_1df17c;
        case 0x1df180u: goto label_1df180;
        case 0x1df184u: goto label_1df184;
        case 0x1df188u: goto label_1df188;
        case 0x1df18cu: goto label_1df18c;
        case 0x1df190u: goto label_1df190;
        case 0x1df194u: goto label_1df194;
        case 0x1df198u: goto label_1df198;
        case 0x1df19cu: goto label_1df19c;
        case 0x1df1a0u: goto label_1df1a0;
        case 0x1df1a4u: goto label_1df1a4;
        case 0x1df1a8u: goto label_1df1a8;
        case 0x1df1acu: goto label_1df1ac;
        case 0x1df1b0u: goto label_1df1b0;
        case 0x1df1b4u: goto label_1df1b4;
        case 0x1df1b8u: goto label_1df1b8;
        case 0x1df1bcu: goto label_1df1bc;
        case 0x1df1c0u: goto label_1df1c0;
        case 0x1df1c4u: goto label_1df1c4;
        case 0x1df1c8u: goto label_1df1c8;
        case 0x1df1ccu: goto label_1df1cc;
        case 0x1df1d0u: goto label_1df1d0;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1d8u: goto label_1df1d8;
        case 0x1df1dcu: goto label_1df1dc;
        case 0x1df1e0u: goto label_1df1e0;
        case 0x1df1e4u: goto label_1df1e4;
        case 0x1df1e8u: goto label_1df1e8;
        case 0x1df1ecu: goto label_1df1ec;
        case 0x1df1f0u: goto label_1df1f0;
        case 0x1df1f4u: goto label_1df1f4;
        case 0x1df1f8u: goto label_1df1f8;
        case 0x1df1fcu: goto label_1df1fc;
        case 0x1df200u: goto label_1df200;
        case 0x1df204u: goto label_1df204;
        case 0x1df208u: goto label_1df208;
        case 0x1df20cu: goto label_1df20c;
        case 0x1df210u: goto label_1df210;
        case 0x1df214u: goto label_1df214;
        case 0x1df218u: goto label_1df218;
        case 0x1df21cu: goto label_1df21c;
        case 0x1df220u: goto label_1df220;
        case 0x1df224u: goto label_1df224;
        case 0x1df228u: goto label_1df228;
        case 0x1df22cu: goto label_1df22c;
        case 0x1df230u: goto label_1df230;
        case 0x1df234u: goto label_1df234;
        case 0x1df238u: goto label_1df238;
        case 0x1df23cu: goto label_1df23c;
        case 0x1df240u: goto label_1df240;
        case 0x1df244u: goto label_1df244;
        case 0x1df248u: goto label_1df248;
        case 0x1df24cu: goto label_1df24c;
        case 0x1df250u: goto label_1df250;
        case 0x1df254u: goto label_1df254;
        case 0x1df258u: goto label_1df258;
        case 0x1df25cu: goto label_1df25c;
        case 0x1df260u: goto label_1df260;
        case 0x1df264u: goto label_1df264;
        case 0x1df268u: goto label_1df268;
        case 0x1df26cu: goto label_1df26c;
        case 0x1df270u: goto label_1df270;
        case 0x1df274u: goto label_1df274;
        case 0x1df278u: goto label_1df278;
        case 0x1df27cu: goto label_1df27c;
        case 0x1df280u: goto label_1df280;
        case 0x1df284u: goto label_1df284;
        case 0x1df288u: goto label_1df288;
        case 0x1df28cu: goto label_1df28c;
        case 0x1df290u: goto label_1df290;
        case 0x1df294u: goto label_1df294;
        case 0x1df298u: goto label_1df298;
        case 0x1df29cu: goto label_1df29c;
        case 0x1df2a0u: goto label_1df2a0;
        case 0x1df2a4u: goto label_1df2a4;
        case 0x1df2a8u: goto label_1df2a8;
        case 0x1df2acu: goto label_1df2ac;
        case 0x1df2b0u: goto label_1df2b0;
        case 0x1df2b4u: goto label_1df2b4;
        case 0x1df2b8u: goto label_1df2b8;
        case 0x1df2bcu: goto label_1df2bc;
        case 0x1df2c0u: goto label_1df2c0;
        case 0x1df2c4u: goto label_1df2c4;
        case 0x1df2c8u: goto label_1df2c8;
        case 0x1df2ccu: goto label_1df2cc;
        case 0x1df2d0u: goto label_1df2d0;
        case 0x1df2d4u: goto label_1df2d4;
        case 0x1df2d8u: goto label_1df2d8;
        case 0x1df2dcu: goto label_1df2dc;
        case 0x1df2e0u: goto label_1df2e0;
        case 0x1df2e4u: goto label_1df2e4;
        case 0x1df2e8u: goto label_1df2e8;
        case 0x1df2ecu: goto label_1df2ec;
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df2f4u: goto label_1df2f4;
        case 0x1df2f8u: goto label_1df2f8;
        case 0x1df2fcu: goto label_1df2fc;
        case 0x1df300u: goto label_1df300;
        case 0x1df304u: goto label_1df304;
        case 0x1df308u: goto label_1df308;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df310u: goto label_1df310;
        case 0x1df314u: goto label_1df314;
        case 0x1df318u: goto label_1df318;
        case 0x1df31cu: goto label_1df31c;
        case 0x1df320u: goto label_1df320;
        case 0x1df324u: goto label_1df324;
        case 0x1df328u: goto label_1df328;
        case 0x1df32cu: goto label_1df32c;
        case 0x1df330u: goto label_1df330;
        case 0x1df334u: goto label_1df334;
        case 0x1df338u: goto label_1df338;
        case 0x1df33cu: goto label_1df33c;
        case 0x1df340u: goto label_1df340;
        case 0x1df344u: goto label_1df344;
        case 0x1df348u: goto label_1df348;
        case 0x1df34cu: goto label_1df34c;
        case 0x1df350u: goto label_1df350;
        case 0x1df354u: goto label_1df354;
        case 0x1df358u: goto label_1df358;
        case 0x1df35cu: goto label_1df35c;
        case 0x1df360u: goto label_1df360;
        case 0x1df364u: goto label_1df364;
        case 0x1df368u: goto label_1df368;
        case 0x1df36cu: goto label_1df36c;
        case 0x1df370u: goto label_1df370;
        case 0x1df374u: goto label_1df374;
        case 0x1df378u: goto label_1df378;
        case 0x1df37cu: goto label_1df37c;
        case 0x1df380u: goto label_1df380;
        case 0x1df384u: goto label_1df384;
        case 0x1df388u: goto label_1df388;
        case 0x1df38cu: goto label_1df38c;
        case 0x1df390u: goto label_1df390;
        case 0x1df394u: goto label_1df394;
        case 0x1df398u: goto label_1df398;
        case 0x1df39cu: goto label_1df39c;
        case 0x1df3a0u: goto label_1df3a0;
        case 0x1df3a4u: goto label_1df3a4;
        default: break;
    }

    ctx->pc = 0x1dee00u;

label_1dee00:
    // 0x1dee00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dee04:
    // 0x1dee04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dee08:
    // 0x1dee08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1dee0c:
    // 0x1dee0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dee0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dee10:
    // 0x1dee10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1dee14:
    // 0x1dee14: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1dee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1dee18:
    // 0x1dee18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1dee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1dee1c:
    // 0x1dee1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dee20:
    // 0x1dee20: 0x8e421b7c  lw          $v0, 0x1B7C($s2)
    ctx->pc = 0x1dee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7036)));
label_1dee24:
    // 0x1dee24: 0x14400157  bnez        $v0, . + 4 + (0x157 << 2)
label_1dee28:
    if (ctx->pc == 0x1DEE28u) {
        ctx->pc = 0x1DEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE24u;
        // 0x1dee28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE2Cu;
        goto label_1dee2c;
    }
    ctx->pc = 0x1DEE24u;
    {
        const bool branch_taken_0x1dee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE24u;
        // 0x1dee28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee24) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEE2Cu;
label_1dee2c:
    // 0x1dee2c: 0x8e421b80  lw          $v0, 0x1B80($s2)
    ctx->pc = 0x1dee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7040)));
label_1dee30:
    // 0x1dee30: 0x14400154  bnez        $v0, . + 4 + (0x154 << 2)
label_1dee34:
    if (ctx->pc == 0x1DEE34u) {
        ctx->pc = 0x1DEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE30u;
        // 0x1dee34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE38u;
        goto label_1dee38;
    }
    ctx->pc = 0x1DEE30u;
    {
        const bool branch_taken_0x1dee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE30u;
        // 0x1dee34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee30) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEE38u;
label_1dee38:
    // 0x1dee38: 0x8e423a78  lw          $v0, 0x3A78($s2)
    ctx->pc = 0x1dee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14968)));
label_1dee3c:
    // 0x1dee3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1dee40:
    if (ctx->pc == 0x1DEE40u) {
        ctx->pc = 0x1DEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE3Cu;
        // 0x1dee40: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE44u;
        goto label_1dee44;
    }
    ctx->pc = 0x1DEE3Cu;
    {
        const bool branch_taken_0x1dee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE3Cu;
        // 0x1dee40: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee3c) {
            ctx->pc = 0x1DEE54u;
            goto label_1dee54;
        }
    }
    ctx->pc = 0x1DEE44u;
label_1dee44:
    // 0x1dee44: 0x8c43ecec  lw          $v1, -0x1314($v0)
    ctx->pc = 0x1dee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1dee48:
    // 0x1dee48: 0x8c6445d0  lw          $a0, 0x45D0($v1)
    ctx->pc = 0x1dee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17872)));
label_1dee4c:
    // 0x1dee4c: 0x1080014d  beqz        $a0, . + 4 + (0x14D << 2)
label_1dee50:
    if (ctx->pc == 0x1DEE50u) {
        ctx->pc = 0x1DEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE4Cu;
        // 0x1dee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE54u;
        goto label_1dee54;
    }
    ctx->pc = 0x1DEE4Cu;
    {
        const bool branch_taken_0x1dee4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE4Cu;
        // 0x1dee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee4c) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEE54u;
label_1dee54:
    // 0x1dee54: 0x8e423a7c  lw          $v0, 0x3A7C($s2)
    ctx->pc = 0x1dee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14972)));
label_1dee58:
    // 0x1dee58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1dee5c:
    if (ctx->pc == 0x1DEE5Cu) {
        ctx->pc = 0x1DEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE58u;
        // 0x1dee5c: 0x8e421ba4  lw          $v0, 0x1BA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE60u;
        goto label_1dee60;
    }
    ctx->pc = 0x1DEE58u;
    {
        const bool branch_taken_0x1dee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee58) {
            ctx->pc = 0x1DEE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEE58u;
            // 0x1dee5c: 0x8e421ba4  lw          $v0, 0x1BA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEE70u;
            goto label_1dee70;
        }
    }
    ctx->pc = 0x1DEE60u;
label_1dee60:
    // 0x1dee60: 0x8e4239ec  lw          $v0, 0x39EC($s2)
    ctx->pc = 0x1dee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14828)));
label_1dee64:
    // 0x1dee64: 0x10400147  beqz        $v0, . + 4 + (0x147 << 2)
label_1dee68:
    if (ctx->pc == 0x1DEE68u) {
        ctx->pc = 0x1DEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE64u;
        // 0x1dee68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE6Cu;
        goto label_1dee6c;
    }
    ctx->pc = 0x1DEE64u;
    {
        const bool branch_taken_0x1dee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE64u;
        // 0x1dee68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee64) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEE6Cu;
label_1dee6c:
    // 0x1dee6c: 0x8e421ba4  lw          $v0, 0x1BA4($s2)
    ctx->pc = 0x1dee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
label_1dee70:
    // 0x1dee70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1dee74:
    if (ctx->pc == 0x1DEE74u) {
        ctx->pc = 0x1DEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE70u;
        // 0x1dee74: 0x8e421ba0  lw          $v0, 0x1BA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE78u;
        goto label_1dee78;
    }
    ctx->pc = 0x1DEE70u;
    {
        const bool branch_taken_0x1dee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee70) {
            ctx->pc = 0x1DEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEE70u;
            // 0x1dee74: 0x8e421ba0  lw          $v0, 0x1BA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEE88u;
            goto label_1dee88;
        }
    }
    ctx->pc = 0x1DEE78u;
label_1dee78:
    // 0x1dee78: 0x8e424350  lw          $v0, 0x4350($s2)
    ctx->pc = 0x1dee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17232)));
label_1dee7c:
    // 0x1dee7c: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_1dee80:
    if (ctx->pc == 0x1DEE80u) {
        ctx->pc = 0x1DEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE7Cu;
        // 0x1dee80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE84u;
        goto label_1dee84;
    }
    ctx->pc = 0x1DEE7Cu;
    {
        const bool branch_taken_0x1dee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE7Cu;
        // 0x1dee80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee7c) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEE84u;
label_1dee84:
    // 0x1dee84: 0x8e421ba0  lw          $v0, 0x1BA0($s2)
    ctx->pc = 0x1dee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7072)));
label_1dee88:
    // 0x1dee88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1dee8c:
    if (ctx->pc == 0x1DEE8Cu) {
        ctx->pc = 0x1DEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE88u;
        // 0x1dee8c: 0x2ca20006  sltiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE90u;
        goto label_1dee90;
    }
    ctx->pc = 0x1DEE88u;
    {
        const bool branch_taken_0x1dee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE88u;
        // 0x1dee8c: 0x2ca20006  sltiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee88) {
            ctx->pc = 0x1DEEA0u;
            goto label_1deea0;
        }
    }
    ctx->pc = 0x1DEE90u;
label_1dee90:
    // 0x1dee90: 0xc077b5a  jal         func_1DED68
label_1dee94:
    if (ctx->pc == 0x1DEE94u) {
        ctx->pc = 0x1DEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE90u;
        // 0x1dee94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE98u;
        goto label_1dee98;
    }
    ctx->pc = 0x1DEE90u;
    SET_GPR_U32(ctx, 31, 0x1DEE98u);
    ctx->pc = 0x1DEE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEE90u;
    // 0x1dee94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED68u, 0x1DEE90u, 0x1DEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEE98u;
label_1dee98:
    // 0x1dee98: 0x1000013a  b           . + 4 + (0x13A << 2)
label_1dee9c:
    if (ctx->pc == 0x1DEE9Cu) {
        ctx->pc = 0x1DEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE98u;
        // 0x1dee9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEA0u;
        goto label_1deea0;
    }
    ctx->pc = 0x1DEE98u;
    {
        const bool branch_taken_0x1dee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE98u;
        // 0x1dee9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee98) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEEA0u;
label_1deea0:
    // 0x1deea0: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
label_1deea4:
    if (ctx->pc == 0x1DEEA4u) {
        ctx->pc = 0x1DEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEA0u;
        // 0x1deea4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEA8u;
        goto label_1deea8;
    }
    ctx->pc = 0x1DEEA0u;
    {
        const bool branch_taken_0x1deea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEA0u;
        // 0x1deea4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deea0) {
            ctx->pc = 0x1DF380u;
            goto label_1df380;
        }
    }
    ctx->pc = 0x1DEEA8u;
label_1deea8:
    // 0x1deea8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1deea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1deeac:
    // 0x1deeac: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x1deeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_1deeb0:
    // 0x1deeb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1deeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1deeb4:
    // 0x1deeb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1deeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1deeb8:
    // 0x1deeb8: 0x800008  jr          $a0
label_1deebc:
    if (ctx->pc == 0x1DEEBCu) {
        ctx->pc = 0x1DEEC0u;
        goto label_1deec0;
    }
    ctx->pc = 0x1DEEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEEC0u: goto label_1deec0;
            case 0x1DEF70u: goto label_1def70;
            case 0x1DF064u: goto label_1df064;
            case 0x1DF078u: goto label_1df078;
            case 0x1DF0A4u: goto label_1df0a4;
            case 0x1DF330u: goto label_1df330;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEEB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DEEC0u;
label_1deec0:
    // 0x1deec0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1deec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1deec4:
    // 0x1deec4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1deec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1deec8:
    // 0x1deec8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1deec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1deecc:
    // 0x1deecc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1deeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1deed0:
    // 0x1deed0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1deed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1deed4:
    // 0x1deed4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1deed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1deed8:
    // 0x1deed8: 0x40f809  jalr        $v0
label_1deedc:
    if (ctx->pc == 0x1DEEDCu) {
        ctx->pc = 0x1DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEED8u;
        // 0x1deedc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEE0u;
        goto label_1deee0;
    }
    ctx->pc = 0x1DEED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEEE0u);
        ctx->pc = 0x1DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEED8u;
        // 0x1deedc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEED8u, 0x1DEEE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEEE0u;
label_1deee0:
    // 0x1deee0: 0x8e431b88  lw          $v1, 0x1B88($s2)
    ctx->pc = 0x1deee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1deee4:
    // 0x1deee4: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
label_1deee8:
    if (ctx->pc == 0x1DEEE8u) {
        ctx->pc = 0x1DEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEE4u;
        // 0x1deee8: 0xae02ee2c  sw          $v0, -0x11D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294962732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEECu;
        goto label_1deeec;
    }
    ctx->pc = 0x1DEEE4u;
    {
        const bool branch_taken_0x1deee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEE4u;
        // 0x1deee8: 0xae02ee2c  sw          $v0, -0x11D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294962732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deee4) {
            ctx->pc = 0x1DF094u;
            goto label_1df094;
        }
    }
    ctx->pc = 0x1DEEECu;
label_1deeec:
    // 0x1deeec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1deeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1deef0:
    // 0x1deef0: 0xc107458  jal         func_41D160
label_1deef4:
    if (ctx->pc == 0x1DEEF4u) {
        ctx->pc = 0x1DEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEF0u;
        // 0x1deef4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEF8u;
        goto label_1deef8;
    }
    ctx->pc = 0x1DEEF0u;
    SET_GPR_U32(ctx, 31, 0x1DEEF8u);
    ctx->pc = 0x1DEEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEEF0u;
    // 0x1deef4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DEEF0u, 0x1DEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEEF8u;
label_1deef8:
    // 0x1deef8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1deefc:
    if (ctx->pc == 0x1DEEFCu) {
        ctx->pc = 0x1DEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEF8u;
        // 0x1deefc: 0x8e421ba4  lw          $v0, 0x1BA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF00u;
        goto label_1def00;
    }
    ctx->pc = 0x1DEEF8u;
    {
        const bool branch_taken_0x1deef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deef8) {
            ctx->pc = 0x1DEEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEEF8u;
            // 0x1deefc: 0x8e421ba4  lw          $v0, 0x1BA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF10u;
            goto label_1def10;
        }
    }
    ctx->pc = 0x1DEF00u;
label_1def00:
    // 0x1def00: 0x8e421ba8  lw          $v0, 0x1BA8($s2)
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7080)));
label_1def04:
    // 0x1def04: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
label_1def08:
    if (ctx->pc == 0x1DEF08u) {
        ctx->pc = 0x1DEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF04u;
        // 0x1def08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF0Cu;
        goto label_1def0c;
    }
    ctx->pc = 0x1DEF04u;
    {
        const bool branch_taken_0x1def04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def04) {
            ctx->pc = 0x1DEF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEF04u;
            // 0x1def08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF084u;
            goto label_1df084;
        }
    }
    ctx->pc = 0x1DEF0Cu;
label_1def0c:
    // 0x1def0c: 0x8e421ba4  lw          $v0, 0x1BA4($s2)
    ctx->pc = 0x1def0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
label_1def10:
    // 0x1def10: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_1def14:
    if (ctx->pc == 0x1DEF14u) {
        ctx->pc = 0x1DEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF10u;
        // 0x1def14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF18u;
        goto label_1def18;
    }
    ctx->pc = 0x1DEF10u;
    {
        const bool branch_taken_0x1def10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def10) {
            ctx->pc = 0x1DEF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEF10u;
            // 0x1def14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF084u;
            goto label_1df084;
        }
    }
    ctx->pc = 0x1DEF18u;
label_1def18:
    // 0x1def18: 0x8e421bb4  lw          $v0, 0x1BB4($s2)
    ctx->pc = 0x1def18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
label_1def1c:
    // 0x1def1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1def20:
    if (ctx->pc == 0x1DEF20u) {
        ctx->pc = 0x1DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF1Cu;
        // 0x1def20: 0x8e433a74  lw          $v1, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF24u;
        goto label_1def24;
    }
    ctx->pc = 0x1DEF1Cu;
    {
        const bool branch_taken_0x1def1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF1Cu;
        // 0x1def20: 0x8e433a74  lw          $v1, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def1c) {
            ctx->pc = 0x1DEF30u;
            goto label_1def30;
        }
    }
    ctx->pc = 0x1DEF24u;
label_1def24:
    // 0x1def24: 0x8e421bb8  lw          $v0, 0x1BB8($s2)
    ctx->pc = 0x1def24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
label_1def28:
    // 0x1def28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1def2c:
    if (ctx->pc == 0x1DEF2Cu) {
        ctx->pc = 0x1DEF30u;
        goto label_1def30;
    }
    ctx->pc = 0x1DEF28u;
    {
        const bool branch_taken_0x1def28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def28) {
            ctx->pc = 0x1DEF3Cu;
            goto label_1def3c;
        }
    }
    ctx->pc = 0x1DEF30u;
label_1def30:
    // 0x1def30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1def34:
    // 0x1def34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1def38:
    if (ctx->pc == 0x1DEF38u) {
        ctx->pc = 0x1DEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF34u;
        // 0x1def38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF3Cu;
        goto label_1def3c;
    }
    ctx->pc = 0x1DEF34u;
    {
        const bool branch_taken_0x1def34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF34u;
        // 0x1def38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def34) {
            ctx->pc = 0x1DEF44u;
            goto label_1def44;
        }
    }
    ctx->pc = 0x1DEF3Cu;
label_1def3c:
    // 0x1def3c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1def40:
    if (ctx->pc == 0x1DEF40u) {
        ctx->pc = 0x1DEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF3Cu;
        // 0x1def40: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF44u;
        goto label_1def44;
    }
    ctx->pc = 0x1DEF3Cu;
    {
        const bool branch_taken_0x1def3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF3Cu;
        // 0x1def40: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def3c) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEF44u;
label_1def44:
    // 0x1def44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1def44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1def48:
    // 0x1def48: 0xae423a74  sw          $v0, 0x3A74($s2)
    ctx->pc = 0x1def48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14964), GPR_U32(ctx, 2));
label_1def4c:
    // 0x1def4c: 0xc077b40  jal         func_1DED00
label_1def50:
    if (ctx->pc == 0x1DEF50u) {
        ctx->pc = 0x1DEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF4Cu;
        // 0x1def50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF54u;
        goto label_1def54;
    }
    ctx->pc = 0x1DEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF54u);
    ctx->pc = 0x1DEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF4Cu;
    // 0x1def50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DEF4Cu, 0x1DEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF54u;
label_1def54:
    // 0x1def54: 0x1000010b  b           . + 4 + (0x10B << 2)
label_1def58:
    if (ctx->pc == 0x1DEF58u) {
        ctx->pc = 0x1DEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF54u;
        // 0x1def58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF5Cu;
        goto label_1def5c;
    }
    ctx->pc = 0x1DEF54u;
    {
        const bool branch_taken_0x1def54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF54u;
        // 0x1def58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def54) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEF5Cu;
label_1def5c:
    // 0x1def5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1def5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1def60:
    // 0x1def60: 0xc077b40  jal         func_1DED00
label_1def64:
    if (ctx->pc == 0x1DEF64u) {
        ctx->pc = 0x1DEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF60u;
        // 0x1def64: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF68u;
        goto label_1def68;
    }
    ctx->pc = 0x1DEF60u;
    SET_GPR_U32(ctx, 31, 0x1DEF68u);
    ctx->pc = 0x1DEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF60u;
    // 0x1def64: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DEF60u, 0x1DEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF68u;
label_1def68:
    // 0x1def68: 0x10000106  b           . + 4 + (0x106 << 2)
label_1def6c:
    if (ctx->pc == 0x1DEF6Cu) {
        ctx->pc = 0x1DEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF68u;
        // 0x1def6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF70u;
        goto label_1def70;
    }
    ctx->pc = 0x1DEF68u;
    {
        const bool branch_taken_0x1def68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF68u;
        // 0x1def6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def68) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DEF70u;
label_1def70:
    // 0x1def70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1def70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1def74:
    // 0x1def74: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1def74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1def78:
    // 0x1def78: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1def7c:
    // 0x1def7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1def7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1def80:
    // 0x1def80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1def80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1def84:
    // 0x1def84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1def84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1def88:
    // 0x1def88: 0x40f809  jalr        $v0
label_1def8c:
    if (ctx->pc == 0x1DEF8Cu) {
        ctx->pc = 0x1DEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF88u;
        // 0x1def8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF90u;
        goto label_1def90;
    }
    ctx->pc = 0x1DEF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEF90u);
        ctx->pc = 0x1DEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF88u;
        // 0x1def8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF88u, 0x1DEF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEF90u;
label_1def90:
    // 0x1def90: 0x8e431b88  lw          $v1, 0x1B88($s2)
    ctx->pc = 0x1def90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1def94:
    // 0x1def94: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_1def98:
    if (ctx->pc == 0x1DEF98u) {
        ctx->pc = 0x1DEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF94u;
        // 0x1def98: 0xae02ee2c  sw          $v0, -0x11D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294962732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF9Cu;
        goto label_1def9c;
    }
    ctx->pc = 0x1DEF94u;
    {
        const bool branch_taken_0x1def94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF94u;
        // 0x1def98: 0xae02ee2c  sw          $v0, -0x11D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294962732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def94) {
            ctx->pc = 0x1DF094u;
            goto label_1df094;
        }
    }
    ctx->pc = 0x1DEF9Cu;
label_1def9c:
    // 0x1def9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1def9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1defa0:
    // 0x1defa0: 0xc107458  jal         func_41D160
label_1defa4:
    if (ctx->pc == 0x1DEFA4u) {
        ctx->pc = 0x1DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFA0u;
        // 0x1defa4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFA8u;
        goto label_1defa8;
    }
    ctx->pc = 0x1DEFA0u;
    SET_GPR_U32(ctx, 31, 0x1DEFA8u);
    ctx->pc = 0x1DEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEFA0u;
    // 0x1defa4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DEFA0u, 0x1DEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEFA8u;
label_1defa8:
    // 0x1defa8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1defac:
    if (ctx->pc == 0x1DEFACu) {
        ctx->pc = 0x1DEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFA8u;
        // 0x1defac: 0x8e421ba4  lw          $v0, 0x1BA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFB0u;
        goto label_1defb0;
    }
    ctx->pc = 0x1DEFA8u;
    {
        const bool branch_taken_0x1defa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1defa8) {
            ctx->pc = 0x1DEFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEFA8u;
            // 0x1defac: 0x8e421ba4  lw          $v0, 0x1BA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEFC0u;
            goto label_1defc0;
        }
    }
    ctx->pc = 0x1DEFB0u;
label_1defb0:
    // 0x1defb0: 0x8e421ba8  lw          $v0, 0x1BA8($s2)
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7080)));
label_1defb4:
    // 0x1defb4: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_1defb8:
    if (ctx->pc == 0x1DEFB8u) {
        ctx->pc = 0x1DEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFB4u;
        // 0x1defb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFBCu;
        goto label_1defbc;
    }
    ctx->pc = 0x1DEFB4u;
    {
        const bool branch_taken_0x1defb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1defb4) {
            ctx->pc = 0x1DEFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEFB4u;
            // 0x1defb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF084u;
            goto label_1df084;
        }
    }
    ctx->pc = 0x1DEFBCu;
label_1defbc:
    // 0x1defbc: 0x8e421ba4  lw          $v0, 0x1BA4($s2)
    ctx->pc = 0x1defbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
label_1defc0:
    // 0x1defc0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_1defc4:
    if (ctx->pc == 0x1DEFC4u) {
        ctx->pc = 0x1DEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFC0u;
        // 0x1defc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFC8u;
        goto label_1defc8;
    }
    ctx->pc = 0x1DEFC0u;
    {
        const bool branch_taken_0x1defc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1defc0) {
            ctx->pc = 0x1DEFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEFC0u;
            // 0x1defc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF084u;
            goto label_1df084;
        }
    }
    ctx->pc = 0x1DEFC8u;
label_1defc8:
    // 0x1defc8: 0x8e423a7c  lw          $v0, 0x3A7C($s2)
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14972)));
label_1defcc:
    // 0x1defcc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1defd0:
    if (ctx->pc == 0x1DEFD0u) {
        ctx->pc = 0x1DEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFCCu;
        // 0x1defd0: 0x8e421bb4  lw          $v0, 0x1BB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFD4u;
        goto label_1defd4;
    }
    ctx->pc = 0x1DEFCCu;
    {
        const bool branch_taken_0x1defcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1defcc) {
            ctx->pc = 0x1DEFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEFCCu;
            // 0x1defd0: 0x8e421bb4  lw          $v0, 0x1BB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEFE4u;
            goto label_1defe4;
        }
    }
    ctx->pc = 0x1DEFD4u;
label_1defd4:
    // 0x1defd4: 0x8e423a74  lw          $v0, 0x3A74($s2)
    ctx->pc = 0x1defd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1defd8:
    // 0x1defd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1defd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1defdc:
    // 0x1defdc: 0xae423a74  sw          $v0, 0x3A74($s2)
    ctx->pc = 0x1defdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14964), GPR_U32(ctx, 2));
label_1defe0:
    // 0x1defe0: 0x8e421bb4  lw          $v0, 0x1BB4($s2)
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
label_1defe4:
    // 0x1defe4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1defe8:
    if (ctx->pc == 0x1DEFE8u) {
        ctx->pc = 0x1DEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFE4u;
        // 0x1defe8: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFECu;
        goto label_1defec;
    }
    ctx->pc = 0x1DEFE4u;
    {
        const bool branch_taken_0x1defe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1defe4) {
            ctx->pc = 0x1DEFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEFE4u;
            // 0x1defe8: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEFF8u;
            goto label_1deff8;
        }
    }
    ctx->pc = 0x1DEFECu;
label_1defec:
    // 0x1defec: 0x8e421bb8  lw          $v0, 0x1BB8($s2)
    ctx->pc = 0x1defecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
label_1deff0:
    // 0x1deff0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1deff4:
    if (ctx->pc == 0x1DEFF4u) {
        ctx->pc = 0x1DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFF0u;
        // 0x1deff4: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFF8u;
        goto label_1deff8;
    }
    ctx->pc = 0x1DEFF0u;
    {
        const bool branch_taken_0x1deff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFF0u;
        // 0x1deff4: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deff0) {
            ctx->pc = 0x1DF028u;
            goto label_1df028;
        }
    }
    ctx->pc = 0x1DEFF8u;
label_1deff8:
    // 0x1deff8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1deff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1deffc:
    // 0x1deffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1df000:
    if (ctx->pc == 0x1DF000u) {
        ctx->pc = 0x1DF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFFCu;
        // 0x1df000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF004u;
        goto label_1df004;
    }
    ctx->pc = 0x1DEFFCu;
    {
        const bool branch_taken_0x1deffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFFCu;
        // 0x1df000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deffc) {
            ctx->pc = 0x1DF014u;
            goto label_1df014;
        }
    }
    ctx->pc = 0x1DF004u;
label_1df004:
    // 0x1df004: 0xc077b40  jal         func_1DED00
label_1df008:
    if (ctx->pc == 0x1DF008u) {
        ctx->pc = 0x1DF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF004u;
        // 0x1df008: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF00Cu;
        goto label_1df00c;
    }
    ctx->pc = 0x1DF004u;
    SET_GPR_U32(ctx, 31, 0x1DF00Cu);
    ctx->pc = 0x1DF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF004u;
    // 0x1df008: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF004u, 0x1DF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF00Cu;
label_1df00c:
    // 0x1df00c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1df010:
    if (ctx->pc == 0x1DF010u) {
        ctx->pc = 0x1DF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF00Cu;
        // 0x1df010: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF014u;
        goto label_1df014;
    }
    ctx->pc = 0x1DF00Cu;
    {
        const bool branch_taken_0x1df00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF00Cu;
        // 0x1df010: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df00c) {
            ctx->pc = 0x1DF020u;
            goto label_1df020;
        }
    }
    ctx->pc = 0x1DF014u;
label_1df014:
    // 0x1df014: 0xc077b40  jal         func_1DED00
label_1df018:
    if (ctx->pc == 0x1DF018u) {
        ctx->pc = 0x1DF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF014u;
        // 0x1df018: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF01Cu;
        goto label_1df01c;
    }
    ctx->pc = 0x1DF014u;
    SET_GPR_U32(ctx, 31, 0x1DF01Cu);
    ctx->pc = 0x1DF018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF014u;
    // 0x1df018: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF014u, 0x1DF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF01Cu;
label_1df01c:
    // 0x1df01c: 0x8e423a74  lw          $v0, 0x3A74($s2)
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1df020:
    // 0x1df020: 0x1000000e  b           . + 4 + (0xE << 2)
label_1df024:
    if (ctx->pc == 0x1DF024u) {
        ctx->pc = 0x1DF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF020u;
        // 0x1df024: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF028u;
        goto label_1df028;
    }
    ctx->pc = 0x1DF020u;
    {
        const bool branch_taken_0x1df020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF020u;
        // 0x1df024: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df020) {
            ctx->pc = 0x1DF05Cu;
            goto label_1df05c;
        }
    }
    ctx->pc = 0x1DF028u;
label_1df028:
    // 0x1df028: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1df028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1df02c:
    // 0x1df02c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1df030:
    if (ctx->pc == 0x1DF030u) {
        ctx->pc = 0x1DF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF02Cu;
        // 0x1df030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF034u;
        goto label_1df034;
    }
    ctx->pc = 0x1DF02Cu;
    {
        const bool branch_taken_0x1df02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF02Cu;
        // 0x1df030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df02c) {
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF034u;
label_1df034:
    // 0x1df034: 0xc077b40  jal         func_1DED00
label_1df038:
    if (ctx->pc == 0x1DF038u) {
        ctx->pc = 0x1DF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF034u;
        // 0x1df038: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF03Cu;
        goto label_1df03c;
    }
    ctx->pc = 0x1DF034u;
    SET_GPR_U32(ctx, 31, 0x1DF03Cu);
    ctx->pc = 0x1DF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF034u;
    // 0x1df038: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF034u, 0x1DF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF03Cu;
label_1df03c:
    // 0x1df03c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1df040:
    if (ctx->pc == 0x1DF040u) {
        ctx->pc = 0x1DF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF03Cu;
        // 0x1df040: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF044u;
        goto label_1df044;
    }
    ctx->pc = 0x1DF03Cu;
    {
        const bool branch_taken_0x1df03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF03Cu;
        // 0x1df040: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df03c) {
            ctx->pc = 0x1DF050u;
            goto label_1df050;
        }
    }
    ctx->pc = 0x1DF044u;
label_1df044:
    // 0x1df044: 0xc077b40  jal         func_1DED00
label_1df048:
    if (ctx->pc == 0x1DF048u) {
        ctx->pc = 0x1DF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF044u;
        // 0x1df048: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF04Cu;
        goto label_1df04c;
    }
    ctx->pc = 0x1DF044u;
    SET_GPR_U32(ctx, 31, 0x1DF04Cu);
    ctx->pc = 0x1DF048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF044u;
    // 0x1df048: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF044u, 0x1DF04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF04Cu;
label_1df04c:
    // 0x1df04c: 0x8e423a74  lw          $v0, 0x3A74($s2)
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1df050:
    // 0x1df050: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1df050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1df054:
    // 0x1df054: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x1df054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1df058:
    // 0x1df058: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1df058u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1df05c:
    // 0x1df05c: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
label_1df060:
    if (ctx->pc == 0x1DF060u) {
        ctx->pc = 0x1DF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF05Cu;
        // 0x1df060: 0xae423a74  sw          $v0, 0x3A74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 14964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF064u;
        goto label_1df064;
    }
    ctx->pc = 0x1DF05Cu;
    {
        const bool branch_taken_0x1df05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF05Cu;
        // 0x1df060: 0xae423a74  sw          $v0, 0x3A74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 14964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df05c) {
            ctx->pc = 0x1DEE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee98;
        }
    }
    ctx->pc = 0x1DF064u;
label_1df064:
    // 0x1df064: 0x8e421b88  lw          $v0, 0x1B88($s2)
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1df068:
    // 0x1df068: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1df06c:
    if (ctx->pc == 0x1DF06Cu) {
        ctx->pc = 0x1DF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF068u;
        // 0x1df06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF070u;
        goto label_1df070;
    }
    ctx->pc = 0x1DF068u;
    {
        const bool branch_taken_0x1df068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF068u;
        // 0x1df06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df068) {
            ctx->pc = 0x1DF084u;
            goto label_1df084;
        }
    }
    ctx->pc = 0x1DF070u;
label_1df070:
    // 0x1df070: 0x10000008  b           . + 4 + (0x8 << 2)
label_1df074:
    if (ctx->pc == 0x1DF074u) {
        ctx->pc = 0x1DF078u;
        goto label_1df078;
    }
    ctx->pc = 0x1DF070u;
    {
        const bool branch_taken_0x1df070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df070) {
            ctx->pc = 0x1DF094u;
            goto label_1df094;
        }
    }
    ctx->pc = 0x1DF078u;
label_1df078:
    // 0x1df078: 0x8e421b88  lw          $v0, 0x1B88($s2)
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1df07c:
    // 0x1df07c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1df080:
    if (ctx->pc == 0x1DF080u) {
        ctx->pc = 0x1DF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF07Cu;
        // 0x1df080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF084u;
        goto label_1df084;
    }
    ctx->pc = 0x1DF07Cu;
    {
        const bool branch_taken_0x1df07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF07Cu;
        // 0x1df080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df07c) {
            ctx->pc = 0x1DF094u;
            goto label_1df094;
        }
    }
    ctx->pc = 0x1DF084u;
label_1df084:
    // 0x1df084: 0xc077b40  jal         func_1DED00
label_1df088:
    if (ctx->pc == 0x1DF088u) {
        ctx->pc = 0x1DF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF084u;
        // 0x1df088: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF08Cu;
        goto label_1df08c;
    }
    ctx->pc = 0x1DF084u;
    SET_GPR_U32(ctx, 31, 0x1DF08Cu);
    ctx->pc = 0x1DF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF084u;
    // 0x1df088: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF084u, 0x1DF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF08Cu;
label_1df08c:
    // 0x1df08c: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1df090:
    if (ctx->pc == 0x1DF090u) {
        ctx->pc = 0x1DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF08Cu;
        // 0x1df090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF094u;
        goto label_1df094;
    }
    ctx->pc = 0x1DF08Cu;
    {
        const bool branch_taken_0x1df08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF08Cu;
        // 0x1df090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df08c) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DF094u;
label_1df094:
    // 0x1df094: 0xc077b52  jal         func_1DED48
label_1df098:
    if (ctx->pc == 0x1DF098u) {
        ctx->pc = 0x1DF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF094u;
        // 0x1df098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF09Cu;
        goto label_1df09c;
    }
    ctx->pc = 0x1DF094u;
    SET_GPR_U32(ctx, 31, 0x1DF09Cu);
    ctx->pc = 0x1DF098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF094u;
    // 0x1df098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED48u, 0x1DF094u, 0x1DF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF09Cu;
label_1df09c:
    // 0x1df09c: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1df0a0:
    if (ctx->pc == 0x1DF0A0u) {
        ctx->pc = 0x1DF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF09Cu;
        // 0x1df0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0A4u;
        goto label_1df0a4;
    }
    ctx->pc = 0x1DF09Cu;
    {
        const bool branch_taken_0x1df09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF09Cu;
        // 0x1df0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df09c) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DF0A4u;
label_1df0a4:
    // 0x1df0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df0a8:
    // 0x1df0a8: 0xc077b40  jal         func_1DED00
label_1df0ac:
    if (ctx->pc == 0x1DF0ACu) {
        ctx->pc = 0x1DF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0A8u;
        // 0x1df0ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0B0u;
        goto label_1df0b0;
    }
    ctx->pc = 0x1DF0A8u;
    SET_GPR_U32(ctx, 31, 0x1DF0B0u);
    ctx->pc = 0x1DF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0A8u;
    // 0x1df0ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF0A8u, 0x1DF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0B0u;
label_1df0b0:
    // 0x1df0b0: 0x26511bd0  addiu       $s1, $s2, 0x1BD0
    ctx->pc = 0x1df0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
label_1df0b4:
    // 0x1df0b4: 0xae421b84  sw          $v0, 0x1B84($s2)
    ctx->pc = 0x1df0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7044), GPR_U32(ctx, 2));
label_1df0b8:
    // 0x1df0b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1df0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df0bc:
    // 0x1df0bc: 0xae3004c0  sw          $s0, 0x4C0($s1)
    ctx->pc = 0x1df0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1216), GPR_U32(ctx, 16));
label_1df0c0:
    // 0x1df0c0: 0x8e421b88  lw          $v0, 0x1B88($s2)
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1df0c4:
    // 0x1df0c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1df0c8:
    if (ctx->pc == 0x1DF0C8u) {
        ctx->pc = 0x1DF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0C4u;
        // 0x1df0c8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0CCu;
        goto label_1df0cc;
    }
    ctx->pc = 0x1DF0C4u;
    {
        const bool branch_taken_0x1df0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0C4u;
        // 0x1df0c8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0c4) {
            ctx->pc = 0x1DF0FCu;
            goto label_1df0fc;
        }
    }
    ctx->pc = 0x1DF0CCu;
label_1df0cc:
    // 0x1df0cc: 0xae501b88  sw          $s0, 0x1B88($s2)
    ctx->pc = 0x1df0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7048), GPR_U32(ctx, 16));
label_1df0d0:
    // 0x1df0d0: 0x26502b00  addiu       $s0, $s2, 0x2B00
    ctx->pc = 0x1df0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
label_1df0d4:
    // 0x1df0d4: 0xc0750fa  jal         func_1D43E8
label_1df0d8:
    if (ctx->pc == 0x1DF0D8u) {
        ctx->pc = 0x1DF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0D4u;
        // 0x1df0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0DCu;
        goto label_1df0dc;
    }
    ctx->pc = 0x1DF0D4u;
    SET_GPR_U32(ctx, 31, 0x1DF0DCu);
    ctx->pc = 0x1DF0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0D4u;
    // 0x1df0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1DF0D4u, 0x1DF0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0DCu;
label_1df0dc:
    // 0x1df0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df0e0:
    // 0x1df0e0: 0xc0750fc  jal         func_1D43F0
label_1df0e4:
    if (ctx->pc == 0x1DF0E4u) {
        ctx->pc = 0x1DF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0E0u;
        // 0x1df0e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0E8u;
        goto label_1df0e8;
    }
    ctx->pc = 0x1DF0E0u;
    SET_GPR_U32(ctx, 31, 0x1DF0E8u);
    ctx->pc = 0x1DF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0E0u;
    // 0x1df0e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x1DF0E0u, 0x1DF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0E8u;
label_1df0e8:
    // 0x1df0e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df0ec:
    // 0x1df0ec: 0xc0779b0  jal         func_1DE6C0
label_1df0f0:
    if (ctx->pc == 0x1DF0F0u) {
        ctx->pc = 0x1DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0ECu;
        // 0x1df0f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0F4u;
        goto label_1df0f4;
    }
    ctx->pc = 0x1DF0ECu;
    SET_GPR_U32(ctx, 31, 0x1DF0F4u);
    ctx->pc = 0x1DF0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0ECu;
    // 0x1df0f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6C0u, 0x1DF0ECu, 0x1DF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0F4u;
label_1df0f4:
    // 0x1df0f4: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1df0f8:
    if (ctx->pc == 0x1DF0F8u) {
        ctx->pc = 0x1DF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0F4u;
        // 0x1df0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0FCu;
        goto label_1df0fc;
    }
    ctx->pc = 0x1DF0F4u;
    {
        const bool branch_taken_0x1df0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0F4u;
        // 0x1df0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0f4) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DF0FCu;
label_1df0fc:
    // 0x1df0fc: 0x8e431bb4  lw          $v1, 0x1BB4($s2)
    ctx->pc = 0x1df0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
label_1df100:
    // 0x1df100: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1df104:
    if (ctx->pc == 0x1DF104u) {
        ctx->pc = 0x1DF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF100u;
        // 0x1df104: 0x8e533a74  lw          $s3, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF108u;
        goto label_1df108;
    }
    ctx->pc = 0x1DF100u;
    {
        const bool branch_taken_0x1df100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df100) {
            ctx->pc = 0x1DF104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF100u;
            // 0x1df104: 0x8e533a74  lw          $s3, 0x3A74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF118u;
            goto label_1df118;
        }
    }
    ctx->pc = 0x1DF108u;
label_1df108:
    // 0x1df108: 0x8e421bb8  lw          $v0, 0x1BB8($s2)
    ctx->pc = 0x1df108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
label_1df10c:
    // 0x1df10c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_1df110:
    if (ctx->pc == 0x1DF110u) {
        ctx->pc = 0x1DF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF10Cu;
        // 0x1df110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF114u;
        goto label_1df114;
    }
    ctx->pc = 0x1DF10Cu;
    {
        const bool branch_taken_0x1df10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF10Cu;
        // 0x1df110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df10c) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DF114u;
label_1df114:
    // 0x1df114: 0x8e533a74  lw          $s3, 0x3A74($s2)
    ctx->pc = 0x1df114u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1df118:
    // 0x1df118: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1df11c:
    if (ctx->pc == 0x1DF11Cu) {
        ctx->pc = 0x1DF120u;
        goto label_1df120;
    }
    ctx->pc = 0x1DF118u;
    {
        const bool branch_taken_0x1df118 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df118) {
            ctx->pc = 0x1DF130u;
            goto label_1df130;
        }
    }
    ctx->pc = 0x1DF120u;
label_1df120:
    // 0x1df120: 0x1270002c  beq         $s3, $s0, . + 4 + (0x2C << 2)
label_1df124:
    if (ctx->pc == 0x1DF124u) {
        ctx->pc = 0x1DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF120u;
        // 0x1df124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF128u;
        goto label_1df128;
    }
    ctx->pc = 0x1DF120u;
    {
        const bool branch_taken_0x1df120 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x1DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF120u;
        // 0x1df124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df120) {
            ctx->pc = 0x1DF1D4u;
            goto label_1df1d4;
        }
    }
    ctx->pc = 0x1DF128u;
label_1df128:
    // 0x1df128: 0x10000097  b           . + 4 + (0x97 << 2)
label_1df12c:
    if (ctx->pc == 0x1DF12Cu) {
        ctx->pc = 0x1DF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF128u;
        // 0x1df12c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF130u;
        goto label_1df130;
    }
    ctx->pc = 0x1DF128u;
    {
        const bool branch_taken_0x1df128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF128u;
        // 0x1df12c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df128) {
            ctx->pc = 0x1DF388u;
            goto label_1df388;
        }
    }
    ctx->pc = 0x1DF130u;
label_1df130:
    // 0x1df130: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1df134:
    if (ctx->pc == 0x1DF134u) {
        ctx->pc = 0x1DF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF130u;
        // 0x1df134: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF138u;
        goto label_1df138;
    }
    ctx->pc = 0x1DF130u;
    {
        const bool branch_taken_0x1df130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF130u;
        // 0x1df134: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df130) {
            ctx->pc = 0x1DF19Cu;
            goto label_1df19c;
        }
    }
    ctx->pc = 0x1DF138u;
label_1df138:
    // 0x1df138: 0xc107458  jal         func_41D160
label_1df13c:
    if (ctx->pc == 0x1DF13Cu) {
        ctx->pc = 0x1DF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF138u;
        // 0x1df13c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF140u;
        goto label_1df140;
    }
    ctx->pc = 0x1DF138u;
    SET_GPR_U32(ctx, 31, 0x1DF140u);
    ctx->pc = 0x1DF13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF138u;
    // 0x1df13c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF138u, 0x1DF140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF140u;
label_1df140:
    // 0x1df140: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1df144:
    if (ctx->pc == 0x1DF144u) {
        ctx->pc = 0x1DF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF140u;
        // 0x1df144: 0x8e421bb0  lw          $v0, 0x1BB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF148u;
        goto label_1df148;
    }
    ctx->pc = 0x1DF140u;
    {
        const bool branch_taken_0x1df140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df140) {
            ctx->pc = 0x1DF144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF140u;
            // 0x1df144: 0x8e421bb0  lw          $v0, 0x1BB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF154u;
            goto label_1df154;
        }
    }
    ctx->pc = 0x1DF148u;
label_1df148:
    // 0x1df148: 0xae501ba0  sw          $s0, 0x1BA0($s2)
    ctx->pc = 0x1df148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 16));
label_1df14c:
    // 0x1df14c: 0x10000067  b           . + 4 + (0x67 << 2)
label_1df150:
    if (ctx->pc == 0x1DF150u) {
        ctx->pc = 0x1DF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF14Cu;
        // 0x1df150: 0xae501b90  sw          $s0, 0x1B90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7056), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF154u;
        goto label_1df154;
    }
    ctx->pc = 0x1DF14Cu;
    {
        const bool branch_taken_0x1df14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF14Cu;
        // 0x1df150: 0xae501b90  sw          $s0, 0x1B90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7056), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df14c) {
            ctx->pc = 0x1DF2ECu;
            goto label_1df2ec;
        }
    }
    ctx->pc = 0x1DF154u;
label_1df154:
    // 0x1df154: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1df158:
    if (ctx->pc == 0x1DF158u) {
        ctx->pc = 0x1DF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF154u;
        // 0x1df158: 0xae501ba0  sw          $s0, 0x1BA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF15Cu;
        goto label_1df15c;
    }
    ctx->pc = 0x1DF154u;
    {
        const bool branch_taken_0x1df154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF154u;
        // 0x1df158: 0xae501ba0  sw          $s0, 0x1BA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df154) {
            ctx->pc = 0x1DF190u;
            goto label_1df190;
        }
    }
    ctx->pc = 0x1DF15Cu;
label_1df15c:
    // 0x1df15c: 0xc067b9c  jal         func_19EE70
label_1df160:
    if (ctx->pc == 0x1DF160u) {
        ctx->pc = 0x1DF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF15Cu;
        // 0x1df160: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF164u;
        goto label_1df164;
    }
    ctx->pc = 0x1DF15Cu;
    SET_GPR_U32(ctx, 31, 0x1DF164u);
    ctx->pc = 0x1DF160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF15Cu;
    // 0x1df160: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF15Cu, 0x1DF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF164u;
label_1df164:
    // 0x1df164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df168:
    // 0x1df168: 0xc06ec94  jal         func_1BB250
label_1df16c:
    if (ctx->pc == 0x1DF16Cu) {
        ctx->pc = 0x1DF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF168u;
        // 0x1df16c: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF170u;
        goto label_1df170;
    }
    ctx->pc = 0x1DF168u;
    SET_GPR_U32(ctx, 31, 0x1DF170u);
    ctx->pc = 0x1DF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF168u;
    // 0x1df16c: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DF168u, 0x1DF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF170u;
label_1df170:
    // 0x1df170: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1df170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1df174:
    // 0x1df174: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1df174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1df178:
    // 0x1df178: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1df178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df17c:
    // 0x1df17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df180:
    // 0x1df180: 0xc075920  jal         func_1D6480
label_1df184:
    if (ctx->pc == 0x1DF184u) {
        ctx->pc = 0x1DF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF180u;
        // 0x1df184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF188u;
        goto label_1df188;
    }
    ctx->pc = 0x1DF180u;
    SET_GPR_U32(ctx, 31, 0x1DF188u);
    ctx->pc = 0x1DF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF180u;
    // 0x1df184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DF180u, 0x1DF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF188u;
label_1df188:
    // 0x1df188: 0x10000058  b           . + 4 + (0x58 << 2)
label_1df18c:
    if (ctx->pc == 0x1DF18Cu) {
        ctx->pc = 0x1DF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF188u;
        // 0x1df18c: 0xae501b94  sw          $s0, 0x1B94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7060), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF190u;
        goto label_1df190;
    }
    ctx->pc = 0x1DF188u;
    {
        const bool branch_taken_0x1df188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF188u;
        // 0x1df18c: 0xae501b94  sw          $s0, 0x1B94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7060), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df188) {
            ctx->pc = 0x1DF2ECu;
            goto label_1df2ec;
        }
    }
    ctx->pc = 0x1DF190u;
label_1df190:
    // 0x1df190: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x1df190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_1df194:
    // 0x1df194: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1df198:
    if (ctx->pc == 0x1DF198u) {
        ctx->pc = 0x1DF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF194u;
        // 0x1df198: 0xae501b8c  sw          $s0, 0x1B8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7052), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF19Cu;
        goto label_1df19c;
    }
    ctx->pc = 0x1DF194u;
    {
        const bool branch_taken_0x1df194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF194u;
        // 0x1df198: 0xae501b8c  sw          $s0, 0x1B8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7052), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df194) {
            ctx->pc = 0x1DF2C0u;
            goto label_1df2c0;
        }
    }
    ctx->pc = 0x1DF19Cu;
label_1df19c:
    // 0x1df19c: 0xc067b9c  jal         func_19EE70
label_1df1a0:
    if (ctx->pc == 0x1DF1A0u) {
        ctx->pc = 0x1DF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF19Cu;
        // 0x1df1a0: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1A4u;
        goto label_1df1a4;
    }
    ctx->pc = 0x1DF19Cu;
    SET_GPR_U32(ctx, 31, 0x1DF1A4u);
    ctx->pc = 0x1DF1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF19Cu;
    // 0x1df1a0: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF19Cu, 0x1DF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1A4u;
label_1df1a4:
    // 0x1df1a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df1a8:
    // 0x1df1a8: 0xc06ec94  jal         func_1BB250
label_1df1ac:
    if (ctx->pc == 0x1DF1ACu) {
        ctx->pc = 0x1DF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1A8u;
        // 0x1df1ac: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1B0u;
        goto label_1df1b0;
    }
    ctx->pc = 0x1DF1A8u;
    SET_GPR_U32(ctx, 31, 0x1DF1B0u);
    ctx->pc = 0x1DF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1A8u;
    // 0x1df1ac: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DF1A8u, 0x1DF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1B0u;
label_1df1b0:
    // 0x1df1b0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1df1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1df1b4:
    // 0x1df1b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1df1b8:
    // 0x1df1b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1df1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df1bc:
    // 0x1df1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df1c0:
    // 0x1df1c0: 0xc075920  jal         func_1D6480
label_1df1c4:
    if (ctx->pc == 0x1DF1C4u) {
        ctx->pc = 0x1DF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1C0u;
        // 0x1df1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1C8u;
        goto label_1df1c8;
    }
    ctx->pc = 0x1DF1C0u;
    SET_GPR_U32(ctx, 31, 0x1DF1C8u);
    ctx->pc = 0x1DF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1C0u;
    // 0x1df1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DF1C0u, 0x1DF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1C8u;
label_1df1c8:
    // 0x1df1c8: 0xae501ba0  sw          $s0, 0x1BA0($s2)
    ctx->pc = 0x1df1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 16));
label_1df1cc:
    // 0x1df1cc: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1df1d0:
    if (ctx->pc == 0x1DF1D0u) {
        ctx->pc = 0x1DF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1CCu;
        // 0x1df1d0: 0xae501b74  sw          $s0, 0x1B74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7028), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1D4u;
        goto label_1df1d4;
    }
    ctx->pc = 0x1DF1CCu;
    {
        const bool branch_taken_0x1df1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1CCu;
        // 0x1df1d0: 0xae501b74  sw          $s0, 0x1B74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7028), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1cc) {
            ctx->pc = 0x1DF380u;
            goto label_1df380;
        }
    }
    ctx->pc = 0x1DF1D4u;
label_1df1d4:
    // 0x1df1d4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_1df1d8:
    if (ctx->pc == 0x1DF1D8u) {
        ctx->pc = 0x1DF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1D4u;
        // 0x1df1d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1DCu;
        goto label_1df1dc;
    }
    ctx->pc = 0x1DF1D4u;
    {
        const bool branch_taken_0x1df1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1D4u;
        // 0x1df1d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1d4) {
            ctx->pc = 0x1DF2F8u;
            goto label_1df2f8;
        }
    }
    ctx->pc = 0x1DF1DCu;
label_1df1dc:
    // 0x1df1dc: 0xc107458  jal         func_41D160
label_1df1e0:
    if (ctx->pc == 0x1DF1E0u) {
        ctx->pc = 0x1DF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1DCu;
        // 0x1df1e0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1E4u;
        goto label_1df1e4;
    }
    ctx->pc = 0x1DF1DCu;
    SET_GPR_U32(ctx, 31, 0x1DF1E4u);
    ctx->pc = 0x1DF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1DCu;
    // 0x1df1e0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF1DCu, 0x1DF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1E4u;
label_1df1e4:
    // 0x1df1e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1df1e8:
    if (ctx->pc == 0x1DF1E8u) {
        ctx->pc = 0x1DF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1E4u;
        // 0x1df1e8: 0x8e421bb0  lw          $v0, 0x1BB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1ECu;
        goto label_1df1ec;
    }
    ctx->pc = 0x1DF1E4u;
    {
        const bool branch_taken_0x1df1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df1e4) {
            ctx->pc = 0x1DF1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF1E4u;
            // 0x1df1e8: 0x8e421bb0  lw          $v0, 0x1BB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF1F8u;
            goto label_1df1f8;
        }
    }
    ctx->pc = 0x1DF1ECu;
label_1df1ec:
    // 0x1df1ec: 0xae531ba0  sw          $s3, 0x1BA0($s2)
    ctx->pc = 0x1df1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 19));
label_1df1f0:
    // 0x1df1f0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1df1f4:
    if (ctx->pc == 0x1DF1F4u) {
        ctx->pc = 0x1DF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1F0u;
        // 0x1df1f4: 0xae401b90  sw          $zero, 0x1B90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF1F8u;
        goto label_1df1f8;
    }
    ctx->pc = 0x1DF1F0u;
    {
        const bool branch_taken_0x1df1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1F0u;
        // 0x1df1f4: 0xae401b90  sw          $zero, 0x1B90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1f0) {
            ctx->pc = 0x1DF2ECu;
            goto label_1df2ec;
        }
    }
    ctx->pc = 0x1DF1F8u;
label_1df1f8:
    // 0x1df1f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1df1fc:
    if (ctx->pc == 0x1DF1FCu) {
        ctx->pc = 0x1DF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1F8u;
        // 0x1df1fc: 0x8e421bac  lw          $v0, 0x1BAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF200u;
        goto label_1df200;
    }
    ctx->pc = 0x1DF1F8u;
    {
        const bool branch_taken_0x1df1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df1f8) {
            ctx->pc = 0x1DF1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF1F8u;
            // 0x1df1fc: 0x8e421bac  lw          $v0, 0x1BAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7084)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF238u;
            goto label_1df238;
        }
    }
    ctx->pc = 0x1DF200u;
label_1df200:
    // 0x1df200: 0xae531ba0  sw          $s3, 0x1BA0($s2)
    ctx->pc = 0x1df200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 19));
label_1df204:
    // 0x1df204: 0xc067b9c  jal         func_19EE70
label_1df208:
    if (ctx->pc == 0x1DF208u) {
        ctx->pc = 0x1DF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF204u;
        // 0x1df208: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF20Cu;
        goto label_1df20c;
    }
    ctx->pc = 0x1DF204u;
    SET_GPR_U32(ctx, 31, 0x1DF20Cu);
    ctx->pc = 0x1DF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF204u;
    // 0x1df208: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF204u, 0x1DF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF20Cu;
label_1df20c:
    // 0x1df20c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df210:
    // 0x1df210: 0xc06ec94  jal         func_1BB250
label_1df214:
    if (ctx->pc == 0x1DF214u) {
        ctx->pc = 0x1DF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF210u;
        // 0x1df214: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF218u;
        goto label_1df218;
    }
    ctx->pc = 0x1DF210u;
    SET_GPR_U32(ctx, 31, 0x1DF218u);
    ctx->pc = 0x1DF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF210u;
    // 0x1df214: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DF210u, 0x1DF218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF218u;
label_1df218:
    // 0x1df218: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1df21c:
    // 0x1df21c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1df21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1df220:
    // 0x1df220: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1df220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df224:
    // 0x1df224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df228:
    // 0x1df228: 0xc075920  jal         func_1D6480
label_1df22c:
    if (ctx->pc == 0x1DF22Cu) {
        ctx->pc = 0x1DF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF228u;
        // 0x1df22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF230u;
        goto label_1df230;
    }
    ctx->pc = 0x1DF228u;
    SET_GPR_U32(ctx, 31, 0x1DF230u);
    ctx->pc = 0x1DF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF228u;
    // 0x1df22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DF228u, 0x1DF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF230u;
label_1df230:
    // 0x1df230: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1df234:
    if (ctx->pc == 0x1DF234u) {
        ctx->pc = 0x1DF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF230u;
        // 0x1df234: 0xae531b9c  sw          $s3, 0x1B9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7068), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF238u;
        goto label_1df238;
    }
    ctx->pc = 0x1DF230u;
    {
        const bool branch_taken_0x1df230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF230u;
        // 0x1df234: 0xae531b9c  sw          $s3, 0x1B9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7068), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df230) {
            ctx->pc = 0x1DF2ECu;
            goto label_1df2ec;
        }
    }
    ctx->pc = 0x1DF238u;
label_1df238:
    // 0x1df238: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1df23c:
    if (ctx->pc == 0x1DF23Cu) {
        ctx->pc = 0x1DF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF238u;
        // 0x1df23c: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF240u;
        goto label_1df240;
    }
    ctx->pc = 0x1DF238u;
    {
        const bool branch_taken_0x1df238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF238u;
        // 0x1df23c: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df238) {
            ctx->pc = 0x1DF2B4u;
            goto label_1df2b4;
        }
    }
    ctx->pc = 0x1DF240u;
label_1df240:
    // 0x1df240: 0xc067b9c  jal         func_19EE70
label_1df244:
    if (ctx->pc == 0x1DF244u) {
        ctx->pc = 0x1DF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF240u;
        // 0x1df244: 0x265020d0  addiu       $s0, $s2, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF248u;
        goto label_1df248;
    }
    ctx->pc = 0x1DF240u;
    SET_GPR_U32(ctx, 31, 0x1DF248u);
    ctx->pc = 0x1DF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF240u;
    // 0x1df244: 0x265020d0  addiu       $s0, $s2, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF240u, 0x1DF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF248u;
label_1df248:
    // 0x1df248: 0x26512430  addiu       $s1, $s2, 0x2430
    ctx->pc = 0x1df248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
label_1df24c:
    // 0x1df24c: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1df24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1df250:
    // 0x1df250: 0xc079f96  jal         func_1E7E58
label_1df254:
    if (ctx->pc == 0x1DF254u) {
        ctx->pc = 0x1DF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF250u;
        // 0x1df254: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF258u;
        goto label_1df258;
    }
    ctx->pc = 0x1DF250u;
    SET_GPR_U32(ctx, 31, 0x1DF258u);
    ctx->pc = 0x1DF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF250u;
    // 0x1df254: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DF250u, 0x1DF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF258u;
label_1df258:
    // 0x1df258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df25c:
    // 0x1df25c: 0xc069538  jal         func_1A54E0
label_1df260:
    if (ctx->pc == 0x1DF260u) {
        ctx->pc = 0x1DF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF25Cu;
        // 0x1df260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF264u;
        goto label_1df264;
    }
    ctx->pc = 0x1DF25Cu;
    SET_GPR_U32(ctx, 31, 0x1DF264u);
    ctx->pc = 0x1DF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF25Cu;
    // 0x1df260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DF25Cu, 0x1DF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF264u;
label_1df264:
    // 0x1df264: 0xc067b9c  jal         func_19EE70
label_1df268:
    if (ctx->pc == 0x1DF268u) {
        ctx->pc = 0x1DF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF264u;
        // 0x1df268: 0x2404010e  addiu       $a0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF26Cu;
        goto label_1df26c;
    }
    ctx->pc = 0x1DF264u;
    SET_GPR_U32(ctx, 31, 0x1DF26Cu);
    ctx->pc = 0x1DF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF264u;
    // 0x1df268: 0x2404010e  addiu       $a0, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF264u, 0x1DF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF26Cu;
label_1df26c:
    // 0x1df26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df270:
    // 0x1df270: 0xc069530  jal         func_1A54C0
label_1df274:
    if (ctx->pc == 0x1DF274u) {
        ctx->pc = 0x1DF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF270u;
        // 0x1df274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF278u;
        goto label_1df278;
    }
    ctx->pc = 0x1DF270u;
    SET_GPR_U32(ctx, 31, 0x1DF278u);
    ctx->pc = 0x1DF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF270u;
    // 0x1df274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DF270u, 0x1DF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF278u;
label_1df278:
    // 0x1df278: 0xc067b9c  jal         func_19EE70
label_1df27c:
    if (ctx->pc == 0x1DF27Cu) {
        ctx->pc = 0x1DF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF278u;
        // 0x1df27c: 0x2404010f  addiu       $a0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF280u;
        goto label_1df280;
    }
    ctx->pc = 0x1DF278u;
    SET_GPR_U32(ctx, 31, 0x1DF280u);
    ctx->pc = 0x1DF27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF278u;
    // 0x1df27c: 0x2404010f  addiu       $a0, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF278u, 0x1DF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF280u;
label_1df280:
    // 0x1df280: 0x8e442af4  lw          $a0, 0x2AF4($s2)
    ctx->pc = 0x1df280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1df284:
    // 0x1df284: 0xc079f96  jal         func_1E7E58
label_1df288:
    if (ctx->pc == 0x1DF288u) {
        ctx->pc = 0x1DF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF284u;
        // 0x1df288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF28Cu;
        goto label_1df28c;
    }
    ctx->pc = 0x1DF284u;
    SET_GPR_U32(ctx, 31, 0x1DF28Cu);
    ctx->pc = 0x1DF288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF284u;
    // 0x1df288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DF284u, 0x1DF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF28Cu;
label_1df28c:
    // 0x1df28c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df290:
    // 0x1df290: 0xc069538  jal         func_1A54E0
label_1df294:
    if (ctx->pc == 0x1DF294u) {
        ctx->pc = 0x1DF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF290u;
        // 0x1df294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF298u;
        goto label_1df298;
    }
    ctx->pc = 0x1DF290u;
    SET_GPR_U32(ctx, 31, 0x1DF298u);
    ctx->pc = 0x1DF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF290u;
    // 0x1df294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DF290u, 0x1DF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF298u;
label_1df298:
    // 0x1df298: 0xc067b9c  jal         func_19EE70
label_1df29c:
    if (ctx->pc == 0x1DF29Cu) {
        ctx->pc = 0x1DF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF298u;
        // 0x1df29c: 0x2404010d  addiu       $a0, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2A0u;
        goto label_1df2a0;
    }
    ctx->pc = 0x1DF298u;
    SET_GPR_U32(ctx, 31, 0x1DF2A0u);
    ctx->pc = 0x1DF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF298u;
    // 0x1df29c: 0x2404010d  addiu       $a0, $zero, 0x10D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF298u, 0x1DF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2A0u;
label_1df2a0:
    // 0x1df2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df2a4:
    // 0x1df2a4: 0xc069530  jal         func_1A54C0
label_1df2a8:
    if (ctx->pc == 0x1DF2A8u) {
        ctx->pc = 0x1DF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2A4u;
        // 0x1df2a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2ACu;
        goto label_1df2ac;
    }
    ctx->pc = 0x1DF2A4u;
    SET_GPR_U32(ctx, 31, 0x1DF2ACu);
    ctx->pc = 0x1DF2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2A4u;
    // 0x1df2a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DF2A4u, 0x1DF2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2ACu;
label_1df2ac:
    // 0x1df2ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1df2b0:
    if (ctx->pc == 0x1DF2B0u) {
        ctx->pc = 0x1DF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2ACu;
        // 0x1df2b0: 0xae531bb0  sw          $s3, 0x1BB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7088), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2B4u;
        goto label_1df2b4;
    }
    ctx->pc = 0x1DF2ACu;
    {
        const bool branch_taken_0x1df2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2ACu;
        // 0x1df2b0: 0xae531bb0  sw          $s3, 0x1BB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7088), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2ac) {
            ctx->pc = 0x1DF2ECu;
            goto label_1df2ec;
        }
    }
    ctx->pc = 0x1DF2B4u;
label_1df2b4:
    // 0x1df2b4: 0xae531ba0  sw          $s3, 0x1BA0($s2)
    ctx->pc = 0x1df2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 19));
label_1df2b8:
    // 0x1df2b8: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1df2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_1df2bc:
    // 0x1df2bc: 0xae401b8c  sw          $zero, 0x1B8C($s2)
    ctx->pc = 0x1df2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7052), GPR_U32(ctx, 0));
label_1df2c0:
    // 0x1df2c0: 0xc067b9c  jal         func_19EE70
label_1df2c4:
    if (ctx->pc == 0x1DF2C4u) {
        ctx->pc = 0x1DF2C8u;
        goto label_1df2c8;
    }
    ctx->pc = 0x1DF2C0u;
    SET_GPR_U32(ctx, 31, 0x1DF2C8u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF2C0u, 0x1DF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2C8u;
label_1df2c8:
    // 0x1df2c8: 0x26441c20  addiu       $a0, $s2, 0x1C20
    ctx->pc = 0x1df2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
label_1df2cc:
    // 0x1df2cc: 0xc06ec94  jal         func_1BB250
label_1df2d0:
    if (ctx->pc == 0x1DF2D0u) {
        ctx->pc = 0x1DF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2CCu;
        // 0x1df2d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2D4u;
        goto label_1df2d4;
    }
    ctx->pc = 0x1DF2CCu;
    SET_GPR_U32(ctx, 31, 0x1DF2D4u);
    ctx->pc = 0x1DF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2CCu;
    // 0x1df2d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DF2CCu, 0x1DF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2D4u;
label_1df2d4:
    // 0x1df2d4: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1df2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1df2d8:
    // 0x1df2d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1df2d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1df2dc:
    // 0x1df2dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1df2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df2e0:
    // 0x1df2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df2e4:
    // 0x1df2e4: 0xc075920  jal         func_1D6480
label_1df2e8:
    if (ctx->pc == 0x1DF2E8u) {
        ctx->pc = 0x1DF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2E4u;
        // 0x1df2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2ECu;
        goto label_1df2ec;
    }
    ctx->pc = 0x1DF2E4u;
    SET_GPR_U32(ctx, 31, 0x1DF2ECu);
    ctx->pc = 0x1DF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2E4u;
    // 0x1df2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DF2E4u, 0x1DF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2ECu;
label_1df2ec:
    // 0x1df2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df2f0:
    // 0x1df2f0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1df2f4:
    if (ctx->pc == 0x1DF2F4u) {
        ctx->pc = 0x1DF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2F0u;
        // 0x1df2f4: 0xae8204c0  sw          $v0, 0x4C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2F8u;
        goto label_1df2f8;
    }
    ctx->pc = 0x1DF2F0u;
    {
        const bool branch_taken_0x1df2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2F0u;
        // 0x1df2f4: 0xae8204c0  sw          $v0, 0x4C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2f0) {
            ctx->pc = 0x1DF380u;
            goto label_1df380;
        }
    }
    ctx->pc = 0x1DF2F8u;
label_1df2f8:
    // 0x1df2f8: 0xc067b9c  jal         func_19EE70
label_1df2fc:
    if (ctx->pc == 0x1DF2FCu) {
        ctx->pc = 0x1DF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2F8u;
        // 0x1df2fc: 0x24040103  addiu       $a0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF300u;
        goto label_1df300;
    }
    ctx->pc = 0x1DF2F8u;
    SET_GPR_U32(ctx, 31, 0x1DF300u);
    ctx->pc = 0x1DF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2F8u;
    // 0x1df2fc: 0x24040103  addiu       $a0, $zero, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF2F8u, 0x1DF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF300u;
label_1df300:
    // 0x1df300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df304:
    // 0x1df304: 0xc06ec94  jal         func_1BB250
label_1df308:
    if (ctx->pc == 0x1DF308u) {
        ctx->pc = 0x1DF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF304u;
        // 0x1df308: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF30Cu;
        goto label_1df30c;
    }
    ctx->pc = 0x1DF304u;
    SET_GPR_U32(ctx, 31, 0x1DF30Cu);
    ctx->pc = 0x1DF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF304u;
    // 0x1df308: 0x26441c20  addiu       $a0, $s2, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DF304u, 0x1DF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF30Cu;
label_1df30c:
    // 0x1df30c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1df30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1df310:
    // 0x1df310: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1df310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1df314:
    // 0x1df314: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1df314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df318:
    // 0x1df318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df31c:
    // 0x1df31c: 0xc075920  jal         func_1D6480
label_1df320:
    if (ctx->pc == 0x1DF320u) {
        ctx->pc = 0x1DF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF31Cu;
        // 0x1df320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF324u;
        goto label_1df324;
    }
    ctx->pc = 0x1DF31Cu;
    SET_GPR_U32(ctx, 31, 0x1DF324u);
    ctx->pc = 0x1DF320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF31Cu;
    // 0x1df320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DF31Cu, 0x1DF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF324u;
label_1df324:
    // 0x1df324: 0xae531ba0  sw          $s3, 0x1BA0($s2)
    ctx->pc = 0x1df324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 19));
label_1df328:
    // 0x1df328: 0x10000015  b           . + 4 + (0x15 << 2)
label_1df32c:
    if (ctx->pc == 0x1DF32Cu) {
        ctx->pc = 0x1DF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF328u;
        // 0x1df32c: 0xae531b78  sw          $s3, 0x1B78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7032), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF330u;
        goto label_1df330;
    }
    ctx->pc = 0x1DF328u;
    {
        const bool branch_taken_0x1df328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF328u;
        // 0x1df32c: 0xae531b78  sw          $s3, 0x1B78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7032), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df328) {
            ctx->pc = 0x1DF380u;
            goto label_1df380;
        }
    }
    ctx->pc = 0x1DF330u;
label_1df330:
    // 0x1df330: 0x8e421b7c  lw          $v0, 0x1B7C($s2)
    ctx->pc = 0x1df330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7036)));
label_1df334:
    // 0x1df334: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1df338:
    if (ctx->pc == 0x1DF338u) {
        ctx->pc = 0x1DF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF334u;
        // 0x1df338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF33Cu;
        goto label_1df33c;
    }
    ctx->pc = 0x1DF334u;
    {
        const bool branch_taken_0x1df334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF334u;
        // 0x1df338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df334) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DF33Cu;
label_1df33c:
    // 0x1df33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df340:
    // 0x1df340: 0xc077b40  jal         func_1DED00
label_1df344:
    if (ctx->pc == 0x1DF344u) {
        ctx->pc = 0x1DF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF340u;
        // 0x1df344: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF348u;
        goto label_1df348;
    }
    ctx->pc = 0x1DF340u;
    SET_GPR_U32(ctx, 31, 0x1DF348u);
    ctx->pc = 0x1DF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF340u;
    // 0x1df344: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DF340u, 0x1DF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF348u;
label_1df348:
    // 0x1df348: 0x8e431b88  lw          $v1, 0x1B88($s2)
    ctx->pc = 0x1df348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1df34c:
    // 0x1df34c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1df350:
    if (ctx->pc == 0x1DF350u) {
        ctx->pc = 0x1DF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF34Cu;
        // 0x1df350: 0xae421b84  sw          $v0, 0x1B84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF354u;
        goto label_1df354;
    }
    ctx->pc = 0x1DF34Cu;
    {
        const bool branch_taken_0x1df34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF34Cu;
        // 0x1df350: 0xae421b84  sw          $v0, 0x1B84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df34c) {
            ctx->pc = 0x1DF364u;
            goto label_1df364;
        }
    }
    ctx->pc = 0x1DF354u;
label_1df354:
    // 0x1df354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df358:
    // 0x1df358: 0xae403a74  sw          $zero, 0x3A74($s2)
    ctx->pc = 0x1df358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14964), GPR_U32(ctx, 0));
label_1df35c:
    // 0x1df35c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1df360:
    if (ctx->pc == 0x1DF360u) {
        ctx->pc = 0x1DF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF35Cu;
        // 0x1df360: 0xae421b80  sw          $v0, 0x1B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF364u;
        goto label_1df364;
    }
    ctx->pc = 0x1DF35Cu;
    {
        const bool branch_taken_0x1df35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF35Cu;
        // 0x1df360: 0xae421b80  sw          $v0, 0x1B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df35c) {
            ctx->pc = 0x1DF384u;
            goto label_1df384;
        }
    }
    ctx->pc = 0x1DF364u;
label_1df364:
    // 0x1df364: 0xae401b88  sw          $zero, 0x1B88($s2)
    ctx->pc = 0x1df364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7048), GPR_U32(ctx, 0));
label_1df368:
    // 0x1df368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df36c:
    // 0x1df36c: 0xc077922  jal         func_1DE488
label_1df370:
    if (ctx->pc == 0x1DF370u) {
        ctx->pc = 0x1DF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF36Cu;
        // 0x1df370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF374u;
        goto label_1df374;
    }
    ctx->pc = 0x1DF36Cu;
    SET_GPR_U32(ctx, 31, 0x1DF374u);
    ctx->pc = 0x1DF370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF36Cu;
    // 0x1df370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE488u, 0x1DF36Cu, 0x1DF374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF374u;
label_1df374:
    // 0x1df374: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1df374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1df378:
    // 0x1df378: 0xc079faa  jal         func_1E7EA8
label_1df37c:
    if (ctx->pc == 0x1DF37Cu) {
        ctx->pc = 0x1DF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF378u;
        // 0x1df37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF380u;
        goto label_1df380;
    }
    ctx->pc = 0x1DF378u;
    SET_GPR_U32(ctx, 31, 0x1DF380u);
    ctx->pc = 0x1DF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF378u;
    // 0x1df37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF378u, 0x1DF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF380u;
label_1df380:
    // 0x1df380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df384:
    // 0x1df384: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1df384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1df388:
    // 0x1df388: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1df388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1df38c:
    // 0x1df38c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1df38cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1df390:
    // 0x1df390: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1df390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1df394:
    // 0x1df394: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1df394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df398:
    // 0x1df398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df39c:
    // 0x1df39c: 0x3e00008  jr          $ra
label_1df3a0:
    if (ctx->pc == 0x1DF3A0u) {
        ctx->pc = 0x1DF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF39Cu;
        // 0x1df3a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF3A4u;
        goto label_1df3a4;
    }
    ctx->pc = 0x1DF39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF39Cu;
        // 0x1df3a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF3A4u;
label_1df3a4:
    // 0x1df3a4: 0x0  nop
    ctx->pc = 0x1df3a4u;
    // NOP
    ctx->pc = 0x1df3a8u;
}
