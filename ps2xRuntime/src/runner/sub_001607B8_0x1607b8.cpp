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

// Function: sub_001607B8
// Address: 0x1607b8 - 0x160d00
void sub_001607B8_0x1607b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001607B8_0x1607b8");
#endif

    switch (ctx->pc) {
        case 0x1607b8u: goto label_1607b8;
        case 0x1607bcu: goto label_1607bc;
        case 0x1607c0u: goto label_1607c0;
        case 0x1607c4u: goto label_1607c4;
        case 0x1607c8u: goto label_1607c8;
        case 0x1607ccu: goto label_1607cc;
        case 0x1607d0u: goto label_1607d0;
        case 0x1607d4u: goto label_1607d4;
        case 0x1607d8u: goto label_1607d8;
        case 0x1607dcu: goto label_1607dc;
        case 0x1607e0u: goto label_1607e0;
        case 0x1607e4u: goto label_1607e4;
        case 0x1607e8u: goto label_1607e8;
        case 0x1607ecu: goto label_1607ec;
        case 0x1607f0u: goto label_1607f0;
        case 0x1607f4u: goto label_1607f4;
        case 0x1607f8u: goto label_1607f8;
        case 0x1607fcu: goto label_1607fc;
        case 0x160800u: goto label_160800;
        case 0x160804u: goto label_160804;
        case 0x160808u: goto label_160808;
        case 0x16080cu: goto label_16080c;
        case 0x160810u: goto label_160810;
        case 0x160814u: goto label_160814;
        case 0x160818u: goto label_160818;
        case 0x16081cu: goto label_16081c;
        case 0x160820u: goto label_160820;
        case 0x160824u: goto label_160824;
        case 0x160828u: goto label_160828;
        case 0x16082cu: goto label_16082c;
        case 0x160830u: goto label_160830;
        case 0x160834u: goto label_160834;
        case 0x160838u: goto label_160838;
        case 0x16083cu: goto label_16083c;
        case 0x160840u: goto label_160840;
        case 0x160844u: goto label_160844;
        case 0x160848u: goto label_160848;
        case 0x16084cu: goto label_16084c;
        case 0x160850u: goto label_160850;
        case 0x160854u: goto label_160854;
        case 0x160858u: goto label_160858;
        case 0x16085cu: goto label_16085c;
        case 0x160860u: goto label_160860;
        case 0x160864u: goto label_160864;
        case 0x160868u: goto label_160868;
        case 0x16086cu: goto label_16086c;
        case 0x160870u: goto label_160870;
        case 0x160874u: goto label_160874;
        case 0x160878u: goto label_160878;
        case 0x16087cu: goto label_16087c;
        case 0x160880u: goto label_160880;
        case 0x160884u: goto label_160884;
        case 0x160888u: goto label_160888;
        case 0x16088cu: goto label_16088c;
        case 0x160890u: goto label_160890;
        case 0x160894u: goto label_160894;
        case 0x160898u: goto label_160898;
        case 0x16089cu: goto label_16089c;
        case 0x1608a0u: goto label_1608a0;
        case 0x1608a4u: goto label_1608a4;
        case 0x1608a8u: goto label_1608a8;
        case 0x1608acu: goto label_1608ac;
        case 0x1608b0u: goto label_1608b0;
        case 0x1608b4u: goto label_1608b4;
        case 0x1608b8u: goto label_1608b8;
        case 0x1608bcu: goto label_1608bc;
        case 0x1608c0u: goto label_1608c0;
        case 0x1608c4u: goto label_1608c4;
        case 0x1608c8u: goto label_1608c8;
        case 0x1608ccu: goto label_1608cc;
        case 0x1608d0u: goto label_1608d0;
        case 0x1608d4u: goto label_1608d4;
        case 0x1608d8u: goto label_1608d8;
        case 0x1608dcu: goto label_1608dc;
        case 0x1608e0u: goto label_1608e0;
        case 0x1608e4u: goto label_1608e4;
        case 0x1608e8u: goto label_1608e8;
        case 0x1608ecu: goto label_1608ec;
        case 0x1608f0u: goto label_1608f0;
        case 0x1608f4u: goto label_1608f4;
        case 0x1608f8u: goto label_1608f8;
        case 0x1608fcu: goto label_1608fc;
        case 0x160900u: goto label_160900;
        case 0x160904u: goto label_160904;
        case 0x160908u: goto label_160908;
        case 0x16090cu: goto label_16090c;
        case 0x160910u: goto label_160910;
        case 0x160914u: goto label_160914;
        case 0x160918u: goto label_160918;
        case 0x16091cu: goto label_16091c;
        case 0x160920u: goto label_160920;
        case 0x160924u: goto label_160924;
        case 0x160928u: goto label_160928;
        case 0x16092cu: goto label_16092c;
        case 0x160930u: goto label_160930;
        case 0x160934u: goto label_160934;
        case 0x160938u: goto label_160938;
        case 0x16093cu: goto label_16093c;
        case 0x160940u: goto label_160940;
        case 0x160944u: goto label_160944;
        case 0x160948u: goto label_160948;
        case 0x16094cu: goto label_16094c;
        case 0x160950u: goto label_160950;
        case 0x160954u: goto label_160954;
        case 0x160958u: goto label_160958;
        case 0x16095cu: goto label_16095c;
        case 0x160960u: goto label_160960;
        case 0x160964u: goto label_160964;
        case 0x160968u: goto label_160968;
        case 0x16096cu: goto label_16096c;
        case 0x160970u: goto label_160970;
        case 0x160974u: goto label_160974;
        case 0x160978u: goto label_160978;
        case 0x16097cu: goto label_16097c;
        case 0x160980u: goto label_160980;
        case 0x160984u: goto label_160984;
        case 0x160988u: goto label_160988;
        case 0x16098cu: goto label_16098c;
        case 0x160990u: goto label_160990;
        case 0x160994u: goto label_160994;
        case 0x160998u: goto label_160998;
        case 0x16099cu: goto label_16099c;
        case 0x1609a0u: goto label_1609a0;
        case 0x1609a4u: goto label_1609a4;
        case 0x1609a8u: goto label_1609a8;
        case 0x1609acu: goto label_1609ac;
        case 0x1609b0u: goto label_1609b0;
        case 0x1609b4u: goto label_1609b4;
        case 0x1609b8u: goto label_1609b8;
        case 0x1609bcu: goto label_1609bc;
        case 0x1609c0u: goto label_1609c0;
        case 0x1609c4u: goto label_1609c4;
        case 0x1609c8u: goto label_1609c8;
        case 0x1609ccu: goto label_1609cc;
        case 0x1609d0u: goto label_1609d0;
        case 0x1609d4u: goto label_1609d4;
        case 0x1609d8u: goto label_1609d8;
        case 0x1609dcu: goto label_1609dc;
        case 0x1609e0u: goto label_1609e0;
        case 0x1609e4u: goto label_1609e4;
        case 0x1609e8u: goto label_1609e8;
        case 0x1609ecu: goto label_1609ec;
        case 0x1609f0u: goto label_1609f0;
        case 0x1609f4u: goto label_1609f4;
        case 0x1609f8u: goto label_1609f8;
        case 0x1609fcu: goto label_1609fc;
        case 0x160a00u: goto label_160a00;
        case 0x160a04u: goto label_160a04;
        case 0x160a08u: goto label_160a08;
        case 0x160a0cu: goto label_160a0c;
        case 0x160a10u: goto label_160a10;
        case 0x160a14u: goto label_160a14;
        case 0x160a18u: goto label_160a18;
        case 0x160a1cu: goto label_160a1c;
        case 0x160a20u: goto label_160a20;
        case 0x160a24u: goto label_160a24;
        case 0x160a28u: goto label_160a28;
        case 0x160a2cu: goto label_160a2c;
        case 0x160a30u: goto label_160a30;
        case 0x160a34u: goto label_160a34;
        case 0x160a38u: goto label_160a38;
        case 0x160a3cu: goto label_160a3c;
        case 0x160a40u: goto label_160a40;
        case 0x160a44u: goto label_160a44;
        case 0x160a48u: goto label_160a48;
        case 0x160a4cu: goto label_160a4c;
        case 0x160a50u: goto label_160a50;
        case 0x160a54u: goto label_160a54;
        case 0x160a58u: goto label_160a58;
        case 0x160a5cu: goto label_160a5c;
        case 0x160a60u: goto label_160a60;
        case 0x160a64u: goto label_160a64;
        case 0x160a68u: goto label_160a68;
        case 0x160a6cu: goto label_160a6c;
        case 0x160a70u: goto label_160a70;
        case 0x160a74u: goto label_160a74;
        case 0x160a78u: goto label_160a78;
        case 0x160a7cu: goto label_160a7c;
        case 0x160a80u: goto label_160a80;
        case 0x160a84u: goto label_160a84;
        case 0x160a88u: goto label_160a88;
        case 0x160a8cu: goto label_160a8c;
        case 0x160a90u: goto label_160a90;
        case 0x160a94u: goto label_160a94;
        case 0x160a98u: goto label_160a98;
        case 0x160a9cu: goto label_160a9c;
        case 0x160aa0u: goto label_160aa0;
        case 0x160aa4u: goto label_160aa4;
        case 0x160aa8u: goto label_160aa8;
        case 0x160aacu: goto label_160aac;
        case 0x160ab0u: goto label_160ab0;
        case 0x160ab4u: goto label_160ab4;
        case 0x160ab8u: goto label_160ab8;
        case 0x160abcu: goto label_160abc;
        case 0x160ac0u: goto label_160ac0;
        case 0x160ac4u: goto label_160ac4;
        case 0x160ac8u: goto label_160ac8;
        case 0x160accu: goto label_160acc;
        case 0x160ad0u: goto label_160ad0;
        case 0x160ad4u: goto label_160ad4;
        case 0x160ad8u: goto label_160ad8;
        case 0x160adcu: goto label_160adc;
        case 0x160ae0u: goto label_160ae0;
        case 0x160ae4u: goto label_160ae4;
        case 0x160ae8u: goto label_160ae8;
        case 0x160aecu: goto label_160aec;
        case 0x160af0u: goto label_160af0;
        case 0x160af4u: goto label_160af4;
        case 0x160af8u: goto label_160af8;
        case 0x160afcu: goto label_160afc;
        case 0x160b00u: goto label_160b00;
        case 0x160b04u: goto label_160b04;
        case 0x160b08u: goto label_160b08;
        case 0x160b0cu: goto label_160b0c;
        case 0x160b10u: goto label_160b10;
        case 0x160b14u: goto label_160b14;
        case 0x160b18u: goto label_160b18;
        case 0x160b1cu: goto label_160b1c;
        case 0x160b20u: goto label_160b20;
        case 0x160b24u: goto label_160b24;
        case 0x160b28u: goto label_160b28;
        case 0x160b2cu: goto label_160b2c;
        case 0x160b30u: goto label_160b30;
        case 0x160b34u: goto label_160b34;
        case 0x160b38u: goto label_160b38;
        case 0x160b3cu: goto label_160b3c;
        case 0x160b40u: goto label_160b40;
        case 0x160b44u: goto label_160b44;
        case 0x160b48u: goto label_160b48;
        case 0x160b4cu: goto label_160b4c;
        case 0x160b50u: goto label_160b50;
        case 0x160b54u: goto label_160b54;
        case 0x160b58u: goto label_160b58;
        case 0x160b5cu: goto label_160b5c;
        case 0x160b60u: goto label_160b60;
        case 0x160b64u: goto label_160b64;
        case 0x160b68u: goto label_160b68;
        case 0x160b6cu: goto label_160b6c;
        case 0x160b70u: goto label_160b70;
        case 0x160b74u: goto label_160b74;
        case 0x160b78u: goto label_160b78;
        case 0x160b7cu: goto label_160b7c;
        case 0x160b80u: goto label_160b80;
        case 0x160b84u: goto label_160b84;
        case 0x160b88u: goto label_160b88;
        case 0x160b8cu: goto label_160b8c;
        case 0x160b90u: goto label_160b90;
        case 0x160b94u: goto label_160b94;
        case 0x160b98u: goto label_160b98;
        case 0x160b9cu: goto label_160b9c;
        case 0x160ba0u: goto label_160ba0;
        case 0x160ba4u: goto label_160ba4;
        case 0x160ba8u: goto label_160ba8;
        case 0x160bacu: goto label_160bac;
        case 0x160bb0u: goto label_160bb0;
        case 0x160bb4u: goto label_160bb4;
        case 0x160bb8u: goto label_160bb8;
        case 0x160bbcu: goto label_160bbc;
        case 0x160bc0u: goto label_160bc0;
        case 0x160bc4u: goto label_160bc4;
        case 0x160bc8u: goto label_160bc8;
        case 0x160bccu: goto label_160bcc;
        case 0x160bd0u: goto label_160bd0;
        case 0x160bd4u: goto label_160bd4;
        case 0x160bd8u: goto label_160bd8;
        case 0x160bdcu: goto label_160bdc;
        case 0x160be0u: goto label_160be0;
        case 0x160be4u: goto label_160be4;
        case 0x160be8u: goto label_160be8;
        case 0x160becu: goto label_160bec;
        case 0x160bf0u: goto label_160bf0;
        case 0x160bf4u: goto label_160bf4;
        case 0x160bf8u: goto label_160bf8;
        case 0x160bfcu: goto label_160bfc;
        case 0x160c00u: goto label_160c00;
        case 0x160c04u: goto label_160c04;
        case 0x160c08u: goto label_160c08;
        case 0x160c0cu: goto label_160c0c;
        case 0x160c10u: goto label_160c10;
        case 0x160c14u: goto label_160c14;
        case 0x160c18u: goto label_160c18;
        case 0x160c1cu: goto label_160c1c;
        case 0x160c20u: goto label_160c20;
        case 0x160c24u: goto label_160c24;
        case 0x160c28u: goto label_160c28;
        case 0x160c2cu: goto label_160c2c;
        case 0x160c30u: goto label_160c30;
        case 0x160c34u: goto label_160c34;
        case 0x160c38u: goto label_160c38;
        case 0x160c3cu: goto label_160c3c;
        case 0x160c40u: goto label_160c40;
        case 0x160c44u: goto label_160c44;
        case 0x160c48u: goto label_160c48;
        case 0x160c4cu: goto label_160c4c;
        case 0x160c50u: goto label_160c50;
        case 0x160c54u: goto label_160c54;
        case 0x160c58u: goto label_160c58;
        case 0x160c5cu: goto label_160c5c;
        case 0x160c60u: goto label_160c60;
        case 0x160c64u: goto label_160c64;
        case 0x160c68u: goto label_160c68;
        case 0x160c6cu: goto label_160c6c;
        case 0x160c70u: goto label_160c70;
        case 0x160c74u: goto label_160c74;
        case 0x160c78u: goto label_160c78;
        case 0x160c7cu: goto label_160c7c;
        case 0x160c80u: goto label_160c80;
        case 0x160c84u: goto label_160c84;
        case 0x160c88u: goto label_160c88;
        case 0x160c8cu: goto label_160c8c;
        case 0x160c90u: goto label_160c90;
        case 0x160c94u: goto label_160c94;
        case 0x160c98u: goto label_160c98;
        case 0x160c9cu: goto label_160c9c;
        case 0x160ca0u: goto label_160ca0;
        case 0x160ca4u: goto label_160ca4;
        case 0x160ca8u: goto label_160ca8;
        case 0x160cacu: goto label_160cac;
        case 0x160cb0u: goto label_160cb0;
        case 0x160cb4u: goto label_160cb4;
        case 0x160cb8u: goto label_160cb8;
        case 0x160cbcu: goto label_160cbc;
        case 0x160cc0u: goto label_160cc0;
        case 0x160cc4u: goto label_160cc4;
        case 0x160cc8u: goto label_160cc8;
        case 0x160cccu: goto label_160ccc;
        case 0x160cd0u: goto label_160cd0;
        case 0x160cd4u: goto label_160cd4;
        case 0x160cd8u: goto label_160cd8;
        case 0x160cdcu: goto label_160cdc;
        case 0x160ce0u: goto label_160ce0;
        case 0x160ce4u: goto label_160ce4;
        case 0x160ce8u: goto label_160ce8;
        case 0x160cecu: goto label_160cec;
        case 0x160cf0u: goto label_160cf0;
        case 0x160cf4u: goto label_160cf4;
        case 0x160cf8u: goto label_160cf8;
        case 0x160cfcu: goto label_160cfc;
        default: break;
    }

    ctx->pc = 0x1607b8u;

label_1607b8:
    // 0x1607b8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1607b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1607bc:
    // 0x1607bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1607c0:
    // 0x1607c0: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x1607c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_1607c4:
    // 0x1607c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1607c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1607c8:
    // 0x1607c8: 0x8c445340  lw          $a0, 0x5340($v0)
    ctx->pc = 0x1607c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
label_1607cc:
    // 0x1607cc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1607ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1607d0:
    // 0x1607d0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1607d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1607d4:
    // 0x1607d4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1607d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1607d8:
    // 0x1607d8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1607d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1607dc:
    // 0x1607dc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1607dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1607e0:
    // 0x1607e0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1607e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1607e4:
    // 0x1607e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1607e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1607e8:
    // 0x1607e8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1607e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1607ec:
    // 0x1607ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1607ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1607f0:
    // 0x1607f0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1607f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1607f4:
    // 0x1607f4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1607f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1607f8:
    // 0x1607f8: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1607f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1607fc:
    // 0x1607fc: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1607fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_160800:
    // 0x160800: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x160800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_160804:
    // 0x160804: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x160804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_160808:
    // 0x160808: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x160808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_16080c:
    // 0x16080c: 0xc0552b8  jal         func_154AE0
label_160810:
    if (ctx->pc == 0x160810u) {
        ctx->pc = 0x160810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16080Cu;
        // 0x160810: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160814u;
        goto label_160814;
    }
    ctx->pc = 0x16080Cu;
    SET_GPR_U32(ctx, 31, 0x160814u);
    ctx->pc = 0x160810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16080Cu;
    // 0x160810: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x16080Cu, 0x160814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160814u;
label_160814:
    // 0x160814: 0x3c014cbe  lui         $at, 0x4CBE
    ctx->pc = 0x160814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19646 << 16));
label_160818:
    // 0x160818: 0x3421bc20  ori         $at, $at, 0xBC20
    ctx->pc = 0x160818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48160);
label_16081c:
    // 0x16081c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16081cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160820:
    // 0x160820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160824:
    // 0x160824: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x160824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_160828:
    // 0x160828: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x160828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16082c:
    // 0x16082c: 0xc047e6c  jal         func_11F9B0
label_160830:
    if (ctx->pc == 0x160830u) {
        ctx->pc = 0x160830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16082Cu;
        // 0x160830: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160834u;
        goto label_160834;
    }
    ctx->pc = 0x16082Cu;
    SET_GPR_U32(ctx, 31, 0x160834u);
    ctx->pc = 0x160830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16082Cu;
    // 0x160830: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x16082Cu, 0x160834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160834u;
label_160834:
    // 0x160834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160838:
    // 0x160838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x160838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16083c:
    // 0x16083c: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_160840:
    // 0x160840: 0x8c6601bc  lw          $a2, 0x1BC($v1)
    ctx->pc = 0x160840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_160844:
    // 0x160844: 0xc0f809  jalr        $a2
label_160848:
    if (ctx->pc == 0x160848u) {
        ctx->pc = 0x160848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160844u;
        // 0x160848: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16084Cu;
        goto label_16084c;
    }
    ctx->pc = 0x160844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16084Cu);
        ctx->pc = 0x160848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160844u;
        // 0x160848: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160844u, 0x16084Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16084Cu;
label_16084c:
    // 0x16084c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x16084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_160850:
    // 0x160850: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_160854:
    // 0x160854: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x160854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_160858:
    // 0x160858: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x160858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_16085c:
    // 0x16085c: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x16085cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_160860:
    // 0x160860: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x160860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_160864:
    // 0x160864: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_160868:
    // 0x160868: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x160868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_16086c:
    // 0x16086c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_160870:
    // 0x160870: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_160874:
    // 0x160874: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_160878:
    // 0x160878: 0x60f809  jalr        $v1
label_16087c:
    if (ctx->pc == 0x16087Cu) {
        ctx->pc = 0x16087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160878u;
        // 0x16087c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160880u;
        goto label_160880;
    }
    ctx->pc = 0x160878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160880u);
        ctx->pc = 0x16087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160878u;
        // 0x16087c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160878u, 0x160880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160880u;
label_160880:
    // 0x160880: 0xc0443d6  jal         func_110F58
label_160884:
    if (ctx->pc == 0x160884u) {
        ctx->pc = 0x160884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160880u;
        // 0x160884: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160888u;
        goto label_160888;
    }
    ctx->pc = 0x160880u;
    SET_GPR_U32(ctx, 31, 0x160888u);
    ctx->pc = 0x160884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160880u;
    // 0x160884: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F58u, 0x160880u, 0x160888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160888u;
label_160888:
    // 0x160888: 0xc044152  jal         func_110548
label_16088c:
    if (ctx->pc == 0x16088Cu) {
        ctx->pc = 0x16088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160888u;
        // 0x16088c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160890u;
        goto label_160890;
    }
    ctx->pc = 0x160888u;
    SET_GPR_U32(ctx, 31, 0x160890u);
    ctx->pc = 0x16088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160888u;
    // 0x16088c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110548u, 0x160888u, 0x160890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160890u;
label_160890:
    // 0x160890: 0xc043eea  jal         func_10FBA8
label_160894:
    if (ctx->pc == 0x160894u) {
        ctx->pc = 0x160894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160890u;
        // 0x160894: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160898u;
        goto label_160898;
    }
    ctx->pc = 0x160890u;
    SET_GPR_U32(ctx, 31, 0x160898u);
    ctx->pc = 0x160894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160890u;
    // 0x160894: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x160890u, 0x160898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160898u;
label_160898:
    // 0x160898: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16089c:
    // 0x16089c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16089cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1608a0:
    // 0x1608a0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1608a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1608a4:
    // 0x1608a4: 0x0  nop
    ctx->pc = 0x1608a4u;
    // NOP
label_1608a8:
    // 0x1608a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1608a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1608ac:
    // 0x1608ac: 0xc047e6c  jal         func_11F9B0
label_1608b0:
    if (ctx->pc == 0x1608B0u) {
        ctx->pc = 0x1608B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608ACu;
        // 0x1608b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608B4u;
        goto label_1608b4;
    }
    ctx->pc = 0x1608ACu;
    SET_GPR_U32(ctx, 31, 0x1608B4u);
    ctx->pc = 0x1608B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1608ACu;
    // 0x1608b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1608ACu, 0x1608B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608B4u;
label_1608b4:
    // 0x1608b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1608b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1608b8:
    // 0x1608b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1608b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1608bc:
    // 0x1608bc: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1608bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1608c0:
    // 0x1608c0: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x1608c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1608c4:
    // 0x1608c4: 0xc0f809  jalr        $a2
label_1608c8:
    if (ctx->pc == 0x1608C8u) {
        ctx->pc = 0x1608C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608C4u;
        // 0x1608c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608CCu;
        goto label_1608cc;
    }
    ctx->pc = 0x1608C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1608CCu);
        ctx->pc = 0x1608C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608C4u;
        // 0x1608c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608C4u, 0x1608CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1608CCu;
label_1608cc:
    // 0x1608cc: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x1608ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1608d0:
    // 0x1608d0: 0x2e440002  sltiu       $a0, $s2, 0x2
    ctx->pc = 0x1608d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1608d4:
    // 0x1608d4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1608d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1608d8:
    // 0x1608d8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1608d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1608dc:
    // 0x1608dc: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1608dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_1608e0:
    // 0x1608e0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_1608e4:
    if (ctx->pc == 0x1608E4u) {
        ctx->pc = 0x1608E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608E0u;
        // 0x1608e4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608E8u;
        goto label_1608e8;
    }
    ctx->pc = 0x1608E0u;
    {
        const bool branch_taken_0x1608e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1608E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608E0u;
        // 0x1608e4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608e0) {
            ctx->pc = 0x1608A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1608a8;
        }
    }
    ctx->pc = 0x1608E8u;
label_1608e8:
    // 0x1608e8: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_1608ec:
    // 0x1608ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1608ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1608f0:
    // 0x1608f0: 0xc043e04  jal         func_10F810
label_1608f4:
    if (ctx->pc == 0x1608F4u) {
        ctx->pc = 0x1608F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608F0u;
        // 0x1608f4: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608F8u;
        goto label_1608f8;
    }
    ctx->pc = 0x1608F0u;
    SET_GPR_U32(ctx, 31, 0x1608F8u);
    ctx->pc = 0x1608F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1608F0u;
    // 0x1608f4: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x1608F0u, 0x1608F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608F8u;
label_1608f8:
    // 0x1608f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1608f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1608fc:
    // 0x1608fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160900:
    // 0x160900: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_160904:
    // 0x160904: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x160904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_160908:
    // 0x160908: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_16090c:
    // 0x16090c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_160910:
    // 0x160910: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x160910u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_160914:
    // 0x160914: 0x944556dc  lhu         $a1, 0x56DC($v0)
    ctx->pc = 0x160914u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_160918:
    // 0x160918: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x160918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_16091c:
    // 0x16091c: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x16091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_160920:
    // 0x160920: 0xc050fda  jal         func_143F68
label_160924:
    if (ctx->pc == 0x160924u) {
        ctx->pc = 0x160924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160920u;
        // 0x160924: 0x24a514e8  addiu       $a1, $a1, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160928u;
        goto label_160928;
    }
    ctx->pc = 0x160920u;
    SET_GPR_U32(ctx, 31, 0x160928u);
    ctx->pc = 0x160924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160920u;
    // 0x160924: 0x24a514e8  addiu       $a1, $a1, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x160920u, 0x160928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160928u;
label_160928:
    // 0x160928: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_16092c:
    // 0x16092c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16092cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160930:
    // 0x160930: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x160930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_160934:
    // 0x160934: 0xc05e2f2  jal         func_178BC8
label_160938:
    if (ctx->pc == 0x160938u) {
        ctx->pc = 0x160938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160934u;
        // 0x160938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16093Cu;
        goto label_16093c;
    }
    ctx->pc = 0x160934u;
    SET_GPR_U32(ctx, 31, 0x16093Cu);
    ctx->pc = 0x160938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160934u;
    // 0x160938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x160934u, 0x16093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16093Cu;
label_16093c:
    // 0x16093c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160940:
    // 0x160940: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x160940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_160944:
    // 0x160944: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x160944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_160948:
    // 0x160948: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x160948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_16094c:
    // 0x16094c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_160950:
    // 0x160950: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_160954:
    // 0x160954: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_160958:
    // 0x160958: 0x60f809  jalr        $v1
label_16095c:
    if (ctx->pc == 0x16095Cu) {
        ctx->pc = 0x16095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160958u;
        // 0x16095c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160960u;
        goto label_160960;
    }
    ctx->pc = 0x160958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160960u);
        ctx->pc = 0x16095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160958u;
        // 0x16095c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160958u, 0x160960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160960u;
label_160960:
    // 0x160960: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x160960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_160964:
    // 0x160964: 0xc108ea6  jal         func_423A98
label_160968:
    if (ctx->pc == 0x160968u) {
        ctx->pc = 0x160968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160964u;
        // 0x160968: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16096Cu;
        goto label_16096c;
    }
    ctx->pc = 0x160964u;
    SET_GPR_U32(ctx, 31, 0x16096Cu);
    ctx->pc = 0x160968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160964u;
    // 0x160968: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423A98u, 0x160964u, 0x16096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16096Cu;
label_16096c:
    // 0x16096c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160970:
    // 0x160970: 0xc066fd4  jal         func_19BF50
label_160974:
    if (ctx->pc == 0x160974u) {
        ctx->pc = 0x160974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160970u;
        // 0x160974: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160978u;
        goto label_160978;
    }
    ctx->pc = 0x160970u;
    SET_GPR_U32(ctx, 31, 0x160978u);
    ctx->pc = 0x160974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160970u;
    // 0x160974: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF50u, 0x160970u, 0x160978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160978u;
label_160978:
    // 0x160978: 0xc0d51da  jal         func_354768
label_16097c:
    if (ctx->pc == 0x16097Cu) {
        ctx->pc = 0x160980u;
        goto label_160980;
    }
    ctx->pc = 0x160978u;
    SET_GPR_U32(ctx, 31, 0x160980u);
    ctx->pc = 0x354768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354768u, 0x160978u, 0x160980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160980u;
label_160980:
    // 0x160980: 0xc08c8f4  jal         func_2323D0
label_160984:
    if (ctx->pc == 0x160984u) {
        ctx->pc = 0x160988u;
        goto label_160988;
    }
    ctx->pc = 0x160980u;
    SET_GPR_U32(ctx, 31, 0x160988u);
    ctx->pc = 0x2323D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2323D0u, 0x160980u, 0x160988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160988u;
label_160988:
    // 0x160988: 0xc105438  jal         func_4150E0
label_16098c:
    if (ctx->pc == 0x16098Cu) {
        ctx->pc = 0x160990u;
        goto label_160990;
    }
    ctx->pc = 0x160988u;
    SET_GPR_U32(ctx, 31, 0x160990u);
    ctx->pc = 0x4150E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4150E0u, 0x160988u, 0x160990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160990u;
label_160990:
    // 0x160990: 0xc104ce6  jal         func_413398
label_160994:
    if (ctx->pc == 0x160994u) {
        ctx->pc = 0x160998u;
        goto label_160998;
    }
    ctx->pc = 0x160990u;
    SET_GPR_U32(ctx, 31, 0x160998u);
    ctx->pc = 0x413398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413398u, 0x160990u, 0x160998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160998u;
label_160998:
    // 0x160998: 0xc104c82  jal         func_413208
label_16099c:
    if (ctx->pc == 0x16099Cu) {
        ctx->pc = 0x1609A0u;
        goto label_1609a0;
    }
    ctx->pc = 0x160998u;
    SET_GPR_U32(ctx, 31, 0x1609A0u);
    ctx->pc = 0x413208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413208u, 0x160998u, 0x1609A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609A0u;
label_1609a0:
    // 0x1609a0: 0xc1053b4  jal         func_414ED0
label_1609a4:
    if (ctx->pc == 0x1609A4u) {
        ctx->pc = 0x1609A8u;
        goto label_1609a8;
    }
    ctx->pc = 0x1609A0u;
    SET_GPR_U32(ctx, 31, 0x1609A8u);
    ctx->pc = 0x414ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414ED0u, 0x1609A0u, 0x1609A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609A8u;
label_1609a8:
    // 0x1609a8: 0xc104dbc  jal         func_4136F0
label_1609ac:
    if (ctx->pc == 0x1609ACu) {
        ctx->pc = 0x1609B0u;
        goto label_1609b0;
    }
    ctx->pc = 0x1609A8u;
    SET_GPR_U32(ctx, 31, 0x1609B0u);
    ctx->pc = 0x4136F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4136F0u, 0x1609A8u, 0x1609B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609B0u;
label_1609b0:
    // 0x1609b0: 0xc047e6c  jal         func_11F9B0
label_1609b4:
    if (ctx->pc == 0x1609B4u) {
        ctx->pc = 0x1609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B0u;
        // 0x1609b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609B8u;
        goto label_1609b8;
    }
    ctx->pc = 0x1609B0u;
    SET_GPR_U32(ctx, 31, 0x1609B8u);
    ctx->pc = 0x1609B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609B0u;
    // 0x1609b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1609B0u, 0x1609B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609B8u;
label_1609b8:
    // 0x1609b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1609b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1609bc:
    // 0x1609bc: 0x8eb1cdb4  lw          $s1, -0x324C($s5)
    ctx->pc = 0x1609bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_1609c0:
    // 0x1609c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1609c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1609c4:
    // 0x1609c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1609c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1609c8:
    // 0x1609c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1609c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1609cc:
    // 0x1609cc: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1609ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1609d0:
    // 0x1609d0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1609d4:
    // 0x1609d4: 0x86060028  lh          $a2, 0x28($s0)
    ctx->pc = 0x1609d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_1609d8:
    // 0x1609d8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1609dc:
    // 0x1609dc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1609dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1609e0:
    // 0x1609e0: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1609e4:
    // 0x1609e4: 0x40f809  jalr        $v0
label_1609e8:
    if (ctx->pc == 0x1609E8u) {
        ctx->pc = 0x1609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E4u;
        // 0x1609e8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609ECu;
        goto label_1609ec;
    }
    ctx->pc = 0x1609E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1609ECu);
        ctx->pc = 0x1609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E4u;
        // 0x1609e8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1609E4u, 0x1609ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1609ECu;
label_1609ec:
    // 0x1609ec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1609ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1609f0:
    // 0x1609f0: 0x84640250  lh          $a0, 0x250($v1)
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 592)));
label_1609f4:
    // 0x1609f4: 0x8c620254  lw          $v0, 0x254($v1)
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 596)));
label_1609f8:
    // 0x1609f8: 0x40f809  jalr        $v0
label_1609fc:
    if (ctx->pc == 0x1609FCu) {
        ctx->pc = 0x1609FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609F8u;
        // 0x1609fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A00u;
        goto label_160a00;
    }
    ctx->pc = 0x1609F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A00u);
        ctx->pc = 0x1609FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609F8u;
        // 0x1609fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1609F8u, 0x160A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A00u;
label_160a00:
    // 0x160a00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x160a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_160a04:
    // 0x160a04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160a08:
    // 0x160a08: 0x84640250  lh          $a0, 0x250($v1)
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 592)));
label_160a0c:
    // 0x160a0c: 0x8c620254  lw          $v0, 0x254($v1)
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 596)));
label_160a10:
    // 0x160a10: 0x40f809  jalr        $v0
label_160a14:
    if (ctx->pc == 0x160A14u) {
        ctx->pc = 0x160A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A10u;
        // 0x160a14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A18u;
        goto label_160a18;
    }
    ctx->pc = 0x160A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A18u);
        ctx->pc = 0x160A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A10u;
        // 0x160a14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A10u, 0x160A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A18u;
label_160a18:
    // 0x160a18: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x160a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_160a1c:
    // 0x160a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x160a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160a20:
    // 0x160a20: 0x846401f0  lh          $a0, 0x1F0($v1)
    ctx->pc = 0x160a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 496)));
label_160a24:
    // 0x160a24: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x160a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_160a28:
    // 0x160a28: 0x40f809  jalr        $v0
label_160a2c:
    if (ctx->pc == 0x160A2Cu) {
        ctx->pc = 0x160A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A28u;
        // 0x160a2c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A30u;
        goto label_160a30;
    }
    ctx->pc = 0x160A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A30u);
        ctx->pc = 0x160A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A28u;
        // 0x160a2c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A28u, 0x160A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A30u;
label_160a30:
    // 0x160a30: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x160a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_160a34:
    // 0x160a34: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x160a34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_160a38:
    // 0x160a38: 0x84640200  lh          $a0, 0x200($v1)
    ctx->pc = 0x160a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 512)));
label_160a3c:
    // 0x160a3c: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
label_160a40:
    // 0x160a40: 0x40f809  jalr        $v0
label_160a44:
    if (ctx->pc == 0x160A44u) {
        ctx->pc = 0x160A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A40u;
        // 0x160a44: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A48u;
        goto label_160a48;
    }
    ctx->pc = 0x160A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A48u);
        ctx->pc = 0x160A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A40u;
        // 0x160a44: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A40u, 0x160A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A48u;
label_160a48:
    // 0x160a48: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x160a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_160a4c:
    // 0x160a4c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x160a4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_160a50:
    // 0x160a50: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_160a54:
    // 0x160a54: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x160a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_160a58:
    // 0x160a58: 0x40f809  jalr        $v0
label_160a5c:
    if (ctx->pc == 0x160A5Cu) {
        ctx->pc = 0x160A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A58u;
        // 0x160a5c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A60u;
        goto label_160a60;
    }
    ctx->pc = 0x160A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A60u);
        ctx->pc = 0x160A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A58u;
        // 0x160a5c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A58u, 0x160A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A60u;
label_160a60:
    // 0x160a60: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x160a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_160a64:
    // 0x160a64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x160a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_160a68:
    // 0x160a68: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x160a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_160a6c:
    // 0x160a6c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x160a6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_160a70:
    // 0x160a70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_160a74:
    // 0x160a74: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x160a74u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_160a78:
    // 0x160a78: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x160a78u;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
label_160a7c:
    // 0x160a7c: 0x40f809  jalr        $v0
label_160a80:
    if (ctx->pc == 0x160A80u) {
        ctx->pc = 0x160A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A7Cu;
        // 0x160a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A84u;
        goto label_160a84;
    }
    ctx->pc = 0x160A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A84u);
        ctx->pc = 0x160A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A7Cu;
        // 0x160a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A7Cu, 0x160A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A84u;
label_160a84:
    // 0x160a84: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x160a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_160a88:
    // 0x160a88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x160a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_160a8c:
    // 0x160a8c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x160a8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_160a90:
    // 0x160a90: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_160a94:
    // 0x160a94: 0x60f809  jalr        $v1
label_160a98:
    if (ctx->pc == 0x160A98u) {
        ctx->pc = 0x160A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A94u;
        // 0x160a98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A9Cu;
        goto label_160a9c;
    }
    ctx->pc = 0x160A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160A9Cu);
        ctx->pc = 0x160A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A94u;
        // 0x160a98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A94u, 0x160A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160A9Cu;
label_160a9c:
    // 0x160a9c: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_160aa0:
    // 0x160aa0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x160aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_160aa4:
    // 0x160aa4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x160aa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_160aa8:
    // 0x160aa8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x160aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_160aac:
    // 0x160aac: 0x60f809  jalr        $v1
label_160ab0:
    if (ctx->pc == 0x160AB0u) {
        ctx->pc = 0x160AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AACu;
        // 0x160ab0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AB4u;
        goto label_160ab4;
    }
    ctx->pc = 0x160AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160AB4u);
        ctx->pc = 0x160AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AACu;
        // 0x160ab0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160AACu, 0x160AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160AB4u;
label_160ab4:
    // 0x160ab4: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x160ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_160ab8:
    // 0x160ab8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_160abc:
    if (ctx->pc == 0x160ABCu) {
        ctx->pc = 0x160ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AB8u;
        // 0x160abc: 0x8eb1cdb4  lw          $s1, -0x324C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AC0u;
        goto label_160ac0;
    }
    ctx->pc = 0x160AB8u;
    {
        const bool branch_taken_0x160ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AB8u;
        // 0x160abc: 0x8eb1cdb4  lw          $s1, -0x324C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ab8) {
            ctx->pc = 0x1609C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1609c0;
        }
    }
    ctx->pc = 0x160AC0u;
label_160ac0:
    // 0x160ac0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_160ac4:
    // 0x160ac4: 0x8cc5cdb4  lw          $a1, -0x324C($a2)
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954420)));
label_160ac8:
    // 0x160ac8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160acc:
    // 0x160acc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_160ad0:
    // 0x160ad0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_160ad4:
    // 0x160ad4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_160ad8:
    // 0x160ad8: 0x60f809  jalr        $v1
label_160adc:
    if (ctx->pc == 0x160ADCu) {
        ctx->pc = 0x160ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AD8u;
        // 0x160adc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AE0u;
        goto label_160ae0;
    }
    ctx->pc = 0x160AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160AE0u);
        ctx->pc = 0x160ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AD8u;
        // 0x160adc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160AD8u, 0x160AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160AE0u;
label_160ae0:
    // 0x160ae0: 0xc05b0bc  jal         func_16C2F0
label_160ae4:
    if (ctx->pc == 0x160AE4u) {
        ctx->pc = 0x160AE8u;
        goto label_160ae8;
    }
    ctx->pc = 0x160AE0u;
    SET_GPR_U32(ctx, 31, 0x160AE8u);
    ctx->pc = 0x16C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C2F0u, 0x160AE0u, 0x160AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AE8u;
label_160ae8:
    // 0x160ae8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_160aec:
    // 0x160aec: 0xc06ba60  jal         func_1AE980
label_160af0:
    if (ctx->pc == 0x160AF0u) {
        ctx->pc = 0x160AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AECu;
        // 0x160af0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AF4u;
        goto label_160af4;
    }
    ctx->pc = 0x160AECu;
    SET_GPR_U32(ctx, 31, 0x160AF4u);
    ctx->pc = 0x160AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AECu;
    // 0x160af0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE980u, 0x160AECu, 0x160AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AF4u;
label_160af4:
    // 0x160af4: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x160af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_160af8:
    // 0x160af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160afc:
    // 0x160afc: 0x24066798  addiu       $a2, $zero, 0x6798
    ctx->pc = 0x160afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26520));
label_160b00:
    // 0x160b00: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x160b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_160b04:
    // 0x160b04: 0xc10c1fa  jal         func_4307E8
label_160b08:
    if (ctx->pc == 0x160B08u) {
        ctx->pc = 0x160B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B04u;
        // 0x160b08: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B0Cu;
        goto label_160b0c;
    }
    ctx->pc = 0x160B04u;
    SET_GPR_U32(ctx, 31, 0x160B0Cu);
    ctx->pc = 0x160B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B04u;
    // 0x160b08: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x160B04u, 0x160B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B0Cu;
label_160b0c:
    // 0x160b0c: 0xc0e8ad2  jal         func_3A2B48
label_160b10:
    if (ctx->pc == 0x160B10u) {
        ctx->pc = 0x160B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B0Cu;
        // 0x160b10: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B14u;
        goto label_160b14;
    }
    ctx->pc = 0x160B0Cu;
    SET_GPR_U32(ctx, 31, 0x160B14u);
    ctx->pc = 0x160B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B0Cu;
    // 0x160b10: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2B48u, 0x160B0Cu, 0x160B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B14u;
label_160b14:
    // 0x160b14: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x160b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_160b18:
    // 0x160b18: 0xc0e604c  jal         func_398130
label_160b1c:
    if (ctx->pc == 0x160B1Cu) {
        ctx->pc = 0x160B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B18u;
        // 0x160b1c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B20u;
        goto label_160b20;
    }
    ctx->pc = 0x160B18u;
    SET_GPR_U32(ctx, 31, 0x160B20u);
    ctx->pc = 0x160B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B18u;
    // 0x160b1c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398130u, 0x160B18u, 0x160B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B20u;
label_160b20:
    // 0x160b20: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x160b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_160b24:
    // 0x160b24: 0xc0e39b0  jal         func_38E6C0
label_160b28:
    if (ctx->pc == 0x160B28u) {
        ctx->pc = 0x160B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B24u;
        // 0x160b28: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B2Cu;
        goto label_160b2c;
    }
    ctx->pc = 0x160B24u;
    SET_GPR_U32(ctx, 31, 0x160B2Cu);
    ctx->pc = 0x160B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B24u;
    // 0x160b28: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E6C0u, 0x160B24u, 0x160B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B2Cu;
label_160b2c:
    // 0x160b2c: 0xc10568e  jal         func_415A38
label_160b30:
    if (ctx->pc == 0x160B30u) {
        ctx->pc = 0x160B34u;
        goto label_160b34;
    }
    ctx->pc = 0x160B2Cu;
    SET_GPR_U32(ctx, 31, 0x160B34u);
    ctx->pc = 0x415A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415A38u, 0x160B2Cu, 0x160B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B34u;
label_160b34:
    // 0x160b34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_160b38:
    // 0x160b38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x160b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160b3c:
    // 0x160b3c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x160b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160b40:
    // 0x160b40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160b44:
    // 0x160b44: 0xc047b82  jal         func_11EE08
label_160b48:
    if (ctx->pc == 0x160B48u) {
        ctx->pc = 0x160B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B44u;
        // 0x160b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B4Cu;
        goto label_160b4c;
    }
    ctx->pc = 0x160B44u;
    SET_GPR_U32(ctx, 31, 0x160B4Cu);
    ctx->pc = 0x160B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B44u;
    // 0x160b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x160B44u, 0x160B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B4Cu;
label_160b4c:
    // 0x160b4c: 0xc047aa0  jal         func_11EA80
label_160b50:
    if (ctx->pc == 0x160B50u) {
        ctx->pc = 0x160B54u;
        goto label_160b54;
    }
    ctx->pc = 0x160B4Cu;
    SET_GPR_U32(ctx, 31, 0x160B54u);
    ctx->pc = 0x11EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA80u, 0x160B4Cu, 0x160B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B54u;
label_160b54:
    // 0x160b54: 0xc0e1210  jal         func_384840
label_160b58:
    if (ctx->pc == 0x160B58u) {
        ctx->pc = 0x160B5Cu;
        goto label_160b5c;
    }
    ctx->pc = 0x160B54u;
    SET_GPR_U32(ctx, 31, 0x160B5Cu);
    ctx->pc = 0x384840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384840u, 0x160B54u, 0x160B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B5Cu;
label_160b5c:
    // 0x160b5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160b60:
    // 0x160b60: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_160b64:
    // 0x160b64: 0xc103d6e  jal         func_40F5B8
label_160b68:
    if (ctx->pc == 0x160B68u) {
        ctx->pc = 0x160B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B64u;
        // 0x160b68: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B6Cu;
        goto label_160b6c;
    }
    ctx->pc = 0x160B64u;
    SET_GPR_U32(ctx, 31, 0x160B6Cu);
    ctx->pc = 0x160B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B64u;
    // 0x160b68: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F5B8u, 0x160B64u, 0x160B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B6Cu;
label_160b6c:
    // 0x160b6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160b70:
    // 0x160b70: 0xc0616b8  jal         func_185AE0
label_160b74:
    if (ctx->pc == 0x160B74u) {
        ctx->pc = 0x160B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B70u;
        // 0x160b74: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B78u;
        goto label_160b78;
    }
    ctx->pc = 0x160B70u;
    SET_GPR_U32(ctx, 31, 0x160B78u);
    ctx->pc = 0x160B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B70u;
    // 0x160b74: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AE0u, 0x160B70u, 0x160B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B78u;
label_160b78:
    // 0x160b78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160b7c:
    // 0x160b7c: 0xc0622aa  jal         func_188AA8
label_160b80:
    if (ctx->pc == 0x160B80u) {
        ctx->pc = 0x160B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B7Cu;
        // 0x160b80: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B84u;
        goto label_160b84;
    }
    ctx->pc = 0x160B7Cu;
    SET_GPR_U32(ctx, 31, 0x160B84u);
    ctx->pc = 0x160B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B7Cu;
    // 0x160b80: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AA8u, 0x160B7Cu, 0x160B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B84u;
label_160b84:
    // 0x160b84: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x160b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_160b88:
    // 0x160b88: 0xc0625c6  jal         func_189718
label_160b8c:
    if (ctx->pc == 0x160B8Cu) {
        ctx->pc = 0x160B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B88u;
        // 0x160b8c: 0x8cc4cd4c  lw          $a0, -0x32B4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B90u;
        goto label_160b90;
    }
    ctx->pc = 0x160B88u;
    SET_GPR_U32(ctx, 31, 0x160B90u);
    ctx->pc = 0x160B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B88u;
    // 0x160b8c: 0x8cc4cd4c  lw          $a0, -0x32B4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189718u, 0x160B88u, 0x160B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B90u;
label_160b90:
    // 0x160b90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160b94:
    // 0x160b94: 0xc05f9b0  jal         func_17E6C0
label_160b98:
    if (ctx->pc == 0x160B98u) {
        ctx->pc = 0x160B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B94u;
        // 0x160b98: 0x8c64cce4  lw          $a0, -0x331C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B9Cu;
        goto label_160b9c;
    }
    ctx->pc = 0x160B94u;
    SET_GPR_U32(ctx, 31, 0x160B9Cu);
    ctx->pc = 0x160B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B94u;
    // 0x160b98: 0x8c64cce4  lw          $a0, -0x331C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E6C0u, 0x160B94u, 0x160B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B9Cu;
label_160b9c:
    // 0x160b9c: 0xc0d5914  jal         func_356450
label_160ba0:
    if (ctx->pc == 0x160BA0u) {
        ctx->pc = 0x160BA4u;
        goto label_160ba4;
    }
    ctx->pc = 0x160B9Cu;
    SET_GPR_U32(ctx, 31, 0x160BA4u);
    ctx->pc = 0x356450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356450u, 0x160B9Cu, 0x160BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BA4u;
label_160ba4:
    // 0x160ba4: 0xc08daf8  jal         func_236BE0
label_160ba8:
    if (ctx->pc == 0x160BA8u) {
        ctx->pc = 0x160BACu;
        goto label_160bac;
    }
    ctx->pc = 0x160BA4u;
    SET_GPR_U32(ctx, 31, 0x160BACu);
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x160BA4u, 0x160BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BACu;
label_160bac:
    // 0x160bac: 0xc0d58e4  jal         func_356390
label_160bb0:
    if (ctx->pc == 0x160BB0u) {
        ctx->pc = 0x160BB4u;
        goto label_160bb4;
    }
    ctx->pc = 0x160BACu;
    SET_GPR_U32(ctx, 31, 0x160BB4u);
    ctx->pc = 0x356390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356390u, 0x160BACu, 0x160BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BB4u;
label_160bb4:
    // 0x160bb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160bb8:
    // 0x160bb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x160bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_160bbc:
    // 0x160bbc: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x160bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_160bc0:
    // 0x160bc0: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x160bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_160bc4:
    // 0x160bc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_160bc8:
    // 0x160bc8: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x160bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_160bcc:
    // 0x160bcc: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x160bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_160bd0:
    // 0x160bd0: 0x60f809  jalr        $v1
label_160bd4:
    if (ctx->pc == 0x160BD4u) {
        ctx->pc = 0x160BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BD0u;
        // 0x160bd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BD8u;
        goto label_160bd8;
    }
    ctx->pc = 0x160BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160BD8u);
        ctx->pc = 0x160BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BD0u;
        // 0x160bd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160BD0u, 0x160BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160BD8u;
label_160bd8:
    // 0x160bd8: 0xc052548  jal         func_149520
label_160bdc:
    if (ctx->pc == 0x160BDCu) {
        ctx->pc = 0x160BE0u;
        goto label_160be0;
    }
    ctx->pc = 0x160BD8u;
    SET_GPR_U32(ctx, 31, 0x160BE0u);
    ctx->pc = 0x149520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149520u, 0x160BD8u, 0x160BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BE0u;
label_160be0:
    // 0x160be0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_160be4:
    // 0x160be4: 0x8cc5b734  lw          $a1, -0x48CC($a2)
    ctx->pc = 0x160be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
label_160be8:
    // 0x160be8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x160be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_160bec:
    // 0x160bec: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x160becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_160bf0:
    // 0x160bf0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x160bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_160bf4:
    // 0x160bf4: 0x40f809  jalr        $v0
label_160bf8:
    if (ctx->pc == 0x160BF8u) {
        ctx->pc = 0x160BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BF4u;
        // 0x160bf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BFCu;
        goto label_160bfc;
    }
    ctx->pc = 0x160BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160BFCu);
        ctx->pc = 0x160BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BF4u;
        // 0x160bf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160BF4u, 0x160BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160BFCu;
label_160bfc:
    // 0x160bfc: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_160c00:
    if (ctx->pc == 0x160C00u) {
        ctx->pc = 0x160C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BFCu;
        // 0x160c00: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C04u;
        goto label_160c04;
    }
    ctx->pc = 0x160BFCu;
    {
        const bool branch_taken_0x160bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x160C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BFCu;
        // 0x160c00: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bfc) {
            ctx->pc = 0x160C24u;
            goto label_160c24;
        }
    }
    ctx->pc = 0x160C04u;
label_160c04:
    // 0x160c04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160c08:
    // 0x160c08: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_160c0c:
    // 0x160c0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x160c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_160c10:
    // 0x160c10: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x160c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_160c14:
    // 0x160c14: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x160c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_160c18:
    // 0x160c18: 0x60f809  jalr        $v1
label_160c1c:
    if (ctx->pc == 0x160C1Cu) {
        ctx->pc = 0x160C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C18u;
        // 0x160c1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C20u;
        goto label_160c20;
    }
    ctx->pc = 0x160C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160C20u);
        ctx->pc = 0x160C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C18u;
        // 0x160c1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160C18u, 0x160C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160C20u;
label_160c20:
    // 0x160c20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160c24:
    // 0x160c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160c28:
    // 0x160c28: 0xc108d6a  jal         func_4235A8
label_160c2c:
    if (ctx->pc == 0x160C2Cu) {
        ctx->pc = 0x160C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C28u;
        // 0x160c2c: 0x8c64504c  lw          $a0, 0x504C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C30u;
        goto label_160c30;
    }
    ctx->pc = 0x160C28u;
    SET_GPR_U32(ctx, 31, 0x160C30u);
    ctx->pc = 0x160C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C28u;
    // 0x160c2c: 0x8c64504c  lw          $a0, 0x504C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4235A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4235A8u, 0x160C28u, 0x160C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C30u;
label_160c30:
    // 0x160c30: 0xc057f94  jal         func_15FE50
label_160c34:
    if (ctx->pc == 0x160C34u) {
        ctx->pc = 0x160C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C30u;
        // 0x160c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C38u;
        goto label_160c38;
    }
    ctx->pc = 0x160C30u;
    SET_GPR_U32(ctx, 31, 0x160C38u);
    ctx->pc = 0x160C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C30u;
    // 0x160c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE50u, 0x160C30u, 0x160C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C38u;
label_160c38:
    // 0x160c38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x160c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_160c3c:
    // 0x160c3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x160c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_160c40:
    // 0x160c40: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x160c40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_160c44:
    // 0x160c44: 0xa0406810  sb          $zero, 0x6810($v0)
    ctx->pc = 0x160c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26640), (uint8_t)GPR_U32(ctx, 0));
label_160c48:
    // 0x160c48: 0xa0606830  sb          $zero, 0x6830($v1)
    ctx->pc = 0x160c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26672), (uint8_t)GPR_U32(ctx, 0));
label_160c4c:
    // 0x160c4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x160c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_160c50:
    // 0x160c50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160c54:
    // 0x160c54: 0x8cc4504c  lw          $a0, 0x504C($a2)
    ctx->pc = 0x160c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20556)));
label_160c58:
    // 0x160c58: 0xac60027c  sw          $zero, 0x27C($v1)
    ctx->pc = 0x160c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
label_160c5c:
    // 0x160c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160c60:
    // 0x160c60: 0xc108cea  jal         func_4233A8
label_160c64:
    if (ctx->pc == 0x160C64u) {
        ctx->pc = 0x160C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C60u;
        // 0x160c64: 0xa0406850  sb          $zero, 0x6850($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 26704), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C68u;
        goto label_160c68;
    }
    ctx->pc = 0x160C60u;
    SET_GPR_U32(ctx, 31, 0x160C68u);
    ctx->pc = 0x160C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C60u;
    // 0x160c64: 0xa0406850  sb          $zero, 0x6850($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 26704), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4233A8u, 0x160C60u, 0x160C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C68u;
label_160c68:
    // 0x160c68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160c6c:
    // 0x160c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160c70:
    // 0x160c70: 0x8c44504c  lw          $a0, 0x504C($v0)
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20556)));
label_160c74:
    // 0x160c74: 0xc108d78  jal         func_4235E0
label_160c78:
    if (ctx->pc == 0x160C78u) {
        ctx->pc = 0x160C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C74u;
        // 0x160c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C7Cu;
        goto label_160c7c;
    }
    ctx->pc = 0x160C74u;
    SET_GPR_U32(ctx, 31, 0x160C7Cu);
    ctx->pc = 0x160C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C74u;
    // 0x160c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4235E0u, 0x160C74u, 0x160C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C7Cu;
label_160c7c:
    // 0x160c7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x160c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_160c80:
    // 0x160c80: 0xc05c154  jal         func_170550
label_160c84:
    if (ctx->pc == 0x160C84u) {
        ctx->pc = 0x160C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C80u;
        // 0x160c84: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C88u;
        goto label_160c88;
    }
    ctx->pc = 0x160C80u;
    SET_GPR_U32(ctx, 31, 0x160C88u);
    ctx->pc = 0x160C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C80u;
    // 0x160c84: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170550u, 0x160C80u, 0x160C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C88u;
label_160c88:
    // 0x160c88: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_160c8c:
    // 0x160c8c: 0xc05c69a  jal         func_171A68
label_160c90:
    if (ctx->pc == 0x160C90u) {
        ctx->pc = 0x160C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C8Cu;
        // 0x160c90: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C94u;
        goto label_160c94;
    }
    ctx->pc = 0x160C8Cu;
    SET_GPR_U32(ctx, 31, 0x160C94u);
    ctx->pc = 0x160C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C8Cu;
    // 0x160c90: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171A68u, 0x160C8Cu, 0x160C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C94u;
label_160c94:
    // 0x160c94: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_160c98:
    // 0x160c98: 0xc060d8a  jal         func_183628
label_160c9c:
    if (ctx->pc == 0x160C9Cu) {
        ctx->pc = 0x160C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C98u;
        // 0x160c9c: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160CA0u;
        goto label_160ca0;
    }
    ctx->pc = 0x160C98u;
    SET_GPR_U32(ctx, 31, 0x160CA0u);
    ctx->pc = 0x160C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C98u;
    // 0x160c9c: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183628u, 0x160C98u, 0x160CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CA0u;
label_160ca0:
    // 0x160ca0: 0xc0a9cca  jal         func_2A7328
label_160ca4:
    if (ctx->pc == 0x160CA4u) {
        ctx->pc = 0x160CA8u;
        goto label_160ca8;
    }
    ctx->pc = 0x160CA0u;
    SET_GPR_U32(ctx, 31, 0x160CA8u);
    ctx->pc = 0x2A7328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7328u, 0x160CA0u, 0x160CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CA8u;
label_160ca8:
    // 0x160ca8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160cac:
    // 0x160cac: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x160cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_160cb0:
    // 0x160cb0: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x160cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_160cb4:
    // 0x160cb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160cb8:
    // 0x160cb8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x160cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_160cbc:
    // 0x160cbc: 0xac5056e8  sw          $s0, 0x56E8($v0)
    ctx->pc = 0x160cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22248), GPR_U32(ctx, 16));
label_160cc0:
    // 0x160cc0: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x160cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
label_160cc4:
    // 0x160cc4: 0xac4056f0  sw          $zero, 0x56F0($v0)
    ctx->pc = 0x160cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22256), GPR_U32(ctx, 0));
label_160cc8:
    // 0x160cc8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x160cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_160ccc:
    // 0x160ccc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x160cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_160cd0:
    // 0x160cd0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x160cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_160cd4:
    // 0x160cd4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x160cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_160cd8:
    // 0x160cd8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x160cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_160cdc:
    // 0x160cdc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x160cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_160ce0:
    // 0x160ce0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x160ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_160ce4:
    // 0x160ce4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x160ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_160ce8:
    // 0x160ce8: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x160ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_160cec:
    // 0x160cec: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x160cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_160cf0:
    // 0x160cf0: 0xac600174  sw          $zero, 0x174($v1)
    ctx->pc = 0x160cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 0));
label_160cf4:
    // 0x160cf4: 0x3e00008  jr          $ra
label_160cf8:
    if (ctx->pc == 0x160CF8u) {
        ctx->pc = 0x160CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CF4u;
        // 0x160cf8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160CFCu;
        goto label_160cfc;
    }
    ctx->pc = 0x160CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CF4u;
        // 0x160cf8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160CFCu;
label_160cfc:
    // 0x160cfc: 0x0  nop
    ctx->pc = 0x160cfcu;
    // NOP
    ctx->pc = 0x160d00u;
}
