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

// Function: sub_00267E48
// Address: 0x267e48 - 0x268430
void sub_00267E48_0x267e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267E48_0x267e48");
#endif

    switch (ctx->pc) {
        case 0x267e48u: goto label_267e48;
        case 0x267e4cu: goto label_267e4c;
        case 0x267e50u: goto label_267e50;
        case 0x267e54u: goto label_267e54;
        case 0x267e58u: goto label_267e58;
        case 0x267e5cu: goto label_267e5c;
        case 0x267e60u: goto label_267e60;
        case 0x267e64u: goto label_267e64;
        case 0x267e68u: goto label_267e68;
        case 0x267e6cu: goto label_267e6c;
        case 0x267e70u: goto label_267e70;
        case 0x267e74u: goto label_267e74;
        case 0x267e78u: goto label_267e78;
        case 0x267e7cu: goto label_267e7c;
        case 0x267e80u: goto label_267e80;
        case 0x267e84u: goto label_267e84;
        case 0x267e88u: goto label_267e88;
        case 0x267e8cu: goto label_267e8c;
        case 0x267e90u: goto label_267e90;
        case 0x267e94u: goto label_267e94;
        case 0x267e98u: goto label_267e98;
        case 0x267e9cu: goto label_267e9c;
        case 0x267ea0u: goto label_267ea0;
        case 0x267ea4u: goto label_267ea4;
        case 0x267ea8u: goto label_267ea8;
        case 0x267eacu: goto label_267eac;
        case 0x267eb0u: goto label_267eb0;
        case 0x267eb4u: goto label_267eb4;
        case 0x267eb8u: goto label_267eb8;
        case 0x267ebcu: goto label_267ebc;
        case 0x267ec0u: goto label_267ec0;
        case 0x267ec4u: goto label_267ec4;
        case 0x267ec8u: goto label_267ec8;
        case 0x267eccu: goto label_267ecc;
        case 0x267ed0u: goto label_267ed0;
        case 0x267ed4u: goto label_267ed4;
        case 0x267ed8u: goto label_267ed8;
        case 0x267edcu: goto label_267edc;
        case 0x267ee0u: goto label_267ee0;
        case 0x267ee4u: goto label_267ee4;
        case 0x267ee8u: goto label_267ee8;
        case 0x267eecu: goto label_267eec;
        case 0x267ef0u: goto label_267ef0;
        case 0x267ef4u: goto label_267ef4;
        case 0x267ef8u: goto label_267ef8;
        case 0x267efcu: goto label_267efc;
        case 0x267f00u: goto label_267f00;
        case 0x267f04u: goto label_267f04;
        case 0x267f08u: goto label_267f08;
        case 0x267f0cu: goto label_267f0c;
        case 0x267f10u: goto label_267f10;
        case 0x267f14u: goto label_267f14;
        case 0x267f18u: goto label_267f18;
        case 0x267f1cu: goto label_267f1c;
        case 0x267f20u: goto label_267f20;
        case 0x267f24u: goto label_267f24;
        case 0x267f28u: goto label_267f28;
        case 0x267f2cu: goto label_267f2c;
        case 0x267f30u: goto label_267f30;
        case 0x267f34u: goto label_267f34;
        case 0x267f38u: goto label_267f38;
        case 0x267f3cu: goto label_267f3c;
        case 0x267f40u: goto label_267f40;
        case 0x267f44u: goto label_267f44;
        case 0x267f48u: goto label_267f48;
        case 0x267f4cu: goto label_267f4c;
        case 0x267f50u: goto label_267f50;
        case 0x267f54u: goto label_267f54;
        case 0x267f58u: goto label_267f58;
        case 0x267f5cu: goto label_267f5c;
        case 0x267f60u: goto label_267f60;
        case 0x267f64u: goto label_267f64;
        case 0x267f68u: goto label_267f68;
        case 0x267f6cu: goto label_267f6c;
        case 0x267f70u: goto label_267f70;
        case 0x267f74u: goto label_267f74;
        case 0x267f78u: goto label_267f78;
        case 0x267f7cu: goto label_267f7c;
        case 0x267f80u: goto label_267f80;
        case 0x267f84u: goto label_267f84;
        case 0x267f88u: goto label_267f88;
        case 0x267f8cu: goto label_267f8c;
        case 0x267f90u: goto label_267f90;
        case 0x267f94u: goto label_267f94;
        case 0x267f98u: goto label_267f98;
        case 0x267f9cu: goto label_267f9c;
        case 0x267fa0u: goto label_267fa0;
        case 0x267fa4u: goto label_267fa4;
        case 0x267fa8u: goto label_267fa8;
        case 0x267facu: goto label_267fac;
        case 0x267fb0u: goto label_267fb0;
        case 0x267fb4u: goto label_267fb4;
        case 0x267fb8u: goto label_267fb8;
        case 0x267fbcu: goto label_267fbc;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fc4u: goto label_267fc4;
        case 0x267fc8u: goto label_267fc8;
        case 0x267fccu: goto label_267fcc;
        case 0x267fd0u: goto label_267fd0;
        case 0x267fd4u: goto label_267fd4;
        case 0x267fd8u: goto label_267fd8;
        case 0x267fdcu: goto label_267fdc;
        case 0x267fe0u: goto label_267fe0;
        case 0x267fe4u: goto label_267fe4;
        case 0x267fe8u: goto label_267fe8;
        case 0x267fecu: goto label_267fec;
        case 0x267ff0u: goto label_267ff0;
        case 0x267ff4u: goto label_267ff4;
        case 0x267ff8u: goto label_267ff8;
        case 0x267ffcu: goto label_267ffc;
        case 0x268000u: goto label_268000;
        case 0x268004u: goto label_268004;
        case 0x268008u: goto label_268008;
        case 0x26800cu: goto label_26800c;
        case 0x268010u: goto label_268010;
        case 0x268014u: goto label_268014;
        case 0x268018u: goto label_268018;
        case 0x26801cu: goto label_26801c;
        case 0x268020u: goto label_268020;
        case 0x268024u: goto label_268024;
        case 0x268028u: goto label_268028;
        case 0x26802cu: goto label_26802c;
        case 0x268030u: goto label_268030;
        case 0x268034u: goto label_268034;
        case 0x268038u: goto label_268038;
        case 0x26803cu: goto label_26803c;
        case 0x268040u: goto label_268040;
        case 0x268044u: goto label_268044;
        case 0x268048u: goto label_268048;
        case 0x26804cu: goto label_26804c;
        case 0x268050u: goto label_268050;
        case 0x268054u: goto label_268054;
        case 0x268058u: goto label_268058;
        case 0x26805cu: goto label_26805c;
        case 0x268060u: goto label_268060;
        case 0x268064u: goto label_268064;
        case 0x268068u: goto label_268068;
        case 0x26806cu: goto label_26806c;
        case 0x268070u: goto label_268070;
        case 0x268074u: goto label_268074;
        case 0x268078u: goto label_268078;
        case 0x26807cu: goto label_26807c;
        case 0x268080u: goto label_268080;
        case 0x268084u: goto label_268084;
        case 0x268088u: goto label_268088;
        case 0x26808cu: goto label_26808c;
        case 0x268090u: goto label_268090;
        case 0x268094u: goto label_268094;
        case 0x268098u: goto label_268098;
        case 0x26809cu: goto label_26809c;
        case 0x2680a0u: goto label_2680a0;
        case 0x2680a4u: goto label_2680a4;
        case 0x2680a8u: goto label_2680a8;
        case 0x2680acu: goto label_2680ac;
        case 0x2680b0u: goto label_2680b0;
        case 0x2680b4u: goto label_2680b4;
        case 0x2680b8u: goto label_2680b8;
        case 0x2680bcu: goto label_2680bc;
        case 0x2680c0u: goto label_2680c0;
        case 0x2680c4u: goto label_2680c4;
        case 0x2680c8u: goto label_2680c8;
        case 0x2680ccu: goto label_2680cc;
        case 0x2680d0u: goto label_2680d0;
        case 0x2680d4u: goto label_2680d4;
        case 0x2680d8u: goto label_2680d8;
        case 0x2680dcu: goto label_2680dc;
        case 0x2680e0u: goto label_2680e0;
        case 0x2680e4u: goto label_2680e4;
        case 0x2680e8u: goto label_2680e8;
        case 0x2680ecu: goto label_2680ec;
        case 0x2680f0u: goto label_2680f0;
        case 0x2680f4u: goto label_2680f4;
        case 0x2680f8u: goto label_2680f8;
        case 0x2680fcu: goto label_2680fc;
        case 0x268100u: goto label_268100;
        case 0x268104u: goto label_268104;
        case 0x268108u: goto label_268108;
        case 0x26810cu: goto label_26810c;
        case 0x268110u: goto label_268110;
        case 0x268114u: goto label_268114;
        case 0x268118u: goto label_268118;
        case 0x26811cu: goto label_26811c;
        case 0x268120u: goto label_268120;
        case 0x268124u: goto label_268124;
        case 0x268128u: goto label_268128;
        case 0x26812cu: goto label_26812c;
        case 0x268130u: goto label_268130;
        case 0x268134u: goto label_268134;
        case 0x268138u: goto label_268138;
        case 0x26813cu: goto label_26813c;
        case 0x268140u: goto label_268140;
        case 0x268144u: goto label_268144;
        case 0x268148u: goto label_268148;
        case 0x26814cu: goto label_26814c;
        case 0x268150u: goto label_268150;
        case 0x268154u: goto label_268154;
        case 0x268158u: goto label_268158;
        case 0x26815cu: goto label_26815c;
        case 0x268160u: goto label_268160;
        case 0x268164u: goto label_268164;
        case 0x268168u: goto label_268168;
        case 0x26816cu: goto label_26816c;
        case 0x268170u: goto label_268170;
        case 0x268174u: goto label_268174;
        case 0x268178u: goto label_268178;
        case 0x26817cu: goto label_26817c;
        case 0x268180u: goto label_268180;
        case 0x268184u: goto label_268184;
        case 0x268188u: goto label_268188;
        case 0x26818cu: goto label_26818c;
        case 0x268190u: goto label_268190;
        case 0x268194u: goto label_268194;
        case 0x268198u: goto label_268198;
        case 0x26819cu: goto label_26819c;
        case 0x2681a0u: goto label_2681a0;
        case 0x2681a4u: goto label_2681a4;
        case 0x2681a8u: goto label_2681a8;
        case 0x2681acu: goto label_2681ac;
        case 0x2681b0u: goto label_2681b0;
        case 0x2681b4u: goto label_2681b4;
        case 0x2681b8u: goto label_2681b8;
        case 0x2681bcu: goto label_2681bc;
        case 0x2681c0u: goto label_2681c0;
        case 0x2681c4u: goto label_2681c4;
        case 0x2681c8u: goto label_2681c8;
        case 0x2681ccu: goto label_2681cc;
        case 0x2681d0u: goto label_2681d0;
        case 0x2681d4u: goto label_2681d4;
        case 0x2681d8u: goto label_2681d8;
        case 0x2681dcu: goto label_2681dc;
        case 0x2681e0u: goto label_2681e0;
        case 0x2681e4u: goto label_2681e4;
        case 0x2681e8u: goto label_2681e8;
        case 0x2681ecu: goto label_2681ec;
        case 0x2681f0u: goto label_2681f0;
        case 0x2681f4u: goto label_2681f4;
        case 0x2681f8u: goto label_2681f8;
        case 0x2681fcu: goto label_2681fc;
        case 0x268200u: goto label_268200;
        case 0x268204u: goto label_268204;
        case 0x268208u: goto label_268208;
        case 0x26820cu: goto label_26820c;
        case 0x268210u: goto label_268210;
        case 0x268214u: goto label_268214;
        case 0x268218u: goto label_268218;
        case 0x26821cu: goto label_26821c;
        case 0x268220u: goto label_268220;
        case 0x268224u: goto label_268224;
        case 0x268228u: goto label_268228;
        case 0x26822cu: goto label_26822c;
        case 0x268230u: goto label_268230;
        case 0x268234u: goto label_268234;
        case 0x268238u: goto label_268238;
        case 0x26823cu: goto label_26823c;
        case 0x268240u: goto label_268240;
        case 0x268244u: goto label_268244;
        case 0x268248u: goto label_268248;
        case 0x26824cu: goto label_26824c;
        case 0x268250u: goto label_268250;
        case 0x268254u: goto label_268254;
        case 0x268258u: goto label_268258;
        case 0x26825cu: goto label_26825c;
        case 0x268260u: goto label_268260;
        case 0x268264u: goto label_268264;
        case 0x268268u: goto label_268268;
        case 0x26826cu: goto label_26826c;
        case 0x268270u: goto label_268270;
        case 0x268274u: goto label_268274;
        case 0x268278u: goto label_268278;
        case 0x26827cu: goto label_26827c;
        case 0x268280u: goto label_268280;
        case 0x268284u: goto label_268284;
        case 0x268288u: goto label_268288;
        case 0x26828cu: goto label_26828c;
        case 0x268290u: goto label_268290;
        case 0x268294u: goto label_268294;
        case 0x268298u: goto label_268298;
        case 0x26829cu: goto label_26829c;
        case 0x2682a0u: goto label_2682a0;
        case 0x2682a4u: goto label_2682a4;
        case 0x2682a8u: goto label_2682a8;
        case 0x2682acu: goto label_2682ac;
        case 0x2682b0u: goto label_2682b0;
        case 0x2682b4u: goto label_2682b4;
        case 0x2682b8u: goto label_2682b8;
        case 0x2682bcu: goto label_2682bc;
        case 0x2682c0u: goto label_2682c0;
        case 0x2682c4u: goto label_2682c4;
        case 0x2682c8u: goto label_2682c8;
        case 0x2682ccu: goto label_2682cc;
        case 0x2682d0u: goto label_2682d0;
        case 0x2682d4u: goto label_2682d4;
        case 0x2682d8u: goto label_2682d8;
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e0u: goto label_2682e0;
        case 0x2682e4u: goto label_2682e4;
        case 0x2682e8u: goto label_2682e8;
        case 0x2682ecu: goto label_2682ec;
        case 0x2682f0u: goto label_2682f0;
        case 0x2682f4u: goto label_2682f4;
        case 0x2682f8u: goto label_2682f8;
        case 0x2682fcu: goto label_2682fc;
        case 0x268300u: goto label_268300;
        case 0x268304u: goto label_268304;
        case 0x268308u: goto label_268308;
        case 0x26830cu: goto label_26830c;
        case 0x268310u: goto label_268310;
        case 0x268314u: goto label_268314;
        case 0x268318u: goto label_268318;
        case 0x26831cu: goto label_26831c;
        case 0x268320u: goto label_268320;
        case 0x268324u: goto label_268324;
        case 0x268328u: goto label_268328;
        case 0x26832cu: goto label_26832c;
        case 0x268330u: goto label_268330;
        case 0x268334u: goto label_268334;
        case 0x268338u: goto label_268338;
        case 0x26833cu: goto label_26833c;
        case 0x268340u: goto label_268340;
        case 0x268344u: goto label_268344;
        case 0x268348u: goto label_268348;
        case 0x26834cu: goto label_26834c;
        case 0x268350u: goto label_268350;
        case 0x268354u: goto label_268354;
        case 0x268358u: goto label_268358;
        case 0x26835cu: goto label_26835c;
        case 0x268360u: goto label_268360;
        case 0x268364u: goto label_268364;
        case 0x268368u: goto label_268368;
        case 0x26836cu: goto label_26836c;
        case 0x268370u: goto label_268370;
        case 0x268374u: goto label_268374;
        case 0x268378u: goto label_268378;
        case 0x26837cu: goto label_26837c;
        case 0x268380u: goto label_268380;
        case 0x268384u: goto label_268384;
        case 0x268388u: goto label_268388;
        case 0x26838cu: goto label_26838c;
        case 0x268390u: goto label_268390;
        case 0x268394u: goto label_268394;
        case 0x268398u: goto label_268398;
        case 0x26839cu: goto label_26839c;
        case 0x2683a0u: goto label_2683a0;
        case 0x2683a4u: goto label_2683a4;
        case 0x2683a8u: goto label_2683a8;
        case 0x2683acu: goto label_2683ac;
        case 0x2683b0u: goto label_2683b0;
        case 0x2683b4u: goto label_2683b4;
        case 0x2683b8u: goto label_2683b8;
        case 0x2683bcu: goto label_2683bc;
        case 0x2683c0u: goto label_2683c0;
        case 0x2683c4u: goto label_2683c4;
        case 0x2683c8u: goto label_2683c8;
        case 0x2683ccu: goto label_2683cc;
        case 0x2683d0u: goto label_2683d0;
        case 0x2683d4u: goto label_2683d4;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683dcu: goto label_2683dc;
        case 0x2683e0u: goto label_2683e0;
        case 0x2683e4u: goto label_2683e4;
        case 0x2683e8u: goto label_2683e8;
        case 0x2683ecu: goto label_2683ec;
        case 0x2683f0u: goto label_2683f0;
        case 0x2683f4u: goto label_2683f4;
        case 0x2683f8u: goto label_2683f8;
        case 0x2683fcu: goto label_2683fc;
        case 0x268400u: goto label_268400;
        case 0x268404u: goto label_268404;
        case 0x268408u: goto label_268408;
        case 0x26840cu: goto label_26840c;
        case 0x268410u: goto label_268410;
        case 0x268414u: goto label_268414;
        case 0x268418u: goto label_268418;
        case 0x26841cu: goto label_26841c;
        case 0x268420u: goto label_268420;
        case 0x268424u: goto label_268424;
        case 0x268428u: goto label_268428;
        case 0x26842cu: goto label_26842c;
        default: break;
    }

    ctx->pc = 0x267e48u;

label_267e48:
    // 0x267e48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x267e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_267e4c:
    // 0x267e4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x267e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_267e50:
    // 0x267e50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x267e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_267e54:
    // 0x267e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_267e58:
    // 0x267e58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x267e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_267e5c:
    // 0x267e5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x267e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_267e60:
    // 0x267e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_267e64:
    // 0x267e64: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x267e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_267e68:
    // 0x267e68: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x267e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_267e6c:
    // 0x267e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_267e70:
    // 0x267e70: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x267e70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_267e74:
    // 0x267e74: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_267e78:
    if (ctx->pc == 0x267E78u) {
        ctx->pc = 0x267E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E74u;
        // 0x267e78: 0x8e3500d4  lw          $s5, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E7Cu;
        goto label_267e7c;
    }
    ctx->pc = 0x267E74u;
    {
        const bool branch_taken_0x267e74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E74u;
        // 0x267e78: 0x8e3500d4  lw          $s5, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e74) {
            ctx->pc = 0x267E84u;
            goto label_267e84;
        }
    }
    ctx->pc = 0x267E7Cu;
label_267e7c:
    // 0x267e7c: 0xc099cb4  jal         func_2672D0
label_267e80:
    if (ctx->pc == 0x267E80u) {
        ctx->pc = 0x267E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E7Cu;
        // 0x267e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E84u;
        goto label_267e84;
    }
    ctx->pc = 0x267E7Cu;
    SET_GPR_U32(ctx, 31, 0x267E84u);
    ctx->pc = 0x267E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E7Cu;
    // 0x267e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x267E7Cu, 0x267E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E84u;
label_267e84:
    // 0x267e84: 0xc0899e8  jal         func_2267A0
label_267e88:
    if (ctx->pc == 0x267E88u) {
        ctx->pc = 0x267E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E84u;
        // 0x267e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E8Cu;
        goto label_267e8c;
    }
    ctx->pc = 0x267E84u;
    SET_GPR_U32(ctx, 31, 0x267E8Cu);
    ctx->pc = 0x267E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E84u;
    // 0x267e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x267E84u, 0x267E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E8Cu;
label_267e8c:
    // 0x267e8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_267e90:
    if (ctx->pc == 0x267E90u) {
        ctx->pc = 0x267E94u;
        goto label_267e94;
    }
    ctx->pc = 0x267E8Cu;
    {
        const bool branch_taken_0x267e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267e8c) {
            ctx->pc = 0x267EA4u;
            goto label_267ea4;
        }
    }
    ctx->pc = 0x267E94u;
label_267e94:
    // 0x267e94: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_267e98:
    if (ctx->pc == 0x267E98u) {
        ctx->pc = 0x267E9Cu;
        goto label_267e9c;
    }
    ctx->pc = 0x267E94u;
    {
        const bool branch_taken_0x267e94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x267e94) {
            ctx->pc = 0x267EBCu;
            goto label_267ebc;
        }
    }
    ctx->pc = 0x267E9Cu;
label_267e9c:
    // 0x267e9c: 0x1000000d  b           . + 4 + (0xD << 2)
label_267ea0:
    if (ctx->pc == 0x267EA0u) {
        ctx->pc = 0x267EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E9Cu;
        // 0x267ea0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EA4u;
        goto label_267ea4;
    }
    ctx->pc = 0x267E9Cu;
    {
        const bool branch_taken_0x267e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E9Cu;
        // 0x267ea0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e9c) {
            ctx->pc = 0x267ED4u;
            goto label_267ed4;
        }
    }
    ctx->pc = 0x267EA4u;
label_267ea4:
    // 0x267ea4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_267ea8:
    if (ctx->pc == 0x267EA8u) {
        ctx->pc = 0x267EACu;
        goto label_267eac;
    }
    ctx->pc = 0x267EA4u;
    {
        const bool branch_taken_0x267ea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x267ea4) {
            ctx->pc = 0x267EBCu;
            goto label_267ebc;
        }
    }
    ctx->pc = 0x267EACu;
label_267eac:
    // 0x267eac: 0xc0899e8  jal         func_2267A0
label_267eb0:
    if (ctx->pc == 0x267EB0u) {
        ctx->pc = 0x267EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EACu;
        // 0x267eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EB4u;
        goto label_267eb4;
    }
    ctx->pc = 0x267EACu;
    SET_GPR_U32(ctx, 31, 0x267EB4u);
    ctx->pc = 0x267EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EACu;
    // 0x267eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x267EACu, 0x267EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EB4u;
label_267eb4:
    // 0x267eb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_267eb8:
    if (ctx->pc == 0x267EB8u) {
        ctx->pc = 0x267EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EB4u;
        // 0x267eb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EBCu;
        goto label_267ebc;
    }
    ctx->pc = 0x267EB4u;
    {
        const bool branch_taken_0x267eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EB4u;
        // 0x267eb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267eb4) {
            ctx->pc = 0x267ED4u;
            goto label_267ed4;
        }
    }
    ctx->pc = 0x267EBCu;
label_267ebc:
    // 0x267ebc: 0xc0899e8  jal         func_2267A0
label_267ec0:
    if (ctx->pc == 0x267EC0u) {
        ctx->pc = 0x267EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EBCu;
        // 0x267ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EC4u;
        goto label_267ec4;
    }
    ctx->pc = 0x267EBCu;
    SET_GPR_U32(ctx, 31, 0x267EC4u);
    ctx->pc = 0x267EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EBCu;
    // 0x267ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x267EBCu, 0x267EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EC4u;
label_267ec4:
    // 0x267ec4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_267ec8:
    if (ctx->pc == 0x267EC8u) {
        ctx->pc = 0x267EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EC4u;
        // 0x267ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267ECCu;
        goto label_267ecc;
    }
    ctx->pc = 0x267EC4u;
    {
        const bool branch_taken_0x267ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EC4u;
        // 0x267ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ec4) {
            ctx->pc = 0x267ED4u;
            goto label_267ed4;
        }
    }
    ctx->pc = 0x267ECCu;
label_267ecc:
    // 0x267ecc: 0xc0899d8  jal         func_226760
label_267ed0:
    if (ctx->pc == 0x267ED0u) {
        ctx->pc = 0x267ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ECCu;
        // 0x267ed0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267ED4u;
        goto label_267ed4;
    }
    ctx->pc = 0x267ECCu;
    SET_GPR_U32(ctx, 31, 0x267ED4u);
    ctx->pc = 0x267ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267ECCu;
    // 0x267ed0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x267ECCu, 0x267ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267ED4u;
label_267ed4:
    // 0x267ed4: 0xc0874fa  jal         func_21D3E8
label_267ed8:
    if (ctx->pc == 0x267ED8u) {
        ctx->pc = 0x267ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ED4u;
        // 0x267ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EDCu;
        goto label_267edc;
    }
    ctx->pc = 0x267ED4u;
    SET_GPR_U32(ctx, 31, 0x267EDCu);
    ctx->pc = 0x267ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267ED4u;
    // 0x267ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x267ED4u, 0x267EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EDCu;
label_267edc:
    // 0x267edc: 0xc051800  jal         func_146000
label_267ee0:
    if (ctx->pc == 0x267EE0u) {
        ctx->pc = 0x267EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EDCu;
        // 0x267ee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EE4u;
        goto label_267ee4;
    }
    ctx->pc = 0x267EDCu;
    SET_GPR_U32(ctx, 31, 0x267EE4u);
    ctx->pc = 0x267EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EDCu;
    // 0x267ee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x267EDCu, 0x267EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EE4u;
label_267ee4:
    // 0x267ee4: 0xc093390  jal         func_24CE40
label_267ee8:
    if (ctx->pc == 0x267EE8u) {
        ctx->pc = 0x267EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EE4u;
        // 0x267ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EECu;
        goto label_267eec;
    }
    ctx->pc = 0x267EE4u;
    SET_GPR_U32(ctx, 31, 0x267EECu);
    ctx->pc = 0x267EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EE4u;
    // 0x267ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x267EE4u, 0x267EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EECu;
label_267eec:
    // 0x267eec: 0xc095f5c  jal         func_257D70
label_267ef0:
    if (ctx->pc == 0x267EF0u) {
        ctx->pc = 0x267EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EECu;
        // 0x267ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EF4u;
        goto label_267ef4;
    }
    ctx->pc = 0x267EECu;
    SET_GPR_U32(ctx, 31, 0x267EF4u);
    ctx->pc = 0x267EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EECu;
    // 0x267ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257D70u, 0x267EECu, 0x267EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EF4u;
label_267ef4:
    // 0x267ef4: 0xc08a196  jal         func_228658
label_267ef8:
    if (ctx->pc == 0x267EF8u) {
        ctx->pc = 0x267EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EF4u;
        // 0x267ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EFCu;
        goto label_267efc;
    }
    ctx->pc = 0x267EF4u;
    SET_GPR_U32(ctx, 31, 0x267EFCu);
    ctx->pc = 0x267EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EF4u;
    // 0x267ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228658u, 0x267EF4u, 0x267EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EFCu;
label_267efc:
    // 0x267efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267f00:
    // 0x267f00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x267f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_267f04:
    // 0x267f04: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x267f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_267f08:
    // 0x267f08: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x267f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_267f0c:
    // 0x267f0c: 0xc0e44cc  jal         func_391330
label_267f10:
    if (ctx->pc == 0x267F10u) {
        ctx->pc = 0x267F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F0Cu;
        // 0x267f10: 0x8c450124  lw          $a1, 0x124($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F14u;
        goto label_267f14;
    }
    ctx->pc = 0x267F0Cu;
    SET_GPR_U32(ctx, 31, 0x267F14u);
    ctx->pc = 0x267F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F0Cu;
    // 0x267f10: 0x8c450124  lw          $a1, 0x124($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x267F0Cu, 0x267F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F14u;
label_267f14:
    // 0x267f14: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x267f14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_267f18:
    // 0x267f18: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x267f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_267f1c:
    // 0x267f1c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_267f20:
    if (ctx->pc == 0x267F20u) {
        ctx->pc = 0x267F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F1Cu;
        // 0x267f20: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F24u;
        goto label_267f24;
    }
    ctx->pc = 0x267F1Cu;
    {
        const bool branch_taken_0x267f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F1Cu;
        // 0x267f20: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f1c) {
            ctx->pc = 0x267F44u;
            goto label_267f44;
        }
    }
    ctx->pc = 0x267F24u;
label_267f24:
    // 0x267f24: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_267f28:
    if (ctx->pc == 0x267F28u) {
        ctx->pc = 0x267F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F24u;
        // 0x267f28: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F2Cu;
        goto label_267f2c;
    }
    ctx->pc = 0x267F24u;
    {
        const bool branch_taken_0x267f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F24u;
        // 0x267f28: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f24) {
            ctx->pc = 0x267F44u;
            goto label_267f44;
        }
    }
    ctx->pc = 0x267F2Cu;
label_267f2c:
    // 0x267f2c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_267f30:
    if (ctx->pc == 0x267F30u) {
        ctx->pc = 0x267F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F2Cu;
        // 0x267f30: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F34u;
        goto label_267f34;
    }
    ctx->pc = 0x267F2Cu;
    {
        const bool branch_taken_0x267f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267f2c) {
            ctx->pc = 0x267F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267F2Cu;
            // 0x267f30: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267F48u;
            goto label_267f48;
        }
    }
    ctx->pc = 0x267F34u;
label_267f34:
    // 0x267f34: 0xc0e2612  jal         func_389848
label_267f38:
    if (ctx->pc == 0x267F38u) {
        ctx->pc = 0x267F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F34u;
        // 0x267f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F3Cu;
        goto label_267f3c;
    }
    ctx->pc = 0x267F34u;
    SET_GPR_U32(ctx, 31, 0x267F3Cu);
    ctx->pc = 0x267F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F34u;
    // 0x267f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x267F34u, 0x267F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F3Cu;
label_267f3c:
    // 0x267f3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_267f40:
    if (ctx->pc == 0x267F40u) {
        ctx->pc = 0x267F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F3Cu;
        // 0x267f40: 0xa6a00118  sh          $zero, 0x118($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F44u;
        goto label_267f44;
    }
    ctx->pc = 0x267F3Cu;
    {
        const bool branch_taken_0x267f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f3c) {
            ctx->pc = 0x267F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267F3Cu;
            // 0x267f40: 0xa6a00118  sh          $zero, 0x118($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267F58u;
            goto label_267f58;
        }
    }
    ctx->pc = 0x267F44u;
label_267f44:
    // 0x267f44: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x267f44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_267f48:
    // 0x267f48: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x267f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_267f4c:
    // 0x267f4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x267f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_267f50:
    // 0x267f50: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x267f50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_267f54:
    // 0x267f54: 0xa6a00118  sh          $zero, 0x118($s5)
    ctx->pc = 0x267f54u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 0));
label_267f58:
    // 0x267f58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x267f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_267f5c:
    // 0x267f5c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x267f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_267f60:
    // 0x267f60: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x267f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_267f64:
    // 0x267f64: 0x40f809  jalr        $v0
label_267f68:
    if (ctx->pc == 0x267F68u) {
        ctx->pc = 0x267F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F64u;
        // 0x267f68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F6Cu;
        goto label_267f6c;
    }
    ctx->pc = 0x267F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267F6Cu);
        ctx->pc = 0x267F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F64u;
        // 0x267f68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267F64u, 0x267F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267F6Cu;
label_267f6c:
    // 0x267f6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_267f70:
    if (ctx->pc == 0x267F70u) {
        ctx->pc = 0x267F74u;
        goto label_267f74;
    }
    ctx->pc = 0x267F6Cu;
    {
        const bool branch_taken_0x267f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f6c) {
            ctx->pc = 0x267F98u;
            goto label_267f98;
        }
    }
    ctx->pc = 0x267F74u;
label_267f74:
    // 0x267f74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x267f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_267f78:
    // 0x267f78: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_267f7c:
    // 0x267f7c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x267f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_267f80:
    // 0x267f80: 0x40f809  jalr        $v0
label_267f84:
    if (ctx->pc == 0x267F84u) {
        ctx->pc = 0x267F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F80u;
        // 0x267f84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F88u;
        goto label_267f88;
    }
    ctx->pc = 0x267F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267F88u);
        ctx->pc = 0x267F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F80u;
        // 0x267f84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267F80u, 0x267F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267F88u;
label_267f88:
    // 0x267f88: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_267f8c:
    // 0x267f8c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x267f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_267f90:
    // 0x267f90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x267f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_267f94:
    // 0x267f94: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x267f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_267f98:
    // 0x267f98: 0x1260011b  beqz        $s3, . + 4 + (0x11B << 2)
label_267f9c:
    if (ctx->pc == 0x267F9Cu) {
        ctx->pc = 0x267F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F98u;
        // 0x267f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FA0u;
        goto label_267fa0;
    }
    ctx->pc = 0x267F98u;
    {
        const bool branch_taken_0x267f98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F98u;
        // 0x267f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f98) {
            ctx->pc = 0x268408u;
            goto label_268408;
        }
    }
    ctx->pc = 0x267FA0u;
label_267fa0:
    // 0x267fa0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x267fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_267fa4:
    // 0x267fa4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_267fa8:
    // 0x267fa8: 0xc089974  jal         func_2265D0
label_267fac:
    if (ctx->pc == 0x267FACu) {
        ctx->pc = 0x267FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FA8u;
        // 0x267fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FB0u;
        goto label_267fb0;
    }
    ctx->pc = 0x267FA8u;
    SET_GPR_U32(ctx, 31, 0x267FB0u);
    ctx->pc = 0x267FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FA8u;
    // 0x267fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x267FA8u, 0x267FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FB0u;
label_267fb0:
    // 0x267fb0: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x267fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_267fb4:
    // 0x267fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267fb8:
    // 0x267fb8: 0xc089998  jal         func_226660
label_267fbc:
    if (ctx->pc == 0x267FBCu) {
        ctx->pc = 0x267FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FB8u;
        // 0x267fbc: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FC0u;
        goto label_267fc0;
    }
    ctx->pc = 0x267FB8u;
    SET_GPR_U32(ctx, 31, 0x267FC0u);
    ctx->pc = 0x267FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FB8u;
    // 0x267fbc: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x267FB8u, 0x267FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FC0u;
label_267fc0:
    // 0x267fc0: 0x14400111  bnez        $v0, . + 4 + (0x111 << 2)
label_267fc4:
    if (ctx->pc == 0x267FC4u) {
        ctx->pc = 0x267FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FC0u;
        // 0x267fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FC8u;
        goto label_267fc8;
    }
    ctx->pc = 0x267FC0u;
    {
        const bool branch_taken_0x267fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FC0u;
        // 0x267fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fc0) {
            ctx->pc = 0x268408u;
            goto label_268408;
        }
    }
    ctx->pc = 0x267FC8u;
label_267fc8:
    // 0x267fc8: 0xc089f66  jal         func_227D98
label_267fcc:
    if (ctx->pc == 0x267FCCu) {
        ctx->pc = 0x267FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FC8u;
        // 0x267fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FD0u;
        goto label_267fd0;
    }
    ctx->pc = 0x267FC8u;
    SET_GPR_U32(ctx, 31, 0x267FD0u);
    ctx->pc = 0x267FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FC8u;
    // 0x267fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x267FC8u, 0x267FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FD0u;
label_267fd0:
    // 0x267fd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_267fd4:
    if (ctx->pc == 0x267FD4u) {
        ctx->pc = 0x267FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FD0u;
        // 0x267fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FD8u;
        goto label_267fd8;
    }
    ctx->pc = 0x267FD0u;
    {
        const bool branch_taken_0x267fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FD0u;
        // 0x267fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fd0) {
            ctx->pc = 0x267FE8u;
            goto label_267fe8;
        }
    }
    ctx->pc = 0x267FD8u;
label_267fd8:
    // 0x267fd8: 0xc087dc0  jal         func_21F700
label_267fdc:
    if (ctx->pc == 0x267FDCu) {
        ctx->pc = 0x267FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FD8u;
        // 0x267fdc: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FE0u;
        goto label_267fe0;
    }
    ctx->pc = 0x267FD8u;
    SET_GPR_U32(ctx, 31, 0x267FE0u);
    ctx->pc = 0x267FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FD8u;
    // 0x267fdc: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F700u, 0x267FD8u, 0x267FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FE0u;
label_267fe0:
    // 0x267fe0: 0x10000007  b           . + 4 + (0x7 << 2)
label_267fe4:
    if (ctx->pc == 0x267FE4u) {
        ctx->pc = 0x267FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE0u;
        // 0x267fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FE8u;
        goto label_267fe8;
    }
    ctx->pc = 0x267FE0u;
    {
        const bool branch_taken_0x267fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE0u;
        // 0x267fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fe0) {
            ctx->pc = 0x268000u;
            goto label_268000;
        }
    }
    ctx->pc = 0x267FE8u;
label_267fe8:
    // 0x267fe8: 0xc087b0e  jal         func_21EC38
label_267fec:
    if (ctx->pc == 0x267FECu) {
        ctx->pc = 0x267FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE8u;
        // 0x267fec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FF0u;
        goto label_267ff0;
    }
    ctx->pc = 0x267FE8u;
    SET_GPR_U32(ctx, 31, 0x267FF0u);
    ctx->pc = 0x267FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FE8u;
    // 0x267fec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x267FE8u, 0x267FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FF0u;
label_267ff0:
    // 0x267ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267ff4:
    // 0x267ff4: 0xc087dc0  jal         func_21F700
label_267ff8:
    if (ctx->pc == 0x267FF8u) {
        ctx->pc = 0x267FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FF4u;
        // 0x267ff8: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FFCu;
        goto label_267ffc;
    }
    ctx->pc = 0x267FF4u;
    SET_GPR_U32(ctx, 31, 0x267FFCu);
    ctx->pc = 0x267FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FF4u;
    // 0x267ff8: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F700u, 0x267FF4u, 0x267FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FFCu;
label_267ffc:
    // 0x267ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268000:
    // 0x268000: 0xc089998  jal         func_226660
label_268004:
    if (ctx->pc == 0x268004u) {
        ctx->pc = 0x268004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268000u;
        // 0x268004: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268008u;
        goto label_268008;
    }
    ctx->pc = 0x268000u;
    SET_GPR_U32(ctx, 31, 0x268008u);
    ctx->pc = 0x268004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268000u;
    // 0x268004: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x268000u, 0x268008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268008u;
label_268008:
    // 0x268008: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_26800c:
    if (ctx->pc == 0x26800Cu) {
        ctx->pc = 0x26800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268008u;
        // 0x26800c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268010u;
        goto label_268010;
    }
    ctx->pc = 0x268008u;
    {
        const bool branch_taken_0x268008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268008u;
        // 0x26800c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268008) {
            ctx->pc = 0x268040u;
            goto label_268040;
        }
    }
    ctx->pc = 0x268010u;
label_268010:
    // 0x268010: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x268010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_268014:
    // 0x268014: 0xc089998  jal         func_226660
label_268018:
    if (ctx->pc == 0x268018u) {
        ctx->pc = 0x268018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268014u;
        // 0x268018: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26801Cu;
        goto label_26801c;
    }
    ctx->pc = 0x268014u;
    SET_GPR_U32(ctx, 31, 0x26801Cu);
    ctx->pc = 0x268018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268014u;
    // 0x268018: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x268014u, 0x26801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26801Cu;
label_26801c:
    // 0x26801c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_268020:
    if (ctx->pc == 0x268020u) {
        ctx->pc = 0x268024u;
        goto label_268024;
    }
    ctx->pc = 0x26801Cu;
    {
        const bool branch_taken_0x26801c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26801c) {
            ctx->pc = 0x268040u;
            goto label_268040;
        }
    }
    ctx->pc = 0x268024u;
label_268024:
    // 0x268024: 0xc05d484  jal         func_175210
label_268028:
    if (ctx->pc == 0x268028u) {
        ctx->pc = 0x268028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268024u;
        // 0x268028: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26802Cu;
        goto label_26802c;
    }
    ctx->pc = 0x268024u;
    SET_GPR_U32(ctx, 31, 0x26802Cu);
    ctx->pc = 0x268028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268024u;
    // 0x268028: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268024u, 0x26802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26802Cu;
label_26802c:
    // 0x26802c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268030:
    // 0x268030: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268034:
    // 0x268034: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268038:
    // 0x268038: 0xa0f809  jalr        $a1
label_26803c:
    if (ctx->pc == 0x26803Cu) {
        ctx->pc = 0x26803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268038u;
        // 0x26803c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268040u;
        goto label_268040;
    }
    ctx->pc = 0x268038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268040u);
        ctx->pc = 0x26803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268038u;
        // 0x26803c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268038u, 0x268040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268040u;
label_268040:
    // 0x268040: 0xc088e30  jal         func_2238C0
label_268044:
    if (ctx->pc == 0x268044u) {
        ctx->pc = 0x268044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268040u;
        // 0x268044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268048u;
        goto label_268048;
    }
    ctx->pc = 0x268040u;
    SET_GPR_U32(ctx, 31, 0x268048u);
    ctx->pc = 0x268044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268040u;
    // 0x268044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x268040u, 0x268048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268048u;
label_268048:
    // 0x268048: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26804c:
    if (ctx->pc == 0x26804Cu) {
        ctx->pc = 0x268050u;
        goto label_268050;
    }
    ctx->pc = 0x268048u;
    {
        const bool branch_taken_0x268048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268048) {
            ctx->pc = 0x268068u;
            goto label_268068;
        }
    }
    ctx->pc = 0x268050u;
label_268050:
    // 0x268050: 0xc0e4060  jal         func_390180
label_268054:
    if (ctx->pc == 0x268054u) {
        ctx->pc = 0x268054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268050u;
        // 0x268054: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268058u;
        goto label_268058;
    }
    ctx->pc = 0x268050u;
    SET_GPR_U32(ctx, 31, 0x268058u);
    ctx->pc = 0x268054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268050u;
    // 0x268054: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x268050u, 0x268058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268058u;
label_268058:
    // 0x268058: 0xc0e6ee8  jal         func_39BBA0
label_26805c:
    if (ctx->pc == 0x26805Cu) {
        ctx->pc = 0x26805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268058u;
        // 0x26805c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268060u;
        goto label_268060;
    }
    ctx->pc = 0x268058u;
    SET_GPR_U32(ctx, 31, 0x268060u);
    ctx->pc = 0x26805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268058u;
    // 0x26805c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x268058u, 0x268060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268060u;
label_268060:
    // 0x268060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_268064:
    if (ctx->pc == 0x268064u) {
        ctx->pc = 0x268064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268060u;
        // 0x268064: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268068u;
        goto label_268068;
    }
    ctx->pc = 0x268060u;
    {
        const bool branch_taken_0x268060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268060u;
        // 0x268064: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268060) {
            ctx->pc = 0x268074u;
            goto label_268074;
        }
    }
    ctx->pc = 0x268068u;
label_268068:
    // 0x268068: 0xc08ba12  jal         func_22E848
label_26806c:
    if (ctx->pc == 0x26806Cu) {
        ctx->pc = 0x26806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268068u;
        // 0x26806c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268070u;
        goto label_268070;
    }
    ctx->pc = 0x268068u;
    SET_GPR_U32(ctx, 31, 0x268070u);
    ctx->pc = 0x26806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268068u;
    // 0x26806c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x268068u, 0x268070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268070u;
label_268070:
    // 0x268070: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x268070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_268074:
    // 0x268074: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x268074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_268078:
    // 0x268078: 0x2444de68  addiu       $a0, $v0, -0x2198
    ctx->pc = 0x268078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958696));
label_26807c:
    // 0x26807c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x26807cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_268080:
    // 0x268080: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_268084:
    if (ctx->pc == 0x268084u) {
        ctx->pc = 0x268084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268080u;
        // 0x268084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268088u;
        goto label_268088;
    }
    ctx->pc = 0x268080u;
    {
        const bool branch_taken_0x268080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268080u;
        // 0x268084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268080) {
            ctx->pc = 0x2680B8u;
            goto label_2680b8;
        }
    }
    ctx->pc = 0x268088u;
label_268088:
    // 0x268088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x268088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26808c:
    // 0x26808c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_268090:
    if (ctx->pc == 0x268090u) {
        ctx->pc = 0x268090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26808Cu;
        // 0x268090: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268094u;
        goto label_268094;
    }
    ctx->pc = 0x26808Cu;
    {
        const bool branch_taken_0x26808c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26808Cu;
        // 0x268090: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26808c) {
            ctx->pc = 0x2680A4u;
            goto label_2680a4;
        }
    }
    ctx->pc = 0x268094u;
label_268094:
    // 0x268094: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x268094u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_268098:
    // 0x268098: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x268098u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_26809c:
    // 0x26809c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2680a0:
    if (ctx->pc == 0x2680A0u) {
        ctx->pc = 0x2680A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26809Cu;
        // 0x2680a0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680A4u;
        goto label_2680a4;
    }
    ctx->pc = 0x26809Cu;
    {
        const bool branch_taken_0x26809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2680A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26809Cu;
        // 0x2680a0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26809c) {
            ctx->pc = 0x2680B4u;
            goto label_2680b4;
        }
    }
    ctx->pc = 0x2680A4u;
label_2680a4:
    // 0x2680a4: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_2680a8:
    // 0x2680a8: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x2680a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_2680ac:
    // 0x2680ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2680b0:
    if (ctx->pc == 0x2680B0u) {
        ctx->pc = 0x2680B4u;
        goto label_2680b4;
    }
    ctx->pc = 0x2680ACu;
    {
        const bool branch_taken_0x2680ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2680ac) {
            ctx->pc = 0x2680B8u;
            goto label_2680b8;
        }
    }
    ctx->pc = 0x2680B4u;
label_2680b4:
    // 0x2680b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2680b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2680b8:
    // 0x2680b8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_2680bc:
    if (ctx->pc == 0x2680BCu) {
        ctx->pc = 0x2680C0u;
        goto label_2680c0;
    }
    ctx->pc = 0x2680B8u;
    {
        const bool branch_taken_0x2680b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2680b8) {
            ctx->pc = 0x2680F4u;
            goto label_2680f4;
        }
    }
    ctx->pc = 0x2680C0u;
label_2680c0:
    // 0x2680c0: 0xc095018  jal         func_254060
label_2680c4:
    if (ctx->pc == 0x2680C4u) {
        ctx->pc = 0x2680C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680C0u;
        // 0x2680c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680C8u;
        goto label_2680c8;
    }
    ctx->pc = 0x2680C0u;
    SET_GPR_U32(ctx, 31, 0x2680C8u);
    ctx->pc = 0x2680C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680C0u;
    // 0x2680c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x2680C0u, 0x2680C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680C8u;
label_2680c8:
    // 0x2680c8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2680c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2680cc:
    // 0x2680cc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2680d0:
    if (ctx->pc == 0x2680D0u) {
        ctx->pc = 0x2680D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680CCu;
        // 0x2680d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680D4u;
        goto label_2680d4;
    }
    ctx->pc = 0x2680CCu;
    {
        const bool branch_taken_0x2680cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2680D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680CCu;
        // 0x2680d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680cc) {
            ctx->pc = 0x2680E4u;
            goto label_2680e4;
        }
    }
    ctx->pc = 0x2680D4u;
label_2680d4:
    // 0x2680d4: 0xc094fca  jal         func_253F28
label_2680d8:
    if (ctx->pc == 0x2680D8u) {
        ctx->pc = 0x2680D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680D4u;
        // 0x2680d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680DCu;
        goto label_2680dc;
    }
    ctx->pc = 0x2680D4u;
    SET_GPR_U32(ctx, 31, 0x2680DCu);
    ctx->pc = 0x2680D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680D4u;
    // 0x2680d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x2680D4u, 0x2680DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680DCu;
label_2680dc:
    // 0x2680dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2680e0:
    if (ctx->pc == 0x2680E0u) {
        ctx->pc = 0x2680E4u;
        goto label_2680e4;
    }
    ctx->pc = 0x2680DCu;
    {
        const bool branch_taken_0x2680dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2680dc) {
            ctx->pc = 0x2680ECu;
            goto label_2680ec;
        }
    }
    ctx->pc = 0x2680E4u;
label_2680e4:
    // 0x2680e4: 0xc094fde  jal         func_253F78
label_2680e8:
    if (ctx->pc == 0x2680E8u) {
        ctx->pc = 0x2680E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680E4u;
        // 0x2680e8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680ECu;
        goto label_2680ec;
    }
    ctx->pc = 0x2680E4u;
    SET_GPR_U32(ctx, 31, 0x2680ECu);
    ctx->pc = 0x2680E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680E4u;
    // 0x2680e8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x2680E4u, 0x2680ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680ECu;
label_2680ec:
    // 0x2680ec: 0xc088420  jal         func_221080
label_2680f0:
    if (ctx->pc == 0x2680F0u) {
        ctx->pc = 0x2680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680ECu;
        // 0x2680f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680F4u;
        goto label_2680f4;
    }
    ctx->pc = 0x2680ECu;
    SET_GPR_U32(ctx, 31, 0x2680F4u);
    ctx->pc = 0x2680F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680ECu;
    // 0x2680f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x2680ECu, 0x2680F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680F4u;
label_2680f4:
    // 0x2680f4: 0xc08a01c  jal         func_228070
label_2680f8:
    if (ctx->pc == 0x2680F8u) {
        ctx->pc = 0x2680F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680F4u;
        // 0x2680f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680FCu;
        goto label_2680fc;
    }
    ctx->pc = 0x2680F4u;
    SET_GPR_U32(ctx, 31, 0x2680FCu);
    ctx->pc = 0x2680F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680F4u;
    // 0x2680f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2680F4u, 0x2680FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680FCu;
label_2680fc:
    // 0x2680fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_268100:
    if (ctx->pc == 0x268100u) {
        ctx->pc = 0x268104u;
        goto label_268104;
    }
    ctx->pc = 0x2680FCu;
    {
        const bool branch_taken_0x2680fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2680fc) {
            ctx->pc = 0x26811Cu;
            goto label_26811c;
        }
    }
    ctx->pc = 0x268104u;
label_268104:
    // 0x268104: 0xc0e409a  jal         func_390268
label_268108:
    if (ctx->pc == 0x268108u) {
        ctx->pc = 0x268108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268104u;
        // 0x268108: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26810Cu;
        goto label_26810c;
    }
    ctx->pc = 0x268104u;
    SET_GPR_U32(ctx, 31, 0x26810Cu);
    ctx->pc = 0x268108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268104u;
    // 0x268108: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268104u, 0x26810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26810Cu;
label_26810c:
    // 0x26810c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26810cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268110:
    // 0x268110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268114:
    // 0x268114: 0xc08b3ae  jal         func_22CEB8
label_268118:
    if (ctx->pc == 0x268118u) {
        ctx->pc = 0x268118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268114u;
        // 0x268118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26811Cu;
        goto label_26811c;
    }
    ctx->pc = 0x268114u;
    SET_GPR_U32(ctx, 31, 0x26811Cu);
    ctx->pc = 0x268118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268114u;
    // 0x268118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x268114u, 0x26811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26811Cu;
label_26811c:
    // 0x26811c: 0xc08a024  jal         func_228090
label_268120:
    if (ctx->pc == 0x268120u) {
        ctx->pc = 0x268120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26811Cu;
        // 0x268120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268124u;
        goto label_268124;
    }
    ctx->pc = 0x26811Cu;
    SET_GPR_U32(ctx, 31, 0x268124u);
    ctx->pc = 0x268120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26811Cu;
    // 0x268120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x26811Cu, 0x268124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268124u;
label_268124:
    // 0x268124: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_268128:
    if (ctx->pc == 0x268128u) {
        ctx->pc = 0x26812Cu;
        goto label_26812c;
    }
    ctx->pc = 0x268124u;
    {
        const bool branch_taken_0x268124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268124) {
            ctx->pc = 0x268144u;
            goto label_268144;
        }
    }
    ctx->pc = 0x26812Cu;
label_26812c:
    // 0x26812c: 0xc0e409a  jal         func_390268
label_268130:
    if (ctx->pc == 0x268130u) {
        ctx->pc = 0x268130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26812Cu;
        // 0x268130: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268134u;
        goto label_268134;
    }
    ctx->pc = 0x26812Cu;
    SET_GPR_U32(ctx, 31, 0x268134u);
    ctx->pc = 0x268130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26812Cu;
    // 0x268130: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26812Cu, 0x268134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268134u;
label_268134:
    // 0x268134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268138:
    // 0x268138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26813c:
    // 0x26813c: 0xc08b3ae  jal         func_22CEB8
label_268140:
    if (ctx->pc == 0x268140u) {
        ctx->pc = 0x268140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26813Cu;
        // 0x268140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268144u;
        goto label_268144;
    }
    ctx->pc = 0x26813Cu;
    SET_GPR_U32(ctx, 31, 0x268144u);
    ctx->pc = 0x268140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26813Cu;
    // 0x268140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x26813Cu, 0x268144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268144u;
label_268144:
    // 0x268144: 0xc08a034  jal         func_2280D0
label_268148:
    if (ctx->pc == 0x268148u) {
        ctx->pc = 0x268148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268144u;
        // 0x268148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26814Cu;
        goto label_26814c;
    }
    ctx->pc = 0x268144u;
    SET_GPR_U32(ctx, 31, 0x26814Cu);
    ctx->pc = 0x268148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268144u;
    // 0x268148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x268144u, 0x26814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26814Cu;
label_26814c:
    // 0x26814c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_268150:
    if (ctx->pc == 0x268150u) {
        ctx->pc = 0x268154u;
        goto label_268154;
    }
    ctx->pc = 0x26814Cu;
    {
        const bool branch_taken_0x26814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26814c) {
            ctx->pc = 0x268168u;
            goto label_268168;
        }
    }
    ctx->pc = 0x268154u;
label_268154:
    // 0x268154: 0xc0e409a  jal         func_390268
label_268158:
    if (ctx->pc == 0x268158u) {
        ctx->pc = 0x268158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268154u;
        // 0x268158: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26815Cu;
        goto label_26815c;
    }
    ctx->pc = 0x268154u;
    SET_GPR_U32(ctx, 31, 0x26815Cu);
    ctx->pc = 0x268158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268154u;
    // 0x268158: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268154u, 0x26815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26815Cu;
label_26815c:
    // 0x26815c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268160:
    // 0x268160: 0xc08b186  jal         func_22C618
label_268164:
    if (ctx->pc == 0x268164u) {
        ctx->pc = 0x268164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268160u;
        // 0x268164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268168u;
        goto label_268168;
    }
    ctx->pc = 0x268160u;
    SET_GPR_U32(ctx, 31, 0x268168u);
    ctx->pc = 0x268164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268160u;
    // 0x268164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x268160u, 0x268168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268168u;
label_268168:
    // 0x268168: 0xc08a02c  jal         func_2280B0
label_26816c:
    if (ctx->pc == 0x26816Cu) {
        ctx->pc = 0x26816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268168u;
        // 0x26816c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268170u;
        goto label_268170;
    }
    ctx->pc = 0x268168u;
    SET_GPR_U32(ctx, 31, 0x268170u);
    ctx->pc = 0x26816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268168u;
    // 0x26816c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x268168u, 0x268170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268170u;
label_268170:
    // 0x268170: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_268174:
    if (ctx->pc == 0x268174u) {
        ctx->pc = 0x268178u;
        goto label_268178;
    }
    ctx->pc = 0x268170u;
    {
        const bool branch_taken_0x268170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268170) {
            ctx->pc = 0x26818Cu;
            goto label_26818c;
        }
    }
    ctx->pc = 0x268178u;
label_268178:
    // 0x268178: 0xc0e409a  jal         func_390268
label_26817c:
    if (ctx->pc == 0x26817Cu) {
        ctx->pc = 0x26817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268178u;
        // 0x26817c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268180u;
        goto label_268180;
    }
    ctx->pc = 0x268178u;
    SET_GPR_U32(ctx, 31, 0x268180u);
    ctx->pc = 0x26817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268178u;
    // 0x26817c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268178u, 0x268180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268180u;
label_268180:
    // 0x268180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268184:
    // 0x268184: 0xc08b186  jal         func_22C618
label_268188:
    if (ctx->pc == 0x268188u) {
        ctx->pc = 0x268188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268184u;
        // 0x268188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26818Cu;
        goto label_26818c;
    }
    ctx->pc = 0x268184u;
    SET_GPR_U32(ctx, 31, 0x26818Cu);
    ctx->pc = 0x268188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268184u;
    // 0x268188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x268184u, 0x26818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26818Cu;
label_26818c:
    // 0x26818c: 0xc08a046  jal         func_228118
label_268190:
    if (ctx->pc == 0x268190u) {
        ctx->pc = 0x268190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26818Cu;
        // 0x268190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268194u;
        goto label_268194;
    }
    ctx->pc = 0x26818Cu;
    SET_GPR_U32(ctx, 31, 0x268194u);
    ctx->pc = 0x268190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26818Cu;
    // 0x268190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228118u, 0x26818Cu, 0x268194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268194u;
label_268194:
    // 0x268194: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_268198:
    if (ctx->pc == 0x268198u) {
        ctx->pc = 0x26819Cu;
        goto label_26819c;
    }
    ctx->pc = 0x268194u;
    {
        const bool branch_taken_0x268194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268194) {
            ctx->pc = 0x2681B4u;
            goto label_2681b4;
        }
    }
    ctx->pc = 0x26819Cu;
label_26819c:
    // 0x26819c: 0xc0e409a  jal         func_390268
label_2681a0:
    if (ctx->pc == 0x2681A0u) {
        ctx->pc = 0x2681A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26819Cu;
        // 0x2681a0: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681A4u;
        goto label_2681a4;
    }
    ctx->pc = 0x26819Cu;
    SET_GPR_U32(ctx, 31, 0x2681A4u);
    ctx->pc = 0x2681A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26819Cu;
    // 0x2681a0: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26819Cu, 0x2681A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681A4u;
label_2681a4:
    // 0x2681a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2681a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2681a8:
    // 0x2681a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2681a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2681ac:
    // 0x2681ac: 0xc08b47e  jal         func_22D1F8
label_2681b0:
    if (ctx->pc == 0x2681B0u) {
        ctx->pc = 0x2681B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681ACu;
        // 0x2681b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681B4u;
        goto label_2681b4;
    }
    ctx->pc = 0x2681ACu;
    SET_GPR_U32(ctx, 31, 0x2681B4u);
    ctx->pc = 0x2681B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681ACu;
    // 0x2681b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x2681ACu, 0x2681B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681B4u;
label_2681b4:
    // 0x2681b4: 0xc08a050  jal         func_228140
label_2681b8:
    if (ctx->pc == 0x2681B8u) {
        ctx->pc = 0x2681B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681B4u;
        // 0x2681b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681BCu;
        goto label_2681bc;
    }
    ctx->pc = 0x2681B4u;
    SET_GPR_U32(ctx, 31, 0x2681BCu);
    ctx->pc = 0x2681B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681B4u;
    // 0x2681b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228140u, 0x2681B4u, 0x2681BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681BCu;
label_2681bc:
    // 0x2681bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2681c0:
    if (ctx->pc == 0x2681C0u) {
        ctx->pc = 0x2681C4u;
        goto label_2681c4;
    }
    ctx->pc = 0x2681BCu;
    {
        const bool branch_taken_0x2681bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681bc) {
            ctx->pc = 0x2681DCu;
            goto label_2681dc;
        }
    }
    ctx->pc = 0x2681C4u;
label_2681c4:
    // 0x2681c4: 0xc0e409a  jal         func_390268
label_2681c8:
    if (ctx->pc == 0x2681C8u) {
        ctx->pc = 0x2681C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681C4u;
        // 0x2681c8: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681CCu;
        goto label_2681cc;
    }
    ctx->pc = 0x2681C4u;
    SET_GPR_U32(ctx, 31, 0x2681CCu);
    ctx->pc = 0x2681C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681C4u;
    // 0x2681c8: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2681C4u, 0x2681CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681CCu;
label_2681cc:
    // 0x2681cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2681ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2681d0:
    // 0x2681d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2681d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2681d4:
    // 0x2681d4: 0xc08b47e  jal         func_22D1F8
label_2681d8:
    if (ctx->pc == 0x2681D8u) {
        ctx->pc = 0x2681D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681D4u;
        // 0x2681d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681DCu;
        goto label_2681dc;
    }
    ctx->pc = 0x2681D4u;
    SET_GPR_U32(ctx, 31, 0x2681DCu);
    ctx->pc = 0x2681D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681D4u;
    // 0x2681d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x2681D4u, 0x2681DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681DCu;
label_2681dc:
    // 0x2681dc: 0xc08a014  jal         func_228050
label_2681e0:
    if (ctx->pc == 0x2681E0u) {
        ctx->pc = 0x2681E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681DCu;
        // 0x2681e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681E4u;
        goto label_2681e4;
    }
    ctx->pc = 0x2681DCu;
    SET_GPR_U32(ctx, 31, 0x2681E4u);
    ctx->pc = 0x2681E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681DCu;
    // 0x2681e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x2681DCu, 0x2681E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681E4u;
label_2681e4:
    // 0x2681e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2681e8:
    if (ctx->pc == 0x2681E8u) {
        ctx->pc = 0x2681E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681E4u;
        // 0x2681e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681ECu;
        goto label_2681ec;
    }
    ctx->pc = 0x2681E4u;
    {
        const bool branch_taken_0x2681e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681E4u;
        // 0x2681e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681e4) {
            ctx->pc = 0x268204u;
            goto label_268204;
        }
    }
    ctx->pc = 0x2681ECu;
label_2681ec:
    // 0x2681ec: 0xc089988  jal         func_226620
label_2681f0:
    if (ctx->pc == 0x2681F0u) {
        ctx->pc = 0x2681F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681ECu;
        // 0x2681f0: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681F4u;
        goto label_2681f4;
    }
    ctx->pc = 0x2681ECu;
    SET_GPR_U32(ctx, 31, 0x2681F4u);
    ctx->pc = 0x2681F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681ECu;
    // 0x2681f0: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x2681ECu, 0x2681F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681F4u;
label_2681f4:
    // 0x2681f4: 0xc088ac6  jal         func_222B18
label_2681f8:
    if (ctx->pc == 0x2681F8u) {
        ctx->pc = 0x2681F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681F4u;
        // 0x2681f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681FCu;
        goto label_2681fc;
    }
    ctx->pc = 0x2681F4u;
    SET_GPR_U32(ctx, 31, 0x2681FCu);
    ctx->pc = 0x2681F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681F4u;
    // 0x2681f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x2681F4u, 0x2681FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681FCu;
label_2681fc:
    // 0x2681fc: 0x2403ffec  addiu       $v1, $zero, -0x14
    ctx->pc = 0x2681fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
label_268200:
    // 0x268200: 0xa4430040  sh          $v1, 0x40($v0)
    ctx->pc = 0x268200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
label_268204:
    // 0x268204: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x268204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_268208:
    // 0x268208: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x268208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_26820c:
    // 0x26820c: 0x2444de80  addiu       $a0, $v0, -0x2180
    ctx->pc = 0x26820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_268210:
    // 0x268210: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x268210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_268214:
    // 0x268214: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_268218:
    if (ctx->pc == 0x268218u) {
        ctx->pc = 0x268218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268214u;
        // 0x268218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26821Cu;
        goto label_26821c;
    }
    ctx->pc = 0x268214u;
    {
        const bool branch_taken_0x268214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268214u;
        // 0x268218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268214) {
            ctx->pc = 0x26824Cu;
            goto label_26824c;
        }
    }
    ctx->pc = 0x26821Cu;
label_26821c:
    // 0x26821c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_268220:
    // 0x268220: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_268224:
    if (ctx->pc == 0x268224u) {
        ctx->pc = 0x268224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268220u;
        // 0x268224: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268228u;
        goto label_268228;
    }
    ctx->pc = 0x268220u;
    {
        const bool branch_taken_0x268220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268220u;
        // 0x268224: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268220) {
            ctx->pc = 0x268238u;
            goto label_268238;
        }
    }
    ctx->pc = 0x268228u;
label_268228:
    // 0x268228: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x268228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_26822c:
    // 0x26822c: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x26822cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_268230:
    // 0x268230: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_268234:
    if (ctx->pc == 0x268234u) {
        ctx->pc = 0x268234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268230u;
        // 0x268234: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268238u;
        goto label_268238;
    }
    ctx->pc = 0x268230u;
    {
        const bool branch_taken_0x268230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x268234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268230u;
        // 0x268234: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268230) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x268238u;
label_268238:
    // 0x268238: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x268238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_26823c:
    // 0x26823c: 0x24422ce0  addiu       $v0, $v0, 0x2CE0
    ctx->pc = 0x26823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
label_268240:
    // 0x268240: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_268244:
    if (ctx->pc == 0x268244u) {
        ctx->pc = 0x268248u;
        goto label_268248;
    }
    ctx->pc = 0x268240u;
    {
        const bool branch_taken_0x268240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268240) {
            ctx->pc = 0x26824Cu;
            goto label_26824c;
        }
    }
    ctx->pc = 0x268248u;
label_268248:
    // 0x268248: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x268248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26824c:
    // 0x26824c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_268250:
    if (ctx->pc == 0x268250u) {
        ctx->pc = 0x268254u;
        goto label_268254;
    }
    ctx->pc = 0x26824Cu;
    {
        const bool branch_taken_0x26824c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26824c) {
            ctx->pc = 0x26827Cu;
            goto label_26827c;
        }
    }
    ctx->pc = 0x268254u;
label_268254:
    // 0x268254: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x268254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_268258:
    // 0x268258: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x268258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26825c:
    // 0x26825c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_268260:
    // 0x268260: 0x40f809  jalr        $v0
label_268264:
    if (ctx->pc == 0x268264u) {
        ctx->pc = 0x268264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268260u;
        // 0x268264: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268268u;
        goto label_268268;
    }
    ctx->pc = 0x268260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x268268u);
        ctx->pc = 0x268264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268260u;
        // 0x268264: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268260u, 0x268268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268268u;
label_268268:
    // 0x268268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26826c:
    // 0x26826c: 0xc0518f8  jal         func_1463E0
label_268270:
    if (ctx->pc == 0x268270u) {
        ctx->pc = 0x268270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26826Cu;
        // 0x268270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268274u;
        goto label_268274;
    }
    ctx->pc = 0x26826Cu;
    SET_GPR_U32(ctx, 31, 0x268274u);
    ctx->pc = 0x268270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26826Cu;
    // 0x268270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x26826Cu, 0x268274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268274u;
label_268274:
    // 0x268274: 0xc088420  jal         func_221080
label_268278:
    if (ctx->pc == 0x268278u) {
        ctx->pc = 0x268278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268274u;
        // 0x268278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26827Cu;
        goto label_26827c;
    }
    ctx->pc = 0x268274u;
    SET_GPR_U32(ctx, 31, 0x26827Cu);
    ctx->pc = 0x268278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268274u;
    // 0x268278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x268274u, 0x26827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26827Cu;
label_26827c:
    // 0x26827c: 0xc087502  jal         func_21D408
label_268280:
    if (ctx->pc == 0x268280u) {
        ctx->pc = 0x268280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26827Cu;
        // 0x268280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268284u;
        goto label_268284;
    }
    ctx->pc = 0x26827Cu;
    SET_GPR_U32(ctx, 31, 0x268284u);
    ctx->pc = 0x268280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26827Cu;
    // 0x268280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26827Cu, 0x268284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268284u;
label_268284:
    // 0x268284: 0xc0a3294  jal         func_28CA50
label_268288:
    if (ctx->pc == 0x268288u) {
        ctx->pc = 0x268288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268284u;
        // 0x268288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26828Cu;
        goto label_26828c;
    }
    ctx->pc = 0x268284u;
    SET_GPR_U32(ctx, 31, 0x26828Cu);
    ctx->pc = 0x268288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268284u;
    // 0x268288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CA50u, 0x268284u, 0x26828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26828Cu;
label_26828c:
    // 0x26828c: 0xc088edc  jal         func_223B70
label_268290:
    if (ctx->pc == 0x268290u) {
        ctx->pc = 0x268290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26828Cu;
        // 0x268290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268294u;
        goto label_268294;
    }
    ctx->pc = 0x26828Cu;
    SET_GPR_U32(ctx, 31, 0x268294u);
    ctx->pc = 0x268290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26828Cu;
    // 0x268290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x26828Cu, 0x268294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268294u;
label_268294:
    // 0x268294: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_268298:
    if (ctx->pc == 0x268298u) {
        ctx->pc = 0x26829Cu;
        goto label_26829c;
    }
    ctx->pc = 0x268294u;
    {
        const bool branch_taken_0x268294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268294) {
            ctx->pc = 0x2683D4u;
            goto label_2683d4;
        }
    }
    ctx->pc = 0x26829Cu;
label_26829c:
    // 0x26829c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x26829cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2682a0:
    // 0x2682a0: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x2682a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
label_2682a4:
    // 0x2682a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2682a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2682a8:
    // 0x2682a8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_2682ac:
    if (ctx->pc == 0x2682ACu) {
        ctx->pc = 0x2682ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682A8u;
        // 0x2682ac: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682B0u;
        goto label_2682b0;
    }
    ctx->pc = 0x2682A8u;
    {
        const bool branch_taken_0x2682a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682A8u;
        // 0x2682ac: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682a8) {
            ctx->pc = 0x2683D4u;
            goto label_2683d4;
        }
    }
    ctx->pc = 0x2682B0u;
label_2682b0:
    // 0x2682b0: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x2682b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2682b4:
    // 0x2682b4: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_2682b8:
    // 0x2682b8: 0xc041532  jal         func_1054C8
label_2682bc:
    if (ctx->pc == 0x2682BCu) {
        ctx->pc = 0x2682BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682B8u;
        // 0x2682bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682C0u;
        goto label_2682c0;
    }
    ctx->pc = 0x2682B8u;
    SET_GPR_U32(ctx, 31, 0x2682C0u);
    ctx->pc = 0x2682BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682B8u;
    // 0x2682bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2682B8u, 0x2682C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682C0u;
label_2682c0:
    // 0x2682c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2682c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2682c4:
    // 0x2682c4: 0xc041532  jal         func_1054C8
label_2682c8:
    if (ctx->pc == 0x2682C8u) {
        ctx->pc = 0x2682C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682C4u;
        // 0x2682c8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682CCu;
        goto label_2682cc;
    }
    ctx->pc = 0x2682C4u;
    SET_GPR_U32(ctx, 31, 0x2682CCu);
    ctx->pc = 0x2682C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682C4u;
    // 0x2682c8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2682C4u, 0x2682CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682CCu;
label_2682cc:
    // 0x2682cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2682ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2682d0:
    // 0x2682d0: 0xc041532  jal         func_1054C8
label_2682d4:
    if (ctx->pc == 0x2682D4u) {
        ctx->pc = 0x2682D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682D0u;
        // 0x2682d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682D8u;
        goto label_2682d8;
    }
    ctx->pc = 0x2682D0u;
    SET_GPR_U32(ctx, 31, 0x2682D8u);
    ctx->pc = 0x2682D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682D0u;
    // 0x2682d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2682D0u, 0x2682D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682D8u;
label_2682d8:
    // 0x2682d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2682d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2682dc:
    // 0x2682dc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2682e0:
    if (ctx->pc == 0x2682E0u) {
        ctx->pc = 0x2682E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682DCu;
        // 0x2682e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682E4u;
        goto label_2682e4;
    }
    ctx->pc = 0x2682DCu;
    {
        const bool branch_taken_0x2682dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682DCu;
        // 0x2682e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682dc) {
            ctx->pc = 0x2682FCu;
            goto label_2682fc;
        }
    }
    ctx->pc = 0x2682E4u;
label_2682e4:
    // 0x2682e4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2682e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2682e8:
    // 0x2682e8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2682e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2682ec:
    // 0x2682ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2682ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2682f0:
    // 0x2682f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2682f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2682f4:
    // 0x2682f4: 0xc041b20  jal         func_106C80
label_2682f8:
    if (ctx->pc == 0x2682F8u) {
        ctx->pc = 0x2682F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682F4u;
        // 0x2682f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682FCu;
        goto label_2682fc;
    }
    ctx->pc = 0x2682F4u;
    SET_GPR_U32(ctx, 31, 0x2682FCu);
    ctx->pc = 0x2682F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682F4u;
    // 0x2682f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2682F4u, 0x2682FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682FCu;
label_2682fc:
    // 0x2682fc: 0xc05d484  jal         func_175210
label_268300:
    if (ctx->pc == 0x268300u) {
        ctx->pc = 0x268300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682FCu;
        // 0x268300: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268304u;
        goto label_268304;
    }
    ctx->pc = 0x2682FCu;
    SET_GPR_U32(ctx, 31, 0x268304u);
    ctx->pc = 0x268300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682FCu;
    // 0x268300: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2682FCu, 0x268304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268304u;
label_268304:
    // 0x268304: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268308:
    // 0x268308: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26830c:
    // 0x26830c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268310:
    // 0x268310: 0xa0f809  jalr        $a1
label_268314:
    if (ctx->pc == 0x268314u) {
        ctx->pc = 0x268314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268310u;
        // 0x268314: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268318u;
        goto label_268318;
    }
    ctx->pc = 0x268310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268318u);
        ctx->pc = 0x268314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268310u;
        // 0x268314: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268310u, 0x268318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268318u;
label_268318:
    // 0x268318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26831c:
    // 0x26831c: 0xc087016  jal         func_21C058
label_268320:
    if (ctx->pc == 0x268320u) {
        ctx->pc = 0x268320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26831Cu;
        // 0x268320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268324u;
        goto label_268324;
    }
    ctx->pc = 0x26831Cu;
    SET_GPR_U32(ctx, 31, 0x268324u);
    ctx->pc = 0x268320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26831Cu;
    // 0x268320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26831Cu, 0x268324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268324u;
label_268324:
    // 0x268324: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_268328:
    if (ctx->pc == 0x268328u) {
        ctx->pc = 0x268328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268324u;
        // 0x268328: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26832Cu;
        goto label_26832c;
    }
    ctx->pc = 0x268324u;
    {
        const bool branch_taken_0x268324 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x268328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268324u;
        // 0x268328: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268324) {
            ctx->pc = 0x268344u;
            goto label_268344;
        }
    }
    ctx->pc = 0x26832Cu;
label_26832c:
    // 0x26832c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_268330:
    // 0x268330: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x268330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_268334:
    // 0x268334: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x268334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268338:
    // 0x268338: 0x24060143  addiu       $a2, $zero, 0x143
    ctx->pc = 0x268338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
label_26833c:
    // 0x26833c: 0xc04159e  jal         func_105678
label_268340:
    if (ctx->pc == 0x268340u) {
        ctx->pc = 0x268340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26833Cu;
        // 0x268340: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268344u;
        goto label_268344;
    }
    ctx->pc = 0x26833Cu;
    SET_GPR_U32(ctx, 31, 0x268344u);
    ctx->pc = 0x268340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26833Cu;
    // 0x268340: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26833Cu, 0x268344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268344u;
label_268344:
    // 0x268344: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_268348:
    if (ctx->pc == 0x268348u) {
        ctx->pc = 0x268348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268344u;
        // 0x268348: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26834Cu;
        goto label_26834c;
    }
    ctx->pc = 0x268344u;
    {
        const bool branch_taken_0x268344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x268348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268344u;
        // 0x268348: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268344) {
            ctx->pc = 0x26838Cu;
            goto label_26838c;
        }
    }
    ctx->pc = 0x26834Cu;
label_26834c:
    // 0x26834c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_268350:
    // 0x268350: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x268350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_268354:
    // 0x268354: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x268354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_268358:
    // 0x268358: 0x40f809  jalr        $v0
label_26835c:
    if (ctx->pc == 0x26835Cu) {
        ctx->pc = 0x26835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268358u;
        // 0x26835c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268360u;
        goto label_268360;
    }
    ctx->pc = 0x268358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x268360u);
        ctx->pc = 0x26835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268358u;
        // 0x26835c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268358u, 0x268360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268360u;
label_268360:
    // 0x268360: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x268360u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_268364:
    // 0x268364: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268368:
    // 0x268368: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x268368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26836c:
    // 0x26836c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26836cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268370:
    // 0x268370: 0x254a74c0  addiu       $t2, $t2, 0x74C0
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29888));
label_268374:
    // 0x268374: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_268378:
    // 0x268378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x268378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26837c:
    // 0x26837c: 0x24060142  addiu       $a2, $zero, 0x142
    ctx->pc = 0x26837cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
label_268380:
    // 0x268380: 0xc041664  jal         func_105990
label_268384:
    if (ctx->pc == 0x268384u) {
        ctx->pc = 0x268384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268380u;
        // 0x268384: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268388u;
        goto label_268388;
    }
    ctx->pc = 0x268380u;
    SET_GPR_U32(ctx, 31, 0x268388u);
    ctx->pc = 0x268384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268380u;
    // 0x268384: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x268380u, 0x268388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268388u;
label_268388:
    // 0x268388: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26838c:
    // 0x26838c: 0xc05d53a  jal         func_1754E8
label_268390:
    if (ctx->pc == 0x268390u) {
        ctx->pc = 0x268390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26838Cu;
        // 0x268390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268394u;
        goto label_268394;
    }
    ctx->pc = 0x26838Cu;
    SET_GPR_U32(ctx, 31, 0x268394u);
    ctx->pc = 0x268390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26838Cu;
    // 0x268390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26838Cu, 0x268394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268394u;
label_268394:
    // 0x268394: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268398:
    // 0x268398: 0xc05d4f6  jal         func_1753D8
label_26839c:
    if (ctx->pc == 0x26839Cu) {
        ctx->pc = 0x26839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268398u;
        // 0x26839c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683A0u;
        goto label_2683a0;
    }
    ctx->pc = 0x268398u;
    SET_GPR_U32(ctx, 31, 0x2683A0u);
    ctx->pc = 0x26839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268398u;
    // 0x26839c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x268398u, 0x2683A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683A0u;
label_2683a0:
    // 0x2683a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2683a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2683a4:
    // 0x2683a4: 0xc0899aa  jal         func_2266A8
label_2683a8:
    if (ctx->pc == 0x2683A8u) {
        ctx->pc = 0x2683A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683A4u;
        // 0x2683a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683ACu;
        goto label_2683ac;
    }
    ctx->pc = 0x2683A4u;
    SET_GPR_U32(ctx, 31, 0x2683ACu);
    ctx->pc = 0x2683A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683A4u;
    // 0x2683a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2683A4u, 0x2683ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683ACu;
label_2683ac:
    // 0x2683ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2683acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2683b0:
    // 0x2683b0: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x2683b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_2683b4:
    // 0x2683b4: 0x8c460790  lw          $a2, 0x790($v0)
    ctx->pc = 0x2683b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
label_2683b8:
    // 0x2683b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2683b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2683bc:
    // 0x2683bc: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2683bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2683c0:
    // 0x2683c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2683c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2683c4:
    // 0x2683c4: 0xc089990  jal         func_226640
label_2683c8:
    if (ctx->pc == 0x2683C8u) {
        ctx->pc = 0x2683C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683C4u;
        // 0x2683c8: 0xaea300f0  sw          $v1, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683CCu;
        goto label_2683cc;
    }
    ctx->pc = 0x2683C4u;
    SET_GPR_U32(ctx, 31, 0x2683CCu);
    ctx->pc = 0x2683C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683C4u;
    // 0x2683c8: 0xaea300f0  sw          $v1, 0xF0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2683C4u, 0x2683CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683CCu;
label_2683cc:
    // 0x2683cc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2683d0:
    if (ctx->pc == 0x2683D0u) {
        ctx->pc = 0x2683D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683CCu;
        // 0x2683d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683D4u;
        goto label_2683d4;
    }
    ctx->pc = 0x2683CCu;
    {
        const bool branch_taken_0x2683cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683CCu;
        // 0x2683d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683cc) {
            ctx->pc = 0x268408u;
            goto label_268408;
        }
    }
    ctx->pc = 0x2683D4u;
label_2683d4:
    // 0x2683d4: 0xc0899ae  jal         func_2266B8
label_2683d8:
    if (ctx->pc == 0x2683D8u) {
        ctx->pc = 0x2683D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683D4u;
        // 0x2683d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683DCu;
        goto label_2683dc;
    }
    ctx->pc = 0x2683D4u;
    SET_GPR_U32(ctx, 31, 0x2683DCu);
    ctx->pc = 0x2683D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683D4u;
    // 0x2683d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2683D4u, 0x2683DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683DCu;
label_2683dc:
    // 0x2683dc: 0x3842015d  xori        $v0, $v0, 0x15D
    ctx->pc = 0x2683dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)349);
label_2683e0:
    // 0x2683e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2683e4:
    if (ctx->pc == 0x2683E4u) {
        ctx->pc = 0x2683E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683E0u;
        // 0x2683e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683E8u;
        goto label_2683e8;
    }
    ctx->pc = 0x2683E0u;
    {
        const bool branch_taken_0x2683e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683E0u;
        // 0x2683e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683e0) {
            ctx->pc = 0x2683FCu;
            goto label_2683fc;
        }
    }
    ctx->pc = 0x2683E8u;
label_2683e8:
    // 0x2683e8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2683e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2683ec:
    // 0x2683ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2683ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2683f0:
    // 0x2683f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2683f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2683f4:
    // 0x2683f4: 0xc099e32  jal         func_2678C8
label_2683f8:
    if (ctx->pc == 0x2683F8u) {
        ctx->pc = 0x2683F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683F4u;
        // 0x2683f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683FCu;
        goto label_2683fc;
    }
    ctx->pc = 0x2683F4u;
    SET_GPR_U32(ctx, 31, 0x2683FCu);
    ctx->pc = 0x2683F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683F4u;
    // 0x2683f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2678C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2678C8u, 0x2683F4u, 0x2683FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683FCu;
label_2683fc:
    // 0x2683fc: 0xc095fbc  jal         func_257EF0
label_268400:
    if (ctx->pc == 0x268400u) {
        ctx->pc = 0x268400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683FCu;
        // 0x268400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268404u;
        goto label_268404;
    }
    ctx->pc = 0x2683FCu;
    SET_GPR_U32(ctx, 31, 0x268404u);
    ctx->pc = 0x268400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683FCu;
    // 0x268400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EF0u, 0x2683FCu, 0x268404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268404u;
label_268404:
    // 0x268404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268408:
    // 0x268408: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x268408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26840c:
    // 0x26840c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_268410:
    // 0x268410: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x268410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_268414:
    // 0x268414: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_268418:
    // 0x268418: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x268418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26841c:
    // 0x26841c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x26841cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268420:
    // 0x268420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268424:
    // 0x268424: 0x3e00008  jr          $ra
label_268428:
    if (ctx->pc == 0x268428u) {
        ctx->pc = 0x268428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268424u;
        // 0x268428: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26842Cu;
        goto label_26842c;
    }
    ctx->pc = 0x268424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268424u;
        // 0x268428: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26842Cu;
label_26842c:
    // 0x26842c: 0x0  nop
    ctx->pc = 0x26842cu;
    // NOP
    ctx->pc = 0x268430u;
}
