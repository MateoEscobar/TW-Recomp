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

// Function: sub_002969D0
// Address: 0x2969d0 - 0x296e10
void sub_002969D0_0x2969d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002969D0_0x2969d0");
#endif

    switch (ctx->pc) {
        case 0x2969d0u: goto label_2969d0;
        case 0x2969d4u: goto label_2969d4;
        case 0x2969d8u: goto label_2969d8;
        case 0x2969dcu: goto label_2969dc;
        case 0x2969e0u: goto label_2969e0;
        case 0x2969e4u: goto label_2969e4;
        case 0x2969e8u: goto label_2969e8;
        case 0x2969ecu: goto label_2969ec;
        case 0x2969f0u: goto label_2969f0;
        case 0x2969f4u: goto label_2969f4;
        case 0x2969f8u: goto label_2969f8;
        case 0x2969fcu: goto label_2969fc;
        case 0x296a00u: goto label_296a00;
        case 0x296a04u: goto label_296a04;
        case 0x296a08u: goto label_296a08;
        case 0x296a0cu: goto label_296a0c;
        case 0x296a10u: goto label_296a10;
        case 0x296a14u: goto label_296a14;
        case 0x296a18u: goto label_296a18;
        case 0x296a1cu: goto label_296a1c;
        case 0x296a20u: goto label_296a20;
        case 0x296a24u: goto label_296a24;
        case 0x296a28u: goto label_296a28;
        case 0x296a2cu: goto label_296a2c;
        case 0x296a30u: goto label_296a30;
        case 0x296a34u: goto label_296a34;
        case 0x296a38u: goto label_296a38;
        case 0x296a3cu: goto label_296a3c;
        case 0x296a40u: goto label_296a40;
        case 0x296a44u: goto label_296a44;
        case 0x296a48u: goto label_296a48;
        case 0x296a4cu: goto label_296a4c;
        case 0x296a50u: goto label_296a50;
        case 0x296a54u: goto label_296a54;
        case 0x296a58u: goto label_296a58;
        case 0x296a5cu: goto label_296a5c;
        case 0x296a60u: goto label_296a60;
        case 0x296a64u: goto label_296a64;
        case 0x296a68u: goto label_296a68;
        case 0x296a6cu: goto label_296a6c;
        case 0x296a70u: goto label_296a70;
        case 0x296a74u: goto label_296a74;
        case 0x296a78u: goto label_296a78;
        case 0x296a7cu: goto label_296a7c;
        case 0x296a80u: goto label_296a80;
        case 0x296a84u: goto label_296a84;
        case 0x296a88u: goto label_296a88;
        case 0x296a8cu: goto label_296a8c;
        case 0x296a90u: goto label_296a90;
        case 0x296a94u: goto label_296a94;
        case 0x296a98u: goto label_296a98;
        case 0x296a9cu: goto label_296a9c;
        case 0x296aa0u: goto label_296aa0;
        case 0x296aa4u: goto label_296aa4;
        case 0x296aa8u: goto label_296aa8;
        case 0x296aacu: goto label_296aac;
        case 0x296ab0u: goto label_296ab0;
        case 0x296ab4u: goto label_296ab4;
        case 0x296ab8u: goto label_296ab8;
        case 0x296abcu: goto label_296abc;
        case 0x296ac0u: goto label_296ac0;
        case 0x296ac4u: goto label_296ac4;
        case 0x296ac8u: goto label_296ac8;
        case 0x296accu: goto label_296acc;
        case 0x296ad0u: goto label_296ad0;
        case 0x296ad4u: goto label_296ad4;
        case 0x296ad8u: goto label_296ad8;
        case 0x296adcu: goto label_296adc;
        case 0x296ae0u: goto label_296ae0;
        case 0x296ae4u: goto label_296ae4;
        case 0x296ae8u: goto label_296ae8;
        case 0x296aecu: goto label_296aec;
        case 0x296af0u: goto label_296af0;
        case 0x296af4u: goto label_296af4;
        case 0x296af8u: goto label_296af8;
        case 0x296afcu: goto label_296afc;
        case 0x296b00u: goto label_296b00;
        case 0x296b04u: goto label_296b04;
        case 0x296b08u: goto label_296b08;
        case 0x296b0cu: goto label_296b0c;
        case 0x296b10u: goto label_296b10;
        case 0x296b14u: goto label_296b14;
        case 0x296b18u: goto label_296b18;
        case 0x296b1cu: goto label_296b1c;
        case 0x296b20u: goto label_296b20;
        case 0x296b24u: goto label_296b24;
        case 0x296b28u: goto label_296b28;
        case 0x296b2cu: goto label_296b2c;
        case 0x296b30u: goto label_296b30;
        case 0x296b34u: goto label_296b34;
        case 0x296b38u: goto label_296b38;
        case 0x296b3cu: goto label_296b3c;
        case 0x296b40u: goto label_296b40;
        case 0x296b44u: goto label_296b44;
        case 0x296b48u: goto label_296b48;
        case 0x296b4cu: goto label_296b4c;
        case 0x296b50u: goto label_296b50;
        case 0x296b54u: goto label_296b54;
        case 0x296b58u: goto label_296b58;
        case 0x296b5cu: goto label_296b5c;
        case 0x296b60u: goto label_296b60;
        case 0x296b64u: goto label_296b64;
        case 0x296b68u: goto label_296b68;
        case 0x296b6cu: goto label_296b6c;
        case 0x296b70u: goto label_296b70;
        case 0x296b74u: goto label_296b74;
        case 0x296b78u: goto label_296b78;
        case 0x296b7cu: goto label_296b7c;
        case 0x296b80u: goto label_296b80;
        case 0x296b84u: goto label_296b84;
        case 0x296b88u: goto label_296b88;
        case 0x296b8cu: goto label_296b8c;
        case 0x296b90u: goto label_296b90;
        case 0x296b94u: goto label_296b94;
        case 0x296b98u: goto label_296b98;
        case 0x296b9cu: goto label_296b9c;
        case 0x296ba0u: goto label_296ba0;
        case 0x296ba4u: goto label_296ba4;
        case 0x296ba8u: goto label_296ba8;
        case 0x296bacu: goto label_296bac;
        case 0x296bb0u: goto label_296bb0;
        case 0x296bb4u: goto label_296bb4;
        case 0x296bb8u: goto label_296bb8;
        case 0x296bbcu: goto label_296bbc;
        case 0x296bc0u: goto label_296bc0;
        case 0x296bc4u: goto label_296bc4;
        case 0x296bc8u: goto label_296bc8;
        case 0x296bccu: goto label_296bcc;
        case 0x296bd0u: goto label_296bd0;
        case 0x296bd4u: goto label_296bd4;
        case 0x296bd8u: goto label_296bd8;
        case 0x296bdcu: goto label_296bdc;
        case 0x296be0u: goto label_296be0;
        case 0x296be4u: goto label_296be4;
        case 0x296be8u: goto label_296be8;
        case 0x296becu: goto label_296bec;
        case 0x296bf0u: goto label_296bf0;
        case 0x296bf4u: goto label_296bf4;
        case 0x296bf8u: goto label_296bf8;
        case 0x296bfcu: goto label_296bfc;
        case 0x296c00u: goto label_296c00;
        case 0x296c04u: goto label_296c04;
        case 0x296c08u: goto label_296c08;
        case 0x296c0cu: goto label_296c0c;
        case 0x296c10u: goto label_296c10;
        case 0x296c14u: goto label_296c14;
        case 0x296c18u: goto label_296c18;
        case 0x296c1cu: goto label_296c1c;
        case 0x296c20u: goto label_296c20;
        case 0x296c24u: goto label_296c24;
        case 0x296c28u: goto label_296c28;
        case 0x296c2cu: goto label_296c2c;
        case 0x296c30u: goto label_296c30;
        case 0x296c34u: goto label_296c34;
        case 0x296c38u: goto label_296c38;
        case 0x296c3cu: goto label_296c3c;
        case 0x296c40u: goto label_296c40;
        case 0x296c44u: goto label_296c44;
        case 0x296c48u: goto label_296c48;
        case 0x296c4cu: goto label_296c4c;
        case 0x296c50u: goto label_296c50;
        case 0x296c54u: goto label_296c54;
        case 0x296c58u: goto label_296c58;
        case 0x296c5cu: goto label_296c5c;
        case 0x296c60u: goto label_296c60;
        case 0x296c64u: goto label_296c64;
        case 0x296c68u: goto label_296c68;
        case 0x296c6cu: goto label_296c6c;
        case 0x296c70u: goto label_296c70;
        case 0x296c74u: goto label_296c74;
        case 0x296c78u: goto label_296c78;
        case 0x296c7cu: goto label_296c7c;
        case 0x296c80u: goto label_296c80;
        case 0x296c84u: goto label_296c84;
        case 0x296c88u: goto label_296c88;
        case 0x296c8cu: goto label_296c8c;
        case 0x296c90u: goto label_296c90;
        case 0x296c94u: goto label_296c94;
        case 0x296c98u: goto label_296c98;
        case 0x296c9cu: goto label_296c9c;
        case 0x296ca0u: goto label_296ca0;
        case 0x296ca4u: goto label_296ca4;
        case 0x296ca8u: goto label_296ca8;
        case 0x296cacu: goto label_296cac;
        case 0x296cb0u: goto label_296cb0;
        case 0x296cb4u: goto label_296cb4;
        case 0x296cb8u: goto label_296cb8;
        case 0x296cbcu: goto label_296cbc;
        case 0x296cc0u: goto label_296cc0;
        case 0x296cc4u: goto label_296cc4;
        case 0x296cc8u: goto label_296cc8;
        case 0x296cccu: goto label_296ccc;
        case 0x296cd0u: goto label_296cd0;
        case 0x296cd4u: goto label_296cd4;
        case 0x296cd8u: goto label_296cd8;
        case 0x296cdcu: goto label_296cdc;
        case 0x296ce0u: goto label_296ce0;
        case 0x296ce4u: goto label_296ce4;
        case 0x296ce8u: goto label_296ce8;
        case 0x296cecu: goto label_296cec;
        case 0x296cf0u: goto label_296cf0;
        case 0x296cf4u: goto label_296cf4;
        case 0x296cf8u: goto label_296cf8;
        case 0x296cfcu: goto label_296cfc;
        case 0x296d00u: goto label_296d00;
        case 0x296d04u: goto label_296d04;
        case 0x296d08u: goto label_296d08;
        case 0x296d0cu: goto label_296d0c;
        case 0x296d10u: goto label_296d10;
        case 0x296d14u: goto label_296d14;
        case 0x296d18u: goto label_296d18;
        case 0x296d1cu: goto label_296d1c;
        case 0x296d20u: goto label_296d20;
        case 0x296d24u: goto label_296d24;
        case 0x296d28u: goto label_296d28;
        case 0x296d2cu: goto label_296d2c;
        case 0x296d30u: goto label_296d30;
        case 0x296d34u: goto label_296d34;
        case 0x296d38u: goto label_296d38;
        case 0x296d3cu: goto label_296d3c;
        case 0x296d40u: goto label_296d40;
        case 0x296d44u: goto label_296d44;
        case 0x296d48u: goto label_296d48;
        case 0x296d4cu: goto label_296d4c;
        case 0x296d50u: goto label_296d50;
        case 0x296d54u: goto label_296d54;
        case 0x296d58u: goto label_296d58;
        case 0x296d5cu: goto label_296d5c;
        case 0x296d60u: goto label_296d60;
        case 0x296d64u: goto label_296d64;
        case 0x296d68u: goto label_296d68;
        case 0x296d6cu: goto label_296d6c;
        case 0x296d70u: goto label_296d70;
        case 0x296d74u: goto label_296d74;
        case 0x296d78u: goto label_296d78;
        case 0x296d7cu: goto label_296d7c;
        case 0x296d80u: goto label_296d80;
        case 0x296d84u: goto label_296d84;
        case 0x296d88u: goto label_296d88;
        case 0x296d8cu: goto label_296d8c;
        case 0x296d90u: goto label_296d90;
        case 0x296d94u: goto label_296d94;
        case 0x296d98u: goto label_296d98;
        case 0x296d9cu: goto label_296d9c;
        case 0x296da0u: goto label_296da0;
        case 0x296da4u: goto label_296da4;
        case 0x296da8u: goto label_296da8;
        case 0x296dacu: goto label_296dac;
        case 0x296db0u: goto label_296db0;
        case 0x296db4u: goto label_296db4;
        case 0x296db8u: goto label_296db8;
        case 0x296dbcu: goto label_296dbc;
        case 0x296dc0u: goto label_296dc0;
        case 0x296dc4u: goto label_296dc4;
        case 0x296dc8u: goto label_296dc8;
        case 0x296dccu: goto label_296dcc;
        case 0x296dd0u: goto label_296dd0;
        case 0x296dd4u: goto label_296dd4;
        case 0x296dd8u: goto label_296dd8;
        case 0x296ddcu: goto label_296ddc;
        case 0x296de0u: goto label_296de0;
        case 0x296de4u: goto label_296de4;
        case 0x296de8u: goto label_296de8;
        case 0x296decu: goto label_296dec;
        case 0x296df0u: goto label_296df0;
        case 0x296df4u: goto label_296df4;
        case 0x296df8u: goto label_296df8;
        case 0x296dfcu: goto label_296dfc;
        case 0x296e00u: goto label_296e00;
        case 0x296e04u: goto label_296e04;
        case 0x296e08u: goto label_296e08;
        case 0x296e0cu: goto label_296e0c;
        default: break;
    }

    ctx->pc = 0x2969d0u;

label_2969d0:
    // 0x2969d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2969d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2969d4:
    // 0x2969d4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2969d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2969d8:
    // 0x2969d8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2969d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2969dc:
    // 0x2969dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2969dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2969e0:
    // 0x2969e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2969e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2969e4:
    // 0x2969e4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2969e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2969e8:
    // 0x2969e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2969e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2969ec:
    // 0x2969ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2969ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2969f0:
    // 0x2969f0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2969f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2969f4:
    // 0x2969f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2969f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2969f8:
    // 0x2969f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2969f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2969fc:
    // 0x2969fc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2969fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_296a00:
    // 0x296a00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x296a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_296a04:
    // 0x296a04: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x296a04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_296a08:
    // 0x296a08: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x296a08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_296a0c:
    // 0x296a0c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x296a0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_296a10:
    // 0x296a10: 0xc0874fa  jal         func_21D3E8
label_296a14:
    if (ctx->pc == 0x296A14u) {
        ctx->pc = 0x296A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A10u;
        // 0x296a14: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A18u;
        goto label_296a18;
    }
    ctx->pc = 0x296A10u;
    SET_GPR_U32(ctx, 31, 0x296A18u);
    ctx->pc = 0x296A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A10u;
    // 0x296a14: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x296A10u, 0x296A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A18u;
label_296a18:
    // 0x296a18: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x296a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_296a1c:
    // 0x296a1c: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
label_296a20:
    if (ctx->pc == 0x296A20u) {
        ctx->pc = 0x296A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A1Cu;
        // 0x296a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A24u;
        goto label_296a24;
    }
    ctx->pc = 0x296A1Cu;
    {
        const bool branch_taken_0x296a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A1Cu;
        // 0x296a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a1c) {
            ctx->pc = 0x296DD4u;
            goto label_296dd4;
        }
    }
    ctx->pc = 0x296A24u;
label_296a24:
    // 0x296a24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_296a28:
    // 0x296a28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x296a28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296a2c:
    // 0x296a2c: 0x94450b0c  lhu         $a1, 0xB0C($v0)
    ctx->pc = 0x296a2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2828)));
label_296a30:
    // 0x296a30: 0x84420b0c  lh          $v0, 0xB0C($v0)
    ctx->pc = 0x296a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2828)));
label_296a34:
    // 0x296a34: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_296a38:
    if (ctx->pc == 0x296A38u) {
        ctx->pc = 0x296A3Cu;
        goto label_296a3c;
    }
    ctx->pc = 0x296A34u;
    {
        const bool branch_taken_0x296a34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x296a34) {
            ctx->pc = 0x296A70u;
            goto label_296a70;
        }
    }
    ctx->pc = 0x296A3Cu;
label_296a3c:
    // 0x296a3c: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x296a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_296a40:
    // 0x296a40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_296a44:
    // 0x296a44: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x296a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_296a48:
    // 0x296a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_296a4c:
    // 0x296a4c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x296a4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296a50:
    // 0x296a50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x296a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_296a54:
    // 0x296a54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_296a58:
    // 0x296a58: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x296a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_296a5c:
    // 0x296a5c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x296a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_296a60:
    // 0x296a60: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
label_296a64:
    if (ctx->pc == 0x296A64u) {
        ctx->pc = 0x296A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A60u;
        // 0x296a64: 0xa6a20b0c  sh          $v0, 0xB0C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A68u;
        goto label_296a68;
    }
    ctx->pc = 0x296A60u;
    {
        const bool branch_taken_0x296a60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x296A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A60u;
        // 0x296a64: 0xa6a20b0c  sh          $v0, 0xB0C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a60) {
            ctx->pc = 0x296BB4u;
            goto label_296bb4;
        }
    }
    ctx->pc = 0x296A68u;
label_296a68:
    // 0x296a68: 0x100000da  b           . + 4 + (0xDA << 2)
label_296a6c:
    if (ctx->pc == 0x296A6Cu) {
        ctx->pc = 0x296A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A68u;
        // 0x296a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A70u;
        goto label_296a70;
    }
    ctx->pc = 0x296A68u;
    {
        const bool branch_taken_0x296a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A68u;
        // 0x296a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a68) {
            ctx->pc = 0x296DD4u;
            goto label_296dd4;
        }
    }
    ctx->pc = 0x296A70u;
label_296a70:
    // 0x296a70: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
label_296a74:
    if (ctx->pc == 0x296A74u) {
        ctx->pc = 0x296A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A70u;
        // 0x296a74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A78u;
        goto label_296a78;
    }
    ctx->pc = 0x296A70u;
    {
        const bool branch_taken_0x296a70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x296A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A70u;
        // 0x296a74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a70) {
            ctx->pc = 0x296BB4u;
            goto label_296bb4;
        }
    }
    ctx->pc = 0x296A78u;
label_296a78:
    // 0x296a78: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x296a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_296a7c:
    // 0x296a7c: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x296a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_296a80:
    // 0x296a80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_296a84:
    // 0x296a84: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x296a84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296a88:
    // 0x296a88: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x296a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_296a8c:
    // 0x296a8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x296a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_296a90:
    // 0x296a90: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x296a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_296a94:
    // 0x296a94: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x296a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_296a98:
    // 0x296a98: 0x18600034  blez        $v1, . + 4 + (0x34 << 2)
label_296a9c:
    if (ctx->pc == 0x296A9Cu) {
        ctx->pc = 0x296A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A98u;
        // 0x296a9c: 0xa6a20b0c  sh          $v0, 0xB0C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AA0u;
        goto label_296aa0;
    }
    ctx->pc = 0x296A98u;
    {
        const bool branch_taken_0x296a98 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x296A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A98u;
        // 0x296a9c: 0xa6a20b0c  sh          $v0, 0xB0C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a98) {
            ctx->pc = 0x296B6Cu;
            goto label_296b6c;
        }
    }
    ctx->pc = 0x296AA0u;
label_296aa0:
    // 0x296aa0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_296aa4:
    // 0x296aa4: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x296aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_296aa8:
    // 0x296aa8: 0xc10587a  jal         func_4161E8
label_296aac:
    if (ctx->pc == 0x296AACu) {
        ctx->pc = 0x296AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AA8u;
        // 0x296aac: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AB0u;
        goto label_296ab0;
    }
    ctx->pc = 0x296AA8u;
    SET_GPR_U32(ctx, 31, 0x296AB0u);
    ctx->pc = 0x296AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AA8u;
    // 0x296aac: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x296AA8u, 0x296AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AB0u;
label_296ab0:
    // 0x296ab0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x296ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_296ab4:
    // 0x296ab4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x296ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_296ab8:
    // 0x296ab8: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x296ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_296abc:
    // 0x296abc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_296ac0:
    // 0x296ac0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x296ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_296ac4:
    // 0x296ac4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x296ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_296ac8:
    // 0x296ac8: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x296ac8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_296acc:
    // 0x296acc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x296accu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_296ad0:
    // 0x296ad0: 0xc136afa  jal         func_4DABE8
label_296ad4:
    if (ctx->pc == 0x296AD4u) {
        ctx->pc = 0x296AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AD0u;
        // 0x296ad4: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AD8u;
        goto label_296ad8;
    }
    ctx->pc = 0x296AD0u;
    SET_GPR_U32(ctx, 31, 0x296AD8u);
    ctx->pc = 0x296AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AD0u;
    // 0x296ad4: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x296AD0u, 0x296AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AD8u;
label_296ad8:
    // 0x296ad8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x296ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296adc:
    // 0x296adc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x296adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_296ae0:
    // 0x296ae0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x296ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_296ae4:
    // 0x296ae4: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x296ae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_296ae8:
    // 0x296ae8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x296ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_296aec:
    // 0x296aec: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x296aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_296af0:
    // 0x296af0: 0xc0cd8ec  jal         func_3363B0
label_296af4:
    if (ctx->pc == 0x296AF4u) {
        ctx->pc = 0x296AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AF0u;
        // 0x296af4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AF8u;
        goto label_296af8;
    }
    ctx->pc = 0x296AF0u;
    SET_GPR_U32(ctx, 31, 0x296AF8u);
    ctx->pc = 0x296AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AF0u;
    // 0x296af4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x296AF0u, 0x296AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AF8u;
label_296af8:
    // 0x296af8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x296af8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296afc:
    // 0x296afc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x296afcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296b00:
    // 0x296b00: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x296b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_296b04:
    // 0x296b04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x296b04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_296b08:
    // 0x296b08: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x296b08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_296b0c:
    // 0x296b0c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x296b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_296b10:
    // 0x296b10: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x296b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_296b14:
    // 0x296b14: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x296b14u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_296b18:
    // 0x296b18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x296b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_296b1c:
    // 0x296b1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x296b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_296b20:
    // 0x296b20: 0x0  nop
    ctx->pc = 0x296b20u;
    // NOP
label_296b24:
    // 0x296b24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x296b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_296b28:
    // 0x296b28: 0x0  nop
    ctx->pc = 0x296b28u;
    // NOP
label_296b2c:
    // 0x296b2c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_296b30:
    if (ctx->pc == 0x296B30u) {
        ctx->pc = 0x296B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B2Cu;
        // 0x296b30: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B34u;
        goto label_296b34;
    }
    ctx->pc = 0x296B2Cu;
    {
        const bool branch_taken_0x296b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B2Cu;
        // 0x296b30: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b2c) {
            ctx->pc = 0x296B6Cu;
            goto label_296b6c;
        }
    }
    ctx->pc = 0x296B34u;
label_296b34:
    // 0x296b34: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x296b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_296b38:
    // 0x296b38: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x296b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_296b3c:
    // 0x296b3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x296b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_296b40:
    // 0x296b40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x296b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_296b44:
    // 0x296b44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_296b48:
    // 0x296b48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x296b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_296b4c:
    // 0x296b4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x296b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_296b50:
    // 0x296b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296b54:
    // 0x296b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x296b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_296b58:
    // 0x296b58: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_296b5c:
    // 0x296b5c: 0xc0a67ca  jal         func_299F28
label_296b60:
    if (ctx->pc == 0x296B60u) {
        ctx->pc = 0x296B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B5Cu;
        // 0x296b60: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B64u;
        goto label_296b64;
    }
    ctx->pc = 0x296B5Cu;
    SET_GPR_U32(ctx, 31, 0x296B64u);
    ctx->pc = 0x296B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B5Cu;
    // 0x296b60: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x296B5Cu, 0x296B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B64u;
label_296b64:
    // 0x296b64: 0x1000009b  b           . + 4 + (0x9B << 2)
label_296b68:
    if (ctx->pc == 0x296B68u) {
        ctx->pc = 0x296B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B64u;
        // 0x296b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B6Cu;
        goto label_296b6c;
    }
    ctx->pc = 0x296B64u;
    {
        const bool branch_taken_0x296b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B64u;
        // 0x296b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b64) {
            ctx->pc = 0x296DD4u;
            goto label_296dd4;
        }
    }
    ctx->pc = 0x296B6Cu;
label_296b6c:
    // 0x296b6c: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x296b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_296b70:
    // 0x296b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_296b74:
    // 0x296b74: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_296b78:
    if (ctx->pc == 0x296B78u) {
        ctx->pc = 0x296B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B74u;
        // 0x296b78: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B7Cu;
        goto label_296b7c;
    }
    ctx->pc = 0x296B74u;
    {
        const bool branch_taken_0x296b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x296B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B74u;
        // 0x296b78: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b74) {
            ctx->pc = 0x296BB4u;
            goto label_296bb4;
        }
    }
    ctx->pc = 0x296B7Cu;
label_296b7c:
    // 0x296b7c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x296b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_296b80:
    // 0x296b80: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x296b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_296b84:
    // 0x296b84: 0xc0cd4fc  jal         func_3353F0
label_296b88:
    if (ctx->pc == 0x296B88u) {
        ctx->pc = 0x296B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B84u;
        // 0x296b88: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B8Cu;
        goto label_296b8c;
    }
    ctx->pc = 0x296B84u;
    SET_GPR_U32(ctx, 31, 0x296B8Cu);
    ctx->pc = 0x296B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B84u;
    // 0x296b88: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x296B84u, 0x296B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B8Cu;
label_296b8c:
    // 0x296b8c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x296b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_296b90:
    // 0x296b90: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x296b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_296b94:
    // 0x296b94: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x296b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_296b98:
    // 0x296b98: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_296b9c:
    if (ctx->pc == 0x296B9Cu) {
        ctx->pc = 0x296B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B98u;
        // 0x296b9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x296BA0u;
        goto label_296ba0;
    }
    ctx->pc = 0x296B98u;
    {
        const bool branch_taken_0x296b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b98) {
            ctx->pc = 0x296B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296B98u;
            // 0x296b9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x296BA0u;
            goto label_296ba0;
        }
    }
    ctx->pc = 0x296BA0u;
label_296ba0:
    // 0x296ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296ba4:
    // 0x296ba4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x296ba4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_296ba8:
    // 0x296ba8: 0x1812  mflo        $v1
    ctx->pc = 0x296ba8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_296bac:
    // 0x296bac: 0x10000088  b           . + 4 + (0x88 << 2)
label_296bb0:
    if (ctx->pc == 0x296BB0u) {
        ctx->pc = 0x296BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BACu;
        // 0x296bb0: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296BB4u;
        goto label_296bb4;
    }
    ctx->pc = 0x296BACu;
    {
        const bool branch_taken_0x296bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BACu;
        // 0x296bb0: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bac) {
            ctx->pc = 0x296DD0u;
            goto label_296dd0;
        }
    }
    ctx->pc = 0x296BB4u;
label_296bb4:
    // 0x296bb4: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x296bb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_296bb8:
    // 0x296bb8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_296bbc:
    // 0x296bbc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x296bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_296bc0:
    // 0x296bc0: 0xa6a00b0c  sh          $zero, 0xB0C($s5)
    ctx->pc = 0x296bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 0));
label_296bc4:
    // 0x296bc4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x296bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_296bc8:
    // 0x296bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_296bcc:
    // 0x296bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_296bd0:
    // 0x296bd0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_296bd4:
    // 0x296bd4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x296bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_296bd8:
    // 0x296bd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x296bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_296bdc:
    // 0x296bdc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x296bdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296be0:
    // 0x296be0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x296be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_296be4:
    // 0x296be4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x296be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_296be8:
    // 0x296be8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x296be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_296bec:
    // 0x296bec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x296becu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296bf0:
    // 0x296bf0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x296bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_296bf4:
    // 0x296bf4: 0xc087502  jal         func_21D408
label_296bf8:
    if (ctx->pc == 0x296BF8u) {
        ctx->pc = 0x296BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BF4u;
        // 0x296bf8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296BFCu;
        goto label_296bfc;
    }
    ctx->pc = 0x296BF4u;
    SET_GPR_U32(ctx, 31, 0x296BFCu);
    ctx->pc = 0x296BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BF4u;
    // 0x296bf8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x296BF4u, 0x296BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BFCu;
label_296bfc:
    // 0x296bfc: 0x10000047  b           . + 4 + (0x47 << 2)
label_296c00:
    if (ctx->pc == 0x296C00u) {
        ctx->pc = 0x296C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BFCu;
        // 0x296c00: 0xc456012c  lwc1        $f22, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C04u;
        goto label_296c04;
    }
    ctx->pc = 0x296BFCu;
    {
        const bool branch_taken_0x296bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BFCu;
        // 0x296c00: 0xc456012c  lwc1        $f22, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bfc) {
            ctx->pc = 0x296D1Cu;
            goto label_296d1c;
        }
    }
    ctx->pc = 0x296C04u;
label_296c04:
    // 0x296c04: 0x0  nop
    ctx->pc = 0x296c04u;
    // NOP
label_296c08:
    // 0x296c08: 0xc105774  jal         func_415DD0
label_296c0c:
    if (ctx->pc == 0x296C0Cu) {
        ctx->pc = 0x296C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C08u;
        // 0x296c0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C10u;
        goto label_296c10;
    }
    ctx->pc = 0x296C08u;
    SET_GPR_U32(ctx, 31, 0x296C10u);
    ctx->pc = 0x296C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C08u;
    // 0x296c0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x296C08u, 0x296C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C10u;
label_296c10:
    // 0x296c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296c14:
    // 0x296c14: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x296c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
label_296c18:
    // 0x296c18: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x296c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_296c1c:
    // 0x296c1c: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_296c20:
    if (ctx->pc == 0x296C20u) {
        ctx->pc = 0x296C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C1Cu;
        // 0x296c20: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C24u;
        goto label_296c24;
    }
    ctx->pc = 0x296C1Cu;
    {
        const bool branch_taken_0x296c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c1c) {
            ctx->pc = 0x296C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C1Cu;
            // 0x296c20: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D1Cu;
            goto label_296d1c;
        }
    }
    ctx->pc = 0x296C24u;
label_296c24:
    // 0x296c24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296c28:
    // 0x296c28: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x296c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_296c2c:
    // 0x296c2c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x296c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_296c30:
    // 0x296c30: 0x40f809  jalr        $v0
label_296c34:
    if (ctx->pc == 0x296C34u) {
        ctx->pc = 0x296C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C30u;
        // 0x296c34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C38u;
        goto label_296c38;
    }
    ctx->pc = 0x296C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296C38u);
        ctx->pc = 0x296C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C30u;
        // 0x296c34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C30u, 0x296C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296C38u;
label_296c38:
    // 0x296c38: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_296c3c:
    if (ctx->pc == 0x296C3Cu) {
        ctx->pc = 0x296C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C38u;
        // 0x296c3c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C40u;
        goto label_296c40;
    }
    ctx->pc = 0x296C38u;
    {
        const bool branch_taken_0x296c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c38) {
            ctx->pc = 0x296C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C38u;
            // 0x296c3c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D1Cu;
            goto label_296d1c;
        }
    }
    ctx->pc = 0x296C40u;
label_296c40:
    // 0x296c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296c44:
    // 0x296c44: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x296c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_296c48:
    // 0x296c48: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x296c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_296c4c:
    // 0x296c4c: 0x40f809  jalr        $v0
label_296c50:
    if (ctx->pc == 0x296C50u) {
        ctx->pc = 0x296C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C4Cu;
        // 0x296c50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C54u;
        goto label_296c54;
    }
    ctx->pc = 0x296C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296C54u);
        ctx->pc = 0x296C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C4Cu;
        // 0x296c50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C4Cu, 0x296C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296C54u;
label_296c54:
    // 0x296c54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_296c58:
    // 0x296c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296c5c:
    // 0x296c5c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x296c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_296c60:
    // 0x296c60: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_296c64:
    // 0x296c64: 0xc0f809  jalr        $a2
label_296c68:
    if (ctx->pc == 0x296C68u) {
        ctx->pc = 0x296C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C64u;
        // 0x296c68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C6Cu;
        goto label_296c6c;
    }
    ctx->pc = 0x296C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x296C6Cu);
        ctx->pc = 0x296C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C64u;
        // 0x296c68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C64u, 0x296C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296C6Cu;
label_296c6c:
    // 0x296c6c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_296c70:
    if (ctx->pc == 0x296C70u) {
        ctx->pc = 0x296C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C6Cu;
        // 0x296c70: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C74u;
        goto label_296c74;
    }
    ctx->pc = 0x296C6Cu;
    {
        const bool branch_taken_0x296c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c6c) {
            ctx->pc = 0x296C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C6Cu;
            // 0x296c70: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D1Cu;
            goto label_296d1c;
        }
    }
    ctx->pc = 0x296C74u;
label_296c74:
    // 0x296c74: 0xc10587a  jal         func_4161E8
label_296c78:
    if (ctx->pc == 0x296C78u) {
        ctx->pc = 0x296C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C74u;
        // 0x296c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C7Cu;
        goto label_296c7c;
    }
    ctx->pc = 0x296C74u;
    SET_GPR_U32(ctx, 31, 0x296C7Cu);
    ctx->pc = 0x296C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C74u;
    // 0x296c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x296C74u, 0x296C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C7Cu;
label_296c7c:
    // 0x296c7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x296c7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_296c80:
    // 0x296c80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_296c84:
    // 0x296c84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_296c88:
    // 0x296c88: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x296c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_296c8c:
    // 0x296c8c: 0xc136afa  jal         func_4DABE8
label_296c90:
    if (ctx->pc == 0x296C90u) {
        ctx->pc = 0x296C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C8Cu;
        // 0x296c90: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C94u;
        goto label_296c94;
    }
    ctx->pc = 0x296C8Cu;
    SET_GPR_U32(ctx, 31, 0x296C94u);
    ctx->pc = 0x296C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C8Cu;
    // 0x296c90: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x296C8Cu, 0x296C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C94u;
label_296c94:
    // 0x296c94: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x296c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_296c98:
    // 0x296c98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x296c98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_296c9c:
    // 0x296c9c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x296c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_296ca0:
    // 0x296ca0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x296ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_296ca4:
    // 0x296ca4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x296ca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_296ca8:
    // 0x296ca8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x296ca8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_296cac:
    // 0x296cac: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x296cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_296cb0:
    // 0x296cb0: 0x0  nop
    ctx->pc = 0x296cb0u;
    // NOP
label_296cb4:
    // 0x296cb4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x296cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_296cb8:
    // 0x296cb8: 0x0  nop
    ctx->pc = 0x296cb8u;
    // NOP
label_296cbc:
    // 0x296cbc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_296cc0:
    if (ctx->pc == 0x296CC0u) {
        ctx->pc = 0x296CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CBCu;
        // 0x296cc0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CC4u;
        goto label_296cc4;
    }
    ctx->pc = 0x296CBCu;
    {
        const bool branch_taken_0x296cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CBCu;
        // 0x296cc0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cbc) {
            ctx->pc = 0x296D18u;
            goto label_296d18;
        }
    }
    ctx->pc = 0x296CC4u;
label_296cc4:
    // 0x296cc4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x296cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_296cc8:
    // 0x296cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_296ccc:
    // 0x296ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_296cd0:
    // 0x296cd0: 0xc0889c4  jal         func_222710
label_296cd4:
    if (ctx->pc == 0x296CD4u) {
        ctx->pc = 0x296CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CD0u;
        // 0x296cd4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CD8u;
        goto label_296cd8;
    }
    ctx->pc = 0x296CD0u;
    SET_GPR_U32(ctx, 31, 0x296CD8u);
    ctx->pc = 0x296CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CD0u;
    // 0x296cd4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x296CD0u, 0x296CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CD8u;
label_296cd8:
    // 0x296cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296cdc:
    // 0x296cdc: 0x5637000f  bnel        $s1, $s7, . + 4 + (0xF << 2)
label_296ce0:
    if (ctx->pc == 0x296CE0u) {
        ctx->pc = 0x296CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CDCu;
        // 0x296ce0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CE4u;
        goto label_296ce4;
    }
    ctx->pc = 0x296CDCu;
    {
        const bool branch_taken_0x296cdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x296cdc) {
            ctx->pc = 0x296CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296CDCu;
            // 0x296ce0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D1Cu;
            goto label_296d1c;
        }
    }
    ctx->pc = 0x296CE4u;
label_296ce4:
    // 0x296ce4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x296ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_296ce8:
    // 0x296ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_296cec:
    // 0x296cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_296cf0:
    // 0x296cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296cf4:
    // 0x296cf4: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x296cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_296cf8:
    // 0x296cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296cfc:
    // 0x296cfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296cfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296d00:
    // 0x296d00: 0xc0888dc  jal         func_222370
label_296d04:
    if (ctx->pc == 0x296D04u) {
        ctx->pc = 0x296D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D00u;
        // 0x296d04: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D08u;
        goto label_296d08;
    }
    ctx->pc = 0x296D00u;
    SET_GPR_U32(ctx, 31, 0x296D08u);
    ctx->pc = 0x296D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D00u;
    // 0x296d04: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x296D00u, 0x296D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D08u;
label_296d08:
    // 0x296d08: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_296d0c:
    if (ctx->pc == 0x296D0Cu) {
        ctx->pc = 0x296D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D08u;
        // 0x296d0c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D10u;
        goto label_296d10;
    }
    ctx->pc = 0x296D08u;
    {
        const bool branch_taken_0x296d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x296d08) {
            ctx->pc = 0x296D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296D08u;
            // 0x296d0c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D1Cu;
            goto label_296d1c;
        }
    }
    ctx->pc = 0x296D10u;
label_296d10:
    // 0x296d10: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x296d10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296d14:
    // 0x296d14: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x296d14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_296d18:
    // 0x296d18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x296d18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_296d1c:
    // 0x296d1c: 0xc10574c  jal         func_415D30
label_296d20:
    if (ctx->pc == 0x296D20u) {
        ctx->pc = 0x296D24u;
        goto label_296d24;
    }
    ctx->pc = 0x296D1Cu;
    SET_GPR_U32(ctx, 31, 0x296D24u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x296D1Cu, 0x296D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D24u;
label_296d24:
    // 0x296d24: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x296d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_296d28:
    // 0x296d28: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_296d2c:
    if (ctx->pc == 0x296D2Cu) {
        ctx->pc = 0x296D30u;
        goto label_296d30;
    }
    ctx->pc = 0x296D28u;
    {
        const bool branch_taken_0x296d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296d28) {
            ctx->pc = 0x296C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296c08;
        }
    }
    ctx->pc = 0x296D30u;
label_296d30:
    // 0x296d30: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
label_296d34:
    if (ctx->pc == 0x296D34u) {
        ctx->pc = 0x296D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D30u;
        // 0x296d34: 0x96a30b0c  lhu         $v1, 0xB0C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D38u;
        goto label_296d38;
    }
    ctx->pc = 0x296D30u;
    {
        const bool branch_taken_0x296d30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D30u;
        // 0x296d34: 0x96a30b0c  lhu         $v1, 0xB0C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d30) {
            ctx->pc = 0x296DC8u;
            goto label_296dc8;
        }
    }
    ctx->pc = 0x296D38u;
label_296d38:
    // 0x296d38: 0xc10587a  jal         func_4161E8
label_296d3c:
    if (ctx->pc == 0x296D3Cu) {
        ctx->pc = 0x296D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D38u;
        // 0x296d3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D40u;
        goto label_296d40;
    }
    ctx->pc = 0x296D38u;
    SET_GPR_U32(ctx, 31, 0x296D40u);
    ctx->pc = 0x296D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D38u;
    // 0x296d3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x296D38u, 0x296D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D40u;
label_296d40:
    // 0x296d40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x296d40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_296d44:
    // 0x296d44: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x296d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_296d48:
    // 0x296d48: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_296d4c:
    // 0x296d4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x296d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_296d50:
    // 0x296d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x296d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_296d54:
    // 0x296d54: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x296d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_296d58:
    // 0x296d58: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x296d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_296d5c:
    // 0x296d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296d60:
    // 0x296d60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_296d64:
    // 0x296d64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x296d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_296d68:
    // 0x296d68: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x296d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_296d6c:
    // 0x296d6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x296d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_296d70:
    // 0x296d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x296d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_296d74:
    // 0x296d74: 0xc0a67ca  jal         func_299F28
label_296d78:
    if (ctx->pc == 0x296D78u) {
        ctx->pc = 0x296D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D74u;
        // 0x296d78: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D7Cu;
        goto label_296d7c;
    }
    ctx->pc = 0x296D74u;
    SET_GPR_U32(ctx, 31, 0x296D7Cu);
    ctx->pc = 0x296D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D74u;
    // 0x296d78: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x296D74u, 0x296D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D7Cu;
label_296d7c:
    // 0x296d7c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x296d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_296d80:
    // 0x296d80: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x296d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_296d84:
    // 0x296d84: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x296d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_296d88:
    // 0x296d88: 0xc0cd4fc  jal         func_3353F0
label_296d8c:
    if (ctx->pc == 0x296D8Cu) {
        ctx->pc = 0x296D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D88u;
        // 0x296d8c: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D90u;
        goto label_296d90;
    }
    ctx->pc = 0x296D88u;
    SET_GPR_U32(ctx, 31, 0x296D90u);
    ctx->pc = 0x296D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D88u;
    // 0x296d8c: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x296D88u, 0x296D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D90u;
label_296d90:
    // 0x296d90: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x296d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_296d94:
    // 0x296d94: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x296d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_296d98:
    // 0x296d98: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x296d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_296d9c:
    // 0x296d9c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_296da0:
    if (ctx->pc == 0x296DA0u) {
        ctx->pc = 0x296DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D9Cu;
        // 0x296da0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x296DA4u;
        goto label_296da4;
    }
    ctx->pc = 0x296D9Cu;
    {
        const bool branch_taken_0x296d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d9c) {
            ctx->pc = 0x296DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296D9Cu;
            // 0x296da0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x296DA4u;
            goto label_296da4;
        }
    }
    ctx->pc = 0x296DA4u;
label_296da4:
    // 0x296da4: 0x96a40b0c  lhu         $a0, 0xB0C($s5)
    ctx->pc = 0x296da4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2828)));
label_296da8:
    // 0x296da8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_296dac:
    // 0x296dac: 0xac560b08  sw          $s6, 0xB08($v0)
    ctx->pc = 0x296dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2824), GPR_U32(ctx, 22));
label_296db0:
    // 0x296db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296db4:
    // 0x296db4: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x296db4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_296db8:
    // 0x296db8: 0x1812  mflo        $v1
    ctx->pc = 0x296db8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_296dbc:
    // 0x296dbc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x296dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_296dc0:
    // 0x296dc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_296dc4:
    if (ctx->pc == 0x296DC4u) {
        ctx->pc = 0x296DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DC0u;
        // 0x296dc4: 0xa6a40b0c  sh          $a0, 0xB0C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296DC8u;
        goto label_296dc8;
    }
    ctx->pc = 0x296DC0u;
    {
        const bool branch_taken_0x296dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DC0u;
        // 0x296dc4: 0xa6a40b0c  sh          $a0, 0xB0C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dc0) {
            ctx->pc = 0x296DD4u;
            goto label_296dd4;
        }
    }
    ctx->pc = 0x296DC8u;
label_296dc8:
    // 0x296dc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296dcc:
    // 0x296dcc: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x296dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
label_296dd0:
    // 0x296dd0: 0xa6a30b0c  sh          $v1, 0xB0C($s5)
    ctx->pc = 0x296dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2828), (uint16_t)GPR_U32(ctx, 3));
label_296dd4:
    // 0x296dd4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x296dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_296dd8:
    // 0x296dd8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x296dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_296ddc:
    // 0x296ddc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x296ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_296de0:
    // 0x296de0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x296de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_296de4:
    // 0x296de4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x296de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_296de8:
    // 0x296de8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x296de8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_296dec:
    // 0x296dec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x296decu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_296df0:
    // 0x296df0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x296df0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_296df4:
    // 0x296df4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x296df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_296df8:
    // 0x296df8: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x296df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_296dfc:
    // 0x296dfc: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x296dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_296e00:
    // 0x296e00: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x296e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_296e04:
    // 0x296e04: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x296e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_296e08:
    // 0x296e08: 0x3e00008  jr          $ra
label_296e0c:
    if (ctx->pc == 0x296E0Cu) {
        ctx->pc = 0x296E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E08u;
        // 0x296e0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296E10u;
        goto label_fallthrough_0x296e08;
    }
    ctx->pc = 0x296E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E08u;
        // 0x296e0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x296e08:
    ctx->pc = 0x296E10u;
}
