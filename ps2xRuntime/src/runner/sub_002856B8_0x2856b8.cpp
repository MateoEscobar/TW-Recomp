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

// Function: sub_002856B8
// Address: 0x2856b8 - 0x286550
void sub_002856B8_0x2856b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002856B8_0x2856b8");
#endif

    switch (ctx->pc) {
        case 0x2856b8u: goto label_2856b8;
        case 0x2856bcu: goto label_2856bc;
        case 0x2856c0u: goto label_2856c0;
        case 0x2856c4u: goto label_2856c4;
        case 0x2856c8u: goto label_2856c8;
        case 0x2856ccu: goto label_2856cc;
        case 0x2856d0u: goto label_2856d0;
        case 0x2856d4u: goto label_2856d4;
        case 0x2856d8u: goto label_2856d8;
        case 0x2856dcu: goto label_2856dc;
        case 0x2856e0u: goto label_2856e0;
        case 0x2856e4u: goto label_2856e4;
        case 0x2856e8u: goto label_2856e8;
        case 0x2856ecu: goto label_2856ec;
        case 0x2856f0u: goto label_2856f0;
        case 0x2856f4u: goto label_2856f4;
        case 0x2856f8u: goto label_2856f8;
        case 0x2856fcu: goto label_2856fc;
        case 0x285700u: goto label_285700;
        case 0x285704u: goto label_285704;
        case 0x285708u: goto label_285708;
        case 0x28570cu: goto label_28570c;
        case 0x285710u: goto label_285710;
        case 0x285714u: goto label_285714;
        case 0x285718u: goto label_285718;
        case 0x28571cu: goto label_28571c;
        case 0x285720u: goto label_285720;
        case 0x285724u: goto label_285724;
        case 0x285728u: goto label_285728;
        case 0x28572cu: goto label_28572c;
        case 0x285730u: goto label_285730;
        case 0x285734u: goto label_285734;
        case 0x285738u: goto label_285738;
        case 0x28573cu: goto label_28573c;
        case 0x285740u: goto label_285740;
        case 0x285744u: goto label_285744;
        case 0x285748u: goto label_285748;
        case 0x28574cu: goto label_28574c;
        case 0x285750u: goto label_285750;
        case 0x285754u: goto label_285754;
        case 0x285758u: goto label_285758;
        case 0x28575cu: goto label_28575c;
        case 0x285760u: goto label_285760;
        case 0x285764u: goto label_285764;
        case 0x285768u: goto label_285768;
        case 0x28576cu: goto label_28576c;
        case 0x285770u: goto label_285770;
        case 0x285774u: goto label_285774;
        case 0x285778u: goto label_285778;
        case 0x28577cu: goto label_28577c;
        case 0x285780u: goto label_285780;
        case 0x285784u: goto label_285784;
        case 0x285788u: goto label_285788;
        case 0x28578cu: goto label_28578c;
        case 0x285790u: goto label_285790;
        case 0x285794u: goto label_285794;
        case 0x285798u: goto label_285798;
        case 0x28579cu: goto label_28579c;
        case 0x2857a0u: goto label_2857a0;
        case 0x2857a4u: goto label_2857a4;
        case 0x2857a8u: goto label_2857a8;
        case 0x2857acu: goto label_2857ac;
        case 0x2857b0u: goto label_2857b0;
        case 0x2857b4u: goto label_2857b4;
        case 0x2857b8u: goto label_2857b8;
        case 0x2857bcu: goto label_2857bc;
        case 0x2857c0u: goto label_2857c0;
        case 0x2857c4u: goto label_2857c4;
        case 0x2857c8u: goto label_2857c8;
        case 0x2857ccu: goto label_2857cc;
        case 0x2857d0u: goto label_2857d0;
        case 0x2857d4u: goto label_2857d4;
        case 0x2857d8u: goto label_2857d8;
        case 0x2857dcu: goto label_2857dc;
        case 0x2857e0u: goto label_2857e0;
        case 0x2857e4u: goto label_2857e4;
        case 0x2857e8u: goto label_2857e8;
        case 0x2857ecu: goto label_2857ec;
        case 0x2857f0u: goto label_2857f0;
        case 0x2857f4u: goto label_2857f4;
        case 0x2857f8u: goto label_2857f8;
        case 0x2857fcu: goto label_2857fc;
        case 0x285800u: goto label_285800;
        case 0x285804u: goto label_285804;
        case 0x285808u: goto label_285808;
        case 0x28580cu: goto label_28580c;
        case 0x285810u: goto label_285810;
        case 0x285814u: goto label_285814;
        case 0x285818u: goto label_285818;
        case 0x28581cu: goto label_28581c;
        case 0x285820u: goto label_285820;
        case 0x285824u: goto label_285824;
        case 0x285828u: goto label_285828;
        case 0x28582cu: goto label_28582c;
        case 0x285830u: goto label_285830;
        case 0x285834u: goto label_285834;
        case 0x285838u: goto label_285838;
        case 0x28583cu: goto label_28583c;
        case 0x285840u: goto label_285840;
        case 0x285844u: goto label_285844;
        case 0x285848u: goto label_285848;
        case 0x28584cu: goto label_28584c;
        case 0x285850u: goto label_285850;
        case 0x285854u: goto label_285854;
        case 0x285858u: goto label_285858;
        case 0x28585cu: goto label_28585c;
        case 0x285860u: goto label_285860;
        case 0x285864u: goto label_285864;
        case 0x285868u: goto label_285868;
        case 0x28586cu: goto label_28586c;
        case 0x285870u: goto label_285870;
        case 0x285874u: goto label_285874;
        case 0x285878u: goto label_285878;
        case 0x28587cu: goto label_28587c;
        case 0x285880u: goto label_285880;
        case 0x285884u: goto label_285884;
        case 0x285888u: goto label_285888;
        case 0x28588cu: goto label_28588c;
        case 0x285890u: goto label_285890;
        case 0x285894u: goto label_285894;
        case 0x285898u: goto label_285898;
        case 0x28589cu: goto label_28589c;
        case 0x2858a0u: goto label_2858a0;
        case 0x2858a4u: goto label_2858a4;
        case 0x2858a8u: goto label_2858a8;
        case 0x2858acu: goto label_2858ac;
        case 0x2858b0u: goto label_2858b0;
        case 0x2858b4u: goto label_2858b4;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858bcu: goto label_2858bc;
        case 0x2858c0u: goto label_2858c0;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858c8u: goto label_2858c8;
        case 0x2858ccu: goto label_2858cc;
        case 0x2858d0u: goto label_2858d0;
        case 0x2858d4u: goto label_2858d4;
        case 0x2858d8u: goto label_2858d8;
        case 0x2858dcu: goto label_2858dc;
        case 0x2858e0u: goto label_2858e0;
        case 0x2858e4u: goto label_2858e4;
        case 0x2858e8u: goto label_2858e8;
        case 0x2858ecu: goto label_2858ec;
        case 0x2858f0u: goto label_2858f0;
        case 0x2858f4u: goto label_2858f4;
        case 0x2858f8u: goto label_2858f8;
        case 0x2858fcu: goto label_2858fc;
        case 0x285900u: goto label_285900;
        case 0x285904u: goto label_285904;
        case 0x285908u: goto label_285908;
        case 0x28590cu: goto label_28590c;
        case 0x285910u: goto label_285910;
        case 0x285914u: goto label_285914;
        case 0x285918u: goto label_285918;
        case 0x28591cu: goto label_28591c;
        case 0x285920u: goto label_285920;
        case 0x285924u: goto label_285924;
        case 0x285928u: goto label_285928;
        case 0x28592cu: goto label_28592c;
        case 0x285930u: goto label_285930;
        case 0x285934u: goto label_285934;
        case 0x285938u: goto label_285938;
        case 0x28593cu: goto label_28593c;
        case 0x285940u: goto label_285940;
        case 0x285944u: goto label_285944;
        case 0x285948u: goto label_285948;
        case 0x28594cu: goto label_28594c;
        case 0x285950u: goto label_285950;
        case 0x285954u: goto label_285954;
        case 0x285958u: goto label_285958;
        case 0x28595cu: goto label_28595c;
        case 0x285960u: goto label_285960;
        case 0x285964u: goto label_285964;
        case 0x285968u: goto label_285968;
        case 0x28596cu: goto label_28596c;
        case 0x285970u: goto label_285970;
        case 0x285974u: goto label_285974;
        case 0x285978u: goto label_285978;
        case 0x28597cu: goto label_28597c;
        case 0x285980u: goto label_285980;
        case 0x285984u: goto label_285984;
        case 0x285988u: goto label_285988;
        case 0x28598cu: goto label_28598c;
        case 0x285990u: goto label_285990;
        case 0x285994u: goto label_285994;
        case 0x285998u: goto label_285998;
        case 0x28599cu: goto label_28599c;
        case 0x2859a0u: goto label_2859a0;
        case 0x2859a4u: goto label_2859a4;
        case 0x2859a8u: goto label_2859a8;
        case 0x2859acu: goto label_2859ac;
        case 0x2859b0u: goto label_2859b0;
        case 0x2859b4u: goto label_2859b4;
        case 0x2859b8u: goto label_2859b8;
        case 0x2859bcu: goto label_2859bc;
        case 0x2859c0u: goto label_2859c0;
        case 0x2859c4u: goto label_2859c4;
        case 0x2859c8u: goto label_2859c8;
        case 0x2859ccu: goto label_2859cc;
        case 0x2859d0u: goto label_2859d0;
        case 0x2859d4u: goto label_2859d4;
        case 0x2859d8u: goto label_2859d8;
        case 0x2859dcu: goto label_2859dc;
        case 0x2859e0u: goto label_2859e0;
        case 0x2859e4u: goto label_2859e4;
        case 0x2859e8u: goto label_2859e8;
        case 0x2859ecu: goto label_2859ec;
        case 0x2859f0u: goto label_2859f0;
        case 0x2859f4u: goto label_2859f4;
        case 0x2859f8u: goto label_2859f8;
        case 0x2859fcu: goto label_2859fc;
        case 0x285a00u: goto label_285a00;
        case 0x285a04u: goto label_285a04;
        case 0x285a08u: goto label_285a08;
        case 0x285a0cu: goto label_285a0c;
        case 0x285a10u: goto label_285a10;
        case 0x285a14u: goto label_285a14;
        case 0x285a18u: goto label_285a18;
        case 0x285a1cu: goto label_285a1c;
        case 0x285a20u: goto label_285a20;
        case 0x285a24u: goto label_285a24;
        case 0x285a28u: goto label_285a28;
        case 0x285a2cu: goto label_285a2c;
        case 0x285a30u: goto label_285a30;
        case 0x285a34u: goto label_285a34;
        case 0x285a38u: goto label_285a38;
        case 0x285a3cu: goto label_285a3c;
        case 0x285a40u: goto label_285a40;
        case 0x285a44u: goto label_285a44;
        case 0x285a48u: goto label_285a48;
        case 0x285a4cu: goto label_285a4c;
        case 0x285a50u: goto label_285a50;
        case 0x285a54u: goto label_285a54;
        case 0x285a58u: goto label_285a58;
        case 0x285a5cu: goto label_285a5c;
        case 0x285a60u: goto label_285a60;
        case 0x285a64u: goto label_285a64;
        case 0x285a68u: goto label_285a68;
        case 0x285a6cu: goto label_285a6c;
        case 0x285a70u: goto label_285a70;
        case 0x285a74u: goto label_285a74;
        case 0x285a78u: goto label_285a78;
        case 0x285a7cu: goto label_285a7c;
        case 0x285a80u: goto label_285a80;
        case 0x285a84u: goto label_285a84;
        case 0x285a88u: goto label_285a88;
        case 0x285a8cu: goto label_285a8c;
        case 0x285a90u: goto label_285a90;
        case 0x285a94u: goto label_285a94;
        case 0x285a98u: goto label_285a98;
        case 0x285a9cu: goto label_285a9c;
        case 0x285aa0u: goto label_285aa0;
        case 0x285aa4u: goto label_285aa4;
        case 0x285aa8u: goto label_285aa8;
        case 0x285aacu: goto label_285aac;
        case 0x285ab0u: goto label_285ab0;
        case 0x285ab4u: goto label_285ab4;
        case 0x285ab8u: goto label_285ab8;
        case 0x285abcu: goto label_285abc;
        case 0x285ac0u: goto label_285ac0;
        case 0x285ac4u: goto label_285ac4;
        case 0x285ac8u: goto label_285ac8;
        case 0x285accu: goto label_285acc;
        case 0x285ad0u: goto label_285ad0;
        case 0x285ad4u: goto label_285ad4;
        case 0x285ad8u: goto label_285ad8;
        case 0x285adcu: goto label_285adc;
        case 0x285ae0u: goto label_285ae0;
        case 0x285ae4u: goto label_285ae4;
        case 0x285ae8u: goto label_285ae8;
        case 0x285aecu: goto label_285aec;
        case 0x285af0u: goto label_285af0;
        case 0x285af4u: goto label_285af4;
        case 0x285af8u: goto label_285af8;
        case 0x285afcu: goto label_285afc;
        case 0x285b00u: goto label_285b00;
        case 0x285b04u: goto label_285b04;
        case 0x285b08u: goto label_285b08;
        case 0x285b0cu: goto label_285b0c;
        case 0x285b10u: goto label_285b10;
        case 0x285b14u: goto label_285b14;
        case 0x285b18u: goto label_285b18;
        case 0x285b1cu: goto label_285b1c;
        case 0x285b20u: goto label_285b20;
        case 0x285b24u: goto label_285b24;
        case 0x285b28u: goto label_285b28;
        case 0x285b2cu: goto label_285b2c;
        case 0x285b30u: goto label_285b30;
        case 0x285b34u: goto label_285b34;
        case 0x285b38u: goto label_285b38;
        case 0x285b3cu: goto label_285b3c;
        case 0x285b40u: goto label_285b40;
        case 0x285b44u: goto label_285b44;
        case 0x285b48u: goto label_285b48;
        case 0x285b4cu: goto label_285b4c;
        case 0x285b50u: goto label_285b50;
        case 0x285b54u: goto label_285b54;
        case 0x285b58u: goto label_285b58;
        case 0x285b5cu: goto label_285b5c;
        case 0x285b60u: goto label_285b60;
        case 0x285b64u: goto label_285b64;
        case 0x285b68u: goto label_285b68;
        case 0x285b6cu: goto label_285b6c;
        case 0x285b70u: goto label_285b70;
        case 0x285b74u: goto label_285b74;
        case 0x285b78u: goto label_285b78;
        case 0x285b7cu: goto label_285b7c;
        case 0x285b80u: goto label_285b80;
        case 0x285b84u: goto label_285b84;
        case 0x285b88u: goto label_285b88;
        case 0x285b8cu: goto label_285b8c;
        case 0x285b90u: goto label_285b90;
        case 0x285b94u: goto label_285b94;
        case 0x285b98u: goto label_285b98;
        case 0x285b9cu: goto label_285b9c;
        case 0x285ba0u: goto label_285ba0;
        case 0x285ba4u: goto label_285ba4;
        case 0x285ba8u: goto label_285ba8;
        case 0x285bacu: goto label_285bac;
        case 0x285bb0u: goto label_285bb0;
        case 0x285bb4u: goto label_285bb4;
        case 0x285bb8u: goto label_285bb8;
        case 0x285bbcu: goto label_285bbc;
        case 0x285bc0u: goto label_285bc0;
        case 0x285bc4u: goto label_285bc4;
        case 0x285bc8u: goto label_285bc8;
        case 0x285bccu: goto label_285bcc;
        case 0x285bd0u: goto label_285bd0;
        case 0x285bd4u: goto label_285bd4;
        case 0x285bd8u: goto label_285bd8;
        case 0x285bdcu: goto label_285bdc;
        case 0x285be0u: goto label_285be0;
        case 0x285be4u: goto label_285be4;
        case 0x285be8u: goto label_285be8;
        case 0x285becu: goto label_285bec;
        case 0x285bf0u: goto label_285bf0;
        case 0x285bf4u: goto label_285bf4;
        case 0x285bf8u: goto label_285bf8;
        case 0x285bfcu: goto label_285bfc;
        case 0x285c00u: goto label_285c00;
        case 0x285c04u: goto label_285c04;
        case 0x285c08u: goto label_285c08;
        case 0x285c0cu: goto label_285c0c;
        case 0x285c10u: goto label_285c10;
        case 0x285c14u: goto label_285c14;
        case 0x285c18u: goto label_285c18;
        case 0x285c1cu: goto label_285c1c;
        case 0x285c20u: goto label_285c20;
        case 0x285c24u: goto label_285c24;
        case 0x285c28u: goto label_285c28;
        case 0x285c2cu: goto label_285c2c;
        case 0x285c30u: goto label_285c30;
        case 0x285c34u: goto label_285c34;
        case 0x285c38u: goto label_285c38;
        case 0x285c3cu: goto label_285c3c;
        case 0x285c40u: goto label_285c40;
        case 0x285c44u: goto label_285c44;
        case 0x285c48u: goto label_285c48;
        case 0x285c4cu: goto label_285c4c;
        case 0x285c50u: goto label_285c50;
        case 0x285c54u: goto label_285c54;
        case 0x285c58u: goto label_285c58;
        case 0x285c5cu: goto label_285c5c;
        case 0x285c60u: goto label_285c60;
        case 0x285c64u: goto label_285c64;
        case 0x285c68u: goto label_285c68;
        case 0x285c6cu: goto label_285c6c;
        case 0x285c70u: goto label_285c70;
        case 0x285c74u: goto label_285c74;
        case 0x285c78u: goto label_285c78;
        case 0x285c7cu: goto label_285c7c;
        case 0x285c80u: goto label_285c80;
        case 0x285c84u: goto label_285c84;
        case 0x285c88u: goto label_285c88;
        case 0x285c8cu: goto label_285c8c;
        case 0x285c90u: goto label_285c90;
        case 0x285c94u: goto label_285c94;
        case 0x285c98u: goto label_285c98;
        case 0x285c9cu: goto label_285c9c;
        case 0x285ca0u: goto label_285ca0;
        case 0x285ca4u: goto label_285ca4;
        case 0x285ca8u: goto label_285ca8;
        case 0x285cacu: goto label_285cac;
        case 0x285cb0u: goto label_285cb0;
        case 0x285cb4u: goto label_285cb4;
        case 0x285cb8u: goto label_285cb8;
        case 0x285cbcu: goto label_285cbc;
        case 0x285cc0u: goto label_285cc0;
        case 0x285cc4u: goto label_285cc4;
        case 0x285cc8u: goto label_285cc8;
        case 0x285cccu: goto label_285ccc;
        case 0x285cd0u: goto label_285cd0;
        case 0x285cd4u: goto label_285cd4;
        case 0x285cd8u: goto label_285cd8;
        case 0x285cdcu: goto label_285cdc;
        case 0x285ce0u: goto label_285ce0;
        case 0x285ce4u: goto label_285ce4;
        case 0x285ce8u: goto label_285ce8;
        case 0x285cecu: goto label_285cec;
        case 0x285cf0u: goto label_285cf0;
        case 0x285cf4u: goto label_285cf4;
        case 0x285cf8u: goto label_285cf8;
        case 0x285cfcu: goto label_285cfc;
        case 0x285d00u: goto label_285d00;
        case 0x285d04u: goto label_285d04;
        case 0x285d08u: goto label_285d08;
        case 0x285d0cu: goto label_285d0c;
        case 0x285d10u: goto label_285d10;
        case 0x285d14u: goto label_285d14;
        case 0x285d18u: goto label_285d18;
        case 0x285d1cu: goto label_285d1c;
        case 0x285d20u: goto label_285d20;
        case 0x285d24u: goto label_285d24;
        case 0x285d28u: goto label_285d28;
        case 0x285d2cu: goto label_285d2c;
        case 0x285d30u: goto label_285d30;
        case 0x285d34u: goto label_285d34;
        case 0x285d38u: goto label_285d38;
        case 0x285d3cu: goto label_285d3c;
        case 0x285d40u: goto label_285d40;
        case 0x285d44u: goto label_285d44;
        case 0x285d48u: goto label_285d48;
        case 0x285d4cu: goto label_285d4c;
        case 0x285d50u: goto label_285d50;
        case 0x285d54u: goto label_285d54;
        case 0x285d58u: goto label_285d58;
        case 0x285d5cu: goto label_285d5c;
        case 0x285d60u: goto label_285d60;
        case 0x285d64u: goto label_285d64;
        case 0x285d68u: goto label_285d68;
        case 0x285d6cu: goto label_285d6c;
        case 0x285d70u: goto label_285d70;
        case 0x285d74u: goto label_285d74;
        case 0x285d78u: goto label_285d78;
        case 0x285d7cu: goto label_285d7c;
        case 0x285d80u: goto label_285d80;
        case 0x285d84u: goto label_285d84;
        case 0x285d88u: goto label_285d88;
        case 0x285d8cu: goto label_285d8c;
        case 0x285d90u: goto label_285d90;
        case 0x285d94u: goto label_285d94;
        case 0x285d98u: goto label_285d98;
        case 0x285d9cu: goto label_285d9c;
        case 0x285da0u: goto label_285da0;
        case 0x285da4u: goto label_285da4;
        case 0x285da8u: goto label_285da8;
        case 0x285dacu: goto label_285dac;
        case 0x285db0u: goto label_285db0;
        case 0x285db4u: goto label_285db4;
        case 0x285db8u: goto label_285db8;
        case 0x285dbcu: goto label_285dbc;
        case 0x285dc0u: goto label_285dc0;
        case 0x285dc4u: goto label_285dc4;
        case 0x285dc8u: goto label_285dc8;
        case 0x285dccu: goto label_285dcc;
        case 0x285dd0u: goto label_285dd0;
        case 0x285dd4u: goto label_285dd4;
        case 0x285dd8u: goto label_285dd8;
        case 0x285ddcu: goto label_285ddc;
        case 0x285de0u: goto label_285de0;
        case 0x285de4u: goto label_285de4;
        case 0x285de8u: goto label_285de8;
        case 0x285decu: goto label_285dec;
        case 0x285df0u: goto label_285df0;
        case 0x285df4u: goto label_285df4;
        case 0x285df8u: goto label_285df8;
        case 0x285dfcu: goto label_285dfc;
        case 0x285e00u: goto label_285e00;
        case 0x285e04u: goto label_285e04;
        case 0x285e08u: goto label_285e08;
        case 0x285e0cu: goto label_285e0c;
        case 0x285e10u: goto label_285e10;
        case 0x285e14u: goto label_285e14;
        case 0x285e18u: goto label_285e18;
        case 0x285e1cu: goto label_285e1c;
        case 0x285e20u: goto label_285e20;
        case 0x285e24u: goto label_285e24;
        case 0x285e28u: goto label_285e28;
        case 0x285e2cu: goto label_285e2c;
        case 0x285e30u: goto label_285e30;
        case 0x285e34u: goto label_285e34;
        case 0x285e38u: goto label_285e38;
        case 0x285e3cu: goto label_285e3c;
        case 0x285e40u: goto label_285e40;
        case 0x285e44u: goto label_285e44;
        case 0x285e48u: goto label_285e48;
        case 0x285e4cu: goto label_285e4c;
        case 0x285e50u: goto label_285e50;
        case 0x285e54u: goto label_285e54;
        case 0x285e58u: goto label_285e58;
        case 0x285e5cu: goto label_285e5c;
        case 0x285e60u: goto label_285e60;
        case 0x285e64u: goto label_285e64;
        case 0x285e68u: goto label_285e68;
        case 0x285e6cu: goto label_285e6c;
        case 0x285e70u: goto label_285e70;
        case 0x285e74u: goto label_285e74;
        case 0x285e78u: goto label_285e78;
        case 0x285e7cu: goto label_285e7c;
        case 0x285e80u: goto label_285e80;
        case 0x285e84u: goto label_285e84;
        case 0x285e88u: goto label_285e88;
        case 0x285e8cu: goto label_285e8c;
        case 0x285e90u: goto label_285e90;
        case 0x285e94u: goto label_285e94;
        case 0x285e98u: goto label_285e98;
        case 0x285e9cu: goto label_285e9c;
        case 0x285ea0u: goto label_285ea0;
        case 0x285ea4u: goto label_285ea4;
        case 0x285ea8u: goto label_285ea8;
        case 0x285eacu: goto label_285eac;
        case 0x285eb0u: goto label_285eb0;
        case 0x285eb4u: goto label_285eb4;
        case 0x285eb8u: goto label_285eb8;
        case 0x285ebcu: goto label_285ebc;
        case 0x285ec0u: goto label_285ec0;
        case 0x285ec4u: goto label_285ec4;
        case 0x285ec8u: goto label_285ec8;
        case 0x285eccu: goto label_285ecc;
        case 0x285ed0u: goto label_285ed0;
        case 0x285ed4u: goto label_285ed4;
        case 0x285ed8u: goto label_285ed8;
        case 0x285edcu: goto label_285edc;
        case 0x285ee0u: goto label_285ee0;
        case 0x285ee4u: goto label_285ee4;
        case 0x285ee8u: goto label_285ee8;
        case 0x285eecu: goto label_285eec;
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        case 0x285f70u: goto label_285f70;
        case 0x285f74u: goto label_285f74;
        case 0x285f78u: goto label_285f78;
        case 0x285f7cu: goto label_285f7c;
        case 0x285f80u: goto label_285f80;
        case 0x285f84u: goto label_285f84;
        case 0x285f88u: goto label_285f88;
        case 0x285f8cu: goto label_285f8c;
        case 0x285f90u: goto label_285f90;
        case 0x285f94u: goto label_285f94;
        case 0x285f98u: goto label_285f98;
        case 0x285f9cu: goto label_285f9c;
        case 0x285fa0u: goto label_285fa0;
        case 0x285fa4u: goto label_285fa4;
        case 0x285fa8u: goto label_285fa8;
        case 0x285facu: goto label_285fac;
        case 0x285fb0u: goto label_285fb0;
        case 0x285fb4u: goto label_285fb4;
        case 0x285fb8u: goto label_285fb8;
        case 0x285fbcu: goto label_285fbc;
        case 0x285fc0u: goto label_285fc0;
        case 0x285fc4u: goto label_285fc4;
        case 0x285fc8u: goto label_285fc8;
        case 0x285fccu: goto label_285fcc;
        case 0x285fd0u: goto label_285fd0;
        case 0x285fd4u: goto label_285fd4;
        case 0x285fd8u: goto label_285fd8;
        case 0x285fdcu: goto label_285fdc;
        case 0x285fe0u: goto label_285fe0;
        case 0x285fe4u: goto label_285fe4;
        case 0x285fe8u: goto label_285fe8;
        case 0x285fecu: goto label_285fec;
        case 0x285ff0u: goto label_285ff0;
        case 0x285ff4u: goto label_285ff4;
        case 0x285ff8u: goto label_285ff8;
        case 0x285ffcu: goto label_285ffc;
        case 0x286000u: goto label_286000;
        case 0x286004u: goto label_286004;
        case 0x286008u: goto label_286008;
        case 0x28600cu: goto label_28600c;
        case 0x286010u: goto label_286010;
        case 0x286014u: goto label_286014;
        case 0x286018u: goto label_286018;
        case 0x28601cu: goto label_28601c;
        case 0x286020u: goto label_286020;
        case 0x286024u: goto label_286024;
        case 0x286028u: goto label_286028;
        case 0x28602cu: goto label_28602c;
        case 0x286030u: goto label_286030;
        case 0x286034u: goto label_286034;
        case 0x286038u: goto label_286038;
        case 0x28603cu: goto label_28603c;
        case 0x286040u: goto label_286040;
        case 0x286044u: goto label_286044;
        case 0x286048u: goto label_286048;
        case 0x28604cu: goto label_28604c;
        case 0x286050u: goto label_286050;
        case 0x286054u: goto label_286054;
        case 0x286058u: goto label_286058;
        case 0x28605cu: goto label_28605c;
        case 0x286060u: goto label_286060;
        case 0x286064u: goto label_286064;
        case 0x286068u: goto label_286068;
        case 0x28606cu: goto label_28606c;
        case 0x286070u: goto label_286070;
        case 0x286074u: goto label_286074;
        case 0x286078u: goto label_286078;
        case 0x28607cu: goto label_28607c;
        case 0x286080u: goto label_286080;
        case 0x286084u: goto label_286084;
        case 0x286088u: goto label_286088;
        case 0x28608cu: goto label_28608c;
        case 0x286090u: goto label_286090;
        case 0x286094u: goto label_286094;
        case 0x286098u: goto label_286098;
        case 0x28609cu: goto label_28609c;
        case 0x2860a0u: goto label_2860a0;
        case 0x2860a4u: goto label_2860a4;
        case 0x2860a8u: goto label_2860a8;
        case 0x2860acu: goto label_2860ac;
        case 0x2860b0u: goto label_2860b0;
        case 0x2860b4u: goto label_2860b4;
        case 0x2860b8u: goto label_2860b8;
        case 0x2860bcu: goto label_2860bc;
        case 0x2860c0u: goto label_2860c0;
        case 0x2860c4u: goto label_2860c4;
        case 0x2860c8u: goto label_2860c8;
        case 0x2860ccu: goto label_2860cc;
        case 0x2860d0u: goto label_2860d0;
        case 0x2860d4u: goto label_2860d4;
        case 0x2860d8u: goto label_2860d8;
        case 0x2860dcu: goto label_2860dc;
        case 0x2860e0u: goto label_2860e0;
        case 0x2860e4u: goto label_2860e4;
        case 0x2860e8u: goto label_2860e8;
        case 0x2860ecu: goto label_2860ec;
        case 0x2860f0u: goto label_2860f0;
        case 0x2860f4u: goto label_2860f4;
        case 0x2860f8u: goto label_2860f8;
        case 0x2860fcu: goto label_2860fc;
        case 0x286100u: goto label_286100;
        case 0x286104u: goto label_286104;
        case 0x286108u: goto label_286108;
        case 0x28610cu: goto label_28610c;
        case 0x286110u: goto label_286110;
        case 0x286114u: goto label_286114;
        case 0x286118u: goto label_286118;
        case 0x28611cu: goto label_28611c;
        case 0x286120u: goto label_286120;
        case 0x286124u: goto label_286124;
        case 0x286128u: goto label_286128;
        case 0x28612cu: goto label_28612c;
        case 0x286130u: goto label_286130;
        case 0x286134u: goto label_286134;
        case 0x286138u: goto label_286138;
        case 0x28613cu: goto label_28613c;
        case 0x286140u: goto label_286140;
        case 0x286144u: goto label_286144;
        case 0x286148u: goto label_286148;
        case 0x28614cu: goto label_28614c;
        case 0x286150u: goto label_286150;
        case 0x286154u: goto label_286154;
        case 0x286158u: goto label_286158;
        case 0x28615cu: goto label_28615c;
        case 0x286160u: goto label_286160;
        case 0x286164u: goto label_286164;
        case 0x286168u: goto label_286168;
        case 0x28616cu: goto label_28616c;
        case 0x286170u: goto label_286170;
        case 0x286174u: goto label_286174;
        case 0x286178u: goto label_286178;
        case 0x28617cu: goto label_28617c;
        case 0x286180u: goto label_286180;
        case 0x286184u: goto label_286184;
        case 0x286188u: goto label_286188;
        case 0x28618cu: goto label_28618c;
        case 0x286190u: goto label_286190;
        case 0x286194u: goto label_286194;
        case 0x286198u: goto label_286198;
        case 0x28619cu: goto label_28619c;
        case 0x2861a0u: goto label_2861a0;
        case 0x2861a4u: goto label_2861a4;
        case 0x2861a8u: goto label_2861a8;
        case 0x2861acu: goto label_2861ac;
        case 0x2861b0u: goto label_2861b0;
        case 0x2861b4u: goto label_2861b4;
        case 0x2861b8u: goto label_2861b8;
        case 0x2861bcu: goto label_2861bc;
        case 0x2861c0u: goto label_2861c0;
        case 0x2861c4u: goto label_2861c4;
        case 0x2861c8u: goto label_2861c8;
        case 0x2861ccu: goto label_2861cc;
        case 0x2861d0u: goto label_2861d0;
        case 0x2861d4u: goto label_2861d4;
        case 0x2861d8u: goto label_2861d8;
        case 0x2861dcu: goto label_2861dc;
        case 0x2861e0u: goto label_2861e0;
        case 0x2861e4u: goto label_2861e4;
        case 0x2861e8u: goto label_2861e8;
        case 0x2861ecu: goto label_2861ec;
        case 0x2861f0u: goto label_2861f0;
        case 0x2861f4u: goto label_2861f4;
        case 0x2861f8u: goto label_2861f8;
        case 0x2861fcu: goto label_2861fc;
        case 0x286200u: goto label_286200;
        case 0x286204u: goto label_286204;
        case 0x286208u: goto label_286208;
        case 0x28620cu: goto label_28620c;
        case 0x286210u: goto label_286210;
        case 0x286214u: goto label_286214;
        case 0x286218u: goto label_286218;
        case 0x28621cu: goto label_28621c;
        case 0x286220u: goto label_286220;
        case 0x286224u: goto label_286224;
        case 0x286228u: goto label_286228;
        case 0x28622cu: goto label_28622c;
        case 0x286230u: goto label_286230;
        case 0x286234u: goto label_286234;
        case 0x286238u: goto label_286238;
        case 0x28623cu: goto label_28623c;
        case 0x286240u: goto label_286240;
        case 0x286244u: goto label_286244;
        case 0x286248u: goto label_286248;
        case 0x28624cu: goto label_28624c;
        case 0x286250u: goto label_286250;
        case 0x286254u: goto label_286254;
        case 0x286258u: goto label_286258;
        case 0x28625cu: goto label_28625c;
        case 0x286260u: goto label_286260;
        case 0x286264u: goto label_286264;
        case 0x286268u: goto label_286268;
        case 0x28626cu: goto label_28626c;
        case 0x286270u: goto label_286270;
        case 0x286274u: goto label_286274;
        case 0x286278u: goto label_286278;
        case 0x28627cu: goto label_28627c;
        case 0x286280u: goto label_286280;
        case 0x286284u: goto label_286284;
        case 0x286288u: goto label_286288;
        case 0x28628cu: goto label_28628c;
        case 0x286290u: goto label_286290;
        case 0x286294u: goto label_286294;
        case 0x286298u: goto label_286298;
        case 0x28629cu: goto label_28629c;
        case 0x2862a0u: goto label_2862a0;
        case 0x2862a4u: goto label_2862a4;
        case 0x2862a8u: goto label_2862a8;
        case 0x2862acu: goto label_2862ac;
        case 0x2862b0u: goto label_2862b0;
        case 0x2862b4u: goto label_2862b4;
        case 0x2862b8u: goto label_2862b8;
        case 0x2862bcu: goto label_2862bc;
        case 0x2862c0u: goto label_2862c0;
        case 0x2862c4u: goto label_2862c4;
        case 0x2862c8u: goto label_2862c8;
        case 0x2862ccu: goto label_2862cc;
        case 0x2862d0u: goto label_2862d0;
        case 0x2862d4u: goto label_2862d4;
        case 0x2862d8u: goto label_2862d8;
        case 0x2862dcu: goto label_2862dc;
        case 0x2862e0u: goto label_2862e0;
        case 0x2862e4u: goto label_2862e4;
        case 0x2862e8u: goto label_2862e8;
        case 0x2862ecu: goto label_2862ec;
        case 0x2862f0u: goto label_2862f0;
        case 0x2862f4u: goto label_2862f4;
        case 0x2862f8u: goto label_2862f8;
        case 0x2862fcu: goto label_2862fc;
        case 0x286300u: goto label_286300;
        case 0x286304u: goto label_286304;
        case 0x286308u: goto label_286308;
        case 0x28630cu: goto label_28630c;
        case 0x286310u: goto label_286310;
        case 0x286314u: goto label_286314;
        case 0x286318u: goto label_286318;
        case 0x28631cu: goto label_28631c;
        case 0x286320u: goto label_286320;
        case 0x286324u: goto label_286324;
        case 0x286328u: goto label_286328;
        case 0x28632cu: goto label_28632c;
        case 0x286330u: goto label_286330;
        case 0x286334u: goto label_286334;
        case 0x286338u: goto label_286338;
        case 0x28633cu: goto label_28633c;
        case 0x286340u: goto label_286340;
        case 0x286344u: goto label_286344;
        case 0x286348u: goto label_286348;
        case 0x28634cu: goto label_28634c;
        case 0x286350u: goto label_286350;
        case 0x286354u: goto label_286354;
        case 0x286358u: goto label_286358;
        case 0x28635cu: goto label_28635c;
        case 0x286360u: goto label_286360;
        case 0x286364u: goto label_286364;
        case 0x286368u: goto label_286368;
        case 0x28636cu: goto label_28636c;
        case 0x286370u: goto label_286370;
        case 0x286374u: goto label_286374;
        case 0x286378u: goto label_286378;
        case 0x28637cu: goto label_28637c;
        case 0x286380u: goto label_286380;
        case 0x286384u: goto label_286384;
        case 0x286388u: goto label_286388;
        case 0x28638cu: goto label_28638c;
        case 0x286390u: goto label_286390;
        case 0x286394u: goto label_286394;
        case 0x286398u: goto label_286398;
        case 0x28639cu: goto label_28639c;
        case 0x2863a0u: goto label_2863a0;
        case 0x2863a4u: goto label_2863a4;
        case 0x2863a8u: goto label_2863a8;
        case 0x2863acu: goto label_2863ac;
        case 0x2863b0u: goto label_2863b0;
        case 0x2863b4u: goto label_2863b4;
        case 0x2863b8u: goto label_2863b8;
        case 0x2863bcu: goto label_2863bc;
        case 0x2863c0u: goto label_2863c0;
        case 0x2863c4u: goto label_2863c4;
        case 0x2863c8u: goto label_2863c8;
        case 0x2863ccu: goto label_2863cc;
        case 0x2863d0u: goto label_2863d0;
        case 0x2863d4u: goto label_2863d4;
        case 0x2863d8u: goto label_2863d8;
        case 0x2863dcu: goto label_2863dc;
        case 0x2863e0u: goto label_2863e0;
        case 0x2863e4u: goto label_2863e4;
        case 0x2863e8u: goto label_2863e8;
        case 0x2863ecu: goto label_2863ec;
        case 0x2863f0u: goto label_2863f0;
        case 0x2863f4u: goto label_2863f4;
        case 0x2863f8u: goto label_2863f8;
        case 0x2863fcu: goto label_2863fc;
        case 0x286400u: goto label_286400;
        case 0x286404u: goto label_286404;
        case 0x286408u: goto label_286408;
        case 0x28640cu: goto label_28640c;
        case 0x286410u: goto label_286410;
        case 0x286414u: goto label_286414;
        case 0x286418u: goto label_286418;
        case 0x28641cu: goto label_28641c;
        case 0x286420u: goto label_286420;
        case 0x286424u: goto label_286424;
        case 0x286428u: goto label_286428;
        case 0x28642cu: goto label_28642c;
        case 0x286430u: goto label_286430;
        case 0x286434u: goto label_286434;
        case 0x286438u: goto label_286438;
        case 0x28643cu: goto label_28643c;
        case 0x286440u: goto label_286440;
        case 0x286444u: goto label_286444;
        case 0x286448u: goto label_286448;
        case 0x28644cu: goto label_28644c;
        case 0x286450u: goto label_286450;
        case 0x286454u: goto label_286454;
        case 0x286458u: goto label_286458;
        case 0x28645cu: goto label_28645c;
        case 0x286460u: goto label_286460;
        case 0x286464u: goto label_286464;
        case 0x286468u: goto label_286468;
        case 0x28646cu: goto label_28646c;
        case 0x286470u: goto label_286470;
        case 0x286474u: goto label_286474;
        case 0x286478u: goto label_286478;
        case 0x28647cu: goto label_28647c;
        case 0x286480u: goto label_286480;
        case 0x286484u: goto label_286484;
        case 0x286488u: goto label_286488;
        case 0x28648cu: goto label_28648c;
        case 0x286490u: goto label_286490;
        case 0x286494u: goto label_286494;
        case 0x286498u: goto label_286498;
        case 0x28649cu: goto label_28649c;
        case 0x2864a0u: goto label_2864a0;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864a8u: goto label_2864a8;
        case 0x2864acu: goto label_2864ac;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864b4u: goto label_2864b4;
        case 0x2864b8u: goto label_2864b8;
        case 0x2864bcu: goto label_2864bc;
        case 0x2864c0u: goto label_2864c0;
        case 0x2864c4u: goto label_2864c4;
        case 0x2864c8u: goto label_2864c8;
        case 0x2864ccu: goto label_2864cc;
        case 0x2864d0u: goto label_2864d0;
        case 0x2864d4u: goto label_2864d4;
        case 0x2864d8u: goto label_2864d8;
        case 0x2864dcu: goto label_2864dc;
        case 0x2864e0u: goto label_2864e0;
        case 0x2864e4u: goto label_2864e4;
        case 0x2864e8u: goto label_2864e8;
        case 0x2864ecu: goto label_2864ec;
        case 0x2864f0u: goto label_2864f0;
        case 0x2864f4u: goto label_2864f4;
        case 0x2864f8u: goto label_2864f8;
        case 0x2864fcu: goto label_2864fc;
        case 0x286500u: goto label_286500;
        case 0x286504u: goto label_286504;
        case 0x286508u: goto label_286508;
        case 0x28650cu: goto label_28650c;
        case 0x286510u: goto label_286510;
        case 0x286514u: goto label_286514;
        case 0x286518u: goto label_286518;
        case 0x28651cu: goto label_28651c;
        case 0x286520u: goto label_286520;
        case 0x286524u: goto label_286524;
        case 0x286528u: goto label_286528;
        case 0x28652cu: goto label_28652c;
        case 0x286530u: goto label_286530;
        case 0x286534u: goto label_286534;
        case 0x286538u: goto label_286538;
        case 0x28653cu: goto label_28653c;
        case 0x286540u: goto label_286540;
        case 0x286544u: goto label_286544;
        case 0x286548u: goto label_286548;
        case 0x28654cu: goto label_28654c;
        default: break;
    }

    ctx->pc = 0x2856b8u;

label_2856b8:
    // 0x2856b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2856b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2856bc:
    // 0x2856bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2856bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2856c0:
    // 0x2856c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2856c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2856c4:
    // 0x2856c4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2856c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2856c8:
    // 0x2856c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2856c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2856cc:
    // 0x2856cc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2856ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2856d0:
    // 0x2856d0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2856d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2856d4:
    // 0x2856d4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2856d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2856d8:
    // 0x2856d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2856d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2856dc:
    // 0x2856dc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2856dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2856e0:
    // 0x2856e0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2856e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2856e4:
    // 0x2856e4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2856e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2856e8:
    // 0x2856e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2856e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2856ec:
    // 0x2856ec: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x2856ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_2856f0:
    // 0x2856f0: 0x8c6401e8  lw          $a0, 0x1E8($v1)
    ctx->pc = 0x2856f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_2856f4:
    // 0x2856f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2856f8:
    if (ctx->pc == 0x2856F8u) {
        ctx->pc = 0x2856F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856F4u;
        // 0x2856f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856FCu;
        goto label_2856fc;
    }
    ctx->pc = 0x2856F4u;
    {
        const bool branch_taken_0x2856f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856F4u;
        // 0x2856f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856f4) {
            ctx->pc = 0x285710u;
            goto label_285710;
        }
    }
    ctx->pc = 0x2856FCu;
label_2856fc:
    // 0x2856fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2856fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285700:
    // 0x285700: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x285700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_285704:
    // 0x285704: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x285704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_285708:
    // 0x285708: 0x10000384  b           . + 4 + (0x384 << 2)
label_28570c:
    if (ctx->pc == 0x28570Cu) {
        ctx->pc = 0x28570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285708u;
        // 0x28570c: 0xae4505ac  sw          $a1, 0x5AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285710u;
        goto label_285710;
    }
    ctx->pc = 0x285708u;
    {
        const bool branch_taken_0x285708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285708u;
        // 0x28570c: 0xae4505ac  sw          $a1, 0x5AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285708) {
            ctx->pc = 0x28651Cu;
            goto label_28651c;
        }
    }
    ctx->pc = 0x285710u;
label_285710:
    // 0x285710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285714:
    // 0x285714: 0xc0874fa  jal         func_21D3E8
label_285718:
    if (ctx->pc == 0x285718u) {
        ctx->pc = 0x285718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285714u;
        // 0x285718: 0x8e5400d4  lw          $s4, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28571Cu;
        goto label_28571c;
    }
    ctx->pc = 0x285714u;
    SET_GPR_U32(ctx, 31, 0x28571Cu);
    ctx->pc = 0x285718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285714u;
    // 0x285718: 0x8e5400d4  lw          $s4, 0xD4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x285714u, 0x28571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28571Cu;
label_28571c:
    // 0x28571c: 0x265000c4  addiu       $s0, $s2, 0xC4
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_285720:
    // 0x285720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285724:
    // 0x285724: 0xc0e409a  jal         func_390268
label_285728:
    if (ctx->pc == 0x285728u) {
        ctx->pc = 0x285728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285724u;
        // 0x285728: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28572Cu;
        goto label_28572c;
    }
    ctx->pc = 0x285724u;
    SET_GPR_U32(ctx, 31, 0x28572Cu);
    ctx->pc = 0x285728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285724u;
    // 0x285728: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x285724u, 0x28572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28572Cu;
label_28572c:
    // 0x28572c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28572cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_285730:
    // 0x285730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285734:
    // 0x285734: 0xc0a1328  jal         func_284CA0
label_285738:
    if (ctx->pc == 0x285738u) {
        ctx->pc = 0x285738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285734u;
        // 0x285738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28573Cu;
        goto label_28573c;
    }
    ctx->pc = 0x285734u;
    SET_GPR_U32(ctx, 31, 0x28573Cu);
    ctx->pc = 0x285738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285734u;
    // 0x285738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x285734u, 0x28573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28573Cu;
label_28573c:
    // 0x28573c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x28573cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_285740:
    // 0x285740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285744:
    // 0x285744: 0xc0e409a  jal         func_390268
label_285748:
    if (ctx->pc == 0x285748u) {
        ctx->pc = 0x285748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285744u;
        // 0x285748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28574Cu;
        goto label_28574c;
    }
    ctx->pc = 0x285744u;
    SET_GPR_U32(ctx, 31, 0x28574Cu);
    ctx->pc = 0x285748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285744u;
    // 0x285748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x285744u, 0x28574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28574Cu;
label_28574c:
    // 0x28574c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28574cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285750:
    // 0x285750: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x285750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_285754:
    // 0x285754: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x285754u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_285758:
    // 0x285758: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x285758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28575c:
    // 0x28575c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_285760:
    if (ctx->pc == 0x285760u) {
        ctx->pc = 0x285760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28575Cu;
        // 0x285760: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285764u;
        goto label_285764;
    }
    ctx->pc = 0x28575Cu;
    {
        const bool branch_taken_0x28575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28575Cu;
        // 0x285760: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28575c) {
            ctx->pc = 0x28577Cu;
            goto label_28577c;
        }
    }
    ctx->pc = 0x285764u;
label_285764:
    // 0x285764: 0xc0e409a  jal         func_390268
label_285768:
    if (ctx->pc == 0x285768u) {
        ctx->pc = 0x285768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285764u;
        // 0x285768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28576Cu;
        goto label_28576c;
    }
    ctx->pc = 0x285764u;
    SET_GPR_U32(ctx, 31, 0x28576Cu);
    ctx->pc = 0x285768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285764u;
    // 0x285768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x285764u, 0x28576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28576Cu;
label_28576c:
    // 0x28576c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285770:
    // 0x285770: 0xc0a14ea  jal         func_2853A8
label_285774:
    if (ctx->pc == 0x285774u) {
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285778u;
        goto label_285778;
    }
    ctx->pc = 0x285770u;
    SET_GPR_U32(ctx, 31, 0x285778u);
    ctx->pc = 0x285774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285770u;
    // 0x285774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2853A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2853A8u, 0x285770u, 0x285778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285778u;
label_285778:
    // 0x285778: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x285778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_28577c:
    // 0x28577c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_285780:
    // 0x285780: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x285780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_285784:
    // 0x285784: 0x24a5f160  addiu       $a1, $a1, -0xEA0
    ctx->pc = 0x285784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
label_285788:
    // 0x285788: 0x26640257  addiu       $a0, $s3, 0x257
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 599));
label_28578c:
    // 0x28578c: 0xc10c313  jal         func_430C4C
label_285790:
    if (ctx->pc == 0x285790u) {
        ctx->pc = 0x285790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28578Cu;
        // 0x285790: 0x8e7e0370  lw          $fp, 0x370($s3) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285794u;
        goto label_285794;
    }
    ctx->pc = 0x28578Cu;
    SET_GPR_U32(ctx, 31, 0x285794u);
    ctx->pc = 0x285790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28578Cu;
    // 0x285790: 0x8e7e0370  lw          $fp, 0x370($s3) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x28578Cu, 0x285794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285794u;
label_285794:
    // 0x285794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_285798:
    if (ctx->pc == 0x285798u) {
        ctx->pc = 0x285798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285794u;
        // 0x285798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28579Cu;
        goto label_28579c;
    }
    ctx->pc = 0x285794u;
    {
        const bool branch_taken_0x285794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285794u;
        // 0x285798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285794) {
            ctx->pc = 0x2857A8u;
            goto label_2857a8;
        }
    }
    ctx->pc = 0x28579Cu;
label_28579c:
    // 0x28579c: 0x8e620250  lw          $v0, 0x250($s3)
    ctx->pc = 0x28579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
label_2857a0:
    // 0x2857a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2857a4:
    if (ctx->pc == 0x2857A4u) {
        ctx->pc = 0x2857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857A0u;
        // 0x2857a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857A8u;
        goto label_2857a8;
    }
    ctx->pc = 0x2857A0u;
    {
        const bool branch_taken_0x2857a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857A0u;
        // 0x2857a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857a0) {
            ctx->pc = 0x2857ACu;
            goto label_2857ac;
        }
    }
    ctx->pc = 0x2857A8u;
label_2857a8:
    // 0x2857a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2857a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2857ac:
    // 0x2857ac: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x2857acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2857b0:
    // 0x2857b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2857b4:
    // 0x2857b4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x2857b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_2857b8:
    // 0x2857b8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2857bc:
    if (ctx->pc == 0x2857BCu) {
        ctx->pc = 0x2857BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857B8u;
        // 0x2857bc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857C0u;
        goto label_2857c0;
    }
    ctx->pc = 0x2857B8u;
    {
        const bool branch_taken_0x2857b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857B8u;
        // 0x2857bc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857b8) {
            ctx->pc = 0x2857F8u;
            goto label_2857f8;
        }
    }
    ctx->pc = 0x2857C0u;
label_2857c0:
    // 0x2857c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2857c4:
    if (ctx->pc == 0x2857C4u) {
        ctx->pc = 0x2857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C0u;
        // 0x2857c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857C8u;
        goto label_2857c8;
    }
    ctx->pc = 0x2857C0u;
    {
        const bool branch_taken_0x2857c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C0u;
        // 0x2857c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857c0) {
            ctx->pc = 0x2857CCu;
            goto label_2857cc;
        }
    }
    ctx->pc = 0x2857C8u;
label_2857c8:
    // 0x2857c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2857c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2857cc:
    // 0x2857cc: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x2857ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2857d0:
    // 0x2857d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2857d4:
    if (ctx->pc == 0x2857D4u) {
        ctx->pc = 0x2857D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857D0u;
        // 0x2857d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857D8u;
        goto label_2857d8;
    }
    ctx->pc = 0x2857D0u;
    {
        const bool branch_taken_0x2857d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857D0u;
        // 0x2857d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857d0) {
            ctx->pc = 0x2857F8u;
            goto label_2857f8;
        }
    }
    ctx->pc = 0x2857D8u;
label_2857d8:
    // 0x2857d8: 0x826501b0  lb          $a1, 0x1B0($s3)
    ctx->pc = 0x2857d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_2857dc:
    // 0x2857dc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2857dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2857e0:
    // 0x2857e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2857e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2857e4:
    // 0x2857e4: 0xc107908  jal         func_41E420
label_2857e8:
    if (ctx->pc == 0x2857E8u) {
        ctx->pc = 0x2857E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857E4u;
        // 0x2857e8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857ECu;
        goto label_2857ec;
    }
    ctx->pc = 0x2857E4u;
    SET_GPR_U32(ctx, 31, 0x2857ECu);
    ctx->pc = 0x2857E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2857E4u;
    // 0x2857e8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2857E4u, 0x2857ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2857ECu;
label_2857ec:
    // 0x2857ec: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_2857f0:
    if (ctx->pc == 0x2857F0u) {
        ctx->pc = 0x2857F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857ECu;
        // 0x2857f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857F4u;
        goto label_2857f4;
    }
    ctx->pc = 0x2857ECu;
    {
        const bool branch_taken_0x2857ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857ECu;
        // 0x2857f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857ec) {
            ctx->pc = 0x2857C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2857c8;
        }
    }
    ctx->pc = 0x2857F4u;
label_2857f4:
    // 0x2857f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2857f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2857f8:
    // 0x2857f8: 0xc09ee9a  jal         func_27BA68
label_2857fc:
    if (ctx->pc == 0x2857FCu) {
        ctx->pc = 0x2857FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857F8u;
        // 0x2857fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285800u;
        goto label_285800;
    }
    ctx->pc = 0x2857F8u;
    SET_GPR_U32(ctx, 31, 0x285800u);
    ctx->pc = 0x2857FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2857F8u;
    // 0x2857fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA68u, 0x2857F8u, 0x285800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285800u;
label_285800:
    // 0x285800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_285804:
    if (ctx->pc == 0x285804u) {
        ctx->pc = 0x285804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285800u;
        // 0x285804: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285808u;
        goto label_285808;
    }
    ctx->pc = 0x285800u;
    {
        const bool branch_taken_0x285800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285800u;
        // 0x285804: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285800) {
            ctx->pc = 0x28580Cu;
            goto label_28580c;
        }
    }
    ctx->pc = 0x285808u;
label_285808:
    // 0x285808: 0xa2820128  sb          $v0, 0x128($s4)
    ctx->pc = 0x285808u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 2));
label_28580c:
    // 0x28580c: 0x8ec5b734  lw          $a1, -0x48CC($s6)
    ctx->pc = 0x28580cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_285810:
    // 0x285810: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x285810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_285814:
    // 0x285814: 0x8e4405ac  lw          $a0, 0x5AC($s2)
    ctx->pc = 0x285814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1452)));
label_285818:
    // 0x285818: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x285818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_28581c:
    // 0x28581c: 0xae4305ac  sw          $v1, 0x5AC($s2)
    ctx->pc = 0x28581cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 3));
label_285820:
    // 0x285820: 0x92820128  lbu         $v0, 0x128($s4)
    ctx->pc = 0x285820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 296)));
label_285824:
    // 0x285824: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
label_285828:
    if (ctx->pc == 0x285828u) {
        ctx->pc = 0x285828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285824u;
        // 0x285828: 0x64b823  subu        $s7, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28582Cu;
        goto label_28582c;
    }
    ctx->pc = 0x285824u;
    {
        const bool branch_taken_0x285824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x285828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285824u;
        // 0x285828: 0x64b823  subu        $s7, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285824) {
            ctx->pc = 0x285854u;
            goto label_285854;
        }
    }
    ctx->pc = 0x28582Cu;
label_28582c:
    // 0x28582c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x28582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_285830:
    // 0x285830: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_285834:
    if (ctx->pc == 0x285834u) {
        ctx->pc = 0x285834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285830u;
        // 0x285834: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285838u;
        goto label_285838;
    }
    ctx->pc = 0x285830u;
    {
        const bool branch_taken_0x285830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285830) {
            ctx->pc = 0x285834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285830u;
            // 0x285834: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285858u;
            goto label_285858;
        }
    }
    ctx->pc = 0x285838u;
label_285838:
    // 0x285838: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x285838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_28583c:
    // 0x28583c: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x28583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_285840:
    // 0x285840: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x285840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_285844:
    // 0x285844: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_285848:
    if (ctx->pc == 0x285848u) {
        ctx->pc = 0x285848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285844u;
        // 0x285848: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28584Cu;
        goto label_28584c;
    }
    ctx->pc = 0x285844u;
    {
        const bool branch_taken_0x285844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285844) {
            ctx->pc = 0x285848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285844u;
            // 0x285848: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285858u;
            goto label_285858;
        }
    }
    ctx->pc = 0x28584Cu;
label_28584c:
    // 0x28584c: 0xa2860128  sb          $a2, 0x128($s4)
    ctx->pc = 0x28584cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 6));
label_285850:
    // 0x285850: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x285850u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285854:
    // 0x285854: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x285854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_285858:
    // 0x285858: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_28585c:
    // 0x28585c: 0x24900840  addiu       $s0, $a0, 0x840
    ctx->pc = 0x28585cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_285860:
    // 0x285860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285864:
    // 0x285864: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285868:
    // 0x285868: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x285868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28586c:
    // 0x28586c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x28586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_285870:
    // 0x285870: 0xc070192  jal         func_1C0648
label_285874:
    if (ctx->pc == 0x285874u) {
        ctx->pc = 0x285874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285870u;
        // 0x285874: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285878u;
        goto label_285878;
    }
    ctx->pc = 0x285870u;
    SET_GPR_U32(ctx, 31, 0x285878u);
    ctx->pc = 0x285874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285870u;
    // 0x285874: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0648u, 0x285870u, 0x285878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285878u;
label_285878:
    // 0x285878: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x285878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_28587c:
    // 0x28587c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_285880:
    if (ctx->pc == 0x285880u) {
        ctx->pc = 0x285880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28587Cu;
        // 0x285880: 0x8ec2b734  lw          $v0, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285884u;
        goto label_285884;
    }
    ctx->pc = 0x28587Cu;
    {
        const bool branch_taken_0x28587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28587Cu;
        // 0x285880: 0x8ec2b734  lw          $v0, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28587c) {
            ctx->pc = 0x28599Cu;
            goto label_28599c;
        }
    }
    ctx->pc = 0x285884u;
label_285884:
    // 0x285884: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x285884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_285888:
    // 0x285888: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x285888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_28588c:
    // 0x28588c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_285890:
    if (ctx->pc == 0x285890u) {
        ctx->pc = 0x285890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28588Cu;
        // 0x285890: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285894u;
        goto label_285894;
    }
    ctx->pc = 0x28588Cu;
    {
        const bool branch_taken_0x28588c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28588Cu;
        // 0x285890: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28588c) {
            ctx->pc = 0x2858A8u;
            goto label_2858a8;
        }
    }
    ctx->pc = 0x285894u;
label_285894:
    // 0x285894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285898:
    // 0x285898: 0x0  nop
    ctx->pc = 0x285898u;
    // NOP
label_28589c:
    // 0x28589c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28589cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2858a0:
    // 0x2858a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2858a4:
    if (ctx->pc == 0x2858A4u) {
        ctx->pc = 0x2858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858A0u;
        // 0x2858a4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858A8u;
        goto label_2858a8;
    }
    ctx->pc = 0x2858A0u;
    {
        const bool branch_taken_0x2858a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858A0u;
        // 0x2858a4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858a0) {
            ctx->pc = 0x2858CCu;
            goto label_2858cc;
        }
    }
    ctx->pc = 0x2858A8u;
label_2858a8:
    // 0x2858a8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2858a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2858ac:
    // 0x2858ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2858acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2858b0:
    // 0x2858b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2858b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2858b4:
    // 0x2858b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2858b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2858b8:
    // 0x2858b8: 0x0  nop
    ctx->pc = 0x2858b8u;
    // NOP
label_2858bc:
    // 0x2858bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2858bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2858c0:
    // 0x2858c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2858c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2858c4:
    // 0x2858c4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2858c8:
    // 0x2858c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2858c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2858cc:
    // 0x2858cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2858d0:
    if (ctx->pc == 0x2858D0u) {
        ctx->pc = 0x2858D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858CCu;
        // 0x2858d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858D4u;
        goto label_2858d4;
    }
    ctx->pc = 0x2858CCu;
    {
        const bool branch_taken_0x2858cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2858D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858CCu;
        // 0x2858d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858cc) {
            ctx->pc = 0x2858E8u;
            goto label_2858e8;
        }
    }
    ctx->pc = 0x2858D4u;
label_2858d4:
    // 0x2858d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2858d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2858d8:
    // 0x2858d8: 0x0  nop
    ctx->pc = 0x2858d8u;
    // NOP
label_2858dc:
    // 0x2858dc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2858dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2858e0:
    // 0x2858e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2858e4:
    if (ctx->pc == 0x2858E4u) {
        ctx->pc = 0x2858E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858E0u;
        // 0x2858e4: 0x8e82012c  lw          $v0, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858E8u;
        goto label_2858e8;
    }
    ctx->pc = 0x2858E0u;
    {
        const bool branch_taken_0x2858e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858E0u;
        // 0x2858e4: 0x8e82012c  lw          $v0, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858e0) {
            ctx->pc = 0x285904u;
            goto label_285904;
        }
    }
    ctx->pc = 0x2858E8u;
label_2858e8:
    // 0x2858e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2858e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2858ec:
    // 0x2858ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2858ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2858f0:
    // 0x2858f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2858f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2858f4:
    // 0x2858f4: 0x0  nop
    ctx->pc = 0x2858f4u;
    // NOP
label_2858f8:
    // 0x2858f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2858f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2858fc:
    // 0x2858fc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2858fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_285900:
    // 0x285900: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x285900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_285904:
    // 0x285904: 0x0  nop
    ctx->pc = 0x285904u;
    // NOP
label_285908:
    // 0x285908: 0x0  nop
    ctx->pc = 0x285908u;
    // NOP
label_28590c:
    // 0x28590c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x28590cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_285910:
    // 0x285910: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_285914:
    if (ctx->pc == 0x285914u) {
        ctx->pc = 0x285914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285910u;
        // 0x285914: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285918u;
        goto label_285918;
    }
    ctx->pc = 0x285910u;
    {
        const bool branch_taken_0x285910 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285910u;
        // 0x285914: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285910) {
            ctx->pc = 0x28592Cu;
            goto label_28592c;
        }
    }
    ctx->pc = 0x285918u;
label_285918:
    // 0x285918: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x285918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_28591c:
    // 0x28591c: 0x0  nop
    ctx->pc = 0x28591cu;
    // NOP
label_285920:
    // 0x285920: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x285920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_285924:
    // 0x285924: 0x10000008  b           . + 4 + (0x8 << 2)
label_285928:
    if (ctx->pc == 0x285928u) {
        ctx->pc = 0x285928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285924u;
        // 0x285928: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28592Cu;
        goto label_28592c;
    }
    ctx->pc = 0x285924u;
    {
        const bool branch_taken_0x285924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285924u;
        // 0x285928: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285924) {
            ctx->pc = 0x285948u;
            goto label_285948;
        }
    }
    ctx->pc = 0x28592Cu;
label_28592c:
    // 0x28592c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_285930:
    // 0x285930: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_285934:
    // 0x285934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x285934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_285938:
    // 0x285938: 0x0  nop
    ctx->pc = 0x285938u;
    // NOP
label_28593c:
    // 0x28593c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x28593cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_285940:
    // 0x285940: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x285940u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_285944:
    // 0x285944: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x285944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285948:
    // 0x285948: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28594c:
    if (ctx->pc == 0x28594Cu) {
        ctx->pc = 0x28594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285948u;
        // 0x28594c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285950u;
        goto label_285950;
    }
    ctx->pc = 0x285948u;
    {
        const bool branch_taken_0x285948 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285948u;
        // 0x28594c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285948) {
            ctx->pc = 0x285964u;
            goto label_285964;
        }
    }
    ctx->pc = 0x285950u;
label_285950:
    // 0x285950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285954:
    // 0x285954: 0x0  nop
    ctx->pc = 0x285954u;
    // NOP
label_285958:
    // 0x285958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28595c:
    // 0x28595c: 0x10000007  b           . + 4 + (0x7 << 2)
label_285960:
    if (ctx->pc == 0x285960u) {
        ctx->pc = 0x285964u;
        goto label_285964;
    }
    ctx->pc = 0x28595Cu;
    {
        const bool branch_taken_0x28595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28595c) {
            ctx->pc = 0x28597Cu;
            goto label_28597c;
        }
    }
    ctx->pc = 0x285964u;
label_285964:
    // 0x285964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_285968:
    // 0x285968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28596c:
    // 0x28596c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285970:
    // 0x285970: 0x0  nop
    ctx->pc = 0x285970u;
    // NOP
label_285974:
    // 0x285974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_285978:
    // 0x285978: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x285978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28597c:
    // 0x28597c: 0x0  nop
    ctx->pc = 0x28597cu;
    // NOP
label_285980:
    // 0x285980: 0x0  nop
    ctx->pc = 0x285980u;
    // NOP
label_285984:
    // 0x285984: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x285984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
label_285988:
    // 0x285988: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x285988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_28598c:
    // 0x28598c: 0xc06ca2e  jal         func_1B28B8
label_285990:
    if (ctx->pc == 0x285990u) {
        ctx->pc = 0x285990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28598Cu;
        // 0x285990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285994u;
        goto label_285994;
    }
    ctx->pc = 0x28598Cu;
    SET_GPR_U32(ctx, 31, 0x285994u);
    ctx->pc = 0x285990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28598Cu;
    // 0x285990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x28598Cu, 0x285994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285994u;
label_285994:
    // 0x285994: 0x10000047  b           . + 4 + (0x47 << 2)
label_285998:
    if (ctx->pc == 0x285998u) {
        ctx->pc = 0x285998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285994u;
        // 0x285998: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28599Cu;
        goto label_28599c;
    }
    ctx->pc = 0x285994u;
    {
        const bool branch_taken_0x285994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285994u;
        // 0x285998: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285994) {
            ctx->pc = 0x285AB4u;
            goto label_285ab4;
        }
    }
    ctx->pc = 0x28599Cu;
label_28599c:
    // 0x28599c: 0x8e830130  lw          $v1, 0x130($s4)
    ctx->pc = 0x28599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_2859a0:
    // 0x2859a0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2859a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2859a4:
    // 0x2859a4: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2859a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2859a8:
    // 0x2859a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2859ac:
    if (ctx->pc == 0x2859ACu) {
        ctx->pc = 0x2859ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859A8u;
        // 0x2859ac: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2859B0u;
        goto label_2859b0;
    }
    ctx->pc = 0x2859A8u;
    {
        const bool branch_taken_0x2859a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2859ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859A8u;
        // 0x2859ac: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859a8) {
            ctx->pc = 0x2859C4u;
            goto label_2859c4;
        }
    }
    ctx->pc = 0x2859B0u;
label_2859b0:
    // 0x2859b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2859b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2859b4:
    // 0x2859b4: 0x0  nop
    ctx->pc = 0x2859b4u;
    // NOP
label_2859b8:
    // 0x2859b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2859b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2859bc:
    // 0x2859bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_2859c0:
    if (ctx->pc == 0x2859C0u) {
        ctx->pc = 0x2859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859BCu;
        // 0x2859c0: 0x8e820134  lw          $v0, 0x134($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2859C4u;
        goto label_2859c4;
    }
    ctx->pc = 0x2859BCu;
    {
        const bool branch_taken_0x2859bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859BCu;
        // 0x2859c0: 0x8e820134  lw          $v0, 0x134($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859bc) {
            ctx->pc = 0x2859E4u;
            goto label_2859e4;
        }
    }
    ctx->pc = 0x2859C4u;
label_2859c4:
    // 0x2859c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2859c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2859c8:
    // 0x2859c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2859c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2859cc:
    // 0x2859cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2859ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2859d0:
    // 0x2859d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2859d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2859d4:
    // 0x2859d4: 0x0  nop
    ctx->pc = 0x2859d4u;
    // NOP
label_2859d8:
    // 0x2859d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2859d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2859dc:
    // 0x2859dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2859dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2859e0:
    // 0x2859e0: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x2859e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_2859e4:
    // 0x2859e4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2859e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2859e8:
    // 0x2859e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2859ec:
    if (ctx->pc == 0x2859ECu) {
        ctx->pc = 0x2859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859E8u;
        // 0x2859ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2859F0u;
        goto label_2859f0;
    }
    ctx->pc = 0x2859E8u;
    {
        const bool branch_taken_0x2859e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859E8u;
        // 0x2859ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859e8) {
            ctx->pc = 0x285A04u;
            goto label_285a04;
        }
    }
    ctx->pc = 0x2859F0u;
label_2859f0:
    // 0x2859f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2859f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2859f4:
    // 0x2859f4: 0x0  nop
    ctx->pc = 0x2859f4u;
    // NOP
label_2859f8:
    // 0x2859f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2859f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2859fc:
    // 0x2859fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_285a00:
    if (ctx->pc == 0x285A00u) {
        ctx->pc = 0x285A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859FCu;
        // 0x285a00: 0x8e82012c  lw          $v0, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A04u;
        goto label_285a04;
    }
    ctx->pc = 0x2859FCu;
    {
        const bool branch_taken_0x2859fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859FCu;
        // 0x285a00: 0x8e82012c  lw          $v0, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859fc) {
            ctx->pc = 0x285A20u;
            goto label_285a20;
        }
    }
    ctx->pc = 0x285A04u;
label_285a04:
    // 0x285a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_285a08:
    // 0x285a08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_285a0c:
    // 0x285a0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x285a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285a10:
    // 0x285a10: 0x0  nop
    ctx->pc = 0x285a10u;
    // NOP
label_285a14:
    // 0x285a14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x285a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_285a18:
    // 0x285a18: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x285a18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_285a1c:
    // 0x285a1c: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x285a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_285a20:
    // 0x285a20: 0x0  nop
    ctx->pc = 0x285a20u;
    // NOP
label_285a24:
    // 0x285a24: 0x0  nop
    ctx->pc = 0x285a24u;
    // NOP
label_285a28:
    // 0x285a28: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x285a28u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_285a2c:
    // 0x285a2c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_285a30:
    if (ctx->pc == 0x285A30u) {
        ctx->pc = 0x285A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A2Cu;
        // 0x285a30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A34u;
        goto label_285a34;
    }
    ctx->pc = 0x285A2Cu;
    {
        const bool branch_taken_0x285a2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A2Cu;
        // 0x285a30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a2c) {
            ctx->pc = 0x285A48u;
            goto label_285a48;
        }
    }
    ctx->pc = 0x285A34u;
label_285a34:
    // 0x285a34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x285a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_285a38:
    // 0x285a38: 0x0  nop
    ctx->pc = 0x285a38u;
    // NOP
label_285a3c:
    // 0x285a3c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x285a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_285a40:
    // 0x285a40: 0x10000008  b           . + 4 + (0x8 << 2)
label_285a44:
    if (ctx->pc == 0x285A44u) {
        ctx->pc = 0x285A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A40u;
        // 0x285a44: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A48u;
        goto label_285a48;
    }
    ctx->pc = 0x285A40u;
    {
        const bool branch_taken_0x285a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A40u;
        // 0x285a44: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a40) {
            ctx->pc = 0x285A64u;
            goto label_285a64;
        }
    }
    ctx->pc = 0x285A48u;
label_285a48:
    // 0x285a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_285a4c:
    // 0x285a4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_285a50:
    // 0x285a50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x285a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_285a54:
    // 0x285a54: 0x0  nop
    ctx->pc = 0x285a54u;
    // NOP
label_285a58:
    // 0x285a58: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x285a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_285a5c:
    // 0x285a5c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x285a5cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_285a60:
    // 0x285a60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x285a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285a64:
    // 0x285a64: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_285a68:
    if (ctx->pc == 0x285A68u) {
        ctx->pc = 0x285A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A64u;
        // 0x285a68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A6Cu;
        goto label_285a6c;
    }
    ctx->pc = 0x285A64u;
    {
        const bool branch_taken_0x285a64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A64u;
        // 0x285a68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a64) {
            ctx->pc = 0x285A80u;
            goto label_285a80;
        }
    }
    ctx->pc = 0x285A6Cu;
label_285a6c:
    // 0x285a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285a70:
    // 0x285a70: 0x0  nop
    ctx->pc = 0x285a70u;
    // NOP
label_285a74:
    // 0x285a74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_285a78:
    // 0x285a78: 0x10000007  b           . + 4 + (0x7 << 2)
label_285a7c:
    if (ctx->pc == 0x285A7Cu) {
        ctx->pc = 0x285A80u;
        goto label_285a80;
    }
    ctx->pc = 0x285A78u;
    {
        const bool branch_taken_0x285a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a78) {
            ctx->pc = 0x285A98u;
            goto label_285a98;
        }
    }
    ctx->pc = 0x285A80u;
label_285a80:
    // 0x285a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_285a84:
    // 0x285a84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_285a88:
    // 0x285a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285a8c:
    // 0x285a8c: 0x0  nop
    ctx->pc = 0x285a8cu;
    // NOP
label_285a90:
    // 0x285a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_285a94:
    // 0x285a94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x285a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_285a98:
    // 0x285a98: 0x0  nop
    ctx->pc = 0x285a98u;
    // NOP
label_285a9c:
    // 0x285a9c: 0x0  nop
    ctx->pc = 0x285a9cu;
    // NOP
label_285aa0:
    // 0x285aa0: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x285aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
label_285aa4:
    // 0x285aa4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_285aa8:
    // 0x285aa8: 0xc06ca2e  jal         func_1B28B8
label_285aac:
    if (ctx->pc == 0x285AACu) {
        ctx->pc = 0x285AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AA8u;
        // 0x285aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AB0u;
        goto label_285ab0;
    }
    ctx->pc = 0x285AA8u;
    SET_GPR_U32(ctx, 31, 0x285AB0u);
    ctx->pc = 0x285AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AA8u;
    // 0x285aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x285AA8u, 0x285AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AB0u;
label_285ab0:
    // 0x285ab0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x285ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_285ab4:
    // 0x285ab4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x285ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_285ab8:
    // 0x285ab8: 0x24900840  addiu       $s0, $a0, 0x840
    ctx->pc = 0x285ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_285abc:
    // 0x285abc: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x285abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_285ac0:
    // 0x285ac0: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x285ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_285ac4:
    // 0x285ac4: 0xc06ca3a  jal         func_1B28E8
label_285ac8:
    if (ctx->pc == 0x285AC8u) {
        ctx->pc = 0x285AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AC4u;
        // 0x285ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285ACCu;
        goto label_285acc;
    }
    ctx->pc = 0x285AC4u;
    SET_GPR_U32(ctx, 31, 0x285ACCu);
    ctx->pc = 0x285AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AC4u;
    // 0x285ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28E8u, 0x285AC4u, 0x285ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285ACCu;
label_285acc:
    // 0x285acc: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x285accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_285ad0:
    // 0x285ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285ad4:
    // 0x285ad4: 0xc06ca46  jal         func_1B2918
label_285ad8:
    if (ctx->pc == 0x285AD8u) {
        ctx->pc = 0x285AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD4u;
        // 0x285ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285ADCu;
        goto label_285adc;
    }
    ctx->pc = 0x285AD4u;
    SET_GPR_U32(ctx, 31, 0x285ADCu);
    ctx->pc = 0x285AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AD4u;
    // 0x285ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x285AD4u, 0x285ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285ADCu;
label_285adc:
    // 0x285adc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x285adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_285ae0:
    // 0x285ae0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x285ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_285ae4:
    // 0x285ae4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x285ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_285ae8:
    // 0x285ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_285aec:
    // 0x285aec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_285af0:
    if (ctx->pc == 0x285AF0u) {
        ctx->pc = 0x285AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AECu;
        // 0x285af0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AF4u;
        goto label_285af4;
    }
    ctx->pc = 0x285AECu;
    {
        const bool branch_taken_0x285aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285aec) {
            ctx->pc = 0x285AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285AECu;
            // 0x285af0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285AF4u;
            goto label_285af4;
        }
    }
    ctx->pc = 0x285AF4u;
label_285af4:
    // 0x285af4: 0x92a30018  lbu         $v1, 0x18($s5)
    ctx->pc = 0x285af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_285af8:
    // 0x285af8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_285afc:
    // 0x285afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_285b00:
    // 0x285b00: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x285b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_285b04:
    // 0x285b04: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x285b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_285b08:
    // 0x285b08: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x285b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_285b0c:
    // 0x285b0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285b10:
    // 0x285b10: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x285b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_285b14:
    // 0x285b14: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x285b14u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_285b18:
    // 0x285b18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x285b18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_285b1c:
    // 0x285b1c: 0x460100a9  min.s       $f2, $f0, $f1
    ctx->pc = 0x285b1cu;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[1]);
label_285b20:
    // 0x285b20: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x285b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285b24:
    // 0x285b24: 0x0  nop
    ctx->pc = 0x285b24u;
    // NOP
label_285b28:
    // 0x285b28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_285b2c:
    if (ctx->pc == 0x285B2Cu) {
        ctx->pc = 0x285B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B28u;
        // 0x285b2c: 0x2a31021  addu        $v0, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B30u;
        goto label_285b30;
    }
    ctx->pc = 0x285B28u;
    {
        const bool branch_taken_0x285b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B28u;
        // 0x285b2c: 0x2a31021  addu        $v0, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b28) {
            ctx->pc = 0x285B68u;
            goto label_285b68;
        }
    }
    ctx->pc = 0x285B30u;
label_285b30:
    // 0x285b30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x285b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_285b34:
    // 0x285b34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_285b38:
    // 0x285b38: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x285b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285b3c:
    // 0x285b3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285b40:
    // 0x285b40: 0x0  nop
    ctx->pc = 0x285b40u;
    // NOP
label_285b44:
    // 0x285b44: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_285b48:
    if (ctx->pc == 0x285B48u) {
        ctx->pc = 0x285B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B44u;
        // 0x285b48: 0x9222001c  lbu         $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B4Cu;
        goto label_285b4c;
    }
    ctx->pc = 0x285B44u;
    {
        const bool branch_taken_0x285b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285b44) {
            ctx->pc = 0x285B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B44u;
            // 0x285b48: 0x9222001c  lbu         $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285B6Cu;
            goto label_285b6c;
        }
    }
    ctx->pc = 0x285B4Cu;
label_285b4c:
    // 0x285b4c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x285b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285b50:
    // 0x285b50: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x285b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285b54:
    // 0x285b54: 0x0  nop
    ctx->pc = 0x285b54u;
    // NOP
label_285b58:
    // 0x285b58: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_285b5c:
    if (ctx->pc == 0x285B5Cu) {
        ctx->pc = 0x285B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B58u;
        // 0x285b5c: 0x9222001c  lbu         $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B60u;
        goto label_285b60;
    }
    ctx->pc = 0x285B58u;
    {
        const bool branch_taken_0x285b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285b58) {
            ctx->pc = 0x285B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B58u;
            // 0x285b5c: 0x9222001c  lbu         $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285B6Cu;
            goto label_285b6c;
        }
    }
    ctx->pc = 0x285B60u;
label_285b60:
    // 0x285b60: 0x10000002  b           . + 4 + (0x2 << 2)
label_285b64:
    if (ctx->pc == 0x285B64u) {
        ctx->pc = 0x285B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B60u;
        // 0x285b64: 0x92220002  lbu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B68u;
        goto label_285b68;
    }
    ctx->pc = 0x285B60u;
    {
        const bool branch_taken_0x285b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B60u;
        // 0x285b64: 0x92220002  lbu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b60) {
            ctx->pc = 0x285B6Cu;
            goto label_285b6c;
        }
    }
    ctx->pc = 0x285B68u;
label_285b68:
    // 0x285b68: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x285b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_285b6c:
    // 0x285b6c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x285b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_285b70:
    // 0x285b70: 0xa2a2001c  sb          $v0, 0x1C($s5)
    ctx->pc = 0x285b70u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 28), (uint8_t)GPR_U32(ctx, 2));
label_285b74:
    // 0x285b74: 0xa2a3001d  sb          $v1, 0x1D($s5)
    ctx->pc = 0x285b74u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 29), (uint8_t)GPR_U32(ctx, 3));
label_285b78:
    // 0x285b78: 0x924205b5  lbu         $v0, 0x5B5($s2)
    ctx->pc = 0x285b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1461)));
label_285b7c:
    // 0x285b7c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_285b80:
    if (ctx->pc == 0x285B80u) {
        ctx->pc = 0x285B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B7Cu;
        // 0x285b80: 0x92a3001c  lbu         $v1, 0x1C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B84u;
        goto label_285b84;
    }
    ctx->pc = 0x285B7Cu;
    {
        const bool branch_taken_0x285b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B7Cu;
        // 0x285b80: 0x92a3001c  lbu         $v1, 0x1C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b7c) {
            ctx->pc = 0x285BF4u;
            goto label_285bf4;
        }
    }
    ctx->pc = 0x285B84u;
label_285b84:
    // 0x285b84: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x285b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_285b88:
    // 0x285b88: 0x50620040  beql        $v1, $v0, . + 4 + (0x40 << 2)
label_285b8c:
    if (ctx->pc == 0x285B8Cu) {
        ctx->pc = 0x285B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B88u;
        // 0x285b8c: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B90u;
        goto label_285b90;
    }
    ctx->pc = 0x285B88u;
    {
        const bool branch_taken_0x285b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x285b88) {
            ctx->pc = 0x285B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B88u;
            // 0x285b8c: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285C8Cu;
            goto label_285c8c;
        }
    }
    ctx->pc = 0x285B90u;
label_285b90:
    // 0x285b90: 0xc09ce08  jal         func_273820
label_285b94:
    if (ctx->pc == 0x285B94u) {
        ctx->pc = 0x285B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B90u;
        // 0x285b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B98u;
        goto label_285b98;
    }
    ctx->pc = 0x285B90u;
    SET_GPR_U32(ctx, 31, 0x285B98u);
    ctx->pc = 0x285B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B90u;
    // 0x285b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273820u, 0x285B90u, 0x285B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B98u;
label_285b98:
    // 0x285b98: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x285b98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_285b9c:
    // 0x285b9c: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x285b9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_285ba0:
    // 0x285ba0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_285ba4:
    if (ctx->pc == 0x285BA4u) {
        ctx->pc = 0x285BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BA0u;
        // 0x285ba4: 0xa24005b5  sb          $zero, 0x5B5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BA8u;
        goto label_285ba8;
    }
    ctx->pc = 0x285BA0u;
    {
        const bool branch_taken_0x285ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BA0u;
        // 0x285ba4: 0xa24005b5  sb          $zero, 0x5B5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ba0) {
            ctx->pc = 0x285C88u;
            goto label_285c88;
        }
    }
    ctx->pc = 0x285BA8u;
label_285ba8:
    // 0x285ba8: 0xc047e72  jal         func_11F9C8
label_285bac:
    if (ctx->pc == 0x285BACu) {
        ctx->pc = 0x285BB0u;
        goto label_285bb0;
    }
    ctx->pc = 0x285BA8u;
    SET_GPR_U32(ctx, 31, 0x285BB0u);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x285BA8u, 0x285BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BB0u;
label_285bb0:
    // 0x285bb0: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_285bb4:
    if (ctx->pc == 0x285BB4u) {
        ctx->pc = 0x285BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BB0u;
        // 0x285bb4: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BB8u;
        goto label_285bb8;
    }
    ctx->pc = 0x285BB0u;
    {
        const bool branch_taken_0x285bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285bb0) {
            ctx->pc = 0x285BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285BB0u;
            // 0x285bb4: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285C8Cu;
            goto label_285c8c;
        }
    }
    ctx->pc = 0x285BB8u;
label_285bb8:
    // 0x285bb8: 0xc047e72  jal         func_11F9C8
label_285bbc:
    if (ctx->pc == 0x285BBCu) {
        ctx->pc = 0x285BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BB8u;
        // 0x285bbc: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BC0u;
        goto label_285bc0;
    }
    ctx->pc = 0x285BB8u;
    SET_GPR_U32(ctx, 31, 0x285BC0u);
    ctx->pc = 0x285BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BB8u;
    // 0x285bbc: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x285BB8u, 0x285BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BC0u;
label_285bc0:
    // 0x285bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x285bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_285bc4:
    // 0x285bc4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x285bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_285bc8:
    // 0x285bc8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x285bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_285bcc:
    // 0x285bcc: 0xa0f809  jalr        $a1
label_285bd0:
    if (ctx->pc == 0x285BD0u) {
        ctx->pc = 0x285BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BCCu;
        // 0x285bd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BD4u;
        goto label_285bd4;
    }
    ctx->pc = 0x285BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x285BD4u);
        ctx->pc = 0x285BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BCCu;
        // 0x285bd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285BCCu, 0x285BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285BD4u;
label_285bd4:
    // 0x285bd4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x285bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_285bd8:
    // 0x285bd8: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
label_285bdc:
    if (ctx->pc == 0x285BDCu) {
        ctx->pc = 0x285BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BD8u;
        // 0x285bdc: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BE0u;
        goto label_285be0;
    }
    ctx->pc = 0x285BD8u;
    {
        const bool branch_taken_0x285bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x285bd8) {
            ctx->pc = 0x285BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285BD8u;
            // 0x285bdc: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285C8Cu;
            goto label_285c8c;
        }
    }
    ctx->pc = 0x285BE0u;
label_285be0:
    // 0x285be0: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x285be0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_285be4:
    // 0x285be4: 0xc047f60  jal         func_11FD80
label_285be8:
    if (ctx->pc == 0x285BE8u) {
        ctx->pc = 0x285BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BE4u;
        // 0x285be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BECu;
        goto label_285bec;
    }
    ctx->pc = 0x285BE4u;
    SET_GPR_U32(ctx, 31, 0x285BECu);
    ctx->pc = 0x285BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BE4u;
    // 0x285be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x285BE4u, 0x285BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BECu;
label_285bec:
    // 0x285bec: 0x10000026  b           . + 4 + (0x26 << 2)
label_285bf0:
    if (ctx->pc == 0x285BF0u) {
        ctx->pc = 0x285BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BECu;
        // 0x285bf0: 0xac400248  sw          $zero, 0x248($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BF4u;
        goto label_285bf4;
    }
    ctx->pc = 0x285BECu;
    {
        const bool branch_taken_0x285bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BECu;
        // 0x285bf0: 0xac400248  sw          $zero, 0x248($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bec) {
            ctx->pc = 0x285C88u;
            goto label_285c88;
        }
    }
    ctx->pc = 0x285BF4u;
label_285bf4:
    // 0x285bf4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x285bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_285bf8:
    // 0x285bf8: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_285bfc:
    if (ctx->pc == 0x285BFCu) {
        ctx->pc = 0x285BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BF8u;
        // 0x285bfc: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C00u;
        goto label_285c00;
    }
    ctx->pc = 0x285BF8u;
    {
        const bool branch_taken_0x285bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x285bf8) {
            ctx->pc = 0x285BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285BF8u;
            // 0x285bfc: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285C8Cu;
            goto label_285c8c;
        }
    }
    ctx->pc = 0x285C00u;
label_285c00:
    // 0x285c00: 0xc09cd9a  jal         func_273668
label_285c04:
    if (ctx->pc == 0x285C04u) {
        ctx->pc = 0x285C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C00u;
        // 0x285c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C08u;
        goto label_285c08;
    }
    ctx->pc = 0x285C00u;
    SET_GPR_U32(ctx, 31, 0x285C08u);
    ctx->pc = 0x285C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C00u;
    // 0x285c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273668u, 0x285C00u, 0x285C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C08u;
label_285c08:
    // 0x285c08: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x285c08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_285c0c:
    // 0x285c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285c10:
    // 0x285c10: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x285c10u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_285c14:
    // 0x285c14: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_285c18:
    if (ctx->pc == 0x285C18u) {
        ctx->pc = 0x285C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C14u;
        // 0x285c18: 0xa24205b5  sb          $v0, 0x5B5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C1Cu;
        goto label_285c1c;
    }
    ctx->pc = 0x285C14u;
    {
        const bool branch_taken_0x285c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C14u;
        // 0x285c18: 0xa24205b5  sb          $v0, 0x5B5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c14) {
            ctx->pc = 0x285C68u;
            goto label_285c68;
        }
    }
    ctx->pc = 0x285C1Cu;
label_285c1c:
    // 0x285c1c: 0xc047e72  jal         func_11F9C8
label_285c20:
    if (ctx->pc == 0x285C20u) {
        ctx->pc = 0x285C24u;
        goto label_285c24;
    }
    ctx->pc = 0x285C1Cu;
    SET_GPR_U32(ctx, 31, 0x285C24u);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x285C1Cu, 0x285C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C24u;
label_285c24:
    // 0x285c24: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_285c28:
    if (ctx->pc == 0x285C28u) {
        ctx->pc = 0x285C2Cu;
        goto label_285c2c;
    }
    ctx->pc = 0x285C24u;
    {
        const bool branch_taken_0x285c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c24) {
            ctx->pc = 0x285C68u;
            goto label_285c68;
        }
    }
    ctx->pc = 0x285C2Cu;
label_285c2c:
    // 0x285c2c: 0xc047e72  jal         func_11F9C8
label_285c30:
    if (ctx->pc == 0x285C30u) {
        ctx->pc = 0x285C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C2Cu;
        // 0x285c30: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C34u;
        goto label_285c34;
    }
    ctx->pc = 0x285C2Cu;
    SET_GPR_U32(ctx, 31, 0x285C34u);
    ctx->pc = 0x285C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C2Cu;
    // 0x285c30: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x285C2Cu, 0x285C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C34u;
label_285c34:
    // 0x285c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_285c38:
    // 0x285c38: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_285c3c:
    // 0x285c3c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x285c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_285c40:
    // 0x285c40: 0xa0f809  jalr        $a1
label_285c44:
    if (ctx->pc == 0x285C44u) {
        ctx->pc = 0x285C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C40u;
        // 0x285c44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C48u;
        goto label_285c48;
    }
    ctx->pc = 0x285C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x285C48u);
        ctx->pc = 0x285C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C40u;
        // 0x285c44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285C40u, 0x285C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285C48u;
label_285c48:
    // 0x285c48: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x285c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_285c4c:
    // 0x285c4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_285c50:
    if (ctx->pc == 0x285C50u) {
        ctx->pc = 0x285C54u;
        goto label_285c54;
    }
    ctx->pc = 0x285C4Cu;
    {
        const bool branch_taken_0x285c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x285c4c) {
            ctx->pc = 0x285C68u;
            goto label_285c68;
        }
    }
    ctx->pc = 0x285C54u;
label_285c54:
    // 0x285c54: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x285c54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_285c58:
    // 0x285c58: 0xc047f60  jal         func_11FD80
label_285c5c:
    if (ctx->pc == 0x285C5Cu) {
        ctx->pc = 0x285C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C58u;
        // 0x285c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C60u;
        goto label_285c60;
    }
    ctx->pc = 0x285C58u;
    SET_GPR_U32(ctx, 31, 0x285C60u);
    ctx->pc = 0x285C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C58u;
    // 0x285c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x285C58u, 0x285C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C60u;
label_285c60:
    // 0x285c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285c64:
    // 0x285c64: 0xac430248  sw          $v1, 0x248($v0)
    ctx->pc = 0x285c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 3));
label_285c68:
    // 0x285c68: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x285c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_285c6c:
    // 0x285c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285c70:
    // 0x285c70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285c74:
    // 0x285c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x285c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285c78:
    // 0x285c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285c7c:
    // 0x285c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285c80:
    // 0x285c80: 0xc0a4d90  jal         func_293640
label_285c84:
    if (ctx->pc == 0x285C84u) {
        ctx->pc = 0x285C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C80u;
        // 0x285c84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C88u;
        goto label_285c88;
    }
    ctx->pc = 0x285C80u;
    SET_GPR_U32(ctx, 31, 0x285C88u);
    ctx->pc = 0x285C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C80u;
    // 0x285c84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x285C80u, 0x285C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C88u;
label_285c88:
    // 0x285c88: 0x8e620590  lw          $v0, 0x590($s3)
    ctx->pc = 0x285c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
label_285c8c:
    // 0x285c8c: 0x8e630594  lw          $v1, 0x594($s3)
    ctx->pc = 0x285c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1428)));
label_285c90:
    // 0x285c90: 0x8e650598  lw          $a1, 0x598($s3)
    ctx->pc = 0x285c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1432)));
label_285c94:
    // 0x285c94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_285c98:
    // 0x285c98: 0x8e64059c  lw          $a0, 0x59C($s3)
    ctx->pc = 0x285c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1436)));
label_285c9c:
    // 0x285c9c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x285c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_285ca0:
    // 0x285ca0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x285ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_285ca4:
    // 0x285ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_285ca8:
    if (ctx->pc == 0x285CA8u) {
        ctx->pc = 0x285CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CA4u;
        // 0x285ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CACu;
        goto label_285cac;
    }
    ctx->pc = 0x285CA4u;
    {
        const bool branch_taken_0x285ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CA4u;
        // 0x285ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ca4) {
            ctx->pc = 0x285CB8u;
            goto label_285cb8;
        }
    }
    ctx->pc = 0x285CACu;
label_285cac:
    // 0x285cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285cb0:
    // 0x285cb0: 0xc044b12  jal         func_112C48
label_285cb4:
    if (ctx->pc == 0x285CB4u) {
        ctx->pc = 0x285CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB0u;
        // 0x285cb4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CB8u;
        goto label_285cb8;
    }
    ctx->pc = 0x285CB0u;
    SET_GPR_U32(ctx, 31, 0x285CB8u);
    ctx->pc = 0x285CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CB0u;
    // 0x285cb4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C48u, 0x285CB0u, 0x285CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CB8u;
label_285cb8:
    // 0x285cb8: 0x92830128  lbu         $v1, 0x128($s4)
    ctx->pc = 0x285cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 296)));
label_285cbc:
    // 0x285cbc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x285cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_285cc0:
    // 0x285cc0: 0x10400212  beqz        $v0, . + 4 + (0x212 << 2)
label_285cc4:
    if (ctx->pc == 0x285CC4u) {
        ctx->pc = 0x285CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CC0u;
        // 0x285cc4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CC8u;
        goto label_285cc8;
    }
    ctx->pc = 0x285CC0u;
    {
        const bool branch_taken_0x285cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CC0u;
        // 0x285cc4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cc0) {
            ctx->pc = 0x28650Cu;
            goto label_28650c;
        }
    }
    ctx->pc = 0x285CC8u;
label_285cc8:
    // 0x285cc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_285ccc:
    // 0x285ccc: 0x2442f170  addiu       $v0, $v0, -0xE90
    ctx->pc = 0x285cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
label_285cd0:
    // 0x285cd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x285cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_285cd4:
    // 0x285cd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x285cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_285cd8:
    // 0x285cd8: 0x800008  jr          $a0
label_285cdc:
    if (ctx->pc == 0x285CDCu) {
        ctx->pc = 0x285CE0u;
        goto label_285ce0;
    }
    ctx->pc = 0x285CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CE0u: goto label_285ce0;
            case 0x285F08u: goto label_285f08;
            case 0x286118u: goto label_286118;
            case 0x2864A8u: goto label_2864a8;
            case 0x2864B0u: goto label_2864b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285CD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x285CE0u;
label_285ce0:
    // 0x285ce0: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x285ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_285ce4:
    // 0x285ce4: 0xc0a157e  jal         func_2855F8
label_285ce8:
    if (ctx->pc == 0x285CE8u) {
        ctx->pc = 0x285CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CE4u;
        // 0x285ce8: 0xc64c05a8  lwc1        $f12, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CECu;
        goto label_285cec;
    }
    ctx->pc = 0x285CE4u;
    SET_GPR_U32(ctx, 31, 0x285CECu);
    ctx->pc = 0x285CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CE4u;
    // 0x285ce8: 0xc64c05a8  lwc1        $f12, 0x5A8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x285CE4u, 0x285CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CECu;
label_285cec:
    // 0x285cec: 0xe64005a8  swc1        $f0, 0x5A8($s2)
    ctx->pc = 0x285cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1448), bits); }
label_285cf0:
    // 0x285cf0: 0xc087502  jal         func_21D408
label_285cf4:
    if (ctx->pc == 0x285CF4u) {
        ctx->pc = 0x285CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CF0u;
        // 0x285cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CF8u;
        goto label_285cf8;
    }
    ctx->pc = 0x285CF0u;
    SET_GPR_U32(ctx, 31, 0x285CF8u);
    ctx->pc = 0x285CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CF0u;
    // 0x285cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x285CF0u, 0x285CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CF8u;
label_285cf8:
    // 0x285cf8: 0x8043002c  lb          $v1, 0x2C($v0)
    ctx->pc = 0x285cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_285cfc:
    // 0x285cfc: 0x4620016  bltzl       $v1, . + 4 + (0x16 << 2)
label_285d00:
    if (ctx->pc == 0x285D00u) {
        ctx->pc = 0x285D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CFCu;
        // 0x285d00: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D04u;
        goto label_285d04;
    }
    ctx->pc = 0x285CFCu;
    {
        const bool branch_taken_0x285cfc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x285cfc) {
            ctx->pc = 0x285D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285CFCu;
            // 0x285d00: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D58u;
            goto label_285d58;
        }
    }
    ctx->pc = 0x285D04u;
label_285d04:
    // 0x285d04: 0xc087502  jal         func_21D408
label_285d08:
    if (ctx->pc == 0x285D08u) {
        ctx->pc = 0x285D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D04u;
        // 0x285d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D0Cu;
        goto label_285d0c;
    }
    ctx->pc = 0x285D04u;
    SET_GPR_U32(ctx, 31, 0x285D0Cu);
    ctx->pc = 0x285D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285D04u;
    // 0x285d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x285D04u, 0x285D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285D0Cu;
label_285d0c:
    // 0x285d0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x285d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285d10:
    // 0x285d10: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x285d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_285d14:
    // 0x285d14: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_285d18:
    if (ctx->pc == 0x285D18u) {
        ctx->pc = 0x285D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D14u;
        // 0x285d18: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D1Cu;
        goto label_285d1c;
    }
    ctx->pc = 0x285D14u;
    {
        const bool branch_taken_0x285d14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D14u;
        // 0x285d18: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d14) {
            ctx->pc = 0x285D28u;
            goto label_285d28;
        }
    }
    ctx->pc = 0x285D1Cu;
label_285d1c:
    // 0x285d1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x285d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_285d20:
    // 0x285d20: 0x10000002  b           . + 4 + (0x2 << 2)
label_285d24:
    if (ctx->pc == 0x285D24u) {
        ctx->pc = 0x285D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D20u;
        // 0x285d24: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D28u;
        goto label_285d28;
    }
    ctx->pc = 0x285D20u;
    {
        const bool branch_taken_0x285d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D20u;
        // 0x285d24: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d20) {
            ctx->pc = 0x285D2Cu;
            goto label_285d2c;
        }
    }
    ctx->pc = 0x285D28u;
label_285d28:
    // 0x285d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285d2c:
    // 0x285d2c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x285d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_285d30:
    // 0x285d30: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x285d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_285d34:
    // 0x285d34: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x285d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_285d38:
    // 0x285d38: 0x40f809  jalr        $v0
label_285d3c:
    if (ctx->pc == 0x285D3Cu) {
        ctx->pc = 0x285D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D38u;
        // 0x285d3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D40u;
        goto label_285d40;
    }
    ctx->pc = 0x285D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285D40u);
        ctx->pc = 0x285D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D38u;
        // 0x285d3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D38u, 0x285D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285D40u;
label_285d40:
    // 0x285d40: 0x3842006b  xori        $v0, $v0, 0x6B
    ctx->pc = 0x285d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)107);
label_285d44:
    // 0x285d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_285d48:
    if (ctx->pc == 0x285D48u) {
        ctx->pc = 0x285D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D44u;
        // 0x285d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D4Cu;
        goto label_285d4c;
    }
    ctx->pc = 0x285D44u;
    {
        const bool branch_taken_0x285d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D44u;
        // 0x285d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d44) {
            ctx->pc = 0x285D54u;
            goto label_285d54;
        }
    }
    ctx->pc = 0x285D4Cu;
label_285d4c:
    // 0x285d4c: 0xc087b0e  jal         func_21EC38
label_285d50:
    if (ctx->pc == 0x285D50u) {
        ctx->pc = 0x285D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D4Cu;
        // 0x285d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D54u;
        goto label_285d54;
    }
    ctx->pc = 0x285D4Cu;
    SET_GPR_U32(ctx, 31, 0x285D54u);
    ctx->pc = 0x285D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285D4Cu;
    // 0x285d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x285D4Cu, 0x285D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285D54u;
label_285d54:
    // 0x285d54: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x285d54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_285d58:
    // 0x285d58: 0x8e640590  lw          $a0, 0x590($s3)
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
label_285d5c:
    // 0x285d5c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x285d5cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_285d60:
    // 0x285d60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_285d64:
    if (ctx->pc == 0x285D64u) {
        ctx->pc = 0x285D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D60u;
        // 0x285d64: 0x8e630594  lw          $v1, 0x594($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D68u;
        goto label_285d68;
    }
    ctx->pc = 0x285D60u;
    {
        const bool branch_taken_0x285d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D60u;
        // 0x285d64: 0x8e630594  lw          $v1, 0x594($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d60) {
            ctx->pc = 0x285D78u;
            goto label_285d78;
        }
    }
    ctx->pc = 0x285D68u;
label_285d68:
    // 0x285d68: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x285d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_285d6c:
    // 0x285d6c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_285d70:
    if (ctx->pc == 0x285D70u) {
        ctx->pc = 0x285D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D6Cu;
        // 0x285d70: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D74u;
        goto label_285d74;
    }
    ctx->pc = 0x285D6Cu;
    {
        const bool branch_taken_0x285d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285d6c) {
            ctx->pc = 0x285D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D6Cu;
            // 0x285d70: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D78u;
            goto label_285d78;
        }
    }
    ctx->pc = 0x285D74u;
label_285d74:
    // 0x285d74: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x285d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_285d78:
    // 0x285d78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x285d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_285d7c:
    // 0x285d7c: 0x8e620598  lw          $v0, 0x598($s3)
    ctx->pc = 0x285d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1432)));
label_285d80:
    // 0x285d80: 0x8e64059c  lw          $a0, 0x59C($s3)
    ctx->pc = 0x285d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1436)));
label_285d84:
    // 0x285d84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x285d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_285d88:
    // 0x285d88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x285d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_285d8c:
    // 0x285d8c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_285d90:
    if (ctx->pc == 0x285D90u) {
        ctx->pc = 0x285D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D8Cu;
        // 0x285d90: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D94u;
        goto label_285d94;
    }
    ctx->pc = 0x285D8Cu;
    {
        const bool branch_taken_0x285d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D8Cu;
        // 0x285d90: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d8c) {
            ctx->pc = 0x285DC0u;
            goto label_285dc0;
        }
    }
    ctx->pc = 0x285D94u;
label_285d94:
    // 0x285d94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_285d98:
    if (ctx->pc == 0x285D98u) {
        ctx->pc = 0x285D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D94u;
        // 0x285d98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D9Cu;
        goto label_285d9c;
    }
    ctx->pc = 0x285D94u;
    {
        const bool branch_taken_0x285d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D94u;
        // 0x285d98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d94) {
            ctx->pc = 0x285DC0u;
            goto label_285dc0;
        }
    }
    ctx->pc = 0x285D9Cu;
label_285d9c:
    // 0x285d9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285da0:
    // 0x285da0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285da4:
    // 0x285da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285da8:
    // 0x285da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285dac:
    // 0x285dac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285db0:
    // 0x285db0: 0xc0879a6  jal         func_21E698
label_285db4:
    if (ctx->pc == 0x285DB4u) {
        ctx->pc = 0x285DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB0u;
        // 0x285db4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DB8u;
        goto label_285db8;
    }
    ctx->pc = 0x285DB0u;
    SET_GPR_U32(ctx, 31, 0x285DB8u);
    ctx->pc = 0x285DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DB0u;
    // 0x285db4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x285DB0u, 0x285DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DB8u;
label_285db8:
    // 0x285db8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_285dbc:
    if (ctx->pc == 0x285DBCu) {
        ctx->pc = 0x285DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB8u;
        // 0x285dbc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DC0u;
        goto label_285dc0;
    }
    ctx->pc = 0x285DB8u;
    {
        const bool branch_taken_0x285db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB8u;
        // 0x285dbc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285db8) {
            ctx->pc = 0x285E34u;
            goto label_285e34;
        }
    }
    ctx->pc = 0x285DC0u;
label_285dc0:
    // 0x285dc0: 0xc087502  jal         func_21D408
label_285dc4:
    if (ctx->pc == 0x285DC4u) {
        ctx->pc = 0x285DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DC0u;
        // 0x285dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DC8u;
        goto label_285dc8;
    }
    ctx->pc = 0x285DC0u;
    SET_GPR_U32(ctx, 31, 0x285DC8u);
    ctx->pc = 0x285DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DC0u;
    // 0x285dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x285DC0u, 0x285DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DC8u;
label_285dc8:
    // 0x285dc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285dcc:
    // 0x285dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285dd0:
    // 0x285dd0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_285dd4:
    if (ctx->pc == 0x285DD4u) {
        ctx->pc = 0x285DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DD0u;
        // 0x285dd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DD8u;
        goto label_285dd8;
    }
    ctx->pc = 0x285DD0u;
    {
        const bool branch_taken_0x285dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x285DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DD0u;
        // 0x285dd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dd0) {
            ctx->pc = 0x285E08u;
            goto label_285e08;
        }
    }
    ctx->pc = 0x285DD8u;
label_285dd8:
    // 0x285dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285ddc:
    // 0x285ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285de0:
    // 0x285de0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x285de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_285de4:
    // 0x285de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285de8:
    // 0x285de8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_285dec:
    // 0x285dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285df0:
    // 0x285df0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x285df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285df4:
    // 0x285df4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285df8:
    // 0x285df8: 0xc088178  jal         func_2205E0
label_285dfc:
    if (ctx->pc == 0x285DFCu) {
        ctx->pc = 0x285DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DF8u;
        // 0x285dfc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E00u;
        goto label_285e00;
    }
    ctx->pc = 0x285DF8u;
    SET_GPR_U32(ctx, 31, 0x285E00u);
    ctx->pc = 0x285DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DF8u;
    // 0x285dfc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x285DF8u, 0x285E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E00u;
label_285e00:
    // 0x285e00: 0x1000000c  b           . + 4 + (0xC << 2)
label_285e04:
    if (ctx->pc == 0x285E04u) {
        ctx->pc = 0x285E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E00u;
        // 0x285e04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E08u;
        goto label_285e08;
    }
    ctx->pc = 0x285E00u;
    {
        const bool branch_taken_0x285e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E00u;
        // 0x285e04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e00) {
            ctx->pc = 0x285E34u;
            goto label_285e34;
        }
    }
    ctx->pc = 0x285E08u;
label_285e08:
    // 0x285e08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285e0c:
    // 0x285e0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285e10:
    // 0x285e10: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x285e10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_285e14:
    // 0x285e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285e18:
    // 0x285e18: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x285e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_285e1c:
    // 0x285e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285e20:
    // 0x285e20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285e24:
    // 0x285e24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285e28:
    // 0x285e28: 0xc088178  jal         func_2205E0
label_285e2c:
    if (ctx->pc == 0x285E2Cu) {
        ctx->pc = 0x285E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E28u;
        // 0x285e2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E30u;
        goto label_285e30;
    }
    ctx->pc = 0x285E28u;
    SET_GPR_U32(ctx, 31, 0x285E30u);
    ctx->pc = 0x285E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E28u;
    // 0x285e2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x285E28u, 0x285E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E30u;
label_285e30:
    // 0x285e30: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_285e34:
    // 0x285e34: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x285e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_285e38:
    // 0x285e38: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x285e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_285e3c:
    // 0x285e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_285e40:
    if (ctx->pc == 0x285E40u) {
        ctx->pc = 0x285E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E3Cu;
        // 0x285e40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E44u;
        goto label_285e44;
    }
    ctx->pc = 0x285E3Cu;
    {
        const bool branch_taken_0x285e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E3Cu;
        // 0x285e40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e3c) {
            ctx->pc = 0x285E50u;
            goto label_285e50;
        }
    }
    ctx->pc = 0x285E44u;
label_285e44:
    // 0x285e44: 0xc107444  jal         func_41D110
label_285e48:
    if (ctx->pc == 0x285E48u) {
        ctx->pc = 0x285E4Cu;
        goto label_285e4c;
    }
    ctx->pc = 0x285E44u;
    SET_GPR_U32(ctx, 31, 0x285E4Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x285E44u, 0x285E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E4Cu;
label_285e4c:
    // 0x285e4c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x285e4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_285e50:
    // 0x285e50: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_285e54:
    if (ctx->pc == 0x285E54u) {
        ctx->pc = 0x285E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E50u;
        // 0x285e54: 0xa24005b4  sb          $zero, 0x5B4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E58u;
        goto label_285e58;
    }
    ctx->pc = 0x285E50u;
    {
        const bool branch_taken_0x285e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e50) {
            ctx->pc = 0x285E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285E50u;
            // 0x285e54: 0xa24005b4  sb          $zero, 0x5B4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285F00u;
            goto label_285f00;
        }
    }
    ctx->pc = 0x285E58u;
label_285e58:
    // 0x285e58: 0x8e6205a0  lw          $v0, 0x5A0($s3)
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1440)));
label_285e5c:
    // 0x285e5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_285e60:
    if (ctx->pc == 0x285E60u) {
        ctx->pc = 0x285E64u;
        goto label_285e64;
    }
    ctx->pc = 0x285E5Cu;
    {
        const bool branch_taken_0x285e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e5c) {
            ctx->pc = 0x285E90u;
            goto label_285e90;
        }
    }
    ctx->pc = 0x285E64u;
label_285e64:
    // 0x285e64: 0xc073a8e  jal         func_1CEA38
label_285e68:
    if (ctx->pc == 0x285E68u) {
        ctx->pc = 0x285E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E64u;
        // 0x285e68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E6Cu;
        goto label_285e6c;
    }
    ctx->pc = 0x285E64u;
    SET_GPR_U32(ctx, 31, 0x285E6Cu);
    ctx->pc = 0x285E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E64u;
    // 0x285e68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x285E64u, 0x285E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E6Cu;
label_285e6c:
    // 0x285e6c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_285e70:
    if (ctx->pc == 0x285E70u) {
        ctx->pc = 0x285E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E6Cu;
        // 0x285e70: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E74u;
        goto label_285e74;
    }
    ctx->pc = 0x285E6Cu;
    {
        const bool branch_taken_0x285e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E6Cu;
        // 0x285e70: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e6c) {
            ctx->pc = 0x285EFCu;
            goto label_285efc;
        }
    }
    ctx->pc = 0x285E74u;
label_285e74:
    // 0x285e74: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x285e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_285e78:
    // 0x285e78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x285e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_285e7c:
    // 0x285e7c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_285e80:
    if (ctx->pc == 0x285E80u) {
        ctx->pc = 0x285E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E7Cu;
        // 0x285e80: 0xa24005b4  sb          $zero, 0x5B4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E84u;
        goto label_285e84;
    }
    ctx->pc = 0x285E7Cu;
    {
        const bool branch_taken_0x285e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285e7c) {
            ctx->pc = 0x285E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285E7Cu;
            // 0x285e80: 0xa24005b4  sb          $zero, 0x5B4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285F00u;
            goto label_285f00;
        }
    }
    ctx->pc = 0x285E84u;
label_285e84:
    // 0x285e84: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x285e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_285e88:
    // 0x285e88: 0x10000018  b           . + 4 + (0x18 << 2)
label_285e8c:
    if (ctx->pc == 0x285E8Cu) {
        ctx->pc = 0x285E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E88u;
        // 0x285e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E90u;
        goto label_285e90;
    }
    ctx->pc = 0x285E88u;
    {
        const bool branch_taken_0x285e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E88u;
        // 0x285e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e88) {
            ctx->pc = 0x285EECu;
            goto label_285eec;
        }
    }
    ctx->pc = 0x285E90u;
label_285e90:
    // 0x285e90: 0xc073a8e  jal         func_1CEA38
label_285e94:
    if (ctx->pc == 0x285E94u) {
        ctx->pc = 0x285E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E90u;
        // 0x285e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E98u;
        goto label_285e98;
    }
    ctx->pc = 0x285E90u;
    SET_GPR_U32(ctx, 31, 0x285E98u);
    ctx->pc = 0x285E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E90u;
    // 0x285e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x285E90u, 0x285E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E98u;
label_285e98:
    // 0x285e98: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_285e9c:
    if (ctx->pc == 0x285E9Cu) {
        ctx->pc = 0x285E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E98u;
        // 0x285e9c: 0x8e11489c  lw          $s1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EA0u;
        goto label_285ea0;
    }
    ctx->pc = 0x285E98u;
    {
        const bool branch_taken_0x285e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E98u;
        // 0x285e9c: 0x8e11489c  lw          $s1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e98) {
            ctx->pc = 0x285EFCu;
            goto label_285efc;
        }
    }
    ctx->pc = 0x285EA0u;
label_285ea0:
    // 0x285ea0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x285ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285ea4:
    // 0x285ea4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x285ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_285ea8:
    // 0x285ea8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x285ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_285eac:
    // 0x285eac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_285eb0:
    if (ctx->pc == 0x285EB0u) {
        ctx->pc = 0x285EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EACu;
        // 0x285eb0: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EB4u;
        goto label_285eb4;
    }
    ctx->pc = 0x285EACu;
    {
        const bool branch_taken_0x285eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EACu;
        // 0x285eb0: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285eac) {
            ctx->pc = 0x285EE8u;
            goto label_285ee8;
        }
    }
    ctx->pc = 0x285EB4u;
label_285eb4:
    // 0x285eb4: 0xc136ad6  jal         func_4DAB58
label_285eb8:
    if (ctx->pc == 0x285EB8u) {
        ctx->pc = 0x285EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EB4u;
        // 0x285eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EBCu;
        goto label_285ebc;
    }
    ctx->pc = 0x285EB4u;
    SET_GPR_U32(ctx, 31, 0x285EBCu);
    ctx->pc = 0x285EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285EB4u;
    // 0x285eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x285EB4u, 0x285EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285EBCu;
label_285ebc:
    // 0x285ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285ec0:
    // 0x285ec0: 0xc136ad4  jal         func_4DAB50
label_285ec4:
    if (ctx->pc == 0x285EC4u) {
        ctx->pc = 0x285EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EC0u;
        // 0x285ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EC8u;
        goto label_285ec8;
    }
    ctx->pc = 0x285EC0u;
    SET_GPR_U32(ctx, 31, 0x285EC8u);
    ctx->pc = 0x285EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285EC0u;
    // 0x285ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x285EC0u, 0x285EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285EC8u;
label_285ec8:
    // 0x285ec8: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x285ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_285ecc:
    // 0x285ecc: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x285eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_285ed0:
    // 0x285ed0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x285ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_285ed4:
    // 0x285ed4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x285ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_285ed8:
    // 0x285ed8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x285ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_285edc:
    // 0x285edc: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
label_285ee0:
    if (ctx->pc == 0x285EE0u) {
        ctx->pc = 0x285EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EDCu;
        // 0x285ee0: 0xa24005b4  sb          $zero, 0x5B4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EE4u;
        goto label_285ee4;
    }
    ctx->pc = 0x285EDCu;
    {
        const bool branch_taken_0x285edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x285edc) {
            ctx->pc = 0x285EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285EDCu;
            // 0x285ee0: 0xa24005b4  sb          $zero, 0x5B4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285F00u;
            goto label_285f00;
        }
    }
    ctx->pc = 0x285EE4u;
label_285ee4:
    // 0x285ee4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x285ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_285ee8:
    // 0x285ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285eec:
    // 0x285eec: 0xc07387a  jal         func_1CE1E8
label_285ef0:
    if (ctx->pc == 0x285EF0u) {
        ctx->pc = 0x285EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EECu;
        // 0x285ef0: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EF4u;
        goto label_285ef4;
    }
    ctx->pc = 0x285EECu;
    SET_GPR_U32(ctx, 31, 0x285EF4u);
    ctx->pc = 0x285EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285EECu;
    // 0x285ef0: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x285EECu, 0x285EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285EF4u;
label_285ef4:
    // 0x285ef4: 0xa2a0001d  sb          $zero, 0x1D($s5)
    ctx->pc = 0x285ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 29), (uint8_t)GPR_U32(ctx, 0));
label_285ef8:
    // 0x285ef8: 0xa2a0001c  sb          $zero, 0x1C($s5)
    ctx->pc = 0x285ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 28), (uint8_t)GPR_U32(ctx, 0));
label_285efc:
    // 0x285efc: 0xa24005b4  sb          $zero, 0x5B4($s2)
    ctx->pc = 0x285efcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
label_285f00:
    // 0x285f00: 0x10000169  b           . + 4 + (0x169 << 2)
label_285f04:
    if (ctx->pc == 0x285F04u) {
        ctx->pc = 0x285F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F00u;
        // 0x285f04: 0xa24005b5  sb          $zero, 0x5B5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F08u;
        goto label_285f08;
    }
    ctx->pc = 0x285F00u;
    {
        const bool branch_taken_0x285f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F00u;
        // 0x285f04: 0xa24005b5  sb          $zero, 0x5B5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f00) {
            ctx->pc = 0x2864A8u;
            goto label_2864a8;
        }
    }
    ctx->pc = 0x285F08u;
label_285f08:
    // 0x285f08: 0xa2a0001d  sb          $zero, 0x1D($s5)
    ctx->pc = 0x285f08u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 29), (uint8_t)GPR_U32(ctx, 0));
label_285f0c:
    // 0x285f0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x285f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_285f10:
    // 0x285f10: 0xa2a0001c  sb          $zero, 0x1C($s5)
    ctx->pc = 0x285f10u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 28), (uint8_t)GPR_U32(ctx, 0));
label_285f14:
    // 0x285f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285f18:
    // 0x285f18: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x285f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_285f1c:
    // 0x285f1c: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x285f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_285f20:
    // 0x285f20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_285f24:
    if (ctx->pc == 0x285F24u) {
        ctx->pc = 0x285F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F20u;
        // 0x285f24: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F28u;
        goto label_285f28;
    }
    ctx->pc = 0x285F20u;
    {
        const bool branch_taken_0x285f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F20u;
        // 0x285f24: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f20) {
            ctx->pc = 0x285F34u;
            goto label_285f34;
        }
    }
    ctx->pc = 0x285F28u;
label_285f28:
    // 0x285f28: 0xc107444  jal         func_41D110
label_285f2c:
    if (ctx->pc == 0x285F2Cu) {
        ctx->pc = 0x285F30u;
        goto label_285f30;
    }
    ctx->pc = 0x285F28u;
    SET_GPR_U32(ctx, 31, 0x285F30u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x285F28u, 0x285F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F30u;
label_285f30:
    // 0x285f30: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x285f30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_285f34:
    // 0x285f34: 0x50a0003a  beql        $a1, $zero, . + 4 + (0x3A << 2)
label_285f38:
    if (ctx->pc == 0x285F38u) {
        ctx->pc = 0x285F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F34u;
        // 0x285f38: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F3Cu;
        goto label_285f3c;
    }
    ctx->pc = 0x285F34u;
    {
        const bool branch_taken_0x285f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f34) {
            ctx->pc = 0x285F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285F34u;
            // 0x285f38: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286020u;
            goto label_286020;
        }
    }
    ctx->pc = 0x285F3Cu;
label_285f3c:
    // 0x285f3c: 0x8e6205a0  lw          $v0, 0x5A0($s3)
    ctx->pc = 0x285f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1440)));
label_285f40:
    // 0x285f40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_285f44:
    if (ctx->pc == 0x285F44u) {
        ctx->pc = 0x285F48u;
        goto label_285f48;
    }
    ctx->pc = 0x285F40u;
    {
        const bool branch_taken_0x285f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f40) {
            ctx->pc = 0x285FBCu;
            goto label_285fbc;
        }
    }
    ctx->pc = 0x285F48u;
label_285f48:
    // 0x285f48: 0xc073a8e  jal         func_1CEA38
label_285f4c:
    if (ctx->pc == 0x285F4Cu) {
        ctx->pc = 0x285F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F48u;
        // 0x285f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F50u;
        goto label_285f50;
    }
    ctx->pc = 0x285F48u;
    SET_GPR_U32(ctx, 31, 0x285F50u);
    ctx->pc = 0x285F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F48u;
    // 0x285f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x285F48u, 0x285F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F50u;
label_285f50:
    // 0x285f50: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_285f54:
    if (ctx->pc == 0x285F54u) {
        ctx->pc = 0x285F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F50u;
        // 0x285f54: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F58u;
        goto label_285f58;
    }
    ctx->pc = 0x285F50u;
    {
        const bool branch_taken_0x285f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F50u;
        // 0x285f54: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f50) {
            ctx->pc = 0x28601Cu;
            goto label_28601c;
        }
    }
    ctx->pc = 0x285F58u;
label_285f58:
    // 0x285f58: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x285f58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_285f5c:
    // 0x285f5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x285f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_285f60:
    // 0x285f60: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_285f64:
    if (ctx->pc == 0x285F64u) {
        ctx->pc = 0x285F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F60u;
        // 0x285f64: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F68u;
        goto label_285f68;
    }
    ctx->pc = 0x285F60u;
    {
        const bool branch_taken_0x285f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f60) {
            ctx->pc = 0x285F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285F60u;
            // 0x285f64: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286020u;
            goto label_286020;
        }
    }
    ctx->pc = 0x285F68u;
label_285f68:
    // 0x285f68: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x285f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_285f6c:
    // 0x285f6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285f70:
    // 0x285f70: 0xc0739c6  jal         func_1CE718
label_285f74:
    if (ctx->pc == 0x285F74u) {
        ctx->pc = 0x285F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F70u;
        // 0x285f74: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F78u;
        goto label_285f78;
    }
    ctx->pc = 0x285F70u;
    SET_GPR_U32(ctx, 31, 0x285F78u);
    ctx->pc = 0x285F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F70u;
    // 0x285f74: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x285F70u, 0x285F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F78u;
label_285f78:
    // 0x285f78: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x285f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_285f7c:
    // 0x285f7c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x285f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285f80:
    // 0x285f80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x285f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_285f84:
    // 0x285f84: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_285f88:
    if (ctx->pc == 0x285F88u) {
        ctx->pc = 0x285F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F84u;
        // 0x285f88: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F8Cu;
        goto label_285f8c;
    }
    ctx->pc = 0x285F84u;
    {
        const bool branch_taken_0x285f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f84) {
            ctx->pc = 0x285F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285F84u;
            // 0x285f88: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286020u;
            goto label_286020;
        }
    }
    ctx->pc = 0x285F8Cu;
label_285f8c:
    // 0x285f8c: 0x8ea5489c  lw          $a1, 0x489C($s5)
    ctx->pc = 0x285f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_285f90:
    // 0x285f90: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x285f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_285f94:
    // 0x285f94: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x285f94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_285f98:
    // 0x285f98: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x285f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
label_285f9c:
    // 0x285f9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x285f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_285fa0:
    // 0x285fa0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x285fa0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_285fa4:
    // 0x285fa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x285fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_285fa8:
    // 0x285fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_285fac:
    // 0x285fac: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x285facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_285fb0:
    // 0x285fb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x285fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_285fb4:
    // 0x285fb4: 0x10000019  b           . + 4 + (0x19 << 2)
label_285fb8:
    if (ctx->pc == 0x285FB8u) {
        ctx->pc = 0x285FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FB4u;
        // 0x285fb8: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FBCu;
        goto label_285fbc;
    }
    ctx->pc = 0x285FB4u;
    {
        const bool branch_taken_0x285fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FB4u;
        // 0x285fb8: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fb4) {
            ctx->pc = 0x28601Cu;
            goto label_28601c;
        }
    }
    ctx->pc = 0x285FBCu;
label_285fbc:
    // 0x285fbc: 0xc073a8e  jal         func_1CEA38
label_285fc0:
    if (ctx->pc == 0x285FC0u) {
        ctx->pc = 0x285FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FBCu;
        // 0x285fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FC4u;
        goto label_285fc4;
    }
    ctx->pc = 0x285FBCu;
    SET_GPR_U32(ctx, 31, 0x285FC4u);
    ctx->pc = 0x285FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285FBCu;
    // 0x285fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x285FBCu, 0x285FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FC4u;
label_285fc4:
    // 0x285fc4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_285fc8:
    if (ctx->pc == 0x285FC8u) {
        ctx->pc = 0x285FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FC4u;
        // 0x285fc8: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FCCu;
        goto label_285fcc;
    }
    ctx->pc = 0x285FC4u;
    {
        const bool branch_taken_0x285fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FC4u;
        // 0x285fc8: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fc4) {
            ctx->pc = 0x28601Cu;
            goto label_28601c;
        }
    }
    ctx->pc = 0x285FCCu;
label_285fcc:
    // 0x285fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285fd0:
    // 0x285fd0: 0xc0739c6  jal         func_1CE718
label_285fd4:
    if (ctx->pc == 0x285FD4u) {
        ctx->pc = 0x285FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FD0u;
        // 0x285fd4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FD8u;
        goto label_285fd8;
    }
    ctx->pc = 0x285FD0u;
    SET_GPR_U32(ctx, 31, 0x285FD8u);
    ctx->pc = 0x285FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285FD0u;
    // 0x285fd4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x285FD0u, 0x285FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FD8u;
label_285fd8:
    // 0x285fd8: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x285fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_285fdc:
    // 0x285fdc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x285fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285fe0:
    // 0x285fe0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x285fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_285fe4:
    // 0x285fe4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_285fe8:
    if (ctx->pc == 0x285FE8u) {
        ctx->pc = 0x285FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FE4u;
        // 0x285fe8: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FECu;
        goto label_285fec;
    }
    ctx->pc = 0x285FE4u;
    {
        const bool branch_taken_0x285fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285fe4) {
            ctx->pc = 0x285FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285FE4u;
            // 0x285fe8: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286020u;
            goto label_286020;
        }
    }
    ctx->pc = 0x285FECu;
label_285fec:
    // 0x285fec: 0x8ea5489c  lw          $a1, 0x489C($s5)
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_285ff0:
    // 0x285ff0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_285ff4:
    // 0x285ff4: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x285ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_285ff8:
    // 0x285ff8: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x285ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_285ffc:
    // 0x285ffc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_286000:
    if (ctx->pc == 0x286000u) {
        ctx->pc = 0x286000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FFCu;
        // 0x286000: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286004u;
        goto label_286004;
    }
    ctx->pc = 0x285FFCu;
    {
        const bool branch_taken_0x285ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FFCu;
        // 0x286000: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ffc) {
            ctx->pc = 0x28601Cu;
            goto label_28601c;
        }
    }
    ctx->pc = 0x286004u;
label_286004:
    // 0x286004: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x286004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_286008:
    // 0x286008: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x286008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_28600c:
    // 0x28600c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x28600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_286010:
    // 0x286010: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x286010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_286014:
    // 0x286014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x286014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_286018:
    // 0x286018: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x286018u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_28601c:
    // 0x28601c: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x28601cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_286020:
    // 0x286020: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x286020u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_286024:
    // 0x286024: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_286028:
    if (ctx->pc == 0x286028u) {
        ctx->pc = 0x286028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286024u;
        // 0x286028: 0x8e4205bc  lw          $v0, 0x5BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28602Cu;
        goto label_28602c;
    }
    ctx->pc = 0x286024u;
    {
        const bool branch_taken_0x286024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286024) {
            ctx->pc = 0x286028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286024u;
            // 0x286028: 0x8e4205bc  lw          $v0, 0x5BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286078u;
            goto label_286078;
        }
    }
    ctx->pc = 0x28602Cu;
label_28602c:
    // 0x28602c: 0xc047e72  jal         func_11F9C8
label_286030:
    if (ctx->pc == 0x286030u) {
        ctx->pc = 0x286034u;
        goto label_286034;
    }
    ctx->pc = 0x28602Cu;
    SET_GPR_U32(ctx, 31, 0x286034u);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x28602Cu, 0x286034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286034u;
label_286034:
    // 0x286034: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_286038:
    if (ctx->pc == 0x286038u) {
        ctx->pc = 0x286038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286034u;
        // 0x286038: 0x8e4205bc  lw          $v0, 0x5BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28603Cu;
        goto label_28603c;
    }
    ctx->pc = 0x286034u;
    {
        const bool branch_taken_0x286034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286034) {
            ctx->pc = 0x286038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286034u;
            // 0x286038: 0x8e4205bc  lw          $v0, 0x5BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286078u;
            goto label_286078;
        }
    }
    ctx->pc = 0x28603Cu;
label_28603c:
    // 0x28603c: 0xc047e72  jal         func_11F9C8
label_286040:
    if (ctx->pc == 0x286040u) {
        ctx->pc = 0x286040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28603Cu;
        // 0x286040: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286044u;
        goto label_286044;
    }
    ctx->pc = 0x28603Cu;
    SET_GPR_U32(ctx, 31, 0x286044u);
    ctx->pc = 0x286040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28603Cu;
    // 0x286040: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x28603Cu, 0x286044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286044u;
label_286044:
    // 0x286044: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286048:
    // 0x286048: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x286048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_28604c:
    // 0x28604c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x28604cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_286050:
    // 0x286050: 0xa0f809  jalr        $a1
label_286054:
    if (ctx->pc == 0x286054u) {
        ctx->pc = 0x286054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286050u;
        // 0x286054: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286058u;
        goto label_286058;
    }
    ctx->pc = 0x286050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x286058u);
        ctx->pc = 0x286054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286050u;
        // 0x286054: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286050u, 0x286058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286058u;
label_286058:
    // 0x286058: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x286058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_28605c:
    // 0x28605c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_286060:
    if (ctx->pc == 0x286060u) {
        ctx->pc = 0x286060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28605Cu;
        // 0x286060: 0x8e4205bc  lw          $v0, 0x5BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286064u;
        goto label_286064;
    }
    ctx->pc = 0x28605Cu;
    {
        const bool branch_taken_0x28605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28605c) {
            ctx->pc = 0x286060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28605Cu;
            // 0x286060: 0x8e4205bc  lw          $v0, 0x5BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286078u;
            goto label_286078;
        }
    }
    ctx->pc = 0x286064u;
label_286064:
    // 0x286064: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_286068:
    // 0x286068: 0xc047f60  jal         func_11FD80
label_28606c:
    if (ctx->pc == 0x28606Cu) {
        ctx->pc = 0x28606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286068u;
        // 0x28606c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286070u;
        goto label_286070;
    }
    ctx->pc = 0x286068u;
    SET_GPR_U32(ctx, 31, 0x286070u);
    ctx->pc = 0x28606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286068u;
    // 0x28606c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x286068u, 0x286070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286070u;
label_286070:
    // 0x286070: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x286070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
label_286074:
    // 0x286074: 0x8e4205bc  lw          $v0, 0x5BC($s2)
    ctx->pc = 0x286074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1468)));
label_286078:
    // 0x286078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x286078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28607c:
    // 0x28607c: 0xc0e4060  jal         func_390180
label_286080:
    if (ctx->pc == 0x286080u) {
        ctx->pc = 0x286080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28607Cu;
        // 0x286080: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286084u;
        goto label_286084;
    }
    ctx->pc = 0x28607Cu;
    SET_GPR_U32(ctx, 31, 0x286084u);
    ctx->pc = 0x286080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28607Cu;
    // 0x286080: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x28607Cu, 0x286084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286084u;
label_286084:
    // 0x286084: 0x14400125  bnez        $v0, . + 4 + (0x125 << 2)
label_286088:
    if (ctx->pc == 0x286088u) {
        ctx->pc = 0x286088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286084u;
        // 0x286088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28608Cu;
        goto label_28608c;
    }
    ctx->pc = 0x286084u;
    {
        const bool branch_taken_0x286084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286084u;
        // 0x286088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286084) {
            ctx->pc = 0x28651Cu;
            goto label_28651c;
        }
    }
    ctx->pc = 0x28608Cu;
label_28608c:
    // 0x28608c: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x28608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_286090:
    // 0x286090: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286094:
    // 0x286094: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x286094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_286098:
    // 0x286098: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_28609c:
    if (ctx->pc == 0x28609Cu) {
        ctx->pc = 0x28609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286098u;
        // 0x28609c: 0x924505b4  lbu         $a1, 0x5B4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860A0u;
        goto label_2860a0;
    }
    ctx->pc = 0x286098u;
    {
        const bool branch_taken_0x286098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286098) {
            ctx->pc = 0x28609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286098u;
            // 0x28609c: 0x924505b4  lbu         $a1, 0x5B4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2860FCu;
            goto label_2860fc;
        }
    }
    ctx->pc = 0x2860A0u;
label_2860a0:
    // 0x2860a0: 0x8e670370  lw          $a3, 0x370($s3)
    ctx->pc = 0x2860a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
label_2860a4:
    // 0x2860a4: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
label_2860a8:
    if (ctx->pc == 0x2860A8u) {
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860ACu;
        goto label_2860ac;
    }
    ctx->pc = 0x2860A4u;
    {
        const bool branch_taken_0x2860a4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860a4) {
            ctx->pc = 0x2860F8u;
            goto label_2860f8;
        }
    }
    ctx->pc = 0x2860ACu;
label_2860ac:
    // 0x2860ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2860acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2860b0:
    // 0x2860b0: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x2860b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_2860b4:
    // 0x2860b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2860b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2860b8:
    // 0x2860b8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2860b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_2860bc:
    // 0x2860bc: 0xc10796c  jal         func_41E5B0
label_2860c0:
    if (ctx->pc == 0x2860C0u) {
        ctx->pc = 0x2860C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860BCu;
        // 0x2860c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860C4u;
        goto label_2860c4;
    }
    ctx->pc = 0x2860BCu;
    SET_GPR_U32(ctx, 31, 0x2860C4u);
    ctx->pc = 0x2860C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860BCu;
    // 0x2860c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2860BCu, 0x2860C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860C4u;
label_2860c4:
    // 0x2860c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2860c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2860c8:
    // 0x2860c8: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x2860c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_2860cc:
    // 0x2860cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2860ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2860d0:
    // 0x2860d0: 0xae600370  sw          $zero, 0x370($s3)
    ctx->pc = 0x2860d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 0));
label_2860d4:
    // 0x2860d4: 0xc1078c8  jal         func_41E320
label_2860d8:
    if (ctx->pc == 0x2860D8u) {
        ctx->pc = 0x2860D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860D4u;
        // 0x2860d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860DCu;
        goto label_2860dc;
    }
    ctx->pc = 0x2860D4u;
    SET_GPR_U32(ctx, 31, 0x2860DCu);
    ctx->pc = 0x2860D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860D4u;
    // 0x2860d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x2860D4u, 0x2860DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860DCu;
label_2860dc:
    // 0x2860dc: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x2860dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_2860e0:
    // 0x2860e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2860e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2860e4:
    // 0x2860e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2860e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2860e8:
    // 0x2860e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2860e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2860ec:
    // 0x2860ec: 0xc043f36  jal         func_10FCD8
label_2860f0:
    if (ctx->pc == 0x2860F0u) {
        ctx->pc = 0x2860F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860ECu;
        // 0x2860f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860F4u;
        goto label_2860f4;
    }
    ctx->pc = 0x2860ECu;
    SET_GPR_U32(ctx, 31, 0x2860F4u);
    ctx->pc = 0x2860F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860ECu;
    // 0x2860f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x2860ECu, 0x2860F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860F4u;
label_2860f4:
    // 0x2860f4: 0xa25105b6  sb          $s1, 0x5B6($s2)
    ctx->pc = 0x2860f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1462), (uint8_t)GPR_U32(ctx, 17));
label_2860f8:
    // 0x2860f8: 0x924505b4  lbu         $a1, 0x5B4($s2)
    ctx->pc = 0x2860f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1460)));
label_2860fc:
    // 0x2860fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2860fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286100:
    // 0x286100: 0xa24005b5  sb          $zero, 0x5B5($s2)
    ctx->pc = 0x286100u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1461), (uint8_t)GPR_U32(ctx, 0));
label_286104:
    // 0x286104: 0xc09cc44  jal         func_273110
label_286108:
    if (ctx->pc == 0x286108u) {
        ctx->pc = 0x286108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286104u;
        // 0x286108: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28610Cu;
        goto label_28610c;
    }
    ctx->pc = 0x286104u;
    SET_GPR_U32(ctx, 31, 0x28610Cu);
    ctx->pc = 0x286108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286104u;
    // 0x286108: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x273110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273110u, 0x286104u, 0x28610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28610Cu;
label_28610c:
    // 0x28610c: 0xa24005b6  sb          $zero, 0x5B6($s2)
    ctx->pc = 0x28610cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1462), (uint8_t)GPR_U32(ctx, 0));
label_286110:
    // 0x286110: 0x10000102  b           . + 4 + (0x102 << 2)
label_286114:
    if (ctx->pc == 0x286114u) {
        ctx->pc = 0x286114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286110u;
        // 0x286114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286118u;
        goto label_286118;
    }
    ctx->pc = 0x286110u;
    {
        const bool branch_taken_0x286110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286110u;
        // 0x286114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286110) {
            ctx->pc = 0x28651Cu;
            goto label_28651c;
        }
    }
    ctx->pc = 0x286118u;
label_286118:
    // 0x286118: 0x92a3001c  lbu         $v1, 0x1C($s5)
    ctx->pc = 0x286118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_28611c:
    // 0x28611c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x28611cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_286120:
    // 0x286120: 0x146200fc  bne         $v1, $v0, . + 4 + (0xFC << 2)
label_286124:
    if (ctx->pc == 0x286124u) {
        ctx->pc = 0x286124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286120u;
        // 0x286124: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286128u;
        goto label_286128;
    }
    ctx->pc = 0x286120u;
    {
        const bool branch_taken_0x286120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286120u;
        // 0x286124: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286120) {
            ctx->pc = 0x286514u;
            goto label_286514;
        }
    }
    ctx->pc = 0x286128u;
label_286128:
    // 0x286128: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x286128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_28612c:
    // 0x28612c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_286130:
    // 0x286130: 0x24640840  addiu       $a0, $v1, 0x840
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_286134:
    // 0x286134: 0xc06ca46  jal         func_1B2918
label_286138:
    if (ctx->pc == 0x286138u) {
        ctx->pc = 0x286138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286134u;
        // 0x286138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28613Cu;
        goto label_28613c;
    }
    ctx->pc = 0x286134u;
    SET_GPR_U32(ctx, 31, 0x28613Cu);
    ctx->pc = 0x286138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286134u;
    // 0x286138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x286134u, 0x28613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28613Cu;
label_28613c:
    // 0x28613c: 0x8e84012c  lw          $a0, 0x12C($s4)
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_286140:
    // 0x286140: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x286140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_286144:
    // 0x286144: 0xae83012c  sw          $v1, 0x12C($s4)
    ctx->pc = 0x286144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
label_286148:
    // 0x286148: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28614c:
    // 0x28614c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28614cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_286150:
    // 0x286150: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_286154:
    if (ctx->pc == 0x286154u) {
        ctx->pc = 0x286154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286150u;
        // 0x286154: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286158u;
        goto label_286158;
    }
    ctx->pc = 0x286150u;
    {
        const bool branch_taken_0x286150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286150) {
            ctx->pc = 0x286154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286150u;
            // 0x286154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286158u;
            goto label_286158;
        }
    }
    ctx->pc = 0x286158u;
label_286158:
    // 0x286158: 0x2012  mflo        $a0
    ctx->pc = 0x286158u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_28615c:
    // 0x28615c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28615cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_286160:
    // 0x286160: 0x1812  mflo        $v1
    ctx->pc = 0x286160u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_286164:
    // 0x286164: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_286168:
    if (ctx->pc == 0x286168u) {
        ctx->pc = 0x286168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286164u;
        // 0x286168: 0x8e84012c  lw          $a0, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28616Cu;
        goto label_28616c;
    }
    ctx->pc = 0x286164u;
    {
        const bool branch_taken_0x286164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x286164) {
            ctx->pc = 0x286168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286164u;
            // 0x286168: 0x8e84012c  lw          $a0, 0x12C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286180u;
            goto label_286180;
        }
    }
    ctx->pc = 0x28616Cu;
label_28616c:
    // 0x28616c: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x28616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_286170:
    // 0x286170: 0xc0a157e  jal         func_2855F8
label_286174:
    if (ctx->pc == 0x286174u) {
        ctx->pc = 0x286174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286170u;
        // 0x286174: 0xc62d0014  lwc1        $f13, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x286178u;
        goto label_286178;
    }
    ctx->pc = 0x286170u;
    SET_GPR_U32(ctx, 31, 0x286178u);
    ctx->pc = 0x286174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286170u;
    // 0x286174: 0xc62d0014  lwc1        $f13, 0x14($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x286170u, 0x286178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286178u;
label_286178:
    // 0x286178: 0xe64005a8  swc1        $f0, 0x5A8($s2)
    ctx->pc = 0x286178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1448), bits); }
label_28617c:
    // 0x28617c: 0x8e84012c  lw          $a0, 0x12C($s4)
    ctx->pc = 0x28617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_286180:
    // 0x286180: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286184:
    // 0x286184: 0x971823  subu        $v1, $a0, $s7
    ctx->pc = 0x286184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_286188:
    // 0x286188: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x286188u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28618c:
    // 0x28618c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28618cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_286190:
    // 0x286190: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_286194:
    if (ctx->pc == 0x286194u) {
        ctx->pc = 0x286194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286190u;
        // 0x286194: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286198u;
        goto label_286198;
    }
    ctx->pc = 0x286190u;
    {
        const bool branch_taken_0x286190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286190) {
            ctx->pc = 0x286194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286190u;
            // 0x286194: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286198u;
            goto label_286198;
        }
    }
    ctx->pc = 0x286198u;
label_286198:
    // 0x286198: 0x1812  mflo        $v1
    ctx->pc = 0x286198u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_28619c:
    // 0x28619c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28619cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2861a0:
    // 0x2861a0: 0x2012  mflo        $a0
    ctx->pc = 0x2861a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2861a4:
    // 0x2861a4: 0x108300dd  beq         $a0, $v1, . + 4 + (0xDD << 2)
label_2861a8:
    if (ctx->pc == 0x2861A8u) {
        ctx->pc = 0x2861A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861A4u;
        // 0x2861a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861ACu;
        goto label_2861ac;
    }
    ctx->pc = 0x2861A4u;
    {
        const bool branch_taken_0x2861a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2861A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861A4u;
        // 0x2861a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2861a4) {
            ctx->pc = 0x28651Cu;
            goto label_28651c;
        }
    }
    ctx->pc = 0x2861ACu;
label_2861ac:
    // 0x2861ac: 0x5fc00018  bgtzl       $fp, . + 4 + (0x18 << 2)
label_2861b0:
    if (ctx->pc == 0x2861B0u) {
        ctx->pc = 0x2861B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861ACu;
        // 0x2861b0: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861B4u;
        goto label_2861b4;
    }
    ctx->pc = 0x2861ACu;
    {
        const bool branch_taken_0x2861ac = (GPR_S32(ctx, 30) > 0);
        if (branch_taken_0x2861ac) {
            ctx->pc = 0x2861B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2861ACu;
            // 0x2861b0: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286210u;
            goto label_286210;
        }
    }
    ctx->pc = 0x2861B4u;
label_2861b4:
    // 0x2861b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2861b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2861b8:
    // 0x2861b8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2861bc:
    if (ctx->pc == 0x2861BCu) {
        ctx->pc = 0x2861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861B8u;
        // 0x2861bc: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861C0u;
        goto label_2861c0;
    }
    ctx->pc = 0x2861B8u;
    {
        const bool branch_taken_0x2861b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2861b8) {
            ctx->pc = 0x2861BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2861B8u;
            // 0x2861bc: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286210u;
            goto label_286210;
        }
    }
    ctx->pc = 0x2861C0u;
label_2861c0:
    // 0x2861c0: 0x8e6205a0  lw          $v0, 0x5A0($s3)
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1440)));
label_2861c4:
    // 0x2861c4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2861c8:
    if (ctx->pc == 0x2861C8u) {
        ctx->pc = 0x2861C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861C4u;
        // 0x2861c8: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861CCu;
        goto label_2861cc;
    }
    ctx->pc = 0x2861C4u;
    {
        const bool branch_taken_0x2861c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2861c4) {
            ctx->pc = 0x2861C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2861C4u;
            // 0x2861c8: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286210u;
            goto label_286210;
        }
    }
    ctx->pc = 0x2861CCu;
label_2861cc:
    // 0x2861cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2861ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2861d0:
    // 0x2861d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2861d4:
    // 0x2861d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2861d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2861d8:
    // 0x2861d8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2861d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2861dc:
    // 0x2861dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2861dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2861e0:
    // 0x2861e0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2861e4:
    // 0x2861e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2861e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2861e8:
    // 0x2861e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2861e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2861ec:
    // 0x2861ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2861ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2861f0:
    // 0x2861f0: 0xc088178  jal         func_2205E0
label_2861f4:
    if (ctx->pc == 0x2861F4u) {
        ctx->pc = 0x2861F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861F0u;
        // 0x2861f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861F8u;
        goto label_2861f8;
    }
    ctx->pc = 0x2861F0u;
    SET_GPR_U32(ctx, 31, 0x2861F8u);
    ctx->pc = 0x2861F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861F0u;
    // 0x2861f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2861F0u, 0x2861F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861F8u;
label_2861f8:
    // 0x2861f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2861fc:
    // 0x2861fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2861fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_286200:
    // 0x286200: 0xa24305b4  sb          $v1, 0x5B4($s2)
    ctx->pc = 0x286200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 3));
label_286204:
    // 0x286204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286208:
    // 0x286208: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_28620c:
    if (ctx->pc == 0x28620Cu) {
        ctx->pc = 0x28620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286208u;
        // 0x28620c: 0xa2840128  sb          $a0, 0x128($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286210u;
        goto label_286210;
    }
    ctx->pc = 0x286208u;
    {
        const bool branch_taken_0x286208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286208u;
        // 0x28620c: 0xa2840128  sb          $a0, 0x128($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286208) {
            ctx->pc = 0x28651Cu;
            goto label_28651c;
        }
    }
    ctx->pc = 0x286210u;
label_286210:
    // 0x286210: 0x8e630594  lw          $v1, 0x594($s3)
    ctx->pc = 0x286210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1428)));
label_286214:
    // 0x286214: 0x8e650598  lw          $a1, 0x598($s3)
    ctx->pc = 0x286214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1432)));
label_286218:
    // 0x286218: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x286218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28621c:
    // 0x28621c: 0x8e64059c  lw          $a0, 0x59C($s3)
    ctx->pc = 0x28621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1436)));
label_286220:
    // 0x286220: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x286220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_286224:
    // 0x286224: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x286224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_286228:
    // 0x286228: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_28622c:
    if (ctx->pc == 0x28622Cu) {
        ctx->pc = 0x28622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286228u;
        // 0x28622c: 0x8e83012c  lw          $v1, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286230u;
        goto label_286230;
    }
    ctx->pc = 0x286228u;
    {
        const bool branch_taken_0x286228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286228u;
        // 0x28622c: 0x8e83012c  lw          $v1, 0x12C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286228) {
            ctx->pc = 0x28629Cu;
            goto label_28629c;
        }
    }
    ctx->pc = 0x286230u;
label_286230:
    // 0x286230: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286234:
    // 0x286234: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286238:
    // 0x286238: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_28623c:
    if (ctx->pc == 0x28623Cu) {
        ctx->pc = 0x28623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286238u;
        // 0x28623c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286240u;
        goto label_286240;
    }
    ctx->pc = 0x286238u;
    {
        const bool branch_taken_0x286238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286238) {
            ctx->pc = 0x28623Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286238u;
            // 0x28623c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286240u;
            goto label_286240;
        }
    }
    ctx->pc = 0x286240u;
label_286240:
    // 0x286240: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x286240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_286244:
    // 0x286244: 0x1012  mflo        $v0
    ctx->pc = 0x286244u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_286248:
    // 0x286248: 0x54440025  bnel        $v0, $a0, . + 4 + (0x25 << 2)
label_28624c:
    if (ctx->pc == 0x28624Cu) {
        ctx->pc = 0x28624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286248u;
        // 0x28624c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286250u;
        goto label_286250;
    }
    ctx->pc = 0x286248u;
    {
        const bool branch_taken_0x286248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x286248) {
            ctx->pc = 0x28624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286248u;
            // 0x28624c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862E0u;
            goto label_2862e0;
        }
    }
    ctx->pc = 0x286250u;
label_286250:
    // 0x286250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286254:
    // 0x286254: 0xc087502  jal         func_21D408
label_286258:
    if (ctx->pc == 0x286258u) {
        ctx->pc = 0x286258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286254u;
        // 0x286258: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28625Cu;
        goto label_28625c;
    }
    ctx->pc = 0x286254u;
    SET_GPR_U32(ctx, 31, 0x28625Cu);
    ctx->pc = 0x286258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286254u;
    // 0x286258: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x286254u, 0x28625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28625Cu;
label_28625c:
    // 0x28625c: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x28625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_286260:
    // 0x286260: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x286260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_286264:
    // 0x286264: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x286264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_286268:
    // 0x286268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28626c:
    // 0x28626c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28626cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_286270:
    // 0x286270: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x286270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_286274:
    // 0x286274: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x286274u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_286278:
    // 0x286278: 0x203280b  movn        $a1, $s0, $v1
    ctx->pc = 0x286278u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_28627c:
    // 0x28627c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286280:
    // 0x286280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x286280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286284:
    // 0x286284: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x286284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286288:
    // 0x286288: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x286288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28628c:
    // 0x28628c: 0xc088178  jal         func_2205E0
label_286290:
    if (ctx->pc == 0x286290u) {
        ctx->pc = 0x286290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28628Cu;
        // 0x286290: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286294u;
        goto label_286294;
    }
    ctx->pc = 0x28628Cu;
    SET_GPR_U32(ctx, 31, 0x286294u);
    ctx->pc = 0x286290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28628Cu;
    // 0x286290: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x28628Cu, 0x286294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286294u;
label_286294:
    // 0x286294: 0x10000012  b           . + 4 + (0x12 << 2)
label_286298:
    if (ctx->pc == 0x286298u) {
        ctx->pc = 0x286298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286294u;
        // 0x286298: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28629Cu;
        goto label_28629c;
    }
    ctx->pc = 0x286294u;
    {
        const bool branch_taken_0x286294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286294u;
        // 0x286298: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286294) {
            ctx->pc = 0x2862E0u;
            goto label_2862e0;
        }
    }
    ctx->pc = 0x28629Cu;
label_28629c:
    // 0x28629c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2862a0:
    // 0x2862a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2862a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2862a4:
    // 0x2862a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2862a8:
    if (ctx->pc == 0x2862A8u) {
        ctx->pc = 0x2862A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862A4u;
        // 0x2862a8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862ACu;
        goto label_2862ac;
    }
    ctx->pc = 0x2862A4u;
    {
        const bool branch_taken_0x2862a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2862a4) {
            ctx->pc = 0x2862A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2862A4u;
            // 0x2862a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862ACu;
            goto label_2862ac;
        }
    }
    ctx->pc = 0x2862ACu;
label_2862ac:
    // 0x2862ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2862acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2862b0:
    // 0x2862b0: 0x1012  mflo        $v0
    ctx->pc = 0x2862b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2862b4:
    // 0x2862b4: 0x5444000a  bnel        $v0, $a0, . + 4 + (0xA << 2)
label_2862b8:
    if (ctx->pc == 0x2862B8u) {
        ctx->pc = 0x2862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862B4u;
        // 0x2862b8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862BCu;
        goto label_2862bc;
    }
    ctx->pc = 0x2862B4u;
    {
        const bool branch_taken_0x2862b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2862b4) {
            ctx->pc = 0x2862B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2862B4u;
            // 0x2862b8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862E0u;
            goto label_2862e0;
        }
    }
    ctx->pc = 0x2862BCu;
label_2862bc:
    // 0x2862bc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2862c0:
    if (ctx->pc == 0x2862C0u) {
        ctx->pc = 0x2862C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862BCu;
        // 0x2862c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862C4u;
        goto label_2862c4;
    }
    ctx->pc = 0x2862BCu;
    {
        const bool branch_taken_0x2862bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862BCu;
        // 0x2862c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862bc) {
            ctx->pc = 0x2862DCu;
            goto label_2862dc;
        }
    }
    ctx->pc = 0x2862C4u;
label_2862c4:
    // 0x2862c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2862c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2862c8:
    // 0x2862c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2862c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2862cc:
    // 0x2862cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2862ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2862d0:
    // 0x2862d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2862d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2862d4:
    // 0x2862d4: 0xc0879a6  jal         func_21E698
label_2862d8:
    if (ctx->pc == 0x2862D8u) {
        ctx->pc = 0x2862D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862D4u;
        // 0x2862d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862DCu;
        goto label_2862dc;
    }
    ctx->pc = 0x2862D4u;
    SET_GPR_U32(ctx, 31, 0x2862DCu);
    ctx->pc = 0x2862D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2862D4u;
    // 0x2862d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x2862D4u, 0x2862DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862DCu;
label_2862dc:
    // 0x2862dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2862e0:
    // 0x2862e0: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x2862e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_2862e4:
    // 0x2862e4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2862e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2862e8:
    // 0x2862e8: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
label_2862ec:
    if (ctx->pc == 0x2862ECu) {
        ctx->pc = 0x2862ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862E8u;
        // 0x2862ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862F0u;
        goto label_2862f0;
    }
    ctx->pc = 0x2862E8u;
    {
        const bool branch_taken_0x2862e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2862ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862E8u;
        // 0x2862ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862e8) {
            ctx->pc = 0x286514u;
            goto label_286514;
        }
    }
    ctx->pc = 0x2862F0u;
label_2862f0:
    // 0x2862f0: 0x8e6205a0  lw          $v0, 0x5A0($s3)
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1440)));
label_2862f4:
    // 0x2862f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2862f8:
    if (ctx->pc == 0x2862F8u) {
        ctx->pc = 0x2862F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862F4u;
        // 0x2862f8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862FCu;
        goto label_2862fc;
    }
    ctx->pc = 0x2862F4u;
    {
        const bool branch_taken_0x2862f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862F4u;
        // 0x2862f8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862f4) {
            ctx->pc = 0x286338u;
            goto label_286338;
        }
    }
    ctx->pc = 0x2862FCu;
label_2862fc:
    // 0x2862fc: 0x8e62059c  lw          $v0, 0x59C($s3)
    ctx->pc = 0x2862fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1436)));
label_286300:
    // 0x286300: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_286304:
    if (ctx->pc == 0x286304u) {
        ctx->pc = 0x286304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286300u;
        // 0x286304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286308u;
        goto label_286308;
    }
    ctx->pc = 0x286300u;
    {
        const bool branch_taken_0x286300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286300u;
        // 0x286304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286300) {
            ctx->pc = 0x286490u;
            goto label_286490;
        }
    }
    ctx->pc = 0x286308u;
label_286308:
    // 0x286308: 0xc087b0e  jal         func_21EC38
label_28630c:
    if (ctx->pc == 0x28630Cu) {
        ctx->pc = 0x28630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286308u;
        // 0x28630c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286310u;
        goto label_286310;
    }
    ctx->pc = 0x286308u;
    SET_GPR_U32(ctx, 31, 0x286310u);
    ctx->pc = 0x28630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286308u;
    // 0x28630c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x286308u, 0x286310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286310u;
label_286310:
    // 0x286310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286314:
    // 0x286314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_286318:
    // 0x286318: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28631c:
    // 0x28631c: 0x8c85059c  lw          $a1, 0x59C($a0)
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1436)));
label_286320:
    // 0x286320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x286320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286324:
    // 0x286324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x286324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286328:
    // 0x286328: 0xc0879a6  jal         func_21E698
label_28632c:
    if (ctx->pc == 0x28632Cu) {
        ctx->pc = 0x28632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286328u;
        // 0x28632c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286330u;
        goto label_286330;
    }
    ctx->pc = 0x286328u;
    SET_GPR_U32(ctx, 31, 0x286330u);
    ctx->pc = 0x28632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286328u;
    // 0x28632c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x286328u, 0x286330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286330u;
label_286330:
    // 0x286330: 0x10000056  b           . + 4 + (0x56 << 2)
label_286334:
    if (ctx->pc == 0x286334u) {
        ctx->pc = 0x286334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286330u;
        // 0x286334: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286338u;
        goto label_286338;
    }
    ctx->pc = 0x286330u;
    {
        const bool branch_taken_0x286330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286330u;
        // 0x286334: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286330) {
            ctx->pc = 0x28648Cu;
            goto label_28648c;
        }
    }
    ctx->pc = 0x286338u;
label_286338:
    // 0x286338: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_28633c:
    if (ctx->pc == 0x28633Cu) {
        ctx->pc = 0x28633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286338u;
        // 0x28633c: 0x2415001e  addiu       $s5, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286340u;
        goto label_286340;
    }
    ctx->pc = 0x286338u;
    {
        const bool branch_taken_0x286338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286338u;
        // 0x28633c: 0x2415001e  addiu       $s5, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286338) {
            ctx->pc = 0x286398u;
            goto label_286398;
        }
    }
    ctx->pc = 0x286340u;
label_286340:
    // 0x286340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286344:
    // 0x286344: 0xc0a1548  jal         func_285520
label_286348:
    if (ctx->pc == 0x286348u) {
        ctx->pc = 0x286348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286344u;
        // 0x286348: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28634Cu;
        goto label_28634c;
    }
    ctx->pc = 0x286344u;
    SET_GPR_U32(ctx, 31, 0x28634Cu);
    ctx->pc = 0x286348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286344u;
    // 0x286348: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285520u, 0x286344u, 0x28634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28634Cu;
label_28634c:
    // 0x28634c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_286350:
    // 0x286350: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_286354:
    // 0x286354: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x286354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_286358:
    // 0x286358: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_28635c:
    // 0x28635c: 0xc1078c8  jal         func_41E320
label_286360:
    if (ctx->pc == 0x286360u) {
        ctx->pc = 0x286360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28635Cu;
        // 0x286360: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286364u;
        goto label_286364;
    }
    ctx->pc = 0x28635Cu;
    SET_GPR_U32(ctx, 31, 0x286364u);
    ctx->pc = 0x286360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28635Cu;
    // 0x286360: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x28635Cu, 0x286364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286364u;
label_286364:
    // 0x286364: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x286364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_286368:
    // 0x286368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28636c:
    // 0x28636c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28636cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286370:
    // 0x286370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x286370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286374:
    // 0x286374: 0xc043f36  jal         func_10FCD8
label_286378:
    if (ctx->pc == 0x286378u) {
        ctx->pc = 0x286378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286374u;
        // 0x286378: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28637Cu;
        goto label_28637c;
    }
    ctx->pc = 0x286374u;
    SET_GPR_U32(ctx, 31, 0x28637Cu);
    ctx->pc = 0x286378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286374u;
    // 0x286378: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x286374u, 0x28637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28637Cu;
label_28637c:
    // 0x28637c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x28637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_286380:
    // 0x286380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_286384:
    // 0x286384: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_286388:
    // 0x286388: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x286388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_28638c:
    // 0x28638c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286390:
    // 0x286390: 0x10000038  b           . + 4 + (0x38 << 2)
label_286394:
    if (ctx->pc == 0x286394u) {
        ctx->pc = 0x286394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286390u;
        // 0x286394: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286398u;
        goto label_286398;
    }
    ctx->pc = 0x286390u;
    {
        const bool branch_taken_0x286390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286390u;
        // 0x286394: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286390) {
            ctx->pc = 0x286474u;
            goto label_286474;
        }
    }
    ctx->pc = 0x286398u;
label_286398:
    // 0x286398: 0xc087502  jal         func_21D408
label_28639c:
    if (ctx->pc == 0x28639Cu) {
        ctx->pc = 0x28639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286398u;
        // 0x28639c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863A0u;
        goto label_2863a0;
    }
    ctx->pc = 0x286398u;
    SET_GPR_U32(ctx, 31, 0x2863A0u);
    ctx->pc = 0x28639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286398u;
    // 0x28639c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x286398u, 0x2863A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863A0u;
label_2863a0:
    // 0x2863a0: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x2863a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_2863a4:
    // 0x2863a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2863a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2863a8:
    // 0x2863a8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2863ac:
    if (ctx->pc == 0x2863ACu) {
        ctx->pc = 0x2863ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863A8u;
        // 0x2863ac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863B0u;
        goto label_2863b0;
    }
    ctx->pc = 0x2863A8u;
    {
        const bool branch_taken_0x2863a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2863ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863A8u;
        // 0x2863ac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863a8) {
            ctx->pc = 0x2863F4u;
            goto label_2863f4;
        }
    }
    ctx->pc = 0x2863B0u;
label_2863b0:
    // 0x2863b0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x2863b0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2863b4:
    // 0x2863b4: 0x0  nop
    ctx->pc = 0x2863b4u;
    // NOP
label_2863b8:
    // 0x2863b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2863b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2863bc:
    // 0x2863bc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2863bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2863c0:
    // 0x2863c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2863c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2863c4:
    // 0x2863c4: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x2863c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2863c8:
    // 0x2863c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2863c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2863cc:
    // 0x2863cc: 0x24150068  addiu       $s5, $zero, 0x68
    ctx->pc = 0x2863ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2863d0:
    // 0x2863d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2863d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2863d4:
    // 0x2863d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2863d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2863d8:
    // 0x2863d8: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x2863d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_2863dc:
    // 0x2863dc: 0x2bc203e8  slti        $v0, $fp, 0x3E8
    ctx->pc = 0x2863dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2863e0:
    // 0x2863e0: 0x3c2180b  movn        $v1, $fp, $v0
    ctx->pc = 0x2863e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 30));
label_2863e4:
    // 0x2863e4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2863e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2863e8:
    // 0x2863e8: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x2863e8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2863ec:
    // 0x2863ec: 0xae630370  sw          $v1, 0x370($s3)
    ctx->pc = 0x2863ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 3));
label_2863f0:
    // 0x2863f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2863f4:
    // 0x2863f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2863f8:
    if (ctx->pc == 0x2863F8u) {
        ctx->pc = 0x2863F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863F4u;
        // 0x2863f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863FCu;
        goto label_2863fc;
    }
    ctx->pc = 0x2863F4u;
    {
        const bool branch_taken_0x2863f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2863F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863F4u;
        // 0x2863f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863f4) {
            ctx->pc = 0x28640Cu;
            goto label_28640c;
        }
    }
    ctx->pc = 0x2863FCu;
label_2863fc:
    // 0x2863fc: 0xc08cd34  jal         func_2334D0
label_286400:
    if (ctx->pc == 0x286400u) {
        ctx->pc = 0x286400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863FCu;
        // 0x286400: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286404u;
        goto label_286404;
    }
    ctx->pc = 0x2863FCu;
    SET_GPR_U32(ctx, 31, 0x286404u);
    ctx->pc = 0x286400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863FCu;
    // 0x286400: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x2863FCu, 0x286404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286404u;
label_286404:
    // 0x286404: 0x10000015  b           . + 4 + (0x15 << 2)
label_286408:
    if (ctx->pc == 0x286408u) {
        ctx->pc = 0x286408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286404u;
        // 0x286408: 0xae4205bc  sw          $v0, 0x5BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28640Cu;
        goto label_28640c;
    }
    ctx->pc = 0x286404u;
    {
        const bool branch_taken_0x286404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286404u;
        // 0x286408: 0xae4205bc  sw          $v0, 0x5BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286404) {
            ctx->pc = 0x28645Cu;
            goto label_28645c;
        }
    }
    ctx->pc = 0x28640Cu;
label_28640c:
    // 0x28640c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x28640cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_286410:
    // 0x286410: 0x8e670370  lw          $a3, 0x370($s3)
    ctx->pc = 0x286410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
label_286414:
    // 0x286414: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x286414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_286418:
    // 0x286418: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28641c:
    // 0x28641c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x28641cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_286420:
    // 0x286420: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x286420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286424:
    // 0x286424: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x286424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_286428:
    // 0x286428: 0xc10796c  jal         func_41E5B0
label_28642c:
    if (ctx->pc == 0x28642Cu) {
        ctx->pc = 0x28642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286428u;
        // 0x28642c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286430u;
        goto label_286430;
    }
    ctx->pc = 0x286428u;
    SET_GPR_U32(ctx, 31, 0x286430u);
    ctx->pc = 0x28642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286428u;
    // 0x28642c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x286428u, 0x286430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286430u;
label_286430:
    // 0x286430: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x286430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_286434:
    // 0x286434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x286434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_286438:
    // 0x286438: 0xae600370  sw          $zero, 0x370($s3)
    ctx->pc = 0x286438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 0));
label_28643c:
    // 0x28643c: 0xc1078c8  jal         func_41E320
label_286440:
    if (ctx->pc == 0x286440u) {
        ctx->pc = 0x286440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28643Cu;
        // 0x286440: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286444u;
        goto label_286444;
    }
    ctx->pc = 0x28643Cu;
    SET_GPR_U32(ctx, 31, 0x286444u);
    ctx->pc = 0x286440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28643Cu;
    // 0x286440: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x28643Cu, 0x286444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286444u;
label_286444:
    // 0x286444: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_286448:
    // 0x286448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28644c:
    // 0x28644c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286450:
    // 0x286450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x286450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286454:
    // 0x286454: 0xc043f36  jal         func_10FCD8
label_286458:
    if (ctx->pc == 0x286458u) {
        ctx->pc = 0x286458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286454u;
        // 0x286458: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28645Cu;
        goto label_28645c;
    }
    ctx->pc = 0x286454u;
    SET_GPR_U32(ctx, 31, 0x28645Cu);
    ctx->pc = 0x286458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286454u;
    // 0x286458: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x286454u, 0x28645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28645Cu;
label_28645c:
    // 0x28645c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_286460:
    // 0x286460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_286464:
    // 0x286464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_286468:
    // 0x286468: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x286468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28646c:
    // 0x28646c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286470:
    // 0x286470: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x286470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_286474:
    // 0x286474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x286474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286478:
    // 0x286478: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28647c:
    // 0x28647c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28647cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286480:
    // 0x286480: 0xc088178  jal         func_2205E0
label_286484:
    if (ctx->pc == 0x286484u) {
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286488u;
        goto label_286488;
    }
    ctx->pc = 0x286480u;
    SET_GPR_U32(ctx, 31, 0x286488u);
    ctx->pc = 0x286484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286480u;
    // 0x286484: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x286480u, 0x286488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286488u;
label_286488:
    // 0x286488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28648c:
    // 0x28648c: 0xa24305b6  sb          $v1, 0x5B6($s2)
    ctx->pc = 0x28648cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1462), (uint8_t)GPR_U32(ctx, 3));
label_286490:
    // 0x286490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286494:
    // 0x286494: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x286494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_286498:
    // 0x286498: 0xa24205b4  sb          $v0, 0x5B4($s2)
    ctx->pc = 0x286498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 2));
label_28649c:
    // 0x28649c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2864a0:
    // 0x2864a0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2864a4:
    if (ctx->pc == 0x2864A4u) {
        ctx->pc = 0x2864A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A0u;
        // 0x2864a4: 0xa2830128  sb          $v1, 0x128($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864A8u;
        goto label_2864a8;
    }
    ctx->pc = 0x2864A0u;
    {
        const bool branch_taken_0x2864a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A0u;
        // 0x2864a4: 0xa2830128  sb          $v1, 0x128($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864a0) {
            ctx->pc = 0x28651Cu;
            goto label_28651c;
        }
    }
    ctx->pc = 0x2864A8u;
label_2864a8:
    // 0x2864a8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2864ac:
    if (ctx->pc == 0x2864ACu) {
        ctx->pc = 0x2864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A8u;
        // 0x2864ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864B0u;
        goto label_2864b0;
    }
    ctx->pc = 0x2864A8u;
    {
        const bool branch_taken_0x2864a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A8u;
        // 0x2864ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864a8) {
            ctx->pc = 0x286514u;
            goto label_286514;
        }
    }
    ctx->pc = 0x2864B0u;
label_2864b0:
    // 0x2864b0: 0x92a4001c  lbu         $a0, 0x1C($s5)
    ctx->pc = 0x2864b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_2864b4:
    // 0x2864b4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2864b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2864b8:
    // 0x2864b8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_2864bc:
    if (ctx->pc == 0x2864BCu) {
        ctx->pc = 0x2864BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864B8u;
        // 0x2864bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864C0u;
        goto label_2864c0;
    }
    ctx->pc = 0x2864B8u;
    {
        const bool branch_taken_0x2864b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2864BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864B8u;
        // 0x2864bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864b8) {
            ctx->pc = 0x2864C8u;
            goto label_2864c8;
        }
    }
    ctx->pc = 0x2864C0u;
label_2864c0:
    // 0x2864c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2864c4:
    if (ctx->pc == 0x2864C4u) {
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xa2820128  sb          $v0, 0x128($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864C8u;
        goto label_2864c8;
    }
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xa2820128  sb          $v0, 0x128($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x2864E0u;
            goto label_2864e0;
        }
    }
    ctx->pc = 0x2864C8u;
label_2864c8:
    // 0x2864c8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_2864cc:
    if (ctx->pc == 0x2864CCu) {
        ctx->pc = 0x2864CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C8u;
        // 0x2864cc: 0x8e820138  lw          $v0, 0x138($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864D0u;
        goto label_2864d0;
    }
    ctx->pc = 0x2864C8u;
    {
        const bool branch_taken_0x2864c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2864c8) {
            ctx->pc = 0x2864CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2864C8u;
            // 0x2864cc: 0x8e820138  lw          $v0, 0x138($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2864D8u;
            goto label_2864d8;
        }
    }
    ctx->pc = 0x2864D0u;
label_2864d0:
    // 0x2864d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2864d4:
    if (ctx->pc == 0x2864D4u) {
        ctx->pc = 0x2864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864D0u;
        // 0x2864d4: 0xae800138  sw          $zero, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864D8u;
        goto label_2864d8;
    }
    ctx->pc = 0x2864D0u;
    {
        const bool branch_taken_0x2864d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864D0u;
        // 0x2864d4: 0xae800138  sw          $zero, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864d0) {
            ctx->pc = 0x2864E0u;
            goto label_2864e0;
        }
    }
    ctx->pc = 0x2864D8u;
label_2864d8:
    // 0x2864d8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2864dc:
    // 0x2864dc: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x2864dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
label_2864e0:
    // 0x2864e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2864e4:
    // 0x2864e4: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x2864e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2864e8:
    // 0x2864e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2864ec:
    // 0x2864ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2864f0:
    if (ctx->pc == 0x2864F0u) {
        ctx->pc = 0x2864F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864ECu;
        // 0x2864f0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864F4u;
        goto label_2864f4;
    }
    ctx->pc = 0x2864ECu;
    {
        const bool branch_taken_0x2864ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864ECu;
        // 0x2864f0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864ec) {
            ctx->pc = 0x286518u;
            goto label_286518;
        }
    }
    ctx->pc = 0x2864F4u;
label_2864f4:
    // 0x2864f4: 0xa24005b4  sb          $zero, 0x5B4($s2)
    ctx->pc = 0x2864f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
label_2864f8:
    // 0x2864f8: 0xa2830128  sb          $v1, 0x128($s4)
    ctx->pc = 0x2864f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 3));
label_2864fc:
    // 0x2864fc: 0x8e820138  lw          $v0, 0x138($s4)
    ctx->pc = 0x2864fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_286500:
    // 0x286500: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_286504:
    // 0x286504: 0x10000004  b           . + 4 + (0x4 << 2)
label_286508:
    if (ctx->pc == 0x286508u) {
        ctx->pc = 0x286508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286504u;
        // 0x286508: 0xae820138  sw          $v0, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28650Cu;
        goto label_28650c;
    }
    ctx->pc = 0x286504u;
    {
        const bool branch_taken_0x286504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286504u;
        // 0x286508: 0xae820138  sw          $v0, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286504) {
            ctx->pc = 0x286518u;
            goto label_286518;
        }
    }
    ctx->pc = 0x28650Cu;
label_28650c:
    // 0x28650c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_286510:
    // 0x286510: 0xa24005b4  sb          $zero, 0x5B4($s2)
    ctx->pc = 0x286510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1460), (uint8_t)GPR_U32(ctx, 0));
label_286514:
    // 0x286514: 0xa2820128  sb          $v0, 0x128($s4)
    ctx->pc = 0x286514u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 296), (uint8_t)GPR_U32(ctx, 2));
label_286518:
    // 0x286518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28651c:
    // 0x28651c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x28651cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_286520:
    // 0x286520: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x286520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_286524:
    // 0x286524: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x286524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_286528:
    // 0x286528: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x286528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28652c:
    // 0x28652c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x28652cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_286530:
    // 0x286530: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x286530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_286534:
    // 0x286534: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x286534u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286538:
    // 0x286538: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x286538u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28653c:
    // 0x28653c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x28653cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286540:
    // 0x286540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286544:
    // 0x286544: 0x3e00008  jr          $ra
label_286548:
    if (ctx->pc == 0x286548u) {
        ctx->pc = 0x286548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286544u;
        // 0x286548: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28654Cu;
        goto label_28654c;
    }
    ctx->pc = 0x286544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286544u;
        // 0x286548: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28654Cu;
label_28654c:
    // 0x28654c: 0x0  nop
    ctx->pc = 0x28654cu;
    // NOP
    ctx->pc = 0x286550u;
}
