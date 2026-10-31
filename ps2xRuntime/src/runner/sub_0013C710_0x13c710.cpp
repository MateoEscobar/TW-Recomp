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

// Function: sub_0013C710
// Address: 0x13c710 - 0x13ccd8
void sub_0013C710_0x13c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C710_0x13c710");
#endif

    switch (ctx->pc) {
        case 0x13c710u: goto label_13c710;
        case 0x13c714u: goto label_13c714;
        case 0x13c718u: goto label_13c718;
        case 0x13c71cu: goto label_13c71c;
        case 0x13c720u: goto label_13c720;
        case 0x13c724u: goto label_13c724;
        case 0x13c728u: goto label_13c728;
        case 0x13c72cu: goto label_13c72c;
        case 0x13c730u: goto label_13c730;
        case 0x13c734u: goto label_13c734;
        case 0x13c738u: goto label_13c738;
        case 0x13c73cu: goto label_13c73c;
        case 0x13c740u: goto label_13c740;
        case 0x13c744u: goto label_13c744;
        case 0x13c748u: goto label_13c748;
        case 0x13c74cu: goto label_13c74c;
        case 0x13c750u: goto label_13c750;
        case 0x13c754u: goto label_13c754;
        case 0x13c758u: goto label_13c758;
        case 0x13c75cu: goto label_13c75c;
        case 0x13c760u: goto label_13c760;
        case 0x13c764u: goto label_13c764;
        case 0x13c768u: goto label_13c768;
        case 0x13c76cu: goto label_13c76c;
        case 0x13c770u: goto label_13c770;
        case 0x13c774u: goto label_13c774;
        case 0x13c778u: goto label_13c778;
        case 0x13c77cu: goto label_13c77c;
        case 0x13c780u: goto label_13c780;
        case 0x13c784u: goto label_13c784;
        case 0x13c788u: goto label_13c788;
        case 0x13c78cu: goto label_13c78c;
        case 0x13c790u: goto label_13c790;
        case 0x13c794u: goto label_13c794;
        case 0x13c798u: goto label_13c798;
        case 0x13c79cu: goto label_13c79c;
        case 0x13c7a0u: goto label_13c7a0;
        case 0x13c7a4u: goto label_13c7a4;
        case 0x13c7a8u: goto label_13c7a8;
        case 0x13c7acu: goto label_13c7ac;
        case 0x13c7b0u: goto label_13c7b0;
        case 0x13c7b4u: goto label_13c7b4;
        case 0x13c7b8u: goto label_13c7b8;
        case 0x13c7bcu: goto label_13c7bc;
        case 0x13c7c0u: goto label_13c7c0;
        case 0x13c7c4u: goto label_13c7c4;
        case 0x13c7c8u: goto label_13c7c8;
        case 0x13c7ccu: goto label_13c7cc;
        case 0x13c7d0u: goto label_13c7d0;
        case 0x13c7d4u: goto label_13c7d4;
        case 0x13c7d8u: goto label_13c7d8;
        case 0x13c7dcu: goto label_13c7dc;
        case 0x13c7e0u: goto label_13c7e0;
        case 0x13c7e4u: goto label_13c7e4;
        case 0x13c7e8u: goto label_13c7e8;
        case 0x13c7ecu: goto label_13c7ec;
        case 0x13c7f0u: goto label_13c7f0;
        case 0x13c7f4u: goto label_13c7f4;
        case 0x13c7f8u: goto label_13c7f8;
        case 0x13c7fcu: goto label_13c7fc;
        case 0x13c800u: goto label_13c800;
        case 0x13c804u: goto label_13c804;
        case 0x13c808u: goto label_13c808;
        case 0x13c80cu: goto label_13c80c;
        case 0x13c810u: goto label_13c810;
        case 0x13c814u: goto label_13c814;
        case 0x13c818u: goto label_13c818;
        case 0x13c81cu: goto label_13c81c;
        case 0x13c820u: goto label_13c820;
        case 0x13c824u: goto label_13c824;
        case 0x13c828u: goto label_13c828;
        case 0x13c82cu: goto label_13c82c;
        case 0x13c830u: goto label_13c830;
        case 0x13c834u: goto label_13c834;
        case 0x13c838u: goto label_13c838;
        case 0x13c83cu: goto label_13c83c;
        case 0x13c840u: goto label_13c840;
        case 0x13c844u: goto label_13c844;
        case 0x13c848u: goto label_13c848;
        case 0x13c84cu: goto label_13c84c;
        case 0x13c850u: goto label_13c850;
        case 0x13c854u: goto label_13c854;
        case 0x13c858u: goto label_13c858;
        case 0x13c85cu: goto label_13c85c;
        case 0x13c860u: goto label_13c860;
        case 0x13c864u: goto label_13c864;
        case 0x13c868u: goto label_13c868;
        case 0x13c86cu: goto label_13c86c;
        case 0x13c870u: goto label_13c870;
        case 0x13c874u: goto label_13c874;
        case 0x13c878u: goto label_13c878;
        case 0x13c87cu: goto label_13c87c;
        case 0x13c880u: goto label_13c880;
        case 0x13c884u: goto label_13c884;
        case 0x13c888u: goto label_13c888;
        case 0x13c88cu: goto label_13c88c;
        case 0x13c890u: goto label_13c890;
        case 0x13c894u: goto label_13c894;
        case 0x13c898u: goto label_13c898;
        case 0x13c89cu: goto label_13c89c;
        case 0x13c8a0u: goto label_13c8a0;
        case 0x13c8a4u: goto label_13c8a4;
        case 0x13c8a8u: goto label_13c8a8;
        case 0x13c8acu: goto label_13c8ac;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8b4u: goto label_13c8b4;
        case 0x13c8b8u: goto label_13c8b8;
        case 0x13c8bcu: goto label_13c8bc;
        case 0x13c8c0u: goto label_13c8c0;
        case 0x13c8c4u: goto label_13c8c4;
        case 0x13c8c8u: goto label_13c8c8;
        case 0x13c8ccu: goto label_13c8cc;
        case 0x13c8d0u: goto label_13c8d0;
        case 0x13c8d4u: goto label_13c8d4;
        case 0x13c8d8u: goto label_13c8d8;
        case 0x13c8dcu: goto label_13c8dc;
        case 0x13c8e0u: goto label_13c8e0;
        case 0x13c8e4u: goto label_13c8e4;
        case 0x13c8e8u: goto label_13c8e8;
        case 0x13c8ecu: goto label_13c8ec;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c8f4u: goto label_13c8f4;
        case 0x13c8f8u: goto label_13c8f8;
        case 0x13c8fcu: goto label_13c8fc;
        case 0x13c900u: goto label_13c900;
        case 0x13c904u: goto label_13c904;
        case 0x13c908u: goto label_13c908;
        case 0x13c90cu: goto label_13c90c;
        case 0x13c910u: goto label_13c910;
        case 0x13c914u: goto label_13c914;
        case 0x13c918u: goto label_13c918;
        case 0x13c91cu: goto label_13c91c;
        case 0x13c920u: goto label_13c920;
        case 0x13c924u: goto label_13c924;
        case 0x13c928u: goto label_13c928;
        case 0x13c92cu: goto label_13c92c;
        case 0x13c930u: goto label_13c930;
        case 0x13c934u: goto label_13c934;
        case 0x13c938u: goto label_13c938;
        case 0x13c93cu: goto label_13c93c;
        case 0x13c940u: goto label_13c940;
        case 0x13c944u: goto label_13c944;
        case 0x13c948u: goto label_13c948;
        case 0x13c94cu: goto label_13c94c;
        case 0x13c950u: goto label_13c950;
        case 0x13c954u: goto label_13c954;
        case 0x13c958u: goto label_13c958;
        case 0x13c95cu: goto label_13c95c;
        case 0x13c960u: goto label_13c960;
        case 0x13c964u: goto label_13c964;
        case 0x13c968u: goto label_13c968;
        case 0x13c96cu: goto label_13c96c;
        case 0x13c970u: goto label_13c970;
        case 0x13c974u: goto label_13c974;
        case 0x13c978u: goto label_13c978;
        case 0x13c97cu: goto label_13c97c;
        case 0x13c980u: goto label_13c980;
        case 0x13c984u: goto label_13c984;
        case 0x13c988u: goto label_13c988;
        case 0x13c98cu: goto label_13c98c;
        case 0x13c990u: goto label_13c990;
        case 0x13c994u: goto label_13c994;
        case 0x13c998u: goto label_13c998;
        case 0x13c99cu: goto label_13c99c;
        case 0x13c9a0u: goto label_13c9a0;
        case 0x13c9a4u: goto label_13c9a4;
        case 0x13c9a8u: goto label_13c9a8;
        case 0x13c9acu: goto label_13c9ac;
        case 0x13c9b0u: goto label_13c9b0;
        case 0x13c9b4u: goto label_13c9b4;
        case 0x13c9b8u: goto label_13c9b8;
        case 0x13c9bcu: goto label_13c9bc;
        case 0x13c9c0u: goto label_13c9c0;
        case 0x13c9c4u: goto label_13c9c4;
        case 0x13c9c8u: goto label_13c9c8;
        case 0x13c9ccu: goto label_13c9cc;
        case 0x13c9d0u: goto label_13c9d0;
        case 0x13c9d4u: goto label_13c9d4;
        case 0x13c9d8u: goto label_13c9d8;
        case 0x13c9dcu: goto label_13c9dc;
        case 0x13c9e0u: goto label_13c9e0;
        case 0x13c9e4u: goto label_13c9e4;
        case 0x13c9e8u: goto label_13c9e8;
        case 0x13c9ecu: goto label_13c9ec;
        case 0x13c9f0u: goto label_13c9f0;
        case 0x13c9f4u: goto label_13c9f4;
        case 0x13c9f8u: goto label_13c9f8;
        case 0x13c9fcu: goto label_13c9fc;
        case 0x13ca00u: goto label_13ca00;
        case 0x13ca04u: goto label_13ca04;
        case 0x13ca08u: goto label_13ca08;
        case 0x13ca0cu: goto label_13ca0c;
        case 0x13ca10u: goto label_13ca10;
        case 0x13ca14u: goto label_13ca14;
        case 0x13ca18u: goto label_13ca18;
        case 0x13ca1cu: goto label_13ca1c;
        case 0x13ca20u: goto label_13ca20;
        case 0x13ca24u: goto label_13ca24;
        case 0x13ca28u: goto label_13ca28;
        case 0x13ca2cu: goto label_13ca2c;
        case 0x13ca30u: goto label_13ca30;
        case 0x13ca34u: goto label_13ca34;
        case 0x13ca38u: goto label_13ca38;
        case 0x13ca3cu: goto label_13ca3c;
        case 0x13ca40u: goto label_13ca40;
        case 0x13ca44u: goto label_13ca44;
        case 0x13ca48u: goto label_13ca48;
        case 0x13ca4cu: goto label_13ca4c;
        case 0x13ca50u: goto label_13ca50;
        case 0x13ca54u: goto label_13ca54;
        case 0x13ca58u: goto label_13ca58;
        case 0x13ca5cu: goto label_13ca5c;
        case 0x13ca60u: goto label_13ca60;
        case 0x13ca64u: goto label_13ca64;
        case 0x13ca68u: goto label_13ca68;
        case 0x13ca6cu: goto label_13ca6c;
        case 0x13ca70u: goto label_13ca70;
        case 0x13ca74u: goto label_13ca74;
        case 0x13ca78u: goto label_13ca78;
        case 0x13ca7cu: goto label_13ca7c;
        case 0x13ca80u: goto label_13ca80;
        case 0x13ca84u: goto label_13ca84;
        case 0x13ca88u: goto label_13ca88;
        case 0x13ca8cu: goto label_13ca8c;
        case 0x13ca90u: goto label_13ca90;
        case 0x13ca94u: goto label_13ca94;
        case 0x13ca98u: goto label_13ca98;
        case 0x13ca9cu: goto label_13ca9c;
        case 0x13caa0u: goto label_13caa0;
        case 0x13caa4u: goto label_13caa4;
        case 0x13caa8u: goto label_13caa8;
        case 0x13caacu: goto label_13caac;
        case 0x13cab0u: goto label_13cab0;
        case 0x13cab4u: goto label_13cab4;
        case 0x13cab8u: goto label_13cab8;
        case 0x13cabcu: goto label_13cabc;
        case 0x13cac0u: goto label_13cac0;
        case 0x13cac4u: goto label_13cac4;
        case 0x13cac8u: goto label_13cac8;
        case 0x13caccu: goto label_13cacc;
        case 0x13cad0u: goto label_13cad0;
        case 0x13cad4u: goto label_13cad4;
        case 0x13cad8u: goto label_13cad8;
        case 0x13cadcu: goto label_13cadc;
        case 0x13cae0u: goto label_13cae0;
        case 0x13cae4u: goto label_13cae4;
        case 0x13cae8u: goto label_13cae8;
        case 0x13caecu: goto label_13caec;
        case 0x13caf0u: goto label_13caf0;
        case 0x13caf4u: goto label_13caf4;
        case 0x13caf8u: goto label_13caf8;
        case 0x13cafcu: goto label_13cafc;
        case 0x13cb00u: goto label_13cb00;
        case 0x13cb04u: goto label_13cb04;
        case 0x13cb08u: goto label_13cb08;
        case 0x13cb0cu: goto label_13cb0c;
        case 0x13cb10u: goto label_13cb10;
        case 0x13cb14u: goto label_13cb14;
        case 0x13cb18u: goto label_13cb18;
        case 0x13cb1cu: goto label_13cb1c;
        case 0x13cb20u: goto label_13cb20;
        case 0x13cb24u: goto label_13cb24;
        case 0x13cb28u: goto label_13cb28;
        case 0x13cb2cu: goto label_13cb2c;
        case 0x13cb30u: goto label_13cb30;
        case 0x13cb34u: goto label_13cb34;
        case 0x13cb38u: goto label_13cb38;
        case 0x13cb3cu: goto label_13cb3c;
        case 0x13cb40u: goto label_13cb40;
        case 0x13cb44u: goto label_13cb44;
        case 0x13cb48u: goto label_13cb48;
        case 0x13cb4cu: goto label_13cb4c;
        case 0x13cb50u: goto label_13cb50;
        case 0x13cb54u: goto label_13cb54;
        case 0x13cb58u: goto label_13cb58;
        case 0x13cb5cu: goto label_13cb5c;
        case 0x13cb60u: goto label_13cb60;
        case 0x13cb64u: goto label_13cb64;
        case 0x13cb68u: goto label_13cb68;
        case 0x13cb6cu: goto label_13cb6c;
        case 0x13cb70u: goto label_13cb70;
        case 0x13cb74u: goto label_13cb74;
        case 0x13cb78u: goto label_13cb78;
        case 0x13cb7cu: goto label_13cb7c;
        case 0x13cb80u: goto label_13cb80;
        case 0x13cb84u: goto label_13cb84;
        case 0x13cb88u: goto label_13cb88;
        case 0x13cb8cu: goto label_13cb8c;
        case 0x13cb90u: goto label_13cb90;
        case 0x13cb94u: goto label_13cb94;
        case 0x13cb98u: goto label_13cb98;
        case 0x13cb9cu: goto label_13cb9c;
        case 0x13cba0u: goto label_13cba0;
        case 0x13cba4u: goto label_13cba4;
        case 0x13cba8u: goto label_13cba8;
        case 0x13cbacu: goto label_13cbac;
        case 0x13cbb0u: goto label_13cbb0;
        case 0x13cbb4u: goto label_13cbb4;
        case 0x13cbb8u: goto label_13cbb8;
        case 0x13cbbcu: goto label_13cbbc;
        case 0x13cbc0u: goto label_13cbc0;
        case 0x13cbc4u: goto label_13cbc4;
        case 0x13cbc8u: goto label_13cbc8;
        case 0x13cbccu: goto label_13cbcc;
        case 0x13cbd0u: goto label_13cbd0;
        case 0x13cbd4u: goto label_13cbd4;
        case 0x13cbd8u: goto label_13cbd8;
        case 0x13cbdcu: goto label_13cbdc;
        case 0x13cbe0u: goto label_13cbe0;
        case 0x13cbe4u: goto label_13cbe4;
        case 0x13cbe8u: goto label_13cbe8;
        case 0x13cbecu: goto label_13cbec;
        case 0x13cbf0u: goto label_13cbf0;
        case 0x13cbf4u: goto label_13cbf4;
        case 0x13cbf8u: goto label_13cbf8;
        case 0x13cbfcu: goto label_13cbfc;
        case 0x13cc00u: goto label_13cc00;
        case 0x13cc04u: goto label_13cc04;
        case 0x13cc08u: goto label_13cc08;
        case 0x13cc0cu: goto label_13cc0c;
        case 0x13cc10u: goto label_13cc10;
        case 0x13cc14u: goto label_13cc14;
        case 0x13cc18u: goto label_13cc18;
        case 0x13cc1cu: goto label_13cc1c;
        case 0x13cc20u: goto label_13cc20;
        case 0x13cc24u: goto label_13cc24;
        case 0x13cc28u: goto label_13cc28;
        case 0x13cc2cu: goto label_13cc2c;
        case 0x13cc30u: goto label_13cc30;
        case 0x13cc34u: goto label_13cc34;
        case 0x13cc38u: goto label_13cc38;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc40u: goto label_13cc40;
        case 0x13cc44u: goto label_13cc44;
        case 0x13cc48u: goto label_13cc48;
        case 0x13cc4cu: goto label_13cc4c;
        case 0x13cc50u: goto label_13cc50;
        case 0x13cc54u: goto label_13cc54;
        case 0x13cc58u: goto label_13cc58;
        case 0x13cc5cu: goto label_13cc5c;
        case 0x13cc60u: goto label_13cc60;
        case 0x13cc64u: goto label_13cc64;
        case 0x13cc68u: goto label_13cc68;
        case 0x13cc6cu: goto label_13cc6c;
        case 0x13cc70u: goto label_13cc70;
        case 0x13cc74u: goto label_13cc74;
        case 0x13cc78u: goto label_13cc78;
        case 0x13cc7cu: goto label_13cc7c;
        case 0x13cc80u: goto label_13cc80;
        case 0x13cc84u: goto label_13cc84;
        case 0x13cc88u: goto label_13cc88;
        case 0x13cc8cu: goto label_13cc8c;
        case 0x13cc90u: goto label_13cc90;
        case 0x13cc94u: goto label_13cc94;
        case 0x13cc98u: goto label_13cc98;
        case 0x13cc9cu: goto label_13cc9c;
        case 0x13cca0u: goto label_13cca0;
        case 0x13cca4u: goto label_13cca4;
        case 0x13cca8u: goto label_13cca8;
        case 0x13ccacu: goto label_13ccac;
        case 0x13ccb0u: goto label_13ccb0;
        case 0x13ccb4u: goto label_13ccb4;
        case 0x13ccb8u: goto label_13ccb8;
        case 0x13ccbcu: goto label_13ccbc;
        case 0x13ccc0u: goto label_13ccc0;
        case 0x13ccc4u: goto label_13ccc4;
        case 0x13ccc8u: goto label_13ccc8;
        case 0x13ccccu: goto label_13cccc;
        case 0x13ccd0u: goto label_13ccd0;
        case 0x13ccd4u: goto label_13ccd4;
        default: break;
    }

    ctx->pc = 0x13c710u;

label_13c710:
    // 0x13c710: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_13c714:
    // 0x13c714: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x13c714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_13c718:
    // 0x13c718: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13c718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c71c:
    // 0x13c71c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x13c71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_13c720:
    // 0x13c720: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x13c720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_13c724:
    // 0x13c724: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13c724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13c728:
    // 0x13c728: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x13c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_13c72c:
    // 0x13c72c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c730:
    // 0x13c730: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x13c730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_13c734:
    // 0x13c734: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x13c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_13c738:
    // 0x13c738: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x13c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_13c73c:
    // 0x13c73c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x13c73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_13c740:
    // 0x13c740: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x13c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_13c744:
    // 0x13c744: 0xc047e72  jal         func_11F9C8
label_13c748:
    if (ctx->pc == 0x13C748u) {
        ctx->pc = 0x13C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C744u;
        // 0x13c748: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C74Cu;
        goto label_13c74c;
    }
    ctx->pc = 0x13C744u;
    SET_GPR_U32(ctx, 31, 0x13C74Cu);
    ctx->pc = 0x13C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C744u;
    // 0x13c748: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x13C744u, 0x13C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C74Cu;
label_13c74c:
    // 0x13c74c: 0x54520155  bnel        $v0, $s2, . + 4 + (0x155 << 2)
label_13c750:
    if (ctx->pc == 0x13C750u) {
        ctx->pc = 0x13C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C74Cu;
        // 0x13c750: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C754u;
        goto label_13c754;
    }
    ctx->pc = 0x13C74Cu;
    {
        const bool branch_taken_0x13c74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x13c74c) {
            ctx->pc = 0x13C750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C74Cu;
            // 0x13c750: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13C754u;
label_13c754:
    // 0x13c754: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_13c758:
    // 0x13c758: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x13c758u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13c75c:
    // 0x13c75c: 0x8c63b19c  lw          $v1, -0x4E64($v1)
    ctx->pc = 0x13c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_13c760:
    // 0x13c760: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x13c760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13c764:
    // 0x13c764: 0x5440014f  bnel        $v0, $zero, . + 4 + (0x14F << 2)
label_13c768:
    if (ctx->pc == 0x13C768u) {
        ctx->pc = 0x13C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C764u;
        // 0x13c768: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C76Cu;
        goto label_13c76c;
    }
    ctx->pc = 0x13C764u;
    {
        const bool branch_taken_0x13c764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c764) {
            ctx->pc = 0x13C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C764u;
            // 0x13c768: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13C76Cu;
label_13c76c:
    // 0x13c76c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x13c76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_13c770:
    // 0x13c770: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
label_13c774:
    if (ctx->pc == 0x13C774u) {
        ctx->pc = 0x13C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C770u;
        // 0x13c774: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C778u;
        goto label_13c778;
    }
    ctx->pc = 0x13C770u;
    {
        const bool branch_taken_0x13c770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C770u;
        // 0x13c774: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c770) {
            ctx->pc = 0x13CCA0u;
            goto label_13cca0;
        }
    }
    ctx->pc = 0x13C778u;
label_13c778:
    // 0x13c778: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_13c77c:
    // 0x13c77c: 0xc0e409a  jal         func_390268
label_13c780:
    if (ctx->pc == 0x13C780u) {
        ctx->pc = 0x13C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C77Cu;
        // 0x13c780: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C784u;
        goto label_13c784;
    }
    ctx->pc = 0x13C77Cu;
    SET_GPR_U32(ctx, 31, 0x13C784u);
    ctx->pc = 0x13C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C77Cu;
    // 0x13c780: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13C77Cu, 0x13C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C784u;
label_13c784:
    // 0x13c784: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x13c784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_13c788:
    // 0x13c788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c78c:
    // 0x13c78c: 0xc0e409a  jal         func_390268
label_13c790:
    if (ctx->pc == 0x13C790u) {
        ctx->pc = 0x13C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C78Cu;
        // 0x13c790: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C794u;
        goto label_13c794;
    }
    ctx->pc = 0x13C78Cu;
    SET_GPR_U32(ctx, 31, 0x13C794u);
    ctx->pc = 0x13C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C78Cu;
    // 0x13c790: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13C78Cu, 0x13C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C794u;
label_13c794:
    // 0x13c794: 0x12200143  beqz        $s1, . + 4 + (0x143 << 2)
label_13c798:
    if (ctx->pc == 0x13C798u) {
        ctx->pc = 0x13C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C794u;
        // 0x13c798: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C79Cu;
        goto label_13c79c;
    }
    ctx->pc = 0x13C794u;
    {
        const bool branch_taken_0x13c794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C794u;
        // 0x13c798: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c794) {
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13C79Cu;
label_13c79c:
    // 0x13c79c: 0x10600141  beqz        $v1, . + 4 + (0x141 << 2)
label_13c7a0:
    if (ctx->pc == 0x13C7A0u) {
        ctx->pc = 0x13C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C79Cu;
        // 0x13c7a0: 0x3c080071  lui         $t0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7A4u;
        goto label_13c7a4;
    }
    ctx->pc = 0x13C79Cu;
    {
        const bool branch_taken_0x13c79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C79Cu;
        // 0x13c7a0: 0x3c080071  lui         $t0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c79c) {
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13C7A4u;
label_13c7a4:
    // 0x13c7a4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x13c7a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_13c7a8:
    // 0x13c7a8: 0x25084b00  addiu       $t0, $t0, 0x4B00
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19200));
label_13c7ac:
    // 0x13c7ac: 0xc6420328  lwc1        $f2, 0x328($s2)
    ctx->pc = 0x13c7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13c7b0:
    // 0x13c7b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13c7b4:
    // 0x13c7b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13c7b8:
    // 0x13c7b8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_13c7bc:
    // 0x13c7bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c7c0:
    // 0x13c7c0: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x13c7c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13c7c4:
    // 0x13c7c4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13c7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13c7c8:
    // 0x13c7c8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x13c7c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c7cc:
    // 0x13c7cc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x13c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_13c7d0:
    // 0x13c7d0: 0x84630092  lh          $v1, 0x92($v1)
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_13c7d4:
    // 0x13c7d4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x13c7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13c7d8:
    // 0x13c7d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_13c7dc:
    // 0x13c7dc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x13c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_13c7e0:
    // 0x13c7e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13c7e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_13c7e4:
    // 0x13c7e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13c7e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13c7e8:
    // 0x13c7e8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13c7ec:
    // 0x13c7ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x13c7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_13c7f0:
    // 0x13c7f0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13c7f4:
    // 0x13c7f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13c7f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_13c7f8:
    // 0x13c7f8: 0xc136afa  jal         func_4DABE8
label_13c7fc:
    if (ctx->pc == 0x13C7FCu) {
        ctx->pc = 0x13C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F8u;
        // 0x13c7fc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C800u;
        goto label_13c800;
    }
    ctx->pc = 0x13C7F8u;
    SET_GPR_U32(ctx, 31, 0x13C800u);
    ctx->pc = 0x13C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7F8u;
    // 0x13c7fc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13C7F8u, 0x13C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C800u;
label_13c800:
    // 0x13c800: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13c804:
    // 0x13c804: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13c804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13c808:
    // 0x13c808: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13c808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13c80c:
    // 0x13c80c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13c80cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13c810:
    // 0x13c810: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13c810u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13c814:
    // 0x13c814: 0x3c014261  lui         $at, 0x4261
    ctx->pc = 0x13c814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16993 << 16));
label_13c818:
    // 0x13c818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13c81c:
    // 0x13c81c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13c81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13c820:
    // 0x13c820: 0x0  nop
    ctx->pc = 0x13c820u;
    // NOP
label_13c824:
    // 0x13c824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13c824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13c828:
    // 0x13c828: 0x0  nop
    ctx->pc = 0x13c828u;
    // NOP
label_13c82c:
    // 0x13c82c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_13c830:
    if (ctx->pc == 0x13C830u) {
        ctx->pc = 0x13C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C82Cu;
        // 0x13c830: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C834u;
        goto label_13c834;
    }
    ctx->pc = 0x13C82Cu;
    {
        const bool branch_taken_0x13c82c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C82Cu;
        // 0x13c830: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c82c) {
            ctx->pc = 0x13C838u;
            goto label_13c838;
        }
    }
    ctx->pc = 0x13C834u;
label_13c834:
    // 0x13c834: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13c834u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c838:
    // 0x13c838: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x13c838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
label_13c83c:
    // 0x13c83c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13c840:
    // 0x13c840: 0x0  nop
    ctx->pc = 0x13c840u;
    // NOP
label_13c844:
    // 0x13c844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13c844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13c848:
    // 0x13c848: 0x0  nop
    ctx->pc = 0x13c848u;
    // NOP
label_13c84c:
    // 0x13c84c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_13c850:
    if (ctx->pc == 0x13C850u) {
        ctx->pc = 0x13C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C84Cu;
        // 0x13c850: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C854u;
        goto label_13c854;
    }
    ctx->pc = 0x13C84Cu;
    {
        const bool branch_taken_0x13c84c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C84Cu;
        // 0x13c850: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c84c) {
            ctx->pc = 0x13C858u;
            goto label_13c858;
        }
    }
    ctx->pc = 0x13C854u;
label_13c854:
    // 0x13c854: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c858:
    // 0x13c858: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x13c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_13c85c:
    // 0x13c85c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c860:
    // 0x13c860: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x13c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_13c864:
    // 0x13c864: 0x2444deb8  addiu       $a0, $v0, -0x2148
    ctx->pc = 0x13c864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_13c868:
    // 0x13c868: 0x8c6201f8  lw          $v0, 0x1F8($v1)
    ctx->pc = 0x13c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
label_13c86c:
    // 0x13c86c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_13c870:
    if (ctx->pc == 0x13C870u) {
        ctx->pc = 0x13C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C86Cu;
        // 0x13c870: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C874u;
        goto label_13c874;
    }
    ctx->pc = 0x13C86Cu;
    {
        const bool branch_taken_0x13c86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C86Cu;
        // 0x13c870: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c86c) {
            ctx->pc = 0x13C884u;
            goto label_13c884;
        }
    }
    ctx->pc = 0x13C874u;
label_13c874:
    // 0x13c874: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_13c878:
    // 0x13c878: 0x8c4301f8  lw          $v1, 0x1F8($v0)
    ctx->pc = 0x13c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
label_13c87c:
    // 0x13c87c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_13c880:
    if (ctx->pc == 0x13C880u) {
        ctx->pc = 0x13C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C87Cu;
        // 0x13c880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C884u;
        goto label_13c884;
    }
    ctx->pc = 0x13C87Cu;
    {
        const bool branch_taken_0x13c87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C87Cu;
        // 0x13c880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c87c) {
            ctx->pc = 0x13C88Cu;
            goto label_13c88c;
        }
    }
    ctx->pc = 0x13C884u;
label_13c884:
    // 0x13c884: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x13c884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c888:
    // 0x13c888: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13c888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13c88c:
    // 0x13c88c: 0x8ec4b19c  lw          $a0, -0x4E64($s6)
    ctx->pc = 0x13c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947228)));
label_13c890:
    // 0x13c890: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x13c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_13c894:
    // 0x13c894: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
label_13c898:
    if (ctx->pc == 0x13C898u) {
        ctx->pc = 0x13C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C894u;
        // 0x13c898: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C89Cu;
        goto label_13c89c;
    }
    ctx->pc = 0x13C894u;
    {
        const bool branch_taken_0x13c894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C894u;
        // 0x13c898: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c894) {
            ctx->pc = 0x13C8ECu;
            goto label_13c8ec;
        }
    }
    ctx->pc = 0x13C89Cu;
label_13c89c:
    // 0x13c89c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13c8a0:
    // 0x13c8a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c8a4:
    // 0x13c8a4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13c8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_13c8a8:
    // 0x13c8a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13c8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_13c8ac:
    // 0x13c8ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13c8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13c8b0:
    // 0x13c8b0: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_13c8b4:
    // 0x13c8b4: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x13c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_13c8b8:
    // 0x13c8b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13c8b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13c8bc:
    // 0x13c8bc: 0x40f809  jalr        $v0
label_13c8c0:
    if (ctx->pc == 0x13C8C0u) {
        ctx->pc = 0x13C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8BCu;
        // 0x13c8c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8C4u;
        goto label_13c8c4;
    }
    ctx->pc = 0x13C8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C8C4u);
        ctx->pc = 0x13C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8BCu;
        // 0x13c8c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8BCu, 0x13C8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C8C4u;
label_13c8c4:
    // 0x13c8c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13c8c8:
    // 0x13c8c8: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x13c8c8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13c8cc:
    // 0x13c8cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13c8ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13c8d0:
    // 0x13c8d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13c8d4:
    // 0x13c8d4: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x13c8d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_13c8d8:
    // 0x13c8d8: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x13c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_13c8dc:
    // 0x13c8dc: 0x40f809  jalr        $v0
label_13c8e0:
    if (ctx->pc == 0x13C8E0u) {
        ctx->pc = 0x13C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8DCu;
        // 0x13c8e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8E4u;
        goto label_13c8e4;
    }
    ctx->pc = 0x13C8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C8E4u);
        ctx->pc = 0x13C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8DCu;
        // 0x13c8e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8DCu, 0x13C8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C8E4u;
label_13c8e4:
    // 0x13c8e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_13c8e8:
    if (ctx->pc == 0x13C8E8u) {
        ctx->pc = 0x13C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8E4u;
        // 0x13c8e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8ECu;
        goto label_13c8ec;
    }
    ctx->pc = 0x13C8E4u;
    {
        const bool branch_taken_0x13c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8E4u;
        // 0x13c8e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8e4) {
            ctx->pc = 0x13C940u;
            goto label_13c940;
        }
    }
    ctx->pc = 0x13C8ECu;
label_13c8ec:
    // 0x13c8ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13c8f0:
    // 0x13c8f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c8f4:
    // 0x13c8f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13c8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_13c8f8:
    // 0x13c8f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13c8f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_13c8fc:
    // 0x13c8fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13c8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13c900:
    // 0x13c900: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x13c900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_13c904:
    // 0x13c904: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x13c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_13c908:
    // 0x13c908: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13c908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13c90c:
    // 0x13c90c: 0x40f809  jalr        $v0
label_13c910:
    if (ctx->pc == 0x13C910u) {
        ctx->pc = 0x13C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C90Cu;
        // 0x13c910: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C914u;
        goto label_13c914;
    }
    ctx->pc = 0x13C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C914u);
        ctx->pc = 0x13C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C90Cu;
        // 0x13c910: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C90Cu, 0x13C914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C914u;
label_13c914:
    // 0x13c914: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13c918:
    // 0x13c918: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x13c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_13c91c:
    // 0x13c91c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x13c91cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c920:
    // 0x13c920: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13c920u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13c924:
    // 0x13c924: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x13c924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_13c928:
    // 0x13c928: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13c92c:
    // 0x13c92c: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x13c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_13c930:
    // 0x13c930: 0x40f809  jalr        $v0
label_13c934:
    if (ctx->pc == 0x13C934u) {
        ctx->pc = 0x13C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C930u;
        // 0x13c934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C938u;
        goto label_13c938;
    }
    ctx->pc = 0x13C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C938u);
        ctx->pc = 0x13C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C930u;
        // 0x13c934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C930u, 0x13C938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C938u;
label_13c938:
    // 0x13c938: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x13c938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_13c93c:
    // 0x13c93c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c93cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c940:
    // 0x13c940: 0x1260006a  beqz        $s3, . + 4 + (0x6A << 2)
label_13c944:
    if (ctx->pc == 0x13C944u) {
        ctx->pc = 0x13C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C940u;
        // 0x13c944: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C948u;
        goto label_13c948;
    }
    ctx->pc = 0x13C940u;
    {
        const bool branch_taken_0x13c940 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C940u;
        // 0x13c944: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c940) {
            ctx->pc = 0x13CAECu;
            goto label_13caec;
        }
    }
    ctx->pc = 0x13C948u;
label_13c948:
    // 0x13c948: 0x12000069  beqz        $s0, . + 4 + (0x69 << 2)
label_13c94c:
    if (ctx->pc == 0x13C94Cu) {
        ctx->pc = 0x13C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C948u;
        // 0x13c94c: 0x8ec3b198  lw          $v1, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C950u;
        goto label_13c950;
    }
    ctx->pc = 0x13C948u;
    {
        const bool branch_taken_0x13c948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C948u;
        // 0x13c94c: 0x8ec3b198  lw          $v1, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c948) {
            ctx->pc = 0x13CAF0u;
            goto label_13caf0;
        }
    }
    ctx->pc = 0x13C950u;
label_13c950:
    // 0x13c950: 0x12a00068  beqz        $s5, . + 4 + (0x68 << 2)
label_13c954:
    if (ctx->pc == 0x13C954u) {
        ctx->pc = 0x13C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C950u;
        // 0x13c954: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C958u;
        goto label_13c958;
    }
    ctx->pc = 0x13C950u;
    {
        const bool branch_taken_0x13c950 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C950u;
        // 0x13c954: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c950) {
            ctx->pc = 0x13CAF4u;
            goto label_13caf4;
        }
    }
    ctx->pc = 0x13C958u;
label_13c958:
    // 0x13c958: 0x16800066  bnez        $s4, . + 4 + (0x66 << 2)
label_13c95c:
    if (ctx->pc == 0x13C95Cu) {
        ctx->pc = 0x13C960u;
        goto label_13c960;
    }
    ctx->pc = 0x13C958u;
    {
        const bool branch_taken_0x13c958 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c958) {
            ctx->pc = 0x13CAF4u;
            goto label_13caf4;
        }
    }
    ctx->pc = 0x13C960u;
label_13c960:
    // 0x13c960: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13c964:
    // 0x13c964: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_13c968:
    // 0x13c968: 0x24479288  addiu       $a3, $v0, -0x6D78
    ctx->pc = 0x13c968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939272));
label_13c96c:
    // 0x13c96c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x13c96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_13c970:
    // 0x13c970: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x13c970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13c974:
    // 0x13c974: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x13c974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_13c978:
    // 0x13c978: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x13c978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_13c97c:
    // 0x13c97c: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x13c97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13c980:
    // 0x13c980: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x13c980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13c984:
    // 0x13c984: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x13c984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13c988:
    // 0x13c988: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x13c988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13c98c:
    // 0x13c98c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x13c98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13c990:
    // 0x13c990: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13c990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13c994:
    // 0x13c994: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13c998:
    // 0x13c998: 0x40f809  jalr        $v0
label_13c99c:
    if (ctx->pc == 0x13C99Cu) {
        ctx->pc = 0x13C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C998u;
        // 0x13c99c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9A0u;
        goto label_13c9a0;
    }
    ctx->pc = 0x13C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C9A0u);
        ctx->pc = 0x13C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C998u;
        // 0x13c99c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C998u, 0x13C9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C9A0u;
label_13c9a0:
    // 0x13c9a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13c9a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13c9a4:
    // 0x13c9a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13c9a8:
    // 0x13c9a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13c9a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13c9ac:
    // 0x13c9ac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13c9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13c9b0:
    // 0x13c9b0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x13c9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_13c9b4:
    // 0x13c9b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13c9b8:
    // 0x13c9b8: 0xc136afa  jal         func_4DABE8
label_13c9bc:
    if (ctx->pc == 0x13C9BCu) {
        ctx->pc = 0x13C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9B8u;
        // 0x13c9bc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9C0u;
        goto label_13c9c0;
    }
    ctx->pc = 0x13C9B8u;
    SET_GPR_U32(ctx, 31, 0x13C9C0u);
    ctx->pc = 0x13C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9B8u;
    // 0x13c9bc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13C9B8u, 0x13C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9C0u;
label_13c9c0:
    // 0x13c9c0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x13c9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13c9c4:
    // 0x13c9c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13c9c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13c9c8:
    // 0x13c9c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13c9c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13c9cc:
    // 0x13c9cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13c9ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13c9d0:
    // 0x13c9d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13c9d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13c9d4:
    // 0x13c9d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13c9d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13c9d8:
    // 0x13c9d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x13c9d8u;
    // VWAITQ (Q already resolved in this runtime)
label_13c9dc:
    // 0x13c9dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13c9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13c9e0:
    // 0x13c9e0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13c9e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13c9e4:
    // 0x13c9e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13c9e8:
    // 0x13c9e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13c9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13c9ec:
    // 0x13c9ec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13c9f0:
    // 0x13c9f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13c9f4:
    // 0x13c9f4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13c9f8:
    // 0x13c9f8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_13c9fc:
    if (ctx->pc == 0x13C9FCu) {
        ctx->pc = 0x13C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9F8u;
        // 0x13c9fc: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA00u;
        goto label_13ca00;
    }
    ctx->pc = 0x13C9F8u;
    {
        const bool branch_taken_0x13c9f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9F8u;
        // 0x13c9fc: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9f8) {
            ctx->pc = 0x13CA40u;
            goto label_13ca40;
        }
    }
    ctx->pc = 0x13CA00u;
label_13ca00:
    // 0x13ca00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ca00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13ca04:
    // 0x13ca04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13ca04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13ca08:
    // 0x13ca08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13ca0c:
    // 0x13ca0c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x13ca0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
label_13ca10:
    // 0x13ca10: 0xc136b24  jal         func_4DAC90
label_13ca14:
    if (ctx->pc == 0x13CA14u) {
        ctx->pc = 0x13CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA10u;
        // 0x13ca14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA18u;
        goto label_13ca18;
    }
    ctx->pc = 0x13CA10u;
    SET_GPR_U32(ctx, 31, 0x13CA18u);
    ctx->pc = 0x13CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA10u;
    // 0x13ca14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13CA10u, 0x13CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA18u;
label_13ca18:
    // 0x13ca18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13ca18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ca1c:
    // 0x13ca1c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x13ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_13ca20:
    // 0x13ca20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13ca24:
    // 0x13ca24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13ca28:
    // 0x13ca28: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13ca28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ca2c:
    // 0x13ca2c: 0xc0d4336  jal         func_350CD8
label_13ca30:
    if (ctx->pc == 0x13CA30u) {
        ctx->pc = 0x13CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA2Cu;
        // 0x13ca30: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA34u;
        goto label_13ca34;
    }
    ctx->pc = 0x13CA2Cu;
    SET_GPR_U32(ctx, 31, 0x13CA34u);
    ctx->pc = 0x13CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA2Cu;
    // 0x13ca30: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x13CA2Cu, 0x13CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA34u;
label_13ca34:
    // 0x13ca34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13ca38:
    // 0x13ca38: 0x10000002  b           . + 4 + (0x2 << 2)
label_13ca3c:
    if (ctx->pc == 0x13CA3Cu) {
        ctx->pc = 0x13CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA38u;
        // 0x13ca3c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA40u;
        goto label_13ca40;
    }
    ctx->pc = 0x13CA38u;
    {
        const bool branch_taken_0x13ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA38u;
        // 0x13ca3c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca38) {
            ctx->pc = 0x13CA44u;
            goto label_13ca44;
        }
    }
    ctx->pc = 0x13CA40u;
label_13ca40:
    // 0x13ca40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13ca40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ca44:
    // 0x13ca44: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13ca44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ca48:
    // 0x13ca48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ca4c:
    // 0x13ca4c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13ca50:
    // 0x13ca50: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13ca54:
    // 0x13ca54: 0xc136afa  jal         func_4DABE8
label_13ca58:
    if (ctx->pc == 0x13CA58u) {
        ctx->pc = 0x13CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA54u;
        // 0x13ca58: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA5Cu;
        goto label_13ca5c;
    }
    ctx->pc = 0x13CA54u;
    SET_GPR_U32(ctx, 31, 0x13CA5Cu);
    ctx->pc = 0x13CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA54u;
    // 0x13ca58: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13CA54u, 0x13CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA5Cu;
label_13ca5c:
    // 0x13ca5c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13ca5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13ca60:
    // 0x13ca60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ca60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ca64:
    // 0x13ca64: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13ca64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ca68:
    // 0x13ca68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ca68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ca6c:
    // 0x13ca6c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13ca6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ca70:
    // 0x13ca70: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ca70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ca74:
    // 0x13ca74: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ca74u;
    // VWAITQ (Q already resolved in this runtime)
label_13ca78:
    // 0x13ca78: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ca78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ca7c:
    // 0x13ca7c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13ca7cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ca80:
    // 0x13ca80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ca80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ca84:
    // 0x13ca84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13ca84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13ca88:
    // 0x13ca88: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x13ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_13ca8c:
    // 0x13ca8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13ca8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ca90:
    // 0x13ca90: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13ca94:
    // 0x13ca94: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_13ca98:
    if (ctx->pc == 0x13CA98u) {
        ctx->pc = 0x13CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA94u;
        // 0x13ca98: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA9Cu;
        goto label_13ca9c;
    }
    ctx->pc = 0x13CA94u;
    {
        const bool branch_taken_0x13ca94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA94u;
        // 0x13ca98: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca94) {
            ctx->pc = 0x13CAE8u;
            goto label_13cae8;
        }
    }
    ctx->pc = 0x13CA9Cu;
label_13ca9c:
    // 0x13ca9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13caa0:
    // 0x13caa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13caa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13caa4:
    // 0x13caa4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13caa8:
    // 0x13caa8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x13caa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
label_13caac:
    // 0x13caac: 0xc136b24  jal         func_4DAC90
label_13cab0:
    if (ctx->pc == 0x13CAB0u) {
        ctx->pc = 0x13CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAACu;
        // 0x13cab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAB4u;
        goto label_13cab4;
    }
    ctx->pc = 0x13CAACu;
    SET_GPR_U32(ctx, 31, 0x13CAB4u);
    ctx->pc = 0x13CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAACu;
    // 0x13cab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13CAACu, 0x13CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAB4u;
label_13cab4:
    // 0x13cab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13cab8:
    // 0x13cab8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x13cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_13cabc:
    // 0x13cabc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x13cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13cac0:
    // 0x13cac0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13cac4:
    // 0x13cac4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13cac8:
    // 0x13cac8: 0xc0d4336  jal         func_350CD8
label_13cacc:
    if (ctx->pc == 0x13CACCu) {
        ctx->pc = 0x13CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAC8u;
        // 0x13cacc: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAD0u;
        goto label_13cad0;
    }
    ctx->pc = 0x13CAC8u;
    SET_GPR_U32(ctx, 31, 0x13CAD0u);
    ctx->pc = 0x13CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAC8u;
    // 0x13cacc: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x13CAC8u, 0x13CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAD0u;
label_13cad0:
    // 0x13cad0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_13cad4:
    if (ctx->pc == 0x13CAD4u) {
        ctx->pc = 0x13CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD0u;
        // 0x13cad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAD8u;
        goto label_13cad8;
    }
    ctx->pc = 0x13CAD0u;
    {
        const bool branch_taken_0x13cad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD0u;
        // 0x13cad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cad0) {
            ctx->pc = 0x13CAE0u;
            goto label_13cae0;
        }
    }
    ctx->pc = 0x13CAD8u;
label_13cad8:
    // 0x13cad8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13cadc:
    // 0x13cadc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13cadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13cae0:
    // 0x13cae0: 0x10000002  b           . + 4 + (0x2 << 2)
label_13cae4:
    if (ctx->pc == 0x13CAE4u) {
        ctx->pc = 0x13CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAE0u;
        // 0x13cae4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAE8u;
        goto label_13cae8;
    }
    ctx->pc = 0x13CAE0u;
    {
        const bool branch_taken_0x13cae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAE0u;
        // 0x13cae4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cae0) {
            ctx->pc = 0x13CAECu;
            goto label_13caec;
        }
    }
    ctx->pc = 0x13CAE8u;
label_13cae8:
    // 0x13cae8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13caec:
    // 0x13caec: 0x8ec3b198  lw          $v1, -0x4E68($s6)
    ctx->pc = 0x13caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
label_13caf0:
    // 0x13caf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13caf4:
    // 0x13caf4: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_13caf8:
    if (ctx->pc == 0x13CAF8u) {
        ctx->pc = 0x13CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAF4u;
        // 0x13caf8: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAFCu;
        goto label_13cafc;
    }
    ctx->pc = 0x13CAF4u;
    {
        const bool branch_taken_0x13caf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAF4u;
        // 0x13caf8: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13caf4) {
            ctx->pc = 0x13CBF4u;
            goto label_13cbf4;
        }
    }
    ctx->pc = 0x13CAFCu;
label_13cafc:
    // 0x13cafc: 0xc047e72  jal         func_11F9C8
label_13cb00:
    if (ctx->pc == 0x13CB00u) {
        ctx->pc = 0x13CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAFCu;
        // 0x13cb00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB04u;
        goto label_13cb04;
    }
    ctx->pc = 0x13CAFCu;
    SET_GPR_U32(ctx, 31, 0x13CB04u);
    ctx->pc = 0x13CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAFCu;
    // 0x13cb00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x13CAFCu, 0x13CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB04u;
label_13cb04:
    // 0x13cb04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cb08:
    // 0x13cb08: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x13cb08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_13cb0c:
    // 0x13cb0c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x13cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_13cb10:
    // 0x13cb10: 0xa0f809  jalr        $a1
label_13cb14:
    if (ctx->pc == 0x13CB14u) {
        ctx->pc = 0x13CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB10u;
        // 0x13cb14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB18u;
        goto label_13cb18;
    }
    ctx->pc = 0x13CB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13CB18u);
        ctx->pc = 0x13CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB10u;
        // 0x13cb14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB10u, 0x13CB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CB18u;
label_13cb18:
    // 0x13cb18: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x13cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_13cb1c:
    // 0x13cb1c: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
label_13cb20:
    if (ctx->pc == 0x13CB20u) {
        ctx->pc = 0x13CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB1Cu;
        // 0x13cb20: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB24u;
        goto label_13cb24;
    }
    ctx->pc = 0x13CB1Cu;
    {
        const bool branch_taken_0x13cb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB1Cu;
        // 0x13cb20: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb1c) {
            ctx->pc = 0x13CBF4u;
            goto label_13cbf4;
        }
    }
    ctx->pc = 0x13CB24u;
label_13cb24:
    // 0x13cb24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_13cb28:
    // 0x13cb28: 0x8c62b1c8  lw          $v0, -0x4E38($v1)
    ctx->pc = 0x13cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947272)));
label_13cb2c:
    // 0x13cb2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13cb30:
    if (ctx->pc == 0x13CB30u) {
        ctx->pc = 0x13CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB2Cu;
        // 0x13cb30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB34u;
        goto label_13cb34;
    }
    ctx->pc = 0x13CB2Cu;
    {
        const bool branch_taken_0x13cb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB2Cu;
        // 0x13cb30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb2c) {
            ctx->pc = 0x13CB40u;
            goto label_13cb40;
        }
    }
    ctx->pc = 0x13CB34u;
label_13cb34:
    // 0x13cb34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13cb38:
    // 0x13cb38: 0x8c43b1c4  lw          $v1, -0x4E3C($v0)
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_13cb3c:
    // 0x13cb3c: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x13cb3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13cb40:
    // 0x13cb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cb44:
    // 0x13cb44: 0x5482002b  bnel        $a0, $v0, . + 4 + (0x2B << 2)
label_13cb48:
    if (ctx->pc == 0x13CB48u) {
        ctx->pc = 0x13CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB44u;
        // 0x13cb48: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB4Cu;
        goto label_13cb4c;
    }
    ctx->pc = 0x13CB44u;
    {
        const bool branch_taken_0x13cb44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13cb44) {
            ctx->pc = 0x13CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CB44u;
            // 0x13cb48: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CBF4u;
            goto label_13cbf4;
        }
    }
    ctx->pc = 0x13CB4Cu;
label_13cb4c:
    // 0x13cb4c: 0x56800029  bnel        $s4, $zero, . + 4 + (0x29 << 2)
label_13cb50:
    if (ctx->pc == 0x13CB50u) {
        ctx->pc = 0x13CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB4Cu;
        // 0x13cb50: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB54u;
        goto label_13cb54;
    }
    ctx->pc = 0x13CB4Cu;
    {
        const bool branch_taken_0x13cb4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cb4c) {
            ctx->pc = 0x13CB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CB4Cu;
            // 0x13cb50: 0x8ec2b198  lw          $v0, -0x4E68($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CBF4u;
            goto label_13cbf4;
        }
    }
    ctx->pc = 0x13CB54u;
label_13cb54:
    // 0x13cb54: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_13cb58:
    if (ctx->pc == 0x13CB58u) {
        ctx->pc = 0x13CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB54u;
        // 0x13cb58: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB5Cu;
        goto label_13cb5c;
    }
    ctx->pc = 0x13CB54u;
    {
        const bool branch_taken_0x13cb54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cb54) {
            ctx->pc = 0x13CB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CB54u;
            // 0x13cb58: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CB7Cu;
            goto label_13cb7c;
        }
    }
    ctx->pc = 0x13CB5Cu;
label_13cb5c:
    // 0x13cb5c: 0x52e00007  beql        $s7, $zero, . + 4 + (0x7 << 2)
label_13cb60:
    if (ctx->pc == 0x13CB60u) {
        ctx->pc = 0x13CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB5Cu;
        // 0x13cb60: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB64u;
        goto label_13cb64;
    }
    ctx->pc = 0x13CB5Cu;
    {
        const bool branch_taken_0x13cb5c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cb5c) {
            ctx->pc = 0x13CB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CB5Cu;
            // 0x13cb60: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CB7Cu;
            goto label_13cb7c;
        }
    }
    ctx->pc = 0x13CB64u;
label_13cb64:
    // 0x13cb64: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_13cb68:
    if (ctx->pc == 0x13CB68u) {
        ctx->pc = 0x13CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB64u;
        // 0x13cb68: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB6Cu;
        goto label_13cb6c;
    }
    ctx->pc = 0x13CB64u;
    {
        const bool branch_taken_0x13cb64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cb64) {
            ctx->pc = 0x13CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CB64u;
            // 0x13cb68: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CB7Cu;
            goto label_13cb7c;
        }
    }
    ctx->pc = 0x13CB6Cu;
label_13cb6c:
    // 0x13cb6c: 0xc64003dc  lwc1        $f0, 0x3DC($s2)
    ctx->pc = 0x13cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13cb70:
    // 0x13cb70: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x13cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13cb74:
    // 0x13cb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13cb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13cb78:
    // 0x13cb78: 0xe64003dc  swc1        $f0, 0x3DC($s2)
    ctx->pc = 0x13cb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 988), bits); }
label_13cb7c:
    // 0x13cb7c: 0xc64103dc  lwc1        $f1, 0x3DC($s2)
    ctx->pc = 0x13cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13cb80:
    // 0x13cb80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13cb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13cb84:
    // 0x13cb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13cb88:
    // 0x13cb88: 0x0  nop
    ctx->pc = 0x13cb88u;
    // NOP
label_13cb8c:
    // 0x13cb8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13cb90:
    // 0x13cb90: 0x0  nop
    ctx->pc = 0x13cb90u;
    // NOP
label_13cb94:
    // 0x13cb94: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_13cb98:
    if (ctx->pc == 0x13CB98u) {
        ctx->pc = 0x13CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB94u;
        // 0x13cb98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB9Cu;
        goto label_13cb9c;
    }
    ctx->pc = 0x13CB94u;
    {
        const bool branch_taken_0x13cb94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB94u;
        // 0x13cb98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb94) {
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13CB9Cu;
label_13cb9c:
    // 0x13cb9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13cba0:
    // 0x13cba0: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x13cba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_13cba4:
    // 0x13cba4: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x13cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_13cba8:
    // 0x13cba8: 0x60f809  jalr        $v1
label_13cbac:
    if (ctx->pc == 0x13CBACu) {
        ctx->pc = 0x13CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBA8u;
        // 0x13cbac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBB0u;
        goto label_13cbb0;
    }
    ctx->pc = 0x13CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CBB0u);
        ctx->pc = 0x13CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBA8u;
        // 0x13cbac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBA8u, 0x13CBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CBB0u;
label_13cbb0:
    // 0x13cbb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cbb4:
    // 0x13cbb4: 0xc047eec  jal         func_11FBB0
label_13cbb8:
    if (ctx->pc == 0x13CBB8u) {
        ctx->pc = 0x13CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBB4u;
        // 0x13cbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBBCu;
        goto label_13cbbc;
    }
    ctx->pc = 0x13CBB4u;
    SET_GPR_U32(ctx, 31, 0x13CBBCu);
    ctx->pc = 0x13CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBB4u;
    // 0x13cbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13CBB4u, 0x13CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBBCu;
label_13cbbc:
    // 0x13cbbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13cbc0:
    if (ctx->pc == 0x13CBC0u) {
        ctx->pc = 0x13CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBBCu;
        // 0x13cbc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBC4u;
        goto label_13cbc4;
    }
    ctx->pc = 0x13CBBCu;
    {
        const bool branch_taken_0x13cbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBBCu;
        // 0x13cbc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbbc) {
            ctx->pc = 0x13CBE4u;
            goto label_13cbe4;
        }
    }
    ctx->pc = 0x13CBC4u;
label_13cbc4:
    // 0x13cbc4: 0xc047eec  jal         func_11FBB0
label_13cbc8:
    if (ctx->pc == 0x13CBC8u) {
        ctx->pc = 0x13CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC4u;
        // 0x13cbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBCCu;
        goto label_13cbcc;
    }
    ctx->pc = 0x13CBC4u;
    SET_GPR_U32(ctx, 31, 0x13CBCCu);
    ctx->pc = 0x13CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBC4u;
    // 0x13cbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13CBC4u, 0x13CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBCCu;
label_13cbcc:
    // 0x13cbcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cbd0:
    // 0x13cbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13cbd4:
    // 0x13cbd4: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x13cbd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_13cbd8:
    // 0x13cbd8: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x13cbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_13cbdc:
    // 0x13cbdc: 0xc0f809  jalr        $a2
label_13cbe0:
    if (ctx->pc == 0x13CBE0u) {
        ctx->pc = 0x13CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBDCu;
        // 0x13cbe0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBE4u;
        goto label_13cbe4;
    }
    ctx->pc = 0x13CBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13CBE4u);
        ctx->pc = 0x13CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBDCu;
        // 0x13cbe0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBDCu, 0x13CBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CBE4u;
label_13cbe4:
    // 0x13cbe4: 0xc048bb4  jal         func_122ED0
label_13cbe8:
    if (ctx->pc == 0x13CBE8u) {
        ctx->pc = 0x13CBECu;
        goto label_13cbec;
    }
    ctx->pc = 0x13CBE4u;
    SET_GPR_U32(ctx, 31, 0x13CBECu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x13CBE4u, 0x13CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBECu;
label_13cbec:
    // 0x13cbec: 0x1000002e  b           . + 4 + (0x2E << 2)
label_13cbf0:
    if (ctx->pc == 0x13CBF0u) {
        ctx->pc = 0x13CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBECu;
        // 0x13cbf0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBF4u;
        goto label_13cbf4;
    }
    ctx->pc = 0x13CBECu;
    {
        const bool branch_taken_0x13cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBECu;
        // 0x13cbf0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbec) {
            ctx->pc = 0x13CCA8u;
            goto label_13cca8;
        }
    }
    ctx->pc = 0x13CBF4u;
label_13cbf4:
    // 0x13cbf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cbf8:
    // 0x13cbf8: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
label_13cbfc:
    if (ctx->pc == 0x13CBFCu) {
        ctx->pc = 0x13CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF8u;
        // 0x13cbfc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC00u;
        goto label_13cc00;
    }
    ctx->pc = 0x13CBF8u;
    {
        const bool branch_taken_0x13cbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x13CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF8u;
        // 0x13cbfc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbf8) {
            ctx->pc = 0x13CC24u;
            goto label_13cc24;
        }
    }
    ctx->pc = 0x13CC00u;
label_13cc00:
    // 0x13cc00: 0x8c62b1c8  lw          $v0, -0x4E38($v1)
    ctx->pc = 0x13cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947272)));
label_13cc04:
    // 0x13cc04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13cc08:
    if (ctx->pc == 0x13CC08u) {
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC0Cu;
        goto label_13cc0c;
    }
    ctx->pc = 0x13CC04u;
    {
        const bool branch_taken_0x13cc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc04) {
            ctx->pc = 0x13CC1Cu;
            goto label_13cc1c;
        }
    }
    ctx->pc = 0x13CC0Cu;
label_13cc0c:
    // 0x13cc0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_13cc10:
    // 0x13cc10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13cc14:
    // 0x13cc14: 0x8c62b1c4  lw          $v0, -0x4E3C($v1)
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947268)));
label_13cc18:
    // 0x13cc18: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x13cc18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_13cc1c:
    // 0x13cc1c: 0x54800021  bnel        $a0, $zero, . + 4 + (0x21 << 2)
label_13cc20:
    if (ctx->pc == 0x13CC20u) {
        ctx->pc = 0x13CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC1Cu;
        // 0x13cc20: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC24u;
        goto label_13cc24;
    }
    ctx->pc = 0x13CC1Cu;
    {
        const bool branch_taken_0x13cc1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cc1c) {
            ctx->pc = 0x13CC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CC1Cu;
            // 0x13cc20: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13CC24u;
label_13cc24:
    // 0x13cc24: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_13cc28:
    if (ctx->pc == 0x13CC28u) {
        ctx->pc = 0x13CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC24u;
        // 0x13cc28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC2Cu;
        goto label_13cc2c;
    }
    ctx->pc = 0x13CC24u;
    {
        const bool branch_taken_0x13cc24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC24u;
        // 0x13cc28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc24) {
            ctx->pc = 0x13CC68u;
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CC2Cu;
label_13cc2c:
    // 0x13cc2c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_13cc30:
    if (ctx->pc == 0x13CC30u) {
        ctx->pc = 0x13CC34u;
        goto label_13cc34;
    }
    ctx->pc = 0x13CC2Cu;
    {
        const bool branch_taken_0x13cc2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc2c) {
            ctx->pc = 0x13CC68u;
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CC34u;
label_13cc34:
    // 0x13cc34: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_13cc38:
    if (ctx->pc == 0x13CC38u) {
        ctx->pc = 0x13CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC34u;
        // 0x13cc38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC3Cu;
        goto label_13cc3c;
    }
    ctx->pc = 0x13CC34u;
    {
        const bool branch_taken_0x13cc34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC34u;
        // 0x13cc38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc34) {
            ctx->pc = 0x13CC68u;
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CC3Cu;
label_13cc3c:
    // 0x13cc3c: 0x8c62b1c8  lw          $v0, -0x4E38($v1)
    ctx->pc = 0x13cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947272)));
label_13cc40:
    // 0x13cc40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13cc44:
    if (ctx->pc == 0x13CC44u) {
        ctx->pc = 0x13CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC40u;
        // 0x13cc44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC48u;
        goto label_13cc48;
    }
    ctx->pc = 0x13CC40u;
    {
        const bool branch_taken_0x13cc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC40u;
        // 0x13cc44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc40) {
            ctx->pc = 0x13CC54u;
            goto label_13cc54;
        }
    }
    ctx->pc = 0x13CC48u;
label_13cc48:
    // 0x13cc48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13cc4c:
    // 0x13cc4c: 0x8c43b1c4  lw          $v1, -0x4E3C($v0)
    ctx->pc = 0x13cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_13cc50:
    // 0x13cc50: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x13cc50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13cc54:
    // 0x13cc54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_13cc58:
    if (ctx->pc == 0x13CC58u) {
        ctx->pc = 0x13CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC54u;
        // 0x13cc58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC5Cu;
        goto label_13cc5c;
    }
    ctx->pc = 0x13CC54u;
    {
        const bool branch_taken_0x13cc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC54u;
        // 0x13cc58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc54) {
            ctx->pc = 0x13CC68u;
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CC5Cu;
label_13cc5c:
    // 0x13cc5c: 0x52800011  beql        $s4, $zero, . + 4 + (0x11 << 2)
label_13cc60:
    if (ctx->pc == 0x13CC60u) {
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC64u;
        goto label_13cc64;
    }
    ctx->pc = 0x13CC5Cu;
    {
        const bool branch_taken_0x13cc5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc5c) {
            ctx->pc = 0x13CC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CC5Cu;
            // 0x13cc60: 0xae4003dc  sw          $zero, 0x3DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CCA4u;
            goto label_13cca4;
        }
    }
    ctx->pc = 0x13CC64u;
label_13cc64:
    // 0x13cc64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cc68:
    // 0x13cc68: 0xc047eec  jal         func_11FBB0
label_13cc6c:
    if (ctx->pc == 0x13CC6Cu) {
        ctx->pc = 0x13CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC68u;
        // 0x13cc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC70u;
        goto label_13cc70;
    }
    ctx->pc = 0x13CC68u;
    SET_GPR_U32(ctx, 31, 0x13CC70u);
    ctx->pc = 0x13CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC68u;
    // 0x13cc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13CC68u, 0x13CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC70u;
label_13cc70:
    // 0x13cc70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13cc74:
    if (ctx->pc == 0x13CC74u) {
        ctx->pc = 0x13CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC70u;
        // 0x13cc74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC78u;
        goto label_13cc78;
    }
    ctx->pc = 0x13CC70u;
    {
        const bool branch_taken_0x13cc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC70u;
        // 0x13cc74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc70) {
            ctx->pc = 0x13CC98u;
            goto label_13cc98;
        }
    }
    ctx->pc = 0x13CC78u;
label_13cc78:
    // 0x13cc78: 0xc047eec  jal         func_11FBB0
label_13cc7c:
    if (ctx->pc == 0x13CC7Cu) {
        ctx->pc = 0x13CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC78u;
        // 0x13cc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC80u;
        goto label_13cc80;
    }
    ctx->pc = 0x13CC78u;
    SET_GPR_U32(ctx, 31, 0x13CC80u);
    ctx->pc = 0x13CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC78u;
    // 0x13cc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13CC78u, 0x13CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC80u;
label_13cc80:
    // 0x13cc80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cc84:
    // 0x13cc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cc88:
    // 0x13cc88: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x13cc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_13cc8c:
    // 0x13cc8c: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x13cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_13cc90:
    // 0x13cc90: 0xc0f809  jalr        $a2
label_13cc94:
    if (ctx->pc == 0x13CC94u) {
        ctx->pc = 0x13CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC90u;
        // 0x13cc94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC98u;
        goto label_13cc98;
    }
    ctx->pc = 0x13CC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13CC98u);
        ctx->pc = 0x13CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC90u;
        // 0x13cc94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC90u, 0x13CC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CC98u;
label_13cc98:
    // 0x13cc98: 0xc048bb4  jal         func_122ED0
label_13cc9c:
    if (ctx->pc == 0x13CC9Cu) {
        ctx->pc = 0x13CCA0u;
        goto label_13cca0;
    }
    ctx->pc = 0x13CC98u;
    SET_GPR_U32(ctx, 31, 0x13CCA0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x13CC98u, 0x13CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCA0u;
label_13cca0:
    // 0x13cca0: 0xae4003dc  sw          $zero, 0x3DC($s2)
    ctx->pc = 0x13cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 988), GPR_U32(ctx, 0));
label_13cca4:
    // 0x13cca4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x13cca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_13cca8:
    // 0x13cca8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x13cca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_13ccac:
    // 0x13ccac: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x13ccacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13ccb0:
    // 0x13ccb0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x13ccb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_13ccb4:
    // 0x13ccb4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x13ccb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_13ccb8:
    // 0x13ccb8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x13ccb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_13ccbc:
    // 0x13ccbc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x13ccbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_13ccc0:
    // 0x13ccc0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x13ccc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_13ccc4:
    // 0x13ccc4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x13ccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_13ccc8:
    // 0x13ccc8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x13ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13cccc:
    // 0x13cccc: 0x3e00008  jr          $ra
label_13ccd0:
    if (ctx->pc == 0x13CCD0u) {
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CCD4u;
        goto label_13ccd4;
    }
    ctx->pc = 0x13CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CCD4u;
label_13ccd4:
    // 0x13ccd4: 0x0  nop
    ctx->pc = 0x13ccd4u;
    // NOP
    ctx->pc = 0x13ccd8u;
}
