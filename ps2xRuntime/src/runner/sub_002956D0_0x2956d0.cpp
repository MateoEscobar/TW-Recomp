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

// Function: sub_002956D0
// Address: 0x2956d0 - 0x295d08
void sub_002956D0_0x2956d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002956D0_0x2956d0");
#endif

    switch (ctx->pc) {
        case 0x2956d0u: goto label_2956d0;
        case 0x2956d4u: goto label_2956d4;
        case 0x2956d8u: goto label_2956d8;
        case 0x2956dcu: goto label_2956dc;
        case 0x2956e0u: goto label_2956e0;
        case 0x2956e4u: goto label_2956e4;
        case 0x2956e8u: goto label_2956e8;
        case 0x2956ecu: goto label_2956ec;
        case 0x2956f0u: goto label_2956f0;
        case 0x2956f4u: goto label_2956f4;
        case 0x2956f8u: goto label_2956f8;
        case 0x2956fcu: goto label_2956fc;
        case 0x295700u: goto label_295700;
        case 0x295704u: goto label_295704;
        case 0x295708u: goto label_295708;
        case 0x29570cu: goto label_29570c;
        case 0x295710u: goto label_295710;
        case 0x295714u: goto label_295714;
        case 0x295718u: goto label_295718;
        case 0x29571cu: goto label_29571c;
        case 0x295720u: goto label_295720;
        case 0x295724u: goto label_295724;
        case 0x295728u: goto label_295728;
        case 0x29572cu: goto label_29572c;
        case 0x295730u: goto label_295730;
        case 0x295734u: goto label_295734;
        case 0x295738u: goto label_295738;
        case 0x29573cu: goto label_29573c;
        case 0x295740u: goto label_295740;
        case 0x295744u: goto label_295744;
        case 0x295748u: goto label_295748;
        case 0x29574cu: goto label_29574c;
        case 0x295750u: goto label_295750;
        case 0x295754u: goto label_295754;
        case 0x295758u: goto label_295758;
        case 0x29575cu: goto label_29575c;
        case 0x295760u: goto label_295760;
        case 0x295764u: goto label_295764;
        case 0x295768u: goto label_295768;
        case 0x29576cu: goto label_29576c;
        case 0x295770u: goto label_295770;
        case 0x295774u: goto label_295774;
        case 0x295778u: goto label_295778;
        case 0x29577cu: goto label_29577c;
        case 0x295780u: goto label_295780;
        case 0x295784u: goto label_295784;
        case 0x295788u: goto label_295788;
        case 0x29578cu: goto label_29578c;
        case 0x295790u: goto label_295790;
        case 0x295794u: goto label_295794;
        case 0x295798u: goto label_295798;
        case 0x29579cu: goto label_29579c;
        case 0x2957a0u: goto label_2957a0;
        case 0x2957a4u: goto label_2957a4;
        case 0x2957a8u: goto label_2957a8;
        case 0x2957acu: goto label_2957ac;
        case 0x2957b0u: goto label_2957b0;
        case 0x2957b4u: goto label_2957b4;
        case 0x2957b8u: goto label_2957b8;
        case 0x2957bcu: goto label_2957bc;
        case 0x2957c0u: goto label_2957c0;
        case 0x2957c4u: goto label_2957c4;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957ccu: goto label_2957cc;
        case 0x2957d0u: goto label_2957d0;
        case 0x2957d4u: goto label_2957d4;
        case 0x2957d8u: goto label_2957d8;
        case 0x2957dcu: goto label_2957dc;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957e4u: goto label_2957e4;
        case 0x2957e8u: goto label_2957e8;
        case 0x2957ecu: goto label_2957ec;
        case 0x2957f0u: goto label_2957f0;
        case 0x2957f4u: goto label_2957f4;
        case 0x2957f8u: goto label_2957f8;
        case 0x2957fcu: goto label_2957fc;
        case 0x295800u: goto label_295800;
        case 0x295804u: goto label_295804;
        case 0x295808u: goto label_295808;
        case 0x29580cu: goto label_29580c;
        case 0x295810u: goto label_295810;
        case 0x295814u: goto label_295814;
        case 0x295818u: goto label_295818;
        case 0x29581cu: goto label_29581c;
        case 0x295820u: goto label_295820;
        case 0x295824u: goto label_295824;
        case 0x295828u: goto label_295828;
        case 0x29582cu: goto label_29582c;
        case 0x295830u: goto label_295830;
        case 0x295834u: goto label_295834;
        case 0x295838u: goto label_295838;
        case 0x29583cu: goto label_29583c;
        case 0x295840u: goto label_295840;
        case 0x295844u: goto label_295844;
        case 0x295848u: goto label_295848;
        case 0x29584cu: goto label_29584c;
        case 0x295850u: goto label_295850;
        case 0x295854u: goto label_295854;
        case 0x295858u: goto label_295858;
        case 0x29585cu: goto label_29585c;
        case 0x295860u: goto label_295860;
        case 0x295864u: goto label_295864;
        case 0x295868u: goto label_295868;
        case 0x29586cu: goto label_29586c;
        case 0x295870u: goto label_295870;
        case 0x295874u: goto label_295874;
        case 0x295878u: goto label_295878;
        case 0x29587cu: goto label_29587c;
        case 0x295880u: goto label_295880;
        case 0x295884u: goto label_295884;
        case 0x295888u: goto label_295888;
        case 0x29588cu: goto label_29588c;
        case 0x295890u: goto label_295890;
        case 0x295894u: goto label_295894;
        case 0x295898u: goto label_295898;
        case 0x29589cu: goto label_29589c;
        case 0x2958a0u: goto label_2958a0;
        case 0x2958a4u: goto label_2958a4;
        case 0x2958a8u: goto label_2958a8;
        case 0x2958acu: goto label_2958ac;
        case 0x2958b0u: goto label_2958b0;
        case 0x2958b4u: goto label_2958b4;
        case 0x2958b8u: goto label_2958b8;
        case 0x2958bcu: goto label_2958bc;
        case 0x2958c0u: goto label_2958c0;
        case 0x2958c4u: goto label_2958c4;
        case 0x2958c8u: goto label_2958c8;
        case 0x2958ccu: goto label_2958cc;
        case 0x2958d0u: goto label_2958d0;
        case 0x2958d4u: goto label_2958d4;
        case 0x2958d8u: goto label_2958d8;
        case 0x2958dcu: goto label_2958dc;
        case 0x2958e0u: goto label_2958e0;
        case 0x2958e4u: goto label_2958e4;
        case 0x2958e8u: goto label_2958e8;
        case 0x2958ecu: goto label_2958ec;
        case 0x2958f0u: goto label_2958f0;
        case 0x2958f4u: goto label_2958f4;
        case 0x2958f8u: goto label_2958f8;
        case 0x2958fcu: goto label_2958fc;
        case 0x295900u: goto label_295900;
        case 0x295904u: goto label_295904;
        case 0x295908u: goto label_295908;
        case 0x29590cu: goto label_29590c;
        case 0x295910u: goto label_295910;
        case 0x295914u: goto label_295914;
        case 0x295918u: goto label_295918;
        case 0x29591cu: goto label_29591c;
        case 0x295920u: goto label_295920;
        case 0x295924u: goto label_295924;
        case 0x295928u: goto label_295928;
        case 0x29592cu: goto label_29592c;
        case 0x295930u: goto label_295930;
        case 0x295934u: goto label_295934;
        case 0x295938u: goto label_295938;
        case 0x29593cu: goto label_29593c;
        case 0x295940u: goto label_295940;
        case 0x295944u: goto label_295944;
        case 0x295948u: goto label_295948;
        case 0x29594cu: goto label_29594c;
        case 0x295950u: goto label_295950;
        case 0x295954u: goto label_295954;
        case 0x295958u: goto label_295958;
        case 0x29595cu: goto label_29595c;
        case 0x295960u: goto label_295960;
        case 0x295964u: goto label_295964;
        case 0x295968u: goto label_295968;
        case 0x29596cu: goto label_29596c;
        case 0x295970u: goto label_295970;
        case 0x295974u: goto label_295974;
        case 0x295978u: goto label_295978;
        case 0x29597cu: goto label_29597c;
        case 0x295980u: goto label_295980;
        case 0x295984u: goto label_295984;
        case 0x295988u: goto label_295988;
        case 0x29598cu: goto label_29598c;
        case 0x295990u: goto label_295990;
        case 0x295994u: goto label_295994;
        case 0x295998u: goto label_295998;
        case 0x29599cu: goto label_29599c;
        case 0x2959a0u: goto label_2959a0;
        case 0x2959a4u: goto label_2959a4;
        case 0x2959a8u: goto label_2959a8;
        case 0x2959acu: goto label_2959ac;
        case 0x2959b0u: goto label_2959b0;
        case 0x2959b4u: goto label_2959b4;
        case 0x2959b8u: goto label_2959b8;
        case 0x2959bcu: goto label_2959bc;
        case 0x2959c0u: goto label_2959c0;
        case 0x2959c4u: goto label_2959c4;
        case 0x2959c8u: goto label_2959c8;
        case 0x2959ccu: goto label_2959cc;
        case 0x2959d0u: goto label_2959d0;
        case 0x2959d4u: goto label_2959d4;
        case 0x2959d8u: goto label_2959d8;
        case 0x2959dcu: goto label_2959dc;
        case 0x2959e0u: goto label_2959e0;
        case 0x2959e4u: goto label_2959e4;
        case 0x2959e8u: goto label_2959e8;
        case 0x2959ecu: goto label_2959ec;
        case 0x2959f0u: goto label_2959f0;
        case 0x2959f4u: goto label_2959f4;
        case 0x2959f8u: goto label_2959f8;
        case 0x2959fcu: goto label_2959fc;
        case 0x295a00u: goto label_295a00;
        case 0x295a04u: goto label_295a04;
        case 0x295a08u: goto label_295a08;
        case 0x295a0cu: goto label_295a0c;
        case 0x295a10u: goto label_295a10;
        case 0x295a14u: goto label_295a14;
        case 0x295a18u: goto label_295a18;
        case 0x295a1cu: goto label_295a1c;
        case 0x295a20u: goto label_295a20;
        case 0x295a24u: goto label_295a24;
        case 0x295a28u: goto label_295a28;
        case 0x295a2cu: goto label_295a2c;
        case 0x295a30u: goto label_295a30;
        case 0x295a34u: goto label_295a34;
        case 0x295a38u: goto label_295a38;
        case 0x295a3cu: goto label_295a3c;
        case 0x295a40u: goto label_295a40;
        case 0x295a44u: goto label_295a44;
        case 0x295a48u: goto label_295a48;
        case 0x295a4cu: goto label_295a4c;
        case 0x295a50u: goto label_295a50;
        case 0x295a54u: goto label_295a54;
        case 0x295a58u: goto label_295a58;
        case 0x295a5cu: goto label_295a5c;
        case 0x295a60u: goto label_295a60;
        case 0x295a64u: goto label_295a64;
        case 0x295a68u: goto label_295a68;
        case 0x295a6cu: goto label_295a6c;
        case 0x295a70u: goto label_295a70;
        case 0x295a74u: goto label_295a74;
        case 0x295a78u: goto label_295a78;
        case 0x295a7cu: goto label_295a7c;
        case 0x295a80u: goto label_295a80;
        case 0x295a84u: goto label_295a84;
        case 0x295a88u: goto label_295a88;
        case 0x295a8cu: goto label_295a8c;
        case 0x295a90u: goto label_295a90;
        case 0x295a94u: goto label_295a94;
        case 0x295a98u: goto label_295a98;
        case 0x295a9cu: goto label_295a9c;
        case 0x295aa0u: goto label_295aa0;
        case 0x295aa4u: goto label_295aa4;
        case 0x295aa8u: goto label_295aa8;
        case 0x295aacu: goto label_295aac;
        case 0x295ab0u: goto label_295ab0;
        case 0x295ab4u: goto label_295ab4;
        case 0x295ab8u: goto label_295ab8;
        case 0x295abcu: goto label_295abc;
        case 0x295ac0u: goto label_295ac0;
        case 0x295ac4u: goto label_295ac4;
        case 0x295ac8u: goto label_295ac8;
        case 0x295accu: goto label_295acc;
        case 0x295ad0u: goto label_295ad0;
        case 0x295ad4u: goto label_295ad4;
        case 0x295ad8u: goto label_295ad8;
        case 0x295adcu: goto label_295adc;
        case 0x295ae0u: goto label_295ae0;
        case 0x295ae4u: goto label_295ae4;
        case 0x295ae8u: goto label_295ae8;
        case 0x295aecu: goto label_295aec;
        case 0x295af0u: goto label_295af0;
        case 0x295af4u: goto label_295af4;
        case 0x295af8u: goto label_295af8;
        case 0x295afcu: goto label_295afc;
        case 0x295b00u: goto label_295b00;
        case 0x295b04u: goto label_295b04;
        case 0x295b08u: goto label_295b08;
        case 0x295b0cu: goto label_295b0c;
        case 0x295b10u: goto label_295b10;
        case 0x295b14u: goto label_295b14;
        case 0x295b18u: goto label_295b18;
        case 0x295b1cu: goto label_295b1c;
        case 0x295b20u: goto label_295b20;
        case 0x295b24u: goto label_295b24;
        case 0x295b28u: goto label_295b28;
        case 0x295b2cu: goto label_295b2c;
        case 0x295b30u: goto label_295b30;
        case 0x295b34u: goto label_295b34;
        case 0x295b38u: goto label_295b38;
        case 0x295b3cu: goto label_295b3c;
        case 0x295b40u: goto label_295b40;
        case 0x295b44u: goto label_295b44;
        case 0x295b48u: goto label_295b48;
        case 0x295b4cu: goto label_295b4c;
        case 0x295b50u: goto label_295b50;
        case 0x295b54u: goto label_295b54;
        case 0x295b58u: goto label_295b58;
        case 0x295b5cu: goto label_295b5c;
        case 0x295b60u: goto label_295b60;
        case 0x295b64u: goto label_295b64;
        case 0x295b68u: goto label_295b68;
        case 0x295b6cu: goto label_295b6c;
        case 0x295b70u: goto label_295b70;
        case 0x295b74u: goto label_295b74;
        case 0x295b78u: goto label_295b78;
        case 0x295b7cu: goto label_295b7c;
        case 0x295b80u: goto label_295b80;
        case 0x295b84u: goto label_295b84;
        case 0x295b88u: goto label_295b88;
        case 0x295b8cu: goto label_295b8c;
        case 0x295b90u: goto label_295b90;
        case 0x295b94u: goto label_295b94;
        case 0x295b98u: goto label_295b98;
        case 0x295b9cu: goto label_295b9c;
        case 0x295ba0u: goto label_295ba0;
        case 0x295ba4u: goto label_295ba4;
        case 0x295ba8u: goto label_295ba8;
        case 0x295bacu: goto label_295bac;
        case 0x295bb0u: goto label_295bb0;
        case 0x295bb4u: goto label_295bb4;
        case 0x295bb8u: goto label_295bb8;
        case 0x295bbcu: goto label_295bbc;
        case 0x295bc0u: goto label_295bc0;
        case 0x295bc4u: goto label_295bc4;
        case 0x295bc8u: goto label_295bc8;
        case 0x295bccu: goto label_295bcc;
        case 0x295bd0u: goto label_295bd0;
        case 0x295bd4u: goto label_295bd4;
        case 0x295bd8u: goto label_295bd8;
        case 0x295bdcu: goto label_295bdc;
        case 0x295be0u: goto label_295be0;
        case 0x295be4u: goto label_295be4;
        case 0x295be8u: goto label_295be8;
        case 0x295becu: goto label_295bec;
        case 0x295bf0u: goto label_295bf0;
        case 0x295bf4u: goto label_295bf4;
        case 0x295bf8u: goto label_295bf8;
        case 0x295bfcu: goto label_295bfc;
        case 0x295c00u: goto label_295c00;
        case 0x295c04u: goto label_295c04;
        case 0x295c08u: goto label_295c08;
        case 0x295c0cu: goto label_295c0c;
        case 0x295c10u: goto label_295c10;
        case 0x295c14u: goto label_295c14;
        case 0x295c18u: goto label_295c18;
        case 0x295c1cu: goto label_295c1c;
        case 0x295c20u: goto label_295c20;
        case 0x295c24u: goto label_295c24;
        case 0x295c28u: goto label_295c28;
        case 0x295c2cu: goto label_295c2c;
        case 0x295c30u: goto label_295c30;
        case 0x295c34u: goto label_295c34;
        case 0x295c38u: goto label_295c38;
        case 0x295c3cu: goto label_295c3c;
        case 0x295c40u: goto label_295c40;
        case 0x295c44u: goto label_295c44;
        case 0x295c48u: goto label_295c48;
        case 0x295c4cu: goto label_295c4c;
        case 0x295c50u: goto label_295c50;
        case 0x295c54u: goto label_295c54;
        case 0x295c58u: goto label_295c58;
        case 0x295c5cu: goto label_295c5c;
        case 0x295c60u: goto label_295c60;
        case 0x295c64u: goto label_295c64;
        case 0x295c68u: goto label_295c68;
        case 0x295c6cu: goto label_295c6c;
        case 0x295c70u: goto label_295c70;
        case 0x295c74u: goto label_295c74;
        case 0x295c78u: goto label_295c78;
        case 0x295c7cu: goto label_295c7c;
        case 0x295c80u: goto label_295c80;
        case 0x295c84u: goto label_295c84;
        case 0x295c88u: goto label_295c88;
        case 0x295c8cu: goto label_295c8c;
        case 0x295c90u: goto label_295c90;
        case 0x295c94u: goto label_295c94;
        case 0x295c98u: goto label_295c98;
        case 0x295c9cu: goto label_295c9c;
        case 0x295ca0u: goto label_295ca0;
        case 0x295ca4u: goto label_295ca4;
        case 0x295ca8u: goto label_295ca8;
        case 0x295cacu: goto label_295cac;
        case 0x295cb0u: goto label_295cb0;
        case 0x295cb4u: goto label_295cb4;
        case 0x295cb8u: goto label_295cb8;
        case 0x295cbcu: goto label_295cbc;
        case 0x295cc0u: goto label_295cc0;
        case 0x295cc4u: goto label_295cc4;
        case 0x295cc8u: goto label_295cc8;
        case 0x295cccu: goto label_295ccc;
        case 0x295cd0u: goto label_295cd0;
        case 0x295cd4u: goto label_295cd4;
        case 0x295cd8u: goto label_295cd8;
        case 0x295cdcu: goto label_295cdc;
        case 0x295ce0u: goto label_295ce0;
        case 0x295ce4u: goto label_295ce4;
        case 0x295ce8u: goto label_295ce8;
        case 0x295cecu: goto label_295cec;
        case 0x295cf0u: goto label_295cf0;
        case 0x295cf4u: goto label_295cf4;
        case 0x295cf8u: goto label_295cf8;
        case 0x295cfcu: goto label_295cfc;
        case 0x295d00u: goto label_295d00;
        case 0x295d04u: goto label_295d04;
        default: break;
    }

    ctx->pc = 0x2956d0u;

label_2956d0:
    // 0x2956d0: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
label_2956d4:
    // 0x2956d4: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x2956d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
label_2956d8:
    // 0x2956d8: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x2956d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
label_2956dc:
    // 0x2956dc: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x2956dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
label_2956e0:
    // 0x2956e0: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x2956e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
label_2956e4:
    // 0x2956e4: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x2956e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
label_2956e8:
    // 0x2956e8: 0x7fb50330  sq          $s5, 0x330($sp)
    ctx->pc = 0x2956e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 21));
label_2956ec:
    // 0x2956ec: 0x7fb60320  sq          $s6, 0x320($sp)
    ctx->pc = 0x2956ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 22));
label_2956f0:
    // 0x2956f0: 0x7fb70310  sq          $s7, 0x310($sp)
    ctx->pc = 0x2956f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 23));
label_2956f4:
    // 0x2956f4: 0x7fbe0300  sq          $fp, 0x300($sp)
    ctx->pc = 0x2956f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 30));
label_2956f8:
    // 0x2956f8: 0xffbf02f0  sd          $ra, 0x2F0($sp)
    ctx->pc = 0x2956f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 31));
label_2956fc:
    // 0x2956fc: 0xe7b40390  swc1        $f20, 0x390($sp)
    ctx->pc = 0x2956fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_295700:
    // 0x295700: 0xafa40240  sw          $a0, 0x240($sp)
    ctx->pc = 0x295700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 4));
label_295704:
    // 0x295704: 0x90820273  lbu         $v0, 0x273($a0)
    ctx->pc = 0x295704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 627)));
label_295708:
    // 0x295708: 0x18400173  blez        $v0, . + 4 + (0x173 << 2)
label_29570c:
    if (ctx->pc == 0x29570Cu) {
        ctx->pc = 0x29570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295708u;
        // 0x29570c: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295710u;
        goto label_295710;
    }
    ctx->pc = 0x295708u;
    {
        const bool branch_taken_0x295708 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295708u;
        // 0x29570c: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295708) {
            ctx->pc = 0x295CD8u;
            goto label_295cd8;
        }
    }
    ctx->pc = 0x295710u;
label_295710:
    // 0x295710: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x295710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
label_295714:
    // 0x295714: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_295718:
    // 0x295718: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x295718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_29571c:
    // 0x29571c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29571cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_295720:
    // 0x295720: 0xc44001ac  lwc1        $f0, 0x1AC($v0)
    ctx->pc = 0x295720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295724:
    // 0x295724: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295728:
    // 0x295728: 0x0  nop
    ctx->pc = 0x295728u;
    // NOP
label_29572c:
    // 0x29572c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_295730:
    if (ctx->pc == 0x295730u) {
        ctx->pc = 0x295730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29572Cu;
        // 0x295730: 0x8fa20240  lw          $v0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295734u;
        goto label_295734;
    }
    ctx->pc = 0x29572Cu;
    {
        const bool branch_taken_0x29572c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x295730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29572Cu;
        // 0x295730: 0x8fa20240  lw          $v0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29572c) {
            ctx->pc = 0x295750u;
            goto label_295750;
        }
    }
    ctx->pc = 0x295734u;
label_295734:
    // 0x295734: 0xc4800240  lwc1        $f0, 0x240($a0)
    ctx->pc = 0x295734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295738:
    // 0x295738: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x295738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29573c:
    // 0x29573c: 0x0  nop
    ctx->pc = 0x29573cu;
    // NOP
label_295740:
    // 0x295740: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_295744:
    if (ctx->pc == 0x295744u) {
        ctx->pc = 0x295744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295740u;
        // 0x295744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295748u;
        goto label_295748;
    }
    ctx->pc = 0x295740u;
    {
        const bool branch_taken_0x295740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x295744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295740u;
        // 0x295744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295740) {
            ctx->pc = 0x29574Cu;
            goto label_29574c;
        }
    }
    ctx->pc = 0x295748u;
label_295748:
    // 0x295748: 0xa0820274  sb          $v0, 0x274($a0)
    ctx->pc = 0x295748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 2));
label_29574c:
    // 0x29574c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x29574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295750:
    // 0x295750: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x295750u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_295754:
    // 0x295754: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x295754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295758:
    // 0x295758: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_29575c:
    // 0x29575c: 0x90420274  lbu         $v0, 0x274($v0)
    ctx->pc = 0x29575cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 628)));
label_295760:
    // 0x295760: 0xc4a001ac  lwc1        $f0, 0x1AC($a1)
    ctx->pc = 0x295760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295764:
    // 0x295764: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_295768:
    if (ctx->pc == 0x295768u) {
        ctx->pc = 0x295768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295764u;
        // 0x295768: 0xe4600240  swc1        $f0, 0x240($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29576Cu;
        goto label_29576c;
    }
    ctx->pc = 0x295764u;
    {
        const bool branch_taken_0x295764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295764u;
        // 0x295768: 0xe4600240  swc1        $f0, 0x240($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295764) {
            ctx->pc = 0x2957BCu;
            goto label_2957bc;
        }
    }
    ctx->pc = 0x29576Cu;
label_29576c:
    // 0x29576c: 0x8e02b734  lw          $v0, -0x48CC($s0)
    ctx->pc = 0x29576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_295770:
    // 0x295770: 0x8c640248  lw          $a0, 0x248($v1)
    ctx->pc = 0x295770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 584)));
label_295774:
    // 0x295774: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_295778:
    // 0x295778: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x295778u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29577c:
    // 0x29577c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_295780:
    if (ctx->pc == 0x295780u) {
        ctx->pc = 0x295780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29577Cu;
        // 0x295780: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295784u;
        goto label_295784;
    }
    ctx->pc = 0x29577Cu;
    {
        const bool branch_taken_0x29577c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29577Cu;
        // 0x295780: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29577c) {
            ctx->pc = 0x2957BCu;
            goto label_2957bc;
        }
    }
    ctx->pc = 0x295784u;
label_295784:
    // 0x295784: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_295788:
    // 0x295788: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_29578c:
    // 0x29578c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x29578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_295790:
    // 0x295790: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x295790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_295794:
    // 0x295794: 0x24650220  addiu       $a1, $v1, 0x220
    ctx->pc = 0x295794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_295798:
    // 0x295798: 0xc0cdb38  jal         func_336CE0
label_29579c:
    if (ctx->pc == 0x29579Cu) {
        ctx->pc = 0x29579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295798u;
        // 0x29579c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2957A0u;
        goto label_2957a0;
    }
    ctx->pc = 0x295798u;
    SET_GPR_U32(ctx, 31, 0x2957A0u);
    ctx->pc = 0x29579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295798u;
    // 0x29579c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x295798u, 0x2957A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957A0u;
label_2957a0:
    // 0x2957a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2957a4:
    // 0x2957a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2957a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2957a8:
    // 0x2957a8: 0x0  nop
    ctx->pc = 0x2957a8u;
    // NOP
label_2957ac:
    // 0x2957ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2957acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2957b0:
    // 0x2957b0: 0x0  nop
    ctx->pc = 0x2957b0u;
    // NOP
label_2957b4:
    // 0x2957b4: 0x45030148  bc1tl       . + 4 + (0x148 << 2)
label_2957b8:
    if (ctx->pc == 0x2957B8u) {
        ctx->pc = 0x2957B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957B4u;
        // 0x2957b8: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2957BCu;
        goto label_2957bc;
    }
    ctx->pc = 0x2957B4u;
    {
        const bool branch_taken_0x2957b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2957b4) {
            ctx->pc = 0x2957B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2957B4u;
            // 0x2957b8: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295CD8u;
            goto label_295cd8;
        }
    }
    ctx->pc = 0x2957BCu;
label_2957bc:
    // 0x2957bc: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x2957bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2957c0:
    // 0x2957c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2957c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2957c4:
    // 0x2957c4: 0x8e02b734  lw          $v0, -0x48CC($s0)
    ctx->pc = 0x2957c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2957c8:
    // 0x2957c8: 0x8ca30244  lw          $v1, 0x244($a1)
    ctx->pc = 0x2957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
label_2957cc:
    // 0x2957cc: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2957ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2957d0:
    // 0x2957d0: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x2957d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2957d4:
    // 0x2957d4: 0xa0400274  sb          $zero, 0x274($v0)
    ctx->pc = 0x2957d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 628), (uint8_t)GPR_U32(ctx, 0));
label_2957d8:
    // 0x2957d8: 0xac450248  sw          $a1, 0x248($v0)
    ctx->pc = 0x2957d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 5));
label_2957dc:
    // 0x2957dc: 0x8c6201a8  lw          $v0, 0x1A8($v1)
    ctx->pc = 0x2957dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
label_2957e0:
    // 0x2957e0: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_2957e4:
    if (ctx->pc == 0x2957E4u) {
        ctx->pc = 0x2957E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957E0u;
        // 0x2957e4: 0x24a207d0  addiu       $v0, $a1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2957E8u;
        goto label_2957e8;
    }
    ctx->pc = 0x2957E0u;
    {
        const bool branch_taken_0x2957e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2957E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957E0u;
        // 0x2957e4: 0x24a207d0  addiu       $v0, $a1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957e0) {
            ctx->pc = 0x2957F8u;
            goto label_2957f8;
        }
    }
    ctx->pc = 0x2957E8u;
label_2957e8:
    // 0x2957e8: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x2957e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2957ec:
    // 0x2957ec: 0x24a203e8  addiu       $v0, $a1, 0x3E8
    ctx->pc = 0x2957ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
label_2957f0:
    // 0x2957f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2957f4:
    if (ctx->pc == 0x2957F4u) {
        ctx->pc = 0x2957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957F0u;
        // 0x2957f4: 0xac620248  sw          $v0, 0x248($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2957F8u;
        goto label_2957f8;
    }
    ctx->pc = 0x2957F0u;
    {
        const bool branch_taken_0x2957f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957F0u;
        // 0x2957f4: 0xac620248  sw          $v0, 0x248($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957f0) {
            ctx->pc = 0x295800u;
            goto label_295800;
        }
    }
    ctx->pc = 0x2957F8u;
label_2957f8:
    // 0x2957f8: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x2957f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2957fc:
    // 0x2957fc: 0xaca20248  sw          $v0, 0x248($a1)
    ctx->pc = 0x2957fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 584), GPR_U32(ctx, 2));
label_295800:
    // 0x295800: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x295800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295804:
    // 0x295804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295808:
    // 0x295808: 0x8c460244  lw          $a2, 0x244($v0)
    ctx->pc = 0x295808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_29580c:
    // 0x29580c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x29580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_295810:
    // 0x295810: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x295810u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_295814:
    // 0x295814: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x295814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_295818:
    // 0x295818: 0x60f809  jalr        $v1
label_29581c:
    if (ctx->pc == 0x29581Cu) {
        ctx->pc = 0x29581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295818u;
        // 0x29581c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295820u;
        goto label_295820;
    }
    ctx->pc = 0x295818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295820u);
        ctx->pc = 0x29581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295818u;
        // 0x29581c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295818u, 0x295820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295820u;
label_295820:
    // 0x295820: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x295820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295824:
    // 0x295824: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x295824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295828:
    // 0x295828: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x295828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29582c:
    // 0x29582c: 0x8ca40244  lw          $a0, 0x244($a1)
    ctx->pc = 0x29582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
label_295830:
    // 0x295830: 0x7ca30230  sq          $v1, 0x230($a1)
    ctx->pc = 0x295830u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 560), GPR_VEC(ctx, 3));
label_295834:
    // 0x295834: 0xc088f04  jal         func_223C10
label_295838:
    if (ctx->pc == 0x295838u) {
        ctx->pc = 0x295838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295834u;
        // 0x295838: 0x7ca20220  sq          $v0, 0x220($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29583Cu;
        goto label_29583c;
    }
    ctx->pc = 0x295834u;
    SET_GPR_U32(ctx, 31, 0x29583Cu);
    ctx->pc = 0x295838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295834u;
    // 0x295838: 0x7ca20220  sq          $v0, 0x220($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 544), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x295834u, 0x29583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29583Cu;
label_29583c:
    // 0x29583c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295840:
    // 0x295840: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_295844:
    if (ctx->pc == 0x295844u) {
        ctx->pc = 0x295844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295840u;
        // 0x295844: 0x8fa20240  lw          $v0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295848u;
        goto label_295848;
    }
    ctx->pc = 0x295840u;
    {
        const bool branch_taken_0x295840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x295844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295840u;
        // 0x295844: 0x8fa20240  lw          $v0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295840) {
            ctx->pc = 0x295888u;
            goto label_295888;
        }
    }
    ctx->pc = 0x295848u;
label_295848:
    // 0x295848: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x295848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29584c:
    // 0x29584c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295850:
    // 0x295850: 0x24450230  addiu       $a1, $v0, 0x230
    ctx->pc = 0x295850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
label_295854:
    // 0x295854: 0xc0cd8ec  jal         func_3363B0
label_295858:
    if (ctx->pc == 0x295858u) {
        ctx->pc = 0x295858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295854u;
        // 0x295858: 0x24510220  addiu       $s1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29585Cu;
        goto label_29585c;
    }
    ctx->pc = 0x295854u;
    SET_GPR_U32(ctx, 31, 0x29585Cu);
    ctx->pc = 0x295858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295854u;
    // 0x295858: 0x24510220  addiu       $s1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x295854u, 0x29585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29585Cu;
label_29585c:
    // 0x29585c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x29585cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_295860:
    // 0x295860: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x295860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_295864:
    // 0x295864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295868:
    // 0x295868: 0xc136b24  jal         func_4DAC90
label_29586c:
    if (ctx->pc == 0x29586Cu) {
        ctx->pc = 0x29586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295868u;
        // 0x29586c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295870u;
        goto label_295870;
    }
    ctx->pc = 0x295868u;
    SET_GPR_U32(ctx, 31, 0x295870u);
    ctx->pc = 0x29586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295868u;
    // 0x29586c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x295868u, 0x295870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295870u;
label_295870:
    // 0x295870: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x295870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295874:
    // 0x295874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295878:
    // 0x295878: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x295878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29587c:
    // 0x29587c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29587cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295880:
    // 0x295880: 0xc136b18  jal         func_4DAC60
label_295884:
    if (ctx->pc == 0x295884u) {
        ctx->pc = 0x295884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295880u;
        // 0x295884: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295888u;
        goto label_295888;
    }
    ctx->pc = 0x295880u;
    SET_GPR_U32(ctx, 31, 0x295888u);
    ctx->pc = 0x295884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295880u;
    // 0x295884: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x295880u, 0x295888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295888u;
label_295888:
    // 0x295888: 0xc0a53ce  jal         func_294F38
label_29588c:
    if (ctx->pc == 0x29588Cu) {
        ctx->pc = 0x29588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295888u;
        // 0x29588c: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295890u;
        goto label_295890;
    }
    ctx->pc = 0x295888u;
    SET_GPR_U32(ctx, 31, 0x295890u);
    ctx->pc = 0x29588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295888u;
    // 0x29588c: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F38u, 0x295888u, 0x295890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295890u;
label_295890:
    // 0x295890: 0xc0a53a6  jal         func_294E98
label_295894:
    if (ctx->pc == 0x295894u) {
        ctx->pc = 0x295894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295890u;
        // 0x295894: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295898u;
        goto label_295898;
    }
    ctx->pc = 0x295890u;
    SET_GPR_U32(ctx, 31, 0x295898u);
    ctx->pc = 0x295894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295890u;
    // 0x295894: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E98u, 0x295890u, 0x295898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295898u;
label_295898:
    // 0x295898: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x295898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_29589c:
    // 0x29589c: 0x90620275  lbu         $v0, 0x275($v1)
    ctx->pc = 0x29589cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 629)));
label_2958a0:
    // 0x2958a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2958a4:
    if (ctx->pc == 0x2958A4u) {
        ctx->pc = 0x2958A8u;
        goto label_2958a8;
    }
    ctx->pc = 0x2958A0u;
    {
        const bool branch_taken_0x2958a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2958a0) {
            ctx->pc = 0x2958B8u;
            goto label_2958b8;
        }
    }
    ctx->pc = 0x2958A8u;
label_2958a8:
    // 0x2958a8: 0xc0a54f2  jal         func_2953C8
label_2958ac:
    if (ctx->pc == 0x2958ACu) {
        ctx->pc = 0x2958ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958A8u;
        // 0x2958ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958B0u;
        goto label_2958b0;
    }
    ctx->pc = 0x2958A8u;
    SET_GPR_U32(ctx, 31, 0x2958B0u);
    ctx->pc = 0x2958ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2958A8u;
    // 0x2958ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2953C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2953C8u, 0x2958A8u, 0x2958B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958B0u;
label_2958b0:
    // 0x2958b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2958b4:
    if (ctx->pc == 0x2958B4u) {
        ctx->pc = 0x2958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958B0u;
        // 0x2958b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958B8u;
        goto label_2958b8;
    }
    ctx->pc = 0x2958B0u;
    {
        const bool branch_taken_0x2958b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958B0u;
        // 0x2958b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958b0) {
            ctx->pc = 0x2958C4u;
            goto label_2958c4;
        }
    }
    ctx->pc = 0x2958B8u;
label_2958b8:
    // 0x2958b8: 0xc0a554e  jal         func_295538
label_2958bc:
    if (ctx->pc == 0x2958BCu) {
        ctx->pc = 0x2958BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958B8u;
        // 0x2958bc: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958C0u;
        goto label_2958c0;
    }
    ctx->pc = 0x2958B8u;
    SET_GPR_U32(ctx, 31, 0x2958C0u);
    ctx->pc = 0x2958BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2958B8u;
    // 0x2958bc: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295538u, 0x2958B8u, 0x2958C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958C0u;
label_2958c0:
    // 0x2958c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2958c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2958c4:
    // 0x2958c4: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2958c8:
    // 0x2958c8: 0x8ca30244  lw          $v1, 0x244($a1)
    ctx->pc = 0x2958c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
label_2958cc:
    // 0x2958cc: 0x90620333  lbu         $v0, 0x333($v1)
    ctx->pc = 0x2958ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 819)));
label_2958d0:
    // 0x2958d0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2958d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2958d4:
    // 0x2958d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2958d8:
    if (ctx->pc == 0x2958D8u) {
        ctx->pc = 0x2958D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958D4u;
        // 0x2958d8: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958DCu;
        goto label_2958dc;
    }
    ctx->pc = 0x2958D4u;
    {
        const bool branch_taken_0x2958d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958D4u;
        // 0x2958d8: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958d4) {
            ctx->pc = 0x2958E8u;
            goto label_2958e8;
        }
    }
    ctx->pc = 0x2958DCu;
label_2958dc:
    // 0x2958dc: 0xc0a5338  jal         func_294CE0
label_2958e0:
    if (ctx->pc == 0x2958E0u) {
        ctx->pc = 0x2958E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958DCu;
        // 0x2958e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958E4u;
        goto label_2958e4;
    }
    ctx->pc = 0x2958DCu;
    SET_GPR_U32(ctx, 31, 0x2958E4u);
    ctx->pc = 0x2958E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2958DCu;
    // 0x2958e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CE0u, 0x2958DCu, 0x2958E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958E4u;
label_2958e4:
    // 0x2958e4: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x2958e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2958e8:
    // 0x2958e8: 0x90620273  lbu         $v0, 0x273($v1)
    ctx->pc = 0x2958e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 627)));
label_2958ec:
    // 0x2958ec: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_2958f0:
    if (ctx->pc == 0x2958F0u) {
        ctx->pc = 0x2958F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958ECu;
        // 0x2958f0: 0x8fa50240  lw          $a1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958F4u;
        goto label_2958f4;
    }
    ctx->pc = 0x2958ECu;
    {
        const bool branch_taken_0x2958ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2958F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958ECu;
        // 0x2958f0: 0x8fa50240  lw          $a1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958ec) {
            ctx->pc = 0x295900u;
            goto label_295900;
        }
    }
    ctx->pc = 0x2958F4u;
label_2958f4:
    // 0x2958f4: 0xc0a5494  jal         func_295250
label_2958f8:
    if (ctx->pc == 0x2958F8u) {
        ctx->pc = 0x2958F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958F4u;
        // 0x2958f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2958FCu;
        goto label_2958fc;
    }
    ctx->pc = 0x2958F4u;
    SET_GPR_U32(ctx, 31, 0x2958FCu);
    ctx->pc = 0x2958F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2958F4u;
    // 0x2958f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295250u, 0x2958F4u, 0x2958FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958FCu;
label_2958fc:
    // 0x2958fc: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x2958fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295900:
    // 0x295900: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295904:
    // 0x295904: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x295904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_295908:
    // 0x295908: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x295908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29590c:
    // 0x29590c: 0x24b301b4  addiu       $s3, $a1, 0x1B4
    ctx->pc = 0x29590cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 436));
label_295910:
    // 0x295910: 0x24b201b0  addiu       $s2, $a1, 0x1B0
    ctx->pc = 0x295910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
label_295914:
    // 0x295914: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x295914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295918:
    // 0x295918: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x295918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29591c:
    // 0x29591c: 0x0  nop
    ctx->pc = 0x29591cu;
    // NOP
label_295920:
    // 0x295920: 0x7fb902e0  sq          $t9, 0x2E0($sp)
    ctx->pc = 0x295920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 25));
label_295924:
    // 0x295924: 0xc0e409a  jal         func_390268
label_295928:
    if (ctx->pc == 0x295928u) {
        ctx->pc = 0x295928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295924u;
        // 0x295928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29592Cu;
        goto label_29592c;
    }
    ctx->pc = 0x295924u;
    SET_GPR_U32(ctx, 31, 0x29592Cu);
    ctx->pc = 0x295928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295924u;
    // 0x295928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x295924u, 0x29592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29592Cu;
label_29592c:
    // 0x29592c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29592cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295930:
    // 0x295930: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_295934:
    if (ctx->pc == 0x295934u) {
        ctx->pc = 0x295934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295930u;
        // 0x295934: 0x7bb902e0  lq          $t9, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295938u;
        goto label_295938;
    }
    ctx->pc = 0x295930u;
    {
        const bool branch_taken_0x295930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295930u;
        // 0x295934: 0x7bb902e0  lq          $t9, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295930) {
            ctx->pc = 0x295964u;
            goto label_295964;
        }
    }
    ctx->pc = 0x295938u;
label_295938:
    // 0x295938: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x295938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29593c:
    // 0x29593c: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
label_295940:
    if (ctx->pc == 0x295940u) {
        ctx->pc = 0x295940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29593Cu;
        // 0x295940: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295944u;
        goto label_295944;
    }
    ctx->pc = 0x29593Cu;
    {
        const bool branch_taken_0x29593c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29593c) {
            ctx->pc = 0x295940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29593Cu;
            // 0x295940: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29595Cu;
            goto label_29595c;
        }
    }
    ctx->pc = 0x295944u;
label_295944:
    // 0x295944: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x295944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_295948:
    // 0x295948: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x295948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29594c:
    // 0x29594c: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x29594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_295950:
    // 0x295950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_295954:
    // 0x295954: 0x10000003  b           . + 4 + (0x3 << 2)
label_295958:
    if (ctx->pc == 0x295958u) {
        ctx->pc = 0x295958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295954u;
        // 0x295958: 0xafa20244  sw          $v0, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29595Cu;
        goto label_29595c;
    }
    ctx->pc = 0x295954u;
    {
        const bool branch_taken_0x295954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295954u;
        // 0x295958: 0xafa20244  sw          $v0, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295954) {
            ctx->pc = 0x295964u;
            goto label_295964;
        }
    }
    ctx->pc = 0x29595Cu;
label_29595c:
    // 0x29595c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x29595cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_295960:
    // 0x295960: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x295960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_295964:
    // 0x295964: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x295964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_295968:
    // 0x295968: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x295968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_29596c:
    // 0x29596c: 0x681ffec  bgez        $s4, . + 4 + (-0x14 << 2)
label_295970:
    if (ctx->pc == 0x295970u) {
        ctx->pc = 0x295970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29596Cu;
        // 0x295970: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295974u;
        goto label_295974;
    }
    ctx->pc = 0x29596Cu;
    {
        const bool branch_taken_0x29596c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x295970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29596Cu;
        // 0x295970: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29596c) {
            ctx->pc = 0x295920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295920;
        }
    }
    ctx->pc = 0x295974u;
label_295974:
    // 0x295974: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x295974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_295978:
    // 0x295978: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_29597c:
    if (ctx->pc == 0x29597Cu) {
        ctx->pc = 0x29597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295978u;
        // 0x29597c: 0x8fa50244  lw          $a1, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295980u;
        goto label_295980;
    }
    ctx->pc = 0x295978u;
    {
        const bool branch_taken_0x295978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295978u;
        // 0x29597c: 0x8fa50244  lw          $a1, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295978) {
            ctx->pc = 0x295998u;
            goto label_295998;
        }
    }
    ctx->pc = 0x295980u;
label_295980:
    // 0x295980: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x295980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295984:
    // 0x295984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295988:
    // 0x295988: 0x8ca20244  lw          $v0, 0x244($a1)
    ctx->pc = 0x295988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
label_29598c:
    // 0x29598c: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x29598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
label_295990:
    // 0x295990: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x295990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_295994:
    // 0x295994: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x295994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_295998:
    // 0x295998: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x295998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29599c:
    // 0x29599c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29599cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2959a0:
    // 0x2959a0: 0x2ca50002  sltiu       $a1, $a1, 0x2
    ctx->pc = 0x2959a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2959a4:
    // 0x2959a4: 0x13200053  beqz        $t9, . + 4 + (0x53 << 2)
label_2959a8:
    if (ctx->pc == 0x2959A8u) {
        ctx->pc = 0x2959A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959A4u;
        // 0x2959a8: 0xafa50254  sw          $a1, 0x254($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2959ACu;
        goto label_2959ac;
    }
    ctx->pc = 0x2959A4u;
    {
        const bool branch_taken_0x2959a4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959A4u;
        // 0x2959a8: 0xafa50254  sw          $a1, 0x254($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959a4) {
            ctx->pc = 0x295AF4u;
            goto label_295af4;
        }
    }
    ctx->pc = 0x2959ACu;
label_2959ac:
    // 0x2959ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2959acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2959b0:
    // 0x2959b0: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2959b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2959b4:
    // 0x2959b4: 0x244b4b00  addiu       $t3, $v0, 0x4B00
    ctx->pc = 0x2959b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2959b8:
    // 0x2959b8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2959bc:
    // 0x2959bc: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x2959bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_2959c0:
    // 0x2959c0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2959c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2959c4:
    // 0x2959c4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2959c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_2959c8:
    // 0x2959c8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2959c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_2959cc:
    // 0x2959cc: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2959ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2959d0:
    // 0x2959d0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2959d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2959d4:
    // 0x2959d4: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2959d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2959d8:
    // 0x2959d8: 0xc47410c8  lwc1        $f20, 0x10C8($v1)
    ctx->pc = 0x2959d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2959dc:
    // 0x2959dc: 0x25370001  addiu       $s7, $t1, 0x1
    ctx->pc = 0x2959dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2959e0:
    // 0x2959e0: 0x86c30092  lh          $v1, 0x92($s6)
    ctx->pc = 0x2959e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2959e4:
    // 0x2959e4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2959e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2959e8:
    // 0x2959e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2959e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2959ec:
    // 0x2959ec: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x2959ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2959f0:
    // 0x2959f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2959f4:
    // 0x2959f4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2959f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2959f8:
    // 0x2959f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2959f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2959fc:
    // 0x2959fc: 0x13200022  beqz        $t9, . + 4 + (0x22 << 2)
label_295a00:
    if (ctx->pc == 0x295A00u) {
        ctx->pc = 0x295A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959FCu;
        // 0x295a00: 0x7fa20210  sq          $v0, 0x210($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A04u;
        goto label_295a04;
    }
    ctx->pc = 0x2959FCu;
    {
        const bool branch_taken_0x2959fc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959FCu;
        // 0x295a00: 0x7fa20210  sq          $v0, 0x210($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959fc) {
            ctx->pc = 0x295A88u;
            goto label_295a88;
        }
    }
    ctx->pc = 0x295A04u;
label_295a04:
    // 0x295a04: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x295a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_295a08:
    // 0x295a08: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x295a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_295a0c:
    // 0x295a0c: 0x24b44b00  addiu       $s4, $a1, 0x4B00
    ctx->pc = 0x295a0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_295a10:
    // 0x295a10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x295a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295a14:
    // 0x295a14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_295a18:
    if (ctx->pc == 0x295A18u) {
        ctx->pc = 0x295A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A14u;
        // 0x295a18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A1Cu;
        goto label_295a1c;
    }
    ctx->pc = 0x295A14u;
    {
        const bool branch_taken_0x295a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A14u;
        // 0x295a18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a14) {
            ctx->pc = 0x295A78u;
            goto label_295a78;
        }
    }
    ctx->pc = 0x295A1Cu;
label_295a1c:
    // 0x295a1c: 0x84460092  lh          $a2, 0x92($v0)
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_295a20:
    // 0x295a20: 0x7faa0280  sq          $t2, 0x280($sp)
    ctx->pc = 0x295a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 10));
label_295a24:
    // 0x295a24: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x295a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_295a28:
    // 0x295a28: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x295a28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_295a2c:
    // 0x295a2c: 0x7fab0290  sq          $t3, 0x290($sp)
    ctx->pc = 0x295a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 11));
label_295a30:
    // 0x295a30: 0x7fb902e0  sq          $t9, 0x2E0($sp)
    ctx->pc = 0x295a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 25));
label_295a34:
    // 0x295a34: 0xc136afa  jal         func_4DABE8
label_295a38:
    if (ctx->pc == 0x295A38u) {
        ctx->pc = 0x295A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A34u;
        // 0x295a38: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A3Cu;
        goto label_295a3c;
    }
    ctx->pc = 0x295A34u;
    SET_GPR_U32(ctx, 31, 0x295A3Cu);
    ctx->pc = 0x295A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A34u;
    // 0x295a38: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x295A34u, 0x295A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A3Cu;
label_295a3c:
    // 0x295a3c: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x295a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_295a40:
    // 0x295a40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x295a40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_295a44:
    // 0x295a44: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x295a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_295a48:
    // 0x295a48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x295a48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_295a4c:
    // 0x295a4c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x295a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_295a50:
    // 0x295a50: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x295a50u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_295a54:
    // 0x295a54: 0x7baa0280  lq          $t2, 0x280($sp)
    ctx->pc = 0x295a54u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_295a58:
    // 0x295a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295a5c:
    // 0x295a5c: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x295a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_295a60:
    // 0x295a60: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x295a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295a64:
    // 0x295a64: 0x7bab0290  lq          $t3, 0x290($sp)
    ctx->pc = 0x295a64u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_295a68:
    // 0x295a68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_295a6c:
    if (ctx->pc == 0x295A6Cu) {
        ctx->pc = 0x295A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A68u;
        // 0x295a6c: 0x7bb902e0  lq          $t9, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A70u;
        goto label_295a70;
    }
    ctx->pc = 0x295A68u;
    {
        const bool branch_taken_0x295a68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x295A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A68u;
        // 0x295a6c: 0x7bb902e0  lq          $t9, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a68) {
            ctx->pc = 0x295A78u;
            goto label_295a78;
        }
    }
    ctx->pc = 0x295A70u;
label_295a70:
    // 0x295a70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x295a70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_295a74:
    // 0x295a74: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x295a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295a78:
    // 0x295a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_295a7c:
    // 0x295a7c: 0x239102b  sltu        $v0, $s1, $t9
    ctx->pc = 0x295a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_295a80:
    // 0x295a80: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_295a84:
    if (ctx->pc == 0x295A84u) {
        ctx->pc = 0x295A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A80u;
        // 0x295a84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A88u;
        goto label_295a88;
    }
    ctx->pc = 0x295A80u;
    {
        const bool branch_taken_0x295a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A80u;
        // 0x295a84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a80) {
            ctx->pc = 0x295A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295a10;
        }
    }
    ctx->pc = 0x295A88u;
label_295a88:
    // 0x295a88: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x295a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_295a8c:
    // 0x295a8c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x295a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_295a90:
    // 0x295a90: 0x2652018  mult        $a0, $s3, $a1
    ctx->pc = 0x295a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_295a94:
    // 0x295a94: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x295a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_295a98:
    // 0x295a98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_295a9c:
    // 0x295a9c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x295a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_295aa0:
    // 0x295aa0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_295aa4:
    // 0x295aa4: 0x3be4021  addu        $t0, $sp, $fp
    ctx->pc = 0x295aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
label_295aa8:
    // 0x295aa8: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_295aac:
    // 0x295aac: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x295aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_295ab0:
    // 0x295ab0: 0x279382b  sltu        $a3, $s3, $t9
    ctx->pc = 0x295ab0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_295ab4:
    // 0x295ab4: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x295ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_295ab8:
    // 0x295ab8: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x295ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
label_295abc:
    // 0x295abc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x295abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_295ac0:
    // 0x295ac0: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x295ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_295ac4:
    // 0x295ac4: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x295ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_295ac8:
    // 0x295ac8: 0x84a30092  lh          $v1, 0x92($a1)
    ctx->pc = 0x295ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_295acc:
    // 0x295acc: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x295accu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_295ad0:
    // 0x295ad0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x295ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_295ad4:
    // 0x295ad4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x295ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_295ad8:
    // 0x295ad8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x295ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_295adc:
    // 0x295adc: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x295adcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_295ae0:
    // 0x295ae0: 0xacd60024  sw          $s6, 0x24($a2)
    ctx->pc = 0x295ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 22));
label_295ae4:
    // 0x295ae4: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x295ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_295ae8:
    // 0x295ae8: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x295ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_295aec:
    // 0x295aec: 0x14e0ffb4  bnez        $a3, . + 4 + (-0x4C << 2)
label_295af0:
    if (ctx->pc == 0x295AF0u) {
        ctx->pc = 0x295AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AECu;
        // 0x295af0: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295AF4u;
        goto label_295af4;
    }
    ctx->pc = 0x295AECu;
    {
        const bool branch_taken_0x295aec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x295AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AECu;
        // 0x295af0: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295aec) {
            ctx->pc = 0x2959C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2959c0;
        }
    }
    ctx->pc = 0x295AF4u;
label_295af4:
    // 0x295af4: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x295af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_295af8:
    // 0x295af8: 0x14a0005b  bnez        $a1, . + 4 + (0x5B << 2)
label_295afc:
    if (ctx->pc == 0x295AFCu) {
        ctx->pc = 0x295AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AF8u;
        // 0x295afc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295B00u;
        goto label_295b00;
    }
    ctx->pc = 0x295AF8u;
    {
        const bool branch_taken_0x295af8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x295AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AF8u;
        // 0x295afc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295af8) {
            ctx->pc = 0x295C68u;
            goto label_295c68;
        }
    }
    ctx->pc = 0x295B00u;
label_295b00:
    // 0x295b00: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x295b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
label_295b04:
    // 0x295b04: 0x0  nop
    ctx->pc = 0x295b04u;
    // NOP
label_295b08:
    // 0x295b08: 0x13200050  beqz        $t9, . + 4 + (0x50 << 2)
label_295b0c:
    if (ctx->pc == 0x295B0Cu) {
        ctx->pc = 0x295B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B08u;
        // 0x295b0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295B10u;
        goto label_295b10;
    }
    ctx->pc = 0x295B08u;
    {
        const bool branch_taken_0x295b08 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B08u;
        // 0x295b0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b08) {
            ctx->pc = 0x295C4Cu;
            goto label_295c4c;
        }
    }
    ctx->pc = 0x295B10u;
label_295b10:
    // 0x295b10: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x295b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_295b14:
    // 0x295b14: 0x0  nop
    ctx->pc = 0x295b14u;
    // NOP
label_295b18:
    // 0x295b18: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x295b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_295b1c:
    // 0x295b1c: 0x59182b  sltu        $v1, $v0, $t9
    ctx->pc = 0x295b1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_295b20:
    // 0x295b20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x295b20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295b24:
    // 0x295b24: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x295b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_295b28:
    // 0x295b28: 0x323b80a  movz        $s7, $t9, $v1
    ctx->pc = 0x295b28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 25));
label_295b2c:
    // 0x295b2c: 0x117102b  sltu        $v0, $t0, $s7
    ctx->pc = 0x295b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_295b30:
    // 0x295b30: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_295b34:
    if (ctx->pc == 0x295B34u) {
        ctx->pc = 0x295B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B30u;
        // 0x295b34: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295B38u;
        goto label_295b38;
    }
    ctx->pc = 0x295B30u;
    {
        const bool branch_taken_0x295b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B30u;
        // 0x295b34: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b30) {
            ctx->pc = 0x295C3Cu;
            goto label_295c3c;
        }
    }
    ctx->pc = 0x295B38u;
label_295b38:
    // 0x295b38: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x295b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_295b3c:
    // 0x295b3c: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_295b40:
    // 0x295b40: 0x102f018  mult        $fp, $t0, $v0
    ctx->pc = 0x295b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_295b44:
    // 0x295b44: 0x27ae0060  addiu       $t6, $sp, 0x60
    ctx->pc = 0x295b44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_295b48:
    // 0x295b48: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x295b48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_295b4c:
    // 0x295b4c: 0x0  nop
    ctx->pc = 0x295b4cu;
    // NOP
label_295b50:
    // 0x295b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295b54:
    // 0x295b54: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
label_295b58:
    if (ctx->pc == 0x295B58u) {
        ctx->pc = 0x295B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B54u;
        // 0x295b58: 0x26ca0001  addiu       $t2, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295B5Cu;
        goto label_295b5c;
    }
    ctx->pc = 0x295B54u;
    {
        const bool branch_taken_0x295b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B54u;
        // 0x295b58: 0x26ca0001  addiu       $t2, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b54) {
            ctx->pc = 0x295C2Cu;
            goto label_295c2c;
        }
    }
    ctx->pc = 0x295B5Cu;
label_295b5c:
    // 0x295b5c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x295b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_295b60:
    // 0x295b60: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_295b64:
    // 0x295b64: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295b68:
    // 0x295b68: 0x3dd8821  addu        $s1, $fp, $sp
    ctx->pc = 0x295b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
label_295b6c:
    // 0x295b6c: 0x1fea821  addu        $s5, $t7, $fp
    ctx->pc = 0x295b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
label_295b70:
    // 0x295b70: 0x1de9821  addu        $s3, $t6, $fp
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
label_295b74:
    // 0x295b74: 0x0  nop
    ctx->pc = 0x295b74u;
    // NOP
label_295b78:
    // 0x295b78: 0x12d40026  beq         $s6, $s4, . + 4 + (0x26 << 2)
label_295b7c:
    if (ctx->pc == 0x295B7Cu) {
        ctx->pc = 0x295B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B78u;
        // 0x295b7c: 0x2cd9018  mult        $s2, $s6, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x295B80u;
        goto label_295b80;
    }
    ctx->pc = 0x295B78u;
    {
        const bool branch_taken_0x295b78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 20));
        ctx->pc = 0x295B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B78u;
        // 0x295b7c: 0x2cd9018  mult        $s2, $s6, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b78) {
            ctx->pc = 0x295C14u;
            goto label_295c14;
        }
    }
    ctx->pc = 0x295B80u;
label_295b80:
    // 0x295b80: 0x7fa80260  sq          $t0, 0x260($sp)
    ctx->pc = 0x295b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 8));
label_295b84:
    // 0x295b84: 0x7fa90270  sq          $t1, 0x270($sp)
    ctx->pc = 0x295b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
label_295b88:
    // 0x295b88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x295b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_295b8c:
    // 0x295b8c: 0x7faa0280  sq          $t2, 0x280($sp)
    ctx->pc = 0x295b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 10));
label_295b90:
    // 0x295b90: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x295b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_295b94:
    // 0x295b94: 0x7fab0290  sq          $t3, 0x290($sp)
    ctx->pc = 0x295b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 11));
label_295b98:
    // 0x295b98: 0x1328021  addu        $s0, $t1, $s2
    ctx->pc = 0x295b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
label_295b9c:
    // 0x295b9c: 0x7fac02a0  sq          $t4, 0x2A0($sp)
    ctx->pc = 0x295b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 12));
label_295ba0:
    // 0x295ba0: 0x7fad02b0  sq          $t5, 0x2B0($sp)
    ctx->pc = 0x295ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 13));
label_295ba4:
    // 0x295ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295ba8:
    // 0x295ba8: 0x7fae02c0  sq          $t6, 0x2C0($sp)
    ctx->pc = 0x295ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 14));
label_295bac:
    // 0x295bac: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x295bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_295bb0:
    // 0x295bb0: 0x7faf02d0  sq          $t7, 0x2D0($sp)
    ctx->pc = 0x295bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 15));
label_295bb4:
    // 0x295bb4: 0xc0cdcc2  jal         func_337308
label_295bb8:
    if (ctx->pc == 0x295BB8u) {
        ctx->pc = 0x295BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BB4u;
        // 0x295bb8: 0x7fb902e0  sq          $t9, 0x2E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295BBCu;
        goto label_295bbc;
    }
    ctx->pc = 0x295BB4u;
    SET_GPR_U32(ctx, 31, 0x295BBCu);
    ctx->pc = 0x295BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BB4u;
    // 0x295bb8: 0x7fb902e0  sq          $t9, 0x2E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337308u, 0x295BB4u, 0x295BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BBCu;
label_295bbc:
    // 0x295bbc: 0x7bac02a0  lq          $t4, 0x2A0($sp)
    ctx->pc = 0x295bbcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_295bc0:
    // 0x295bc0: 0x7ba80260  lq          $t0, 0x260($sp)
    ctx->pc = 0x295bc0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_295bc4:
    // 0x295bc4: 0x7ba90270  lq          $t1, 0x270($sp)
    ctx->pc = 0x295bc4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_295bc8:
    // 0x295bc8: 0x7baa0280  lq          $t2, 0x280($sp)
    ctx->pc = 0x295bc8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_295bcc:
    // 0x295bcc: 0x7bab0290  lq          $t3, 0x290($sp)
    ctx->pc = 0x295bccu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_295bd0:
    // 0x295bd0: 0x7bad02b0  lq          $t5, 0x2B0($sp)
    ctx->pc = 0x295bd0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_295bd4:
    // 0x295bd4: 0x7bae02c0  lq          $t6, 0x2C0($sp)
    ctx->pc = 0x295bd4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_295bd8:
    // 0x295bd8: 0x7baf02d0  lq          $t7, 0x2D0($sp)
    ctx->pc = 0x295bd8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_295bdc:
    // 0x295bdc: 0x144c000d  bne         $v0, $t4, . + 4 + (0xD << 2)
label_295be0:
    if (ctx->pc == 0x295BE0u) {
        ctx->pc = 0x295BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BDCu;
        // 0x295be0: 0x7bb902e0  lq          $t9, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295BE4u;
        goto label_295be4;
    }
    ctx->pc = 0x295BDCu;
    {
        const bool branch_taken_0x295bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x295BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BDCu;
        // 0x295be0: 0x7bb902e0  lq          $t9, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bdc) {
            ctx->pc = 0x295C14u;
            goto label_295c14;
        }
    }
    ctx->pc = 0x295BE4u;
label_295be4:
    // 0x295be4: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x295be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_295be8:
    // 0x295be8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x295be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_295bec:
    // 0x295bec: 0x78830070  lq          $v1, 0x70($a0)
    ctx->pc = 0x295becu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 112)));
label_295bf0:
    // 0x295bf0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295bf4:
    // 0x295bf4: 0x7fa30210  sq          $v1, 0x210($sp)
    ctx->pc = 0x295bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 3));
label_295bf8:
    // 0x295bf8: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x295bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
label_295bfc:
    // 0x295bfc: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x295bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_295c00:
    // 0x295c00: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x295c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_295c04:
    // 0x295c04: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x295c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_295c08:
    // 0x295c08: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x295c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_295c0c:
    // 0x295c0c: 0xae250084  sw          $a1, 0x84($s1)
    ctx->pc = 0x295c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 5));
label_295c10:
    // 0x295c10: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x295c10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
label_295c14:
    // 0x295c14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x295c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_295c18:
    // 0x295c18: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x295c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_295c1c:
    // 0x295c1c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x295c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_295c20:
    // 0x295c20: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x295c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_295c24:
    // 0x295c24: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_295c28:
    if (ctx->pc == 0x295C28u) {
        ctx->pc = 0x295C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C24u;
        // 0x295c28: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C2Cu;
        goto label_295c2c;
    }
    ctx->pc = 0x295C24u;
    {
        const bool branch_taken_0x295c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C24u;
        // 0x295c28: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c24) {
            ctx->pc = 0x295B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295b78;
        }
    }
    ctx->pc = 0x295C2Cu;
label_295c2c:
    // 0x295c2c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x295c2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_295c30:
    // 0x295c30: 0x2d7102b  sltu        $v0, $s6, $s7
    ctx->pc = 0x295c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_295c34:
    // 0x295c34: 0x5440ffc6  bnel        $v0, $zero, . + 4 + (-0x3A << 2)
label_295c38:
    if (ctx->pc == 0x295C38u) {
        ctx->pc = 0x295C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C34u;
        // 0x295c38: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C3Cu;
        goto label_295c3c;
    }
    ctx->pc = 0x295C34u;
    {
        const bool branch_taken_0x295c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295c34) {
            ctx->pc = 0x295C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C34u;
            // 0x295c38: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295b50;
        }
    }
    ctx->pc = 0x295C3Cu;
label_295c3c:
    // 0x295c3c: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x295c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_295c40:
    // 0x295c40: 0x119102b  sltu        $v0, $t0, $t9
    ctx->pc = 0x295c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_295c44:
    // 0x295c44: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_295c48:
    if (ctx->pc == 0x295C48u) {
        ctx->pc = 0x295C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C44u;
        // 0x295c48: 0x8fa30244  lw          $v1, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C4Cu;
        goto label_295c4c;
    }
    ctx->pc = 0x295C44u;
    {
        const bool branch_taken_0x295c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C44u;
        // 0x295c48: 0x8fa30244  lw          $v1, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c44) {
            ctx->pc = 0x295B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295b18;
        }
    }
    ctx->pc = 0x295C4Cu;
label_295c4c:
    // 0x295c4c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
label_295c50:
    if (ctx->pc == 0x295C50u) {
        ctx->pc = 0x295C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C4Cu;
        // 0x295c50: 0x8fa20248  lw          $v0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C54u;
        goto label_295c54;
    }
    ctx->pc = 0x295C4Cu;
    {
        const bool branch_taken_0x295c4c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C4Cu;
        // 0x295c50: 0x8fa20248  lw          $v0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c4c) {
            ctx->pc = 0x295C68u;
            goto label_295c68;
        }
    }
    ctx->pc = 0x295C54u;
label_295c54:
    // 0x295c54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_295c58:
    // 0x295c58: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x295c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_295c5c:
    // 0x295c5c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x295c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_295c60:
    // 0x295c60: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_295c64:
    if (ctx->pc == 0x295C64u) {
        ctx->pc = 0x295C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C60u;
        // 0x295c64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C68u;
        goto label_295c68;
    }
    ctx->pc = 0x295C60u;
    {
        const bool branch_taken_0x295c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C60u;
        // 0x295c64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c60) {
            ctx->pc = 0x295B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295b08;
        }
    }
    ctx->pc = 0x295C68u;
label_295c68:
    // 0x295c68: 0x13200018  beqz        $t9, . + 4 + (0x18 << 2)
label_295c6c:
    if (ctx->pc == 0x295C6Cu) {
        ctx->pc = 0x295C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C68u;
        // 0x295c6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C70u;
        goto label_295c70;
    }
    ctx->pc = 0x295C68u;
    {
        const bool branch_taken_0x295c68 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C68u;
        // 0x295c6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c68) {
            ctx->pc = 0x295CCCu;
            goto label_295ccc;
        }
    }
    ctx->pc = 0x295C70u;
label_295c70:
    // 0x295c70: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x295c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_295c74:
    // 0x295c74: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x295c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_295c78:
    // 0x295c78: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x295c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_295c7c:
    // 0x295c7c: 0x0  nop
    ctx->pc = 0x295c7cu;
    // NOP
label_295c80:
    // 0x295c80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_295c84:
    // 0x295c84: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x295c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295c88:
    // 0x295c88: 0xc0a58bc  jal         func_2962F0
label_295c8c:
    if (ctx->pc == 0x295C8Cu) {
        ctx->pc = 0x295C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C88u;
        // 0x295c8c: 0x7fb902e0  sq          $t9, 0x2E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C90u;
        goto label_295c90;
    }
    ctx->pc = 0x295C88u;
    SET_GPR_U32(ctx, 31, 0x295C90u);
    ctx->pc = 0x295C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C88u;
    // 0x295c8c: 0x7fb902e0  sq          $t9, 0x2E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x295C88u, 0x295C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C90u;
label_295c90:
    // 0x295c90: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x295c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_295c94:
    // 0x295c94: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x295c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_295c98:
    // 0x295c98: 0x600013  mtlo        $v1
    ctx->pc = 0x295c98u;
    ctx->lo = GPR_U64(ctx, 3);
label_295c9c:
    // 0x295c9c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x295c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_295ca0:
    // 0x295ca0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x295ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_295ca4:
    // 0x295ca4: 0x70538000  madd        $s0, $v0, $s3
    ctx->pc = 0x295ca4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_295ca8:
    // 0x295ca8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x295ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_295cac:
    // 0x295cac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x295cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_295cb0:
    // 0x295cb0: 0x40f809  jalr        $v0
label_295cb4:
    if (ctx->pc == 0x295CB4u) {
        ctx->pc = 0x295CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CB0u;
        // 0x295cb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295CB8u;
        goto label_295cb8;
    }
    ctx->pc = 0x295CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x295CB8u);
        ctx->pc = 0x295CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CB0u;
        // 0x295cb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295CB0u, 0x295CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295CB8u;
label_295cb8:
    // 0x295cb8: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x295cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
label_295cbc:
    // 0x295cbc: 0x7bb902e0  lq          $t9, 0x2E0($sp)
    ctx->pc = 0x295cbcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_295cc0:
    // 0x295cc0: 0x259102b  sltu        $v0, $s2, $t9
    ctx->pc = 0x295cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_295cc4:
    // 0x295cc4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_295cc8:
    if (ctx->pc == 0x295CC8u) {
        ctx->pc = 0x295CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CC4u;
        // 0x295cc8: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295CCCu;
        goto label_295ccc;
    }
    ctx->pc = 0x295CC4u;
    {
        const bool branch_taken_0x295cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295cc4) {
            ctx->pc = 0x295CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295CC4u;
            // 0x295cc8: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295c80;
        }
    }
    ctx->pc = 0x295CCCu;
label_295ccc:
    // 0x295ccc: 0xc0a5494  jal         func_295250
label_295cd0:
    if (ctx->pc == 0x295CD0u) {
        ctx->pc = 0x295CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CCCu;
        // 0x295cd0: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295CD4u;
        goto label_295cd4;
    }
    ctx->pc = 0x295CCCu;
    SET_GPR_U32(ctx, 31, 0x295CD4u);
    ctx->pc = 0x295CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CCCu;
    // 0x295cd0: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295250u, 0x295CCCu, 0x295CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CD4u;
label_295cd4:
    // 0x295cd4: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x295cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_295cd8:
    // 0x295cd8: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x295cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_295cdc:
    // 0x295cdc: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x295cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_295ce0:
    // 0x295ce0: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x295ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_295ce4:
    // 0x295ce4: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x295ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_295ce8:
    // 0x295ce8: 0x7bb50330  lq          $s5, 0x330($sp)
    ctx->pc = 0x295ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_295cec:
    // 0x295cec: 0x7bb60320  lq          $s6, 0x320($sp)
    ctx->pc = 0x295cecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_295cf0:
    // 0x295cf0: 0x7bb70310  lq          $s7, 0x310($sp)
    ctx->pc = 0x295cf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_295cf4:
    // 0x295cf4: 0x7bbe0300  lq          $fp, 0x300($sp)
    ctx->pc = 0x295cf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_295cf8:
    // 0x295cf8: 0xdfbf02f0  ld          $ra, 0x2F0($sp)
    ctx->pc = 0x295cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_295cfc:
    // 0x295cfc: 0xc7b40390  lwc1        $f20, 0x390($sp)
    ctx->pc = 0x295cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_295d00:
    // 0x295d00: 0x3e00008  jr          $ra
label_295d04:
    if (ctx->pc == 0x295D04u) {
        ctx->pc = 0x295D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D00u;
        // 0x295d04: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D08u;
        goto label_fallthrough_0x295d00;
    }
    ctx->pc = 0x295D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D00u;
        // 0x295d04: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x295d00:
    ctx->pc = 0x295D08u;
}
