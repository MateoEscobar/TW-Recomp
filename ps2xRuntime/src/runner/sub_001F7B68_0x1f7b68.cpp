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

// Function: sub_001F7B68
// Address: 0x1f7b68 - 0x1f7eb8
void sub_001F7B68_0x1f7b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7B68_0x1f7b68");
#endif

    switch (ctx->pc) {
        case 0x1f7b68u: goto label_1f7b68;
        case 0x1f7b6cu: goto label_1f7b6c;
        case 0x1f7b70u: goto label_1f7b70;
        case 0x1f7b74u: goto label_1f7b74;
        case 0x1f7b78u: goto label_1f7b78;
        case 0x1f7b7cu: goto label_1f7b7c;
        case 0x1f7b80u: goto label_1f7b80;
        case 0x1f7b84u: goto label_1f7b84;
        case 0x1f7b88u: goto label_1f7b88;
        case 0x1f7b8cu: goto label_1f7b8c;
        case 0x1f7b90u: goto label_1f7b90;
        case 0x1f7b94u: goto label_1f7b94;
        case 0x1f7b98u: goto label_1f7b98;
        case 0x1f7b9cu: goto label_1f7b9c;
        case 0x1f7ba0u: goto label_1f7ba0;
        case 0x1f7ba4u: goto label_1f7ba4;
        case 0x1f7ba8u: goto label_1f7ba8;
        case 0x1f7bacu: goto label_1f7bac;
        case 0x1f7bb0u: goto label_1f7bb0;
        case 0x1f7bb4u: goto label_1f7bb4;
        case 0x1f7bb8u: goto label_1f7bb8;
        case 0x1f7bbcu: goto label_1f7bbc;
        case 0x1f7bc0u: goto label_1f7bc0;
        case 0x1f7bc4u: goto label_1f7bc4;
        case 0x1f7bc8u: goto label_1f7bc8;
        case 0x1f7bccu: goto label_1f7bcc;
        case 0x1f7bd0u: goto label_1f7bd0;
        case 0x1f7bd4u: goto label_1f7bd4;
        case 0x1f7bd8u: goto label_1f7bd8;
        case 0x1f7bdcu: goto label_1f7bdc;
        case 0x1f7be0u: goto label_1f7be0;
        case 0x1f7be4u: goto label_1f7be4;
        case 0x1f7be8u: goto label_1f7be8;
        case 0x1f7becu: goto label_1f7bec;
        case 0x1f7bf0u: goto label_1f7bf0;
        case 0x1f7bf4u: goto label_1f7bf4;
        case 0x1f7bf8u: goto label_1f7bf8;
        case 0x1f7bfcu: goto label_1f7bfc;
        case 0x1f7c00u: goto label_1f7c00;
        case 0x1f7c04u: goto label_1f7c04;
        case 0x1f7c08u: goto label_1f7c08;
        case 0x1f7c0cu: goto label_1f7c0c;
        case 0x1f7c10u: goto label_1f7c10;
        case 0x1f7c14u: goto label_1f7c14;
        case 0x1f7c18u: goto label_1f7c18;
        case 0x1f7c1cu: goto label_1f7c1c;
        case 0x1f7c20u: goto label_1f7c20;
        case 0x1f7c24u: goto label_1f7c24;
        case 0x1f7c28u: goto label_1f7c28;
        case 0x1f7c2cu: goto label_1f7c2c;
        case 0x1f7c30u: goto label_1f7c30;
        case 0x1f7c34u: goto label_1f7c34;
        case 0x1f7c38u: goto label_1f7c38;
        case 0x1f7c3cu: goto label_1f7c3c;
        case 0x1f7c40u: goto label_1f7c40;
        case 0x1f7c44u: goto label_1f7c44;
        case 0x1f7c48u: goto label_1f7c48;
        case 0x1f7c4cu: goto label_1f7c4c;
        case 0x1f7c50u: goto label_1f7c50;
        case 0x1f7c54u: goto label_1f7c54;
        case 0x1f7c58u: goto label_1f7c58;
        case 0x1f7c5cu: goto label_1f7c5c;
        case 0x1f7c60u: goto label_1f7c60;
        case 0x1f7c64u: goto label_1f7c64;
        case 0x1f7c68u: goto label_1f7c68;
        case 0x1f7c6cu: goto label_1f7c6c;
        case 0x1f7c70u: goto label_1f7c70;
        case 0x1f7c74u: goto label_1f7c74;
        case 0x1f7c78u: goto label_1f7c78;
        case 0x1f7c7cu: goto label_1f7c7c;
        case 0x1f7c80u: goto label_1f7c80;
        case 0x1f7c84u: goto label_1f7c84;
        case 0x1f7c88u: goto label_1f7c88;
        case 0x1f7c8cu: goto label_1f7c8c;
        case 0x1f7c90u: goto label_1f7c90;
        case 0x1f7c94u: goto label_1f7c94;
        case 0x1f7c98u: goto label_1f7c98;
        case 0x1f7c9cu: goto label_1f7c9c;
        case 0x1f7ca0u: goto label_1f7ca0;
        case 0x1f7ca4u: goto label_1f7ca4;
        case 0x1f7ca8u: goto label_1f7ca8;
        case 0x1f7cacu: goto label_1f7cac;
        case 0x1f7cb0u: goto label_1f7cb0;
        case 0x1f7cb4u: goto label_1f7cb4;
        case 0x1f7cb8u: goto label_1f7cb8;
        case 0x1f7cbcu: goto label_1f7cbc;
        case 0x1f7cc0u: goto label_1f7cc0;
        case 0x1f7cc4u: goto label_1f7cc4;
        case 0x1f7cc8u: goto label_1f7cc8;
        case 0x1f7cccu: goto label_1f7ccc;
        case 0x1f7cd0u: goto label_1f7cd0;
        case 0x1f7cd4u: goto label_1f7cd4;
        case 0x1f7cd8u: goto label_1f7cd8;
        case 0x1f7cdcu: goto label_1f7cdc;
        case 0x1f7ce0u: goto label_1f7ce0;
        case 0x1f7ce4u: goto label_1f7ce4;
        case 0x1f7ce8u: goto label_1f7ce8;
        case 0x1f7cecu: goto label_1f7cec;
        case 0x1f7cf0u: goto label_1f7cf0;
        case 0x1f7cf4u: goto label_1f7cf4;
        case 0x1f7cf8u: goto label_1f7cf8;
        case 0x1f7cfcu: goto label_1f7cfc;
        case 0x1f7d00u: goto label_1f7d00;
        case 0x1f7d04u: goto label_1f7d04;
        case 0x1f7d08u: goto label_1f7d08;
        case 0x1f7d0cu: goto label_1f7d0c;
        case 0x1f7d10u: goto label_1f7d10;
        case 0x1f7d14u: goto label_1f7d14;
        case 0x1f7d18u: goto label_1f7d18;
        case 0x1f7d1cu: goto label_1f7d1c;
        case 0x1f7d20u: goto label_1f7d20;
        case 0x1f7d24u: goto label_1f7d24;
        case 0x1f7d28u: goto label_1f7d28;
        case 0x1f7d2cu: goto label_1f7d2c;
        case 0x1f7d30u: goto label_1f7d30;
        case 0x1f7d34u: goto label_1f7d34;
        case 0x1f7d38u: goto label_1f7d38;
        case 0x1f7d3cu: goto label_1f7d3c;
        case 0x1f7d40u: goto label_1f7d40;
        case 0x1f7d44u: goto label_1f7d44;
        case 0x1f7d48u: goto label_1f7d48;
        case 0x1f7d4cu: goto label_1f7d4c;
        case 0x1f7d50u: goto label_1f7d50;
        case 0x1f7d54u: goto label_1f7d54;
        case 0x1f7d58u: goto label_1f7d58;
        case 0x1f7d5cu: goto label_1f7d5c;
        case 0x1f7d60u: goto label_1f7d60;
        case 0x1f7d64u: goto label_1f7d64;
        case 0x1f7d68u: goto label_1f7d68;
        case 0x1f7d6cu: goto label_1f7d6c;
        case 0x1f7d70u: goto label_1f7d70;
        case 0x1f7d74u: goto label_1f7d74;
        case 0x1f7d78u: goto label_1f7d78;
        case 0x1f7d7cu: goto label_1f7d7c;
        case 0x1f7d80u: goto label_1f7d80;
        case 0x1f7d84u: goto label_1f7d84;
        case 0x1f7d88u: goto label_1f7d88;
        case 0x1f7d8cu: goto label_1f7d8c;
        case 0x1f7d90u: goto label_1f7d90;
        case 0x1f7d94u: goto label_1f7d94;
        case 0x1f7d98u: goto label_1f7d98;
        case 0x1f7d9cu: goto label_1f7d9c;
        case 0x1f7da0u: goto label_1f7da0;
        case 0x1f7da4u: goto label_1f7da4;
        case 0x1f7da8u: goto label_1f7da8;
        case 0x1f7dacu: goto label_1f7dac;
        case 0x1f7db0u: goto label_1f7db0;
        case 0x1f7db4u: goto label_1f7db4;
        case 0x1f7db8u: goto label_1f7db8;
        case 0x1f7dbcu: goto label_1f7dbc;
        case 0x1f7dc0u: goto label_1f7dc0;
        case 0x1f7dc4u: goto label_1f7dc4;
        case 0x1f7dc8u: goto label_1f7dc8;
        case 0x1f7dccu: goto label_1f7dcc;
        case 0x1f7dd0u: goto label_1f7dd0;
        case 0x1f7dd4u: goto label_1f7dd4;
        case 0x1f7dd8u: goto label_1f7dd8;
        case 0x1f7ddcu: goto label_1f7ddc;
        case 0x1f7de0u: goto label_1f7de0;
        case 0x1f7de4u: goto label_1f7de4;
        case 0x1f7de8u: goto label_1f7de8;
        case 0x1f7decu: goto label_1f7dec;
        case 0x1f7df0u: goto label_1f7df0;
        case 0x1f7df4u: goto label_1f7df4;
        case 0x1f7df8u: goto label_1f7df8;
        case 0x1f7dfcu: goto label_1f7dfc;
        case 0x1f7e00u: goto label_1f7e00;
        case 0x1f7e04u: goto label_1f7e04;
        case 0x1f7e08u: goto label_1f7e08;
        case 0x1f7e0cu: goto label_1f7e0c;
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e14u: goto label_1f7e14;
        case 0x1f7e18u: goto label_1f7e18;
        case 0x1f7e1cu: goto label_1f7e1c;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e24u: goto label_1f7e24;
        case 0x1f7e28u: goto label_1f7e28;
        case 0x1f7e2cu: goto label_1f7e2c;
        case 0x1f7e30u: goto label_1f7e30;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e38u: goto label_1f7e38;
        case 0x1f7e3cu: goto label_1f7e3c;
        case 0x1f7e40u: goto label_1f7e40;
        case 0x1f7e44u: goto label_1f7e44;
        case 0x1f7e48u: goto label_1f7e48;
        case 0x1f7e4cu: goto label_1f7e4c;
        case 0x1f7e50u: goto label_1f7e50;
        case 0x1f7e54u: goto label_1f7e54;
        case 0x1f7e58u: goto label_1f7e58;
        case 0x1f7e5cu: goto label_1f7e5c;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7e64u: goto label_1f7e64;
        case 0x1f7e68u: goto label_1f7e68;
        case 0x1f7e6cu: goto label_1f7e6c;
        case 0x1f7e70u: goto label_1f7e70;
        case 0x1f7e74u: goto label_1f7e74;
        case 0x1f7e78u: goto label_1f7e78;
        case 0x1f7e7cu: goto label_1f7e7c;
        case 0x1f7e80u: goto label_1f7e80;
        case 0x1f7e84u: goto label_1f7e84;
        case 0x1f7e88u: goto label_1f7e88;
        case 0x1f7e8cu: goto label_1f7e8c;
        case 0x1f7e90u: goto label_1f7e90;
        case 0x1f7e94u: goto label_1f7e94;
        case 0x1f7e98u: goto label_1f7e98;
        case 0x1f7e9cu: goto label_1f7e9c;
        case 0x1f7ea0u: goto label_1f7ea0;
        case 0x1f7ea4u: goto label_1f7ea4;
        case 0x1f7ea8u: goto label_1f7ea8;
        case 0x1f7eacu: goto label_1f7eac;
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7eb4u: goto label_1f7eb4;
        default: break;
    }

    ctx->pc = 0x1f7b68u;

label_1f7b68:
    // 0x1f7b68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f7b6c:
    // 0x1f7b6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1f7b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1f7b70:
    // 0x1f7b70: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1f7b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1f7b74:
    // 0x1f7b74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f7b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7b78:
    // 0x1f7b78: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1f7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1f7b7c:
    // 0x1f7b7c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1f7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1f7b80:
    // 0x1f7b80: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1f7b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1f7b84:
    // 0x1f7b84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f7b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1f7b88:
    // 0x1f7b88: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1f7b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1f7b8c:
    // 0x1f7b8c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1f7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1f7b90:
    // 0x1f7b90: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1f7b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1f7b94:
    // 0x1f7b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f7b98:
    // 0x1f7b98: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1f7b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f7b9c:
    // 0x1f7b9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f7ba0:
    // 0x1f7ba0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f7ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f7ba4:
    // 0x1f7ba4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f7ba8:
    // 0x1f7ba8: 0x40f809  jalr        $v0
label_1f7bac:
    if (ctx->pc == 0x1F7BACu) {
        ctx->pc = 0x1F7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA8u;
        // 0x1f7bac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BB0u;
        goto label_1f7bb0;
    }
    ctx->pc = 0x1F7BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7BB0u);
        ctx->pc = 0x1F7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA8u;
        // 0x1f7bac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BA8u, 0x1F7BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7BB0u;
label_1f7bb0:
    // 0x1f7bb0: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_1f7bb4:
    if (ctx->pc == 0x1F7BB4u) {
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BB8u;
        goto label_1f7bb8;
    }
    ctx->pc = 0x1F7BB0u;
    {
        const bool branch_taken_0x1f7bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bb0) {
            ctx->pc = 0x1F7E84u;
            goto label_1f7e84;
        }
    }
    ctx->pc = 0x1F7BB8u;
label_1f7bb8:
    // 0x1f7bb8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f7bbc:
    // 0x1f7bbc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f7bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f7bc0:
    // 0x1f7bc0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f7bc4:
    // 0x1f7bc4: 0x40f809  jalr        $v0
label_1f7bc8:
    if (ctx->pc == 0x1F7BC8u) {
        ctx->pc = 0x1F7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BC4u;
        // 0x1f7bc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BCCu;
        goto label_1f7bcc;
    }
    ctx->pc = 0x1F7BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7BCCu);
        ctx->pc = 0x1F7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BC4u;
        // 0x1f7bc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BC4u, 0x1F7BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7BCCu;
label_1f7bcc:
    // 0x1f7bcc: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_1f7bd0:
    if (ctx->pc == 0x1F7BD0u) {
        ctx->pc = 0x1F7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BCCu;
        // 0x1f7bd0: 0x267000d0  addiu       $s0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BD4u;
        goto label_1f7bd4;
    }
    ctx->pc = 0x1F7BCCu;
    {
        const bool branch_taken_0x1f7bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BCCu;
        // 0x1f7bd0: 0x267000d0  addiu       $s0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bcc) {
            ctx->pc = 0x1F7E80u;
            goto label_1f7e80;
        }
    }
    ctx->pc = 0x1F7BD4u;
label_1f7bd4:
    // 0x1f7bd4: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x1f7bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1f7bd8:
    // 0x1f7bd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7bdc:
    // 0x1f7bdc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7be0:
    // 0x1f7be0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7be4:
    // 0x1f7be4: 0x60f809  jalr        $v1
label_1f7be8:
    if (ctx->pc == 0x1F7BE8u) {
        ctx->pc = 0x1F7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BE4u;
        // 0x1f7be8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BECu;
        goto label_1f7bec;
    }
    ctx->pc = 0x1F7BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7BECu);
        ctx->pc = 0x1F7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BE4u;
        // 0x1f7be8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BE4u, 0x1F7BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7BECu;
label_1f7bec:
    // 0x1f7bec: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f7bf0:
    // 0x1f7bf0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7bf4:
    // 0x1f7bf4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7bf8:
    // 0x1f7bf8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7bfc:
    // 0x1f7bfc: 0x60f809  jalr        $v1
label_1f7c00:
    if (ctx->pc == 0x1F7C00u) {
        ctx->pc = 0x1F7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BFCu;
        // 0x1f7c00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C04u;
        goto label_1f7c04;
    }
    ctx->pc = 0x1F7BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7C04u);
        ctx->pc = 0x1F7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BFCu;
        // 0x1f7c00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BFCu, 0x1F7C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7C04u;
label_1f7c04:
    // 0x1f7c04: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f7c08:
    // 0x1f7c08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7c0c:
    // 0x1f7c0c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7c10:
    // 0x1f7c10: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7c14:
    // 0x1f7c14: 0x60f809  jalr        $v1
label_1f7c18:
    if (ctx->pc == 0x1F7C18u) {
        ctx->pc = 0x1F7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C14u;
        // 0x1f7c18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C1Cu;
        goto label_1f7c1c;
    }
    ctx->pc = 0x1F7C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7C1Cu);
        ctx->pc = 0x1F7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C14u;
        // 0x1f7c18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C14u, 0x1F7C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7C1Cu;
label_1f7c1c:
    // 0x1f7c1c: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1f7c20:
    // 0x1f7c20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7c24:
    // 0x1f7c24: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7c28:
    // 0x1f7c28: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7c2c:
    // 0x1f7c2c: 0x60f809  jalr        $v1
label_1f7c30:
    if (ctx->pc == 0x1F7C30u) {
        ctx->pc = 0x1F7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C2Cu;
        // 0x1f7c30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C34u;
        goto label_1f7c34;
    }
    ctx->pc = 0x1F7C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7C34u);
        ctx->pc = 0x1F7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C2Cu;
        // 0x1f7c30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C2Cu, 0x1F7C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7C34u;
label_1f7c34:
    // 0x1f7c34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f7c38:
    // 0x1f7c38: 0xc061748  jal         func_185D20
label_1f7c3c:
    if (ctx->pc == 0x1F7C3Cu) {
        ctx->pc = 0x1F7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C38u;
        // 0x1f7c3c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C40u;
        goto label_1f7c40;
    }
    ctx->pc = 0x1F7C38u;
    SET_GPR_U32(ctx, 31, 0x1F7C40u);
    ctx->pc = 0x1F7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C38u;
    // 0x1f7c3c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1F7C38u, 0x1F7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C40u;
label_1f7c40:
    // 0x1f7c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7c44:
    // 0x1f7c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7c48:
    // 0x1f7c48: 0xc07f8c0  jal         func_1FE300
label_1f7c4c:
    if (ctx->pc == 0x1F7C4Cu) {
        ctx->pc = 0x1F7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C48u;
        // 0x1f7c4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C50u;
        goto label_1f7c50;
    }
    ctx->pc = 0x1F7C48u;
    SET_GPR_U32(ctx, 31, 0x1F7C50u);
    ctx->pc = 0x1F7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C48u;
    // 0x1f7c4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE300u, 0x1F7C48u, 0x1F7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C50u;
label_1f7c50:
    // 0x1f7c50: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1f7c54:
    if (ctx->pc == 0x1F7C54u) {
        ctx->pc = 0x1F7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C50u;
        // 0x1f7c54: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C58u;
        goto label_1f7c58;
    }
    ctx->pc = 0x1F7C50u;
    {
        const bool branch_taken_0x1f7c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C50u;
        // 0x1f7c54: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c50) {
            ctx->pc = 0x1F7D08u;
            goto label_1f7d08;
        }
    }
    ctx->pc = 0x1F7C58u;
label_1f7c58:
    // 0x1f7c58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f7c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7c5c:
    // 0x1f7c5c: 0x24160160  addiu       $s6, $zero, 0x160
    ctx->pc = 0x1f7c5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f7c60:
    // 0x1f7c60: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1f7c60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1f7c64:
    // 0x1f7c64: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1f7c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f7c68:
    // 0x1f7c68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f7c6c:
    // 0x1f7c6c: 0x0  nop
    ctx->pc = 0x1f7c6cu;
    // NOP
label_1f7c70:
    // 0x1f7c70: 0xc08e86c  jal         func_23A1B0
label_1f7c74:
    if (ctx->pc == 0x1F7C74u) {
        ctx->pc = 0x1F7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C70u;
        // 0x1f7c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C78u;
        goto label_1f7c78;
    }
    ctx->pc = 0x1F7C70u;
    SET_GPR_U32(ctx, 31, 0x1F7C78u);
    ctx->pc = 0x1F7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C70u;
    // 0x1f7c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x1F7C70u, 0x1F7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C78u;
label_1f7c78:
    // 0x1f7c78: 0xc0e409a  jal         func_390268
label_1f7c7c:
    if (ctx->pc == 0x1F7C7Cu) {
        ctx->pc = 0x1F7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C78u;
        // 0x1f7c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C80u;
        goto label_1f7c80;
    }
    ctx->pc = 0x1F7C78u;
    SET_GPR_U32(ctx, 31, 0x1F7C80u);
    ctx->pc = 0x1F7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7C78u;
    // 0x1f7c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F7C78u, 0x1F7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C80u;
label_1f7c80:
    // 0x1f7c80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f7c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7c84:
    // 0x1f7c84: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1f7c88:
    // 0x1f7c88: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
label_1f7c8c:
    if (ctx->pc == 0x1F7C8Cu) {
        ctx->pc = 0x1F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C88u;
        // 0x1f7c8c: 0x8c6200d8  lw          $v0, 0xD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C90u;
        goto label_1f7c90;
    }
    ctx->pc = 0x1F7C88u;
    {
        const bool branch_taken_0x1f7c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x1F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C88u;
        // 0x1f7c8c: 0x8c6200d8  lw          $v0, 0xD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c88) {
            ctx->pc = 0x1F7C98u;
            goto label_1f7c98;
        }
    }
    ctx->pc = 0x1F7C90u;
label_1f7c90:
    // 0x1f7c90: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f7c94:
    if (ctx->pc == 0x1F7C94u) {
        ctx->pc = 0x1F7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C90u;
        // 0x1f7c94: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C98u;
        goto label_1f7c98;
    }
    ctx->pc = 0x1F7C90u;
    {
        const bool branch_taken_0x1f7c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C90u;
        // 0x1f7c94: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c90) {
            ctx->pc = 0x1F7CC4u;
            goto label_1f7cc4;
        }
    }
    ctx->pc = 0x1F7C98u;
label_1f7c98:
    // 0x1f7c98: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f7c9c:
    // 0x1f7c9c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1f7ca0:
    // 0x1f7ca0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_1f7ca4:
    if (ctx->pc == 0x1F7CA4u) {
        ctx->pc = 0x1F7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CA0u;
        // 0x1f7ca4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7CA8u;
        goto label_1f7ca8;
    }
    ctx->pc = 0x1F7CA0u;
    {
        const bool branch_taken_0x1f7ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ca0) {
            ctx->pc = 0x1F7CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7CA0u;
            // 0x1f7ca4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7CA8u;
label_1f7ca8:
    // 0x1f7ca8: 0x8ea5b8b8  lw          $a1, -0x4748($s5)
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949048)));
label_1f7cac:
    // 0x1f7cac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7cb0:
    // 0x1f7cb0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f7cb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f7cb4:
    // 0x1f7cb4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f7cb8:
    // 0x1f7cb8: 0x40f809  jalr        $v0
label_1f7cbc:
    if (ctx->pc == 0x1F7CBCu) {
        ctx->pc = 0x1F7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CB8u;
        // 0x1f7cbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7CC0u;
        goto label_1f7cc0;
    }
    ctx->pc = 0x1F7CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7CC0u);
        ctx->pc = 0x1F7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CB8u;
        // 0x1f7cbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7CB8u, 0x1F7CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7CC0u;
label_1f7cc0:
    // 0x1f7cc0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1f7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1f7cc4:
    // 0x1f7cc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f7cc8:
    // 0x1f7cc8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f7ccc:
    // 0x1f7ccc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f7cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f7cd0:
    // 0x1f7cd0: 0xc08dfa6  jal         func_237E98
label_1f7cd4:
    if (ctx->pc == 0x1F7CD4u) {
        ctx->pc = 0x1F7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CD0u;
        // 0x1f7cd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7CD8u;
        goto label_1f7cd8;
    }
    ctx->pc = 0x1F7CD0u;
    SET_GPR_U32(ctx, 31, 0x1F7CD8u);
    ctx->pc = 0x1F7CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7CD0u;
    // 0x1f7cd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F7CD0u, 0x1F7CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CD8u;
label_1f7cd8:
    // 0x1f7cd8: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x1f7cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f7cdc:
    // 0x1f7cdc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
label_1f7ce0:
    if (ctx->pc == 0x1F7CE0u) {
        ctx->pc = 0x1F7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CDCu;
        // 0x1f7ce0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7CE4u;
        goto label_1f7ce4;
    }
    ctx->pc = 0x1F7CDCu;
    {
        const bool branch_taken_0x1f7cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cdc) {
            ctx->pc = 0x1F7CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7CDCu;
            // 0x1f7ce0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c70;
        }
    }
    ctx->pc = 0x1F7CE4u;
label_1f7ce4:
    // 0x1f7ce4: 0x8e66009c  lw          $a2, 0x9C($s3)
    ctx->pc = 0x1f7ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1f7ce8:
    // 0x1f7ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7cec:
    // 0x1f7cec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7cf0:
    // 0x1f7cf0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f7cf4:
    // 0x1f7cf4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f7cf8:
    // 0x1f7cf8: 0x60f809  jalr        $v1
label_1f7cfc:
    if (ctx->pc == 0x1F7CFCu) {
        ctx->pc = 0x1F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF8u;
        // 0x1f7cfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D00u;
        goto label_1f7d00;
    }
    ctx->pc = 0x1F7CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7D00u);
        ctx->pc = 0x1F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF8u;
        // 0x1f7cfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7CF8u, 0x1F7D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7D00u;
label_1f7d00:
    // 0x1f7d00: 0x10000037  b           . + 4 + (0x37 << 2)
label_1f7d04:
    if (ctx->pc == 0x1F7D04u) {
        ctx->pc = 0x1F7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D00u;
        // 0x1f7d04: 0x8e650094  lw          $a1, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D08u;
        goto label_1f7d08;
    }
    ctx->pc = 0x1F7D00u;
    {
        const bool branch_taken_0x1f7d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D00u;
        // 0x1f7d04: 0x8e650094  lw          $a1, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d00) {
            ctx->pc = 0x1F7DE0u;
            goto label_1f7de0;
        }
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_1f7d0c:
    // 0x1f7d0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f7d10:
    // 0x1f7d10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f7d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f7d14:
    // 0x1f7d14: 0x245e4b00  addiu       $fp, $v0, 0x4B00
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_1f7d18:
    // 0x1f7d18: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1f7d18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d1c:
    // 0x1f7d1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d20:
    // 0x1f7d20: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1f7d20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f7d24:
    // 0x1f7d24: 0x26740100  addiu       $s4, $s3, 0x100
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1f7d28:
    // 0x1f7d28: 0x267200fc  addiu       $s2, $s3, 0xFC
    ctx->pc = 0x1f7d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 252));
label_1f7d2c:
    // 0x1f7d2c: 0x267100f8  addiu       $s1, $s3, 0xF8
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
label_1f7d30:
    // 0x1f7d30: 0xc07f8a8  jal         func_1FE2A0
label_1f7d34:
    if (ctx->pc == 0x1F7D34u) {
        ctx->pc = 0x1F7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D30u;
        // 0x1f7d34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D38u;
        goto label_1f7d38;
    }
    ctx->pc = 0x1F7D30u;
    SET_GPR_U32(ctx, 31, 0x1F7D38u);
    ctx->pc = 0x1F7D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D30u;
    // 0x1f7d34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x1F7D30u, 0x1F7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D38u;
label_1f7d38:
    // 0x1f7d38: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7d3c:
    // 0x1f7d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d40:
    // 0x1f7d40: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7d44:
    // 0x1f7d44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d48:
    // 0x1f7d48: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1f7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7d4c:
    // 0x1f7d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d50:
    // 0x1f7d50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f7d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f7d54:
    // 0x1f7d54: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1f7d54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1f7d58:
    // 0x1f7d58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f7d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1f7d5c:
    // 0x1f7d5c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1f7d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1f7d60:
    // 0x1f7d60: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f7d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f7d64:
    // 0x1f7d64: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f7d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f7d68:
    // 0x1f7d68: 0xc086c2e  jal         func_21B0B8
label_1f7d6c:
    if (ctx->pc == 0x1F7D6Cu) {
        ctx->pc = 0x1F7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D68u;
        // 0x1f7d6c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D70u;
        goto label_1f7d70;
    }
    ctx->pc = 0x1F7D68u;
    SET_GPR_U32(ctx, 31, 0x1F7D70u);
    ctx->pc = 0x1F7D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D68u;
    // 0x1f7d6c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F7D68u, 0x1F7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D70u;
label_1f7d70:
    // 0x1f7d70: 0xc0e409a  jal         func_390268
label_1f7d74:
    if (ctx->pc == 0x1F7D74u) {
        ctx->pc = 0x1F7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D70u;
        // 0x1f7d74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D78u;
        goto label_1f7d78;
    }
    ctx->pc = 0x1F7D70u;
    SET_GPR_U32(ctx, 31, 0x1F7D78u);
    ctx->pc = 0x1F7D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D70u;
    // 0x1f7d74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F7D70u, 0x1F7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D78u;
label_1f7d78:
    // 0x1f7d78: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1f7d7c:
    // 0x1f7d7c: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x1f7d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_1f7d80:
    // 0x1f7d80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f7d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d84:
    // 0x1f7d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d88:
    // 0x1f7d88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f7d8c:
    // 0x1f7d8c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1f7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1f7d90:
    // 0x1f7d90: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1f7d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_1f7d94:
    // 0x1f7d94: 0xc086c40  jal         func_21B100
label_1f7d98:
    if (ctx->pc == 0x1F7D98u) {
        ctx->pc = 0x1F7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D94u;
        // 0x1f7d98: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D9Cu;
        goto label_1f7d9c;
    }
    ctx->pc = 0x1F7D94u;
    SET_GPR_U32(ctx, 31, 0x1F7D9Cu);
    ctx->pc = 0x1F7D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D94u;
    // 0x1f7d98: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x1F7D94u, 0x1F7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D9Cu;
label_1f7d9c:
    // 0x1f7d9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f7da0:
    // 0x1f7da0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1f7da4:
    // 0x1f7da4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f7da8:
    // 0x1f7da8: 0x40f809  jalr        $v0
label_1f7dac:
    if (ctx->pc == 0x1F7DACu) {
        ctx->pc = 0x1F7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DA8u;
        // 0x1f7dac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DB0u;
        goto label_1f7db0;
    }
    ctx->pc = 0x1F7DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7DB0u);
        ctx->pc = 0x1F7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DA8u;
        // 0x1f7dac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7DA8u, 0x1F7DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7DB0u;
label_1f7db0:
    // 0x1f7db0: 0xc08dfa6  jal         func_237E98
label_1f7db4:
    if (ctx->pc == 0x1F7DB4u) {
        ctx->pc = 0x1F7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DB0u;
        // 0x1f7db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DB8u;
        goto label_1f7db8;
    }
    ctx->pc = 0x1F7DB0u;
    SET_GPR_U32(ctx, 31, 0x1F7DB8u);
    ctx->pc = 0x1F7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DB0u;
    // 0x1f7db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F7DB0u, 0x1F7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DB8u;
label_1f7db8:
    // 0x1f7db8: 0x2ec20009  sltiu       $v0, $s6, 0x9
    ctx->pc = 0x1f7db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f7dbc:
    // 0x1f7dbc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_1f7dc0:
    if (ctx->pc == 0x1F7DC0u) {
        ctx->pc = 0x1F7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DBCu;
        // 0x1f7dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DC4u;
        goto label_1f7dc4;
    }
    ctx->pc = 0x1F7DBCu;
    {
        const bool branch_taken_0x1f7dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DBCu;
        // 0x1f7dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dbc) {
            ctx->pc = 0x1F7D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7d30;
        }
    }
    ctx->pc = 0x1F7DC4u;
label_1f7dc4:
    // 0x1f7dc4: 0x8e66009c  lw          $a2, 0x9C($s3)
    ctx->pc = 0x1f7dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1f7dc8:
    // 0x1f7dc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7dcc:
    // 0x1f7dcc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f7dd0:
    // 0x1f7dd0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f7dd4:
    // 0x1f7dd4: 0x60f809  jalr        $v1
label_1f7dd8:
    if (ctx->pc == 0x1F7DD8u) {
        ctx->pc = 0x1F7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DD4u;
        // 0x1f7dd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DDCu;
        goto label_1f7ddc;
    }
    ctx->pc = 0x1F7DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7DDCu);
        ctx->pc = 0x1F7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DD4u;
        // 0x1f7dd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7DD4u, 0x1F7DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7DDCu;
label_1f7ddc:
    // 0x1f7ddc: 0x8e650094  lw          $a1, 0x94($s3)
    ctx->pc = 0x1f7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1f7de0:
    // 0x1f7de0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7de4:
    // 0x1f7de4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7de8:
    // 0x1f7de8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7dec:
    // 0x1f7dec: 0x60f809  jalr        $v1
label_1f7df0:
    if (ctx->pc == 0x1F7DF0u) {
        ctx->pc = 0x1F7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DECu;
        // 0x1f7df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DF4u;
        goto label_1f7df4;
    }
    ctx->pc = 0x1F7DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7DF4u);
        ctx->pc = 0x1F7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DECu;
        // 0x1f7df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7DECu, 0x1F7DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7DF4u;
label_1f7df4:
    // 0x1f7df4: 0x8e65009c  lw          $a1, 0x9C($s3)
    ctx->pc = 0x1f7df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1f7df8:
    // 0x1f7df8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7dfc:
    // 0x1f7dfc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7e00:
    // 0x1f7e00: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7e04:
    // 0x1f7e04: 0x60f809  jalr        $v1
label_1f7e08:
    if (ctx->pc == 0x1F7E08u) {
        ctx->pc = 0x1F7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E04u;
        // 0x1f7e08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E0Cu;
        goto label_1f7e0c;
    }
    ctx->pc = 0x1F7E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7E0Cu);
        ctx->pc = 0x1F7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E04u;
        // 0x1f7e08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E04u, 0x1F7E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7E0Cu;
label_1f7e0c:
    // 0x1f7e0c: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x1f7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1f7e10:
    // 0x1f7e10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1f7e14:
    if (ctx->pc == 0x1F7E14u) {
        ctx->pc = 0x1F7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E10u;
        // 0x1f7e14: 0x8e7000c4  lw          $s0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E18u;
        goto label_1f7e18;
    }
    ctx->pc = 0x1F7E10u;
    {
        const bool branch_taken_0x1f7e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7e10) {
            ctx->pc = 0x1F7E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7E10u;
            // 0x1f7e14: 0x8e7000c4  lw          $s0, 0xC4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E34u;
            goto label_1f7e34;
        }
    }
    ctx->pc = 0x1F7E18u;
label_1f7e18:
    // 0x1f7e18: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x1f7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1f7e1c:
    // 0x1f7e1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7e20:
    // 0x1f7e20: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7e24:
    // 0x1f7e24: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7e28:
    // 0x1f7e28: 0x60f809  jalr        $v1
label_1f7e2c:
    if (ctx->pc == 0x1F7E2Cu) {
        ctx->pc = 0x1F7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E28u;
        // 0x1f7e2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E30u;
        goto label_1f7e30;
    }
    ctx->pc = 0x1F7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7E30u);
        ctx->pc = 0x1F7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E28u;
        // 0x1f7e2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E28u, 0x1F7E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7E30u;
label_1f7e30:
    // 0x1f7e30: 0x8e7000c4  lw          $s0, 0xC4($s3)
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1f7e34:
    // 0x1f7e34: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f7e38:
    // 0x1f7e38: 0x2444ef80  addiu       $a0, $v0, -0x1080
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_1f7e3c:
    // 0x1f7e3c: 0xc080ada  jal         func_202B68
label_1f7e40:
    if (ctx->pc == 0x1F7E40u) {
        ctx->pc = 0x1F7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E3Cu;
        // 0x1f7e40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E44u;
        goto label_1f7e44;
    }
    ctx->pc = 0x1F7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E44u);
    ctx->pc = 0x1F7E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E3Cu;
    // 0x1f7e40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B68u, 0x1F7E3Cu, 0x1F7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E44u;
label_1f7e44:
    // 0x1f7e44: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1f7e44u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f7e48:
    // 0x1f7e48: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_1f7e4c:
    if (ctx->pc == 0x1F7E4Cu) {
        ctx->pc = 0x1F7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E48u;
        // 0x1f7e4c: 0x8e6500b8  lw          $a1, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E50u;
        goto label_1f7e50;
    }
    ctx->pc = 0x1F7E48u;
    {
        const bool branch_taken_0x1f7e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7e48) {
            ctx->pc = 0x1F7E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7E48u;
            // 0x1f7e4c: 0x8e6500b8  lw          $a1, 0xB8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E6Cu;
            goto label_1f7e6c;
        }
    }
    ctx->pc = 0x1F7E50u;
label_1f7e50:
    // 0x1f7e50: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1f7e54:
    // 0x1f7e54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7e58:
    // 0x1f7e58: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7e5c:
    // 0x1f7e5c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7e60:
    // 0x1f7e60: 0x60f809  jalr        $v1
label_1f7e64:
    if (ctx->pc == 0x1F7E64u) {
        ctx->pc = 0x1F7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E60u;
        // 0x1f7e64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E68u;
        goto label_1f7e68;
    }
    ctx->pc = 0x1F7E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7E68u);
        ctx->pc = 0x1F7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E60u;
        // 0x1f7e64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E60u, 0x1F7E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7E68u;
label_1f7e68:
    // 0x1f7e68: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x1f7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1f7e6c:
    // 0x1f7e6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7e70:
    // 0x1f7e70: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f7e74:
    // 0x1f7e74: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f7e78:
    // 0x1f7e78: 0x60f809  jalr        $v1
label_1f7e7c:
    if (ctx->pc == 0x1F7E7Cu) {
        ctx->pc = 0x1F7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E78u;
        // 0x1f7e7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E80u;
        goto label_1f7e80;
    }
    ctx->pc = 0x1F7E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7E80u);
        ctx->pc = 0x1F7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E78u;
        // 0x1f7e7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E78u, 0x1F7E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7E80u;
label_1f7e80:
    // 0x1f7e80: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1f7e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f7e84:
    // 0x1f7e84: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1f7e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f7e88:
    // 0x1f7e88: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1f7e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f7e8c:
    // 0x1f7e8c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1f7e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f7e90:
    // 0x1f7e90: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1f7e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f7e94:
    // 0x1f7e94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f7e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f7e98:
    // 0x1f7e98: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1f7e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7e9c:
    // 0x1f7e9c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1f7e9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7ea0:
    // 0x1f7ea0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1f7ea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7ea4:
    // 0x1f7ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7ea8:
    // 0x1f7ea8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1f7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f7eac:
    // 0x1f7eac: 0x3e00008  jr          $ra
label_1f7eb0:
    if (ctx->pc == 0x1F7EB0u) {
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7EB4u;
        goto label_1f7eb4;
    }
    ctx->pc = 0x1F7EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7EB4u;
label_1f7eb4:
    // 0x1f7eb4: 0x0  nop
    ctx->pc = 0x1f7eb4u;
    // NOP
    ctx->pc = 0x1f7eb8u;
}
