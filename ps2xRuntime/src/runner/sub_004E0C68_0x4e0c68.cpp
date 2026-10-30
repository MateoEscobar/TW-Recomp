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

// Function: sub_004E0C68
// Address: 0x4e0c68 - 0x4e1038
void sub_004E0C68_0x4e0c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0C68_0x4e0c68");
#endif

    switch (ctx->pc) {
        case 0x4e0c68u: goto label_4e0c68;
        case 0x4e0c6cu: goto label_4e0c6c;
        case 0x4e0c70u: goto label_4e0c70;
        case 0x4e0c74u: goto label_4e0c74;
        case 0x4e0c78u: goto label_4e0c78;
        case 0x4e0c7cu: goto label_4e0c7c;
        case 0x4e0c80u: goto label_4e0c80;
        case 0x4e0c84u: goto label_4e0c84;
        case 0x4e0c88u: goto label_4e0c88;
        case 0x4e0c8cu: goto label_4e0c8c;
        case 0x4e0c90u: goto label_4e0c90;
        case 0x4e0c94u: goto label_4e0c94;
        case 0x4e0c98u: goto label_4e0c98;
        case 0x4e0c9cu: goto label_4e0c9c;
        case 0x4e0ca0u: goto label_4e0ca0;
        case 0x4e0ca4u: goto label_4e0ca4;
        case 0x4e0ca8u: goto label_4e0ca8;
        case 0x4e0cacu: goto label_4e0cac;
        case 0x4e0cb0u: goto label_4e0cb0;
        case 0x4e0cb4u: goto label_4e0cb4;
        case 0x4e0cb8u: goto label_4e0cb8;
        case 0x4e0cbcu: goto label_4e0cbc;
        case 0x4e0cc0u: goto label_4e0cc0;
        case 0x4e0cc4u: goto label_4e0cc4;
        case 0x4e0cc8u: goto label_4e0cc8;
        case 0x4e0cccu: goto label_4e0ccc;
        case 0x4e0cd0u: goto label_4e0cd0;
        case 0x4e0cd4u: goto label_4e0cd4;
        case 0x4e0cd8u: goto label_4e0cd8;
        case 0x4e0cdcu: goto label_4e0cdc;
        case 0x4e0ce0u: goto label_4e0ce0;
        case 0x4e0ce4u: goto label_4e0ce4;
        case 0x4e0ce8u: goto label_4e0ce8;
        case 0x4e0cecu: goto label_4e0cec;
        case 0x4e0cf0u: goto label_4e0cf0;
        case 0x4e0cf4u: goto label_4e0cf4;
        case 0x4e0cf8u: goto label_4e0cf8;
        case 0x4e0cfcu: goto label_4e0cfc;
        case 0x4e0d00u: goto label_4e0d00;
        case 0x4e0d04u: goto label_4e0d04;
        case 0x4e0d08u: goto label_4e0d08;
        case 0x4e0d0cu: goto label_4e0d0c;
        case 0x4e0d10u: goto label_4e0d10;
        case 0x4e0d14u: goto label_4e0d14;
        case 0x4e0d18u: goto label_4e0d18;
        case 0x4e0d1cu: goto label_4e0d1c;
        case 0x4e0d20u: goto label_4e0d20;
        case 0x4e0d24u: goto label_4e0d24;
        case 0x4e0d28u: goto label_4e0d28;
        case 0x4e0d2cu: goto label_4e0d2c;
        case 0x4e0d30u: goto label_4e0d30;
        case 0x4e0d34u: goto label_4e0d34;
        case 0x4e0d38u: goto label_4e0d38;
        case 0x4e0d3cu: goto label_4e0d3c;
        case 0x4e0d40u: goto label_4e0d40;
        case 0x4e0d44u: goto label_4e0d44;
        case 0x4e0d48u: goto label_4e0d48;
        case 0x4e0d4cu: goto label_4e0d4c;
        case 0x4e0d50u: goto label_4e0d50;
        case 0x4e0d54u: goto label_4e0d54;
        case 0x4e0d58u: goto label_4e0d58;
        case 0x4e0d5cu: goto label_4e0d5c;
        case 0x4e0d60u: goto label_4e0d60;
        case 0x4e0d64u: goto label_4e0d64;
        case 0x4e0d68u: goto label_4e0d68;
        case 0x4e0d6cu: goto label_4e0d6c;
        case 0x4e0d70u: goto label_4e0d70;
        case 0x4e0d74u: goto label_4e0d74;
        case 0x4e0d78u: goto label_4e0d78;
        case 0x4e0d7cu: goto label_4e0d7c;
        case 0x4e0d80u: goto label_4e0d80;
        case 0x4e0d84u: goto label_4e0d84;
        case 0x4e0d88u: goto label_4e0d88;
        case 0x4e0d8cu: goto label_4e0d8c;
        case 0x4e0d90u: goto label_4e0d90;
        case 0x4e0d94u: goto label_4e0d94;
        case 0x4e0d98u: goto label_4e0d98;
        case 0x4e0d9cu: goto label_4e0d9c;
        case 0x4e0da0u: goto label_4e0da0;
        case 0x4e0da4u: goto label_4e0da4;
        case 0x4e0da8u: goto label_4e0da8;
        case 0x4e0dacu: goto label_4e0dac;
        case 0x4e0db0u: goto label_4e0db0;
        case 0x4e0db4u: goto label_4e0db4;
        case 0x4e0db8u: goto label_4e0db8;
        case 0x4e0dbcu: goto label_4e0dbc;
        case 0x4e0dc0u: goto label_4e0dc0;
        case 0x4e0dc4u: goto label_4e0dc4;
        case 0x4e0dc8u: goto label_4e0dc8;
        case 0x4e0dccu: goto label_4e0dcc;
        case 0x4e0dd0u: goto label_4e0dd0;
        case 0x4e0dd4u: goto label_4e0dd4;
        case 0x4e0dd8u: goto label_4e0dd8;
        case 0x4e0ddcu: goto label_4e0ddc;
        case 0x4e0de0u: goto label_4e0de0;
        case 0x4e0de4u: goto label_4e0de4;
        case 0x4e0de8u: goto label_4e0de8;
        case 0x4e0decu: goto label_4e0dec;
        case 0x4e0df0u: goto label_4e0df0;
        case 0x4e0df4u: goto label_4e0df4;
        case 0x4e0df8u: goto label_4e0df8;
        case 0x4e0dfcu: goto label_4e0dfc;
        case 0x4e0e00u: goto label_4e0e00;
        case 0x4e0e04u: goto label_4e0e04;
        case 0x4e0e08u: goto label_4e0e08;
        case 0x4e0e0cu: goto label_4e0e0c;
        case 0x4e0e10u: goto label_4e0e10;
        case 0x4e0e14u: goto label_4e0e14;
        case 0x4e0e18u: goto label_4e0e18;
        case 0x4e0e1cu: goto label_4e0e1c;
        case 0x4e0e20u: goto label_4e0e20;
        case 0x4e0e24u: goto label_4e0e24;
        case 0x4e0e28u: goto label_4e0e28;
        case 0x4e0e2cu: goto label_4e0e2c;
        case 0x4e0e30u: goto label_4e0e30;
        case 0x4e0e34u: goto label_4e0e34;
        case 0x4e0e38u: goto label_4e0e38;
        case 0x4e0e3cu: goto label_4e0e3c;
        case 0x4e0e40u: goto label_4e0e40;
        case 0x4e0e44u: goto label_4e0e44;
        case 0x4e0e48u: goto label_4e0e48;
        case 0x4e0e4cu: goto label_4e0e4c;
        case 0x4e0e50u: goto label_4e0e50;
        case 0x4e0e54u: goto label_4e0e54;
        case 0x4e0e58u: goto label_4e0e58;
        case 0x4e0e5cu: goto label_4e0e5c;
        case 0x4e0e60u: goto label_4e0e60;
        case 0x4e0e64u: goto label_4e0e64;
        case 0x4e0e68u: goto label_4e0e68;
        case 0x4e0e6cu: goto label_4e0e6c;
        case 0x4e0e70u: goto label_4e0e70;
        case 0x4e0e74u: goto label_4e0e74;
        case 0x4e0e78u: goto label_4e0e78;
        case 0x4e0e7cu: goto label_4e0e7c;
        case 0x4e0e80u: goto label_4e0e80;
        case 0x4e0e84u: goto label_4e0e84;
        case 0x4e0e88u: goto label_4e0e88;
        case 0x4e0e8cu: goto label_4e0e8c;
        case 0x4e0e90u: goto label_4e0e90;
        case 0x4e0e94u: goto label_4e0e94;
        case 0x4e0e98u: goto label_4e0e98;
        case 0x4e0e9cu: goto label_4e0e9c;
        case 0x4e0ea0u: goto label_4e0ea0;
        case 0x4e0ea4u: goto label_4e0ea4;
        case 0x4e0ea8u: goto label_4e0ea8;
        case 0x4e0eacu: goto label_4e0eac;
        case 0x4e0eb0u: goto label_4e0eb0;
        case 0x4e0eb4u: goto label_4e0eb4;
        case 0x4e0eb8u: goto label_4e0eb8;
        case 0x4e0ebcu: goto label_4e0ebc;
        case 0x4e0ec0u: goto label_4e0ec0;
        case 0x4e0ec4u: goto label_4e0ec4;
        case 0x4e0ec8u: goto label_4e0ec8;
        case 0x4e0eccu: goto label_4e0ecc;
        case 0x4e0ed0u: goto label_4e0ed0;
        case 0x4e0ed4u: goto label_4e0ed4;
        case 0x4e0ed8u: goto label_4e0ed8;
        case 0x4e0edcu: goto label_4e0edc;
        case 0x4e0ee0u: goto label_4e0ee0;
        case 0x4e0ee4u: goto label_4e0ee4;
        case 0x4e0ee8u: goto label_4e0ee8;
        case 0x4e0eecu: goto label_4e0eec;
        case 0x4e0ef0u: goto label_4e0ef0;
        case 0x4e0ef4u: goto label_4e0ef4;
        case 0x4e0ef8u: goto label_4e0ef8;
        case 0x4e0efcu: goto label_4e0efc;
        case 0x4e0f00u: goto label_4e0f00;
        case 0x4e0f04u: goto label_4e0f04;
        case 0x4e0f08u: goto label_4e0f08;
        case 0x4e0f0cu: goto label_4e0f0c;
        case 0x4e0f10u: goto label_4e0f10;
        case 0x4e0f14u: goto label_4e0f14;
        case 0x4e0f18u: goto label_4e0f18;
        case 0x4e0f1cu: goto label_4e0f1c;
        case 0x4e0f20u: goto label_4e0f20;
        case 0x4e0f24u: goto label_4e0f24;
        case 0x4e0f28u: goto label_4e0f28;
        case 0x4e0f2cu: goto label_4e0f2c;
        case 0x4e0f30u: goto label_4e0f30;
        case 0x4e0f34u: goto label_4e0f34;
        case 0x4e0f38u: goto label_4e0f38;
        case 0x4e0f3cu: goto label_4e0f3c;
        case 0x4e0f40u: goto label_4e0f40;
        case 0x4e0f44u: goto label_4e0f44;
        case 0x4e0f48u: goto label_4e0f48;
        case 0x4e0f4cu: goto label_4e0f4c;
        case 0x4e0f50u: goto label_4e0f50;
        case 0x4e0f54u: goto label_4e0f54;
        case 0x4e0f58u: goto label_4e0f58;
        case 0x4e0f5cu: goto label_4e0f5c;
        case 0x4e0f60u: goto label_4e0f60;
        case 0x4e0f64u: goto label_4e0f64;
        case 0x4e0f68u: goto label_4e0f68;
        case 0x4e0f6cu: goto label_4e0f6c;
        case 0x4e0f70u: goto label_4e0f70;
        case 0x4e0f74u: goto label_4e0f74;
        case 0x4e0f78u: goto label_4e0f78;
        case 0x4e0f7cu: goto label_4e0f7c;
        case 0x4e0f80u: goto label_4e0f80;
        case 0x4e0f84u: goto label_4e0f84;
        case 0x4e0f88u: goto label_4e0f88;
        case 0x4e0f8cu: goto label_4e0f8c;
        case 0x4e0f90u: goto label_4e0f90;
        case 0x4e0f94u: goto label_4e0f94;
        case 0x4e0f98u: goto label_4e0f98;
        case 0x4e0f9cu: goto label_4e0f9c;
        case 0x4e0fa0u: goto label_4e0fa0;
        case 0x4e0fa4u: goto label_4e0fa4;
        case 0x4e0fa8u: goto label_4e0fa8;
        case 0x4e0facu: goto label_4e0fac;
        case 0x4e0fb0u: goto label_4e0fb0;
        case 0x4e0fb4u: goto label_4e0fb4;
        case 0x4e0fb8u: goto label_4e0fb8;
        case 0x4e0fbcu: goto label_4e0fbc;
        case 0x4e0fc0u: goto label_4e0fc0;
        case 0x4e0fc4u: goto label_4e0fc4;
        case 0x4e0fc8u: goto label_4e0fc8;
        case 0x4e0fccu: goto label_4e0fcc;
        case 0x4e0fd0u: goto label_4e0fd0;
        case 0x4e0fd4u: goto label_4e0fd4;
        case 0x4e0fd8u: goto label_4e0fd8;
        case 0x4e0fdcu: goto label_4e0fdc;
        case 0x4e0fe0u: goto label_4e0fe0;
        case 0x4e0fe4u: goto label_4e0fe4;
        case 0x4e0fe8u: goto label_4e0fe8;
        case 0x4e0fecu: goto label_4e0fec;
        case 0x4e0ff0u: goto label_4e0ff0;
        case 0x4e0ff4u: goto label_4e0ff4;
        case 0x4e0ff8u: goto label_4e0ff8;
        case 0x4e0ffcu: goto label_4e0ffc;
        case 0x4e1000u: goto label_4e1000;
        case 0x4e1004u: goto label_4e1004;
        case 0x4e1008u: goto label_4e1008;
        case 0x4e100cu: goto label_4e100c;
        case 0x4e1010u: goto label_4e1010;
        case 0x4e1014u: goto label_4e1014;
        case 0x4e1018u: goto label_4e1018;
        case 0x4e101cu: goto label_4e101c;
        case 0x4e1020u: goto label_4e1020;
        case 0x4e1024u: goto label_4e1024;
        case 0x4e1028u: goto label_4e1028;
        case 0x4e102cu: goto label_4e102c;
        case 0x4e1030u: goto label_4e1030;
        case 0x4e1034u: goto label_4e1034;
        default: break;
    }

    ctx->pc = 0x4e0c68u;

label_4e0c68:
    // 0x4e0c68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e0c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e0c6c:
    // 0x4e0c6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e0c70:
    // 0x4e0c70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e0c74:
    // 0x4e0c74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e0c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c78:
    // 0x4e0c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e0c7c:
    // 0x4e0c7c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e0c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c80:
    // 0x4e0c80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e0c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e0c84:
    // 0x4e0c84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e0c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c88:
    // 0x4e0c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e0c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e0c8c:
    // 0x4e0c8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0c90:
    // 0x4e0c90: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e0c94:
    if (ctx->pc == 0x4E0C94u) {
        ctx->pc = 0x4E0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C90u;
        // 0x4e0c94: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0C98u;
        goto label_4e0c98;
    }
    ctx->pc = 0x4E0C90u;
    {
        const bool branch_taken_0x4e0c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C90u;
        // 0x4e0c94: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0c90) {
            ctx->pc = 0x4E0CB4u;
            goto label_4e0cb4;
        }
    }
    ctx->pc = 0x4E0C98u;
label_4e0c98:
    // 0x4e0c98: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e0c9c:
    if (ctx->pc == 0x4E0C9Cu) {
        ctx->pc = 0x4E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C98u;
        // 0x4e0c9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0CA0u;
        goto label_4e0ca0;
    }
    ctx->pc = 0x4E0C98u;
    {
        const bool branch_taken_0x4e0c98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C98u;
        // 0x4e0c9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0c98) {
            ctx->pc = 0x4E0CB8u;
            goto label_4e0cb8;
        }
    }
    ctx->pc = 0x4E0CA0u;
label_4e0ca0:
    // 0x4e0ca0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e0ca4:
    // 0x4e0ca4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e0ca8:
    // 0x4e0ca8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e0ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e0cac:
    // 0x4e0cac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e0cb0:
    if (ctx->pc == 0x4E0CB0u) {
        ctx->pc = 0x4E0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0CACu;
        // 0x4e0cb0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0CB4u;
        goto label_4e0cb4;
    }
    ctx->pc = 0x4E0CACu;
    {
        const bool branch_taken_0x4e0cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0CACu;
        // 0x4e0cb0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0cac) {
            ctx->pc = 0x4E0D48u;
            goto label_4e0d48;
        }
    }
    ctx->pc = 0x4E0CB4u;
label_4e0cb4:
    // 0x4e0cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0cb8:
    // 0x4e0cb8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e0cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e0cbc:
    // 0x4e0cbc: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e0cbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e0cc0:
    // 0x4e0cc0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e0cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e0cc4:
    // 0x4e0cc4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e0cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e0cc8:
    // 0x4e0cc8: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e0ccc:
    // 0x4e0ccc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e0cd0:
    // 0x4e0cd0: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e0cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e0cd4:
    // 0x4e0cd4: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e0cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e0cd8:
    // 0x4e0cd8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e0cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e0cdc:
    // 0x4e0cdc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e0cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e0ce0:
    // 0x4e0ce0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e0ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e0ce4:
    // 0x4e0ce4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e0ce8:
    // 0x4e0ce8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e0ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e0cec:
    // 0x4e0cec: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e0cf0:
    // 0x4e0cf0: 0x40f809  jalr        $v0
label_4e0cf4:
    if (ctx->pc == 0x4E0CF4u) {
        ctx->pc = 0x4E0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0CF0u;
        // 0x4e0cf4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0CF8u;
        goto label_4e0cf8;
    }
    ctx->pc = 0x4E0CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E0CF8u);
        ctx->pc = 0x4E0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0CF0u;
        // 0x4e0cf4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0CF0u, 0x4E0CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E0CF8u;
label_4e0cf8:
    // 0x4e0cf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e0cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0cfc:
    // 0x4e0cfc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e0d00:
    // 0x4e0d00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e0d04:
    if (ctx->pc == 0x4E0D04u) {
        ctx->pc = 0x4E0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D00u;
        // 0x4e0d04: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D08u;
        goto label_4e0d08;
    }
    ctx->pc = 0x4E0D00u;
    {
        const bool branch_taken_0x4e0d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D00u;
        // 0x4e0d04: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0d00) {
            ctx->pc = 0x4E0D18u;
            goto label_4e0d18;
        }
    }
    ctx->pc = 0x4E0D08u;
label_4e0d08:
    // 0x4e0d08: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e0d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e0d0c:
    // 0x4e0d0c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e0d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e0d10:
    // 0x4e0d10: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e0d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e0d14:
    // 0x4e0d14: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e0d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e0d18:
    // 0x4e0d18: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e0d1c:
    // 0x4e0d1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0d20:
    // 0x4e0d20: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e0d24:
    if (ctx->pc == 0x4E0D24u) {
        ctx->pc = 0x4E0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D20u;
        // 0x4e0d24: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D28u;
        goto label_4e0d28;
    }
    ctx->pc = 0x4E0D20u;
    {
        const bool branch_taken_0x4e0d20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0d20) {
            ctx->pc = 0x4E0D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0D20u;
            // 0x4e0d24: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0D38u;
            goto label_4e0d38;
        }
    }
    ctx->pc = 0x4E0D28u;
label_4e0d28:
    // 0x4e0d28: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e0d2c:
    // 0x4e0d2c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0d30:
    // 0x4e0d30: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e0d34:
    if (ctx->pc == 0x4E0D34u) {
        ctx->pc = 0x4E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D30u;
        // 0x4e0d34: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D38u;
        goto label_4e0d38;
    }
    ctx->pc = 0x4E0D30u;
    {
        const bool branch_taken_0x4e0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D30u;
        // 0x4e0d34: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0d30) {
            ctx->pc = 0x4E0DBCu;
            goto label_4e0dbc;
        }
    }
    ctx->pc = 0x4E0D38u;
label_4e0d38:
    // 0x4e0d38: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e0d3c:
    if (ctx->pc == 0x4E0D3Cu) {
        ctx->pc = 0x4E0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D38u;
        // 0x4e0d3c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D40u;
        goto label_4e0d40;
    }
    ctx->pc = 0x4E0D38u;
    {
        const bool branch_taken_0x4e0d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e0d38) {
            ctx->pc = 0x4E0D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0D38u;
            // 0x4e0d3c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0DBCu;
            goto label_4e0dbc;
        }
    }
    ctx->pc = 0x4E0D40u;
label_4e0d40:
    // 0x4e0d40: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e0d44:
    if (ctx->pc == 0x4E0D44u) {
        ctx->pc = 0x4E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D40u;
        // 0x4e0d44: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D48u;
        goto label_4e0d48;
    }
    ctx->pc = 0x4E0D40u;
    {
        const bool branch_taken_0x4e0d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D40u;
        // 0x4e0d44: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0d40) {
            ctx->pc = 0x4E0DC0u;
            goto label_4e0dc0;
        }
    }
    ctx->pc = 0x4E0D48u;
label_4e0d48:
    // 0x4e0d48: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e0d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e0d4c:
    // 0x4e0d4c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e0d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e0d50:
    // 0x4e0d50: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e0d50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e0d54:
    // 0x4e0d54: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e0d54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e0d58:
    // 0x4e0d58: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e0d5c:
    // 0x4e0d5c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e0d60:
    // 0x4e0d60: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e0d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e0d64:
    // 0x4e0d64: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e0d64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e0d68:
    // 0x4e0d68: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e0d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e0d6c:
    // 0x4e0d6c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e0d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e0d70:
    // 0x4e0d70: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e0d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e0d74:
    // 0x4e0d74: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e0d78:
    // 0x4e0d78: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e0d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e0d7c:
    // 0x4e0d7c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e0d80:
    // 0x4e0d80: 0x40f809  jalr        $v0
label_4e0d84:
    if (ctx->pc == 0x4E0D84u) {
        ctx->pc = 0x4E0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D80u;
        // 0x4e0d84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D88u;
        goto label_4e0d88;
    }
    ctx->pc = 0x4E0D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E0D88u);
        ctx->pc = 0x4E0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D80u;
        // 0x4e0d84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0D80u, 0x4E0D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E0D88u;
label_4e0d88:
    // 0x4e0d88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e0d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0d8c:
    // 0x4e0d8c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e0d90:
    // 0x4e0d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e0d94:
    if (ctx->pc == 0x4E0D94u) {
        ctx->pc = 0x4E0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D90u;
        // 0x4e0d94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0D98u;
        goto label_4e0d98;
    }
    ctx->pc = 0x4E0D90u;
    {
        const bool branch_taken_0x4e0d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0D90u;
        // 0x4e0d94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0d90) {
            ctx->pc = 0x4E0DA8u;
            goto label_4e0da8;
        }
    }
    ctx->pc = 0x4E0D98u;
label_4e0d98:
    // 0x4e0d98: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e0d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e0d9c:
    // 0x4e0d9c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e0d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e0da0:
    // 0x4e0da0: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e0da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e0da4:
    // 0x4e0da4: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e0da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e0da8:
    // 0x4e0da8: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e0dac:
    // 0x4e0dac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0db0:
    // 0x4e0db0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e0db4:
    // 0x4e0db4: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e0db8:
    if (ctx->pc == 0x4E0DB8u) {
        ctx->pc = 0x4E0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0DB4u;
        // 0x4e0db8: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0DBCu;
        goto label_4e0dbc;
    }
    ctx->pc = 0x4E0DB4u;
    {
        const bool branch_taken_0x4e0db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e0db4) {
            ctx->pc = 0x4E0DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0DB4u;
            // 0x4e0db8: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0DBCu;
            goto label_4e0dbc;
        }
    }
    ctx->pc = 0x4E0DBCu;
label_4e0dbc:
    // 0x4e0dbc: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e0dc0:
    // 0x4e0dc0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e0dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e0dc4:
    // 0x4e0dc4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e0dc8:
    // 0x4e0dc8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e0dcc:
    // 0x4e0dcc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0dd0:
    // 0x4e0dd0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e0dd4:
    // 0x4e0dd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0dd8:
    // 0x4e0dd8: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e0ddc:
    if (ctx->pc == 0x4E0DDCu) {
        ctx->pc = 0x4E0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0DD8u;
        // 0x4e0ddc: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0DE0u;
        goto label_4e0de0;
    }
    ctx->pc = 0x4E0DD8u;
    {
        const bool branch_taken_0x4e0dd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0DD8u;
        // 0x4e0ddc: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0dd8) {
            ctx->pc = 0x4E0FFCu;
            goto label_4e0ffc;
        }
    }
    ctx->pc = 0x4E0DE0u;
label_4e0de0:
    // 0x4e0de0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e0de4:
    // 0x4e0de4: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e0de8:
    if (ctx->pc == 0x4E0DE8u) {
        ctx->pc = 0x4E0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0DE4u;
        // 0x4e0de8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0DECu;
        goto label_4e0dec;
    }
    ctx->pc = 0x4E0DE4u;
    {
        const bool branch_taken_0x4e0de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0de4) {
            ctx->pc = 0x4E0DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0DE4u;
            // 0x4e0de8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1000u;
            goto label_4e1000;
        }
    }
    ctx->pc = 0x4E0DECu;
label_4e0dec:
    // 0x4e0dec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e0decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e0df0:
    // 0x4e0df0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0df4:
    // 0x4e0df4: 0x0  nop
    ctx->pc = 0x4e0df4u;
    // NOP
label_4e0df8:
    // 0x4e0df8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0dfc:
    // 0x4e0dfc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e0e00:
    // 0x4e0e00: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e0e04:
    if (ctx->pc == 0x4E0E04u) {
        ctx->pc = 0x4E0E08u;
        goto label_4e0e08;
    }
    ctx->pc = 0x4E0E00u;
    {
        const bool branch_taken_0x4e0e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e0e00) {
            ctx->pc = 0x4E0EECu;
            goto label_4e0eec;
        }
    }
    ctx->pc = 0x4E0E08u;
label_4e0e08:
    // 0x4e0e08: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e0e0c:
    // 0x4e0e0c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e0e10:
    if (ctx->pc == 0x4E0E10u) {
        ctx->pc = 0x4E0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E0Cu;
        // 0x4e0e10: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E14u;
        goto label_4e0e14;
    }
    ctx->pc = 0x4E0E0Cu;
    {
        const bool branch_taken_0x4e0e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0e0c) {
            ctx->pc = 0x4E0E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E0Cu;
            // 0x4e0e10: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0E2Cu;
            goto label_4e0e2c;
        }
    }
    ctx->pc = 0x4E0E14u;
label_4e0e14:
    // 0x4e0e14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e0e18:
    // 0x4e0e18: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e0e1c:
    if (ctx->pc == 0x4E0E1Cu) {
        ctx->pc = 0x4E0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E18u;
        // 0x4e0e1c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E20u;
        goto label_4e0e20;
    }
    ctx->pc = 0x4E0E18u;
    {
        const bool branch_taken_0x4e0e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0e18) {
            ctx->pc = 0x4E0E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E18u;
            // 0x4e0e1c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0E2Cu;
            goto label_4e0e2c;
        }
    }
    ctx->pc = 0x4E0E20u;
label_4e0e20:
    // 0x4e0e20: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e0e24:
    // 0x4e0e24: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e0e28:
    if (ctx->pc == 0x4E0E28u) {
        ctx->pc = 0x4E0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E24u;
        // 0x4e0e28: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E2Cu;
        goto label_4e0e2c;
    }
    ctx->pc = 0x4E0E24u;
    {
        const bool branch_taken_0x4e0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E24u;
        // 0x4e0e28: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0e24) {
            ctx->pc = 0x4E0F08u;
            goto label_4e0f08;
        }
    }
    ctx->pc = 0x4E0E2Cu;
label_4e0e2c:
    // 0x4e0e2c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e0e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0e30:
    // 0x4e0e30: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e0e34:
    if (ctx->pc == 0x4E0E34u) {
        ctx->pc = 0x4E0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E30u;
        // 0x4e0e34: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E38u;
        goto label_4e0e38;
    }
    ctx->pc = 0x4E0E30u;
    {
        const bool branch_taken_0x4e0e30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e0e30) {
            ctx->pc = 0x4E0E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E30u;
            // 0x4e0e34: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0E88u;
            goto label_4e0e88;
        }
    }
    ctx->pc = 0x4E0E38u;
label_4e0e38:
    // 0x4e0e38: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0e3c:
    // 0x4e0e3c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e0e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e0e40:
    // 0x4e0e40: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e0e44:
    // 0x4e0e44: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0e48:
    // 0x4e0e48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0e4c:
    if (ctx->pc == 0x4E0E4Cu) {
        ctx->pc = 0x4E0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E48u;
        // 0x4e0e4c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E50u;
        goto label_4e0e50;
    }
    ctx->pc = 0x4E0E48u;
    {
        const bool branch_taken_0x4e0e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0e48) {
            ctx->pc = 0x4E0E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E48u;
            // 0x4e0e4c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0E50u;
            goto label_4e0e50;
        }
    }
    ctx->pc = 0x4E0E50u;
label_4e0e50:
    // 0x4e0e50: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0e54:
    // 0x4e0e54: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e0e58:
    // 0x4e0e58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0e5c:
    // 0x4e0e5c: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e0e60:
    if (ctx->pc == 0x4E0E60u) {
        ctx->pc = 0x4E0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E5Cu;
        // 0x4e0e60: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E64u;
        goto label_4e0e64;
    }
    ctx->pc = 0x4E0E5Cu;
    {
        const bool branch_taken_0x4e0e5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0e5c) {
            ctx->pc = 0x4E0E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E5Cu;
            // 0x4e0e60: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0E6Cu;
            goto label_4e0e6c;
        }
    }
    ctx->pc = 0x4E0E64u;
label_4e0e64:
    // 0x4e0e64: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0e68:
    if (ctx->pc == 0x4E0E68u) {
        ctx->pc = 0x4E0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E64u;
        // 0x4e0e68: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E6Cu;
        goto label_4e0e6c;
    }
    ctx->pc = 0x4E0E64u;
    {
        const bool branch_taken_0x4e0e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E64u;
        // 0x4e0e68: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0e64) {
            ctx->pc = 0x4E0E7Cu;
            goto label_4e0e7c;
        }
    }
    ctx->pc = 0x4E0E6Cu;
label_4e0e6c:
    // 0x4e0e6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e0e70:
    // 0x4e0e70: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e0e74:
    if (ctx->pc == 0x4E0E74u) {
        ctx->pc = 0x4E0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0E70u;
        // 0x4e0e74: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0E78u;
        goto label_4e0e78;
    }
    ctx->pc = 0x4E0E70u;
    {
        const bool branch_taken_0x4e0e70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0e70) {
            ctx->pc = 0x4E0E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E70u;
            // 0x4e0e74: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0E7Cu;
            goto label_4e0e7c;
        }
    }
    ctx->pc = 0x4E0E78u;
label_4e0e78:
    // 0x4e0e78: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e0e7c:
    // 0x4e0e7c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e0e80:
    // 0x4e0e80: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e0e84:
    // 0x4e0e84: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0e88:
    // 0x4e0e88: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e0e8c:
    // 0x4e0e8c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0e90:
    // 0x4e0e90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0e94:
    // 0x4e0e94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e0e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e0e98:
    // 0x4e0e98: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0e9c:
    // 0x4e0e9c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e0e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0ea0:
    // 0x4e0ea0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e0ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0ea4:
    // 0x4e0ea4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0ea8:
    // 0x4e0ea8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e0eac:
    // 0x4e0eac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0eb0:
    // 0x4e0eb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0eb4:
    if (ctx->pc == 0x4E0EB4u) {
        ctx->pc = 0x4E0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EB0u;
        // 0x4e0eb4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0EB8u;
        goto label_4e0eb8;
    }
    ctx->pc = 0x4E0EB0u;
    {
        const bool branch_taken_0x4e0eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0eb0) {
            ctx->pc = 0x4E0EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0EB0u;
            // 0x4e0eb4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0EB8u;
            goto label_4e0eb8;
        }
    }
    ctx->pc = 0x4E0EB8u;
label_4e0eb8:
    // 0x4e0eb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e0ebc:
    // 0x4e0ebc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e0ec0:
    // 0x4e0ec0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0ec4:
    // 0x4e0ec4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e0ec8:
    if (ctx->pc == 0x4E0EC8u) {
        ctx->pc = 0x4E0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EC4u;
        // 0x4e0ec8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0ECCu;
        goto label_4e0ecc;
    }
    ctx->pc = 0x4E0EC4u;
    {
        const bool branch_taken_0x4e0ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0ec4) {
            ctx->pc = 0x4E0EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0EC4u;
            // 0x4e0ec8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0ED4u;
            goto label_4e0ed4;
        }
    }
    ctx->pc = 0x4E0ECCu;
label_4e0ecc:
    // 0x4e0ecc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0ed0:
    if (ctx->pc == 0x4E0ED0u) {
        ctx->pc = 0x4E0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0ECCu;
        // 0x4e0ed0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0ED4u;
        goto label_4e0ed4;
    }
    ctx->pc = 0x4E0ECCu;
    {
        const bool branch_taken_0x4e0ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0ECCu;
        // 0x4e0ed0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0ecc) {
            ctx->pc = 0x4E0EE4u;
            goto label_4e0ee4;
        }
    }
    ctx->pc = 0x4E0ED4u;
label_4e0ed4:
    // 0x4e0ed4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e0ed8:
    // 0x4e0ed8: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e0edc:
    if (ctx->pc == 0x4E0EDCu) {
        ctx->pc = 0x4E0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0ED8u;
        // 0x4e0edc: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0EE0u;
        goto label_4e0ee0;
    }
    ctx->pc = 0x4E0ED8u;
    {
        const bool branch_taken_0x4e0ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0ed8) {
            ctx->pc = 0x4E0EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0ED8u;
            // 0x4e0edc: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0EE4u;
            goto label_4e0ee4;
        }
    }
    ctx->pc = 0x4E0EE0u;
label_4e0ee0:
    // 0x4e0ee0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e0ee4:
    // 0x4e0ee4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e0ee8:
    if (ctx->pc == 0x4E0EE8u) {
        ctx->pc = 0x4E0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EE4u;
        // 0x4e0ee8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0EECu;
        goto label_4e0eec;
    }
    ctx->pc = 0x4E0EE4u;
    {
        const bool branch_taken_0x4e0ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EE4u;
        // 0x4e0ee8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0ee4) {
            ctx->pc = 0x4E0FDCu;
            goto label_4e0fdc;
        }
    }
    ctx->pc = 0x4E0EECu;
label_4e0eec:
    // 0x4e0eec: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e0ef0:
    if (ctx->pc == 0x4E0EF0u) {
        ctx->pc = 0x4E0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EECu;
        // 0x4e0ef0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0EF4u;
        goto label_4e0ef4;
    }
    ctx->pc = 0x4E0EECu;
    {
        const bool branch_taken_0x4e0eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0eec) {
            ctx->pc = 0x4E0EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0EECu;
            // 0x4e0ef0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0F20u;
            goto label_4e0f20;
        }
    }
    ctx->pc = 0x4E0EF4u;
label_4e0ef4:
    // 0x4e0ef4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e0ef8:
    // 0x4e0ef8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e0efc:
    if (ctx->pc == 0x4E0EFCu) {
        ctx->pc = 0x4E0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EF8u;
        // 0x4e0efc: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F00u;
        goto label_4e0f00;
    }
    ctx->pc = 0x4E0EF8u;
    {
        const bool branch_taken_0x4e0ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0ef8) {
            ctx->pc = 0x4E0EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0EF8u;
            // 0x4e0efc: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0F20u;
            goto label_4e0f20;
        }
    }
    ctx->pc = 0x4E0F00u;
label_4e0f00:
    // 0x4e0f00: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e0f04:
    // 0x4e0f04: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e0f08:
    // 0x4e0f08: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0f0c:
    // 0x4e0f0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e0f10:
    // 0x4e0f10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e0f14:
    // 0x4e0f14: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0f18:
    // 0x4e0f18: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e0f1c:
    if (ctx->pc == 0x4E0F1Cu) {
        ctx->pc = 0x4E0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F18u;
        // 0x4e0f1c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F20u;
        goto label_4e0f20;
    }
    ctx->pc = 0x4E0F18u;
    {
        const bool branch_taken_0x4e0f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F18u;
        // 0x4e0f1c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0f18) {
            ctx->pc = 0x4E0FE0u;
            goto label_4e0fe0;
        }
    }
    ctx->pc = 0x4E0F20u;
label_4e0f20:
    // 0x4e0f20: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e0f24:
    // 0x4e0f24: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e0f28:
    if (ctx->pc == 0x4E0F28u) {
        ctx->pc = 0x4E0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F24u;
        // 0x4e0f28: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F2Cu;
        goto label_4e0f2c;
    }
    ctx->pc = 0x4E0F24u;
    {
        const bool branch_taken_0x4e0f24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e0f24) {
            ctx->pc = 0x4E0F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0F24u;
            // 0x4e0f28: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0F7Cu;
            goto label_4e0f7c;
        }
    }
    ctx->pc = 0x4E0F2Cu;
label_4e0f2c:
    // 0x4e0f2c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0f30:
    // 0x4e0f30: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e0f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e0f34:
    // 0x4e0f34: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e0f38:
    // 0x4e0f38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0f3c:
    // 0x4e0f3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0f40:
    if (ctx->pc == 0x4E0F40u) {
        ctx->pc = 0x4E0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F3Cu;
        // 0x4e0f40: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F44u;
        goto label_4e0f44;
    }
    ctx->pc = 0x4E0F3Cu;
    {
        const bool branch_taken_0x4e0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0f3c) {
            ctx->pc = 0x4E0F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0F3Cu;
            // 0x4e0f40: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0F44u;
            goto label_4e0f44;
        }
    }
    ctx->pc = 0x4E0F44u;
label_4e0f44:
    // 0x4e0f44: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0f48:
    // 0x4e0f48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e0f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e0f4c:
    // 0x4e0f4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0f50:
    // 0x4e0f50: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e0f54:
    if (ctx->pc == 0x4E0F54u) {
        ctx->pc = 0x4E0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F50u;
        // 0x4e0f54: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F58u;
        goto label_4e0f58;
    }
    ctx->pc = 0x4E0F50u;
    {
        const bool branch_taken_0x4e0f50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0f50) {
            ctx->pc = 0x4E0F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0F50u;
            // 0x4e0f54: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0F60u;
            goto label_4e0f60;
        }
    }
    ctx->pc = 0x4E0F58u;
label_4e0f58:
    // 0x4e0f58: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0f5c:
    if (ctx->pc == 0x4E0F5Cu) {
        ctx->pc = 0x4E0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F58u;
        // 0x4e0f5c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F60u;
        goto label_4e0f60;
    }
    ctx->pc = 0x4E0F58u;
    {
        const bool branch_taken_0x4e0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F58u;
        // 0x4e0f5c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0f58) {
            ctx->pc = 0x4E0F70u;
            goto label_4e0f70;
        }
    }
    ctx->pc = 0x4E0F60u;
label_4e0f60:
    // 0x4e0f60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e0f64:
    // 0x4e0f64: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e0f68:
    if (ctx->pc == 0x4E0F68u) {
        ctx->pc = 0x4E0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F64u;
        // 0x4e0f68: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0F6Cu;
        goto label_4e0f6c;
    }
    ctx->pc = 0x4E0F64u;
    {
        const bool branch_taken_0x4e0f64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0f64) {
            ctx->pc = 0x4E0F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0F64u;
            // 0x4e0f68: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0F70u;
            goto label_4e0f70;
        }
    }
    ctx->pc = 0x4E0F6Cu;
label_4e0f6c:
    // 0x4e0f6c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e0f70:
    // 0x4e0f70: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e0f74:
    // 0x4e0f74: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e0f78:
    // 0x4e0f78: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0f7c:
    // 0x4e0f7c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e0f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e0f80:
    // 0x4e0f80: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0f84:
    // 0x4e0f84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0f88:
    // 0x4e0f88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e0f8c:
    // 0x4e0f8c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0f90:
    // 0x4e0f90: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0f94:
    // 0x4e0f94: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e0f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0f98:
    // 0x4e0f98: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e0f9c:
    // 0x4e0f9c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e0fa0:
    // 0x4e0fa0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e0fa4:
    // 0x4e0fa4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0fa8:
    if (ctx->pc == 0x4E0FA8u) {
        ctx->pc = 0x4E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FA4u;
        // 0x4e0fa8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0FACu;
        goto label_4e0fac;
    }
    ctx->pc = 0x4E0FA4u;
    {
        const bool branch_taken_0x4e0fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0fa4) {
            ctx->pc = 0x4E0FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0FA4u;
            // 0x4e0fa8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0FACu;
            goto label_4e0fac;
        }
    }
    ctx->pc = 0x4E0FACu;
label_4e0fac:
    // 0x4e0fac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e0fb0:
    // 0x4e0fb0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e0fb4:
    // 0x4e0fb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0fb8:
    // 0x4e0fb8: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e0fbc:
    if (ctx->pc == 0x4E0FBCu) {
        ctx->pc = 0x4E0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FB8u;
        // 0x4e0fbc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0FC0u;
        goto label_4e0fc0;
    }
    ctx->pc = 0x4E0FB8u;
    {
        const bool branch_taken_0x4e0fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0fb8) {
            ctx->pc = 0x4E0FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0FB8u;
            // 0x4e0fbc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0FC8u;
            goto label_4e0fc8;
        }
    }
    ctx->pc = 0x4E0FC0u;
label_4e0fc0:
    // 0x4e0fc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0fc4:
    if (ctx->pc == 0x4E0FC4u) {
        ctx->pc = 0x4E0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FC0u;
        // 0x4e0fc4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0FC8u;
        goto label_4e0fc8;
    }
    ctx->pc = 0x4E0FC0u;
    {
        const bool branch_taken_0x4e0fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FC0u;
        // 0x4e0fc4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0fc0) {
            ctx->pc = 0x4E0FD8u;
            goto label_4e0fd8;
        }
    }
    ctx->pc = 0x4E0FC8u;
label_4e0fc8:
    // 0x4e0fc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e0fcc:
    // 0x4e0fcc: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e0fd0:
    if (ctx->pc == 0x4E0FD0u) {
        ctx->pc = 0x4E0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FCCu;
        // 0x4e0fd0: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0FD4u;
        goto label_4e0fd4;
    }
    ctx->pc = 0x4E0FCCu;
    {
        const bool branch_taken_0x4e0fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0fcc) {
            ctx->pc = 0x4E0FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0FCCu;
            // 0x4e0fd0: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0FD8u;
            goto label_4e0fd8;
        }
    }
    ctx->pc = 0x4E0FD4u;
label_4e0fd4:
    // 0x4e0fd4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e0fd8:
    // 0x4e0fd8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e0fdc:
    // 0x4e0fdc: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e0fe0:
    // 0x4e0fe0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0fe4:
    // 0x4e0fe4: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e0fe8:
    if (ctx->pc == 0x4E0FE8u) {
        ctx->pc = 0x4E0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FE4u;
        // 0x4e0fe8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0FECu;
        goto label_4e0fec;
    }
    ctx->pc = 0x4E0FE4u;
    {
        const bool branch_taken_0x4e0fe4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e0fe4) {
            ctx->pc = 0x4E0FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0FE4u;
            // 0x4e0fe8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1000u;
            goto label_4e1000;
        }
    }
    ctx->pc = 0x4E0FECu;
label_4e0fec:
    // 0x4e0fec: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0ff0:
    // 0x4e0ff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e0ff4:
    // 0x4e0ff4: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e0ff8:
    if (ctx->pc == 0x4E0FF8u) {
        ctx->pc = 0x4E0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FF4u;
        // 0x4e0ff8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0FFCu;
        goto label_4e0ffc;
    }
    ctx->pc = 0x4E0FF4u;
    {
        const bool branch_taken_0x4e0ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0ff4) {
            ctx->pc = 0x4E0FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0FF4u;
            // 0x4e0ff8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0df8;
        }
    }
    ctx->pc = 0x4E0FFCu;
label_4e0ffc:
    // 0x4e0ffc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1000:
    // 0x4e1000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e1004:
    // 0x4e1004: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e1004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e1008:
    // 0x4e1008: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e1008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e100c:
    // 0x4e100c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e100cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e1010:
    // 0x4e1010: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e1010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1014:
    // 0x4e1014: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e1014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e1018:
    // 0x4e1018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e1018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e101c:
    // 0x4e101c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e1020:
    // 0x4e1020: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e1020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e1024:
    // 0x4e1024: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e1024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e1028:
    // 0x4e1028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e102c:
    // 0x4e102c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e102cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1030:
    // 0x4e1030: 0x3e00008  jr          $ra
label_4e1034:
    if (ctx->pc == 0x4E1034u) {
        ctx->pc = 0x4E1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1030u;
        // 0x4e1034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1038u;
        goto label_fallthrough_0x4e1030;
    }
    ctx->pc = 0x4E1030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1030u;
        // 0x4e1034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e1030:
    ctx->pc = 0x4E1038u;
}
