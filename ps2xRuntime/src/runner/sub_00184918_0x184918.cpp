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

// Function: sub_00184918
// Address: 0x184918 - 0x184eb0
void sub_00184918_0x184918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184918_0x184918");
#endif

    switch (ctx->pc) {
        case 0x184918u: goto label_184918;
        case 0x18491cu: goto label_18491c;
        case 0x184920u: goto label_184920;
        case 0x184924u: goto label_184924;
        case 0x184928u: goto label_184928;
        case 0x18492cu: goto label_18492c;
        case 0x184930u: goto label_184930;
        case 0x184934u: goto label_184934;
        case 0x184938u: goto label_184938;
        case 0x18493cu: goto label_18493c;
        case 0x184940u: goto label_184940;
        case 0x184944u: goto label_184944;
        case 0x184948u: goto label_184948;
        case 0x18494cu: goto label_18494c;
        case 0x184950u: goto label_184950;
        case 0x184954u: goto label_184954;
        case 0x184958u: goto label_184958;
        case 0x18495cu: goto label_18495c;
        case 0x184960u: goto label_184960;
        case 0x184964u: goto label_184964;
        case 0x184968u: goto label_184968;
        case 0x18496cu: goto label_18496c;
        case 0x184970u: goto label_184970;
        case 0x184974u: goto label_184974;
        case 0x184978u: goto label_184978;
        case 0x18497cu: goto label_18497c;
        case 0x184980u: goto label_184980;
        case 0x184984u: goto label_184984;
        case 0x184988u: goto label_184988;
        case 0x18498cu: goto label_18498c;
        case 0x184990u: goto label_184990;
        case 0x184994u: goto label_184994;
        case 0x184998u: goto label_184998;
        case 0x18499cu: goto label_18499c;
        case 0x1849a0u: goto label_1849a0;
        case 0x1849a4u: goto label_1849a4;
        case 0x1849a8u: goto label_1849a8;
        case 0x1849acu: goto label_1849ac;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849b4u: goto label_1849b4;
        case 0x1849b8u: goto label_1849b8;
        case 0x1849bcu: goto label_1849bc;
        case 0x1849c0u: goto label_1849c0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849c8u: goto label_1849c8;
        case 0x1849ccu: goto label_1849cc;
        case 0x1849d0u: goto label_1849d0;
        case 0x1849d4u: goto label_1849d4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849dcu: goto label_1849dc;
        case 0x1849e0u: goto label_1849e0;
        case 0x1849e4u: goto label_1849e4;
        case 0x1849e8u: goto label_1849e8;
        case 0x1849ecu: goto label_1849ec;
        case 0x1849f0u: goto label_1849f0;
        case 0x1849f4u: goto label_1849f4;
        case 0x1849f8u: goto label_1849f8;
        case 0x1849fcu: goto label_1849fc;
        case 0x184a00u: goto label_184a00;
        case 0x184a04u: goto label_184a04;
        case 0x184a08u: goto label_184a08;
        case 0x184a0cu: goto label_184a0c;
        case 0x184a10u: goto label_184a10;
        case 0x184a14u: goto label_184a14;
        case 0x184a18u: goto label_184a18;
        case 0x184a1cu: goto label_184a1c;
        case 0x184a20u: goto label_184a20;
        case 0x184a24u: goto label_184a24;
        case 0x184a28u: goto label_184a28;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a30u: goto label_184a30;
        case 0x184a34u: goto label_184a34;
        case 0x184a38u: goto label_184a38;
        case 0x184a3cu: goto label_184a3c;
        case 0x184a40u: goto label_184a40;
        case 0x184a44u: goto label_184a44;
        case 0x184a48u: goto label_184a48;
        case 0x184a4cu: goto label_184a4c;
        case 0x184a50u: goto label_184a50;
        case 0x184a54u: goto label_184a54;
        case 0x184a58u: goto label_184a58;
        case 0x184a5cu: goto label_184a5c;
        case 0x184a60u: goto label_184a60;
        case 0x184a64u: goto label_184a64;
        case 0x184a68u: goto label_184a68;
        case 0x184a6cu: goto label_184a6c;
        case 0x184a70u: goto label_184a70;
        case 0x184a74u: goto label_184a74;
        case 0x184a78u: goto label_184a78;
        case 0x184a7cu: goto label_184a7c;
        case 0x184a80u: goto label_184a80;
        case 0x184a84u: goto label_184a84;
        case 0x184a88u: goto label_184a88;
        case 0x184a8cu: goto label_184a8c;
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        case 0x184b60u: goto label_184b60;
        case 0x184b64u: goto label_184b64;
        case 0x184b68u: goto label_184b68;
        case 0x184b6cu: goto label_184b6c;
        case 0x184b70u: goto label_184b70;
        case 0x184b74u: goto label_184b74;
        case 0x184b78u: goto label_184b78;
        case 0x184b7cu: goto label_184b7c;
        case 0x184b80u: goto label_184b80;
        case 0x184b84u: goto label_184b84;
        case 0x184b88u: goto label_184b88;
        case 0x184b8cu: goto label_184b8c;
        case 0x184b90u: goto label_184b90;
        case 0x184b94u: goto label_184b94;
        case 0x184b98u: goto label_184b98;
        case 0x184b9cu: goto label_184b9c;
        case 0x184ba0u: goto label_184ba0;
        case 0x184ba4u: goto label_184ba4;
        case 0x184ba8u: goto label_184ba8;
        case 0x184bacu: goto label_184bac;
        case 0x184bb0u: goto label_184bb0;
        case 0x184bb4u: goto label_184bb4;
        case 0x184bb8u: goto label_184bb8;
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc0u: goto label_184bc0;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bccu: goto label_184bcc;
        case 0x184bd0u: goto label_184bd0;
        case 0x184bd4u: goto label_184bd4;
        case 0x184bd8u: goto label_184bd8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184be0u: goto label_184be0;
        case 0x184be4u: goto label_184be4;
        case 0x184be8u: goto label_184be8;
        case 0x184becu: goto label_184bec;
        case 0x184bf0u: goto label_184bf0;
        case 0x184bf4u: goto label_184bf4;
        case 0x184bf8u: goto label_184bf8;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c00u: goto label_184c00;
        case 0x184c04u: goto label_184c04;
        case 0x184c08u: goto label_184c08;
        case 0x184c0cu: goto label_184c0c;
        case 0x184c10u: goto label_184c10;
        case 0x184c14u: goto label_184c14;
        case 0x184c18u: goto label_184c18;
        case 0x184c1cu: goto label_184c1c;
        case 0x184c20u: goto label_184c20;
        case 0x184c24u: goto label_184c24;
        case 0x184c28u: goto label_184c28;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c30u: goto label_184c30;
        case 0x184c34u: goto label_184c34;
        case 0x184c38u: goto label_184c38;
        case 0x184c3cu: goto label_184c3c;
        case 0x184c40u: goto label_184c40;
        case 0x184c44u: goto label_184c44;
        case 0x184c48u: goto label_184c48;
        case 0x184c4cu: goto label_184c4c;
        case 0x184c50u: goto label_184c50;
        case 0x184c54u: goto label_184c54;
        case 0x184c58u: goto label_184c58;
        case 0x184c5cu: goto label_184c5c;
        case 0x184c60u: goto label_184c60;
        case 0x184c64u: goto label_184c64;
        case 0x184c68u: goto label_184c68;
        case 0x184c6cu: goto label_184c6c;
        case 0x184c70u: goto label_184c70;
        case 0x184c74u: goto label_184c74;
        case 0x184c78u: goto label_184c78;
        case 0x184c7cu: goto label_184c7c;
        case 0x184c80u: goto label_184c80;
        case 0x184c84u: goto label_184c84;
        case 0x184c88u: goto label_184c88;
        case 0x184c8cu: goto label_184c8c;
        case 0x184c90u: goto label_184c90;
        case 0x184c94u: goto label_184c94;
        case 0x184c98u: goto label_184c98;
        case 0x184c9cu: goto label_184c9c;
        case 0x184ca0u: goto label_184ca0;
        case 0x184ca4u: goto label_184ca4;
        case 0x184ca8u: goto label_184ca8;
        case 0x184cacu: goto label_184cac;
        case 0x184cb0u: goto label_184cb0;
        case 0x184cb4u: goto label_184cb4;
        case 0x184cb8u: goto label_184cb8;
        case 0x184cbcu: goto label_184cbc;
        case 0x184cc0u: goto label_184cc0;
        case 0x184cc4u: goto label_184cc4;
        case 0x184cc8u: goto label_184cc8;
        case 0x184cccu: goto label_184ccc;
        case 0x184cd0u: goto label_184cd0;
        case 0x184cd4u: goto label_184cd4;
        case 0x184cd8u: goto label_184cd8;
        case 0x184cdcu: goto label_184cdc;
        case 0x184ce0u: goto label_184ce0;
        case 0x184ce4u: goto label_184ce4;
        case 0x184ce8u: goto label_184ce8;
        case 0x184cecu: goto label_184cec;
        case 0x184cf0u: goto label_184cf0;
        case 0x184cf4u: goto label_184cf4;
        case 0x184cf8u: goto label_184cf8;
        case 0x184cfcu: goto label_184cfc;
        case 0x184d00u: goto label_184d00;
        case 0x184d04u: goto label_184d04;
        case 0x184d08u: goto label_184d08;
        case 0x184d0cu: goto label_184d0c;
        case 0x184d10u: goto label_184d10;
        case 0x184d14u: goto label_184d14;
        case 0x184d18u: goto label_184d18;
        case 0x184d1cu: goto label_184d1c;
        case 0x184d20u: goto label_184d20;
        case 0x184d24u: goto label_184d24;
        case 0x184d28u: goto label_184d28;
        case 0x184d2cu: goto label_184d2c;
        case 0x184d30u: goto label_184d30;
        case 0x184d34u: goto label_184d34;
        case 0x184d38u: goto label_184d38;
        case 0x184d3cu: goto label_184d3c;
        case 0x184d40u: goto label_184d40;
        case 0x184d44u: goto label_184d44;
        case 0x184d48u: goto label_184d48;
        case 0x184d4cu: goto label_184d4c;
        case 0x184d50u: goto label_184d50;
        case 0x184d54u: goto label_184d54;
        case 0x184d58u: goto label_184d58;
        case 0x184d5cu: goto label_184d5c;
        case 0x184d60u: goto label_184d60;
        case 0x184d64u: goto label_184d64;
        case 0x184d68u: goto label_184d68;
        case 0x184d6cu: goto label_184d6c;
        case 0x184d70u: goto label_184d70;
        case 0x184d74u: goto label_184d74;
        case 0x184d78u: goto label_184d78;
        case 0x184d7cu: goto label_184d7c;
        case 0x184d80u: goto label_184d80;
        case 0x184d84u: goto label_184d84;
        case 0x184d88u: goto label_184d88;
        case 0x184d8cu: goto label_184d8c;
        case 0x184d90u: goto label_184d90;
        case 0x184d94u: goto label_184d94;
        case 0x184d98u: goto label_184d98;
        case 0x184d9cu: goto label_184d9c;
        case 0x184da0u: goto label_184da0;
        case 0x184da4u: goto label_184da4;
        case 0x184da8u: goto label_184da8;
        case 0x184dacu: goto label_184dac;
        case 0x184db0u: goto label_184db0;
        case 0x184db4u: goto label_184db4;
        case 0x184db8u: goto label_184db8;
        case 0x184dbcu: goto label_184dbc;
        case 0x184dc0u: goto label_184dc0;
        case 0x184dc4u: goto label_184dc4;
        case 0x184dc8u: goto label_184dc8;
        case 0x184dccu: goto label_184dcc;
        case 0x184dd0u: goto label_184dd0;
        case 0x184dd4u: goto label_184dd4;
        case 0x184dd8u: goto label_184dd8;
        case 0x184ddcu: goto label_184ddc;
        case 0x184de0u: goto label_184de0;
        case 0x184de4u: goto label_184de4;
        case 0x184de8u: goto label_184de8;
        case 0x184decu: goto label_184dec;
        case 0x184df0u: goto label_184df0;
        case 0x184df4u: goto label_184df4;
        case 0x184df8u: goto label_184df8;
        case 0x184dfcu: goto label_184dfc;
        case 0x184e00u: goto label_184e00;
        case 0x184e04u: goto label_184e04;
        case 0x184e08u: goto label_184e08;
        case 0x184e0cu: goto label_184e0c;
        case 0x184e10u: goto label_184e10;
        case 0x184e14u: goto label_184e14;
        case 0x184e18u: goto label_184e18;
        case 0x184e1cu: goto label_184e1c;
        case 0x184e20u: goto label_184e20;
        case 0x184e24u: goto label_184e24;
        case 0x184e28u: goto label_184e28;
        case 0x184e2cu: goto label_184e2c;
        case 0x184e30u: goto label_184e30;
        case 0x184e34u: goto label_184e34;
        case 0x184e38u: goto label_184e38;
        case 0x184e3cu: goto label_184e3c;
        case 0x184e40u: goto label_184e40;
        case 0x184e44u: goto label_184e44;
        case 0x184e48u: goto label_184e48;
        case 0x184e4cu: goto label_184e4c;
        case 0x184e50u: goto label_184e50;
        case 0x184e54u: goto label_184e54;
        case 0x184e58u: goto label_184e58;
        case 0x184e5cu: goto label_184e5c;
        case 0x184e60u: goto label_184e60;
        case 0x184e64u: goto label_184e64;
        case 0x184e68u: goto label_184e68;
        case 0x184e6cu: goto label_184e6c;
        case 0x184e70u: goto label_184e70;
        case 0x184e74u: goto label_184e74;
        case 0x184e78u: goto label_184e78;
        case 0x184e7cu: goto label_184e7c;
        case 0x184e80u: goto label_184e80;
        case 0x184e84u: goto label_184e84;
        case 0x184e88u: goto label_184e88;
        case 0x184e8cu: goto label_184e8c;
        case 0x184e90u: goto label_184e90;
        case 0x184e94u: goto label_184e94;
        case 0x184e98u: goto label_184e98;
        case 0x184e9cu: goto label_184e9c;
        case 0x184ea0u: goto label_184ea0;
        case 0x184ea4u: goto label_184ea4;
        case 0x184ea8u: goto label_184ea8;
        case 0x184eacu: goto label_184eac;
        default: break;
    }

    ctx->pc = 0x184918u;

label_184918:
    // 0x184918: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x184918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_18491c:
    // 0x18491c: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x18491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
label_184920:
    // 0x184920: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_184924:
    // 0x184924: 0x7fb70270  sq          $s7, 0x270($sp)
    ctx->pc = 0x184924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 23));
label_184928:
    // 0x184928: 0x7fb102d0  sq          $s1, 0x2D0($sp)
    ctx->pc = 0x184928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 17));
label_18492c:
    // 0x18492c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x18492cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_184930:
    // 0x184930: 0x7fb202c0  sq          $s2, 0x2C0($sp)
    ctx->pc = 0x184930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 18));
label_184934:
    // 0x184934: 0x7fb302b0  sq          $s3, 0x2B0($sp)
    ctx->pc = 0x184934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 19));
label_184938:
    // 0x184938: 0x7fb402a0  sq          $s4, 0x2A0($sp)
    ctx->pc = 0x184938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 20));
label_18493c:
    // 0x18493c: 0x7fb50290  sq          $s5, 0x290($sp)
    ctx->pc = 0x18493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 21));
label_184940:
    // 0x184940: 0x7fb60280  sq          $s6, 0x280($sp)
    ctx->pc = 0x184940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 22));
label_184944:
    // 0x184944: 0x7fbe0260  sq          $fp, 0x260($sp)
    ctx->pc = 0x184944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 30));
label_184948:
    // 0x184948: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x184948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_18494c:
    // 0x18494c: 0xe7b502f8  swc1        $f21, 0x2F8($sp)
    ctx->pc = 0x18494cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_184950:
    // 0x184950: 0xe7b402f0  swc1        $f20, 0x2F0($sp)
    ctx->pc = 0x184950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_184954:
    // 0x184954: 0x8e0427e4  lw          $a0, 0x27E4($s0)
    ctx->pc = 0x184954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_184958:
    // 0x184958: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18495c:
    // 0x18495c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x18495cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_184960:
    // 0x184960: 0x844300b8  lh          $v1, 0xB8($v0)
    ctx->pc = 0x184960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_184964:
    // 0x184964: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x184964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_184968:
    // 0x184968: 0xc0f809  jalr        $a2
label_18496c:
    if (ctx->pc == 0x18496Cu) {
        ctx->pc = 0x18496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184968u;
        // 0x18496c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184970u;
        goto label_184970;
    }
    ctx->pc = 0x184968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x184970u);
        ctx->pc = 0x18496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184968u;
        // 0x18496c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184968u, 0x184970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184970u;
label_184970:
    // 0x184970: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x184970u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_184974:
    // 0x184974: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_184978:
    // 0x184978: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x184978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18497c:
    // 0x18497c: 0x24a52b18  addiu       $a1, $a1, 0x2B18
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11032));
label_184980:
    // 0x184980: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x184980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_184984:
    // 0x184984: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x184984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_184988:
    // 0x184988: 0x3406904c  ori         $a2, $zero, 0x904C
    ctx->pc = 0x184988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36940);
label_18498c:
    // 0x18498c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18498cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_184990:
    // 0x184990: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_184994:
    // 0x184994: 0x240900ad  addiu       $t1, $zero, 0xAD
    ctx->pc = 0x184994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_184998:
    // 0x184998: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x184998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18499c:
    // 0x18499c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18499cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1849a0:
    // 0x1849a0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1849a4:
    // 0x1849a4: 0x40f809  jalr        $v0
label_1849a8:
    if (ctx->pc == 0x1849A8u) {
        ctx->pc = 0x1849A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849A4u;
        // 0x1849a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849ACu;
        goto label_1849ac;
    }
    ctx->pc = 0x1849A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1849ACu);
        ctx->pc = 0x1849A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849A4u;
        // 0x1849a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1849A4u, 0x1849ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1849ACu;
label_1849ac:
    // 0x1849ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1849b0:
    if (ctx->pc == 0x1849B0u) {
        ctx->pc = 0x1849B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849ACu;
        // 0x1849b0: 0x8e0427e4  lw          $a0, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849B4u;
        goto label_1849b4;
    }
    ctx->pc = 0x1849ACu;
    {
        const bool branch_taken_0x1849ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849ac) {
            ctx->pc = 0x1849B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1849ACu;
            // 0x1849b0: 0x8e0427e4  lw          $a0, 0x27E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1849C0u;
            goto label_1849c0;
        }
    }
    ctx->pc = 0x1849B4u;
label_1849b4:
    // 0x1849b4: 0xc0614b6  jal         func_1852D8
label_1849b8:
    if (ctx->pc == 0x1849B8u) {
        ctx->pc = 0x1849B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849B4u;
        // 0x1849b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849BCu;
        goto label_1849bc;
    }
    ctx->pc = 0x1849B4u;
    SET_GPR_U32(ctx, 31, 0x1849BCu);
    ctx->pc = 0x1849B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849B4u;
    // 0x1849b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1852D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1852D8u, 0x1849B4u, 0x1849BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849BCu;
label_1849bc:
    // 0x1849bc: 0x8e0427e4  lw          $a0, 0x27E4($s0)
    ctx->pc = 0x1849bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1849c0:
    // 0x1849c0: 0xaee2cd4c  sw          $v0, -0x32B4($s7)
    ctx->pc = 0x1849c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294954316), GPR_U32(ctx, 2));
label_1849c4:
    // 0x1849c4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1849c8:
    // 0x1849c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1849cc:
    // 0x1849cc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1849ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1849d0:
    // 0x1849d0: 0x844300c0  lh          $v1, 0xC0($v0)
    ctx->pc = 0x1849d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1849d4:
    // 0x1849d4: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x1849d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1849d8:
    // 0x1849d8: 0xc0f809  jalr        $a2
label_1849dc:
    if (ctx->pc == 0x1849DCu) {
        ctx->pc = 0x1849DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849D8u;
        // 0x1849dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849E0u;
        goto label_1849e0;
    }
    ctx->pc = 0x1849D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1849E0u);
        ctx->pc = 0x1849DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849D8u;
        // 0x1849dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1849D8u, 0x1849E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1849E0u;
label_1849e0:
    // 0x1849e0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1849e4:
    // 0x1849e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1849e8:
    // 0x1849e8: 0x24c62b58  addiu       $a2, $a2, 0x2B58
    ctx->pc = 0x1849e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11096));
label_1849ec:
    // 0x1849ec: 0xc10ca04  jal         func_432810
label_1849f0:
    if (ctx->pc == 0x1849F0u) {
        ctx->pc = 0x1849F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849ECu;
        // 0x1849f0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849F4u;
        goto label_1849f4;
    }
    ctx->pc = 0x1849ECu;
    SET_GPR_U32(ctx, 31, 0x1849F4u);
    ctx->pc = 0x1849F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849ECu;
    // 0x1849f0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1849ECu, 0x1849F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849F4u;
label_1849f4:
    // 0x1849f4: 0x8e04b788  lw          $a0, -0x4878($s0)
    ctx->pc = 0x1849f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_1849f8:
    // 0x1849f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1849f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1849fc:
    // 0x1849fc: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x1849fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_184a00:
    // 0x184a00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_184a04:
    // 0x184a04: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x184a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_184a08:
    // 0x184a08: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x184a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_184a0c:
    // 0x184a0c: 0x40f809  jalr        $v0
label_184a10:
    if (ctx->pc == 0x184A10u) {
        ctx->pc = 0x184A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A0Cu;
        // 0x184a10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A14u;
        goto label_184a14;
    }
    ctx->pc = 0x184A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184A14u);
        ctx->pc = 0x184A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A0Cu;
        // 0x184a10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A0Cu, 0x184A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184A14u;
label_184a14:
    // 0x184a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_184a18:
    if (ctx->pc == 0x184A18u) {
        ctx->pc = 0x184A1Cu;
        goto label_184a1c;
    }
    ctx->pc = 0x184A14u;
    {
        const bool branch_taken_0x184a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a14) {
            ctx->pc = 0x184A2Cu;
            goto label_184a2c;
        }
    }
    ctx->pc = 0x184A1Cu;
label_184a1c:
    // 0x184a1c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184a20:
    // 0x184a20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_184a24:
    // 0x184a24: 0xc061f0e  jal         func_187C38
label_184a28:
    if (ctx->pc == 0x184A28u) {
        ctx->pc = 0x184A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A24u;
        // 0x184a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A2Cu;
        goto label_184a2c;
    }
    ctx->pc = 0x184A24u;
    SET_GPR_U32(ctx, 31, 0x184A2Cu);
    ctx->pc = 0x184A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A24u;
    // 0x184a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187C38u, 0x184A24u, 0x184A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A2Cu;
label_184a2c:
    // 0x184a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_184a30:
    // 0x184a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184a34:
    // 0x184a34: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x184a34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_184a38:
    // 0x184a38: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x184a38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_184a3c:
    // 0x184a3c: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x184a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_184a40:
    // 0x184a40: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x184a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_184a44:
    // 0x184a44: 0x263191e0  addiu       $s1, $s1, -0x6E20
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939104));
label_184a48:
    // 0x184a48: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x184a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_184a4c:
    // 0x184a4c: 0x26942b68  addiu       $s4, $s4, 0x2B68
    ctx->pc = 0x184a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 11112));
label_184a50:
    // 0x184a50: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x184a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_184a54:
    // 0x184a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184a58:
    // 0x184a58: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x184a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_184a5c:
    // 0x184a5c: 0xc050fda  jal         func_143F68
label_184a60:
    if (ctx->pc == 0x184A60u) {
        ctx->pc = 0x184A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A5Cu;
        // 0x184a60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A64u;
        goto label_184a64;
    }
    ctx->pc = 0x184A5Cu;
    SET_GPR_U32(ctx, 31, 0x184A64u);
    ctx->pc = 0x184A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A5Cu;
    // 0x184a60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184A5Cu, 0x184A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A64u;
label_184a64:
    // 0x184a64: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x184a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_184a68:
    // 0x184a68: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_184a6c:
    // 0x184a6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_184a70:
    // 0x184a70: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_184a74:
    // 0x184a74: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184a78:
    // 0x184a78: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184a7c:
    // 0x184a7c: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184a7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184a80:
    // 0x184a80: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x184a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_184a84:
    // 0x184a84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184a88:
    // 0x184a88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184a8c:
    // 0x184a8c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x184a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184a90:
    // 0x184a90: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184a94:
    // 0x184a94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_184a98:
    // 0x184a98: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x184a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_184a9c:
    // 0x184a9c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x184a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_184aa0:
    // 0x184aa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x184aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_184aa4:
    // 0x184aa4: 0xc062bb0  jal         func_18AEC0
label_184aa8:
    if (ctx->pc == 0x184AA8u) {
        ctx->pc = 0x184AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AA4u;
        // 0x184aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AACu;
        goto label_184aac;
    }
    ctx->pc = 0x184AA4u;
    SET_GPR_U32(ctx, 31, 0x184AACu);
    ctx->pc = 0x184AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AA4u;
    // 0x184aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184AA4u, 0x184AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AACu;
label_184aac:
    // 0x184aac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x184aacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184ab0:
    // 0x184ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184ab4:
    // 0x184ab4: 0xc050fda  jal         func_143F68
label_184ab8:
    if (ctx->pc == 0x184AB8u) {
        ctx->pc = 0x184AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AB4u;
        // 0x184ab8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184ABCu;
        goto label_184abc;
    }
    ctx->pc = 0x184AB4u;
    SET_GPR_U32(ctx, 31, 0x184ABCu);
    ctx->pc = 0x184AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AB4u;
    // 0x184ab8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184AB4u, 0x184ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184ABCu;
label_184abc:
    // 0x184abc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x184abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184ac0:
    // 0x184ac0: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184ac4:
    // 0x184ac4: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184ac4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184ac8:
    // 0x184ac8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184acc:
    // 0x184acc: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x184accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_184ad0:
    // 0x184ad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184ad4:
    // 0x184ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184ad8:
    // 0x184ad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184adc:
    // 0x184adc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184ae0:
    // 0x184ae0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184ae0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184ae4:
    // 0x184ae4: 0xc062bb0  jal         func_18AEC0
label_184ae8:
    if (ctx->pc == 0x184AE8u) {
        ctx->pc = 0x184AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AE4u;
        // 0x184ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AECu;
        goto label_184aec;
    }
    ctx->pc = 0x184AE4u;
    SET_GPR_U32(ctx, 31, 0x184AECu);
    ctx->pc = 0x184AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AE4u;
    // 0x184ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184AE4u, 0x184AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AECu;
label_184aec:
    // 0x184aec: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x184aecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_184af0:
    // 0x184af0: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x184af0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_184af4:
    // 0x184af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184af8:
    // 0x184af8: 0x26102b78  addiu       $s0, $s0, 0x2B78
    ctx->pc = 0x184af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11128));
label_184afc:
    // 0x184afc: 0xc050fda  jal         func_143F68
label_184b00:
    if (ctx->pc == 0x184B00u) {
        ctx->pc = 0x184B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AFCu;
        // 0x184b00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B04u;
        goto label_184b04;
    }
    ctx->pc = 0x184AFCu;
    SET_GPR_U32(ctx, 31, 0x184B04u);
    ctx->pc = 0x184B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AFCu;
    // 0x184b00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184AFCu, 0x184B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B04u;
label_184b04:
    // 0x184b04: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184b08:
    // 0x184b08: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184b08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184b0c:
    // 0x184b0c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184b10:
    // 0x184b10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_184b14:
    // 0x184b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184b18:
    // 0x184b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184b1c:
    // 0x184b1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x184b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184b20:
    // 0x184b20: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184b24:
    // 0x184b24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_184b28:
    // 0x184b28: 0xc062bb0  jal         func_18AEC0
label_184b2c:
    if (ctx->pc == 0x184B2Cu) {
        ctx->pc = 0x184B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B28u;
        // 0x184b2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B30u;
        goto label_184b30;
    }
    ctx->pc = 0x184B28u;
    SET_GPR_U32(ctx, 31, 0x184B30u);
    ctx->pc = 0x184B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B28u;
    // 0x184b2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184B28u, 0x184B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B30u;
label_184b30:
    // 0x184b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184b34:
    // 0x184b34: 0xc050fda  jal         func_143F68
label_184b38:
    if (ctx->pc == 0x184B38u) {
        ctx->pc = 0x184B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B34u;
        // 0x184b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B3Cu;
        goto label_184b3c;
    }
    ctx->pc = 0x184B34u;
    SET_GPR_U32(ctx, 31, 0x184B3Cu);
    ctx->pc = 0x184B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B34u;
    // 0x184b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184B34u, 0x184B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B3Cu;
label_184b3c:
    // 0x184b3c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184b40:
    // 0x184b40: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184b40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184b44:
    // 0x184b44: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184b48:
    // 0x184b48: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x184b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_184b4c:
    // 0x184b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184b50:
    // 0x184b50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184b54:
    // 0x184b54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184b58:
    // 0x184b58: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x184b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184b5c:
    // 0x184b5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184b5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184b60:
    // 0x184b60: 0xc062bb0  jal         func_18AEC0
label_184b64:
    if (ctx->pc == 0x184B64u) {
        ctx->pc = 0x184B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B60u;
        // 0x184b64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B68u;
        goto label_184b68;
    }
    ctx->pc = 0x184B60u;
    SET_GPR_U32(ctx, 31, 0x184B68u);
    ctx->pc = 0x184B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B60u;
    // 0x184b64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184B60u, 0x184B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B68u;
label_184b68:
    // 0x184b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184b6c:
    // 0x184b6c: 0xc050fda  jal         func_143F68
label_184b70:
    if (ctx->pc == 0x184B70u) {
        ctx->pc = 0x184B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B6Cu;
        // 0x184b70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B74u;
        goto label_184b74;
    }
    ctx->pc = 0x184B6Cu;
    SET_GPR_U32(ctx, 31, 0x184B74u);
    ctx->pc = 0x184B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B6Cu;
    // 0x184b70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184B6Cu, 0x184B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B74u;
label_184b74:
    // 0x184b74: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184b78:
    // 0x184b78: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184b78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184b7c:
    // 0x184b7c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184b80:
    // 0x184b80: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_184b84:
    // 0x184b84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184b88:
    // 0x184b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184b8c:
    // 0x184b8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x184b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184b90:
    // 0x184b90: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184b94:
    // 0x184b94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184b94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184b98:
    // 0x184b98: 0xc062bb0  jal         func_18AEC0
label_184b9c:
    if (ctx->pc == 0x184B9Cu) {
        ctx->pc = 0x184B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B98u;
        // 0x184b9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BA0u;
        goto label_184ba0;
    }
    ctx->pc = 0x184B98u;
    SET_GPR_U32(ctx, 31, 0x184BA0u);
    ctx->pc = 0x184B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B98u;
    // 0x184b9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184B98u, 0x184BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BA0u;
label_184ba0:
    // 0x184ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184ba4:
    // 0x184ba4: 0xc050fda  jal         func_143F68
label_184ba8:
    if (ctx->pc == 0x184BA8u) {
        ctx->pc = 0x184BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA4u;
        // 0x184ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BACu;
        goto label_184bac;
    }
    ctx->pc = 0x184BA4u;
    SET_GPR_U32(ctx, 31, 0x184BACu);
    ctx->pc = 0x184BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BA4u;
    // 0x184ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184BA4u, 0x184BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BACu;
label_184bac:
    // 0x184bac: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184bb0:
    // 0x184bb0: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184bb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184bb4:
    // 0x184bb4: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184bb8:
    // 0x184bb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184bbc:
    // 0x184bbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x184bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184bc0:
    // 0x184bc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184bc4:
    // 0x184bc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184bc8:
    // 0x184bc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184bc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184bcc:
    // 0x184bcc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184bd0:
    // 0x184bd0: 0xc062bb0  jal         func_18AEC0
label_184bd4:
    if (ctx->pc == 0x184BD4u) {
        ctx->pc = 0x184BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BD0u;
        // 0x184bd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BD8u;
        goto label_184bd8;
    }
    ctx->pc = 0x184BD0u;
    SET_GPR_U32(ctx, 31, 0x184BD8u);
    ctx->pc = 0x184BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BD0u;
    // 0x184bd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184BD0u, 0x184BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BD8u;
label_184bd8:
    // 0x184bd8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x184bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_184bdc:
    // 0x184bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184be0:
    // 0x184be0: 0xc050fda  jal         func_143F68
label_184be4:
    if (ctx->pc == 0x184BE4u) {
        ctx->pc = 0x184BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BE0u;
        // 0x184be4: 0x24a52b88  addiu       $a1, $a1, 0x2B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BE8u;
        goto label_184be8;
    }
    ctx->pc = 0x184BE0u;
    SET_GPR_U32(ctx, 31, 0x184BE8u);
    ctx->pc = 0x184BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BE0u;
    // 0x184be4: 0x24a52b88  addiu       $a1, $a1, 0x2B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184BE0u, 0x184BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BE8u;
label_184be8:
    // 0x184be8: 0x3c01460c  lui         $at, 0x460C
    ctx->pc = 0x184be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17932 << 16));
label_184bec:
    // 0x184bec: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x184becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
label_184bf0:
    // 0x184bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_184bf4:
    // 0x184bf4: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184bf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184bf8:
    // 0x184bf8: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184bfc:
    // 0x184bfc: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x184bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_184c00:
    // 0x184c00: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184c04:
    // 0x184c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184c08:
    // 0x184c08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184c0c:
    // 0x184c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184c10:
    // 0x184c10: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x184c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184c14:
    // 0x184c14: 0xc062bb0  jal         func_18AEC0
label_184c18:
    if (ctx->pc == 0x184C18u) {
        ctx->pc = 0x184C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C14u;
        // 0x184c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C1Cu;
        goto label_184c1c;
    }
    ctx->pc = 0x184C14u;
    SET_GPR_U32(ctx, 31, 0x184C1Cu);
    ctx->pc = 0x184C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C14u;
    // 0x184c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184C14u, 0x184C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C1Cu;
label_184c1c:
    // 0x184c1c: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x184c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_184c20:
    // 0x184c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184c24:
    // 0x184c24: 0x26102b98  addiu       $s0, $s0, 0x2B98
    ctx->pc = 0x184c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11160));
label_184c28:
    // 0x184c28: 0xc050fda  jal         func_143F68
label_184c2c:
    if (ctx->pc == 0x184C2Cu) {
        ctx->pc = 0x184C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C28u;
        // 0x184c2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C30u;
        goto label_184c30;
    }
    ctx->pc = 0x184C28u;
    SET_GPR_U32(ctx, 31, 0x184C30u);
    ctx->pc = 0x184C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C28u;
    // 0x184c2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184C28u, 0x184C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C30u;
label_184c30:
    // 0x184c30: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184c34:
    // 0x184c34: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184c34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184c38:
    // 0x184c38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x184c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_184c3c:
    // 0x184c3c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184c40:
    // 0x184c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184c44:
    // 0x184c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184c48:
    // 0x184c48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184c4c:
    // 0x184c4c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184c50:
    // 0x184c50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184c50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184c54:
    // 0x184c54: 0xc062bb0  jal         func_18AEC0
label_184c58:
    if (ctx->pc == 0x184C58u) {
        ctx->pc = 0x184C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C54u;
        // 0x184c58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C5Cu;
        goto label_184c5c;
    }
    ctx->pc = 0x184C54u;
    SET_GPR_U32(ctx, 31, 0x184C5Cu);
    ctx->pc = 0x184C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C54u;
    // 0x184c58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184C54u, 0x184C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C5Cu;
label_184c5c:
    // 0x184c5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184c60:
    // 0x184c60: 0xc050fda  jal         func_143F68
label_184c64:
    if (ctx->pc == 0x184C64u) {
        ctx->pc = 0x184C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C60u;
        // 0x184c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C68u;
        goto label_184c68;
    }
    ctx->pc = 0x184C60u;
    SET_GPR_U32(ctx, 31, 0x184C68u);
    ctx->pc = 0x184C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C60u;
    // 0x184c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184C60u, 0x184C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C68u;
label_184c68:
    // 0x184c68: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184c6c:
    // 0x184c6c: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184c6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184c70:
    // 0x184c70: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x184c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_184c74:
    // 0x184c74: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184c78:
    // 0x184c78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184c7c:
    // 0x184c7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184c80:
    // 0x184c80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x184c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184c84:
    // 0x184c84: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184c84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184c88:
    // 0x184c88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184c88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184c8c:
    // 0x184c8c: 0xc062bb0  jal         func_18AEC0
label_184c90:
    if (ctx->pc == 0x184C90u) {
        ctx->pc = 0x184C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C8Cu;
        // 0x184c90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C94u;
        goto label_184c94;
    }
    ctx->pc = 0x184C8Cu;
    SET_GPR_U32(ctx, 31, 0x184C94u);
    ctx->pc = 0x184C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C8Cu;
    // 0x184c90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184C8Cu, 0x184C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C94u;
label_184c94:
    // 0x184c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184c98:
    // 0x184c98: 0xc050fda  jal         func_143F68
label_184c9c:
    if (ctx->pc == 0x184C9Cu) {
        ctx->pc = 0x184C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C98u;
        // 0x184c9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CA0u;
        goto label_184ca0;
    }
    ctx->pc = 0x184C98u;
    SET_GPR_U32(ctx, 31, 0x184CA0u);
    ctx->pc = 0x184C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C98u;
    // 0x184c9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184C98u, 0x184CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CA0u;
label_184ca0:
    // 0x184ca0: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184ca4:
    // 0x184ca4: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184ca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184ca8:
    // 0x184ca8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x184ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_184cac:
    // 0x184cac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x184cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184cb0:
    // 0x184cb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184cb4:
    // 0x184cb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184cb8:
    // 0x184cb8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x184cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184cbc:
    // 0x184cbc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184cc0:
    // 0x184cc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_184cc4:
    // 0x184cc4: 0xc062bb0  jal         func_18AEC0
label_184cc8:
    if (ctx->pc == 0x184CC8u) {
        ctx->pc = 0x184CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CC4u;
        // 0x184cc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CCCu;
        goto label_184ccc;
    }
    ctx->pc = 0x184CC4u;
    SET_GPR_U32(ctx, 31, 0x184CCCu);
    ctx->pc = 0x184CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CC4u;
    // 0x184cc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184CC4u, 0x184CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CCCu;
label_184ccc:
    // 0x184ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184cd0:
    // 0x184cd0: 0xc050fda  jal         func_143F68
label_184cd4:
    if (ctx->pc == 0x184CD4u) {
        ctx->pc = 0x184CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CD0u;
        // 0x184cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CD8u;
        goto label_184cd8;
    }
    ctx->pc = 0x184CD0u;
    SET_GPR_U32(ctx, 31, 0x184CD8u);
    ctx->pc = 0x184CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CD0u;
    // 0x184cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184CD0u, 0x184CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CD8u;
label_184cd8:
    // 0x184cd8: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184cdc:
    // 0x184cdc: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184cdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184ce0:
    // 0x184ce0: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x184ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_184ce4:
    // 0x184ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184ce8:
    // 0x184ce8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x184ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184cec:
    // 0x184cec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184cf0:
    // 0x184cf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184cf4:
    // 0x184cf4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184cf8:
    // 0x184cf8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x184cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184cfc:
    // 0x184cfc: 0xc062bb0  jal         func_18AEC0
label_184d00:
    if (ctx->pc == 0x184D00u) {
        ctx->pc = 0x184D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CFCu;
        // 0x184d00: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D04u;
        goto label_184d04;
    }
    ctx->pc = 0x184CFCu;
    SET_GPR_U32(ctx, 31, 0x184D04u);
    ctx->pc = 0x184D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CFCu;
    // 0x184d00: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184CFCu, 0x184D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D04u;
label_184d04:
    // 0x184d04: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x184d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_184d08:
    // 0x184d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184d0c:
    // 0x184d0c: 0xc050fda  jal         func_143F68
label_184d10:
    if (ctx->pc == 0x184D10u) {
        ctx->pc = 0x184D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D0Cu;
        // 0x184d10: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D14u;
        goto label_184d14;
    }
    ctx->pc = 0x184D0Cu;
    SET_GPR_U32(ctx, 31, 0x184D14u);
    ctx->pc = 0x184D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D0Cu;
    // 0x184d10: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184D0Cu, 0x184D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D14u;
label_184d14:
    // 0x184d14: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184d18:
    // 0x184d18: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184d18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184d1c:
    // 0x184d1c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_184d20:
    // 0x184d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184d24:
    // 0x184d24: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184d28:
    // 0x184d28: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x184d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184d2c:
    // 0x184d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184d30:
    // 0x184d30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184d30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184d34:
    // 0x184d34: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x184d34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184d38:
    // 0x184d38: 0xc062bb0  jal         func_18AEC0
label_184d3c:
    if (ctx->pc == 0x184D3Cu) {
        ctx->pc = 0x184D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D38u;
        // 0x184d3c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D40u;
        goto label_184d40;
    }
    ctx->pc = 0x184D38u;
    SET_GPR_U32(ctx, 31, 0x184D40u);
    ctx->pc = 0x184D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D38u;
    // 0x184d3c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184D38u, 0x184D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D40u;
label_184d40:
    // 0x184d40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x184d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_184d44:
    // 0x184d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184d48:
    // 0x184d48: 0xc050fda  jal         func_143F68
label_184d4c:
    if (ctx->pc == 0x184D4Cu) {
        ctx->pc = 0x184D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D48u;
        // 0x184d4c: 0x24a52bb8  addiu       $a1, $a1, 0x2BB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D50u;
        goto label_184d50;
    }
    ctx->pc = 0x184D48u;
    SET_GPR_U32(ctx, 31, 0x184D50u);
    ctx->pc = 0x184D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D48u;
    // 0x184d4c: 0x24a52bb8  addiu       $a1, $a1, 0x2BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184D48u, 0x184D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D50u;
label_184d50:
    // 0x184d50: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184d54:
    // 0x184d54: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x184d54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184d58:
    // 0x184d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184d5c:
    // 0x184d5c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x184d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_184d60:
    // 0x184d60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184d60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184d64:
    // 0x184d64: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x184d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_184d68:
    // 0x184d68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184d6c:
    // 0x184d6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184d70:
    // 0x184d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184d74:
    // 0x184d74: 0xc062bb0  jal         func_18AEC0
label_184d78:
    if (ctx->pc == 0x184D78u) {
        ctx->pc = 0x184D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D74u;
        // 0x184d78: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D7Cu;
        goto label_184d7c;
    }
    ctx->pc = 0x184D74u;
    SET_GPR_U32(ctx, 31, 0x184D7Cu);
    ctx->pc = 0x184D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D74u;
    // 0x184d78: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x184D74u, 0x184D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D7Cu;
label_184d7c:
    // 0x184d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184d80:
    // 0x184d80: 0x27b20120  addiu       $s2, $sp, 0x120
    ctx->pc = 0x184d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_184d84:
    // 0x184d84: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_184d88:
    if (ctx->pc == 0x184D88u) {
        ctx->pc = 0x184D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D84u;
        // 0x184d88: 0x27b10220  addiu       $s1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D8Cu;
        goto label_184d8c;
    }
    ctx->pc = 0x184D84u;
    {
        const bool branch_taken_0x184d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D84u;
        // 0x184d88: 0x27b10220  addiu       $s1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d84) {
            ctx->pc = 0x184DB4u;
            goto label_184db4;
        }
    }
    ctx->pc = 0x184D8Cu;
label_184d8c:
    // 0x184d8c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x184d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_184d90:
    // 0x184d90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x184d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_184d94:
    // 0x184d94: 0xc0616ac  jal         func_185AB0
label_184d98:
    if (ctx->pc == 0x184D98u) {
        ctx->pc = 0x184D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D94u;
        // 0x184d98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D9Cu;
        goto label_184d9c;
    }
    ctx->pc = 0x184D94u;
    SET_GPR_U32(ctx, 31, 0x184D9Cu);
    ctx->pc = 0x184D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D94u;
    // 0x184d98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x184D94u, 0x184D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D9Cu;
label_184d9c:
    // 0x184d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x184d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184da0:
    // 0x184da0: 0xc065cac  jal         func_1972B0
label_184da4:
    if (ctx->pc == 0x184DA4u) {
        ctx->pc = 0x184DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DA0u;
        // 0x184da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DA8u;
        goto label_184da8;
    }
    ctx->pc = 0x184DA0u;
    SET_GPR_U32(ctx, 31, 0x184DA8u);
    ctx->pc = 0x184DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DA0u;
    // 0x184da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x184DA0u, 0x184DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DA8u;
label_184da8:
    // 0x184da8: 0x2d0182b  sltu        $v1, $s6, $s0
    ctx->pc = 0x184da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_184dac:
    // 0x184dac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_184db0:
    if (ctx->pc == 0x184DB0u) {
        ctx->pc = 0x184DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DACu;
        // 0x184db0: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DB4u;
        goto label_184db4;
    }
    ctx->pc = 0x184DACu;
    {
        const bool branch_taken_0x184dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184dac) {
            ctx->pc = 0x184DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184DACu;
            // 0x184db0: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184d90;
        }
    }
    ctx->pc = 0x184DB4u;
label_184db4:
    // 0x184db4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x184db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184db8:
    // 0x184db8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x184db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184dbc:
    // 0x184dbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x184dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184dc0:
    // 0x184dc0: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x184dc0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_184dc4:
    // 0x184dc4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x184dc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_184dc8:
    // 0x184dc8: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x184dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_184dcc:
    // 0x184dcc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_184dd0:
    // 0x184dd0: 0x24462bc8  addiu       $a2, $v0, 0x2BC8
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11208));
label_184dd4:
    // 0x184dd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x184dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184dd8:
    // 0x184dd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184ddc:
    // 0x184ddc: 0xc10ca04  jal         func_432810
label_184de0:
    if (ctx->pc == 0x184DE0u) {
        ctx->pc = 0x184DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DDCu;
        // 0x184de0: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DE4u;
        goto label_184de4;
    }
    ctx->pc = 0x184DDCu;
    SET_GPR_U32(ctx, 31, 0x184DE4u);
    ctx->pc = 0x184DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DDCu;
    // 0x184de0: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x184DDCu, 0x184DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DE4u;
label_184de4:
    // 0x184de4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x184de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_184de8:
    // 0x184de8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x184de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184dec:
    // 0x184dec: 0xc050fda  jal         func_143F68
label_184df0:
    if (ctx->pc == 0x184DF0u) {
        ctx->pc = 0x184DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DECu;
        // 0x184df0: 0x244491e0  addiu       $a0, $v0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DF4u;
        goto label_184df4;
    }
    ctx->pc = 0x184DECu;
    SET_GPR_U32(ctx, 31, 0x184DF4u);
    ctx->pc = 0x184DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DECu;
    // 0x184df0: 0x244491e0  addiu       $a0, $v0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184DECu, 0x184DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DF4u;
label_184df4:
    // 0x184df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184df8:
    // 0x184df8: 0x27c62be0  addiu       $a2, $fp, 0x2BE0
    ctx->pc = 0x184df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 11232));
label_184dfc:
    // 0x184dfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x184dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184e00:
    // 0x184e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184e04:
    // 0x184e04: 0xc10ca04  jal         func_432810
label_184e08:
    if (ctx->pc == 0x184E08u) {
        ctx->pc = 0x184E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E04u;
        // 0x184e08: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E0Cu;
        goto label_184e0c;
    }
    ctx->pc = 0x184E04u;
    SET_GPR_U32(ctx, 31, 0x184E0Cu);
    ctx->pc = 0x184E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E04u;
    // 0x184e08: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x184E04u, 0x184E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E0Cu;
label_184e0c:
    // 0x184e0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x184e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_184e10:
    // 0x184e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x184e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184e14:
    // 0x184e14: 0x8c44b788  lw          $a0, -0x4878($v0)
    ctx->pc = 0x184e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_184e18:
    // 0x184e18: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x184e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_184e1c:
    // 0x184e1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x184e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_184e20:
    // 0x184e20: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x184e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_184e24:
    // 0x184e24: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x184e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_184e28:
    // 0x184e28: 0x40f809  jalr        $v0
label_184e2c:
    if (ctx->pc == 0x184E2Cu) {
        ctx->pc = 0x184E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E28u;
        // 0x184e2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E30u;
        goto label_184e30;
    }
    ctx->pc = 0x184E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184E30u);
        ctx->pc = 0x184E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E28u;
        // 0x184e2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184E28u, 0x184E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184E30u;
label_184e30:
    // 0x184e30: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x184e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_184e34:
    // 0x184e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184e38:
    // 0x184e38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x184e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184e3c:
    // 0x184e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184e40:
    // 0x184e40: 0xc063a78  jal         func_18E9E0
label_184e44:
    if (ctx->pc == 0x184E44u) {
        ctx->pc = 0x184E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E40u;
        // 0x184e44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E48u;
        goto label_184e48;
    }
    ctx->pc = 0x184E40u;
    SET_GPR_U32(ctx, 31, 0x184E48u);
    ctx->pc = 0x184E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E40u;
    // 0x184e44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x184E40u, 0x184E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E48u;
label_184e48:
    // 0x184e48: 0x255001b  divu        $zero, $s2, $s5
    ctx->pc = 0x184e48u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_184e4c:
    // 0x184e4c: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x184e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_184e50:
    // 0x184e50: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_184e54:
    if (ctx->pc == 0x184E54u) {
        ctx->pc = 0x184E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E50u;
        // 0x184e54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E58u;
        goto label_184e58;
    }
    ctx->pc = 0x184E50u;
    {
        const bool branch_taken_0x184e50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e50) {
            ctx->pc = 0x184E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E50u;
            // 0x184e54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184E58u;
            goto label_184e58;
        }
    }
    ctx->pc = 0x184E58u;
label_184e58:
    // 0x184e58: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x184e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184e5c:
    // 0x184e5c: 0x2e450003  sltiu       $a1, $s2, 0x3
    ctx->pc = 0x184e5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_184e60:
    // 0x184e60: 0x1810  mfhi        $v1
    ctx->pc = 0x184e60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_184e64:
    // 0x184e64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_184e68:
    // 0x184e68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x184e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184e6c:
    // 0x184e6c: 0x14a0ffd6  bnez        $a1, . + 4 + (-0x2A << 2)
label_184e70:
    if (ctx->pc == 0x184E70u) {
        ctx->pc = 0x184E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E6Cu;
        // 0x184e70: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E74u;
        goto label_184e74;
    }
    ctx->pc = 0x184E6Cu;
    {
        const bool branch_taken_0x184e6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E6Cu;
        // 0x184e70: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e6c) {
            ctx->pc = 0x184DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184dc8;
        }
    }
    ctx->pc = 0x184E74u;
label_184e74:
    // 0x184e74: 0x7bb002e0  lq          $s0, 0x2E0($sp)
    ctx->pc = 0x184e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_184e78:
    // 0x184e78: 0x7bb102d0  lq          $s1, 0x2D0($sp)
    ctx->pc = 0x184e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_184e7c:
    // 0x184e7c: 0x7bb202c0  lq          $s2, 0x2C0($sp)
    ctx->pc = 0x184e7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_184e80:
    // 0x184e80: 0x7bb302b0  lq          $s3, 0x2B0($sp)
    ctx->pc = 0x184e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_184e84:
    // 0x184e84: 0x7bb402a0  lq          $s4, 0x2A0($sp)
    ctx->pc = 0x184e84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_184e88:
    // 0x184e88: 0x7bb50290  lq          $s5, 0x290($sp)
    ctx->pc = 0x184e88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_184e8c:
    // 0x184e8c: 0x7bb60280  lq          $s6, 0x280($sp)
    ctx->pc = 0x184e8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_184e90:
    // 0x184e90: 0x7bb70270  lq          $s7, 0x270($sp)
    ctx->pc = 0x184e90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_184e94:
    // 0x184e94: 0x7bbe0260  lq          $fp, 0x260($sp)
    ctx->pc = 0x184e94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_184e98:
    // 0x184e98: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x184e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_184e9c:
    // 0x184e9c: 0xc7b502f8  lwc1        $f21, 0x2F8($sp)
    ctx->pc = 0x184e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_184ea0:
    // 0x184ea0: 0xc7b402f0  lwc1        $f20, 0x2F0($sp)
    ctx->pc = 0x184ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_184ea4:
    // 0x184ea4: 0x3e00008  jr          $ra
label_184ea8:
    if (ctx->pc == 0x184EA8u) {
        ctx->pc = 0x184EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EA4u;
        // 0x184ea8: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184EACu;
        goto label_184eac;
    }
    ctx->pc = 0x184EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EA4u;
        // 0x184ea8: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184EACu;
label_184eac:
    // 0x184eac: 0x0  nop
    ctx->pc = 0x184eacu;
    // NOP
    ctx->pc = 0x184eb0u;
}
