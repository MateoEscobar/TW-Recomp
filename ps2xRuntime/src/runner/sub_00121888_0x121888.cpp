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

// Function: sub_00121888
// Address: 0x121888 - 0x121e30
void sub_00121888_0x121888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121888_0x121888");
#endif

    switch (ctx->pc) {
        case 0x121888u: goto label_121888;
        case 0x12188cu: goto label_12188c;
        case 0x121890u: goto label_121890;
        case 0x121894u: goto label_121894;
        case 0x121898u: goto label_121898;
        case 0x12189cu: goto label_12189c;
        case 0x1218a0u: goto label_1218a0;
        case 0x1218a4u: goto label_1218a4;
        case 0x1218a8u: goto label_1218a8;
        case 0x1218acu: goto label_1218ac;
        case 0x1218b0u: goto label_1218b0;
        case 0x1218b4u: goto label_1218b4;
        case 0x1218b8u: goto label_1218b8;
        case 0x1218bcu: goto label_1218bc;
        case 0x1218c0u: goto label_1218c0;
        case 0x1218c4u: goto label_1218c4;
        case 0x1218c8u: goto label_1218c8;
        case 0x1218ccu: goto label_1218cc;
        case 0x1218d0u: goto label_1218d0;
        case 0x1218d4u: goto label_1218d4;
        case 0x1218d8u: goto label_1218d8;
        case 0x1218dcu: goto label_1218dc;
        case 0x1218e0u: goto label_1218e0;
        case 0x1218e4u: goto label_1218e4;
        case 0x1218e8u: goto label_1218e8;
        case 0x1218ecu: goto label_1218ec;
        case 0x1218f0u: goto label_1218f0;
        case 0x1218f4u: goto label_1218f4;
        case 0x1218f8u: goto label_1218f8;
        case 0x1218fcu: goto label_1218fc;
        case 0x121900u: goto label_121900;
        case 0x121904u: goto label_121904;
        case 0x121908u: goto label_121908;
        case 0x12190cu: goto label_12190c;
        case 0x121910u: goto label_121910;
        case 0x121914u: goto label_121914;
        case 0x121918u: goto label_121918;
        case 0x12191cu: goto label_12191c;
        case 0x121920u: goto label_121920;
        case 0x121924u: goto label_121924;
        case 0x121928u: goto label_121928;
        case 0x12192cu: goto label_12192c;
        case 0x121930u: goto label_121930;
        case 0x121934u: goto label_121934;
        case 0x121938u: goto label_121938;
        case 0x12193cu: goto label_12193c;
        case 0x121940u: goto label_121940;
        case 0x121944u: goto label_121944;
        case 0x121948u: goto label_121948;
        case 0x12194cu: goto label_12194c;
        case 0x121950u: goto label_121950;
        case 0x121954u: goto label_121954;
        case 0x121958u: goto label_121958;
        case 0x12195cu: goto label_12195c;
        case 0x121960u: goto label_121960;
        case 0x121964u: goto label_121964;
        case 0x121968u: goto label_121968;
        case 0x12196cu: goto label_12196c;
        case 0x121970u: goto label_121970;
        case 0x121974u: goto label_121974;
        case 0x121978u: goto label_121978;
        case 0x12197cu: goto label_12197c;
        case 0x121980u: goto label_121980;
        case 0x121984u: goto label_121984;
        case 0x121988u: goto label_121988;
        case 0x12198cu: goto label_12198c;
        case 0x121990u: goto label_121990;
        case 0x121994u: goto label_121994;
        case 0x121998u: goto label_121998;
        case 0x12199cu: goto label_12199c;
        case 0x1219a0u: goto label_1219a0;
        case 0x1219a4u: goto label_1219a4;
        case 0x1219a8u: goto label_1219a8;
        case 0x1219acu: goto label_1219ac;
        case 0x1219b0u: goto label_1219b0;
        case 0x1219b4u: goto label_1219b4;
        case 0x1219b8u: goto label_1219b8;
        case 0x1219bcu: goto label_1219bc;
        case 0x1219c0u: goto label_1219c0;
        case 0x1219c4u: goto label_1219c4;
        case 0x1219c8u: goto label_1219c8;
        case 0x1219ccu: goto label_1219cc;
        case 0x1219d0u: goto label_1219d0;
        case 0x1219d4u: goto label_1219d4;
        case 0x1219d8u: goto label_1219d8;
        case 0x1219dcu: goto label_1219dc;
        case 0x1219e0u: goto label_1219e0;
        case 0x1219e4u: goto label_1219e4;
        case 0x1219e8u: goto label_1219e8;
        case 0x1219ecu: goto label_1219ec;
        case 0x1219f0u: goto label_1219f0;
        case 0x1219f4u: goto label_1219f4;
        case 0x1219f8u: goto label_1219f8;
        case 0x1219fcu: goto label_1219fc;
        case 0x121a00u: goto label_121a00;
        case 0x121a04u: goto label_121a04;
        case 0x121a08u: goto label_121a08;
        case 0x121a0cu: goto label_121a0c;
        case 0x121a10u: goto label_121a10;
        case 0x121a14u: goto label_121a14;
        case 0x121a18u: goto label_121a18;
        case 0x121a1cu: goto label_121a1c;
        case 0x121a20u: goto label_121a20;
        case 0x121a24u: goto label_121a24;
        case 0x121a28u: goto label_121a28;
        case 0x121a2cu: goto label_121a2c;
        case 0x121a30u: goto label_121a30;
        case 0x121a34u: goto label_121a34;
        case 0x121a38u: goto label_121a38;
        case 0x121a3cu: goto label_121a3c;
        case 0x121a40u: goto label_121a40;
        case 0x121a44u: goto label_121a44;
        case 0x121a48u: goto label_121a48;
        case 0x121a4cu: goto label_121a4c;
        case 0x121a50u: goto label_121a50;
        case 0x121a54u: goto label_121a54;
        case 0x121a58u: goto label_121a58;
        case 0x121a5cu: goto label_121a5c;
        case 0x121a60u: goto label_121a60;
        case 0x121a64u: goto label_121a64;
        case 0x121a68u: goto label_121a68;
        case 0x121a6cu: goto label_121a6c;
        case 0x121a70u: goto label_121a70;
        case 0x121a74u: goto label_121a74;
        case 0x121a78u: goto label_121a78;
        case 0x121a7cu: goto label_121a7c;
        case 0x121a80u: goto label_121a80;
        case 0x121a84u: goto label_121a84;
        case 0x121a88u: goto label_121a88;
        case 0x121a8cu: goto label_121a8c;
        case 0x121a90u: goto label_121a90;
        case 0x121a94u: goto label_121a94;
        case 0x121a98u: goto label_121a98;
        case 0x121a9cu: goto label_121a9c;
        case 0x121aa0u: goto label_121aa0;
        case 0x121aa4u: goto label_121aa4;
        case 0x121aa8u: goto label_121aa8;
        case 0x121aacu: goto label_121aac;
        case 0x121ab0u: goto label_121ab0;
        case 0x121ab4u: goto label_121ab4;
        case 0x121ab8u: goto label_121ab8;
        case 0x121abcu: goto label_121abc;
        case 0x121ac0u: goto label_121ac0;
        case 0x121ac4u: goto label_121ac4;
        case 0x121ac8u: goto label_121ac8;
        case 0x121accu: goto label_121acc;
        case 0x121ad0u: goto label_121ad0;
        case 0x121ad4u: goto label_121ad4;
        case 0x121ad8u: goto label_121ad8;
        case 0x121adcu: goto label_121adc;
        case 0x121ae0u: goto label_121ae0;
        case 0x121ae4u: goto label_121ae4;
        case 0x121ae8u: goto label_121ae8;
        case 0x121aecu: goto label_121aec;
        case 0x121af0u: goto label_121af0;
        case 0x121af4u: goto label_121af4;
        case 0x121af8u: goto label_121af8;
        case 0x121afcu: goto label_121afc;
        case 0x121b00u: goto label_121b00;
        case 0x121b04u: goto label_121b04;
        case 0x121b08u: goto label_121b08;
        case 0x121b0cu: goto label_121b0c;
        case 0x121b10u: goto label_121b10;
        case 0x121b14u: goto label_121b14;
        case 0x121b18u: goto label_121b18;
        case 0x121b1cu: goto label_121b1c;
        case 0x121b20u: goto label_121b20;
        case 0x121b24u: goto label_121b24;
        case 0x121b28u: goto label_121b28;
        case 0x121b2cu: goto label_121b2c;
        case 0x121b30u: goto label_121b30;
        case 0x121b34u: goto label_121b34;
        case 0x121b38u: goto label_121b38;
        case 0x121b3cu: goto label_121b3c;
        case 0x121b40u: goto label_121b40;
        case 0x121b44u: goto label_121b44;
        case 0x121b48u: goto label_121b48;
        case 0x121b4cu: goto label_121b4c;
        case 0x121b50u: goto label_121b50;
        case 0x121b54u: goto label_121b54;
        case 0x121b58u: goto label_121b58;
        case 0x121b5cu: goto label_121b5c;
        case 0x121b60u: goto label_121b60;
        case 0x121b64u: goto label_121b64;
        case 0x121b68u: goto label_121b68;
        case 0x121b6cu: goto label_121b6c;
        case 0x121b70u: goto label_121b70;
        case 0x121b74u: goto label_121b74;
        case 0x121b78u: goto label_121b78;
        case 0x121b7cu: goto label_121b7c;
        case 0x121b80u: goto label_121b80;
        case 0x121b84u: goto label_121b84;
        case 0x121b88u: goto label_121b88;
        case 0x121b8cu: goto label_121b8c;
        case 0x121b90u: goto label_121b90;
        case 0x121b94u: goto label_121b94;
        case 0x121b98u: goto label_121b98;
        case 0x121b9cu: goto label_121b9c;
        case 0x121ba0u: goto label_121ba0;
        case 0x121ba4u: goto label_121ba4;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bacu: goto label_121bac;
        case 0x121bb0u: goto label_121bb0;
        case 0x121bb4u: goto label_121bb4;
        case 0x121bb8u: goto label_121bb8;
        case 0x121bbcu: goto label_121bbc;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bc4u: goto label_121bc4;
        case 0x121bc8u: goto label_121bc8;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd0u: goto label_121bd0;
        case 0x121bd4u: goto label_121bd4;
        case 0x121bd8u: goto label_121bd8;
        case 0x121bdcu: goto label_121bdc;
        case 0x121be0u: goto label_121be0;
        case 0x121be4u: goto label_121be4;
        case 0x121be8u: goto label_121be8;
        case 0x121becu: goto label_121bec;
        case 0x121bf0u: goto label_121bf0;
        case 0x121bf4u: goto label_121bf4;
        case 0x121bf8u: goto label_121bf8;
        case 0x121bfcu: goto label_121bfc;
        case 0x121c00u: goto label_121c00;
        case 0x121c04u: goto label_121c04;
        case 0x121c08u: goto label_121c08;
        case 0x121c0cu: goto label_121c0c;
        case 0x121c10u: goto label_121c10;
        case 0x121c14u: goto label_121c14;
        case 0x121c18u: goto label_121c18;
        case 0x121c1cu: goto label_121c1c;
        case 0x121c20u: goto label_121c20;
        case 0x121c24u: goto label_121c24;
        case 0x121c28u: goto label_121c28;
        case 0x121c2cu: goto label_121c2c;
        case 0x121c30u: goto label_121c30;
        case 0x121c34u: goto label_121c34;
        case 0x121c38u: goto label_121c38;
        case 0x121c3cu: goto label_121c3c;
        case 0x121c40u: goto label_121c40;
        case 0x121c44u: goto label_121c44;
        case 0x121c48u: goto label_121c48;
        case 0x121c4cu: goto label_121c4c;
        case 0x121c50u: goto label_121c50;
        case 0x121c54u: goto label_121c54;
        case 0x121c58u: goto label_121c58;
        case 0x121c5cu: goto label_121c5c;
        case 0x121c60u: goto label_121c60;
        case 0x121c64u: goto label_121c64;
        case 0x121c68u: goto label_121c68;
        case 0x121c6cu: goto label_121c6c;
        case 0x121c70u: goto label_121c70;
        case 0x121c74u: goto label_121c74;
        case 0x121c78u: goto label_121c78;
        case 0x121c7cu: goto label_121c7c;
        case 0x121c80u: goto label_121c80;
        case 0x121c84u: goto label_121c84;
        case 0x121c88u: goto label_121c88;
        case 0x121c8cu: goto label_121c8c;
        case 0x121c90u: goto label_121c90;
        case 0x121c94u: goto label_121c94;
        case 0x121c98u: goto label_121c98;
        case 0x121c9cu: goto label_121c9c;
        case 0x121ca0u: goto label_121ca0;
        case 0x121ca4u: goto label_121ca4;
        case 0x121ca8u: goto label_121ca8;
        case 0x121cacu: goto label_121cac;
        case 0x121cb0u: goto label_121cb0;
        case 0x121cb4u: goto label_121cb4;
        case 0x121cb8u: goto label_121cb8;
        case 0x121cbcu: goto label_121cbc;
        case 0x121cc0u: goto label_121cc0;
        case 0x121cc4u: goto label_121cc4;
        case 0x121cc8u: goto label_121cc8;
        case 0x121cccu: goto label_121ccc;
        case 0x121cd0u: goto label_121cd0;
        case 0x121cd4u: goto label_121cd4;
        case 0x121cd8u: goto label_121cd8;
        case 0x121cdcu: goto label_121cdc;
        case 0x121ce0u: goto label_121ce0;
        case 0x121ce4u: goto label_121ce4;
        case 0x121ce8u: goto label_121ce8;
        case 0x121cecu: goto label_121cec;
        case 0x121cf0u: goto label_121cf0;
        case 0x121cf4u: goto label_121cf4;
        case 0x121cf8u: goto label_121cf8;
        case 0x121cfcu: goto label_121cfc;
        case 0x121d00u: goto label_121d00;
        case 0x121d04u: goto label_121d04;
        case 0x121d08u: goto label_121d08;
        case 0x121d0cu: goto label_121d0c;
        case 0x121d10u: goto label_121d10;
        case 0x121d14u: goto label_121d14;
        case 0x121d18u: goto label_121d18;
        case 0x121d1cu: goto label_121d1c;
        case 0x121d20u: goto label_121d20;
        case 0x121d24u: goto label_121d24;
        case 0x121d28u: goto label_121d28;
        case 0x121d2cu: goto label_121d2c;
        case 0x121d30u: goto label_121d30;
        case 0x121d34u: goto label_121d34;
        case 0x121d38u: goto label_121d38;
        case 0x121d3cu: goto label_121d3c;
        case 0x121d40u: goto label_121d40;
        case 0x121d44u: goto label_121d44;
        case 0x121d48u: goto label_121d48;
        case 0x121d4cu: goto label_121d4c;
        case 0x121d50u: goto label_121d50;
        case 0x121d54u: goto label_121d54;
        case 0x121d58u: goto label_121d58;
        case 0x121d5cu: goto label_121d5c;
        case 0x121d60u: goto label_121d60;
        case 0x121d64u: goto label_121d64;
        case 0x121d68u: goto label_121d68;
        case 0x121d6cu: goto label_121d6c;
        case 0x121d70u: goto label_121d70;
        case 0x121d74u: goto label_121d74;
        case 0x121d78u: goto label_121d78;
        case 0x121d7cu: goto label_121d7c;
        case 0x121d80u: goto label_121d80;
        case 0x121d84u: goto label_121d84;
        case 0x121d88u: goto label_121d88;
        case 0x121d8cu: goto label_121d8c;
        case 0x121d90u: goto label_121d90;
        case 0x121d94u: goto label_121d94;
        case 0x121d98u: goto label_121d98;
        case 0x121d9cu: goto label_121d9c;
        case 0x121da0u: goto label_121da0;
        case 0x121da4u: goto label_121da4;
        case 0x121da8u: goto label_121da8;
        case 0x121dacu: goto label_121dac;
        case 0x121db0u: goto label_121db0;
        case 0x121db4u: goto label_121db4;
        case 0x121db8u: goto label_121db8;
        case 0x121dbcu: goto label_121dbc;
        case 0x121dc0u: goto label_121dc0;
        case 0x121dc4u: goto label_121dc4;
        case 0x121dc8u: goto label_121dc8;
        case 0x121dccu: goto label_121dcc;
        case 0x121dd0u: goto label_121dd0;
        case 0x121dd4u: goto label_121dd4;
        case 0x121dd8u: goto label_121dd8;
        case 0x121ddcu: goto label_121ddc;
        case 0x121de0u: goto label_121de0;
        case 0x121de4u: goto label_121de4;
        case 0x121de8u: goto label_121de8;
        case 0x121decu: goto label_121dec;
        case 0x121df0u: goto label_121df0;
        case 0x121df4u: goto label_121df4;
        case 0x121df8u: goto label_121df8;
        case 0x121dfcu: goto label_121dfc;
        case 0x121e00u: goto label_121e00;
        case 0x121e04u: goto label_121e04;
        case 0x121e08u: goto label_121e08;
        case 0x121e0cu: goto label_121e0c;
        case 0x121e10u: goto label_121e10;
        case 0x121e14u: goto label_121e14;
        case 0x121e18u: goto label_121e18;
        case 0x121e1cu: goto label_121e1c;
        case 0x121e20u: goto label_121e20;
        case 0x121e24u: goto label_121e24;
        case 0x121e28u: goto label_121e28;
        case 0x121e2cu: goto label_121e2c;
        default: break;
    }

    ctx->pc = 0x121888u;

label_121888:
    // 0x121888: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x121888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_12188c:
    // 0x12188c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_121890:
    // 0x121890: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x121890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_121894:
    // 0x121894: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x121894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_121898:
    // 0x121898: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x121898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_12189c:
    // 0x12189c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x12189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1218a0:
    // 0x1218a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1218a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1218a4:
    // 0x1218a4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1218a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1218a8:
    // 0x1218a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1218a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1218ac:
    // 0x1218ac: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1218b0:
    // 0x1218b0: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x1218b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_1218b4:
    // 0x1218b4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1218b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1218b8:
    // 0x1218b8: 0x14600137  bnez        $v1, . + 4 + (0x137 << 2)
label_1218bc:
    if (ctx->pc == 0x1218BCu) {
        ctx->pc = 0x1218BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218B8u;
        // 0x1218bc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1218C0u;
        goto label_1218c0;
    }
    ctx->pc = 0x1218B8u;
    {
        const bool branch_taken_0x1218b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1218BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218B8u;
        // 0x1218bc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218b8) {
            ctx->pc = 0x121D98u;
            goto label_121d98;
        }
    }
    ctx->pc = 0x1218C0u;
label_1218c0:
    // 0x1218c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1218c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1218c4:
    // 0x1218c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1218c8:
    // 0x1218c8: 0x8c43b1c0  lw          $v1, -0x4E40($v0)
    ctx->pc = 0x1218c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947264)));
label_1218cc:
    // 0x1218cc: 0x14640133  bne         $v1, $a0, . + 4 + (0x133 << 2)
label_1218d0:
    if (ctx->pc == 0x1218D0u) {
        ctx->pc = 0x1218D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218CCu;
        // 0x1218d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1218D4u;
        goto label_1218d4;
    }
    ctx->pc = 0x1218CCu;
    {
        const bool branch_taken_0x1218cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1218D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218CCu;
        // 0x1218d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218cc) {
            ctx->pc = 0x121D9Cu;
            goto label_121d9c;
        }
    }
    ctx->pc = 0x1218D4u;
label_1218d4:
    // 0x1218d4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1218d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1218d8:
    // 0x1218d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1218d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1218dc:
    // 0x1218dc: 0x261091a8  addiu       $s0, $s0, -0x6E58
    ctx->pc = 0x1218dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939048));
label_1218e0:
    // 0x1218e0: 0xc136b7c  jal         func_4DADF0
label_1218e4:
    if (ctx->pc == 0x1218E4u) {
        ctx->pc = 0x1218E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218E0u;
        // 0x1218e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1218E8u;
        goto label_1218e8;
    }
    ctx->pc = 0x1218E0u;
    SET_GPR_U32(ctx, 31, 0x1218E8u);
    ctx->pc = 0x1218E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218E0u;
    // 0x1218e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x1218E0u, 0x1218E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218E8u;
label_1218e8:
    // 0x1218e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1218e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1218ec:
    // 0x1218ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1218ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1218f0:
    // 0x1218f0: 0xc0e409a  jal         func_390268
label_1218f4:
    if (ctx->pc == 0x1218F4u) {
        ctx->pc = 0x1218F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218F0u;
        // 0x1218f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1218F8u;
        goto label_1218f8;
    }
    ctx->pc = 0x1218F0u;
    SET_GPR_U32(ctx, 31, 0x1218F8u);
    ctx->pc = 0x1218F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218F0u;
    // 0x1218f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1218F0u, 0x1218F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218F8u;
label_1218f8:
    // 0x1218f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1218f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1218fc:
    // 0x1218fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1218fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121900:
    // 0x121900: 0xc136b7c  jal         func_4DADF0
label_121904:
    if (ctx->pc == 0x121904u) {
        ctx->pc = 0x121904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121900u;
        // 0x121904: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121908u;
        goto label_121908;
    }
    ctx->pc = 0x121900u;
    SET_GPR_U32(ctx, 31, 0x121908u);
    ctx->pc = 0x121904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121900u;
    // 0x121904: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x121900u, 0x121908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121908u;
label_121908:
    // 0x121908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12190c:
    // 0x12190c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x12190cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_121910:
    // 0x121910: 0xc0e409a  jal         func_390268
label_121914:
    if (ctx->pc == 0x121914u) {
        ctx->pc = 0x121914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121910u;
        // 0x121914: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121918u;
        goto label_121918;
    }
    ctx->pc = 0x121910u;
    SET_GPR_U32(ctx, 31, 0x121918u);
    ctx->pc = 0x121914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121910u;
    // 0x121914: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x121910u, 0x121918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121918u;
label_121918:
    // 0x121918: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
label_12191c:
    if (ctx->pc == 0x12191Cu) {
        ctx->pc = 0x12191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121918u;
        // 0x12191c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121920u;
        goto label_121920;
    }
    ctx->pc = 0x121918u;
    {
        const bool branch_taken_0x121918 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121918u;
        // 0x12191c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121918) {
            ctx->pc = 0x121A08u;
            goto label_121a08;
        }
    }
    ctx->pc = 0x121920u;
label_121920:
    // 0x121920: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x121920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_121924:
    // 0x121924: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121928:
    // 0x121928: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_12192c:
    if (ctx->pc == 0x12192Cu) {
        ctx->pc = 0x121930u;
        goto label_121930;
    }
    ctx->pc = 0x121928u;
    {
        const bool branch_taken_0x121928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x121928) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x121930u;
label_121930:
    // 0x121930: 0xc047e72  jal         func_11F9C8
label_121934:
    if (ctx->pc == 0x121934u) {
        ctx->pc = 0x121934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121930u;
        // 0x121934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121938u;
        goto label_121938;
    }
    ctx->pc = 0x121930u;
    SET_GPR_U32(ctx, 31, 0x121938u);
    ctx->pc = 0x121934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121930u;
    // 0x121934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121930u, 0x121938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121938u;
label_121938:
    // 0x121938: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_12193c:
    if (ctx->pc == 0x12193Cu) {
        ctx->pc = 0x121940u;
        goto label_121940;
    }
    ctx->pc = 0x121938u;
    {
        const bool branch_taken_0x121938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121938) {
            ctx->pc = 0x121990u;
            goto label_121990;
        }
    }
    ctx->pc = 0x121940u;
label_121940:
    // 0x121940: 0xc047e72  jal         func_11F9C8
label_121944:
    if (ctx->pc == 0x121944u) {
        ctx->pc = 0x121944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121940u;
        // 0x121944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121948u;
        goto label_121948;
    }
    ctx->pc = 0x121940u;
    SET_GPR_U32(ctx, 31, 0x121948u);
    ctx->pc = 0x121944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121940u;
    // 0x121944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121940u, 0x121948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121948u;
label_121948:
    // 0x121948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12194c:
    // 0x12194c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121950:
    // 0x121950: 0xc047e78  jal         func_11F9E0
label_121954:
    if (ctx->pc == 0x121954u) {
        ctx->pc = 0x121954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121950u;
        // 0x121954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121958u;
        goto label_121958;
    }
    ctx->pc = 0x121950u;
    SET_GPR_U32(ctx, 31, 0x121958u);
    ctx->pc = 0x121954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121950u;
    // 0x121954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x121950u, 0x121958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121958u;
label_121958:
    // 0x121958: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_12195c:
    if (ctx->pc == 0x12195Cu) {
        ctx->pc = 0x12195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121958u;
        // 0x12195c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121960u;
        goto label_121960;
    }
    ctx->pc = 0x121958u;
    {
        const bool branch_taken_0x121958 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x12195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121958u;
        // 0x12195c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121958) {
            ctx->pc = 0x121990u;
            goto label_121990;
        }
    }
    ctx->pc = 0x121960u;
label_121960:
    // 0x121960: 0xc047e78  jal         func_11F9E0
label_121964:
    if (ctx->pc == 0x121964u) {
        ctx->pc = 0x121964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121960u;
        // 0x121964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121968u;
        goto label_121968;
    }
    ctx->pc = 0x121960u;
    SET_GPR_U32(ctx, 31, 0x121968u);
    ctx->pc = 0x121964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121960u;
    // 0x121964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x121960u, 0x121968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121968u;
label_121968:
    // 0x121968: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x121968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_12196c:
    // 0x12196c: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x12196cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_121970:
    // 0x121970: 0xc0e409a  jal         func_390268
label_121974:
    if (ctx->pc == 0x121974u) {
        ctx->pc = 0x121974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121970u;
        // 0x121974: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121978u;
        goto label_121978;
    }
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 31, 0x121978u);
    ctx->pc = 0x121974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121970u;
    // 0x121974: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x121970u, 0x121978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121978u;
label_121978:
    // 0x121978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12197c:
    // 0x12197c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_121980:
    if (ctx->pc == 0x121980u) {
        ctx->pc = 0x121984u;
        goto label_121984;
    }
    ctx->pc = 0x12197Cu;
    {
        const bool branch_taken_0x12197c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12197c) {
            ctx->pc = 0x121990u;
            goto label_121990;
        }
    }
    ctx->pc = 0x121984u;
label_121984:
    // 0x121984: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x121984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_121988:
    // 0x121988: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x121988u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12198c:
    // 0x12198c: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x12198cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_121990:
    // 0x121990: 0xc047e72  jal         func_11F9C8
label_121994:
    if (ctx->pc == 0x121994u) {
        ctx->pc = 0x121994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121990u;
        // 0x121994: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121998u;
        goto label_121998;
    }
    ctx->pc = 0x121990u;
    SET_GPR_U32(ctx, 31, 0x121998u);
    ctx->pc = 0x121994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121990u;
    // 0x121994: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121990u, 0x121998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121998u;
label_121998:
    // 0x121998: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_12199c:
    if (ctx->pc == 0x12199Cu) {
        ctx->pc = 0x1219A0u;
        goto label_1219a0;
    }
    ctx->pc = 0x121998u;
    {
        const bool branch_taken_0x121998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121998) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x1219A0u;
label_1219a0:
    // 0x1219a0: 0xc047e72  jal         func_11F9C8
label_1219a4:
    if (ctx->pc == 0x1219A4u) {
        ctx->pc = 0x1219A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219A0u;
        // 0x1219a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219A8u;
        goto label_1219a8;
    }
    ctx->pc = 0x1219A0u;
    SET_GPR_U32(ctx, 31, 0x1219A8u);
    ctx->pc = 0x1219A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219A0u;
    // 0x1219a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x1219A0u, 0x1219A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A8u;
label_1219a8:
    // 0x1219a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1219a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1219ac:
    // 0x1219ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1219acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1219b0:
    // 0x1219b0: 0xc047e78  jal         func_11F9E0
label_1219b4:
    if (ctx->pc == 0x1219B4u) {
        ctx->pc = 0x1219B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219B0u;
        // 0x1219b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219B8u;
        goto label_1219b8;
    }
    ctx->pc = 0x1219B0u;
    SET_GPR_U32(ctx, 31, 0x1219B8u);
    ctx->pc = 0x1219B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219B0u;
    // 0x1219b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1219B0u, 0x1219B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219B8u;
label_1219b8:
    // 0x1219b8: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1219bc:
    if (ctx->pc == 0x1219BCu) {
        ctx->pc = 0x1219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219B8u;
        // 0x1219bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219C0u;
        goto label_1219c0;
    }
    ctx->pc = 0x1219B8u;
    {
        const bool branch_taken_0x1219b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219B8u;
        // 0x1219bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219b8) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x1219C0u;
label_1219c0:
    // 0x1219c0: 0xc047e78  jal         func_11F9E0
label_1219c4:
    if (ctx->pc == 0x1219C4u) {
        ctx->pc = 0x1219C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219C0u;
        // 0x1219c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219C8u;
        goto label_1219c8;
    }
    ctx->pc = 0x1219C0u;
    SET_GPR_U32(ctx, 31, 0x1219C8u);
    ctx->pc = 0x1219C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219C0u;
    // 0x1219c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1219C0u, 0x1219C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219C8u;
label_1219c8:
    // 0x1219c8: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1219c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1219cc:
    // 0x1219cc: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x1219ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_1219d0:
    // 0x1219d0: 0xc0e409a  jal         func_390268
label_1219d4:
    if (ctx->pc == 0x1219D4u) {
        ctx->pc = 0x1219D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D0u;
        // 0x1219d4: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219D8u;
        goto label_1219d8;
    }
    ctx->pc = 0x1219D0u;
    SET_GPR_U32(ctx, 31, 0x1219D8u);
    ctx->pc = 0x1219D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219D0u;
    // 0x1219d4: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1219D0u, 0x1219D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219D8u;
label_1219d8:
    // 0x1219d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1219d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1219dc:
    // 0x1219dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1219e0:
    if (ctx->pc == 0x1219E0u) {
        ctx->pc = 0x1219E4u;
        goto label_1219e4;
    }
    ctx->pc = 0x1219DCu;
    {
        const bool branch_taken_0x1219dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219dc) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x1219E4u;
label_1219e4:
    // 0x1219e4: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x1219e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_1219e8:
    // 0x1219e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1219e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1219ec:
    // 0x1219ec: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x1219ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_1219f0:
    // 0x1219f0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1219f4:
    if (ctx->pc == 0x1219F4u) {
        ctx->pc = 0x1219F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F0u;
        // 0x1219f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219F8u;
        goto label_1219f8;
    }
    ctx->pc = 0x1219F0u;
    {
        const bool branch_taken_0x1219f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F0u;
        // 0x1219f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219f0) {
            ctx->pc = 0x121A0Cu;
            goto label_121a0c;
        }
    }
    ctx->pc = 0x1219F8u;
label_1219f8:
    // 0x1219f8: 0xc048d40  jal         func_123500
label_1219fc:
    if (ctx->pc == 0x1219FCu) {
        ctx->pc = 0x1219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F8u;
        // 0x1219fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A00u;
        goto label_121a00;
    }
    ctx->pc = 0x1219F8u;
    SET_GPR_U32(ctx, 31, 0x121A00u);
    ctx->pc = 0x1219FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219F8u;
    // 0x1219fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x1219F8u, 0x121A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A00u;
label_121a00:
    // 0x121a00: 0x10000002  b           . + 4 + (0x2 << 2)
label_121a04:
    if (ctx->pc == 0x121A04u) {
        ctx->pc = 0x121A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A00u;
        // 0x121a04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A08u;
        goto label_121a08;
    }
    ctx->pc = 0x121A00u;
    {
        const bool branch_taken_0x121a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A00u;
        // 0x121a04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a00) {
            ctx->pc = 0x121A0Cu;
            goto label_121a0c;
        }
    }
    ctx->pc = 0x121A08u;
label_121a08:
    // 0x121a08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x121a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121a0c:
    // 0x121a0c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_121a10:
    if (ctx->pc == 0x121A10u) {
        ctx->pc = 0x121A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A0Cu;
        // 0x121a10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A14u;
        goto label_121a14;
    }
    ctx->pc = 0x121A0Cu;
    {
        const bool branch_taken_0x121a0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A0Cu;
        // 0x121a10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a0c) {
            ctx->pc = 0x121A20u;
            goto label_121a20;
        }
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0xc048d40  jal         func_123500
label_121a18:
    if (ctx->pc == 0x121A18u) {
        ctx->pc = 0x121A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A14u;
        // 0x121a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A1Cu;
        goto label_121a1c;
    }
    ctx->pc = 0x121A14u;
    SET_GPR_U32(ctx, 31, 0x121A1Cu);
    ctx->pc = 0x121A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A14u;
    // 0x121a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x121A14u, 0x121A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A1Cu;
label_121a1c:
    // 0x121a1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x121a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121a20:
    // 0x121a20: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_121a24:
    if (ctx->pc == 0x121A24u) {
        ctx->pc = 0x121A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A20u;
        // 0x121a24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A28u;
        goto label_121a28;
    }
    ctx->pc = 0x121A20u;
    {
        const bool branch_taken_0x121a20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A20u;
        // 0x121a24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a20) {
            ctx->pc = 0x121A48u;
            goto label_121a48;
        }
    }
    ctx->pc = 0x121A28u;
label_121a28:
    // 0x121a28: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x121a28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_121a2c:
    // 0x121a2c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_121a30:
    if (ctx->pc == 0x121A30u) {
        ctx->pc = 0x121A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A2Cu;
        // 0x121a30: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A34u;
        goto label_121a34;
    }
    ctx->pc = 0x121A2Cu;
    {
        const bool branch_taken_0x121a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x121A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A2Cu;
        // 0x121a30: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a2c) {
            ctx->pc = 0x121A48u;
            goto label_121a48;
        }
    }
    ctx->pc = 0x121A34u;
label_121a34:
    // 0x121a34: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x121a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_121a38:
    // 0x121a38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x121a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_121a3c:
    // 0x121a3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_121a40:
    // 0x121a40: 0x1000000a  b           . + 4 + (0xA << 2)
label_121a44:
    if (ctx->pc == 0x121A44u) {
        ctx->pc = 0x121A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A40u;
        // 0x121a44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A48u;
        goto label_121a48;
    }
    ctx->pc = 0x121A40u;
    {
        const bool branch_taken_0x121a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A40u;
        // 0x121a44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a40) {
            ctx->pc = 0x121A6Cu;
            goto label_121a6c;
        }
    }
    ctx->pc = 0x121A48u;
label_121a48:
    // 0x121a48: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_121a4c:
    if (ctx->pc == 0x121A4Cu) {
        ctx->pc = 0x121A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A48u;
        // 0x121a4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A50u;
        goto label_121a50;
    }
    ctx->pc = 0x121A48u;
    {
        const bool branch_taken_0x121a48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A48u;
        // 0x121a4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a48) {
            ctx->pc = 0x121A78u;
            goto label_121a78;
        }
    }
    ctx->pc = 0x121A50u;
label_121a50:
    // 0x121a50: 0x828301b0  lb          $v1, 0x1B0($s4)
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_121a54:
    // 0x121a54: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_121a58:
    if (ctx->pc == 0x121A58u) {
        ctx->pc = 0x121A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A54u;
        // 0x121a58: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A5Cu;
        goto label_121a5c;
    }
    ctx->pc = 0x121A54u;
    {
        const bool branch_taken_0x121a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x121A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A54u;
        // 0x121a58: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a54) {
            ctx->pc = 0x121A78u;
            goto label_121a78;
        }
    }
    ctx->pc = 0x121A5Cu;
label_121a5c:
    // 0x121a5c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_121a60:
    // 0x121a60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x121a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_121a64:
    // 0x121a64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_121a68:
    // 0x121a68: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_121a6c:
    // 0x121a6c: 0x40f809  jalr        $v0
label_121a70:
    if (ctx->pc == 0x121A70u) {
        ctx->pc = 0x121A74u;
        goto label_121a74;
    }
    ctx->pc = 0x121A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121A74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121A6Cu, 0x121A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121A74u;
label_121a74:
    // 0x121a74: 0xae0291b8  sw          $v0, -0x6E48($s0)
    ctx->pc = 0x121a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939064), GPR_U32(ctx, 2));
label_121a78:
    // 0x121a78: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_121a7c:
    if (ctx->pc == 0x121A7Cu) {
        ctx->pc = 0x121A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A78u;
        // 0x121a7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A80u;
        goto label_121a80;
    }
    ctx->pc = 0x121A78u;
    {
        const bool branch_taken_0x121a78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A78u;
        // 0x121a7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a78) {
            ctx->pc = 0x121A90u;
            goto label_121a90;
        }
    }
    ctx->pc = 0x121A80u;
label_121a80:
    // 0x121a80: 0x2443b1e8  addiu       $v1, $v0, -0x4E18
    ctx->pc = 0x121a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947304));
label_121a84:
    // 0x121a84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x121a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121a88:
    // 0x121a88: 0x10000003  b           . + 4 + (0x3 << 2)
label_121a8c:
    if (ctx->pc == 0x121A8Cu) {
        ctx->pc = 0x121A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A88u;
        // 0x121a8c: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A90u;
        goto label_121a90;
    }
    ctx->pc = 0x121A88u;
    {
        const bool branch_taken_0x121a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A88u;
        // 0x121a8c: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a88) {
            ctx->pc = 0x121A98u;
            goto label_121a98;
        }
    }
    ctx->pc = 0x121A90u;
label_121a90:
    // 0x121a90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x121a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121a94:
    // 0x121a94: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x121a94u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_121a98:
    // 0x121a98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_121a9c:
    // 0x121a9c: 0x2684b1e8  addiu       $a0, $s4, -0x4E18
    ctx->pc = 0x121a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947304));
label_121aa0:
    // 0x121aa0: 0x8c43b1e0  lw          $v1, -0x4E20($v0)
    ctx->pc = 0x121aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947296)));
label_121aa4:
    // 0x121aa4: 0x146000b2  bnez        $v1, . + 4 + (0xB2 << 2)
label_121aa8:
    if (ctx->pc == 0x121AA8u) {
        ctx->pc = 0x121AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AA4u;
        // 0x121aa8: 0x8e95b1e8  lw          $s5, -0x4E18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AACu;
        goto label_121aac;
    }
    ctx->pc = 0x121AA4u;
    {
        const bool branch_taken_0x121aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AA4u;
        // 0x121aa8: 0x8e95b1e8  lw          $s5, -0x4E18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121aa4) {
            ctx->pc = 0x121D70u;
            goto label_121d70;
        }
    }
    ctx->pc = 0x121AACu;
label_121aac:
    // 0x121aac: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_121ab0:
    if (ctx->pc == 0x121AB0u) {
        ctx->pc = 0x121AB4u;
        goto label_121ab4;
    }
    ctx->pc = 0x121AACu;
    {
        const bool branch_taken_0x121aac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x121aac) {
            ctx->pc = 0x121AC4u;
            goto label_121ac4;
        }
    }
    ctx->pc = 0x121AB4u;
label_121ab4:
    // 0x121ab4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_121ab8:
    if (ctx->pc == 0x121AB8u) {
        ctx->pc = 0x121ABCu;
        goto label_121abc;
    }
    ctx->pc = 0x121AB4u;
    {
        const bool branch_taken_0x121ab4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x121ab4) {
            ctx->pc = 0x121AC4u;
            goto label_121ac4;
        }
    }
    ctx->pc = 0x121ABCu;
label_121abc:
    // 0x121abc: 0x10000004  b           . + 4 + (0x4 << 2)
label_121ac0:
    if (ctx->pc == 0x121AC0u) {
        ctx->pc = 0x121AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ABCu;
        // 0x121ac0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AC4u;
        goto label_121ac4;
    }
    ctx->pc = 0x121ABCu;
    {
        const bool branch_taken_0x121abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ABCu;
        // 0x121ac0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121abc) {
            ctx->pc = 0x121AD0u;
            goto label_121ad0;
        }
    }
    ctx->pc = 0x121AC4u;
label_121ac4:
    // 0x121ac4: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
label_121ac8:
    if (ctx->pc == 0x121AC8u) {
        ctx->pc = 0x121AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AC4u;
        // 0x121ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121ACCu;
        goto label_121acc;
    }
    ctx->pc = 0x121AC4u;
    {
        const bool branch_taken_0x121ac4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x121AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AC4u;
        // 0x121ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ac4) {
            ctx->pc = 0x121AD0u;
            goto label_121ad0;
        }
    }
    ctx->pc = 0x121ACCu;
label_121acc:
    // 0x121acc: 0x51980a  movz        $s3, $v0, $s1
    ctx->pc = 0x121accu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_121ad0:
    // 0x121ad0: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_121ad4:
    if (ctx->pc == 0x121AD4u) {
        ctx->pc = 0x121AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AD0u;
        // 0x121ad4: 0x2e710001  sltiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AD8u;
        goto label_121ad8;
    }
    ctx->pc = 0x121AD0u;
    {
        const bool branch_taken_0x121ad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x121ad0) {
            ctx->pc = 0x121AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121AD0u;
            // 0x121ad4: 0x2e710001  sltiu       $s1, $s3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121AD8u;
            goto label_121ad8;
        }
    }
    ctx->pc = 0x121AD8u;
label_121ad8:
    // 0x121ad8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x121ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_121adc:
    // 0x121adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121ae0:
    // 0x121ae0: 0x8c64b1d8  lw          $a0, -0x4E28($v1)
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947288)));
label_121ae4:
    // 0x121ae4: 0x2682b1e8  addiu       $v0, $s4, -0x4E18
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947304));
label_121ae8:
    // 0x121ae8: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x121ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_121aec:
    // 0x121aec: 0xa4880a  movz        $s1, $a1, $a0
    ctx->pc = 0x121aecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_121af0:
    // 0x121af0: 0x16200014  bnez        $s1, . + 4 + (0x14 << 2)
label_121af4:
    if (ctx->pc == 0x121AF4u) {
        ctx->pc = 0x121AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AF0u;
        // 0x121af4: 0xae91b1e8  sw          $s1, -0x4E18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AF8u;
        goto label_121af8;
    }
    ctx->pc = 0x121AF0u;
    {
        const bool branch_taken_0x121af0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x121AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AF0u;
        // 0x121af4: 0xae91b1e8  sw          $s1, -0x4E18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121af0) {
            ctx->pc = 0x121B44u;
            goto label_121b44;
        }
    }
    ctx->pc = 0x121AF8u;
label_121af8:
    // 0x121af8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x121af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_121afc:
    // 0x121afc: 0x24509148  addiu       $s0, $v0, -0x6EB8
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938952));
label_121b00:
    // 0x121b00: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x121b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_121b04:
    // 0x121b04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x121b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_121b08:
    // 0x121b08: 0x84640280  lh          $a0, 0x280($v1)
    ctx->pc = 0x121b08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 640)));
label_121b0c:
    // 0x121b0c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x121b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_121b10:
    // 0x121b10: 0x40f809  jalr        $v0
label_121b14:
    if (ctx->pc == 0x121B14u) {
        ctx->pc = 0x121B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B10u;
        // 0x121b14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B18u;
        goto label_121b18;
    }
    ctx->pc = 0x121B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121B18u);
        ctx->pc = 0x121B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B10u;
        // 0x121b14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B10u, 0x121B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121B18u;
label_121b18:
    // 0x121b18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_121b1c:
    if (ctx->pc == 0x121B1Cu) {
        ctx->pc = 0x121B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B18u;
        // 0x121b1c: 0x2682b1e8  addiu       $v0, $s4, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B20u;
        goto label_121b20;
    }
    ctx->pc = 0x121B18u;
    {
        const bool branch_taken_0x121b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B18u;
        // 0x121b1c: 0x2682b1e8  addiu       $v0, $s4, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b18) {
            ctx->pc = 0x121B44u;
            goto label_121b44;
        }
    }
    ctx->pc = 0x121B20u;
label_121b20:
    // 0x121b20: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x121b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_121b24:
    // 0x121b24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121b28:
    // 0x121b28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_121b2c:
    // 0x121b2c: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x121b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_121b30:
    // 0x121b30: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x121b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_121b34:
    // 0x121b34: 0x60f809  jalr        $v1
label_121b38:
    if (ctx->pc == 0x121B38u) {
        ctx->pc = 0x121B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B34u;
        // 0x121b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B3Cu;
        goto label_121b3c;
    }
    ctx->pc = 0x121B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121B3Cu);
        ctx->pc = 0x121B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B34u;
        // 0x121b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B34u, 0x121B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121B3Cu;
label_121b3c:
    // 0x121b3c: 0x10000012  b           . + 4 + (0x12 << 2)
label_121b40:
    if (ctx->pc == 0x121B40u) {
        ctx->pc = 0x121B44u;
        goto label_121b44;
    }
    ctx->pc = 0x121B3Cu;
    {
        const bool branch_taken_0x121b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b3c) {
            ctx->pc = 0x121B88u;
            goto label_121b88;
        }
    }
    ctx->pc = 0x121B44u;
label_121b44:
    // 0x121b44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x121b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_121b48:
    // 0x121b48: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_121b4c:
    if (ctx->pc == 0x121B4Cu) {
        ctx->pc = 0x121B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B48u;
        // 0x121b4c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B50u;
        goto label_121b50;
    }
    ctx->pc = 0x121B48u;
    {
        const bool branch_taken_0x121b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B48u;
        // 0x121b4c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b48) {
            ctx->pc = 0x121B88u;
            goto label_121b88;
        }
    }
    ctx->pc = 0x121B50u;
label_121b50:
    // 0x121b50: 0x8e059148  lw          $a1, -0x6EB8($s0)
    ctx->pc = 0x121b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938952)));
label_121b54:
    // 0x121b54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x121b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_121b58:
    // 0x121b58: 0x84640280  lh          $a0, 0x280($v1)
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 640)));
label_121b5c:
    // 0x121b5c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x121b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_121b60:
    // 0x121b60: 0x40f809  jalr        $v0
label_121b64:
    if (ctx->pc == 0x121B64u) {
        ctx->pc = 0x121B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B60u;
        // 0x121b64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B68u;
        goto label_121b68;
    }
    ctx->pc = 0x121B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121B68u);
        ctx->pc = 0x121B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B60u;
        // 0x121b64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B60u, 0x121B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121B68u;
label_121b68:
    // 0x121b68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_121b6c:
    if (ctx->pc == 0x121B6Cu) {
        ctx->pc = 0x121B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B68u;
        // 0x121b6c: 0x8e069148  lw          $a2, -0x6EB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B70u;
        goto label_121b70;
    }
    ctx->pc = 0x121B68u;
    {
        const bool branch_taken_0x121b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B68u;
        // 0x121b6c: 0x8e069148  lw          $a2, -0x6EB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b68) {
            ctx->pc = 0x121B88u;
            goto label_121b88;
        }
    }
    ctx->pc = 0x121B70u;
label_121b70:
    // 0x121b70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121b74:
    // 0x121b74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_121b78:
    // 0x121b78: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_121b7c:
    // 0x121b7c: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x121b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_121b80:
    // 0x121b80: 0x60f809  jalr        $v1
label_121b84:
    if (ctx->pc == 0x121B84u) {
        ctx->pc = 0x121B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B80u;
        // 0x121b84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B88u;
        goto label_121b88;
    }
    ctx->pc = 0x121B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121B88u);
        ctx->pc = 0x121B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B80u;
        // 0x121b84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B80u, 0x121B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121B88u;
label_121b88:
    // 0x121b88: 0x16530003  bne         $s2, $s3, . + 4 + (0x3 << 2)
label_121b8c:
    if (ctx->pc == 0x121B8Cu) {
        ctx->pc = 0x121B90u;
        goto label_121b90;
    }
    ctx->pc = 0x121B88u;
    {
        const bool branch_taken_0x121b88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x121b88) {
            ctx->pc = 0x121B98u;
            goto label_121b98;
        }
    }
    ctx->pc = 0x121B90u;
label_121b90:
    // 0x121b90: 0x52b1009e  beql        $s5, $s1, . + 4 + (0x9E << 2)
label_121b94:
    if (ctx->pc == 0x121B94u) {
        ctx->pc = 0x121B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B90u;
        // 0x121b94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B98u;
        goto label_121b98;
    }
    ctx->pc = 0x121B90u;
    {
        const bool branch_taken_0x121b90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        if (branch_taken_0x121b90) {
            ctx->pc = 0x121B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B90u;
            // 0x121b94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121B98u;
label_121b98:
    // 0x121b98: 0x1220005a  beqz        $s1, . + 4 + (0x5A << 2)
label_121b9c:
    if (ctx->pc == 0x121B9Cu) {
        ctx->pc = 0x121B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B98u;
        // 0x121b9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BA0u;
        goto label_121ba0;
    }
    ctx->pc = 0x121B98u;
    {
        const bool branch_taken_0x121b98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B98u;
        // 0x121b9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b98) {
            ctx->pc = 0x121D04u;
            goto label_121d04;
        }
    }
    ctx->pc = 0x121BA0u;
label_121ba0:
    // 0x121ba0: 0x12600059  beqz        $s3, . + 4 + (0x59 << 2)
label_121ba4:
    if (ctx->pc == 0x121BA4u) {
        ctx->pc = 0x121BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BA0u;
        // 0x121ba4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BA8u;
        goto label_121ba8;
    }
    ctx->pc = 0x121BA0u;
    {
        const bool branch_taken_0x121ba0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BA0u;
        // 0x121ba4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ba0) {
            ctx->pc = 0x121D08u;
            goto label_121d08;
        }
    }
    ctx->pc = 0x121BA8u;
label_121ba8:
    // 0x121ba8: 0xc048bb4  jal         func_122ED0
label_121bac:
    if (ctx->pc == 0x121BACu) {
        ctx->pc = 0x121BB0u;
        goto label_121bb0;
    }
    ctx->pc = 0x121BA8u;
    SET_GPR_U32(ctx, 31, 0x121BB0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x121BA8u, 0x121BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BB0u;
label_121bb0:
    // 0x121bb0: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
label_121bb4:
    if (ctx->pc == 0x121BB4u) {
        ctx->pc = 0x121BB8u;
        goto label_121bb8;
    }
    ctx->pc = 0x121BB0u;
    {
        const bool branch_taken_0x121bb0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x121bb0) {
            ctx->pc = 0x121BDCu;
            goto label_121bdc;
        }
    }
    ctx->pc = 0x121BB8u;
label_121bb8:
    // 0x121bb8: 0xc047e72  jal         func_11F9C8
label_121bbc:
    if (ctx->pc == 0x121BBCu) {
        ctx->pc = 0x121BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BB8u;
        // 0x121bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BC0u;
        goto label_121bc0;
    }
    ctx->pc = 0x121BB8u;
    SET_GPR_U32(ctx, 31, 0x121BC0u);
    ctx->pc = 0x121BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BB8u;
    // 0x121bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121BB8u, 0x121BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BC0u;
label_121bc0:
    // 0x121bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121bc4:
    // 0x121bc4: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x121bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_121bc8:
    // 0x121bc8: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x121bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_121bcc:
    // 0x121bcc: 0xa0f809  jalr        $a1
label_121bd0:
    if (ctx->pc == 0x121BD0u) {
        ctx->pc = 0x121BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BCCu;
        // 0x121bd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BD4u;
        goto label_121bd4;
    }
    ctx->pc = 0x121BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121BD4u);
        ctx->pc = 0x121BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BCCu;
        // 0x121bd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121BCCu, 0x121BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121BD4u;
label_121bd4:
    // 0x121bd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_121bd8:
    if (ctx->pc == 0x121BD8u) {
        ctx->pc = 0x121BDCu;
        goto label_121bdc;
    }
    ctx->pc = 0x121BD4u;
    {
        const bool branch_taken_0x121bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121bd4) {
            ctx->pc = 0x121C00u;
            goto label_121c00;
        }
    }
    ctx->pc = 0x121BDCu;
label_121bdc:
    // 0x121bdc: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_121be0:
    if (ctx->pc == 0x121BE0u) {
        ctx->pc = 0x121BE4u;
        goto label_121be4;
    }
    ctx->pc = 0x121BDCu;
    {
        const bool branch_taken_0x121bdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x121bdc) {
            ctx->pc = 0x121C00u;
            goto label_121c00;
        }
    }
    ctx->pc = 0x121BE4u;
label_121be4:
    // 0x121be4: 0xc047e72  jal         func_11F9C8
label_121be8:
    if (ctx->pc == 0x121BE8u) {
        ctx->pc = 0x121BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE4u;
        // 0x121be8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BECu;
        goto label_121bec;
    }
    ctx->pc = 0x121BE4u;
    SET_GPR_U32(ctx, 31, 0x121BECu);
    ctx->pc = 0x121BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BE4u;
    // 0x121be8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121BE4u, 0x121BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BECu;
label_121bec:
    // 0x121bec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121bf0:
    // 0x121bf0: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_121bf4:
    // 0x121bf4: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_121bf8:
    // 0x121bf8: 0xa0f809  jalr        $a1
label_121bfc:
    if (ctx->pc == 0x121BFCu) {
        ctx->pc = 0x121BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BF8u;
        // 0x121bfc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C00u;
        goto label_121c00;
    }
    ctx->pc = 0x121BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121C00u);
        ctx->pc = 0x121BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BF8u;
        // 0x121bfc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121BF8u, 0x121C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C00u;
label_121c00:
    // 0x121c00: 0xc047e72  jal         func_11F9C8
label_121c04:
    if (ctx->pc == 0x121C04u) {
        ctx->pc = 0x121C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C00u;
        // 0x121c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C08u;
        goto label_121c08;
    }
    ctx->pc = 0x121C00u;
    SET_GPR_U32(ctx, 31, 0x121C08u);
    ctx->pc = 0x121C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C00u;
    // 0x121c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121C00u, 0x121C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C08u;
label_121c08:
    // 0x121c08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121c0c:
    // 0x121c0c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_121c10:
    // 0x121c10: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x121c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_121c14:
    // 0x121c14: 0xa0f809  jalr        $a1
label_121c18:
    if (ctx->pc == 0x121C18u) {
        ctx->pc = 0x121C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C14u;
        // 0x121c18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C1Cu;
        goto label_121c1c;
    }
    ctx->pc = 0x121C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121C1Cu);
        ctx->pc = 0x121C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C14u;
        // 0x121c18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C14u, 0x121C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C1Cu;
label_121c1c:
    // 0x121c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121c20:
    // 0x121c20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x121c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121c24:
    // 0x121c24: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
label_121c28:
    if (ctx->pc == 0x121C28u) {
        ctx->pc = 0x121C2Cu;
        goto label_121c2c;
    }
    ctx->pc = 0x121C24u;
    {
        const bool branch_taken_0x121c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x121c24) {
            ctx->pc = 0x121C98u;
            goto label_121c98;
        }
    }
    ctx->pc = 0x121C2Cu;
label_121c2c:
    // 0x121c2c: 0xc047e72  jal         func_11F9C8
label_121c30:
    if (ctx->pc == 0x121C30u) {
        ctx->pc = 0x121C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C2Cu;
        // 0x121c30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C34u;
        goto label_121c34;
    }
    ctx->pc = 0x121C2Cu;
    SET_GPR_U32(ctx, 31, 0x121C34u);
    ctx->pc = 0x121C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C2Cu;
    // 0x121c30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121C2Cu, 0x121C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C34u;
label_121c34:
    // 0x121c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121c38:
    // 0x121c38: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_121c3c:
    // 0x121c3c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x121c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_121c40:
    // 0x121c40: 0xa0f809  jalr        $a1
label_121c44:
    if (ctx->pc == 0x121C44u) {
        ctx->pc = 0x121C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C40u;
        // 0x121c44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C48u;
        goto label_121c48;
    }
    ctx->pc = 0x121C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121C48u);
        ctx->pc = 0x121C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C40u;
        // 0x121c44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C40u, 0x121C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C48u;
label_121c48:
    // 0x121c48: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
label_121c4c:
    if (ctx->pc == 0x121C4Cu) {
        ctx->pc = 0x121C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C48u;
        // 0x121c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C50u;
        goto label_121c50;
    }
    ctx->pc = 0x121C48u;
    {
        const bool branch_taken_0x121c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x121C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C48u;
        // 0x121c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c48) {
            ctx->pc = 0x121C98u;
            goto label_121c98;
        }
    }
    ctx->pc = 0x121C50u;
label_121c50:
    // 0x121c50: 0xc047e78  jal         func_11F9E0
label_121c54:
    if (ctx->pc == 0x121C54u) {
        ctx->pc = 0x121C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C50u;
        // 0x121c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C58u;
        goto label_121c58;
    }
    ctx->pc = 0x121C50u;
    SET_GPR_U32(ctx, 31, 0x121C58u);
    ctx->pc = 0x121C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C50u;
    // 0x121c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x121C50u, 0x121C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C58u;
label_121c58:
    // 0x121c58: 0xc049f04  jal         func_127C10
label_121c5c:
    if (ctx->pc == 0x121C5Cu) {
        ctx->pc = 0x121C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C58u;
        // 0x121c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C60u;
        goto label_121c60;
    }
    ctx->pc = 0x121C58u;
    SET_GPR_U32(ctx, 31, 0x121C60u);
    ctx->pc = 0x121C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C58u;
    // 0x121c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x121C58u, 0x121C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C60u;
label_121c60:
    // 0x121c60: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_121c64:
    // 0x121c64: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x121c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_121c68:
    // 0x121c68: 0x8c82b198  lw          $v0, -0x4E68($a0)
    ctx->pc = 0x121c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947224)));
label_121c6c:
    // 0x121c6c: 0x8ca3b19c  lw          $v1, -0x4E64($a1)
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947228)));
label_121c70:
    // 0x121c70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x121c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_121c74:
    // 0x121c74: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_121c78:
    if (ctx->pc == 0x121C78u) {
        ctx->pc = 0x121C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C74u;
        // 0x121c78: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C7Cu;
        goto label_121c7c;
    }
    ctx->pc = 0x121C74u;
    {
        const bool branch_taken_0x121c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C74u;
        // 0x121c78: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c74) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121C7Cu;
label_121c7c:
    // 0x121c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121c80:
    // 0x121c80: 0xc047e78  jal         func_11F9E0
label_121c84:
    if (ctx->pc == 0x121C84u) {
        ctx->pc = 0x121C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C80u;
        // 0x121c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C88u;
        goto label_121c88;
    }
    ctx->pc = 0x121C80u;
    SET_GPR_U32(ctx, 31, 0x121C88u);
    ctx->pc = 0x121C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C80u;
    // 0x121c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x121C80u, 0x121C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C88u;
label_121c88:
    // 0x121c88: 0xc049f04  jal         func_127C10
label_121c8c:
    if (ctx->pc == 0x121C8Cu) {
        ctx->pc = 0x121C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C88u;
        // 0x121c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C90u;
        goto label_121c90;
    }
    ctx->pc = 0x121C88u;
    SET_GPR_U32(ctx, 31, 0x121C90u);
    ctx->pc = 0x121C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C88u;
    // 0x121c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x121C88u, 0x121C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C90u;
label_121c90:
    // 0x121c90: 0x1000005e  b           . + 4 + (0x5E << 2)
label_121c94:
    if (ctx->pc == 0x121C94u) {
        ctx->pc = 0x121C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C90u;
        // 0x121c94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C98u;
        goto label_121c98;
    }
    ctx->pc = 0x121C90u;
    {
        const bool branch_taken_0x121c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C90u;
        // 0x121c94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c90) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121C98u;
label_121c98:
    // 0x121c98: 0xc047e72  jal         func_11F9C8
label_121c9c:
    if (ctx->pc == 0x121C9Cu) {
        ctx->pc = 0x121C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C98u;
        // 0x121c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CA0u;
        goto label_121ca0;
    }
    ctx->pc = 0x121C98u;
    SET_GPR_U32(ctx, 31, 0x121CA0u);
    ctx->pc = 0x121C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C98u;
    // 0x121c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121C98u, 0x121CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CA0u;
label_121ca0:
    // 0x121ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121ca4:
    // 0x121ca4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x121ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_121ca8:
    // 0x121ca8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x121ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_121cac:
    // 0x121cac: 0xa0f809  jalr        $a1
label_121cb0:
    if (ctx->pc == 0x121CB0u) {
        ctx->pc = 0x121CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CACu;
        // 0x121cb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CB4u;
        goto label_121cb4;
    }
    ctx->pc = 0x121CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121CB4u);
        ctx->pc = 0x121CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CACu;
        // 0x121cb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CACu, 0x121CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121CB4u;
label_121cb4:
    // 0x121cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121cb8:
    // 0x121cb8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x121cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_121cbc:
    // 0x121cbc: 0x56020053  bnel        $s0, $v0, . + 4 + (0x53 << 2)
label_121cc0:
    if (ctx->pc == 0x121CC0u) {
        ctx->pc = 0x121CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CBCu;
        // 0x121cc0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CC4u;
        goto label_121cc4;
    }
    ctx->pc = 0x121CBCu;
    {
        const bool branch_taken_0x121cbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x121cbc) {
            ctx->pc = 0x121CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121CBCu;
            // 0x121cc0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121CC4u;
label_121cc4:
    // 0x121cc4: 0xc047e72  jal         func_11F9C8
label_121cc8:
    if (ctx->pc == 0x121CC8u) {
        ctx->pc = 0x121CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CC4u;
        // 0x121cc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CCCu;
        goto label_121ccc;
    }
    ctx->pc = 0x121CC4u;
    SET_GPR_U32(ctx, 31, 0x121CCCu);
    ctx->pc = 0x121CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CC4u;
    // 0x121cc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121CC4u, 0x121CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CCCu;
label_121ccc:
    // 0x121ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121cd0:
    // 0x121cd0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x121cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_121cd4:
    // 0x121cd4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x121cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_121cd8:
    // 0x121cd8: 0xa0f809  jalr        $a1
label_121cdc:
    if (ctx->pc == 0x121CDCu) {
        ctx->pc = 0x121CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CD8u;
        // 0x121cdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CE0u;
        goto label_121ce0;
    }
    ctx->pc = 0x121CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121CE0u);
        ctx->pc = 0x121CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CD8u;
        // 0x121cdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CD8u, 0x121CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121CE0u;
label_121ce0:
    // 0x121ce0: 0x1450004a  bne         $v0, $s0, . + 4 + (0x4A << 2)
label_121ce4:
    if (ctx->pc == 0x121CE4u) {
        ctx->pc = 0x121CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CE0u;
        // 0x121ce4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CE8u;
        goto label_121ce8;
    }
    ctx->pc = 0x121CE0u;
    {
        const bool branch_taken_0x121ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x121CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CE0u;
        // 0x121ce4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ce0) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121CE8u;
label_121ce8:
    // 0x121ce8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x121ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121cec:
    // 0x121cec: 0xc047eec  jal         func_11FBB0
label_121cf0:
    if (ctx->pc == 0x121CF0u) {
        ctx->pc = 0x121CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CECu;
        // 0x121cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CF4u;
        goto label_121cf4;
    }
    ctx->pc = 0x121CECu;
    SET_GPR_U32(ctx, 31, 0x121CF4u);
    ctx->pc = 0x121CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CECu;
    // 0x121cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x121CECu, 0x121CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CF4u;
label_121cf4:
    // 0x121cf4: 0xc04f39e  jal         func_13CE78
label_121cf8:
    if (ctx->pc == 0x121CF8u) {
        ctx->pc = 0x121CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CF4u;
        // 0x121cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CFCu;
        goto label_121cfc;
    }
    ctx->pc = 0x121CF4u;
    SET_GPR_U32(ctx, 31, 0x121CFCu);
    ctx->pc = 0x121CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CF4u;
    // 0x121cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CE78u, 0x121CF4u, 0x121CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CFCu;
label_121cfc:
    // 0x121cfc: 0x10000043  b           . + 4 + (0x43 << 2)
label_121d00:
    if (ctx->pc == 0x121D00u) {
        ctx->pc = 0x121D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CFCu;
        // 0x121d00: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D04u;
        goto label_121d04;
    }
    ctx->pc = 0x121CFCu;
    {
        const bool branch_taken_0x121cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CFCu;
        // 0x121d00: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cfc) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121D04u;
label_121d04:
    // 0x121d04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x121d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_121d08:
    // 0x121d08: 0x8c44b198  lw          $a0, -0x4E68($v0)
    ctx->pc = 0x121d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_121d0c:
    // 0x121d0c: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x121d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_121d10:
    // 0x121d10: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_121d14:
    if (ctx->pc == 0x121D14u) {
        ctx->pc = 0x121D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D10u;
        // 0x121d14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D18u;
        goto label_121d18;
    }
    ctx->pc = 0x121D10u;
    {
        const bool branch_taken_0x121d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x121D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D10u;
        // 0x121d14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d10) {
            ctx->pc = 0x121D24u;
            goto label_121d24;
        }
    }
    ctx->pc = 0x121D18u;
label_121d18:
    // 0x121d18: 0xc047e6c  jal         func_11F9B0
label_121d1c:
    if (ctx->pc == 0x121D1Cu) {
        ctx->pc = 0x121D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D18u;
        // 0x121d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D20u;
        goto label_121d20;
    }
    ctx->pc = 0x121D18u;
    SET_GPR_U32(ctx, 31, 0x121D20u);
    ctx->pc = 0x121D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D18u;
    // 0x121d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x121D18u, 0x121D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D20u;
label_121d20:
    // 0x121d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121d24:
    // 0x121d24: 0xc048bb4  jal         func_122ED0
label_121d28:
    if (ctx->pc == 0x121D28u) {
        ctx->pc = 0x121D2Cu;
        goto label_121d2c;
    }
    ctx->pc = 0x121D24u;
    SET_GPR_U32(ctx, 31, 0x121D2Cu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x121D24u, 0x121D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D2Cu;
label_121d2c:
    // 0x121d2c: 0xc047e6c  jal         func_11F9B0
label_121d30:
    if (ctx->pc == 0x121D30u) {
        ctx->pc = 0x121D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D2Cu;
        // 0x121d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D34u;
        goto label_121d34;
    }
    ctx->pc = 0x121D2Cu;
    SET_GPR_U32(ctx, 31, 0x121D34u);
    ctx->pc = 0x121D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D2Cu;
    // 0x121d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x121D2Cu, 0x121D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D34u;
label_121d34:
    // 0x121d34: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
label_121d38:
    if (ctx->pc == 0x121D38u) {
        ctx->pc = 0x121D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D34u;
        // 0x121d38: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D3Cu;
        goto label_121d3c;
    }
    ctx->pc = 0x121D34u;
    {
        const bool branch_taken_0x121d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x121D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D34u;
        // 0x121d38: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d34) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121D3Cu;
label_121d3c:
    // 0x121d3c: 0xc047e6c  jal         func_11F9B0
label_121d40:
    if (ctx->pc == 0x121D40u) {
        ctx->pc = 0x121D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D3Cu;
        // 0x121d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D44u;
        goto label_121d44;
    }
    ctx->pc = 0x121D3Cu;
    SET_GPR_U32(ctx, 31, 0x121D44u);
    ctx->pc = 0x121D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D3Cu;
    // 0x121d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x121D3Cu, 0x121D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D44u;
label_121d44:
    // 0x121d44: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_121d48:
    if (ctx->pc == 0x121D48u) {
        ctx->pc = 0x121D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D44u;
        // 0x121d48: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D4Cu;
        goto label_121d4c;
    }
    ctx->pc = 0x121D44u;
    {
        const bool branch_taken_0x121d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D44u;
        // 0x121d48: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d44) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121D4Cu;
label_121d4c:
    // 0x121d4c: 0xc047e6c  jal         func_11F9B0
label_121d50:
    if (ctx->pc == 0x121D50u) {
        ctx->pc = 0x121D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D4Cu;
        // 0x121d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D54u;
        goto label_121d54;
    }
    ctx->pc = 0x121D4Cu;
    SET_GPR_U32(ctx, 31, 0x121D54u);
    ctx->pc = 0x121D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D4Cu;
    // 0x121d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x121D4Cu, 0x121D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D54u;
label_121d54:
    // 0x121d54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121d58:
    // 0x121d58: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x121d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_121d5c:
    // 0x121d5c: 0x8c650144  lw          $a1, 0x144($v1)
    ctx->pc = 0x121d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_121d60:
    // 0x121d60: 0xa0f809  jalr        $a1
label_121d64:
    if (ctx->pc == 0x121D64u) {
        ctx->pc = 0x121D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D60u;
        // 0x121d64: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D68u;
        goto label_121d68;
    }
    ctx->pc = 0x121D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x121D68u);
        ctx->pc = 0x121D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D60u;
        // 0x121d64: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D60u, 0x121D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121D68u;
label_121d68:
    // 0x121d68: 0x10000028  b           . + 4 + (0x28 << 2)
label_121d6c:
    if (ctx->pc == 0x121D6Cu) {
        ctx->pc = 0x121D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D68u;
        // 0x121d6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D70u;
        goto label_121d70;
    }
    ctx->pc = 0x121D68u;
    {
        const bool branch_taken_0x121d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D68u;
        // 0x121d6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d68) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121D70u;
label_121d70:
    // 0x121d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121d74:
    // 0x121d74: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x121d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_121d78:
    // 0x121d78: 0x16530003  bne         $s2, $s3, . + 4 + (0x3 << 2)
label_121d7c:
    if (ctx->pc == 0x121D7Cu) {
        ctx->pc = 0x121D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D78u;
        // 0x121d7c: 0xae82b1e8  sw          $v0, -0x4E18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D80u;
        goto label_121d80;
    }
    ctx->pc = 0x121D78u;
    {
        const bool branch_taken_0x121d78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x121D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D78u;
        // 0x121d7c: 0xae82b1e8  sw          $v0, -0x4E18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d78) {
            ctx->pc = 0x121D88u;
            goto label_121d88;
        }
    }
    ctx->pc = 0x121D80u;
label_121d80:
    // 0x121d80: 0x12b10022  beq         $s5, $s1, . + 4 + (0x22 << 2)
label_121d84:
    if (ctx->pc == 0x121D84u) {
        ctx->pc = 0x121D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D80u;
        // 0x121d84: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D88u;
        goto label_121d88;
    }
    ctx->pc = 0x121D80u;
    {
        const bool branch_taken_0x121d80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x121D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D80u;
        // 0x121d84: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d80) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121D88u;
label_121d88:
    // 0x121d88: 0xc048bb4  jal         func_122ED0
label_121d8c:
    if (ctx->pc == 0x121D8Cu) {
        ctx->pc = 0x121D90u;
        goto label_121d90;
    }
    ctx->pc = 0x121D88u;
    SET_GPR_U32(ctx, 31, 0x121D90u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x121D88u, 0x121D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D90u;
label_121d90:
    // 0x121d90: 0x1000001e  b           . + 4 + (0x1E << 2)
label_121d94:
    if (ctx->pc == 0x121D94u) {
        ctx->pc = 0x121D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D90u;
        // 0x121d94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D98u;
        goto label_121d98;
    }
    ctx->pc = 0x121D90u;
    {
        const bool branch_taken_0x121d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D90u;
        // 0x121d94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d90) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121D98u;
label_121d98:
    // 0x121d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121d9c:
    // 0x121d9c: 0x24a2b1e8  addiu       $v0, $a1, -0x4E18
    ctx->pc = 0x121d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947304));
label_121da0:
    // 0x121da0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x121da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_121da4:
    // 0x121da4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x121da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_121da8:
    // 0x121da8: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x121da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
label_121dac:
    // 0x121dac: 0xaca3b1e8  sw          $v1, -0x4E18($a1)
    ctx->pc = 0x121dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294947304), GPR_U32(ctx, 3));
label_121db0:
    // 0x121db0: 0xc136b7c  jal         func_4DADF0
label_121db4:
    if (ctx->pc == 0x121DB4u) {
        ctx->pc = 0x121DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DB0u;
        // 0x121db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DB8u;
        goto label_121db8;
    }
    ctx->pc = 0x121DB0u;
    SET_GPR_U32(ctx, 31, 0x121DB8u);
    ctx->pc = 0x121DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DB0u;
    // 0x121db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x121DB0u, 0x121DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB8u;
label_121db8:
    // 0x121db8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121dbc:
    // 0x121dbc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x121dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_121dc0:
    // 0x121dc0: 0xc0e409a  jal         func_390268
label_121dc4:
    if (ctx->pc == 0x121DC4u) {
        ctx->pc = 0x121DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DC0u;
        // 0x121dc4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DC8u;
        goto label_121dc8;
    }
    ctx->pc = 0x121DC0u;
    SET_GPR_U32(ctx, 31, 0x121DC8u);
    ctx->pc = 0x121DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DC0u;
    // 0x121dc4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x121DC0u, 0x121DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DC8u;
label_121dc8:
    // 0x121dc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121dcc:
    // 0x121dcc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_121dd0:
    if (ctx->pc == 0x121DD0u) {
        ctx->pc = 0x121DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DCCu;
        // 0x121dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DD4u;
        goto label_121dd4;
    }
    ctx->pc = 0x121DCCu;
    {
        const bool branch_taken_0x121dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DCCu;
        // 0x121dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121dcc) {
            ctx->pc = 0x121DDCu;
            goto label_121ddc;
        }
    }
    ctx->pc = 0x121DD4u;
label_121dd4:
    // 0x121dd4: 0xc048d40  jal         func_123500
label_121dd8:
    if (ctx->pc == 0x121DD8u) {
        ctx->pc = 0x121DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DD4u;
        // 0x121dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DDCu;
        goto label_121ddc;
    }
    ctx->pc = 0x121DD4u;
    SET_GPR_U32(ctx, 31, 0x121DDCu);
    ctx->pc = 0x121DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DD4u;
    // 0x121dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x121DD4u, 0x121DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DDCu;
label_121ddc:
    // 0x121ddc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_121de0:
    if (ctx->pc == 0x121DE0u) {
        ctx->pc = 0x121DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DDCu;
        // 0x121de0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DE4u;
        goto label_121de4;
    }
    ctx->pc = 0x121DDCu;
    {
        const bool branch_taken_0x121ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DDCu;
        // 0x121de0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ddc) {
            ctx->pc = 0x121E08u;
            goto label_121e08;
        }
    }
    ctx->pc = 0x121DE4u;
label_121de4:
    // 0x121de4: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x121de4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_121de8:
    // 0x121de8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_121dec:
    if (ctx->pc == 0x121DECu) {
        ctx->pc = 0x121DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DE8u;
        // 0x121dec: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DF0u;
        goto label_121df0;
    }
    ctx->pc = 0x121DE8u;
    {
        const bool branch_taken_0x121de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x121DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DE8u;
        // 0x121dec: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121de8) {
            ctx->pc = 0x121E08u;
            goto label_121e08;
        }
    }
    ctx->pc = 0x121DF0u;
label_121df0:
    // 0x121df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x121df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121df4:
    // 0x121df4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x121df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_121df8:
    // 0x121df8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x121df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_121dfc:
    // 0x121dfc: 0x40f809  jalr        $v0
label_121e00:
    if (ctx->pc == 0x121E00u) {
        ctx->pc = 0x121E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DFCu;
        // 0x121e00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E04u;
        goto label_121e04;
    }
    ctx->pc = 0x121DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121E04u);
        ctx->pc = 0x121E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DFCu;
        // 0x121e00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121DFCu, 0x121E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E04u;
label_121e04:
    // 0x121e04: 0xae0291b8  sw          $v0, -0x6E48($s0)
    ctx->pc = 0x121e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939064), GPR_U32(ctx, 2));
label_121e08:
    // 0x121e08: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x121e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_121e0c:
    // 0x121e0c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x121e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_121e10:
    // 0x121e10: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x121e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_121e14:
    // 0x121e14: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x121e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_121e18:
    // 0x121e18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x121e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121e1c:
    // 0x121e1c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x121e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121e20:
    // 0x121e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_121e24:
    // 0x121e24: 0x3e00008  jr          $ra
label_121e28:
    if (ctx->pc == 0x121E28u) {
        ctx->pc = 0x121E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E24u;
        // 0x121e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E2Cu;
        goto label_121e2c;
    }
    ctx->pc = 0x121E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E24u;
        // 0x121e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121E2Cu;
label_121e2c:
    // 0x121e2c: 0x0  nop
    ctx->pc = 0x121e2cu;
    // NOP
    ctx->pc = 0x121e30u;
}
