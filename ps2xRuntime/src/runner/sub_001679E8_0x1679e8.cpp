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

// Function: sub_001679E8
// Address: 0x1679e8 - 0x167ea8
void sub_001679E8_0x1679e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001679E8_0x1679e8");
#endif

    switch (ctx->pc) {
        case 0x1679e8u: goto label_1679e8;
        case 0x1679ecu: goto label_1679ec;
        case 0x1679f0u: goto label_1679f0;
        case 0x1679f4u: goto label_1679f4;
        case 0x1679f8u: goto label_1679f8;
        case 0x1679fcu: goto label_1679fc;
        case 0x167a00u: goto label_167a00;
        case 0x167a04u: goto label_167a04;
        case 0x167a08u: goto label_167a08;
        case 0x167a0cu: goto label_167a0c;
        case 0x167a10u: goto label_167a10;
        case 0x167a14u: goto label_167a14;
        case 0x167a18u: goto label_167a18;
        case 0x167a1cu: goto label_167a1c;
        case 0x167a20u: goto label_167a20;
        case 0x167a24u: goto label_167a24;
        case 0x167a28u: goto label_167a28;
        case 0x167a2cu: goto label_167a2c;
        case 0x167a30u: goto label_167a30;
        case 0x167a34u: goto label_167a34;
        case 0x167a38u: goto label_167a38;
        case 0x167a3cu: goto label_167a3c;
        case 0x167a40u: goto label_167a40;
        case 0x167a44u: goto label_167a44;
        case 0x167a48u: goto label_167a48;
        case 0x167a4cu: goto label_167a4c;
        case 0x167a50u: goto label_167a50;
        case 0x167a54u: goto label_167a54;
        case 0x167a58u: goto label_167a58;
        case 0x167a5cu: goto label_167a5c;
        case 0x167a60u: goto label_167a60;
        case 0x167a64u: goto label_167a64;
        case 0x167a68u: goto label_167a68;
        case 0x167a6cu: goto label_167a6c;
        case 0x167a70u: goto label_167a70;
        case 0x167a74u: goto label_167a74;
        case 0x167a78u: goto label_167a78;
        case 0x167a7cu: goto label_167a7c;
        case 0x167a80u: goto label_167a80;
        case 0x167a84u: goto label_167a84;
        case 0x167a88u: goto label_167a88;
        case 0x167a8cu: goto label_167a8c;
        case 0x167a90u: goto label_167a90;
        case 0x167a94u: goto label_167a94;
        case 0x167a98u: goto label_167a98;
        case 0x167a9cu: goto label_167a9c;
        case 0x167aa0u: goto label_167aa0;
        case 0x167aa4u: goto label_167aa4;
        case 0x167aa8u: goto label_167aa8;
        case 0x167aacu: goto label_167aac;
        case 0x167ab0u: goto label_167ab0;
        case 0x167ab4u: goto label_167ab4;
        case 0x167ab8u: goto label_167ab8;
        case 0x167abcu: goto label_167abc;
        case 0x167ac0u: goto label_167ac0;
        case 0x167ac4u: goto label_167ac4;
        case 0x167ac8u: goto label_167ac8;
        case 0x167accu: goto label_167acc;
        case 0x167ad0u: goto label_167ad0;
        case 0x167ad4u: goto label_167ad4;
        case 0x167ad8u: goto label_167ad8;
        case 0x167adcu: goto label_167adc;
        case 0x167ae0u: goto label_167ae0;
        case 0x167ae4u: goto label_167ae4;
        case 0x167ae8u: goto label_167ae8;
        case 0x167aecu: goto label_167aec;
        case 0x167af0u: goto label_167af0;
        case 0x167af4u: goto label_167af4;
        case 0x167af8u: goto label_167af8;
        case 0x167afcu: goto label_167afc;
        case 0x167b00u: goto label_167b00;
        case 0x167b04u: goto label_167b04;
        case 0x167b08u: goto label_167b08;
        case 0x167b0cu: goto label_167b0c;
        case 0x167b10u: goto label_167b10;
        case 0x167b14u: goto label_167b14;
        case 0x167b18u: goto label_167b18;
        case 0x167b1cu: goto label_167b1c;
        case 0x167b20u: goto label_167b20;
        case 0x167b24u: goto label_167b24;
        case 0x167b28u: goto label_167b28;
        case 0x167b2cu: goto label_167b2c;
        case 0x167b30u: goto label_167b30;
        case 0x167b34u: goto label_167b34;
        case 0x167b38u: goto label_167b38;
        case 0x167b3cu: goto label_167b3c;
        case 0x167b40u: goto label_167b40;
        case 0x167b44u: goto label_167b44;
        case 0x167b48u: goto label_167b48;
        case 0x167b4cu: goto label_167b4c;
        case 0x167b50u: goto label_167b50;
        case 0x167b54u: goto label_167b54;
        case 0x167b58u: goto label_167b58;
        case 0x167b5cu: goto label_167b5c;
        case 0x167b60u: goto label_167b60;
        case 0x167b64u: goto label_167b64;
        case 0x167b68u: goto label_167b68;
        case 0x167b6cu: goto label_167b6c;
        case 0x167b70u: goto label_167b70;
        case 0x167b74u: goto label_167b74;
        case 0x167b78u: goto label_167b78;
        case 0x167b7cu: goto label_167b7c;
        case 0x167b80u: goto label_167b80;
        case 0x167b84u: goto label_167b84;
        case 0x167b88u: goto label_167b88;
        case 0x167b8cu: goto label_167b8c;
        case 0x167b90u: goto label_167b90;
        case 0x167b94u: goto label_167b94;
        case 0x167b98u: goto label_167b98;
        case 0x167b9cu: goto label_167b9c;
        case 0x167ba0u: goto label_167ba0;
        case 0x167ba4u: goto label_167ba4;
        case 0x167ba8u: goto label_167ba8;
        case 0x167bacu: goto label_167bac;
        case 0x167bb0u: goto label_167bb0;
        case 0x167bb4u: goto label_167bb4;
        case 0x167bb8u: goto label_167bb8;
        case 0x167bbcu: goto label_167bbc;
        case 0x167bc0u: goto label_167bc0;
        case 0x167bc4u: goto label_167bc4;
        case 0x167bc8u: goto label_167bc8;
        case 0x167bccu: goto label_167bcc;
        case 0x167bd0u: goto label_167bd0;
        case 0x167bd4u: goto label_167bd4;
        case 0x167bd8u: goto label_167bd8;
        case 0x167bdcu: goto label_167bdc;
        case 0x167be0u: goto label_167be0;
        case 0x167be4u: goto label_167be4;
        case 0x167be8u: goto label_167be8;
        case 0x167becu: goto label_167bec;
        case 0x167bf0u: goto label_167bf0;
        case 0x167bf4u: goto label_167bf4;
        case 0x167bf8u: goto label_167bf8;
        case 0x167bfcu: goto label_167bfc;
        case 0x167c00u: goto label_167c00;
        case 0x167c04u: goto label_167c04;
        case 0x167c08u: goto label_167c08;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c10u: goto label_167c10;
        case 0x167c14u: goto label_167c14;
        case 0x167c18u: goto label_167c18;
        case 0x167c1cu: goto label_167c1c;
        case 0x167c20u: goto label_167c20;
        case 0x167c24u: goto label_167c24;
        case 0x167c28u: goto label_167c28;
        case 0x167c2cu: goto label_167c2c;
        case 0x167c30u: goto label_167c30;
        case 0x167c34u: goto label_167c34;
        case 0x167c38u: goto label_167c38;
        case 0x167c3cu: goto label_167c3c;
        case 0x167c40u: goto label_167c40;
        case 0x167c44u: goto label_167c44;
        case 0x167c48u: goto label_167c48;
        case 0x167c4cu: goto label_167c4c;
        case 0x167c50u: goto label_167c50;
        case 0x167c54u: goto label_167c54;
        case 0x167c58u: goto label_167c58;
        case 0x167c5cu: goto label_167c5c;
        case 0x167c60u: goto label_167c60;
        case 0x167c64u: goto label_167c64;
        case 0x167c68u: goto label_167c68;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c70u: goto label_167c70;
        case 0x167c74u: goto label_167c74;
        case 0x167c78u: goto label_167c78;
        case 0x167c7cu: goto label_167c7c;
        case 0x167c80u: goto label_167c80;
        case 0x167c84u: goto label_167c84;
        case 0x167c88u: goto label_167c88;
        case 0x167c8cu: goto label_167c8c;
        case 0x167c90u: goto label_167c90;
        case 0x167c94u: goto label_167c94;
        case 0x167c98u: goto label_167c98;
        case 0x167c9cu: goto label_167c9c;
        case 0x167ca0u: goto label_167ca0;
        case 0x167ca4u: goto label_167ca4;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cacu: goto label_167cac;
        case 0x167cb0u: goto label_167cb0;
        case 0x167cb4u: goto label_167cb4;
        case 0x167cb8u: goto label_167cb8;
        case 0x167cbcu: goto label_167cbc;
        case 0x167cc0u: goto label_167cc0;
        case 0x167cc4u: goto label_167cc4;
        case 0x167cc8u: goto label_167cc8;
        case 0x167cccu: goto label_167ccc;
        case 0x167cd0u: goto label_167cd0;
        case 0x167cd4u: goto label_167cd4;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cdcu: goto label_167cdc;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce4u: goto label_167ce4;
        case 0x167ce8u: goto label_167ce8;
        case 0x167cecu: goto label_167cec;
        case 0x167cf0u: goto label_167cf0;
        case 0x167cf4u: goto label_167cf4;
        case 0x167cf8u: goto label_167cf8;
        case 0x167cfcu: goto label_167cfc;
        case 0x167d00u: goto label_167d00;
        case 0x167d04u: goto label_167d04;
        case 0x167d08u: goto label_167d08;
        case 0x167d0cu: goto label_167d0c;
        case 0x167d10u: goto label_167d10;
        case 0x167d14u: goto label_167d14;
        case 0x167d18u: goto label_167d18;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d20u: goto label_167d20;
        case 0x167d24u: goto label_167d24;
        case 0x167d28u: goto label_167d28;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d30u: goto label_167d30;
        case 0x167d34u: goto label_167d34;
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        case 0x167e34u: goto label_167e34;
        case 0x167e38u: goto label_167e38;
        case 0x167e3cu: goto label_167e3c;
        case 0x167e40u: goto label_167e40;
        case 0x167e44u: goto label_167e44;
        case 0x167e48u: goto label_167e48;
        case 0x167e4cu: goto label_167e4c;
        case 0x167e50u: goto label_167e50;
        case 0x167e54u: goto label_167e54;
        case 0x167e58u: goto label_167e58;
        case 0x167e5cu: goto label_167e5c;
        case 0x167e60u: goto label_167e60;
        case 0x167e64u: goto label_167e64;
        case 0x167e68u: goto label_167e68;
        case 0x167e6cu: goto label_167e6c;
        case 0x167e70u: goto label_167e70;
        case 0x167e74u: goto label_167e74;
        case 0x167e78u: goto label_167e78;
        case 0x167e7cu: goto label_167e7c;
        case 0x167e80u: goto label_167e80;
        case 0x167e84u: goto label_167e84;
        case 0x167e88u: goto label_167e88;
        case 0x167e8cu: goto label_167e8c;
        case 0x167e90u: goto label_167e90;
        case 0x167e94u: goto label_167e94;
        case 0x167e98u: goto label_167e98;
        case 0x167e9cu: goto label_167e9c;
        case 0x167ea0u: goto label_167ea0;
        case 0x167ea4u: goto label_167ea4;
        default: break;
    }

    ctx->pc = 0x1679e8u;

label_1679e8:
    // 0x1679e8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1679e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1679ec:
    // 0x1679ec: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1679ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1679f0:
    // 0x1679f0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1679f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1679f4:
    // 0x1679f4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1679f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1679f8:
    // 0x1679f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1679f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1679fc:
    // 0x1679fc: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1679fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_167a00:
    // 0x167a00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x167a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167a04:
    // 0x167a04: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x167a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_167a08:
    // 0x167a08: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x167a08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_167a0c:
    // 0x167a0c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x167a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_167a10:
    // 0x167a10: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x167a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_167a14:
    // 0x167a14: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x167a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_167a18:
    // 0x167a18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x167a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_167a1c:
    // 0x167a1c: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x167a1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_167a20:
    // 0x167a20: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x167a20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_167a24:
    // 0x167a24: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x167a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_167a28:
    // 0x167a28: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x167a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_167a2c:
    // 0x167a2c: 0xc047e6c  jal         func_11F9B0
label_167a30:
    if (ctx->pc == 0x167A30u) {
        ctx->pc = 0x167A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A2Cu;
        // 0x167a30: 0x826400e1  lb          $a0, 0xE1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A34u;
        goto label_167a34;
    }
    ctx->pc = 0x167A2Cu;
    SET_GPR_U32(ctx, 31, 0x167A34u);
    ctx->pc = 0x167A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A2Cu;
    // 0x167a30: 0x826400e1  lb          $a0, 0xE1($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x167A2Cu, 0x167A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A34u;
label_167a34:
    // 0x167a34: 0x826300e1  lb          $v1, 0xE1($s3)
    ctx->pc = 0x167a34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
label_167a38:
    // 0x167a38: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_167a3c:
    if (ctx->pc == 0x167A3Cu) {
        ctx->pc = 0x167A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A38u;
        // 0x167a3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A40u;
        goto label_167a40;
    }
    ctx->pc = 0x167A38u;
    {
        const bool branch_taken_0x167a38 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x167A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A38u;
        // 0x167a3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a38) {
            ctx->pc = 0x167A54u;
            goto label_167a54;
        }
    }
    ctx->pc = 0x167A40u;
label_167a40:
    // 0x167a40: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_167a44:
    if (ctx->pc == 0x167A44u) {
        ctx->pc = 0x167A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A40u;
        // 0x167a44: 0x826400e1  lb          $a0, 0xE1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A48u;
        goto label_167a48;
    }
    ctx->pc = 0x167A40u;
    {
        const bool branch_taken_0x167a40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x167a40) {
            ctx->pc = 0x167A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A40u;
            // 0x167a44: 0x826400e1  lb          $a0, 0xE1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167A60u;
            goto label_167a60;
        }
    }
    ctx->pc = 0x167A48u;
label_167a48:
    // 0x167a48: 0xc047e6c  jal         func_11F9B0
label_167a4c:
    if (ctx->pc == 0x167A4Cu) {
        ctx->pc = 0x167A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A48u;
        // 0x167a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A50u;
        goto label_167a50;
    }
    ctx->pc = 0x167A48u;
    SET_GPR_U32(ctx, 31, 0x167A50u);
    ctx->pc = 0x167A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A48u;
    // 0x167a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x167A48u, 0x167A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A50u;
label_167a50:
    // 0x167a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x167a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167a54:
    // 0x167a54: 0x12200104  beqz        $s1, . + 4 + (0x104 << 2)
label_167a58:
    if (ctx->pc == 0x167A58u) {
        ctx->pc = 0x167A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A54u;
        // 0x167a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A5Cu;
        goto label_167a5c;
    }
    ctx->pc = 0x167A54u;
    {
        const bool branch_taken_0x167a54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A54u;
        // 0x167a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a54) {
            ctx->pc = 0x167E68u;
            goto label_167e68;
        }
    }
    ctx->pc = 0x167A5Cu;
label_167a5c:
    // 0x167a5c: 0x826400e1  lb          $a0, 0xE1($s3)
    ctx->pc = 0x167a5cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
label_167a60:
    // 0x167a60: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x167a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_167a64:
    // 0x167a64: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x167a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_167a68:
    // 0x167a68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x167a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_167a6c:
    // 0x167a6c: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x167a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_167a70:
    // 0x167a70: 0xc0e409a  jal         func_390268
label_167a74:
    if (ctx->pc == 0x167A74u) {
        ctx->pc = 0x167A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A70u;
        // 0x167a74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A78u;
        goto label_167a78;
    }
    ctx->pc = 0x167A70u;
    SET_GPR_U32(ctx, 31, 0x167A78u);
    ctx->pc = 0x167A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A70u;
    // 0x167a74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x167A70u, 0x167A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A78u;
label_167a78:
    // 0x167a78: 0x826300e1  lb          $v1, 0xE1($s3)
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 225)));
label_167a7c:
    // 0x167a7c: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
label_167a80:
    if (ctx->pc == 0x167A80u) {
        ctx->pc = 0x167A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A7Cu;
        // 0x167a80: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A84u;
        goto label_167a84;
    }
    ctx->pc = 0x167A7Cu;
    {
        const bool branch_taken_0x167a7c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x167a7c) {
            ctx->pc = 0x167A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A7Cu;
            // 0x167a80: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167A9Cu;
            goto label_167a9c;
        }
    }
    ctx->pc = 0x167A84u;
label_167a84:
    // 0x167a84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_167a88:
    if (ctx->pc == 0x167A88u) {
        ctx->pc = 0x167A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A84u;
        // 0x167a88: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A8Cu;
        goto label_167a8c;
    }
    ctx->pc = 0x167A84u;
    {
        const bool branch_taken_0x167a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167a84) {
            ctx->pc = 0x167A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A84u;
            // 0x167a88: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167A9Cu;
            goto label_167a9c;
        }
    }
    ctx->pc = 0x167A8Cu;
label_167a8c:
    // 0x167a8c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_167a90:
    // 0x167a90: 0xc0e409a  jal         func_390268
label_167a94:
    if (ctx->pc == 0x167A94u) {
        ctx->pc = 0x167A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A90u;
        // 0x167a94: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A98u;
        goto label_167a98;
    }
    ctx->pc = 0x167A90u;
    SET_GPR_U32(ctx, 31, 0x167A98u);
    ctx->pc = 0x167A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A90u;
    // 0x167a94: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x167A90u, 0x167A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A98u;
label_167a98:
    // 0x167a98: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x167a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_167a9c:
    // 0x167a9c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x167a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_167aa0:
    // 0x167aa0: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x167aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_167aa4:
    // 0x167aa4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x167aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_167aa8:
    // 0x167aa8: 0x84c40218  lh          $a0, 0x218($a2)
    ctx->pc = 0x167aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 536)));
label_167aac:
    // 0x167aac: 0x8cc2021c  lw          $v0, 0x21C($a2)
    ctx->pc = 0x167aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 540)));
label_167ab0:
    // 0x167ab0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x167ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_167ab4:
    // 0x167ab4: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x167ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_167ab8:
    // 0x167ab8: 0x40f809  jalr        $v0
label_167abc:
    if (ctx->pc == 0x167ABCu) {
        ctx->pc = 0x167ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AB8u;
        // 0x167abc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167AC0u;
        goto label_167ac0;
    }
    ctx->pc = 0x167AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167AC0u);
        ctx->pc = 0x167ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AB8u;
        // 0x167abc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AB8u, 0x167AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167AC0u;
label_167ac0:
    // 0x167ac0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x167ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_167ac4:
    // 0x167ac4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x167ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_167ac8:
    // 0x167ac8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x167ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_167acc:
    // 0x167acc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167accu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_167ad0:
    // 0x167ad0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x167ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_167ad4:
    // 0x167ad4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_167ad8:
    // 0x167ad8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x167ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_167adc:
    // 0x167adc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x167adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_167ae0:
    // 0x167ae0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x167ae0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_167ae4:
    // 0x167ae4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_167ae8:
    // 0x167ae8: 0x60f809  jalr        $v1
label_167aec:
    if (ctx->pc == 0x167AECu) {
        ctx->pc = 0x167AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE8u;
        // 0x167aec: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167AF0u;
        goto label_167af0;
    }
    ctx->pc = 0x167AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167AF0u);
        ctx->pc = 0x167AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE8u;
        // 0x167aec: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AE8u, 0x167AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167AF0u;
label_167af0:
    // 0x167af0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x167af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167af4:
    // 0x167af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167af8:
    // 0x167af8: 0xc0cd8ec  jal         func_3363B0
label_167afc:
    if (ctx->pc == 0x167AFCu) {
        ctx->pc = 0x167AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AF8u;
        // 0x167afc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B00u;
        goto label_167b00;
    }
    ctx->pc = 0x167AF8u;
    SET_GPR_U32(ctx, 31, 0x167B00u);
    ctx->pc = 0x167AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AF8u;
    // 0x167afc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x167AF8u, 0x167B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B00u;
label_167b00:
    // 0x167b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x167b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_167b04:
    // 0x167b04: 0x844402a8  lh          $a0, 0x2A8($v0)
    ctx->pc = 0x167b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 680)));
label_167b08:
    // 0x167b08: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x167b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
label_167b0c:
    // 0x167b0c: 0x60f809  jalr        $v1
label_167b10:
    if (ctx->pc == 0x167B10u) {
        ctx->pc = 0x167B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B0Cu;
        // 0x167b10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B14u;
        goto label_167b14;
    }
    ctx->pc = 0x167B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167B14u);
        ctx->pc = 0x167B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B0Cu;
        // 0x167b10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B0Cu, 0x167B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167B14u;
label_167b14:
    // 0x167b14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_167b18:
    // 0x167b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167b1c:
    // 0x167b1c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x167b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_167b20:
    // 0x167b20: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x167b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_167b24:
    // 0x167b24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x167b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_167b28:
    // 0x167b28: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x167b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_167b2c:
    // 0x167b2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x167b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_167b30:
    // 0x167b30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x167b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_167b34:
    // 0x167b34: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x167b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_167b38:
    // 0x167b38: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x167b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_167b3c:
    // 0x167b3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167b40:
    // 0x167b40: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x167b40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_167b44:
    // 0x167b44: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x167b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167b48:
    // 0x167b48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x167b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_167b4c:
    // 0x167b4c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x167b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167b50:
    // 0x167b50: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x167b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_167b54:
    // 0x167b54: 0xc0cd508  jal         func_335420
label_167b58:
    if (ctx->pc == 0x167B58u) {
        ctx->pc = 0x167B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B54u;
        // 0x167b58: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B5Cu;
        goto label_167b5c;
    }
    ctx->pc = 0x167B54u;
    SET_GPR_U32(ctx, 31, 0x167B5Cu);
    ctx->pc = 0x167B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B54u;
    // 0x167b58: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x167B54u, 0x167B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B5Cu;
label_167b5c:
    // 0x167b5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x167b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_167b60:
    // 0x167b60: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x167b60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_167b64:
    // 0x167b64: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x167b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_167b68:
    // 0x167b68: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_167b6c:
    // 0x167b6c: 0x60f809  jalr        $v1
label_167b70:
    if (ctx->pc == 0x167B70u) {
        ctx->pc = 0x167B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B6Cu;
        // 0x167b70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B74u;
        goto label_167b74;
    }
    ctx->pc = 0x167B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167B74u);
        ctx->pc = 0x167B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B6Cu;
        // 0x167b70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B6Cu, 0x167B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167B74u;
label_167b74:
    // 0x167b74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_167b78:
    // 0x167b78: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x167b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167b7c:
    // 0x167b7c: 0xc441cc60  lwc1        $f1, -0x33A0($v0)
    ctx->pc = 0x167b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167b80:
    // 0x167b80: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x167b80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167b84:
    // 0x167b84: 0x460105a9  min.s       $f22, $f0, $f1
    ctx->pc = 0x167b84u;
    ctx->f[22] = std::min(ctx->f[0], ctx->f[1]);
label_167b88:
    // 0x167b88: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_167b8c:
    if (ctx->pc == 0x167B8Cu) {
        ctx->pc = 0x167B90u;
        goto label_167b90;
    }
    ctx->pc = 0x167B88u;
    {
        const bool branch_taken_0x167b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167b88) {
            ctx->pc = 0x167BACu;
            goto label_167bac;
        }
    }
    ctx->pc = 0x167B90u;
label_167b90:
    // 0x167b90: 0x4614b801  sub.s       $f0, $f23, $f20
    ctx->pc = 0x167b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_167b94:
    // 0x167b94: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x167b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167b98:
    // 0x167b98: 0x0  nop
    ctx->pc = 0x167b98u;
    // NOP
label_167b9c:
    // 0x167b9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_167ba0:
    if (ctx->pc == 0x167BA0u) {
        ctx->pc = 0x167BA4u;
        goto label_167ba4;
    }
    ctx->pc = 0x167B9Cu;
    {
        const bool branch_taken_0x167b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167b9c) {
            ctx->pc = 0x167BACu;
            goto label_167bac;
        }
    }
    ctx->pc = 0x167BA4u;
label_167ba4:
    // 0x167ba4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x167ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
label_167ba8:
    // 0x167ba8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x167ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_167bac:
    // 0x167bac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x167bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_167bb0:
    // 0x167bb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x167bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_167bb4:
    // 0x167bb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x167bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_167bb8:
    // 0x167bb8: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x167bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_167bbc:
    // 0x167bbc: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x167bbcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_167bc0:
    // 0x167bc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x167bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_167bc4:
    // 0x167bc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x167bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_167bc8:
    // 0x167bc8: 0xc12e310  jal         func_4B8C40
label_167bcc:
    if (ctx->pc == 0x167BCCu) {
        ctx->pc = 0x167BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BC8u;
        // 0x167bcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BD0u;
        goto label_167bd0;
    }
    ctx->pc = 0x167BC8u;
    SET_GPR_U32(ctx, 31, 0x167BD0u);
    ctx->pc = 0x167BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BC8u;
    // 0x167bcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x167BC8u, 0x167BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x167bd0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_167bd4:
    // 0x167bd4: 0xc12e29c  jal         func_4B8A70
label_167bd8:
    if (ctx->pc == 0x167BD8u) {
        ctx->pc = 0x167BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BD4u;
        // 0x167bd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BDCu;
        goto label_167bdc;
    }
    ctx->pc = 0x167BD4u;
    SET_GPR_U32(ctx, 31, 0x167BDCu);
    ctx->pc = 0x167BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BD4u;
    // 0x167bd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x167BD4u, 0x167BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BDCu;
label_167bdc:
    // 0x167bdc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x167bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_167be0:
    // 0x167be0: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x167be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_167be4:
    // 0x167be4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167be8:
    // 0x167be8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167be8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167bec:
    // 0x167bec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_167bf0:
    // 0x167bf0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x167bf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_167bf4:
    // 0x167bf4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x167bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_167bf8:
    // 0x167bf8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x167bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_167bfc:
    // 0x167bfc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x167bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_167c00:
    // 0x167c00: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x167c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167c04:
    // 0x167c04: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x167c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167c08:
    // 0x167c08: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x167c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167c0c:
    // 0x167c0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x167c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_167c10:
    // 0x167c10: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x167c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_167c14:
    // 0x167c14: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x167c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_167c18:
    // 0x167c18: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x167c18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167c1c:
    // 0x167c1c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x167c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_167c20:
    // 0x167c20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167c20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167c24:
    // 0x167c24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167c24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167c28:
    // 0x167c28: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x167c28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167c2c:
    // 0x167c2c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x167c2cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_167c30:
    // 0x167c30: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x167c30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_167c34:
    // 0x167c34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x167c34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167c38:
    // 0x167c38: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x167c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_167c3c:
    // 0x167c3c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x167c3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_167c40:
    // 0x167c40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x167c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167c44:
    // 0x167c44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x167c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_167c48:
    // 0x167c48: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x167c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_167c4c:
    // 0x167c4c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x167c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_167c50:
    // 0x167c50: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x167c50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_167c54:
    // 0x167c54: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x167c54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167c58:
    // 0x167c58: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x167c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_167c5c:
    // 0x167c5c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x167c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_167c60:
    // 0x167c60: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x167c60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_167c64:
    // 0x167c64: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x167c64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_167c68:
    // 0x167c68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x167c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_167c6c:
    // 0x167c6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167c70:
    // 0x167c70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167c74:
    // 0x167c74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_167c78:
    // 0x167c78: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x167c78u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_167c7c:
    // 0x167c7c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x167c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_167c80:
    // 0x167c80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x167c80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167c84:
    // 0x167c84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x167c84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167c88:
    // 0x167c88: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x167c88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_167c8c:
    // 0x167c8c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x167c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_167c90:
    // 0x167c90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x167c90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_167c94:
    // 0x167c94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x167c94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_167c98:
    // 0x167c98: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x167c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_167c9c:
    // 0x167c9c: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x167c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_167ca0:
    // 0x167ca0: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x167ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_167ca4:
    // 0x167ca4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x167ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_167ca8:
    // 0x167ca8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x167ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_167cac:
    // 0x167cac: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x167cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_167cb0:
    // 0x167cb0: 0xc05b602  jal         func_16D808
label_167cb4:
    if (ctx->pc == 0x167CB4u) {
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CB8u;
        goto label_167cb8;
    }
    ctx->pc = 0x167CB0u;
    SET_GPR_U32(ctx, 31, 0x167CB8u);
    ctx->pc = 0x167CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CB0u;
    // 0x167cb4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D808u, 0x167CB0u, 0x167CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CB8u;
label_167cb8:
    // 0x167cb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x167cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_167cbc:
    // 0x167cbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x167cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167cc0:
    // 0x167cc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167cc4:
    // 0x167cc4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x167cc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_167cc8:
    // 0x167cc8: 0xc0ab6b0  jal         func_2ADAC0
label_167ccc:
    if (ctx->pc == 0x167CCCu) {
        ctx->pc = 0x167CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CC8u;
        // 0x167ccc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CD0u;
        goto label_167cd0;
    }
    ctx->pc = 0x167CC8u;
    SET_GPR_U32(ctx, 31, 0x167CD0u);
    ctx->pc = 0x167CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CC8u;
    // 0x167ccc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADAC0u, 0x167CC8u, 0x167CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CD0u;
label_167cd0:
    // 0x167cd0: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
label_167cd4:
    if (ctx->pc == 0x167CD4u) {
        ctx->pc = 0x167CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD0u;
        // 0x167cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CD8u;
        goto label_167cd8;
    }
    ctx->pc = 0x167CD0u;
    {
        const bool branch_taken_0x167cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167cd0) {
            ctx->pc = 0x167CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167CD0u;
            // 0x167cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167E68u;
            goto label_167e68;
        }
    }
    ctx->pc = 0x167CD8u;
label_167cd8:
    // 0x167cd8: 0xc10587a  jal         func_4161E8
label_167cdc:
    if (ctx->pc == 0x167CDCu) {
        ctx->pc = 0x167CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD8u;
        // 0x167cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CE0u;
        goto label_167ce0;
    }
    ctx->pc = 0x167CD8u;
    SET_GPR_U32(ctx, 31, 0x167CE0u);
    ctx->pc = 0x167CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CD8u;
    // 0x167cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x167CD8u, 0x167CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CE0u;
label_167ce0:
    // 0x167ce0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_167ce4:
    // 0x167ce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x167ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_167ce8:
    // 0x167ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167cec:
    // 0x167cec: 0xc0594ba  jal         func_1652E8
label_167cf0:
    if (ctx->pc == 0x167CF0u) {
        ctx->pc = 0x167CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CECu;
        // 0x167cf0: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CF4u;
        goto label_167cf4;
    }
    ctx->pc = 0x167CECu;
    SET_GPR_U32(ctx, 31, 0x167CF4u);
    ctx->pc = 0x167CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CECu;
    // 0x167cf0: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652E8u, 0x167CECu, 0x167CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CF4u;
label_167cf4:
    // 0x167cf4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_167cf8:
    if (ctx->pc == 0x167CF8u) {
        ctx->pc = 0x167CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CF4u;
        // 0x167cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CFCu;
        goto label_167cfc;
    }
    ctx->pc = 0x167CF4u;
    {
        const bool branch_taken_0x167cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CF4u;
        // 0x167cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cf4) {
            ctx->pc = 0x167E4Cu;
            goto label_167e4c;
        }
    }
    ctx->pc = 0x167CFCu;
label_167cfc:
    // 0x167cfc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x167cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167d00:
    // 0x167d00: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x167d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_167d04:
    // 0x167d04: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x167d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_167d08:
    // 0x167d08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167d0c:
    // 0x167d0c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x167d0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_167d10:
    // 0x167d10: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_167d14:
    // 0x167d14: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x167d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_167d18:
    // 0x167d18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x167d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_167d1c:
    // 0x167d1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167d20:
    // 0x167d20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x167d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_167d24:
    // 0x167d24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167d24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_167d28:
    // 0x167d28: 0xc048952  jal         func_122548
label_167d2c:
    if (ctx->pc == 0x167D2Cu) {
        ctx->pc = 0x167D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D28u;
        // 0x167d2c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D30u;
        goto label_167d30;
    }
    ctx->pc = 0x167D28u;
    SET_GPR_U32(ctx, 31, 0x167D30u);
    ctx->pc = 0x167D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D28u;
    // 0x167d2c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122548u, 0x167D28u, 0x167D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D30u;
label_167d30:
    // 0x167d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167d34:
    // 0x167d34: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
label_167d38:
    if (ctx->pc == 0x167D38u) {
        ctx->pc = 0x167D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D34u;
        // 0x167d38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D3Cu;
        goto label_167d3c;
    }
    ctx->pc = 0x167D34u;
    {
        const bool branch_taken_0x167d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x167D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D34u;
        // 0x167d38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d34) {
            ctx->pc = 0x167E4Cu;
            goto label_167e4c;
        }
    }
    ctx->pc = 0x167D3Cu;
label_167d3c:
    // 0x167d3c: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x167d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_167d40:
    // 0x167d40: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x167d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_167d44:
    // 0x167d44: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_167d48:
    if (ctx->pc == 0x167D48u) {
        ctx->pc = 0x167D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D44u;
        // 0x167d48: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D4Cu;
        goto label_167d4c;
    }
    ctx->pc = 0x167D44u;
    {
        const bool branch_taken_0x167d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d44) {
            ctx->pc = 0x167D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D44u;
            // 0x167d48: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x167DB0u;
            goto label_167db0;
        }
    }
    ctx->pc = 0x167D4Cu;
label_167d4c:
    // 0x167d4c: 0xc059cdc  jal         func_167370
label_167d50:
    if (ctx->pc == 0x167D50u) {
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D54u;
        goto label_167d54;
    }
    ctx->pc = 0x167D4Cu;
    SET_GPR_U32(ctx, 31, 0x167D54u);
    ctx->pc = 0x167D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D4Cu;
    // 0x167d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167370u, 0x167D4Cu, 0x167D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D54u;
label_167d54:
    // 0x167d54: 0xc047e6c  jal         func_11F9B0
label_167d58:
    if (ctx->pc == 0x167D58u) {
        ctx->pc = 0x167D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D54u;
        // 0x167d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D5Cu;
        goto label_167d5c;
    }
    ctx->pc = 0x167D54u;
    SET_GPR_U32(ctx, 31, 0x167D5Cu);
    ctx->pc = 0x167D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D54u;
    // 0x167d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x167D54u, 0x167D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D5Cu;
label_167d5c:
    // 0x167d5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167d60:
    // 0x167d60: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_167d64:
    if (ctx->pc == 0x167D64u) {
        ctx->pc = 0x167D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D60u;
        // 0x167d64: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D68u;
        goto label_167d68;
    }
    ctx->pc = 0x167D60u;
    {
        const bool branch_taken_0x167d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d60) {
            ctx->pc = 0x167D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D60u;
            // 0x167d64: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x167DB0u;
            goto label_167db0;
        }
    }
    ctx->pc = 0x167D68u;
label_167d68:
    // 0x167d68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167d6c:
    // 0x167d6c: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_167d70:
    // 0x167d70: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_167d74:
    // 0x167d74: 0x60f809  jalr        $v1
label_167d78:
    if (ctx->pc == 0x167D78u) {
        ctx->pc = 0x167D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D74u;
        // 0x167d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D7Cu;
        goto label_167d7c;
    }
    ctx->pc = 0x167D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167D7Cu);
        ctx->pc = 0x167D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D74u;
        // 0x167d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D74u, 0x167D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D7Cu;
label_167d7c:
    // 0x167d7c: 0xc6e1cc60  lwc1        $f1, -0x33A0($s7)
    ctx->pc = 0x167d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167d80:
    // 0x167d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167d84:
    // 0x167d84: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x167d84u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_167d88:
    // 0x167d88: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
label_167d8c:
    // 0x167d8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x167d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_167d90:
    // 0x167d90: 0x0  nop
    ctx->pc = 0x167d90u;
    // NOP
label_167d94:
    // 0x167d94: 0x460d0368  max.s       $f13, $f0, $f13
    ctx->pc = 0x167d94u;
    ctx->f[13] = std::max(ctx->f[0], ctx->f[13]);
label_167d98:
    // 0x167d98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_167d9c:
    // 0x167d9c: 0xc048952  jal         func_122548
label_167da0:
    if (ctx->pc == 0x167DA0u) {
        ctx->pc = 0x167DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D9Cu;
        // 0x167da0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DA4u;
        goto label_167da4;
    }
    ctx->pc = 0x167D9Cu;
    SET_GPR_U32(ctx, 31, 0x167DA4u);
    ctx->pc = 0x167DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D9Cu;
    // 0x167da0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122548u, 0x167D9Cu, 0x167DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DA4u;
label_167da4:
    // 0x167da4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_167da8:
    if (ctx->pc == 0x167DA8u) {
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DACu;
        goto label_167dac;
    }
    ctx->pc = 0x167DA4u;
    {
        const bool branch_taken_0x167da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167da4) {
            ctx->pc = 0x167E68u;
            goto label_167e68;
        }
    }
    ctx->pc = 0x167DACu;
label_167dac:
    // 0x167dac: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x167dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167db0:
    // 0x167db0: 0x26730048  addiu       $s3, $s3, 0x48
    ctx->pc = 0x167db0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_167db4:
    // 0x167db4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x167db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_167db8:
    // 0x167db8: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x167db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_167dbc:
    // 0x167dbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167dc0:
    // 0x167dc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167dc4:
    // 0x167dc4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x167dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_167dc8:
    // 0x167dc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x167dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_167dcc:
    // 0x167dcc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x167dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_167dd0:
    // 0x167dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x167dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_167dd4:
    // 0x167dd4: 0x0  nop
    ctx->pc = 0x167dd4u;
    // NOP
label_167dd8:
    // 0x167dd8: 0xc137826  jal         func_4DE098
label_167ddc:
    if (ctx->pc == 0x167DDCu) {
        ctx->pc = 0x167DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DD8u;
        // 0x167ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DE0u;
        goto label_167de0;
    }
    ctx->pc = 0x167DD8u;
    SET_GPR_U32(ctx, 31, 0x167DE0u);
    ctx->pc = 0x167DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167DD8u;
    // 0x167ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x167DD8u, 0x167DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DE0u;
label_167de0:
    // 0x167de0: 0xc0e409a  jal         func_390268
label_167de4:
    if (ctx->pc == 0x167DE4u) {
        ctx->pc = 0x167DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DE0u;
        // 0x167de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DE8u;
        goto label_167de8;
    }
    ctx->pc = 0x167DE0u;
    SET_GPR_U32(ctx, 31, 0x167DE8u);
    ctx->pc = 0x167DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167DE0u;
    // 0x167de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x167DE0u, 0x167DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DE8u;
label_167de8:
    // 0x167de8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_167dec:
    if (ctx->pc == 0x167DECu) {
        ctx->pc = 0x167DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DE8u;
        // 0x167dec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DF0u;
        goto label_167df0;
    }
    ctx->pc = 0x167DE8u;
    {
        const bool branch_taken_0x167de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DE8u;
        // 0x167dec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167de8) {
            ctx->pc = 0x167E54u;
            goto label_167e54;
        }
    }
    ctx->pc = 0x167DF0u;
label_167df0:
    // 0x167df0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_167df4:
    // 0x167df4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_167df8:
    // 0x167df8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_167dfc:
    // 0x167dfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x167dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_167e00:
    // 0x167e00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_167e04:
    // 0x167e04: 0x0  nop
    ctx->pc = 0x167e04u;
    // NOP
label_167e08:
    // 0x167e08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x167e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_167e0c:
    // 0x167e0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_167e10:
    // 0x167e10: 0x0  nop
    ctx->pc = 0x167e10u;
    // NOP
label_167e14:
    // 0x167e14: 0x0  nop
    ctx->pc = 0x167e14u;
    // NOP
label_167e18:
    // 0x167e18: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
label_167e1c:
    if (ctx->pc == 0x167E1Cu) {
        ctx->pc = 0x167E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E18u;
        // 0x167e1c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E20u;
        goto label_167e20;
    }
    ctx->pc = 0x167E18u;
    {
        const bool branch_taken_0x167e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x167E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E18u;
        // 0x167e1c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e18) {
            ctx->pc = 0x167E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167e08;
        }
    }
    ctx->pc = 0x167E20u;
label_167e20:
    // 0x167e20: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x167e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_167e24:
    // 0x167e24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x167e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167e28:
    // 0x167e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167e2c:
    // 0x167e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167e30:
    // 0x167e30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x167e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167e34:
    // 0x167e34: 0xc0a71b4  jal         func_29C6D0
label_167e38:
    if (ctx->pc == 0x167E38u) {
        ctx->pc = 0x167E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E34u;
        // 0x167e38: 0x24e7c3f8  addiu       $a3, $a3, -0x3C08 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E3Cu;
        goto label_167e3c;
    }
    ctx->pc = 0x167E34u;
    SET_GPR_U32(ctx, 31, 0x167E3Cu);
    ctx->pc = 0x167E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E34u;
    // 0x167e38: 0x24e7c3f8  addiu       $a3, $a3, -0x3C08 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x167E34u, 0x167E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E3Cu;
label_167e3c:
    // 0x167e3c: 0xc137832  jal         func_4DE0C8
label_167e40:
    if (ctx->pc == 0x167E40u) {
        ctx->pc = 0x167E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E3Cu;
        // 0x167e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E44u;
        goto label_167e44;
    }
    ctx->pc = 0x167E3Cu;
    SET_GPR_U32(ctx, 31, 0x167E44u);
    ctx->pc = 0x167E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E3Cu;
    // 0x167e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x167E3Cu, 0x167E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E44u;
label_167e44:
    // 0x167e44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_167e48:
    if (ctx->pc == 0x167E48u) {
        ctx->pc = 0x167E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E44u;
        // 0x167e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E4Cu;
        goto label_167e4c;
    }
    ctx->pc = 0x167E44u;
    {
        const bool branch_taken_0x167e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E44u;
        // 0x167e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e44) {
            ctx->pc = 0x167E68u;
            goto label_167e68;
        }
    }
    ctx->pc = 0x167E4Cu;
label_167e4c:
    // 0x167e4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_167e50:
    if (ctx->pc == 0x167E50u) {
        ctx->pc = 0x167E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E4Cu;
        // 0x167e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E54u;
        goto label_167e54;
    }
    ctx->pc = 0x167E4Cu;
    {
        const bool branch_taken_0x167e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E4Cu;
        // 0x167e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e4c) {
            ctx->pc = 0x167E68u;
            goto label_167e68;
        }
    }
    ctx->pc = 0x167E54u;
label_167e54:
    // 0x167e54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_167e58:
    // 0x167e58: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x167e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_167e5c:
    // 0x167e5c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_167e60:
    if (ctx->pc == 0x167E60u) {
        ctx->pc = 0x167E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E5Cu;
        // 0x167e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E64u;
        goto label_167e64;
    }
    ctx->pc = 0x167E5Cu;
    {
        const bool branch_taken_0x167e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E5Cu;
        // 0x167e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e5c) {
            ctx->pc = 0x167DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167dd8;
        }
    }
    ctx->pc = 0x167E64u;
label_167e64:
    // 0x167e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167e68:
    // 0x167e68: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x167e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_167e6c:
    // 0x167e6c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x167e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_167e70:
    // 0x167e70: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x167e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_167e74:
    // 0x167e74: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x167e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_167e78:
    // 0x167e78: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x167e78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_167e7c:
    // 0x167e7c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x167e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_167e80:
    // 0x167e80: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x167e80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_167e84:
    // 0x167e84: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x167e84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_167e88:
    // 0x167e88: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x167e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_167e8c:
    // 0x167e8c: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x167e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_167e90:
    // 0x167e90: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x167e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_167e94:
    // 0x167e94: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x167e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_167e98:
    // 0x167e98: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x167e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_167e9c:
    // 0x167e9c: 0x3e00008  jr          $ra
label_167ea0:
    if (ctx->pc == 0x167EA0u) {
        ctx->pc = 0x167EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E9Cu;
        // 0x167ea0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EA4u;
        goto label_167ea4;
    }
    ctx->pc = 0x167E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E9Cu;
        // 0x167ea0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EA4u;
label_167ea4:
    // 0x167ea4: 0x0  nop
    ctx->pc = 0x167ea4u;
    // NOP
    ctx->pc = 0x167ea8u;
}
