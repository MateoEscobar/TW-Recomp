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

// Function: sub_003939A8
// Address: 0x3939a8 - 0x393e20
void sub_003939A8_0x3939a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003939A8_0x3939a8");
#endif

    switch (ctx->pc) {
        case 0x3939a8u: goto label_3939a8;
        case 0x3939acu: goto label_3939ac;
        case 0x3939b0u: goto label_3939b0;
        case 0x3939b4u: goto label_3939b4;
        case 0x3939b8u: goto label_3939b8;
        case 0x3939bcu: goto label_3939bc;
        case 0x3939c0u: goto label_3939c0;
        case 0x3939c4u: goto label_3939c4;
        case 0x3939c8u: goto label_3939c8;
        case 0x3939ccu: goto label_3939cc;
        case 0x3939d0u: goto label_3939d0;
        case 0x3939d4u: goto label_3939d4;
        case 0x3939d8u: goto label_3939d8;
        case 0x3939dcu: goto label_3939dc;
        case 0x3939e0u: goto label_3939e0;
        case 0x3939e4u: goto label_3939e4;
        case 0x3939e8u: goto label_3939e8;
        case 0x3939ecu: goto label_3939ec;
        case 0x3939f0u: goto label_3939f0;
        case 0x3939f4u: goto label_3939f4;
        case 0x3939f8u: goto label_3939f8;
        case 0x3939fcu: goto label_3939fc;
        case 0x393a00u: goto label_393a00;
        case 0x393a04u: goto label_393a04;
        case 0x393a08u: goto label_393a08;
        case 0x393a0cu: goto label_393a0c;
        case 0x393a10u: goto label_393a10;
        case 0x393a14u: goto label_393a14;
        case 0x393a18u: goto label_393a18;
        case 0x393a1cu: goto label_393a1c;
        case 0x393a20u: goto label_393a20;
        case 0x393a24u: goto label_393a24;
        case 0x393a28u: goto label_393a28;
        case 0x393a2cu: goto label_393a2c;
        case 0x393a30u: goto label_393a30;
        case 0x393a34u: goto label_393a34;
        case 0x393a38u: goto label_393a38;
        case 0x393a3cu: goto label_393a3c;
        case 0x393a40u: goto label_393a40;
        case 0x393a44u: goto label_393a44;
        case 0x393a48u: goto label_393a48;
        case 0x393a4cu: goto label_393a4c;
        case 0x393a50u: goto label_393a50;
        case 0x393a54u: goto label_393a54;
        case 0x393a58u: goto label_393a58;
        case 0x393a5cu: goto label_393a5c;
        case 0x393a60u: goto label_393a60;
        case 0x393a64u: goto label_393a64;
        case 0x393a68u: goto label_393a68;
        case 0x393a6cu: goto label_393a6c;
        case 0x393a70u: goto label_393a70;
        case 0x393a74u: goto label_393a74;
        case 0x393a78u: goto label_393a78;
        case 0x393a7cu: goto label_393a7c;
        case 0x393a80u: goto label_393a80;
        case 0x393a84u: goto label_393a84;
        case 0x393a88u: goto label_393a88;
        case 0x393a8cu: goto label_393a8c;
        case 0x393a90u: goto label_393a90;
        case 0x393a94u: goto label_393a94;
        case 0x393a98u: goto label_393a98;
        case 0x393a9cu: goto label_393a9c;
        case 0x393aa0u: goto label_393aa0;
        case 0x393aa4u: goto label_393aa4;
        case 0x393aa8u: goto label_393aa8;
        case 0x393aacu: goto label_393aac;
        case 0x393ab0u: goto label_393ab0;
        case 0x393ab4u: goto label_393ab4;
        case 0x393ab8u: goto label_393ab8;
        case 0x393abcu: goto label_393abc;
        case 0x393ac0u: goto label_393ac0;
        case 0x393ac4u: goto label_393ac4;
        case 0x393ac8u: goto label_393ac8;
        case 0x393accu: goto label_393acc;
        case 0x393ad0u: goto label_393ad0;
        case 0x393ad4u: goto label_393ad4;
        case 0x393ad8u: goto label_393ad8;
        case 0x393adcu: goto label_393adc;
        case 0x393ae0u: goto label_393ae0;
        case 0x393ae4u: goto label_393ae4;
        case 0x393ae8u: goto label_393ae8;
        case 0x393aecu: goto label_393aec;
        case 0x393af0u: goto label_393af0;
        case 0x393af4u: goto label_393af4;
        case 0x393af8u: goto label_393af8;
        case 0x393afcu: goto label_393afc;
        case 0x393b00u: goto label_393b00;
        case 0x393b04u: goto label_393b04;
        case 0x393b08u: goto label_393b08;
        case 0x393b0cu: goto label_393b0c;
        case 0x393b10u: goto label_393b10;
        case 0x393b14u: goto label_393b14;
        case 0x393b18u: goto label_393b18;
        case 0x393b1cu: goto label_393b1c;
        case 0x393b20u: goto label_393b20;
        case 0x393b24u: goto label_393b24;
        case 0x393b28u: goto label_393b28;
        case 0x393b2cu: goto label_393b2c;
        case 0x393b30u: goto label_393b30;
        case 0x393b34u: goto label_393b34;
        case 0x393b38u: goto label_393b38;
        case 0x393b3cu: goto label_393b3c;
        case 0x393b40u: goto label_393b40;
        case 0x393b44u: goto label_393b44;
        case 0x393b48u: goto label_393b48;
        case 0x393b4cu: goto label_393b4c;
        case 0x393b50u: goto label_393b50;
        case 0x393b54u: goto label_393b54;
        case 0x393b58u: goto label_393b58;
        case 0x393b5cu: goto label_393b5c;
        case 0x393b60u: goto label_393b60;
        case 0x393b64u: goto label_393b64;
        case 0x393b68u: goto label_393b68;
        case 0x393b6cu: goto label_393b6c;
        case 0x393b70u: goto label_393b70;
        case 0x393b74u: goto label_393b74;
        case 0x393b78u: goto label_393b78;
        case 0x393b7cu: goto label_393b7c;
        case 0x393b80u: goto label_393b80;
        case 0x393b84u: goto label_393b84;
        case 0x393b88u: goto label_393b88;
        case 0x393b8cu: goto label_393b8c;
        case 0x393b90u: goto label_393b90;
        case 0x393b94u: goto label_393b94;
        case 0x393b98u: goto label_393b98;
        case 0x393b9cu: goto label_393b9c;
        case 0x393ba0u: goto label_393ba0;
        case 0x393ba4u: goto label_393ba4;
        case 0x393ba8u: goto label_393ba8;
        case 0x393bacu: goto label_393bac;
        case 0x393bb0u: goto label_393bb0;
        case 0x393bb4u: goto label_393bb4;
        case 0x393bb8u: goto label_393bb8;
        case 0x393bbcu: goto label_393bbc;
        case 0x393bc0u: goto label_393bc0;
        case 0x393bc4u: goto label_393bc4;
        case 0x393bc8u: goto label_393bc8;
        case 0x393bccu: goto label_393bcc;
        case 0x393bd0u: goto label_393bd0;
        case 0x393bd4u: goto label_393bd4;
        case 0x393bd8u: goto label_393bd8;
        case 0x393bdcu: goto label_393bdc;
        case 0x393be0u: goto label_393be0;
        case 0x393be4u: goto label_393be4;
        case 0x393be8u: goto label_393be8;
        case 0x393becu: goto label_393bec;
        case 0x393bf0u: goto label_393bf0;
        case 0x393bf4u: goto label_393bf4;
        case 0x393bf8u: goto label_393bf8;
        case 0x393bfcu: goto label_393bfc;
        case 0x393c00u: goto label_393c00;
        case 0x393c04u: goto label_393c04;
        case 0x393c08u: goto label_393c08;
        case 0x393c0cu: goto label_393c0c;
        case 0x393c10u: goto label_393c10;
        case 0x393c14u: goto label_393c14;
        case 0x393c18u: goto label_393c18;
        case 0x393c1cu: goto label_393c1c;
        case 0x393c20u: goto label_393c20;
        case 0x393c24u: goto label_393c24;
        case 0x393c28u: goto label_393c28;
        case 0x393c2cu: goto label_393c2c;
        case 0x393c30u: goto label_393c30;
        case 0x393c34u: goto label_393c34;
        case 0x393c38u: goto label_393c38;
        case 0x393c3cu: goto label_393c3c;
        case 0x393c40u: goto label_393c40;
        case 0x393c44u: goto label_393c44;
        case 0x393c48u: goto label_393c48;
        case 0x393c4cu: goto label_393c4c;
        case 0x393c50u: goto label_393c50;
        case 0x393c54u: goto label_393c54;
        case 0x393c58u: goto label_393c58;
        case 0x393c5cu: goto label_393c5c;
        case 0x393c60u: goto label_393c60;
        case 0x393c64u: goto label_393c64;
        case 0x393c68u: goto label_393c68;
        case 0x393c6cu: goto label_393c6c;
        case 0x393c70u: goto label_393c70;
        case 0x393c74u: goto label_393c74;
        case 0x393c78u: goto label_393c78;
        case 0x393c7cu: goto label_393c7c;
        case 0x393c80u: goto label_393c80;
        case 0x393c84u: goto label_393c84;
        case 0x393c88u: goto label_393c88;
        case 0x393c8cu: goto label_393c8c;
        case 0x393c90u: goto label_393c90;
        case 0x393c94u: goto label_393c94;
        case 0x393c98u: goto label_393c98;
        case 0x393c9cu: goto label_393c9c;
        case 0x393ca0u: goto label_393ca0;
        case 0x393ca4u: goto label_393ca4;
        case 0x393ca8u: goto label_393ca8;
        case 0x393cacu: goto label_393cac;
        case 0x393cb0u: goto label_393cb0;
        case 0x393cb4u: goto label_393cb4;
        case 0x393cb8u: goto label_393cb8;
        case 0x393cbcu: goto label_393cbc;
        case 0x393cc0u: goto label_393cc0;
        case 0x393cc4u: goto label_393cc4;
        case 0x393cc8u: goto label_393cc8;
        case 0x393cccu: goto label_393ccc;
        case 0x393cd0u: goto label_393cd0;
        case 0x393cd4u: goto label_393cd4;
        case 0x393cd8u: goto label_393cd8;
        case 0x393cdcu: goto label_393cdc;
        case 0x393ce0u: goto label_393ce0;
        case 0x393ce4u: goto label_393ce4;
        case 0x393ce8u: goto label_393ce8;
        case 0x393cecu: goto label_393cec;
        case 0x393cf0u: goto label_393cf0;
        case 0x393cf4u: goto label_393cf4;
        case 0x393cf8u: goto label_393cf8;
        case 0x393cfcu: goto label_393cfc;
        case 0x393d00u: goto label_393d00;
        case 0x393d04u: goto label_393d04;
        case 0x393d08u: goto label_393d08;
        case 0x393d0cu: goto label_393d0c;
        case 0x393d10u: goto label_393d10;
        case 0x393d14u: goto label_393d14;
        case 0x393d18u: goto label_393d18;
        case 0x393d1cu: goto label_393d1c;
        case 0x393d20u: goto label_393d20;
        case 0x393d24u: goto label_393d24;
        case 0x393d28u: goto label_393d28;
        case 0x393d2cu: goto label_393d2c;
        case 0x393d30u: goto label_393d30;
        case 0x393d34u: goto label_393d34;
        case 0x393d38u: goto label_393d38;
        case 0x393d3cu: goto label_393d3c;
        case 0x393d40u: goto label_393d40;
        case 0x393d44u: goto label_393d44;
        case 0x393d48u: goto label_393d48;
        case 0x393d4cu: goto label_393d4c;
        case 0x393d50u: goto label_393d50;
        case 0x393d54u: goto label_393d54;
        case 0x393d58u: goto label_393d58;
        case 0x393d5cu: goto label_393d5c;
        case 0x393d60u: goto label_393d60;
        case 0x393d64u: goto label_393d64;
        case 0x393d68u: goto label_393d68;
        case 0x393d6cu: goto label_393d6c;
        case 0x393d70u: goto label_393d70;
        case 0x393d74u: goto label_393d74;
        case 0x393d78u: goto label_393d78;
        case 0x393d7cu: goto label_393d7c;
        case 0x393d80u: goto label_393d80;
        case 0x393d84u: goto label_393d84;
        case 0x393d88u: goto label_393d88;
        case 0x393d8cu: goto label_393d8c;
        case 0x393d90u: goto label_393d90;
        case 0x393d94u: goto label_393d94;
        case 0x393d98u: goto label_393d98;
        case 0x393d9cu: goto label_393d9c;
        case 0x393da0u: goto label_393da0;
        case 0x393da4u: goto label_393da4;
        case 0x393da8u: goto label_393da8;
        case 0x393dacu: goto label_393dac;
        case 0x393db0u: goto label_393db0;
        case 0x393db4u: goto label_393db4;
        case 0x393db8u: goto label_393db8;
        case 0x393dbcu: goto label_393dbc;
        case 0x393dc0u: goto label_393dc0;
        case 0x393dc4u: goto label_393dc4;
        case 0x393dc8u: goto label_393dc8;
        case 0x393dccu: goto label_393dcc;
        case 0x393dd0u: goto label_393dd0;
        case 0x393dd4u: goto label_393dd4;
        case 0x393dd8u: goto label_393dd8;
        case 0x393ddcu: goto label_393ddc;
        case 0x393de0u: goto label_393de0;
        case 0x393de4u: goto label_393de4;
        case 0x393de8u: goto label_393de8;
        case 0x393decu: goto label_393dec;
        case 0x393df0u: goto label_393df0;
        case 0x393df4u: goto label_393df4;
        case 0x393df8u: goto label_393df8;
        case 0x393dfcu: goto label_393dfc;
        case 0x393e00u: goto label_393e00;
        case 0x393e04u: goto label_393e04;
        case 0x393e08u: goto label_393e08;
        case 0x393e0cu: goto label_393e0c;
        case 0x393e10u: goto label_393e10;
        case 0x393e14u: goto label_393e14;
        case 0x393e18u: goto label_393e18;
        case 0x393e1cu: goto label_393e1c;
        default: break;
    }

    ctx->pc = 0x3939a8u;

label_3939a8:
    // 0x3939a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3939a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3939ac:
    // 0x3939ac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3939acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3939b0:
    // 0x3939b0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3939b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3939b4:
    // 0x3939b4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3939b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3939b8:
    // 0x3939b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3939b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3939bc:
    // 0x3939bc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3939bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3939c0:
    // 0x3939c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3939c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3939c4:
    // 0x3939c4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3939c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3939c8:
    // 0x3939c8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3939c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3939cc:
    // 0x3939cc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3939ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3939d0:
    // 0x3939d0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3939d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3939d4:
    // 0x3939d4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3939d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3939d8:
    // 0x3939d8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3939d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3939dc:
    // 0x3939dc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3939dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3939e0:
    // 0x3939e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3939e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3939e4:
    // 0x3939e4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x3939e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3939e8:
    // 0x3939e8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3939e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3939ec:
    // 0x3939ec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3939ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3939f0:
    // 0x3939f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3939f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3939f4:
    // 0x3939f4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3939f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3939f8:
    // 0x3939f8: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x3939f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_3939fc:
    // 0x3939fc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_393a00:
    if (ctx->pc == 0x393A00u) {
        ctx->pc = 0x393A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939FCu;
        // 0x393a00: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A04u;
        goto label_393a04;
    }
    ctx->pc = 0x3939FCu;
    {
        const bool branch_taken_0x3939fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939FCu;
        // 0x393a00: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3939fc) {
            ctx->pc = 0x393A24u;
            goto label_393a24;
        }
    }
    ctx->pc = 0x393A04u;
label_393a04:
    // 0x393a04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x393a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_393a08:
    // 0x393a08: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x393a08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_393a0c:
    // 0x393a0c: 0x84440168  lh          $a0, 0x168($v0)
    ctx->pc = 0x393a0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 360)));
label_393a10:
    // 0x393a10: 0x8c43016c  lw          $v1, 0x16C($v0)
    ctx->pc = 0x393a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
label_393a14:
    // 0x393a14: 0x60f809  jalr        $v1
label_393a18:
    if (ctx->pc == 0x393A18u) {
        ctx->pc = 0x393A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A14u;
        // 0x393a18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A1Cu;
        goto label_393a1c;
    }
    ctx->pc = 0x393A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x393A1Cu);
        ctx->pc = 0x393A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A14u;
        // 0x393a18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393A14u, 0x393A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393A1Cu;
label_393a1c:
    // 0x393a1c: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x393a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_393a20:
    // 0x393a20: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x393a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_393a24:
    // 0x393a24: 0x9203013c  lbu         $v1, 0x13C($s0)
    ctx->pc = 0x393a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 316)));
label_393a28:
    // 0x393a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x393a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_393a2c:
    // 0x393a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_393a30:
    // 0x393a30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x393a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_393a34:
    // 0x393a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x393a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_393a38:
    // 0x393a38: 0x0  nop
    ctx->pc = 0x393a38u;
    // NOP
label_393a3c:
    // 0x393a3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x393a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_393a40:
    // 0x393a40: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x393a40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_393a44:
    // 0x393a44: 0x16c00012  bnez        $s6, . + 4 + (0x12 << 2)
label_393a48:
    if (ctx->pc == 0x393A48u) {
        ctx->pc = 0x393A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A44u;
        // 0x393a48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A4Cu;
        goto label_393a4c;
    }
    ctx->pc = 0x393A44u;
    {
        const bool branch_taken_0x393a44 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x393A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A44u;
        // 0x393a48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a44) {
            ctx->pc = 0x393A90u;
            goto label_393a90;
        }
    }
    ctx->pc = 0x393A4Cu;
label_393a4c:
    // 0x393a4c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x393a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_393a50:
    // 0x393a50: 0x504000e5  beql        $v0, $zero, . + 4 + (0xE5 << 2)
label_393a54:
    if (ctx->pc == 0x393A54u) {
        ctx->pc = 0x393A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A50u;
        // 0x393a54: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A58u;
        goto label_393a58;
    }
    ctx->pc = 0x393A50u;
    {
        const bool branch_taken_0x393a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393a50) {
            ctx->pc = 0x393A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393A50u;
            // 0x393a54: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393DE8u;
            goto label_393de8;
        }
    }
    ctx->pc = 0x393A58u;
label_393a58:
    // 0x393a58: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x393a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_393a5c:
    // 0x393a5c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x393a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_393a60:
    // 0x393a60: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x393a60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_393a64:
    // 0x393a64: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x393a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_393a68:
    // 0x393a68: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x393a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_393a6c:
    // 0x393a6c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x393a6cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_393a70:
    // 0x393a70: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x393a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_393a74:
    // 0x393a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x393a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_393a78:
    // 0x393a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x393a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_393a7c:
    // 0x393a7c: 0x0  nop
    ctx->pc = 0x393a7cu;
    // NOP
label_393a80:
    // 0x393a80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x393a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_393a84:
    // 0x393a84: 0x0  nop
    ctx->pc = 0x393a84u;
    // NOP
label_393a88:
    // 0x393a88: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
label_393a8c:
    if (ctx->pc == 0x393A8Cu) {
        ctx->pc = 0x393A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A88u;
        // 0x393a8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A90u;
        goto label_393a90;
    }
    ctx->pc = 0x393A88u;
    {
        const bool branch_taken_0x393a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x393A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A88u;
        // 0x393a8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a88) {
            ctx->pc = 0x393DE4u;
            goto label_393de4;
        }
    }
    ctx->pc = 0x393A90u;
label_393a90:
    // 0x393a90: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x393a90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_393a94:
    // 0x393a94: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x393a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_393a98:
    // 0x393a98: 0xc0e44cc  jal         func_391330
label_393a9c:
    if (ctx->pc == 0x393A9Cu) {
        ctx->pc = 0x393A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A98u;
        // 0x393a9c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393AA0u;
        goto label_393aa0;
    }
    ctx->pc = 0x393A98u;
    SET_GPR_U32(ctx, 31, 0x393AA0u);
    ctx->pc = 0x393A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393A98u;
    // 0x393a9c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393A98u, 0x393AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393AA0u;
label_393aa0:
    // 0x393aa0: 0x90520064  lbu         $s2, 0x64($v0)
    ctx->pc = 0x393aa0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_393aa4:
    // 0x393aa4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x393aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_393aa8:
    // 0x393aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_393aac:
    if (ctx->pc == 0x393AACu) {
        ctx->pc = 0x393AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AA8u;
        // 0x393aac: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393AB0u;
        goto label_393ab0;
    }
    ctx->pc = 0x393AA8u;
    {
        const bool branch_taken_0x393aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AA8u;
        // 0x393aac: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393aa8) {
            ctx->pc = 0x393AB8u;
            goto label_393ab8;
        }
    }
    ctx->pc = 0x393AB0u;
label_393ab0:
    // 0x393ab0: 0x52c000c0  beql        $s6, $zero, . + 4 + (0xC0 << 2)
label_393ab4:
    if (ctx->pc == 0x393AB4u) {
        ctx->pc = 0x393AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AB0u;
        // 0x393ab4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393AB8u;
        goto label_393ab8;
    }
    ctx->pc = 0x393AB0u;
    {
        const bool branch_taken_0x393ab0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x393ab0) {
            ctx->pc = 0x393AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393AB0u;
            // 0x393ab4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393DB4u;
            goto label_393db4;
        }
    }
    ctx->pc = 0x393AB8u;
label_393ab8:
    // 0x393ab8: 0x9204010d  lbu         $a0, 0x10D($s0)
    ctx->pc = 0x393ab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_393abc:
    // 0x393abc: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x393abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_393ac0:
    // 0x393ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393ac4:
    // 0x393ac4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_393ac8:
    if (ctx->pc == 0x393AC8u) {
        ctx->pc = 0x393AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AC4u;
        // 0x393ac8: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393ACCu;
        goto label_393acc;
    }
    ctx->pc = 0x393AC4u;
    {
        const bool branch_taken_0x393ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AC4u;
        // 0x393ac8: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ac4) {
            ctx->pc = 0x393AD8u;
            goto label_393ad8;
        }
    }
    ctx->pc = 0x393ACCu;
label_393acc:
    // 0x393acc: 0x9202010e  lbu         $v0, 0x10E($s0)
    ctx->pc = 0x393accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 270)));
label_393ad0:
    // 0x393ad0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_393ad4:
    if (ctx->pc == 0x393AD4u) {
        ctx->pc = 0x393AD8u;
        goto label_393ad8;
    }
    ctx->pc = 0x393AD0u;
    {
        const bool branch_taken_0x393ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393ad0) {
            ctx->pc = 0x393ADCu;
            goto label_393adc;
        }
    }
    ctx->pc = 0x393AD8u;
label_393ad8:
    // 0x393ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x393ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393adc:
    // 0x393adc: 0x10a00041  beqz        $a1, . + 4 + (0x41 << 2)
label_393ae0:
    if (ctx->pc == 0x393AE0u) {
        ctx->pc = 0x393AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ADCu;
        // 0x393ae0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393AE4u;
        goto label_393ae4;
    }
    ctx->pc = 0x393ADCu;
    {
        const bool branch_taken_0x393adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ADCu;
        // 0x393ae0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393adc) {
            ctx->pc = 0x393BE4u;
            goto label_393be4;
        }
    }
    ctx->pc = 0x393AE4u;
label_393ae4:
    // 0x393ae4: 0xc104c06  jal         func_413018
label_393ae8:
    if (ctx->pc == 0x393AE8u) {
        ctx->pc = 0x393AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AE4u;
        // 0x393ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393AECu;
        goto label_393aec;
    }
    ctx->pc = 0x393AE4u;
    SET_GPR_U32(ctx, 31, 0x393AECu);
    ctx->pc = 0x393AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393AE4u;
    // 0x393ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x393AE4u, 0x393AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393AECu;
label_393aec:
    // 0x393aec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x393aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_393af0:
    // 0x393af0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x393af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_393af4:
    // 0x393af4: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x393af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_393af8:
    // 0x393af8: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
label_393afc:
    if (ctx->pc == 0x393AFCu) {
        ctx->pc = 0x393AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AF8u;
        // 0x393afc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393B00u;
        goto label_393b00;
    }
    ctx->pc = 0x393AF8u;
    {
        const bool branch_taken_0x393af8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x393AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AF8u;
        // 0x393afc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393af8) {
            ctx->pc = 0x393B64u;
            goto label_393b64;
        }
    }
    ctx->pc = 0x393B00u;
label_393b00:
    // 0x393b00: 0xc0e87c0  jal         func_3A1F00
label_393b04:
    if (ctx->pc == 0x393B04u) {
        ctx->pc = 0x393B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B00u;
        // 0x393b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393B08u;
        goto label_393b08;
    }
    ctx->pc = 0x393B00u;
    SET_GPR_U32(ctx, 31, 0x393B08u);
    ctx->pc = 0x393B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393B00u;
    // 0x393b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x393B00u, 0x393B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393B08u;
label_393b08:
    // 0x393b08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x393b08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_393b0c:
    // 0x393b0c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x393b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_393b10:
    // 0x393b10: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x393b10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393b14:
    // 0x393b14: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x393b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393b18:
    // 0x393b18: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x393b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393b1c:
    // 0x393b1c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x393b1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_393b20:
    // 0x393b20: 0x4a0003bf  vwaitq
    ctx->pc = 0x393b20u;
    // VWAITQ (Q already resolved in this runtime)
label_393b24:
    // 0x393b24: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x393b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_393b28:
    // 0x393b28: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x393b28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_393b2c:
    // 0x393b2c: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x393b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
label_393b30:
    // 0x393b30: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x393b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_393b34:
    // 0x393b34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x393b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_393b38:
    // 0x393b38: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x393b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_393b3c:
    // 0x393b3c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x393b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_393b40:
    // 0x393b40: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x393b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393b44:
    // 0x393b44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x393b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_393b48:
    // 0x393b48: 0x0  nop
    ctx->pc = 0x393b48u;
    // NOP
label_393b4c:
    // 0x393b4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_393b50:
    if (ctx->pc == 0x393B50u) {
        ctx->pc = 0x393B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B4Cu;
        // 0x393b50: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393B54u;
        goto label_393b54;
    }
    ctx->pc = 0x393B4Cu;
    {
        const bool branch_taken_0x393b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x393B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B4Cu;
        // 0x393b50: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393b4c) {
            ctx->pc = 0x393B60u;
            goto label_393b60;
        }
    }
    ctx->pc = 0x393B54u;
label_393b54:
    // 0x393b54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x393b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_393b58:
    // 0x393b58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x393b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_393b5c:
    // 0x393b5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x393b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_393b60:
    // 0x393b60: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x393b60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_393b64:
    // 0x393b64: 0x26930090  addiu       $s3, $s4, 0x90
    ctx->pc = 0x393b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_393b68:
    // 0x393b68: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x393b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_393b6c:
    // 0x393b6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x393b6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_393b70:
    // 0x393b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393b74:
    // 0x393b74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x393b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393b78:
    // 0x393b78: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x393b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393b7c:
    // 0x393b7c: 0xc04420c  jal         func_110830
label_393b80:
    if (ctx->pc == 0x393B80u) {
        ctx->pc = 0x393B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B7Cu;
        // 0x393b80: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393B84u;
        goto label_393b84;
    }
    ctx->pc = 0x393B7Cu;
    SET_GPR_U32(ctx, 31, 0x393B84u);
    ctx->pc = 0x393B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393B7Cu;
    // 0x393b80: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393B7Cu, 0x393B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393B84u;
label_393b84:
    // 0x393b84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x393b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_393b88:
    // 0x393b88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393b8c:
    // 0x393b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393b90:
    // 0x393b90: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x393b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_393b94:
    // 0x393b94: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x393b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393b98:
    // 0x393b98: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x393b98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_393b9c:
    // 0x393b9c: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x393b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_393ba0:
    // 0x393ba0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x393ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_393ba4:
    // 0x393ba4: 0xc04420c  jal         func_110830
label_393ba8:
    if (ctx->pc == 0x393BA8u) {
        ctx->pc = 0x393BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BA4u;
        // 0x393ba8: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393BACu;
        goto label_393bac;
    }
    ctx->pc = 0x393BA4u;
    SET_GPR_U32(ctx, 31, 0x393BACu);
    ctx->pc = 0x393BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393BA4u;
    // 0x393ba8: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393BA4u, 0x393BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393BACu;
label_393bac:
    // 0x393bac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x393bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_393bb0:
    // 0x393bb0: 0xc043d5e  jal         func_10F578
label_393bb4:
    if (ctx->pc == 0x393BB4u) {
        ctx->pc = 0x393BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BB0u;
        // 0x393bb4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393BB8u;
        goto label_393bb8;
    }
    ctx->pc = 0x393BB0u;
    SET_GPR_U32(ctx, 31, 0x393BB8u);
    ctx->pc = 0x393BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393BB0u;
    // 0x393bb4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x393BB0u, 0x393BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393BB8u;
label_393bb8:
    // 0x393bb8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_393bbc:
    if (ctx->pc == 0x393BBCu) {
        ctx->pc = 0x393BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BB8u;
        // 0x393bbc: 0x27b10034  addiu       $s1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393BC0u;
        goto label_393bc0;
    }
    ctx->pc = 0x393BB8u;
    {
        const bool branch_taken_0x393bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BB8u;
        // 0x393bbc: 0x27b10034  addiu       $s1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bb8) {
            ctx->pc = 0x393C3Cu;
            goto label_393c3c;
        }
    }
    ctx->pc = 0x393BC0u;
label_393bc0:
    // 0x393bc0: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x393bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_393bc4:
    // 0x393bc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393bc8:
    // 0x393bc8: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x393bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_393bcc:
    // 0x393bcc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x393bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393bd0:
    // 0x393bd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393bd4:
    // 0x393bd4: 0xc04420c  jal         func_110830
label_393bd8:
    if (ctx->pc == 0x393BD8u) {
        ctx->pc = 0x393BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BD4u;
        // 0x393bd8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393BDCu;
        goto label_393bdc;
    }
    ctx->pc = 0x393BD4u;
    SET_GPR_U32(ctx, 31, 0x393BDCu);
    ctx->pc = 0x393BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393BD4u;
    // 0x393bd8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393BD4u, 0x393BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393BDCu;
label_393bdc:
    // 0x393bdc: 0x10000017  b           . + 4 + (0x17 << 2)
label_393be0:
    if (ctx->pc == 0x393BE0u) {
        ctx->pc = 0x393BE4u;
        goto label_393be4;
    }
    ctx->pc = 0x393BDCu;
    {
        const bool branch_taken_0x393bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393bdc) {
            ctx->pc = 0x393C3Cu;
            goto label_393c3c;
        }
    }
    ctx->pc = 0x393BE4u;
label_393be4:
    // 0x393be4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x393be4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_393be8:
    // 0x393be8: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x393be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_393bec:
    // 0x393bec: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x393becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_393bf0:
    // 0x393bf0: 0x26930090  addiu       $s3, $s4, 0x90
    ctx->pc = 0x393bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_393bf4:
    // 0x393bf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393bf8:
    // 0x393bf8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x393bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393bfc:
    // 0x393bfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393bfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393c00:
    // 0x393c00: 0xc04420c  jal         func_110830
label_393c04:
    if (ctx->pc == 0x393C04u) {
        ctx->pc = 0x393C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C00u;
        // 0x393c04: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C08u;
        goto label_393c08;
    }
    ctx->pc = 0x393C00u;
    SET_GPR_U32(ctx, 31, 0x393C08u);
    ctx->pc = 0x393C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C00u;
    // 0x393c04: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393C00u, 0x393C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C08u;
label_393c08:
    // 0x393c08: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x393c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_393c0c:
    // 0x393c0c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x393c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_393c10:
    // 0x393c10: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x393c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_393c14:
    // 0x393c14: 0xc043d5e  jal         func_10F578
label_393c18:
    if (ctx->pc == 0x393C18u) {
        ctx->pc = 0x393C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C14u;
        // 0x393c18: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C1Cu;
        goto label_393c1c;
    }
    ctx->pc = 0x393C14u;
    SET_GPR_U32(ctx, 31, 0x393C1Cu);
    ctx->pc = 0x393C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C14u;
    // 0x393c18: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x393C14u, 0x393C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C1Cu;
label_393c1c:
    // 0x393c1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_393c20:
    if (ctx->pc == 0x393C20u) {
        ctx->pc = 0x393C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C1Cu;
        // 0x393c20: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C24u;
        goto label_393c24;
    }
    ctx->pc = 0x393C1Cu;
    {
        const bool branch_taken_0x393c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C1Cu;
        // 0x393c20: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c1c) {
            ctx->pc = 0x393C3Cu;
            goto label_393c3c;
        }
    }
    ctx->pc = 0x393C24u;
label_393c24:
    // 0x393c24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393c28:
    // 0x393c28: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x393c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_393c2c:
    // 0x393c2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x393c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393c30:
    // 0x393c30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393c34:
    // 0x393c34: 0xc04420c  jal         func_110830
label_393c38:
    if (ctx->pc == 0x393C38u) {
        ctx->pc = 0x393C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C34u;
        // 0x393c38: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C3Cu;
        goto label_393c3c;
    }
    ctx->pc = 0x393C34u;
    SET_GPR_U32(ctx, 31, 0x393C3Cu);
    ctx->pc = 0x393C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C34u;
    // 0x393c38: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393C34u, 0x393C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C3Cu;
label_393c3c:
    // 0x393c3c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x393c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_393c40:
    // 0x393c40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x393c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_393c44:
    // 0x393c44: 0xc043d5e  jal         func_10F578
label_393c48:
    if (ctx->pc == 0x393C48u) {
        ctx->pc = 0x393C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C44u;
        // 0x393c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C4Cu;
        goto label_393c4c;
    }
    ctx->pc = 0x393C44u;
    SET_GPR_U32(ctx, 31, 0x393C4Cu);
    ctx->pc = 0x393C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C44u;
    // 0x393c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x393C44u, 0x393C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C4Cu;
label_393c4c:
    // 0x393c4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_393c50:
    if (ctx->pc == 0x393C50u) {
        ctx->pc = 0x393C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C4Cu;
        // 0x393c50: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C54u;
        goto label_393c54;
    }
    ctx->pc = 0x393C4Cu;
    {
        const bool branch_taken_0x393c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C4Cu;
        // 0x393c50: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c4c) {
            ctx->pc = 0x393C6Cu;
            goto label_393c6c;
        }
    }
    ctx->pc = 0x393C54u;
label_393c54:
    // 0x393c54: 0xc043d5e  jal         func_10F578
label_393c58:
    if (ctx->pc == 0x393C58u) {
        ctx->pc = 0x393C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C54u;
        // 0x393c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C5Cu;
        goto label_393c5c;
    }
    ctx->pc = 0x393C54u;
    SET_GPR_U32(ctx, 31, 0x393C5Cu);
    ctx->pc = 0x393C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C54u;
    // 0x393c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x393C54u, 0x393C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C5Cu;
label_393c5c:
    // 0x393c5c: 0xc043c7a  jal         func_10F1E8
label_393c60:
    if (ctx->pc == 0x393C60u) {
        ctx->pc = 0x393C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C5Cu;
        // 0x393c60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C64u;
        goto label_393c64;
    }
    ctx->pc = 0x393C5Cu;
    SET_GPR_U32(ctx, 31, 0x393C64u);
    ctx->pc = 0x393C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C5Cu;
    // 0x393c60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x393C5Cu, 0x393C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C64u;
label_393c64:
    // 0x393c64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x393c64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_393c68:
    // 0x393c68: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x393c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_393c6c:
    // 0x393c6c: 0xc0e44cc  jal         func_391330
label_393c70:
    if (ctx->pc == 0x393C70u) {
        ctx->pc = 0x393C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C6Cu;
        // 0x393c70: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C74u;
        goto label_393c74;
    }
    ctx->pc = 0x393C6Cu;
    SET_GPR_U32(ctx, 31, 0x393C74u);
    ctx->pc = 0x393C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C6Cu;
    // 0x393c70: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393C6Cu, 0x393C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C74u;
label_393c74:
    // 0x393c74: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_393c78:
    if (ctx->pc == 0x393C78u) {
        ctx->pc = 0x393C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C74u;
        // 0x393c78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C7Cu;
        goto label_393c7c;
    }
    ctx->pc = 0x393C74u;
    {
        const bool branch_taken_0x393c74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C74u;
        // 0x393c78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c74) {
            ctx->pc = 0x393CB8u;
            goto label_393cb8;
        }
    }
    ctx->pc = 0x393C7Cu;
label_393c7c:
    // 0x393c7c: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x393c7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
label_393c80:
    // 0x393c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393c84:
    // 0x393c84: 0x7a830090  lq          $v1, 0x90($s4)
    ctx->pc = 0x393c84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 144)));
label_393c88:
    // 0x393c88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x393c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_393c8c:
    // 0x393c8c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x393c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_393c90:
    // 0x393c90: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x393c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_393c94:
    // 0x393c94: 0xc0e5204  jal         func_394810
label_393c98:
    if (ctx->pc == 0x393C98u) {
        ctx->pc = 0x393C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C94u;
        // 0x393c98: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C9Cu;
        goto label_393c9c;
    }
    ctx->pc = 0x393C94u;
    SET_GPR_U32(ctx, 31, 0x393C9Cu);
    ctx->pc = 0x393C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393C94u;
    // 0x393c98: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394810u, 0x393C94u, 0x393C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393C9Cu;
label_393c9c:
    // 0x393c9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393ca0:
    // 0x393ca0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x393ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_393ca4:
    // 0x393ca4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x393ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_393ca8:
    // 0x393ca8: 0xc0a4daa  jal         func_2936A8
label_393cac:
    if (ctx->pc == 0x393CACu) {
        ctx->pc = 0x393CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CA8u;
        // 0x393cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CB0u;
        goto label_393cb0;
    }
    ctx->pc = 0x393CA8u;
    SET_GPR_U32(ctx, 31, 0x393CB0u);
    ctx->pc = 0x393CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393CA8u;
    // 0x393cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x393CA8u, 0x393CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393CB0u;
label_393cb0:
    // 0x393cb0: 0x10000035  b           . + 4 + (0x35 << 2)
label_393cb4:
    if (ctx->pc == 0x393CB4u) {
        ctx->pc = 0x393CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CB0u;
        // 0x393cb4: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CB8u;
        goto label_393cb8;
    }
    ctx->pc = 0x393CB0u;
    {
        const bool branch_taken_0x393cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CB0u;
        // 0x393cb4: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393cb0) {
            ctx->pc = 0x393D88u;
            goto label_393d88;
        }
    }
    ctx->pc = 0x393CB8u;
label_393cb8:
    // 0x393cb8: 0x92020116  lbu         $v0, 0x116($s0)
    ctx->pc = 0x393cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
label_393cbc:
    // 0x393cbc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_393cc0:
    if (ctx->pc == 0x393CC0u) {
        ctx->pc = 0x393CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CBCu;
        // 0x393cc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CC4u;
        goto label_393cc4;
    }
    ctx->pc = 0x393CBCu;
    {
        const bool branch_taken_0x393cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CBCu;
        // 0x393cc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393cbc) {
            ctx->pc = 0x393D84u;
            goto label_393d84;
        }
    }
    ctx->pc = 0x393CC4u;
label_393cc4:
    // 0x393cc4: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x393cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
label_393cc8:
    // 0x393cc8: 0x7a830090  lq          $v1, 0x90($s4)
    ctx->pc = 0x393cc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 144)));
label_393ccc:
    // 0x393ccc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x393cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_393cd0:
    // 0x393cd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x393cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_393cd4:
    // 0x393cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393cd8:
    // 0x393cd8: 0xc0e5204  jal         func_394810
label_393cdc:
    if (ctx->pc == 0x393CDCu) {
        ctx->pc = 0x393CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CD8u;
        // 0x393cdc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CE0u;
        goto label_393ce0;
    }
    ctx->pc = 0x393CD8u;
    SET_GPR_U32(ctx, 31, 0x393CE0u);
    ctx->pc = 0x393CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393CD8u;
    // 0x393cdc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394810u, 0x393CD8u, 0x393CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393CE0u;
label_393ce0:
    // 0x393ce0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393ce4:
    // 0x393ce4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x393ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_393ce8:
    // 0x393ce8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x393ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393cec:
    // 0x393cec: 0xc0a4daa  jal         func_2936A8
label_393cf0:
    if (ctx->pc == 0x393CF0u) {
        ctx->pc = 0x393CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CECu;
        // 0x393cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CF4u;
        goto label_393cf4;
    }
    ctx->pc = 0x393CECu;
    SET_GPR_U32(ctx, 31, 0x393CF4u);
    ctx->pc = 0x393CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393CECu;
    // 0x393cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x393CECu, 0x393CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393CF4u;
label_393cf4:
    // 0x393cf4: 0x82230087  lb          $v1, 0x87($s1)
    ctx->pc = 0x393cf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 135)));
label_393cf8:
    // 0x393cf8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x393cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_393cfc:
    // 0x393cfc: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_393d00:
    if (ctx->pc == 0x393D00u) {
        ctx->pc = 0x393D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CFCu;
        // 0x393d00: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D04u;
        goto label_393d04;
    }
    ctx->pc = 0x393CFCu;
    {
        const bool branch_taken_0x393cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x393cfc) {
            ctx->pc = 0x393D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393CFCu;
            // 0x393d00: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D88u;
            goto label_393d88;
        }
    }
    ctx->pc = 0x393D04u;
label_393d04:
    // 0x393d04: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x393d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_393d08:
    // 0x393d08: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
label_393d0c:
    if (ctx->pc == 0x393D0Cu) {
        ctx->pc = 0x393D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D08u;
        // 0x393d0c: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D10u;
        goto label_393d10;
    }
    ctx->pc = 0x393D08u;
    {
        const bool branch_taken_0x393d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x393d08) {
            ctx->pc = 0x393D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393D08u;
            // 0x393d0c: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D88u;
            goto label_393d88;
        }
    }
    ctx->pc = 0x393D10u;
label_393d10:
    // 0x393d10: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x393d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_393d14:
    // 0x393d14: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x393d14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_393d18:
    // 0x393d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_393d1c:
    if (ctx->pc == 0x393D1Cu) {
        ctx->pc = 0x393D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D18u;
        // 0x393d1c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D20u;
        goto label_393d20;
    }
    ctx->pc = 0x393D18u;
    {
        const bool branch_taken_0x393d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D18u;
        // 0x393d1c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d18) {
            ctx->pc = 0x393D38u;
            goto label_393d38;
        }
    }
    ctx->pc = 0x393D20u;
label_393d20:
    // 0x393d20: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x393d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_393d24:
    // 0x393d24: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x393d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_393d28:
    // 0x393d28: 0xc13b652  jal         func_4ED948
label_393d2c:
    if (ctx->pc == 0x393D2Cu) {
        ctx->pc = 0x393D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D28u;
        // 0x393d2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D30u;
        goto label_393d30;
    }
    ctx->pc = 0x393D28u;
    SET_GPR_U32(ctx, 31, 0x393D30u);
    ctx->pc = 0x393D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D28u;
    // 0x393d2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x393D28u, 0x393D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D30u;
label_393d30:
    // 0x393d30: 0x10000015  b           . + 4 + (0x15 << 2)
label_393d34:
    if (ctx->pc == 0x393D34u) {
        ctx->pc = 0x393D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D30u;
        // 0x393d34: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D38u;
        goto label_393d38;
    }
    ctx->pc = 0x393D30u;
    {
        const bool branch_taken_0x393d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D30u;
        // 0x393d34: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d30) {
            ctx->pc = 0x393D88u;
            goto label_393d88;
        }
    }
    ctx->pc = 0x393D38u;
label_393d38:
    // 0x393d38: 0xc087502  jal         func_21D408
label_393d3c:
    if (ctx->pc == 0x393D3Cu) {
        ctx->pc = 0x393D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D38u;
        // 0x393d3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D40u;
        goto label_393d40;
    }
    ctx->pc = 0x393D38u;
    SET_GPR_U32(ctx, 31, 0x393D40u);
    ctx->pc = 0x393D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D38u;
    // 0x393d3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x393D38u, 0x393D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D40u;
label_393d40:
    // 0x393d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393d44:
    // 0x393d44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x393d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_393d48:
    // 0x393d48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x393d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_393d4c:
    // 0x393d4c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_393d50:
    if (ctx->pc == 0x393D50u) {
        ctx->pc = 0x393D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D4Cu;
        // 0x393d50: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D54u;
        goto label_393d54;
    }
    ctx->pc = 0x393D4Cu;
    {
        const bool branch_taken_0x393d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x393d4c) {
            ctx->pc = 0x393D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393D4Cu;
            // 0x393d50: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D88u;
            goto label_393d88;
        }
    }
    ctx->pc = 0x393D54u;
label_393d54:
    // 0x393d54: 0xc05959e  jal         func_165678
label_393d58:
    if (ctx->pc == 0x393D58u) {
        ctx->pc = 0x393D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D54u;
        // 0x393d58: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D5Cu;
        goto label_393d5c;
    }
    ctx->pc = 0x393D54u;
    SET_GPR_U32(ctx, 31, 0x393D5Cu);
    ctx->pc = 0x393D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D54u;
    // 0x393d58: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x393D54u, 0x393D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D5Cu;
label_393d5c:
    // 0x393d5c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_393d60:
    if (ctx->pc == 0x393D60u) {
        ctx->pc = 0x393D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D5Cu;
        // 0x393d60: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D64u;
        goto label_393d64;
    }
    ctx->pc = 0x393D5Cu;
    {
        const bool branch_taken_0x393d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393d5c) {
            ctx->pc = 0x393D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393D5Cu;
            // 0x393d60: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D88u;
            goto label_393d88;
        }
    }
    ctx->pc = 0x393D64u;
label_393d64:
    // 0x393d64: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x393d64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_393d68:
    // 0x393d68: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x393d68u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_393d6c:
    // 0x393d6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_393d70:
    if (ctx->pc == 0x393D70u) {
        ctx->pc = 0x393D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D6Cu;
        // 0x393d70: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D74u;
        goto label_393d74;
    }
    ctx->pc = 0x393D6Cu;
    {
        const bool branch_taken_0x393d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D6Cu;
        // 0x393d70: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d6c) {
            ctx->pc = 0x393D84u;
            goto label_393d84;
        }
    }
    ctx->pc = 0x393D74u;
label_393d74:
    // 0x393d74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x393d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_393d78:
    // 0x393d78: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x393d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_393d7c:
    // 0x393d7c: 0xc13ce7a  jal         func_4F39E8
label_393d80:
    if (ctx->pc == 0x393D80u) {
        ctx->pc = 0x393D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D7Cu;
        // 0x393d80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D84u;
        goto label_393d84;
    }
    ctx->pc = 0x393D7Cu;
    SET_GPR_U32(ctx, 31, 0x393D84u);
    ctx->pc = 0x393D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D7Cu;
    // 0x393d80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x393D7Cu, 0x393D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D84u;
label_393d84:
    // 0x393d84: 0x82230086  lb          $v1, 0x86($s1)
    ctx->pc = 0x393d84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
label_393d88:
    // 0x393d88: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x393d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_393d8c:
    // 0x393d8c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_393d90:
    if (ctx->pc == 0x393D90u) {
        ctx->pc = 0x393D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D8Cu;
        // 0x393d90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D94u;
        goto label_393d94;
    }
    ctx->pc = 0x393D8Cu;
    {
        const bool branch_taken_0x393d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x393D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D8Cu;
        // 0x393d90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d8c) {
            ctx->pc = 0x393DD0u;
            goto label_393dd0;
        }
    }
    ctx->pc = 0x393D94u;
label_393d94:
    // 0x393d94: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x393d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_393d98:
    // 0x393d98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393d9c:
    // 0x393d9c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x393d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_393da0:
    // 0x393da0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x393da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_393da4:
    // 0x393da4: 0xc106fb2  jal         func_41BEC8
label_393da8:
    if (ctx->pc == 0x393DA8u) {
        ctx->pc = 0x393DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DA4u;
        // 0x393da8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DACu;
        goto label_393dac;
    }
    ctx->pc = 0x393DA4u;
    SET_GPR_U32(ctx, 31, 0x393DACu);
    ctx->pc = 0x393DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393DA4u;
    // 0x393da8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEC8u, 0x393DA4u, 0x393DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DACu;
label_393dac:
    // 0x393dac: 0x10000008  b           . + 4 + (0x8 << 2)
label_393db0:
    if (ctx->pc == 0x393DB0u) {
        ctx->pc = 0x393DB4u;
        goto label_393db4;
    }
    ctx->pc = 0x393DACu;
    {
        const bool branch_taken_0x393dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393dac) {
            ctx->pc = 0x393DD0u;
            goto label_393dd0;
        }
    }
    ctx->pc = 0x393DB4u;
label_393db4:
    // 0x393db4: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x393db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_393db8:
    // 0x393db8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x393db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_393dbc:
    // 0x393dbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393dc0:
    // 0x393dc0: 0x26870090  addiu       $a3, $s4, 0x90
    ctx->pc = 0x393dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_393dc4:
    // 0x393dc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x393dc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_393dc8:
    // 0x393dc8: 0xc04420c  jal         func_110830
label_393dcc:
    if (ctx->pc == 0x393DCCu) {
        ctx->pc = 0x393DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DC8u;
        // 0x393dcc: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DD0u;
        goto label_393dd0;
    }
    ctx->pc = 0x393DC8u;
    SET_GPR_U32(ctx, 31, 0x393DD0u);
    ctx->pc = 0x393DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393DC8u;
    // 0x393dcc: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393DC8u, 0x393DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DD0u;
label_393dd0:
    // 0x393dd0: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
label_393dd4:
    if (ctx->pc == 0x393DD4u) {
        ctx->pc = 0x393DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DD0u;
        // 0x393dd4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DD8u;
        goto label_393dd8;
    }
    ctx->pc = 0x393DD0u;
    {
        const bool branch_taken_0x393dd0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x393dd0) {
            ctx->pc = 0x393DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393DD0u;
            // 0x393dd4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393DE8u;
            goto label_393de8;
        }
    }
    ctx->pc = 0x393DD8u;
label_393dd8:
    // 0x393dd8: 0x9202013c  lbu         $v0, 0x13C($s0)
    ctx->pc = 0x393dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 316)));
label_393ddc:
    // 0x393ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x393ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_393de0:
    // 0x393de0: 0xa202013c  sb          $v0, 0x13C($s0)
    ctx->pc = 0x393de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 316), (uint8_t)GPR_U32(ctx, 2));
label_393de4:
    // 0x393de4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x393de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_393de8:
    // 0x393de8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x393de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_393dec:
    // 0x393dec: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x393decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_393df0:
    // 0x393df0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x393df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_393df4:
    // 0x393df4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x393df4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_393df8:
    // 0x393df8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x393df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_393dfc:
    // 0x393dfc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x393dfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_393e00:
    // 0x393e00: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x393e00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_393e04:
    // 0x393e04: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x393e04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_393e08:
    // 0x393e08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x393e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_393e0c:
    // 0x393e0c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x393e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_393e10:
    // 0x393e10: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x393e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_393e14:
    // 0x393e14: 0x3e00008  jr          $ra
label_393e18:
    if (ctx->pc == 0x393E18u) {
        ctx->pc = 0x393E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E14u;
        // 0x393e18: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E1Cu;
        goto label_393e1c;
    }
    ctx->pc = 0x393E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E14u;
        // 0x393e18: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393E1Cu;
label_393e1c:
    // 0x393e1c: 0x0  nop
    ctx->pc = 0x393e1cu;
    // NOP
    ctx->pc = 0x393e20u;
}
