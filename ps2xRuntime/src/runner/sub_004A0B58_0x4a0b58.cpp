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

// Function: sub_004A0B58
// Address: 0x4a0b58 - 0x4a0dd8
void sub_004A0B58_0x4a0b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0B58_0x4a0b58");
#endif

    switch (ctx->pc) {
        case 0x4a0b58u: goto label_4a0b58;
        case 0x4a0b5cu: goto label_4a0b5c;
        case 0x4a0b60u: goto label_4a0b60;
        case 0x4a0b64u: goto label_4a0b64;
        case 0x4a0b68u: goto label_4a0b68;
        case 0x4a0b6cu: goto label_4a0b6c;
        case 0x4a0b70u: goto label_4a0b70;
        case 0x4a0b74u: goto label_4a0b74;
        case 0x4a0b78u: goto label_4a0b78;
        case 0x4a0b7cu: goto label_4a0b7c;
        case 0x4a0b80u: goto label_4a0b80;
        case 0x4a0b84u: goto label_4a0b84;
        case 0x4a0b88u: goto label_4a0b88;
        case 0x4a0b8cu: goto label_4a0b8c;
        case 0x4a0b90u: goto label_4a0b90;
        case 0x4a0b94u: goto label_4a0b94;
        case 0x4a0b98u: goto label_4a0b98;
        case 0x4a0b9cu: goto label_4a0b9c;
        case 0x4a0ba0u: goto label_4a0ba0;
        case 0x4a0ba4u: goto label_4a0ba4;
        case 0x4a0ba8u: goto label_4a0ba8;
        case 0x4a0bacu: goto label_4a0bac;
        case 0x4a0bb0u: goto label_4a0bb0;
        case 0x4a0bb4u: goto label_4a0bb4;
        case 0x4a0bb8u: goto label_4a0bb8;
        case 0x4a0bbcu: goto label_4a0bbc;
        case 0x4a0bc0u: goto label_4a0bc0;
        case 0x4a0bc4u: goto label_4a0bc4;
        case 0x4a0bc8u: goto label_4a0bc8;
        case 0x4a0bccu: goto label_4a0bcc;
        case 0x4a0bd0u: goto label_4a0bd0;
        case 0x4a0bd4u: goto label_4a0bd4;
        case 0x4a0bd8u: goto label_4a0bd8;
        case 0x4a0bdcu: goto label_4a0bdc;
        case 0x4a0be0u: goto label_4a0be0;
        case 0x4a0be4u: goto label_4a0be4;
        case 0x4a0be8u: goto label_4a0be8;
        case 0x4a0becu: goto label_4a0bec;
        case 0x4a0bf0u: goto label_4a0bf0;
        case 0x4a0bf4u: goto label_4a0bf4;
        case 0x4a0bf8u: goto label_4a0bf8;
        case 0x4a0bfcu: goto label_4a0bfc;
        case 0x4a0c00u: goto label_4a0c00;
        case 0x4a0c04u: goto label_4a0c04;
        case 0x4a0c08u: goto label_4a0c08;
        case 0x4a0c0cu: goto label_4a0c0c;
        case 0x4a0c10u: goto label_4a0c10;
        case 0x4a0c14u: goto label_4a0c14;
        case 0x4a0c18u: goto label_4a0c18;
        case 0x4a0c1cu: goto label_4a0c1c;
        case 0x4a0c20u: goto label_4a0c20;
        case 0x4a0c24u: goto label_4a0c24;
        case 0x4a0c28u: goto label_4a0c28;
        case 0x4a0c2cu: goto label_4a0c2c;
        case 0x4a0c30u: goto label_4a0c30;
        case 0x4a0c34u: goto label_4a0c34;
        case 0x4a0c38u: goto label_4a0c38;
        case 0x4a0c3cu: goto label_4a0c3c;
        case 0x4a0c40u: goto label_4a0c40;
        case 0x4a0c44u: goto label_4a0c44;
        case 0x4a0c48u: goto label_4a0c48;
        case 0x4a0c4cu: goto label_4a0c4c;
        case 0x4a0c50u: goto label_4a0c50;
        case 0x4a0c54u: goto label_4a0c54;
        case 0x4a0c58u: goto label_4a0c58;
        case 0x4a0c5cu: goto label_4a0c5c;
        case 0x4a0c60u: goto label_4a0c60;
        case 0x4a0c64u: goto label_4a0c64;
        case 0x4a0c68u: goto label_4a0c68;
        case 0x4a0c6cu: goto label_4a0c6c;
        case 0x4a0c70u: goto label_4a0c70;
        case 0x4a0c74u: goto label_4a0c74;
        case 0x4a0c78u: goto label_4a0c78;
        case 0x4a0c7cu: goto label_4a0c7c;
        case 0x4a0c80u: goto label_4a0c80;
        case 0x4a0c84u: goto label_4a0c84;
        case 0x4a0c88u: goto label_4a0c88;
        case 0x4a0c8cu: goto label_4a0c8c;
        case 0x4a0c90u: goto label_4a0c90;
        case 0x4a0c94u: goto label_4a0c94;
        case 0x4a0c98u: goto label_4a0c98;
        case 0x4a0c9cu: goto label_4a0c9c;
        case 0x4a0ca0u: goto label_4a0ca0;
        case 0x4a0ca4u: goto label_4a0ca4;
        case 0x4a0ca8u: goto label_4a0ca8;
        case 0x4a0cacu: goto label_4a0cac;
        case 0x4a0cb0u: goto label_4a0cb0;
        case 0x4a0cb4u: goto label_4a0cb4;
        case 0x4a0cb8u: goto label_4a0cb8;
        case 0x4a0cbcu: goto label_4a0cbc;
        case 0x4a0cc0u: goto label_4a0cc0;
        case 0x4a0cc4u: goto label_4a0cc4;
        case 0x4a0cc8u: goto label_4a0cc8;
        case 0x4a0cccu: goto label_4a0ccc;
        case 0x4a0cd0u: goto label_4a0cd0;
        case 0x4a0cd4u: goto label_4a0cd4;
        case 0x4a0cd8u: goto label_4a0cd8;
        case 0x4a0cdcu: goto label_4a0cdc;
        case 0x4a0ce0u: goto label_4a0ce0;
        case 0x4a0ce4u: goto label_4a0ce4;
        case 0x4a0ce8u: goto label_4a0ce8;
        case 0x4a0cecu: goto label_4a0cec;
        case 0x4a0cf0u: goto label_4a0cf0;
        case 0x4a0cf4u: goto label_4a0cf4;
        case 0x4a0cf8u: goto label_4a0cf8;
        case 0x4a0cfcu: goto label_4a0cfc;
        case 0x4a0d00u: goto label_4a0d00;
        case 0x4a0d04u: goto label_4a0d04;
        case 0x4a0d08u: goto label_4a0d08;
        case 0x4a0d0cu: goto label_4a0d0c;
        case 0x4a0d10u: goto label_4a0d10;
        case 0x4a0d14u: goto label_4a0d14;
        case 0x4a0d18u: goto label_4a0d18;
        case 0x4a0d1cu: goto label_4a0d1c;
        case 0x4a0d20u: goto label_4a0d20;
        case 0x4a0d24u: goto label_4a0d24;
        case 0x4a0d28u: goto label_4a0d28;
        case 0x4a0d2cu: goto label_4a0d2c;
        case 0x4a0d30u: goto label_4a0d30;
        case 0x4a0d34u: goto label_4a0d34;
        case 0x4a0d38u: goto label_4a0d38;
        case 0x4a0d3cu: goto label_4a0d3c;
        case 0x4a0d40u: goto label_4a0d40;
        case 0x4a0d44u: goto label_4a0d44;
        case 0x4a0d48u: goto label_4a0d48;
        case 0x4a0d4cu: goto label_4a0d4c;
        case 0x4a0d50u: goto label_4a0d50;
        case 0x4a0d54u: goto label_4a0d54;
        case 0x4a0d58u: goto label_4a0d58;
        case 0x4a0d5cu: goto label_4a0d5c;
        case 0x4a0d60u: goto label_4a0d60;
        case 0x4a0d64u: goto label_4a0d64;
        case 0x4a0d68u: goto label_4a0d68;
        case 0x4a0d6cu: goto label_4a0d6c;
        case 0x4a0d70u: goto label_4a0d70;
        case 0x4a0d74u: goto label_4a0d74;
        case 0x4a0d78u: goto label_4a0d78;
        case 0x4a0d7cu: goto label_4a0d7c;
        case 0x4a0d80u: goto label_4a0d80;
        case 0x4a0d84u: goto label_4a0d84;
        case 0x4a0d88u: goto label_4a0d88;
        case 0x4a0d8cu: goto label_4a0d8c;
        case 0x4a0d90u: goto label_4a0d90;
        case 0x4a0d94u: goto label_4a0d94;
        case 0x4a0d98u: goto label_4a0d98;
        case 0x4a0d9cu: goto label_4a0d9c;
        case 0x4a0da0u: goto label_4a0da0;
        case 0x4a0da4u: goto label_4a0da4;
        case 0x4a0da8u: goto label_4a0da8;
        case 0x4a0dacu: goto label_4a0dac;
        case 0x4a0db0u: goto label_4a0db0;
        case 0x4a0db4u: goto label_4a0db4;
        case 0x4a0db8u: goto label_4a0db8;
        case 0x4a0dbcu: goto label_4a0dbc;
        case 0x4a0dc0u: goto label_4a0dc0;
        case 0x4a0dc4u: goto label_4a0dc4;
        case 0x4a0dc8u: goto label_4a0dc8;
        case 0x4a0dccu: goto label_4a0dcc;
        case 0x4a0dd0u: goto label_4a0dd0;
        case 0x4a0dd4u: goto label_4a0dd4;
        default: break;
    }

    ctx->pc = 0x4a0b58u;

label_4a0b58:
    // 0x4a0b58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a0b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a0b5c:
    // 0x4a0b5c: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x4a0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_4a0b60:
    // 0x4a0b60: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a0b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4a0b64:
    // 0x4a0b64: 0x2ce70003  sltiu       $a3, $a3, 0x3
    ctx->pc = 0x4a0b64u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4a0b68:
    // 0x4a0b68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a0b6c:
    // 0x4a0b6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a0b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b70:
    // 0x4a0b70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a0b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4a0b74:
    // 0x4a0b74: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0b78:
    // 0x4a0b78: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a0b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4a0b7c:
    // 0x4a0b7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a0b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b80:
    // 0x4a0b80: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a0b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4a0b84:
    // 0x4a0b84: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4a0b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b88:
    // 0x4a0b88: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4a0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4a0b8c:
    // 0x4a0b8c: 0x67980a  movz        $s3, $v1, $a3
    ctx->pc = 0x4a0b8cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4a0b90:
    // 0x4a0b90: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a0b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4a0b94:
    // 0x4a0b94: 0x2456f7a0  addiu       $s6, $v0, -0x860
    ctx->pc = 0x4a0b94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a0b98:
    // 0x4a0b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0b9c:
    // 0x4a0b9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a0b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0ba0:
    // 0x4a0ba0: 0x10000071  b           . + 4 + (0x71 << 2)
label_4a0ba4:
    if (ctx->pc == 0x4A0BA4u) {
        ctx->pc = 0x4A0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BA0u;
        // 0x4a0ba4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0BA8u;
        goto label_4a0ba8;
    }
    ctx->pc = 0x4A0BA0u;
    {
        const bool branch_taken_0x4a0ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BA0u;
        // 0x4a0ba4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ba0) {
            ctx->pc = 0x4A0D68u;
            goto label_4a0d68;
        }
    }
    ctx->pc = 0x4A0BA8u;
label_4a0ba8:
    // 0x4a0ba8: 0x3c0a7c00  lui         $t2, 0x7C00
    ctx->pc = 0x4a0ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
label_4a0bac:
    // 0x4a0bac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a0bacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a0bb0:
    // 0x4a0bb0: 0x7ac80000  lq          $t0, 0x0($s6)
    ctx->pc = 0x4a0bb0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_4a0bb4:
    // 0x4a0bb4: 0x2458f700  addiu       $t8, $v0, -0x900
    ctx->pc = 0x4a0bb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a0bb8:
    // 0x4a0bb8: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x4a0bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4a0bbc:
    // 0x4a0bbc: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x4a0bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a0bc0:
    // 0x4a0bc0: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x4a0bc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a0bc4:
    // 0x4a0bc4: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x4a0bc4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
label_4a0bc8:
    // 0x4a0bc8: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x4a0bc8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
label_4a0bcc:
    // 0x4a0bcc: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x4a0bccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
label_4a0bd0:
    // 0x4a0bd0: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x4a0bd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
label_4a0bd4:
    // 0x4a0bd4: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x4a0bd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_4a0bd8:
    // 0x4a0bd8: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x4a0bd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_4a0bdc:
    // 0x4a0bdc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a0bdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a0be0:
    // 0x4a0be0: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4a0be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a0be4:
    // 0x4a0be4: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x4a0be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4a0be8:
    // 0x4a0be8: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x4a0be8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_4a0bec:
    // 0x4a0bec: 0xce2018  mult        $a0, $a2, $t6
    ctx->pc = 0x4a0becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a0bf0:
    // 0x4a0bf0: 0xcc1825  or          $v1, $a2, $t4
    ctx->pc = 0x4a0bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_4a0bf4:
    // 0x4a0bf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a0bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a0bf8:
    // 0x4a0bf8: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4a0bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4a0bfc:
    // 0x4a0bfc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a0bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a0c00:
    // 0x4a0c00: 0x6b2825  or          $a1, $v1, $t3
    ctx->pc = 0x4a0c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a0c04:
    // 0x4a0c04: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4a0c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_4a0c08:
    // 0x4a0c08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a0c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a0c0c:
    // 0x4a0c0c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a0c0cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a0c10:
    // 0x4a0c10: 0x4d1825  or          $v1, $v0, $t5
    ctx->pc = 0x4a0c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4a0c14:
    // 0x4a0c14: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a0c14u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a0c18:
    // 0x4a0c18: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0c1c:
    // 0x4a0c1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0c20:
    // 0x4a0c20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0c24:
    // 0x4a0c24: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0c28:
    // 0x4a0c28: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a0c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a0c2c:
    // 0x4a0c2c: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4a0c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_4a0c30:
    // 0x4a0c30: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4a0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4a0c34:
    // 0x4a0c34: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4a0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4a0c38:
    // 0x4a0c38: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a0c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a0c3c:
    // 0x4a0c3c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4a0c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_4a0c40:
    // 0x4a0c40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a0c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a0c44:
    // 0x4a0c44: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x4a0c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_4a0c48:
    // 0x4a0c48: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a0c48u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a0c4c:
    // 0x4a0c4c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0c50:
    // 0x4a0c50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0c54:
    // 0x4a0c54: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a0c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a0c58:
    // 0x4a0c58: 0x10c9003b  beq         $a2, $t1, . + 4 + (0x3B << 2)
label_4a0c5c:
    if (ctx->pc == 0x4A0C5Cu) {
        ctx->pc = 0x4A0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C58u;
        // 0x4a0c5c: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0C60u;
        goto label_4a0c60;
    }
    ctx->pc = 0x4A0C58u;
    {
        const bool branch_taken_0x4a0c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C58u;
        // 0x4a0c5c: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0c58) {
            ctx->pc = 0x4A0D48u;
            goto label_4a0d48;
        }
    }
    ctx->pc = 0x4A0C60u;
label_4a0c60:
    // 0x4a0c60: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a0c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4a0c64:
    // 0x4a0c64: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x4a0c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_4a0c68:
    // 0x4a0c68: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a0c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a0c6c:
    // 0x4a0c6c: 0x0  nop
    ctx->pc = 0x4a0c6cu;
    // NOP
label_4a0c70:
    // 0x4a0c70: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0c74:
    // 0x4a0c74: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x4a0c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0c78:
    // 0x4a0c78: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0c7c:
    // 0x4a0c7c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0c80:
    // 0x4a0c80: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0c84:
    // 0x4a0c84: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x4a0c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_4a0c88:
    // 0x4a0c88: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0c88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0c8c:
    // 0x4a0c8c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0c90:
    // 0x4a0c90: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0c94:
    // 0x4a0c94: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x4a0c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_4a0c98:
    // 0x4a0c98: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a0c9c:
    // 0x4a0c9c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0ca0:
    // 0x4a0ca0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0ca4:
    // 0x4a0ca4: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x4a0ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_4a0ca8:
    // 0x4a0ca8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a0cac:
    // 0x4a0cac: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a0cb0:
    // 0x4a0cb0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0cb4:
    // 0x4a0cb4: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x4a0cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_4a0cb8:
    // 0x4a0cb8: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a0cbc:
    // 0x4a0cbc: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a0cc0:
    // 0x4a0cc0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0cc4:
    // 0x4a0cc4: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x4a0cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_4a0cc8:
    // 0x4a0cc8: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a0cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a0ccc:
    // 0x4a0ccc: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a0cd0:
    // 0x4a0cd0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0cd4:
    // 0x4a0cd4: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x4a0cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_4a0cd8:
    // 0x4a0cd8: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a0cdc:
    // 0x4a0cdc: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a0ce0:
    // 0x4a0ce0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0ce4:
    // 0x4a0ce4: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x4a0ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_4a0ce8:
    // 0x4a0ce8: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a0cec:
    // 0x4a0cec: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a0cf0:
    // 0x4a0cf0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0cf4:
    // 0x4a0cf4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a0cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0cf8:
    // 0x4a0cf8: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a0cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a0cfc:
    // 0x4a0cfc: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a0d00:
    // 0x4a0d00: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0d04:
    // 0x4a0d04: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a0d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a0d08:
    // 0x4a0d08: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a0d08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a0d0c:
    // 0x4a0d0c: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a0d10:
    // 0x4a0d10: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0d14:
    // 0x4a0d14: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a0d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a0d18:
    // 0x4a0d18: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a0d18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a0d1c:
    // 0x4a0d1c: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a0d20:
    // 0x4a0d20: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0d24:
    // 0x4a0d24: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a0d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a0d28:
    // 0x4a0d28: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a0d28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a0d2c:
    // 0x4a0d2c: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4a0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a0d30:
    // 0x4a0d30: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0d34:
    // 0x4a0d34: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x4a0d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_4a0d38:
    // 0x4a0d38: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a0d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a0d3c:
    // 0x4a0d3c: 0x14c7ffcc  bne         $a2, $a3, . + 4 + (-0x34 << 2)
label_4a0d40:
    if (ctx->pc == 0x4A0D40u) {
        ctx->pc = 0x4A0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D3Cu;
        // 0x4a0d40: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0D44u;
        goto label_4a0d44;
    }
    ctx->pc = 0x4A0D3Cu;
    {
        const bool branch_taken_0x4a0d3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x4A0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D3Cu;
        // 0x4a0d40: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d3c) {
            ctx->pc = 0x4A0C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0c70;
        }
    }
    ctx->pc = 0x4A0D44u;
label_4a0d44:
    // 0x4a0d44: 0x0  nop
    ctx->pc = 0x4a0d44u;
    // NOP
label_4a0d48:
    // 0x4a0d48: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0d4c:
    // 0x4a0d4c: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x4a0d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_4a0d50:
    // 0x4a0d50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0d54:
    // 0x4a0d54: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0d58:
    // 0x4a0d58: 0x1600ffa1  bnez        $s0, . + 4 + (-0x5F << 2)
label_4a0d5c:
    if (ctx->pc == 0x4A0D5Cu) {
        ctx->pc = 0x4A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D58u;
        // 0x4a0d5c: 0x7b080000  lq          $t0, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0D60u;
        goto label_4a0d60;
    }
    ctx->pc = 0x4A0D58u;
    {
        const bool branch_taken_0x4a0d58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D58u;
        // 0x4a0d5c: 0x7b080000  lq          $t0, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d58) {
            ctx->pc = 0x4A0BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0be0;
        }
    }
    ctx->pc = 0x4A0D60u;
label_4a0d60:
    // 0x4a0d60: 0xc127ec8  jal         func_49FB20
label_4a0d64:
    if (ctx->pc == 0x4A0D64u) {
        ctx->pc = 0x4A0D68u;
        goto label_4a0d68;
    }
    ctx->pc = 0x4A0D60u;
    SET_GPR_U32(ctx, 31, 0x4A0D68u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A0D60u, 0x4A0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0D68u;
label_4a0d68:
    // 0x4a0d68: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_4a0d6c:
    if (ctx->pc == 0x4A0D6Cu) {
        ctx->pc = 0x4A0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D68u;
        // 0x4a0d6c: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0D70u;
        goto label_4a0d70;
    }
    ctx->pc = 0x4A0D68u;
    {
        const bool branch_taken_0x4a0d68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D68u;
        // 0x4a0d6c: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d68) {
            ctx->pc = 0x4A0DA0u;
            goto label_4a0da0;
        }
    }
    ctx->pc = 0x4A0D70u;
label_4a0d70:
    // 0x4a0d70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a0d74:
    // 0x4a0d74: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a0d78:
    // 0x4a0d78: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a0d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a0d7c:
    // 0x4a0d7c: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x4a0d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4a0d80:
    // 0x4a0d80: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x4a0d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4a0d84:
    // 0x4a0d84: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x4a0d84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_4a0d88:
    // 0x4a0d88: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a0d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a0d8c:
    // 0x4a0d8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a0d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0d90:
    // 0x4a0d90: 0x40f809  jalr        $v0
label_4a0d94:
    if (ctx->pc == 0x4A0D94u) {
        ctx->pc = 0x4A0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D90u;
        // 0x4a0d94: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0D98u;
        goto label_4a0d98;
    }
    ctx->pc = 0x4A0D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0D98u);
        ctx->pc = 0x4A0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D90u;
        // 0x4a0d94: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0D90u, 0x4A0D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0D98u;
label_4a0d98:
    // 0x4a0d98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a0d9c:
    if (ctx->pc == 0x4A0D9Cu) {
        ctx->pc = 0x4A0DA0u;
        goto label_4a0da0;
    }
    ctx->pc = 0x4A0D98u;
    {
        const bool branch_taken_0x4a0d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0d98) {
            ctx->pc = 0x4A0DA4u;
            goto label_4a0da4;
        }
    }
    ctx->pc = 0x4A0DA0u;
label_4a0da0:
    // 0x4a0da0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a0da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0da4:
    // 0x4a0da4: 0x1600ff80  bnez        $s0, . + 4 + (-0x80 << 2)
label_4a0da8:
    if (ctx->pc == 0x4A0DA8u) {
        ctx->pc = 0x4A0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DA4u;
        // 0x4a0da8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0DACu;
        goto label_4a0dac;
    }
    ctx->pc = 0x4A0DA4u;
    {
        const bool branch_taken_0x4a0da4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DA4u;
        // 0x4a0da8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0da4) {
            ctx->pc = 0x4A0BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0ba8;
        }
    }
    ctx->pc = 0x4A0DACu;
label_4a0dac:
    // 0x4a0dac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a0dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a0db0:
    // 0x4a0db0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a0db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a0db4:
    // 0x4a0db4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a0db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a0db8:
    // 0x4a0db8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a0db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0dbc:
    // 0x4a0dbc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a0dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0dc0:
    // 0x4a0dc0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a0dc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0dc4:
    // 0x4a0dc4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4a0dc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0dc8:
    // 0x4a0dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0dcc:
    // 0x4a0dcc: 0x3e00008  jr          $ra
label_4a0dd0:
    if (ctx->pc == 0x4A0DD0u) {
        ctx->pc = 0x4A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DCCu;
        // 0x4a0dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0DD4u;
        goto label_4a0dd4;
    }
    ctx->pc = 0x4A0DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DCCu;
        // 0x4a0dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0DD4u;
label_4a0dd4:
    // 0x4a0dd4: 0x0  nop
    ctx->pc = 0x4a0dd4u;
    // NOP
    ctx->pc = 0x4a0dd8u;
}
