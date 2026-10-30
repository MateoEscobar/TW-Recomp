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

// Function: sub_00406A08
// Address: 0x406a08 - 0x406e20
void sub_00406A08_0x406a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406A08_0x406a08");
#endif

    switch (ctx->pc) {
        case 0x406a08u: goto label_406a08;
        case 0x406a0cu: goto label_406a0c;
        case 0x406a10u: goto label_406a10;
        case 0x406a14u: goto label_406a14;
        case 0x406a18u: goto label_406a18;
        case 0x406a1cu: goto label_406a1c;
        case 0x406a20u: goto label_406a20;
        case 0x406a24u: goto label_406a24;
        case 0x406a28u: goto label_406a28;
        case 0x406a2cu: goto label_406a2c;
        case 0x406a30u: goto label_406a30;
        case 0x406a34u: goto label_406a34;
        case 0x406a38u: goto label_406a38;
        case 0x406a3cu: goto label_406a3c;
        case 0x406a40u: goto label_406a40;
        case 0x406a44u: goto label_406a44;
        case 0x406a48u: goto label_406a48;
        case 0x406a4cu: goto label_406a4c;
        case 0x406a50u: goto label_406a50;
        case 0x406a54u: goto label_406a54;
        case 0x406a58u: goto label_406a58;
        case 0x406a5cu: goto label_406a5c;
        case 0x406a60u: goto label_406a60;
        case 0x406a64u: goto label_406a64;
        case 0x406a68u: goto label_406a68;
        case 0x406a6cu: goto label_406a6c;
        case 0x406a70u: goto label_406a70;
        case 0x406a74u: goto label_406a74;
        case 0x406a78u: goto label_406a78;
        case 0x406a7cu: goto label_406a7c;
        case 0x406a80u: goto label_406a80;
        case 0x406a84u: goto label_406a84;
        case 0x406a88u: goto label_406a88;
        case 0x406a8cu: goto label_406a8c;
        case 0x406a90u: goto label_406a90;
        case 0x406a94u: goto label_406a94;
        case 0x406a98u: goto label_406a98;
        case 0x406a9cu: goto label_406a9c;
        case 0x406aa0u: goto label_406aa0;
        case 0x406aa4u: goto label_406aa4;
        case 0x406aa8u: goto label_406aa8;
        case 0x406aacu: goto label_406aac;
        case 0x406ab0u: goto label_406ab0;
        case 0x406ab4u: goto label_406ab4;
        case 0x406ab8u: goto label_406ab8;
        case 0x406abcu: goto label_406abc;
        case 0x406ac0u: goto label_406ac0;
        case 0x406ac4u: goto label_406ac4;
        case 0x406ac8u: goto label_406ac8;
        case 0x406accu: goto label_406acc;
        case 0x406ad0u: goto label_406ad0;
        case 0x406ad4u: goto label_406ad4;
        case 0x406ad8u: goto label_406ad8;
        case 0x406adcu: goto label_406adc;
        case 0x406ae0u: goto label_406ae0;
        case 0x406ae4u: goto label_406ae4;
        case 0x406ae8u: goto label_406ae8;
        case 0x406aecu: goto label_406aec;
        case 0x406af0u: goto label_406af0;
        case 0x406af4u: goto label_406af4;
        case 0x406af8u: goto label_406af8;
        case 0x406afcu: goto label_406afc;
        case 0x406b00u: goto label_406b00;
        case 0x406b04u: goto label_406b04;
        case 0x406b08u: goto label_406b08;
        case 0x406b0cu: goto label_406b0c;
        case 0x406b10u: goto label_406b10;
        case 0x406b14u: goto label_406b14;
        case 0x406b18u: goto label_406b18;
        case 0x406b1cu: goto label_406b1c;
        case 0x406b20u: goto label_406b20;
        case 0x406b24u: goto label_406b24;
        case 0x406b28u: goto label_406b28;
        case 0x406b2cu: goto label_406b2c;
        case 0x406b30u: goto label_406b30;
        case 0x406b34u: goto label_406b34;
        case 0x406b38u: goto label_406b38;
        case 0x406b3cu: goto label_406b3c;
        case 0x406b40u: goto label_406b40;
        case 0x406b44u: goto label_406b44;
        case 0x406b48u: goto label_406b48;
        case 0x406b4cu: goto label_406b4c;
        case 0x406b50u: goto label_406b50;
        case 0x406b54u: goto label_406b54;
        case 0x406b58u: goto label_406b58;
        case 0x406b5cu: goto label_406b5c;
        case 0x406b60u: goto label_406b60;
        case 0x406b64u: goto label_406b64;
        case 0x406b68u: goto label_406b68;
        case 0x406b6cu: goto label_406b6c;
        case 0x406b70u: goto label_406b70;
        case 0x406b74u: goto label_406b74;
        case 0x406b78u: goto label_406b78;
        case 0x406b7cu: goto label_406b7c;
        case 0x406b80u: goto label_406b80;
        case 0x406b84u: goto label_406b84;
        case 0x406b88u: goto label_406b88;
        case 0x406b8cu: goto label_406b8c;
        case 0x406b90u: goto label_406b90;
        case 0x406b94u: goto label_406b94;
        case 0x406b98u: goto label_406b98;
        case 0x406b9cu: goto label_406b9c;
        case 0x406ba0u: goto label_406ba0;
        case 0x406ba4u: goto label_406ba4;
        case 0x406ba8u: goto label_406ba8;
        case 0x406bacu: goto label_406bac;
        case 0x406bb0u: goto label_406bb0;
        case 0x406bb4u: goto label_406bb4;
        case 0x406bb8u: goto label_406bb8;
        case 0x406bbcu: goto label_406bbc;
        case 0x406bc0u: goto label_406bc0;
        case 0x406bc4u: goto label_406bc4;
        case 0x406bc8u: goto label_406bc8;
        case 0x406bccu: goto label_406bcc;
        case 0x406bd0u: goto label_406bd0;
        case 0x406bd4u: goto label_406bd4;
        case 0x406bd8u: goto label_406bd8;
        case 0x406bdcu: goto label_406bdc;
        case 0x406be0u: goto label_406be0;
        case 0x406be4u: goto label_406be4;
        case 0x406be8u: goto label_406be8;
        case 0x406becu: goto label_406bec;
        case 0x406bf0u: goto label_406bf0;
        case 0x406bf4u: goto label_406bf4;
        case 0x406bf8u: goto label_406bf8;
        case 0x406bfcu: goto label_406bfc;
        case 0x406c00u: goto label_406c00;
        case 0x406c04u: goto label_406c04;
        case 0x406c08u: goto label_406c08;
        case 0x406c0cu: goto label_406c0c;
        case 0x406c10u: goto label_406c10;
        case 0x406c14u: goto label_406c14;
        case 0x406c18u: goto label_406c18;
        case 0x406c1cu: goto label_406c1c;
        case 0x406c20u: goto label_406c20;
        case 0x406c24u: goto label_406c24;
        case 0x406c28u: goto label_406c28;
        case 0x406c2cu: goto label_406c2c;
        case 0x406c30u: goto label_406c30;
        case 0x406c34u: goto label_406c34;
        case 0x406c38u: goto label_406c38;
        case 0x406c3cu: goto label_406c3c;
        case 0x406c40u: goto label_406c40;
        case 0x406c44u: goto label_406c44;
        case 0x406c48u: goto label_406c48;
        case 0x406c4cu: goto label_406c4c;
        case 0x406c50u: goto label_406c50;
        case 0x406c54u: goto label_406c54;
        case 0x406c58u: goto label_406c58;
        case 0x406c5cu: goto label_406c5c;
        case 0x406c60u: goto label_406c60;
        case 0x406c64u: goto label_406c64;
        case 0x406c68u: goto label_406c68;
        case 0x406c6cu: goto label_406c6c;
        case 0x406c70u: goto label_406c70;
        case 0x406c74u: goto label_406c74;
        case 0x406c78u: goto label_406c78;
        case 0x406c7cu: goto label_406c7c;
        case 0x406c80u: goto label_406c80;
        case 0x406c84u: goto label_406c84;
        case 0x406c88u: goto label_406c88;
        case 0x406c8cu: goto label_406c8c;
        case 0x406c90u: goto label_406c90;
        case 0x406c94u: goto label_406c94;
        case 0x406c98u: goto label_406c98;
        case 0x406c9cu: goto label_406c9c;
        case 0x406ca0u: goto label_406ca0;
        case 0x406ca4u: goto label_406ca4;
        case 0x406ca8u: goto label_406ca8;
        case 0x406cacu: goto label_406cac;
        case 0x406cb0u: goto label_406cb0;
        case 0x406cb4u: goto label_406cb4;
        case 0x406cb8u: goto label_406cb8;
        case 0x406cbcu: goto label_406cbc;
        case 0x406cc0u: goto label_406cc0;
        case 0x406cc4u: goto label_406cc4;
        case 0x406cc8u: goto label_406cc8;
        case 0x406cccu: goto label_406ccc;
        case 0x406cd0u: goto label_406cd0;
        case 0x406cd4u: goto label_406cd4;
        case 0x406cd8u: goto label_406cd8;
        case 0x406cdcu: goto label_406cdc;
        case 0x406ce0u: goto label_406ce0;
        case 0x406ce4u: goto label_406ce4;
        case 0x406ce8u: goto label_406ce8;
        case 0x406cecu: goto label_406cec;
        case 0x406cf0u: goto label_406cf0;
        case 0x406cf4u: goto label_406cf4;
        case 0x406cf8u: goto label_406cf8;
        case 0x406cfcu: goto label_406cfc;
        case 0x406d00u: goto label_406d00;
        case 0x406d04u: goto label_406d04;
        case 0x406d08u: goto label_406d08;
        case 0x406d0cu: goto label_406d0c;
        case 0x406d10u: goto label_406d10;
        case 0x406d14u: goto label_406d14;
        case 0x406d18u: goto label_406d18;
        case 0x406d1cu: goto label_406d1c;
        case 0x406d20u: goto label_406d20;
        case 0x406d24u: goto label_406d24;
        case 0x406d28u: goto label_406d28;
        case 0x406d2cu: goto label_406d2c;
        case 0x406d30u: goto label_406d30;
        case 0x406d34u: goto label_406d34;
        case 0x406d38u: goto label_406d38;
        case 0x406d3cu: goto label_406d3c;
        case 0x406d40u: goto label_406d40;
        case 0x406d44u: goto label_406d44;
        case 0x406d48u: goto label_406d48;
        case 0x406d4cu: goto label_406d4c;
        case 0x406d50u: goto label_406d50;
        case 0x406d54u: goto label_406d54;
        case 0x406d58u: goto label_406d58;
        case 0x406d5cu: goto label_406d5c;
        case 0x406d60u: goto label_406d60;
        case 0x406d64u: goto label_406d64;
        case 0x406d68u: goto label_406d68;
        case 0x406d6cu: goto label_406d6c;
        case 0x406d70u: goto label_406d70;
        case 0x406d74u: goto label_406d74;
        case 0x406d78u: goto label_406d78;
        case 0x406d7cu: goto label_406d7c;
        case 0x406d80u: goto label_406d80;
        case 0x406d84u: goto label_406d84;
        case 0x406d88u: goto label_406d88;
        case 0x406d8cu: goto label_406d8c;
        case 0x406d90u: goto label_406d90;
        case 0x406d94u: goto label_406d94;
        case 0x406d98u: goto label_406d98;
        case 0x406d9cu: goto label_406d9c;
        case 0x406da0u: goto label_406da0;
        case 0x406da4u: goto label_406da4;
        case 0x406da8u: goto label_406da8;
        case 0x406dacu: goto label_406dac;
        case 0x406db0u: goto label_406db0;
        case 0x406db4u: goto label_406db4;
        case 0x406db8u: goto label_406db8;
        case 0x406dbcu: goto label_406dbc;
        case 0x406dc0u: goto label_406dc0;
        case 0x406dc4u: goto label_406dc4;
        case 0x406dc8u: goto label_406dc8;
        case 0x406dccu: goto label_406dcc;
        case 0x406dd0u: goto label_406dd0;
        case 0x406dd4u: goto label_406dd4;
        case 0x406dd8u: goto label_406dd8;
        case 0x406ddcu: goto label_406ddc;
        case 0x406de0u: goto label_406de0;
        case 0x406de4u: goto label_406de4;
        case 0x406de8u: goto label_406de8;
        case 0x406decu: goto label_406dec;
        case 0x406df0u: goto label_406df0;
        case 0x406df4u: goto label_406df4;
        case 0x406df8u: goto label_406df8;
        case 0x406dfcu: goto label_406dfc;
        case 0x406e00u: goto label_406e00;
        case 0x406e04u: goto label_406e04;
        case 0x406e08u: goto label_406e08;
        case 0x406e0cu: goto label_406e0c;
        case 0x406e10u: goto label_406e10;
        case 0x406e14u: goto label_406e14;
        case 0x406e18u: goto label_406e18;
        case 0x406e1cu: goto label_406e1c;
        default: break;
    }

    ctx->pc = 0x406a08u;

label_406a08:
    // 0x406a08: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x406a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_406a0c:
    // 0x406a0c: 0x7fb00570  sq          $s0, 0x570($sp)
    ctx->pc = 0x406a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 16));
label_406a10:
    // 0x406a10: 0x7fb20550  sq          $s2, 0x550($sp)
    ctx->pc = 0x406a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 18));
label_406a14:
    // 0x406a14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x406a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_406a18:
    // 0x406a18: 0x7fb60510  sq          $s6, 0x510($sp)
    ctx->pc = 0x406a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 22));
label_406a1c:
    // 0x406a1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x406a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406a20:
    // 0x406a20: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x406a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_406a24:
    // 0x406a24: 0x7fb10560  sq          $s1, 0x560($sp)
    ctx->pc = 0x406a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 17));
label_406a28:
    // 0x406a28: 0x7fb30540  sq          $s3, 0x540($sp)
    ctx->pc = 0x406a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 19));
label_406a2c:
    // 0x406a2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x406a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406a30:
    // 0x406a30: 0x7fb40530  sq          $s4, 0x530($sp)
    ctx->pc = 0x406a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 20));
label_406a34:
    // 0x406a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x406a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406a38:
    // 0x406a38: 0x7fb50520  sq          $s5, 0x520($sp)
    ctx->pc = 0x406a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 21));
label_406a3c:
    // 0x406a3c: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x406a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_406a40:
    // 0x406a40: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x406a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406a44:
    // 0x406a44: 0x7fbe04f0  sq          $fp, 0x4F0($sp)
    ctx->pc = 0x406a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 30));
label_406a48:
    // 0x406a48: 0xe7b70598  swc1        $f23, 0x598($sp)
    ctx->pc = 0x406a48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_406a4c:
    // 0x406a4c: 0xe7b60590  swc1        $f22, 0x590($sp)
    ctx->pc = 0x406a4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_406a50:
    // 0x406a50: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x406a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
label_406a54:
    // 0x406a54: 0xe7b50588  swc1        $f21, 0x588($sp)
    ctx->pc = 0x406a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_406a58:
    // 0x406a58: 0xc0ea12a  jal         func_3A84A8
label_406a5c:
    if (ctx->pc == 0x406A5Cu) {
        ctx->pc = 0x406A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A58u;
        // 0x406a5c: 0xe7b40580  swc1        $f20, 0x580($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x406A60u;
        goto label_406a60;
    }
    ctx->pc = 0x406A58u;
    SET_GPR_U32(ctx, 31, 0x406A60u);
    ctx->pc = 0x406A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406A58u;
    // 0x406a5c: 0xe7b40580  swc1        $f20, 0x580($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x406A58u, 0x406A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406A60u;
label_406a60:
    // 0x406a60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x406a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_406a64:
    // 0x406a64: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x406a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_406a68:
    // 0x406a68: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x406a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_406a6c:
    // 0x406a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x406a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406a70:
    // 0x406a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x406a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_406a74:
    // 0x406a74: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x406a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_406a78:
    // 0x406a78: 0xc0ea12a  jal         func_3A84A8
label_406a7c:
    if (ctx->pc == 0x406A7Cu) {
        ctx->pc = 0x406A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A78u;
        // 0x406a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406A80u;
        goto label_406a80;
    }
    ctx->pc = 0x406A78u;
    SET_GPR_U32(ctx, 31, 0x406A80u);
    ctx->pc = 0x406A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406A78u;
    // 0x406a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x406A78u, 0x406A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406A80u;
label_406a80:
    // 0x406a80: 0xc0ea146  jal         func_3A8518
label_406a84:
    if (ctx->pc == 0x406A84u) {
        ctx->pc = 0x406A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A80u;
        // 0x406a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406A88u;
        goto label_406a88;
    }
    ctx->pc = 0x406A80u;
    SET_GPR_U32(ctx, 31, 0x406A88u);
    ctx->pc = 0x406A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406A80u;
    // 0x406a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x406A80u, 0x406A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406A88u;
label_406a88:
    // 0x406a88: 0xc0ea146  jal         func_3A8518
label_406a8c:
    if (ctx->pc == 0x406A8Cu) {
        ctx->pc = 0x406A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A88u;
        // 0x406a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406A90u;
        goto label_406a90;
    }
    ctx->pc = 0x406A88u;
    SET_GPR_U32(ctx, 31, 0x406A90u);
    ctx->pc = 0x406A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406A88u;
    // 0x406a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x406A88u, 0x406A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406A90u;
label_406a90:
    // 0x406a90: 0xc0ea14c  jal         func_3A8530
label_406a94:
    if (ctx->pc == 0x406A94u) {
        ctx->pc = 0x406A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A90u;
        // 0x406a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406A98u;
        goto label_406a98;
    }
    ctx->pc = 0x406A90u;
    SET_GPR_U32(ctx, 31, 0x406A98u);
    ctx->pc = 0x406A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406A90u;
    // 0x406a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x406A90u, 0x406A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406A98u;
label_406a98:
    // 0x406a98: 0xc0ea14c  jal         func_3A8530
label_406a9c:
    if (ctx->pc == 0x406A9Cu) {
        ctx->pc = 0x406A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A98u;
        // 0x406a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406AA0u;
        goto label_406aa0;
    }
    ctx->pc = 0x406A98u;
    SET_GPR_U32(ctx, 31, 0x406AA0u);
    ctx->pc = 0x406A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406A98u;
    // 0x406a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x406A98u, 0x406AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406AA0u;
label_406aa0:
    // 0x406aa0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x406aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_406aa4:
    // 0x406aa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x406aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406aa8:
    // 0x406aa8: 0xc0e92f4  jal         func_3A4BD0
label_406aac:
    if (ctx->pc == 0x406AACu) {
        ctx->pc = 0x406AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406AA8u;
        // 0x406aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406AB0u;
        goto label_406ab0;
    }
    ctx->pc = 0x406AA8u;
    SET_GPR_U32(ctx, 31, 0x406AB0u);
    ctx->pc = 0x406AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406AA8u;
    // 0x406aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x406AA8u, 0x406AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406AB0u;
label_406ab0:
    // 0x406ab0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x406ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_406ab4:
    // 0x406ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406ab8:
    // 0x406ab8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x406ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_406abc:
    // 0x406abc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x406abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_406ac0:
    // 0x406ac0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x406ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_406ac4:
    // 0x406ac4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x406ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_406ac8:
    // 0x406ac8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x406ac8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_406acc:
    // 0x406acc: 0x4a0003bf  vwaitq
    ctx->pc = 0x406accu;
    // VWAITQ (Q already resolved in this runtime)
label_406ad0:
    // 0x406ad0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x406ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_406ad4:
    // 0x406ad4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x406ad4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_406ad8:
    // 0x406ad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x406ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406adc:
    // 0x406adc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x406adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_406ae0:
    // 0x406ae0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x406ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_406ae4:
    // 0x406ae4: 0xc0e90ca  jal         func_3A4328
label_406ae8:
    if (ctx->pc == 0x406AE8u) {
        ctx->pc = 0x406AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406AE4u;
        // 0x406ae8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406AECu;
        goto label_406aec;
    }
    ctx->pc = 0x406AE4u;
    SET_GPR_U32(ctx, 31, 0x406AECu);
    ctx->pc = 0x406AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406AE4u;
    // 0x406ae8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x406AE4u, 0x406AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406AECu;
label_406aec:
    // 0x406aec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x406aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_406af0:
    // 0x406af0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x406af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_406af4:
    // 0x406af4: 0x8c4471a0  lw          $a0, 0x71A0($v0)
    ctx->pc = 0x406af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
label_406af8:
    // 0x406af8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x406af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406afc:
    // 0x406afc: 0xc05c2ca  jal         func_170B28
label_406b00:
    if (ctx->pc == 0x406B00u) {
        ctx->pc = 0x406B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406AFCu;
        // 0x406b00: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B04u;
        goto label_406b04;
    }
    ctx->pc = 0x406AFCu;
    SET_GPR_U32(ctx, 31, 0x406B04u);
    ctx->pc = 0x406B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406AFCu;
    // 0x406b00: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B28u, 0x406AFCu, 0x406B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B04u;
label_406b04:
    // 0x406b04: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x406b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_406b08:
    // 0x406b08: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x406b08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_406b0c:
    // 0x406b0c: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x406b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_406b10:
    // 0x406b10: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x406b10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_406b14:
    // 0x406b14: 0x27be0480  addiu       $fp, $sp, 0x480
    ctx->pc = 0x406b14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_406b18:
    // 0x406b18: 0x27b70490  addiu       $s7, $sp, 0x490
    ctx->pc = 0x406b18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_406b1c:
    // 0x406b1c: 0x0  nop
    ctx->pc = 0x406b1cu;
    // NOP
label_406b20:
    // 0x406b20: 0xc0e9694  jal         func_3A5A50
label_406b24:
    if (ctx->pc == 0x406B24u) {
        ctx->pc = 0x406B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B20u;
        // 0x406b24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B28u;
        goto label_406b28;
    }
    ctx->pc = 0x406B20u;
    SET_GPR_U32(ctx, 31, 0x406B28u);
    ctx->pc = 0x406B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B20u;
    // 0x406b24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x406B20u, 0x406B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B28u;
label_406b28:
    // 0x406b28: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_406b2c:
    if (ctx->pc == 0x406B2Cu) {
        ctx->pc = 0x406B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B28u;
        // 0x406b2c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B30u;
        goto label_406b30;
    }
    ctx->pc = 0x406B28u;
    {
        const bool branch_taken_0x406b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B28u;
        // 0x406b2c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406b28) {
            ctx->pc = 0x406C80u;
            goto label_406c80;
        }
    }
    ctx->pc = 0x406B30u;
label_406b30:
    // 0x406b30: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x406b30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_406b34:
    // 0x406b34: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x406b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_406b38:
    // 0x406b38: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x406b38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_406b3c:
    // 0x406b3c: 0xc0cd518  jal         func_335460
label_406b40:
    if (ctx->pc == 0x406B40u) {
        ctx->pc = 0x406B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B3Cu;
        // 0x406b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B44u;
        goto label_406b44;
    }
    ctx->pc = 0x406B3Cu;
    SET_GPR_U32(ctx, 31, 0x406B44u);
    ctx->pc = 0x406B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B3Cu;
    // 0x406b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406B3Cu, 0x406B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B44u;
label_406b44:
    // 0x406b44: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x406b44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_406b48:
    // 0x406b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406b4c:
    // 0x406b4c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x406b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_406b50:
    // 0x406b50: 0xc0cd518  jal         func_335460
label_406b54:
    if (ctx->pc == 0x406B54u) {
        ctx->pc = 0x406B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B50u;
        // 0x406b54: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B58u;
        goto label_406b58;
    }
    ctx->pc = 0x406B50u;
    SET_GPR_U32(ctx, 31, 0x406B58u);
    ctx->pc = 0x406B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B50u;
    // 0x406b54: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406B50u, 0x406B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B58u;
label_406b58:
    // 0x406b58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x406b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_406b5c:
    // 0x406b5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406b60:
    // 0x406b60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x406b60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_406b64:
    // 0x406b64: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x406b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_406b68:
    // 0x406b68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x406b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_406b6c:
    // 0x406b6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x406b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_406b70:
    // 0x406b70: 0xc0cd518  jal         func_335460
label_406b74:
    if (ctx->pc == 0x406B74u) {
        ctx->pc = 0x406B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B70u;
        // 0x406b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B78u;
        goto label_406b78;
    }
    ctx->pc = 0x406B70u;
    SET_GPR_U32(ctx, 31, 0x406B78u);
    ctx->pc = 0x406B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B70u;
    // 0x406b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406B70u, 0x406B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B78u;
label_406b78:
    // 0x406b78: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x406b78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_406b7c:
    // 0x406b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x406b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406b80:
    // 0x406b80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x406b80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_406b84:
    // 0x406b84: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x406b84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_406b88:
    // 0x406b88: 0xc0cd55c  jal         func_335570
label_406b8c:
    if (ctx->pc == 0x406B8Cu) {
        ctx->pc = 0x406B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B88u;
        // 0x406b8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406B90u;
        goto label_406b90;
    }
    ctx->pc = 0x406B88u;
    SET_GPR_U32(ctx, 31, 0x406B90u);
    ctx->pc = 0x406B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B88u;
    // 0x406b8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x406B88u, 0x406B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B90u;
label_406b90:
    // 0x406b90: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x406b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_406b94:
    // 0x406b94: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x406b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_406b98:
    // 0x406b98: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x406b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_406b9c:
    // 0x406b9c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x406b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_406ba0:
    // 0x406ba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406ba4:
    // 0x406ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406ba8:
    // 0x406ba8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x406ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_406bac:
    // 0x406bac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x406bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_406bb0:
    // 0x406bb0: 0xc0cd518  jal         func_335460
label_406bb4:
    if (ctx->pc == 0x406BB4u) {
        ctx->pc = 0x406BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406BB0u;
        // 0x406bb4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406BB8u;
        goto label_406bb8;
    }
    ctx->pc = 0x406BB0u;
    SET_GPR_U32(ctx, 31, 0x406BB8u);
    ctx->pc = 0x406BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406BB0u;
    // 0x406bb4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406BB0u, 0x406BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406BB8u;
label_406bb8:
    // 0x406bb8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x406bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_406bbc:
    // 0x406bbc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x406bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_406bc0:
    // 0x406bc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406bc4:
    // 0x406bc4: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x406bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_406bc8:
    // 0x406bc8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x406bc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_406bcc:
    // 0x406bcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x406bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_406bd0:
    // 0x406bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x406bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406bd4:
    // 0x406bd4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x406bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_406bd8:
    // 0x406bd8: 0x2407ff80  addiu       $a3, $zero, -0x80
    ctx->pc = 0x406bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_406bdc:
    // 0x406bdc: 0x35080012  ori         $t0, $t0, 0x12
    ctx->pc = 0x406bdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)18);
label_406be0:
    // 0x406be0: 0xc0f1618  jal         func_3C5860
label_406be4:
    if (ctx->pc == 0x406BE4u) {
        ctx->pc = 0x406BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406BE0u;
        // 0x406be4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406BE8u;
        goto label_406be8;
    }
    ctx->pc = 0x406BE0u;
    SET_GPR_U32(ctx, 31, 0x406BE8u);
    ctx->pc = 0x406BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406BE0u;
    // 0x406be4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x406BE0u, 0x406BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406BE8u;
label_406be8:
    // 0x406be8: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x406be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
label_406bec:
    // 0x406bec: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_406bf0:
    if (ctx->pc == 0x406BF0u) {
        ctx->pc = 0x406BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406BECu;
        // 0x406bf0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406BF4u;
        goto label_406bf4;
    }
    ctx->pc = 0x406BECu;
    {
        const bool branch_taken_0x406bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406bec) {
            ctx->pc = 0x406BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406BECu;
            // 0x406bf0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406C84u;
            goto label_406c84;
        }
    }
    ctx->pc = 0x406BF4u;
label_406bf4:
    // 0x406bf4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x406bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_406bf8:
    // 0x406bf8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x406bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_406bfc:
    // 0x406bfc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x406bfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_406c00:
    // 0x406c00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x406c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_406c04:
    // 0x406c04: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x406c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_406c08:
    // 0x406c08: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x406c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_406c0c:
    // 0x406c0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x406c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_406c10:
    // 0x406c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406c14:
    // 0x406c14: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x406c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_406c18:
    // 0x406c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406c1c:
    // 0x406c1c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x406c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_406c20:
    // 0x406c20: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x406c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_406c24:
    // 0x406c24: 0xafb20060  sw          $s2, 0x60($sp)
    ctx->pc = 0x406c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
label_406c28:
    // 0x406c28: 0xc0cd518  jal         func_335460
label_406c2c:
    if (ctx->pc == 0x406C2Cu) {
        ctx->pc = 0x406C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C28u;
        // 0x406c2c: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406C30u;
        goto label_406c30;
    }
    ctx->pc = 0x406C28u;
    SET_GPR_U32(ctx, 31, 0x406C30u);
    ctx->pc = 0x406C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C28u;
    // 0x406c2c: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406C28u, 0x406C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C30u;
label_406c30:
    // 0x406c30: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x406c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_406c34:
    // 0x406c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x406c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406c38:
    // 0x406c38: 0xc136b24  jal         func_4DAC90
label_406c3c:
    if (ctx->pc == 0x406C3Cu) {
        ctx->pc = 0x406C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C38u;
        // 0x406c3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406C40u;
        goto label_406c40;
    }
    ctx->pc = 0x406C38u;
    SET_GPR_U32(ctx, 31, 0x406C40u);
    ctx->pc = 0x406C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C38u;
    // 0x406c3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x406C38u, 0x406C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C40u;
label_406c40:
    // 0x406c40: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x406c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_406c44:
    // 0x406c44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x406c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_406c48:
    // 0x406c48: 0x8fa604d0  lw          $a2, 0x4D0($sp)
    ctx->pc = 0x406c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_406c4c:
    // 0x406c4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x406c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406c50:
    // 0x406c50: 0x27aa04c0  addiu       $t2, $sp, 0x4C0
    ctx->pc = 0x406c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_406c54:
    // 0x406c54: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x406c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_406c58:
    // 0x406c58: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x406c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_406c5c:
    // 0x406c5c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x406c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_406c60:
    // 0x406c60: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x406c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_406c64:
    // 0x406c64: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x406c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_406c68:
    // 0x406c68: 0xc0ea040  jal         func_3A8100
label_406c6c:
    if (ctx->pc == 0x406C6Cu) {
        ctx->pc = 0x406C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C68u;
        // 0x406c6c: 0x27a904a0  addiu       $t1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406C70u;
        goto label_406c70;
    }
    ctx->pc = 0x406C68u;
    SET_GPR_U32(ctx, 31, 0x406C70u);
    ctx->pc = 0x406C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C68u;
    // 0x406c6c: 0x27a904a0  addiu       $t1, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x406C68u, 0x406C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C70u;
label_406c70:
    // 0x406c70: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x406c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_406c74:
    // 0x406c74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x406c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_406c78:
    // 0x406c78: 0xc0f15bc  jal         func_3C56F0
label_406c7c:
    if (ctx->pc == 0x406C7Cu) {
        ctx->pc = 0x406C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C78u;
        // 0x406c7c: 0x24447a10  addiu       $a0, $v0, 0x7A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406C80u;
        goto label_406c80;
    }
    ctx->pc = 0x406C78u;
    SET_GPR_U32(ctx, 31, 0x406C80u);
    ctx->pc = 0x406C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C78u;
    // 0x406c7c: 0x24447a10  addiu       $a0, $v0, 0x7A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x406C78u, 0x406C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C80u;
label_406c80:
    // 0x406c80: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x406c80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_406c84:
    // 0x406c84: 0x2aa20028  slti        $v0, $s5, 0x28
    ctx->pc = 0x406c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_406c88:
    // 0x406c88: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_406c8c:
    if (ctx->pc == 0x406C8Cu) {
        ctx->pc = 0x406C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C88u;
        // 0x406c8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406C90u;
        goto label_406c90;
    }
    ctx->pc = 0x406C88u;
    {
        const bool branch_taken_0x406c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x406C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C88u;
        // 0x406c8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406c88) {
            ctx->pc = 0x406B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_406b20;
        }
    }
    ctx->pc = 0x406C90u;
label_406c90:
    // 0x406c90: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x406c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_406c94:
    // 0x406c94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406c98:
    // 0x406c98: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x406c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_406c9c:
    // 0x406c9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x406c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_406ca0:
    // 0x406ca0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x406ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_406ca4:
    // 0x406ca4: 0xc136b24  jal         func_4DAC90
label_406ca8:
    if (ctx->pc == 0x406CA8u) {
        ctx->pc = 0x406CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CA4u;
        // 0x406ca8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406CACu;
        goto label_406cac;
    }
    ctx->pc = 0x406CA4u;
    SET_GPR_U32(ctx, 31, 0x406CACu);
    ctx->pc = 0x406CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406CA4u;
    // 0x406ca8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x406CA4u, 0x406CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406CACu;
label_406cac:
    // 0x406cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x406cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_406cb0:
    // 0x406cb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x406cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_406cb4:
    // 0x406cb4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x406cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_406cb8:
    // 0x406cb8: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x406cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_406cbc:
    // 0x406cbc: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x406cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_406cc0:
    // 0x406cc0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x406cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_406cc4:
    // 0x406cc4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x406cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_406cc8:
    // 0x406cc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x406cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_406ccc:
    // 0x406ccc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x406cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_406cd0:
    // 0x406cd0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x406cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_406cd4:
    // 0x406cd4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x406cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_406cd8:
    // 0x406cd8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x406cd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_406cdc:
    // 0x406cdc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x406cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_406ce0:
    // 0x406ce0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x406ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_406ce4:
    // 0x406ce4: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x406ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_406ce8:
    // 0x406ce8: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x406ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_406cec:
    // 0x406cec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x406cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406cf0:
    // 0x406cf0: 0xc0f16c0  jal         func_3C5B00
label_406cf4:
    if (ctx->pc == 0x406CF4u) {
        ctx->pc = 0x406CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CF0u;
        // 0x406cf4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406CF8u;
        goto label_406cf8;
    }
    ctx->pc = 0x406CF0u;
    SET_GPR_U32(ctx, 31, 0x406CF8u);
    ctx->pc = 0x406CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406CF0u;
    // 0x406cf4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x406CF0u, 0x406CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406CF8u;
label_406cf8:
    // 0x406cf8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x406cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_406cfc:
    // 0x406cfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406d00:
    // 0x406d00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x406d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_406d04:
    // 0x406d04: 0xc136b24  jal         func_4DAC90
label_406d08:
    if (ctx->pc == 0x406D08u) {
        ctx->pc = 0x406D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D04u;
        // 0x406d08: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406D0Cu;
        goto label_406d0c;
    }
    ctx->pc = 0x406D04u;
    SET_GPR_U32(ctx, 31, 0x406D0Cu);
    ctx->pc = 0x406D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406D04u;
    // 0x406d08: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x406D04u, 0x406D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406D0Cu;
label_406d0c:
    // 0x406d0c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x406d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_406d10:
    // 0x406d10: 0x3c075c3f  lui         $a3, 0x5C3F
    ctx->pc = 0x406d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23615 << 16));
label_406d14:
    // 0x406d14: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x406d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_406d18:
    // 0x406d18: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x406d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_406d1c:
    // 0x406d1c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x406d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_406d20:
    // 0x406d20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x406d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_406d24:
    // 0x406d24: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x406d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_406d28:
    // 0x406d28: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x406d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_406d2c:
    // 0x406d2c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x406d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_406d30:
    // 0x406d30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x406d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406d34:
    // 0x406d34: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x406d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_406d38:
    // 0x406d38: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x406d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_406d3c:
    // 0x406d3c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x406d3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_406d40:
    // 0x406d40: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x406d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_406d44:
    // 0x406d44: 0x34e727ff  ori         $a3, $a3, 0x27FF
    ctx->pc = 0x406d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10239);
label_406d48:
    // 0x406d48: 0xc0f16c0  jal         func_3C5B00
label_406d4c:
    if (ctx->pc == 0x406D4Cu) {
        ctx->pc = 0x406D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D48u;
        // 0x406d4c: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406D50u;
        goto label_406d50;
    }
    ctx->pc = 0x406D48u;
    SET_GPR_U32(ctx, 31, 0x406D50u);
    ctx->pc = 0x406D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406D48u;
    // 0x406d4c: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x406D48u, 0x406D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406D50u;
label_406d50:
    // 0x406d50: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x406d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_406d54:
    // 0x406d54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x406d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_406d58:
    // 0x406d58: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x406d58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_406d5c:
    // 0x406d5c: 0x246516c0  addiu       $a1, $v1, 0x16C0
    ctx->pc = 0x406d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_406d60:
    // 0x406d60: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x406d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
label_406d64:
    // 0x406d64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x406d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_406d68:
    // 0x406d68: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x406d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_406d6c:
    // 0x406d6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x406d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_406d70:
    // 0x406d70: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x406d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_406d74:
    // 0x406d74: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x406d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_406d78:
    // 0x406d78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x406d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_406d7c:
    // 0x406d7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x406d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_406d80:
    // 0x406d80: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x406d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_406d84:
    // 0x406d84: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x406d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_406d88:
    // 0x406d88: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x406d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_406d8c:
    // 0x406d8c: 0x60f809  jalr        $v1
label_406d90:
    if (ctx->pc == 0x406D90u) {
        ctx->pc = 0x406D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D8Cu;
        // 0x406d90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406D94u;
        goto label_406d94;
    }
    ctx->pc = 0x406D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x406D94u);
        ctx->pc = 0x406D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D8Cu;
        // 0x406d90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406D8Cu, 0x406D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406D94u;
label_406d94:
    // 0x406d94: 0xc043d5e  jal         func_10F578
label_406d98:
    if (ctx->pc == 0x406D98u) {
        ctx->pc = 0x406D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D94u;
        // 0x406d98: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406D9Cu;
        goto label_406d9c;
    }
    ctx->pc = 0x406D94u;
    SET_GPR_U32(ctx, 31, 0x406D9Cu);
    ctx->pc = 0x406D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406D94u;
    // 0x406d98: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x406D94u, 0x406D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406D9Cu;
label_406d9c:
    // 0x406d9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_406da0:
    if (ctx->pc == 0x406DA0u) {
        ctx->pc = 0x406DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D9Cu;
        // 0x406da0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406DA4u;
        goto label_406da4;
    }
    ctx->pc = 0x406D9Cu;
    {
        const bool branch_taken_0x406d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D9Cu;
        // 0x406da0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406d9c) {
            ctx->pc = 0x406DB4u;
            goto label_406db4;
        }
    }
    ctx->pc = 0x406DA4u;
label_406da4:
    // 0x406da4: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x406da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_406da8:
    // 0x406da8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x406da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_406dac:
    // 0x406dac: 0xc0440c6  jal         func_110318
label_406db0:
    if (ctx->pc == 0x406DB0u) {
        ctx->pc = 0x406DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DACu;
        // 0x406db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406DB4u;
        goto label_406db4;
    }
    ctx->pc = 0x406DACu;
    SET_GPR_U32(ctx, 31, 0x406DB4u);
    ctx->pc = 0x406DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406DACu;
    // 0x406db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x406DACu, 0x406DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406DB4u;
label_406db4:
    // 0x406db4: 0x26d00014  addiu       $s0, $s6, 0x14
    ctx->pc = 0x406db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_406db8:
    // 0x406db8: 0xc043d5e  jal         func_10F578
label_406dbc:
    if (ctx->pc == 0x406DBCu) {
        ctx->pc = 0x406DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DB8u;
        // 0x406dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406DC0u;
        goto label_406dc0;
    }
    ctx->pc = 0x406DB8u;
    SET_GPR_U32(ctx, 31, 0x406DC0u);
    ctx->pc = 0x406DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406DB8u;
    // 0x406dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x406DB8u, 0x406DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406DC0u;
label_406dc0:
    // 0x406dc0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_406dc4:
    if (ctx->pc == 0x406DC4u) {
        ctx->pc = 0x406DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DC0u;
        // 0x406dc4: 0x7bb00570  lq          $s0, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406DC8u;
        goto label_406dc8;
    }
    ctx->pc = 0x406DC0u;
    {
        const bool branch_taken_0x406dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x406dc0) {
            ctx->pc = 0x406DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406DC0u;
            // 0x406dc4: 0x7bb00570  lq          $s0, 0x570($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406DE0u;
            goto label_406de0;
        }
    }
    ctx->pc = 0x406DC8u;
label_406dc8:
    // 0x406dc8: 0xc043d5e  jal         func_10F578
label_406dcc:
    if (ctx->pc == 0x406DCCu) {
        ctx->pc = 0x406DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DC8u;
        // 0x406dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406DD0u;
        goto label_406dd0;
    }
    ctx->pc = 0x406DC8u;
    SET_GPR_U32(ctx, 31, 0x406DD0u);
    ctx->pc = 0x406DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406DC8u;
    // 0x406dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x406DC8u, 0x406DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406DD0u;
label_406dd0:
    // 0x406dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x406dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406dd4:
    // 0x406dd4: 0xc046c4a  jal         func_11B128
label_406dd8:
    if (ctx->pc == 0x406DD8u) {
        ctx->pc = 0x406DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DD4u;
        // 0x406dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406DDCu;
        goto label_406ddc;
    }
    ctx->pc = 0x406DD4u;
    SET_GPR_U32(ctx, 31, 0x406DDCu);
    ctx->pc = 0x406DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406DD4u;
    // 0x406dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B128u, 0x406DD4u, 0x406DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406DDCu;
label_406ddc:
    // 0x406ddc: 0x7bb00570  lq          $s0, 0x570($sp)
    ctx->pc = 0x406ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_406de0:
    // 0x406de0: 0x7bb10560  lq          $s1, 0x560($sp)
    ctx->pc = 0x406de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_406de4:
    // 0x406de4: 0x7bb20550  lq          $s2, 0x550($sp)
    ctx->pc = 0x406de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_406de8:
    // 0x406de8: 0x7bb30540  lq          $s3, 0x540($sp)
    ctx->pc = 0x406de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_406dec:
    // 0x406dec: 0x7bb40530  lq          $s4, 0x530($sp)
    ctx->pc = 0x406decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_406df0:
    // 0x406df0: 0x7bb50520  lq          $s5, 0x520($sp)
    ctx->pc = 0x406df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_406df4:
    // 0x406df4: 0x7bb60510  lq          $s6, 0x510($sp)
    ctx->pc = 0x406df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_406df8:
    // 0x406df8: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x406df8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_406dfc:
    // 0x406dfc: 0x7bbe04f0  lq          $fp, 0x4F0($sp)
    ctx->pc = 0x406dfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_406e00:
    // 0x406e00: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x406e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_406e04:
    // 0x406e04: 0xc7b70598  lwc1        $f23, 0x598($sp)
    ctx->pc = 0x406e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_406e08:
    // 0x406e08: 0xc7b60590  lwc1        $f22, 0x590($sp)
    ctx->pc = 0x406e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_406e0c:
    // 0x406e0c: 0xc7b50588  lwc1        $f21, 0x588($sp)
    ctx->pc = 0x406e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_406e10:
    // 0x406e10: 0xc7b40580  lwc1        $f20, 0x580($sp)
    ctx->pc = 0x406e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_406e14:
    // 0x406e14: 0x3e00008  jr          $ra
label_406e18:
    if (ctx->pc == 0x406E18u) {
        ctx->pc = 0x406E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E14u;
        // 0x406e18: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406E1Cu;
        goto label_406e1c;
    }
    ctx->pc = 0x406E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E14u;
        // 0x406e18: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406E1Cu;
label_406e1c:
    // 0x406e1c: 0x0  nop
    ctx->pc = 0x406e1cu;
    // NOP
    ctx->pc = 0x406e20u;
}
