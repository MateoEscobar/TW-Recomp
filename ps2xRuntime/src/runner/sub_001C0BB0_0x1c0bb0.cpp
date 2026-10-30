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

// Function: sub_001C0BB0
// Address: 0x1c0bb0 - 0x1c0f28
void sub_001C0BB0_0x1c0bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0BB0_0x1c0bb0");
#endif

    switch (ctx->pc) {
        case 0x1c0bb0u: goto label_1c0bb0;
        case 0x1c0bb4u: goto label_1c0bb4;
        case 0x1c0bb8u: goto label_1c0bb8;
        case 0x1c0bbcu: goto label_1c0bbc;
        case 0x1c0bc0u: goto label_1c0bc0;
        case 0x1c0bc4u: goto label_1c0bc4;
        case 0x1c0bc8u: goto label_1c0bc8;
        case 0x1c0bccu: goto label_1c0bcc;
        case 0x1c0bd0u: goto label_1c0bd0;
        case 0x1c0bd4u: goto label_1c0bd4;
        case 0x1c0bd8u: goto label_1c0bd8;
        case 0x1c0bdcu: goto label_1c0bdc;
        case 0x1c0be0u: goto label_1c0be0;
        case 0x1c0be4u: goto label_1c0be4;
        case 0x1c0be8u: goto label_1c0be8;
        case 0x1c0becu: goto label_1c0bec;
        case 0x1c0bf0u: goto label_1c0bf0;
        case 0x1c0bf4u: goto label_1c0bf4;
        case 0x1c0bf8u: goto label_1c0bf8;
        case 0x1c0bfcu: goto label_1c0bfc;
        case 0x1c0c00u: goto label_1c0c00;
        case 0x1c0c04u: goto label_1c0c04;
        case 0x1c0c08u: goto label_1c0c08;
        case 0x1c0c0cu: goto label_1c0c0c;
        case 0x1c0c10u: goto label_1c0c10;
        case 0x1c0c14u: goto label_1c0c14;
        case 0x1c0c18u: goto label_1c0c18;
        case 0x1c0c1cu: goto label_1c0c1c;
        case 0x1c0c20u: goto label_1c0c20;
        case 0x1c0c24u: goto label_1c0c24;
        case 0x1c0c28u: goto label_1c0c28;
        case 0x1c0c2cu: goto label_1c0c2c;
        case 0x1c0c30u: goto label_1c0c30;
        case 0x1c0c34u: goto label_1c0c34;
        case 0x1c0c38u: goto label_1c0c38;
        case 0x1c0c3cu: goto label_1c0c3c;
        case 0x1c0c40u: goto label_1c0c40;
        case 0x1c0c44u: goto label_1c0c44;
        case 0x1c0c48u: goto label_1c0c48;
        case 0x1c0c4cu: goto label_1c0c4c;
        case 0x1c0c50u: goto label_1c0c50;
        case 0x1c0c54u: goto label_1c0c54;
        case 0x1c0c58u: goto label_1c0c58;
        case 0x1c0c5cu: goto label_1c0c5c;
        case 0x1c0c60u: goto label_1c0c60;
        case 0x1c0c64u: goto label_1c0c64;
        case 0x1c0c68u: goto label_1c0c68;
        case 0x1c0c6cu: goto label_1c0c6c;
        case 0x1c0c70u: goto label_1c0c70;
        case 0x1c0c74u: goto label_1c0c74;
        case 0x1c0c78u: goto label_1c0c78;
        case 0x1c0c7cu: goto label_1c0c7c;
        case 0x1c0c80u: goto label_1c0c80;
        case 0x1c0c84u: goto label_1c0c84;
        case 0x1c0c88u: goto label_1c0c88;
        case 0x1c0c8cu: goto label_1c0c8c;
        case 0x1c0c90u: goto label_1c0c90;
        case 0x1c0c94u: goto label_1c0c94;
        case 0x1c0c98u: goto label_1c0c98;
        case 0x1c0c9cu: goto label_1c0c9c;
        case 0x1c0ca0u: goto label_1c0ca0;
        case 0x1c0ca4u: goto label_1c0ca4;
        case 0x1c0ca8u: goto label_1c0ca8;
        case 0x1c0cacu: goto label_1c0cac;
        case 0x1c0cb0u: goto label_1c0cb0;
        case 0x1c0cb4u: goto label_1c0cb4;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0cbcu: goto label_1c0cbc;
        case 0x1c0cc0u: goto label_1c0cc0;
        case 0x1c0cc4u: goto label_1c0cc4;
        case 0x1c0cc8u: goto label_1c0cc8;
        case 0x1c0cccu: goto label_1c0ccc;
        case 0x1c0cd0u: goto label_1c0cd0;
        case 0x1c0cd4u: goto label_1c0cd4;
        case 0x1c0cd8u: goto label_1c0cd8;
        case 0x1c0cdcu: goto label_1c0cdc;
        case 0x1c0ce0u: goto label_1c0ce0;
        case 0x1c0ce4u: goto label_1c0ce4;
        case 0x1c0ce8u: goto label_1c0ce8;
        case 0x1c0cecu: goto label_1c0cec;
        case 0x1c0cf0u: goto label_1c0cf0;
        case 0x1c0cf4u: goto label_1c0cf4;
        case 0x1c0cf8u: goto label_1c0cf8;
        case 0x1c0cfcu: goto label_1c0cfc;
        case 0x1c0d00u: goto label_1c0d00;
        case 0x1c0d04u: goto label_1c0d04;
        case 0x1c0d08u: goto label_1c0d08;
        case 0x1c0d0cu: goto label_1c0d0c;
        case 0x1c0d10u: goto label_1c0d10;
        case 0x1c0d14u: goto label_1c0d14;
        case 0x1c0d18u: goto label_1c0d18;
        case 0x1c0d1cu: goto label_1c0d1c;
        case 0x1c0d20u: goto label_1c0d20;
        case 0x1c0d24u: goto label_1c0d24;
        case 0x1c0d28u: goto label_1c0d28;
        case 0x1c0d2cu: goto label_1c0d2c;
        case 0x1c0d30u: goto label_1c0d30;
        case 0x1c0d34u: goto label_1c0d34;
        case 0x1c0d38u: goto label_1c0d38;
        case 0x1c0d3cu: goto label_1c0d3c;
        case 0x1c0d40u: goto label_1c0d40;
        case 0x1c0d44u: goto label_1c0d44;
        case 0x1c0d48u: goto label_1c0d48;
        case 0x1c0d4cu: goto label_1c0d4c;
        case 0x1c0d50u: goto label_1c0d50;
        case 0x1c0d54u: goto label_1c0d54;
        case 0x1c0d58u: goto label_1c0d58;
        case 0x1c0d5cu: goto label_1c0d5c;
        case 0x1c0d60u: goto label_1c0d60;
        case 0x1c0d64u: goto label_1c0d64;
        case 0x1c0d68u: goto label_1c0d68;
        case 0x1c0d6cu: goto label_1c0d6c;
        case 0x1c0d70u: goto label_1c0d70;
        case 0x1c0d74u: goto label_1c0d74;
        case 0x1c0d78u: goto label_1c0d78;
        case 0x1c0d7cu: goto label_1c0d7c;
        case 0x1c0d80u: goto label_1c0d80;
        case 0x1c0d84u: goto label_1c0d84;
        case 0x1c0d88u: goto label_1c0d88;
        case 0x1c0d8cu: goto label_1c0d8c;
        case 0x1c0d90u: goto label_1c0d90;
        case 0x1c0d94u: goto label_1c0d94;
        case 0x1c0d98u: goto label_1c0d98;
        case 0x1c0d9cu: goto label_1c0d9c;
        case 0x1c0da0u: goto label_1c0da0;
        case 0x1c0da4u: goto label_1c0da4;
        case 0x1c0da8u: goto label_1c0da8;
        case 0x1c0dacu: goto label_1c0dac;
        case 0x1c0db0u: goto label_1c0db0;
        case 0x1c0db4u: goto label_1c0db4;
        case 0x1c0db8u: goto label_1c0db8;
        case 0x1c0dbcu: goto label_1c0dbc;
        case 0x1c0dc0u: goto label_1c0dc0;
        case 0x1c0dc4u: goto label_1c0dc4;
        case 0x1c0dc8u: goto label_1c0dc8;
        case 0x1c0dccu: goto label_1c0dcc;
        case 0x1c0dd0u: goto label_1c0dd0;
        case 0x1c0dd4u: goto label_1c0dd4;
        case 0x1c0dd8u: goto label_1c0dd8;
        case 0x1c0ddcu: goto label_1c0ddc;
        case 0x1c0de0u: goto label_1c0de0;
        case 0x1c0de4u: goto label_1c0de4;
        case 0x1c0de8u: goto label_1c0de8;
        case 0x1c0decu: goto label_1c0dec;
        case 0x1c0df0u: goto label_1c0df0;
        case 0x1c0df4u: goto label_1c0df4;
        case 0x1c0df8u: goto label_1c0df8;
        case 0x1c0dfcu: goto label_1c0dfc;
        case 0x1c0e00u: goto label_1c0e00;
        case 0x1c0e04u: goto label_1c0e04;
        case 0x1c0e08u: goto label_1c0e08;
        case 0x1c0e0cu: goto label_1c0e0c;
        case 0x1c0e10u: goto label_1c0e10;
        case 0x1c0e14u: goto label_1c0e14;
        case 0x1c0e18u: goto label_1c0e18;
        case 0x1c0e1cu: goto label_1c0e1c;
        case 0x1c0e20u: goto label_1c0e20;
        case 0x1c0e24u: goto label_1c0e24;
        case 0x1c0e28u: goto label_1c0e28;
        case 0x1c0e2cu: goto label_1c0e2c;
        case 0x1c0e30u: goto label_1c0e30;
        case 0x1c0e34u: goto label_1c0e34;
        case 0x1c0e38u: goto label_1c0e38;
        case 0x1c0e3cu: goto label_1c0e3c;
        case 0x1c0e40u: goto label_1c0e40;
        case 0x1c0e44u: goto label_1c0e44;
        case 0x1c0e48u: goto label_1c0e48;
        case 0x1c0e4cu: goto label_1c0e4c;
        case 0x1c0e50u: goto label_1c0e50;
        case 0x1c0e54u: goto label_1c0e54;
        case 0x1c0e58u: goto label_1c0e58;
        case 0x1c0e5cu: goto label_1c0e5c;
        case 0x1c0e60u: goto label_1c0e60;
        case 0x1c0e64u: goto label_1c0e64;
        case 0x1c0e68u: goto label_1c0e68;
        case 0x1c0e6cu: goto label_1c0e6c;
        case 0x1c0e70u: goto label_1c0e70;
        case 0x1c0e74u: goto label_1c0e74;
        case 0x1c0e78u: goto label_1c0e78;
        case 0x1c0e7cu: goto label_1c0e7c;
        case 0x1c0e80u: goto label_1c0e80;
        case 0x1c0e84u: goto label_1c0e84;
        case 0x1c0e88u: goto label_1c0e88;
        case 0x1c0e8cu: goto label_1c0e8c;
        case 0x1c0e90u: goto label_1c0e90;
        case 0x1c0e94u: goto label_1c0e94;
        case 0x1c0e98u: goto label_1c0e98;
        case 0x1c0e9cu: goto label_1c0e9c;
        case 0x1c0ea0u: goto label_1c0ea0;
        case 0x1c0ea4u: goto label_1c0ea4;
        case 0x1c0ea8u: goto label_1c0ea8;
        case 0x1c0eacu: goto label_1c0eac;
        case 0x1c0eb0u: goto label_1c0eb0;
        case 0x1c0eb4u: goto label_1c0eb4;
        case 0x1c0eb8u: goto label_1c0eb8;
        case 0x1c0ebcu: goto label_1c0ebc;
        case 0x1c0ec0u: goto label_1c0ec0;
        case 0x1c0ec4u: goto label_1c0ec4;
        case 0x1c0ec8u: goto label_1c0ec8;
        case 0x1c0eccu: goto label_1c0ecc;
        case 0x1c0ed0u: goto label_1c0ed0;
        case 0x1c0ed4u: goto label_1c0ed4;
        case 0x1c0ed8u: goto label_1c0ed8;
        case 0x1c0edcu: goto label_1c0edc;
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ee4u: goto label_1c0ee4;
        case 0x1c0ee8u: goto label_1c0ee8;
        case 0x1c0eecu: goto label_1c0eec;
        case 0x1c0ef0u: goto label_1c0ef0;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0ef8u: goto label_1c0ef8;
        case 0x1c0efcu: goto label_1c0efc;
        case 0x1c0f00u: goto label_1c0f00;
        case 0x1c0f04u: goto label_1c0f04;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f0cu: goto label_1c0f0c;
        case 0x1c0f10u: goto label_1c0f10;
        case 0x1c0f14u: goto label_1c0f14;
        case 0x1c0f18u: goto label_1c0f18;
        case 0x1c0f1cu: goto label_1c0f1c;
        case 0x1c0f20u: goto label_1c0f20;
        case 0x1c0f24u: goto label_1c0f24;
        default: break;
    }

    ctx->pc = 0x1c0bb0u;

label_1c0bb0:
    // 0x1c0bb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1c0bb4:
    // 0x1c0bb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c0bb8:
    // 0x1c0bb8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1c0bbc:
    // 0x1c0bbc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1c0bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1c0bc0:
    // 0x1c0bc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c0bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0bc4:
    // 0x1c0bc4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c0bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1c0bc8:
    // 0x1c0bc8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c0bc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0bcc:
    // 0x1c0bcc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c0bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1c0bd0:
    // 0x1c0bd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0bd4:
    // 0x1c0bd4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1c0bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1c0bd8:
    // 0x1c0bd8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c0bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1c0bdc:
    // 0x1c0bdc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1c0bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1c0be0:
    // 0x1c0be0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1c0be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1c0be4:
    // 0x1c0be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c0be8:
    // 0x1c0be8: 0x8c43e948  lw          $v1, -0x16B8($v0)
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961480)));
label_1c0bec:
    // 0x1c0bec: 0xc6620838  lwc1        $f2, 0x838($s3)
    ctx->pc = 0x1c0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c0bf0:
    // 0x1c0bf0: 0xc660083c  lwc1        $f0, 0x83C($s3)
    ctx->pc = 0x1c0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0bf4:
    // 0x1c0bf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c0bf8:
    // 0x1c0bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0bfc:
    // 0x1c0bfc: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x1c0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_1c0c00:
    // 0x1c0c00: 0xae630848  sw          $v1, 0x848($s3)
    ctx->pc = 0x1c0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2120), GPR_U32(ctx, 3));
label_1c0c04:
    // 0x1c0c04: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c0c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c0c08:
    // 0x1c0c08: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1c0c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c0c0c:
    // 0x1c0c0c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c0c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c0c10:
    // 0x1c0c10: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_1c0c14:
    if (ctx->pc == 0x1C0C14u) {
        ctx->pc = 0x1C0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C10u;
        // 0x1c0c14: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C18u;
        goto label_1c0c18;
    }
    ctx->pc = 0x1C0C10u;
    {
        const bool branch_taken_0x1c0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C10u;
        // 0x1c0c14: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c10) {
            ctx->pc = 0x1C0C34u;
            goto label_1c0c34;
        }
    }
    ctx->pc = 0x1C0C18u;
label_1c0c18:
    // 0x1c0c18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c0c1c:
    // 0x1c0c1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c0c20:
    // 0x1c0c20: 0xc440e91c  lwc1        $f0, -0x16E4($v0)
    ctx->pc = 0x1c0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0c24:
    // 0x1c0c24: 0xc461e8f4  lwc1        $f1, -0x170C($v1)
    ctx->pc = 0x1c0c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0c28:
    // 0x1c0c28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c0c2c:
    // 0x1c0c2c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c0c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1c0c30:
    // 0x1c0c30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c0c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c0c34:
    // 0x1c0c34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c0c38:
    // 0x1c0c38: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0c3c:
    // 0x1c0c3c: 0xc441e920  lwc1        $f1, -0x16E0($v0)
    ctx->pc = 0x1c0c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0c40:
    // 0x1c0c40: 0x26700300  addiu       $s0, $s3, 0x300
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_1c0c44:
    // 0x1c0c44: 0x8e630300  lw          $v1, 0x300($s3)
    ctx->pc = 0x1c0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_1c0c48:
    // 0x1c0c48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c0c4c:
    // 0x1c0c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c0c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c0c50:
    // 0x1c0c50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0c54:
    // 0x1c0c54: 0x26710400  addiu       $s1, $s3, 0x400
    ctx->pc = 0x1c0c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
label_1c0c58:
    // 0x1c0c58: 0x26720500  addiu       $s2, $s3, 0x500
    ctx->pc = 0x1c0c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1280));
label_1c0c5c:
    // 0x1c0c5c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1c0c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0c60:
    // 0x1c0c60: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1c0c60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0c64:
    // 0x1c0c64: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c0c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c0c68:
    // 0x1c0c68: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1c0c68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0c6c:
    // 0x1c0c6c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1c0c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1c0c70:
    // 0x1c0c70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c0c74:
    // 0x1c0c74: 0x40f809  jalr        $v0
label_1c0c78:
    if (ctx->pc == 0x1C0C78u) {
        ctx->pc = 0x1C0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C74u;
        // 0x1c0c78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C7Cu;
        goto label_1c0c7c;
    }
    ctx->pc = 0x1C0C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0C7Cu);
        ctx->pc = 0x1C0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C74u;
        // 0x1c0c78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0C74u, 0x1C0C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0C7Cu;
label_1c0c7c:
    // 0x1c0c7c: 0x8e630400  lw          $v1, 0x400($s3)
    ctx->pc = 0x1c0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
label_1c0c80:
    // 0x1c0c80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c0c84:
    // 0x1c0c84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0c88:
    // 0x1c0c88: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1c0c8c:
    // 0x1c0c8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c0c90:
    // 0x1c0c90: 0x40f809  jalr        $v0
label_1c0c94:
    if (ctx->pc == 0x1C0C94u) {
        ctx->pc = 0x1C0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C90u;
        // 0x1c0c94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C98u;
        goto label_1c0c98;
    }
    ctx->pc = 0x1C0C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0C98u);
        ctx->pc = 0x1C0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C90u;
        // 0x1c0c94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0C90u, 0x1C0C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0C98u;
label_1c0c98:
    // 0x1c0c98: 0x8e630500  lw          $v1, 0x500($s3)
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1280)));
label_1c0c9c:
    // 0x1c0c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ca0:
    // 0x1c0ca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0ca4:
    // 0x1c0ca4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1c0ca8:
    // 0x1c0ca8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c0cac:
    // 0x1c0cac: 0x40f809  jalr        $v0
label_1c0cb0:
    if (ctx->pc == 0x1C0CB0u) {
        ctx->pc = 0x1C0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CACu;
        // 0x1c0cb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CB4u;
        goto label_1c0cb4;
    }
    ctx->pc = 0x1C0CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0CB4u);
        ctx->pc = 0x1C0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CACu;
        // 0x1c0cb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CACu, 0x1C0CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0CB4u;
label_1c0cb4:
    // 0x1c0cb4: 0x8e630300  lw          $v1, 0x300($s3)
    ctx->pc = 0x1c0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_1c0cb8:
    // 0x1c0cb8: 0xc66c0840  lwc1        $f12, 0x840($s3)
    ctx->pc = 0x1c0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0cbc:
    // 0x1c0cbc: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1c0cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1c0cc0:
    // 0x1c0cc0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1c0cc4:
    // 0x1c0cc4: 0x40f809  jalr        $v0
label_1c0cc8:
    if (ctx->pc == 0x1C0CC8u) {
        ctx->pc = 0x1C0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CC4u;
        // 0x1c0cc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CCCu;
        goto label_1c0ccc;
    }
    ctx->pc = 0x1C0CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0CCCu);
        ctx->pc = 0x1C0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CC4u;
        // 0x1c0cc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CC4u, 0x1C0CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0CCCu;
label_1c0ccc:
    // 0x1c0ccc: 0x8e630400  lw          $v1, 0x400($s3)
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
label_1c0cd0:
    // 0x1c0cd0: 0xc66c0840  lwc1        $f12, 0x840($s3)
    ctx->pc = 0x1c0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0cd4:
    // 0x1c0cd4: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1c0cd8:
    // 0x1c0cd8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1c0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1c0cdc:
    // 0x1c0cdc: 0x40f809  jalr        $v0
label_1c0ce0:
    if (ctx->pc == 0x1C0CE0u) {
        ctx->pc = 0x1C0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CDCu;
        // 0x1c0ce0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CE4u;
        goto label_1c0ce4;
    }
    ctx->pc = 0x1C0CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0CE4u);
        ctx->pc = 0x1C0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CDCu;
        // 0x1c0ce0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CDCu, 0x1C0CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0CE4u;
label_1c0ce4:
    // 0x1c0ce4: 0x8e630500  lw          $v1, 0x500($s3)
    ctx->pc = 0x1c0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1280)));
label_1c0ce8:
    // 0x1c0ce8: 0xc66c0840  lwc1        $f12, 0x840($s3)
    ctx->pc = 0x1c0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0cec:
    // 0x1c0cec: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1c0cf0:
    // 0x1c0cf0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1c0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1c0cf4:
    // 0x1c0cf4: 0x40f809  jalr        $v0
label_1c0cf8:
    if (ctx->pc == 0x1C0CF8u) {
        ctx->pc = 0x1C0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CF4u;
        // 0x1c0cf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CFCu;
        goto label_1c0cfc;
    }
    ctx->pc = 0x1C0CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0CFCu);
        ctx->pc = 0x1C0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CF4u;
        // 0x1c0cf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CF4u, 0x1C0CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0CFCu;
label_1c0cfc:
    // 0x1c0cfc: 0x8e640844  lw          $a0, 0x844($s3)
    ctx->pc = 0x1c0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2116)));
label_1c0d00:
    // 0x1c0d00: 0x8e630848  lw          $v1, 0x848($s3)
    ctx->pc = 0x1c0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2120)));
label_1c0d04:
    // 0x1c0d04: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1c0d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1c0d08:
    // 0x1c0d08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1c0d0c:
    if (ctx->pc == 0x1C0D0Cu) {
        ctx->pc = 0x1C0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D08u;
        // 0x1c0d0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D10u;
        goto label_1c0d10;
    }
    ctx->pc = 0x1C0D08u;
    {
        const bool branch_taken_0x1c0d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D08u;
        // 0x1c0d0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d08) {
            ctx->pc = 0x1C0D60u;
            goto label_1c0d60;
        }
    }
    ctx->pc = 0x1C0D10u;
label_1c0d10:
    // 0x1c0d10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d14:
    // 0x1c0d14: 0xc44ce918  lwc1        $f12, -0x16E8($v0)
    ctx->pc = 0x1c0d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0d18:
    // 0x1c0d18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0d1c:
    // 0x1c0d1c: 0xc068848  jal         func_1A2120
label_1c0d20:
    if (ctx->pc == 0x1C0D20u) {
        ctx->pc = 0x1C0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D1Cu;
        // 0x1c0d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D24u;
        goto label_1c0d24;
    }
    ctx->pc = 0x1C0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1C0D24u);
    ctx->pc = 0x1C0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D1Cu;
    // 0x1c0d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C0D1Cu, 0x1C0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D24u;
label_1c0d24:
    // 0x1c0d24: 0x8e620300  lw          $v0, 0x300($s3)
    ctx->pc = 0x1c0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_1c0d28:
    // 0x1c0d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0d2c:
    // 0x1c0d2c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0d30:
    // 0x1c0d30: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0d34:
    // 0x1c0d34: 0x60f809  jalr        $v1
label_1c0d38:
    if (ctx->pc == 0x1C0D38u) {
        ctx->pc = 0x1C0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D34u;
        // 0x1c0d38: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D3Cu;
        goto label_1c0d3c;
    }
    ctx->pc = 0x1C0D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0D3Cu);
        ctx->pc = 0x1C0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D34u;
        // 0x1c0d38: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0D34u, 0x1C0D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0D3Cu;
label_1c0d3c:
    // 0x1c0d3c: 0x8e620400  lw          $v0, 0x400($s3)
    ctx->pc = 0x1c0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
label_1c0d40:
    // 0x1c0d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d44:
    // 0x1c0d44: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0d48:
    // 0x1c0d48: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0d4c:
    // 0x1c0d4c: 0x60f809  jalr        $v1
label_1c0d50:
    if (ctx->pc == 0x1C0D50u) {
        ctx->pc = 0x1C0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D4Cu;
        // 0x1c0d50: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D54u;
        goto label_1c0d54;
    }
    ctx->pc = 0x1C0D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0D54u);
        ctx->pc = 0x1C0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D4Cu;
        // 0x1c0d50: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0D4Cu, 0x1C0D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0D54u;
label_1c0d54:
    // 0x1c0d54: 0x8e620500  lw          $v0, 0x500($s3)
    ctx->pc = 0x1c0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1280)));
label_1c0d58:
    // 0x1c0d58: 0x10000038  b           . + 4 + (0x38 << 2)
label_1c0d5c:
    if (ctx->pc == 0x1C0D5Cu) {
        ctx->pc = 0x1C0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D58u;
        // 0x1c0d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D60u;
        goto label_1c0d60;
    }
    ctx->pc = 0x1C0D58u;
    {
        const bool branch_taken_0x1c0d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D58u;
        // 0x1c0d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d58) {
            ctx->pc = 0x1C0E3Cu;
            goto label_1c0e3c;
        }
    }
    ctx->pc = 0x1C0D60u;
label_1c0d60:
    // 0x1c0d60: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1c0d60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c0d64:
    // 0x1c0d64: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1c0d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1c0d68:
    // 0x1c0d68: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c0d6c:
    if (ctx->pc == 0x1C0D6Cu) {
        ctx->pc = 0x1C0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D68u;
        // 0x1c0d6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D70u;
        goto label_1c0d70;
    }
    ctx->pc = 0x1C0D68u;
    {
        const bool branch_taken_0x1c0d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D68u;
        // 0x1c0d6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d68) {
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0D70u;
label_1c0d70:
    // 0x1c0d70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d74:
    // 0x1c0d74: 0xc44ce918  lwc1        $f12, -0x16E8($v0)
    ctx->pc = 0x1c0d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0d78:
    // 0x1c0d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0d7c:
    // 0x1c0d7c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1c0d7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0d80:
    // 0x1c0d80: 0xc068848  jal         func_1A2120
label_1c0d84:
    if (ctx->pc == 0x1C0D84u) {
        ctx->pc = 0x1C0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D80u;
        // 0x1c0d84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D88u;
        goto label_1c0d88;
    }
    ctx->pc = 0x1C0D80u;
    SET_GPR_U32(ctx, 31, 0x1C0D88u);
    ctx->pc = 0x1C0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D80u;
    // 0x1c0d84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C0D80u, 0x1C0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D88u;
label_1c0d88:
    // 0x1c0d88: 0x8e620300  lw          $v0, 0x300($s3)
    ctx->pc = 0x1c0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_1c0d8c:
    // 0x1c0d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0d90:
    // 0x1c0d90: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0d94:
    // 0x1c0d94: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0d98:
    // 0x1c0d98: 0x60f809  jalr        $v1
label_1c0d9c:
    if (ctx->pc == 0x1C0D9Cu) {
        ctx->pc = 0x1C0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D98u;
        // 0x1c0d9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DA0u;
        goto label_1c0da0;
    }
    ctx->pc = 0x1C0D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0DA0u);
        ctx->pc = 0x1C0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D98u;
        // 0x1c0d9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0D98u, 0x1C0DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0DA0u;
label_1c0da0:
    // 0x1c0da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c0da4:
    // 0x1c0da4: 0xc06898e  jal         func_1A2638
label_1c0da8:
    if (ctx->pc == 0x1C0DA8u) {
        ctx->pc = 0x1C0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DA4u;
        // 0x1c0da8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DACu;
        goto label_1c0dac;
    }
    ctx->pc = 0x1C0DA4u;
    SET_GPR_U32(ctx, 31, 0x1C0DACu);
    ctx->pc = 0x1C0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DA4u;
    // 0x1c0da8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1C0DA4u, 0x1C0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DACu;
label_1c0dac:
    // 0x1c0dac: 0x8e620400  lw          $v0, 0x400($s3)
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
label_1c0db0:
    // 0x1c0db0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0db4:
    // 0x1c0db4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0db8:
    // 0x1c0db8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0dbc:
    // 0x1c0dbc: 0x60f809  jalr        $v1
label_1c0dc0:
    if (ctx->pc == 0x1C0DC0u) {
        ctx->pc = 0x1C0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DBCu;
        // 0x1c0dc0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DC4u;
        goto label_1c0dc4;
    }
    ctx->pc = 0x1C0DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0DC4u);
        ctx->pc = 0x1C0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DBCu;
        // 0x1c0dc0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0DBCu, 0x1C0DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0DC4u;
label_1c0dc4:
    // 0x1c0dc4: 0x8e620500  lw          $v0, 0x500($s3)
    ctx->pc = 0x1c0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1280)));
label_1c0dc8:
    // 0x1c0dc8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1c0dcc:
    if (ctx->pc == 0x1C0DCCu) {
        ctx->pc = 0x1C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DC8u;
        // 0x1c0dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DD0u;
        goto label_1c0dd0;
    }
    ctx->pc = 0x1C0DC8u;
    {
        const bool branch_taken_0x1c0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DC8u;
        // 0x1c0dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dc8) {
            ctx->pc = 0x1C0E3Cu;
            goto label_1c0e3c;
        }
    }
    ctx->pc = 0x1C0DD0u;
label_1c0dd0:
    // 0x1c0dd0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1c0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c0dd4:
    // 0x1c0dd4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1c0dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c0dd8:
    // 0x1c0dd8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1c0ddc:
    if (ctx->pc == 0x1C0DDCu) {
        ctx->pc = 0x1C0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DD8u;
        // 0x1c0ddc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DE0u;
        goto label_1c0de0;
    }
    ctx->pc = 0x1C0DD8u;
    {
        const bool branch_taken_0x1c0dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DD8u;
        // 0x1c0ddc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dd8) {
            ctx->pc = 0x1C0E5Cu;
            goto label_1c0e5c;
        }
    }
    ctx->pc = 0x1C0DE0u;
label_1c0de0:
    // 0x1c0de0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c0de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c0de4:
    // 0x1c0de4: 0xc44ce918  lwc1        $f12, -0x16E8($v0)
    ctx->pc = 0x1c0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0de8:
    // 0x1c0de8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0dec:
    // 0x1c0dec: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1c0decu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0df0:
    // 0x1c0df0: 0xc068848  jal         func_1A2120
label_1c0df4:
    if (ctx->pc == 0x1C0DF4u) {
        ctx->pc = 0x1C0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DF0u;
        // 0x1c0df4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DF8u;
        goto label_1c0df8;
    }
    ctx->pc = 0x1C0DF0u;
    SET_GPR_U32(ctx, 31, 0x1C0DF8u);
    ctx->pc = 0x1C0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DF0u;
    // 0x1c0df4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C0DF0u, 0x1C0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DF8u;
label_1c0df8:
    // 0x1c0df8: 0x8e620300  lw          $v0, 0x300($s3)
    ctx->pc = 0x1c0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_1c0dfc:
    // 0x1c0dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0e00:
    // 0x1c0e00: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0e04:
    // 0x1c0e04: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0e08:
    // 0x1c0e08: 0x60f809  jalr        $v1
label_1c0e0c:
    if (ctx->pc == 0x1C0E0Cu) {
        ctx->pc = 0x1C0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E08u;
        // 0x1c0e0c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E10u;
        goto label_1c0e10;
    }
    ctx->pc = 0x1C0E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0E10u);
        ctx->pc = 0x1C0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E08u;
        // 0x1c0e0c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E08u, 0x1C0E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0E10u;
label_1c0e10:
    // 0x1c0e10: 0x8e620400  lw          $v0, 0x400($s3)
    ctx->pc = 0x1c0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
label_1c0e14:
    // 0x1c0e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0e18:
    // 0x1c0e18: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0e1c:
    // 0x1c0e1c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0e20:
    // 0x1c0e20: 0x60f809  jalr        $v1
label_1c0e24:
    if (ctx->pc == 0x1C0E24u) {
        ctx->pc = 0x1C0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E20u;
        // 0x1c0e24: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E28u;
        goto label_1c0e28;
    }
    ctx->pc = 0x1C0E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0E28u);
        ctx->pc = 0x1C0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E20u;
        // 0x1c0e24: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E20u, 0x1C0E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0E28u;
label_1c0e28:
    // 0x1c0e28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c0e2c:
    // 0x1c0e2c: 0xc06898e  jal         func_1A2638
label_1c0e30:
    if (ctx->pc == 0x1C0E30u) {
        ctx->pc = 0x1C0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E2Cu;
        // 0x1c0e30: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E34u;
        goto label_1c0e34;
    }
    ctx->pc = 0x1C0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E34u);
    ctx->pc = 0x1C0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E2Cu;
    // 0x1c0e30: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1C0E2Cu, 0x1C0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E34u;
label_1c0e34:
    // 0x1c0e34: 0x8e620500  lw          $v0, 0x500($s3)
    ctx->pc = 0x1c0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1280)));
label_1c0e38:
    // 0x1c0e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0e3c:
    // 0x1c0e3c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c0e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c0e40:
    // 0x1c0e40: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c0e44:
    // 0x1c0e44: 0x60f809  jalr        $v1
label_1c0e48:
    if (ctx->pc == 0x1C0E48u) {
        ctx->pc = 0x1C0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E44u;
        // 0x1c0e48: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E4Cu;
        goto label_1c0e4c;
    }
    ctx->pc = 0x1C0E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0E4Cu);
        ctx->pc = 0x1C0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E44u;
        // 0x1c0e48: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E44u, 0x1C0E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0E4Cu;
label_1c0e4c:
    // 0x1c0e4c: 0x8e620844  lw          $v0, 0x844($s3)
    ctx->pc = 0x1c0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2116)));
label_1c0e50:
    // 0x1c0e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c0e54:
    // 0x1c0e54: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0e58:
    if (ctx->pc == 0x1C0E58u) {
        ctx->pc = 0x1C0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E54u;
        // 0x1c0e58: 0xae620844  sw          $v0, 0x844($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E5Cu;
        goto label_1c0e5c;
    }
    ctx->pc = 0x1C0E54u;
    {
        const bool branch_taken_0x1c0e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E54u;
        // 0x1c0e58: 0xae620844  sw          $v0, 0x844($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e54) {
            ctx->pc = 0x1C0E60u;
            goto label_1c0e60;
        }
    }
    ctx->pc = 0x1C0E5Cu;
label_1c0e5c:
    // 0x1c0e5c: 0xae600844  sw          $zero, 0x844($s3)
    ctx->pc = 0x1c0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2116), GPR_U32(ctx, 0));
label_1c0e60:
    // 0x1c0e60: 0x8e620848  lw          $v0, 0x848($s3)
    ctx->pc = 0x1c0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2120)));
label_1c0e64:
    // 0x1c0e64: 0x8e640844  lw          $a0, 0x844($s3)
    ctx->pc = 0x1c0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2116)));
label_1c0e68:
    // 0x1c0e68: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1c0e6c:
    // 0x1c0e6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c0e70:
    // 0x1c0e70: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_1c0e74:
    if (ctx->pc == 0x1C0E74u) {
        ctx->pc = 0x1C0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E70u;
        // 0x1c0e74: 0x26700300  addiu       $s0, $s3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E78u;
        goto label_1c0e78;
    }
    ctx->pc = 0x1C0E70u;
    {
        const bool branch_taken_0x1c0e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E70u;
        // 0x1c0e74: 0x26700300  addiu       $s0, $s3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e70) {
            ctx->pc = 0x1C0EC8u;
            goto label_1c0ec8;
        }
    }
    ctx->pc = 0x1C0E78u;
label_1c0e78:
    // 0x1c0e78: 0x8e630300  lw          $v1, 0x300($s3)
    ctx->pc = 0x1c0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_1c0e7c:
    // 0x1c0e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0e80:
    // 0x1c0e80: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x1c0e80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c0e84:
    // 0x1c0e84: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c0e84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c0e88:
    // 0x1c0e88: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c0e8c:
    // 0x1c0e8c: 0x40f809  jalr        $v0
label_1c0e90:
    if (ctx->pc == 0x1C0E90u) {
        ctx->pc = 0x1C0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E8Cu;
        // 0x1c0e90: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E94u;
        goto label_1c0e94;
    }
    ctx->pc = 0x1C0E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0E94u);
        ctx->pc = 0x1C0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E8Cu;
        // 0x1c0e90: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E8Cu, 0x1C0E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0E94u;
label_1c0e94:
    // 0x1c0e94: 0x8e630400  lw          $v1, 0x400($s3)
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
label_1c0e98:
    // 0x1c0e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0e9c:
    // 0x1c0e9c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c0e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c0ea0:
    // 0x1c0ea0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c0ea4:
    // 0x1c0ea4: 0x40f809  jalr        $v0
label_1c0ea8:
    if (ctx->pc == 0x1C0EA8u) {
        ctx->pc = 0x1C0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA4u;
        // 0x1c0ea8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EACu;
        goto label_1c0eac;
    }
    ctx->pc = 0x1C0EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0EACu);
        ctx->pc = 0x1C0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA4u;
        // 0x1c0ea8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0EA4u, 0x1C0EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0EACu;
label_1c0eac:
    // 0x1c0eac: 0x8e630500  lw          $v1, 0x500($s3)
    ctx->pc = 0x1c0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1280)));
label_1c0eb0:
    // 0x1c0eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0eb4:
    // 0x1c0eb4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c0eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c0eb8:
    // 0x1c0eb8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c0ebc:
    // 0x1c0ebc: 0x40f809  jalr        $v0
label_1c0ec0:
    if (ctx->pc == 0x1C0EC0u) {
        ctx->pc = 0x1C0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EBCu;
        // 0x1c0ec0: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EC4u;
        goto label_1c0ec4;
    }
    ctx->pc = 0x1C0EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0EC4u);
        ctx->pc = 0x1C0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EBCu;
        // 0x1c0ec0: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0EBCu, 0x1C0EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0EC4u;
label_1c0ec4:
    // 0x1c0ec4: 0x26700300  addiu       $s0, $s3, 0x300
    ctx->pc = 0x1c0ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_1c0ec8:
    // 0x1c0ec8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ecc:
    // 0x1c0ecc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c0eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ed0:
    // 0x1c0ed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0ed4:
    // 0x1c0ed4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c0ed8:
    // 0x1c0ed8: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1c0ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1c0edc:
    // 0x1c0edc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1c0edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1c0ee0:
    // 0x1c0ee0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c0ee4:
    // 0x1c0ee4: 0x40f809  jalr        $v0
label_1c0ee8:
    if (ctx->pc == 0x1C0EE8u) {
        ctx->pc = 0x1C0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE4u;
        // 0x1c0ee8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EECu;
        goto label_1c0eec;
    }
    ctx->pc = 0x1C0EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0EECu);
        ctx->pc = 0x1C0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE4u;
        // 0x1c0ee8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0EE4u, 0x1C0EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0EECu;
label_1c0eec:
    // 0x1c0eec: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1c0eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c0ef0:
    // 0x1c0ef0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1c0ef4:
    if (ctx->pc == 0x1C0EF4u) {
        ctx->pc = 0x1C0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EF0u;
        // 0x1c0ef4: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EF8u;
        goto label_1c0ef8;
    }
    ctx->pc = 0x1C0EF0u;
    {
        const bool branch_taken_0x1c0ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EF0u;
        // 0x1c0ef4: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ef0) {
            ctx->pc = 0x1C0ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0EF8u;
label_1c0ef8:
    // 0x1c0ef8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1c0ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c0efc:
    // 0x1c0efc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1c0efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c0f00:
    // 0x1c0f00: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1c0f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c0f04:
    // 0x1c0f04: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1c0f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c0f08:
    // 0x1c0f08: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c0f08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c0f0c:
    // 0x1c0f0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c0f0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c0f10:
    // 0x1c0f10: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1c0f10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c0f14:
    // 0x1c0f14: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1c0f14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0f18:
    // 0x1c0f18: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1c0f18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0f1c:
    // 0x1c0f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0f20:
    // 0x1c0f20: 0x3e00008  jr          $ra
label_1c0f24:
    if (ctx->pc == 0x1C0F24u) {
        ctx->pc = 0x1C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F20u;
        // 0x1c0f24: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F28u;
        goto label_fallthrough_0x1c0f20;
    }
    ctx->pc = 0x1C0F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F20u;
        // 0x1c0f24: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c0f20:
    ctx->pc = 0x1C0F28u;
}
