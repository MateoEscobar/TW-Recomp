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

// Function: sub_003E7B88
// Address: 0x3e7b88 - 0x3e7f20
void sub_003E7B88_0x3e7b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7B88_0x3e7b88");
#endif

    switch (ctx->pc) {
        case 0x3e7b88u: goto label_3e7b88;
        case 0x3e7b8cu: goto label_3e7b8c;
        case 0x3e7b90u: goto label_3e7b90;
        case 0x3e7b94u: goto label_3e7b94;
        case 0x3e7b98u: goto label_3e7b98;
        case 0x3e7b9cu: goto label_3e7b9c;
        case 0x3e7ba0u: goto label_3e7ba0;
        case 0x3e7ba4u: goto label_3e7ba4;
        case 0x3e7ba8u: goto label_3e7ba8;
        case 0x3e7bacu: goto label_3e7bac;
        case 0x3e7bb0u: goto label_3e7bb0;
        case 0x3e7bb4u: goto label_3e7bb4;
        case 0x3e7bb8u: goto label_3e7bb8;
        case 0x3e7bbcu: goto label_3e7bbc;
        case 0x3e7bc0u: goto label_3e7bc0;
        case 0x3e7bc4u: goto label_3e7bc4;
        case 0x3e7bc8u: goto label_3e7bc8;
        case 0x3e7bccu: goto label_3e7bcc;
        case 0x3e7bd0u: goto label_3e7bd0;
        case 0x3e7bd4u: goto label_3e7bd4;
        case 0x3e7bd8u: goto label_3e7bd8;
        case 0x3e7bdcu: goto label_3e7bdc;
        case 0x3e7be0u: goto label_3e7be0;
        case 0x3e7be4u: goto label_3e7be4;
        case 0x3e7be8u: goto label_3e7be8;
        case 0x3e7becu: goto label_3e7bec;
        case 0x3e7bf0u: goto label_3e7bf0;
        case 0x3e7bf4u: goto label_3e7bf4;
        case 0x3e7bf8u: goto label_3e7bf8;
        case 0x3e7bfcu: goto label_3e7bfc;
        case 0x3e7c00u: goto label_3e7c00;
        case 0x3e7c04u: goto label_3e7c04;
        case 0x3e7c08u: goto label_3e7c08;
        case 0x3e7c0cu: goto label_3e7c0c;
        case 0x3e7c10u: goto label_3e7c10;
        case 0x3e7c14u: goto label_3e7c14;
        case 0x3e7c18u: goto label_3e7c18;
        case 0x3e7c1cu: goto label_3e7c1c;
        case 0x3e7c20u: goto label_3e7c20;
        case 0x3e7c24u: goto label_3e7c24;
        case 0x3e7c28u: goto label_3e7c28;
        case 0x3e7c2cu: goto label_3e7c2c;
        case 0x3e7c30u: goto label_3e7c30;
        case 0x3e7c34u: goto label_3e7c34;
        case 0x3e7c38u: goto label_3e7c38;
        case 0x3e7c3cu: goto label_3e7c3c;
        case 0x3e7c40u: goto label_3e7c40;
        case 0x3e7c44u: goto label_3e7c44;
        case 0x3e7c48u: goto label_3e7c48;
        case 0x3e7c4cu: goto label_3e7c4c;
        case 0x3e7c50u: goto label_3e7c50;
        case 0x3e7c54u: goto label_3e7c54;
        case 0x3e7c58u: goto label_3e7c58;
        case 0x3e7c5cu: goto label_3e7c5c;
        case 0x3e7c60u: goto label_3e7c60;
        case 0x3e7c64u: goto label_3e7c64;
        case 0x3e7c68u: goto label_3e7c68;
        case 0x3e7c6cu: goto label_3e7c6c;
        case 0x3e7c70u: goto label_3e7c70;
        case 0x3e7c74u: goto label_3e7c74;
        case 0x3e7c78u: goto label_3e7c78;
        case 0x3e7c7cu: goto label_3e7c7c;
        case 0x3e7c80u: goto label_3e7c80;
        case 0x3e7c84u: goto label_3e7c84;
        case 0x3e7c88u: goto label_3e7c88;
        case 0x3e7c8cu: goto label_3e7c8c;
        case 0x3e7c90u: goto label_3e7c90;
        case 0x3e7c94u: goto label_3e7c94;
        case 0x3e7c98u: goto label_3e7c98;
        case 0x3e7c9cu: goto label_3e7c9c;
        case 0x3e7ca0u: goto label_3e7ca0;
        case 0x3e7ca4u: goto label_3e7ca4;
        case 0x3e7ca8u: goto label_3e7ca8;
        case 0x3e7cacu: goto label_3e7cac;
        case 0x3e7cb0u: goto label_3e7cb0;
        case 0x3e7cb4u: goto label_3e7cb4;
        case 0x3e7cb8u: goto label_3e7cb8;
        case 0x3e7cbcu: goto label_3e7cbc;
        case 0x3e7cc0u: goto label_3e7cc0;
        case 0x3e7cc4u: goto label_3e7cc4;
        case 0x3e7cc8u: goto label_3e7cc8;
        case 0x3e7cccu: goto label_3e7ccc;
        case 0x3e7cd0u: goto label_3e7cd0;
        case 0x3e7cd4u: goto label_3e7cd4;
        case 0x3e7cd8u: goto label_3e7cd8;
        case 0x3e7cdcu: goto label_3e7cdc;
        case 0x3e7ce0u: goto label_3e7ce0;
        case 0x3e7ce4u: goto label_3e7ce4;
        case 0x3e7ce8u: goto label_3e7ce8;
        case 0x3e7cecu: goto label_3e7cec;
        case 0x3e7cf0u: goto label_3e7cf0;
        case 0x3e7cf4u: goto label_3e7cf4;
        case 0x3e7cf8u: goto label_3e7cf8;
        case 0x3e7cfcu: goto label_3e7cfc;
        case 0x3e7d00u: goto label_3e7d00;
        case 0x3e7d04u: goto label_3e7d04;
        case 0x3e7d08u: goto label_3e7d08;
        case 0x3e7d0cu: goto label_3e7d0c;
        case 0x3e7d10u: goto label_3e7d10;
        case 0x3e7d14u: goto label_3e7d14;
        case 0x3e7d18u: goto label_3e7d18;
        case 0x3e7d1cu: goto label_3e7d1c;
        case 0x3e7d20u: goto label_3e7d20;
        case 0x3e7d24u: goto label_3e7d24;
        case 0x3e7d28u: goto label_3e7d28;
        case 0x3e7d2cu: goto label_3e7d2c;
        case 0x3e7d30u: goto label_3e7d30;
        case 0x3e7d34u: goto label_3e7d34;
        case 0x3e7d38u: goto label_3e7d38;
        case 0x3e7d3cu: goto label_3e7d3c;
        case 0x3e7d40u: goto label_3e7d40;
        case 0x3e7d44u: goto label_3e7d44;
        case 0x3e7d48u: goto label_3e7d48;
        case 0x3e7d4cu: goto label_3e7d4c;
        case 0x3e7d50u: goto label_3e7d50;
        case 0x3e7d54u: goto label_3e7d54;
        case 0x3e7d58u: goto label_3e7d58;
        case 0x3e7d5cu: goto label_3e7d5c;
        case 0x3e7d60u: goto label_3e7d60;
        case 0x3e7d64u: goto label_3e7d64;
        case 0x3e7d68u: goto label_3e7d68;
        case 0x3e7d6cu: goto label_3e7d6c;
        case 0x3e7d70u: goto label_3e7d70;
        case 0x3e7d74u: goto label_3e7d74;
        case 0x3e7d78u: goto label_3e7d78;
        case 0x3e7d7cu: goto label_3e7d7c;
        case 0x3e7d80u: goto label_3e7d80;
        case 0x3e7d84u: goto label_3e7d84;
        case 0x3e7d88u: goto label_3e7d88;
        case 0x3e7d8cu: goto label_3e7d8c;
        case 0x3e7d90u: goto label_3e7d90;
        case 0x3e7d94u: goto label_3e7d94;
        case 0x3e7d98u: goto label_3e7d98;
        case 0x3e7d9cu: goto label_3e7d9c;
        case 0x3e7da0u: goto label_3e7da0;
        case 0x3e7da4u: goto label_3e7da4;
        case 0x3e7da8u: goto label_3e7da8;
        case 0x3e7dacu: goto label_3e7dac;
        case 0x3e7db0u: goto label_3e7db0;
        case 0x3e7db4u: goto label_3e7db4;
        case 0x3e7db8u: goto label_3e7db8;
        case 0x3e7dbcu: goto label_3e7dbc;
        case 0x3e7dc0u: goto label_3e7dc0;
        case 0x3e7dc4u: goto label_3e7dc4;
        case 0x3e7dc8u: goto label_3e7dc8;
        case 0x3e7dccu: goto label_3e7dcc;
        case 0x3e7dd0u: goto label_3e7dd0;
        case 0x3e7dd4u: goto label_3e7dd4;
        case 0x3e7dd8u: goto label_3e7dd8;
        case 0x3e7ddcu: goto label_3e7ddc;
        case 0x3e7de0u: goto label_3e7de0;
        case 0x3e7de4u: goto label_3e7de4;
        case 0x3e7de8u: goto label_3e7de8;
        case 0x3e7decu: goto label_3e7dec;
        case 0x3e7df0u: goto label_3e7df0;
        case 0x3e7df4u: goto label_3e7df4;
        case 0x3e7df8u: goto label_3e7df8;
        case 0x3e7dfcu: goto label_3e7dfc;
        case 0x3e7e00u: goto label_3e7e00;
        case 0x3e7e04u: goto label_3e7e04;
        case 0x3e7e08u: goto label_3e7e08;
        case 0x3e7e0cu: goto label_3e7e0c;
        case 0x3e7e10u: goto label_3e7e10;
        case 0x3e7e14u: goto label_3e7e14;
        case 0x3e7e18u: goto label_3e7e18;
        case 0x3e7e1cu: goto label_3e7e1c;
        case 0x3e7e20u: goto label_3e7e20;
        case 0x3e7e24u: goto label_3e7e24;
        case 0x3e7e28u: goto label_3e7e28;
        case 0x3e7e2cu: goto label_3e7e2c;
        case 0x3e7e30u: goto label_3e7e30;
        case 0x3e7e34u: goto label_3e7e34;
        case 0x3e7e38u: goto label_3e7e38;
        case 0x3e7e3cu: goto label_3e7e3c;
        case 0x3e7e40u: goto label_3e7e40;
        case 0x3e7e44u: goto label_3e7e44;
        case 0x3e7e48u: goto label_3e7e48;
        case 0x3e7e4cu: goto label_3e7e4c;
        case 0x3e7e50u: goto label_3e7e50;
        case 0x3e7e54u: goto label_3e7e54;
        case 0x3e7e58u: goto label_3e7e58;
        case 0x3e7e5cu: goto label_3e7e5c;
        case 0x3e7e60u: goto label_3e7e60;
        case 0x3e7e64u: goto label_3e7e64;
        case 0x3e7e68u: goto label_3e7e68;
        case 0x3e7e6cu: goto label_3e7e6c;
        case 0x3e7e70u: goto label_3e7e70;
        case 0x3e7e74u: goto label_3e7e74;
        case 0x3e7e78u: goto label_3e7e78;
        case 0x3e7e7cu: goto label_3e7e7c;
        case 0x3e7e80u: goto label_3e7e80;
        case 0x3e7e84u: goto label_3e7e84;
        case 0x3e7e88u: goto label_3e7e88;
        case 0x3e7e8cu: goto label_3e7e8c;
        case 0x3e7e90u: goto label_3e7e90;
        case 0x3e7e94u: goto label_3e7e94;
        case 0x3e7e98u: goto label_3e7e98;
        case 0x3e7e9cu: goto label_3e7e9c;
        case 0x3e7ea0u: goto label_3e7ea0;
        case 0x3e7ea4u: goto label_3e7ea4;
        case 0x3e7ea8u: goto label_3e7ea8;
        case 0x3e7eacu: goto label_3e7eac;
        case 0x3e7eb0u: goto label_3e7eb0;
        case 0x3e7eb4u: goto label_3e7eb4;
        case 0x3e7eb8u: goto label_3e7eb8;
        case 0x3e7ebcu: goto label_3e7ebc;
        case 0x3e7ec0u: goto label_3e7ec0;
        case 0x3e7ec4u: goto label_3e7ec4;
        case 0x3e7ec8u: goto label_3e7ec8;
        case 0x3e7eccu: goto label_3e7ecc;
        case 0x3e7ed0u: goto label_3e7ed0;
        case 0x3e7ed4u: goto label_3e7ed4;
        case 0x3e7ed8u: goto label_3e7ed8;
        case 0x3e7edcu: goto label_3e7edc;
        case 0x3e7ee0u: goto label_3e7ee0;
        case 0x3e7ee4u: goto label_3e7ee4;
        case 0x3e7ee8u: goto label_3e7ee8;
        case 0x3e7eecu: goto label_3e7eec;
        case 0x3e7ef0u: goto label_3e7ef0;
        case 0x3e7ef4u: goto label_3e7ef4;
        case 0x3e7ef8u: goto label_3e7ef8;
        case 0x3e7efcu: goto label_3e7efc;
        case 0x3e7f00u: goto label_3e7f00;
        case 0x3e7f04u: goto label_3e7f04;
        case 0x3e7f08u: goto label_3e7f08;
        case 0x3e7f0cu: goto label_3e7f0c;
        case 0x3e7f10u: goto label_3e7f10;
        case 0x3e7f14u: goto label_3e7f14;
        case 0x3e7f18u: goto label_3e7f18;
        case 0x3e7f1cu: goto label_3e7f1c;
        default: break;
    }

    ctx->pc = 0x3e7b88u;

label_3e7b88:
    // 0x3e7b88: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3e7b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3e7b8c:
    // 0x3e7b8c: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x3e7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
label_3e7b90:
    // 0x3e7b90: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x3e7b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
label_3e7b94:
    // 0x3e7b94: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3e7b94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b98:
    // 0x3e7b98: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3e7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3e7b9c:
    // 0x3e7b9c: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3e7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3e7ba0:
    // 0x3e7ba0: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3e7ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3e7ba4:
    // 0x3e7ba4: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3e7ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3e7ba8:
    // 0x3e7ba8: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x3e7ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
label_3e7bac:
    // 0x3e7bac: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x3e7bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
label_3e7bb0:
    // 0x3e7bb0: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x3e7bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
label_3e7bb4:
    // 0x3e7bb4: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3e7bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3e7bb8:
    // 0x3e7bb8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3e7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3e7bbc:
    // 0x3e7bbc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e7bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e7bc0:
    // 0x3e7bc0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e7bc4:
    // 0x3e7bc4: 0x40f809  jalr        $v0
label_3e7bc8:
    if (ctx->pc == 0x3E7BC8u) {
        ctx->pc = 0x3E7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC4u;
        // 0x3e7bc8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BCCu;
        goto label_3e7bcc;
    }
    ctx->pc = 0x3E7BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7BCCu);
        ctx->pc = 0x3E7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC4u;
        // 0x3e7bc8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7BC4u, 0x3E7BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7BCCu;
label_3e7bcc:
    // 0x3e7bcc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3e7bccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7bd0:
    // 0x3e7bd0: 0x8ee2003c  lw          $v0, 0x3C($s7)
    ctx->pc = 0x3e7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_3e7bd4:
    // 0x3e7bd4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_3e7bd8:
    if (ctx->pc == 0x3E7BD8u) {
        ctx->pc = 0x3E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BD4u;
        // 0x3e7bd8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BDCu;
        goto label_3e7bdc;
    }
    ctx->pc = 0x3E7BD4u;
    {
        const bool branch_taken_0x3e7bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BD4u;
        // 0x3e7bd8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bd4) {
            ctx->pc = 0x3E7D10u;
            goto label_3e7d10;
        }
    }
    ctx->pc = 0x3E7BDCu;
label_3e7bdc:
    // 0x3e7bdc: 0xaee0003c  sw          $zero, 0x3C($s7)
    ctx->pc = 0x3e7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 60), GPR_U32(ctx, 0));
label_3e7be0:
    // 0x3e7be0: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3e7be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3e7be4:
    // 0x3e7be4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3e7be4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7be8:
    // 0x3e7be8: 0x8c820840  lw          $v0, 0x840($a0)
    ctx->pc = 0x3e7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2112)));
label_3e7bec:
    // 0x3e7bec: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x3e7becu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_3e7bf0:
    // 0x3e7bf0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3e7bf4:
    if (ctx->pc == 0x3E7BF4u) {
        ctx->pc = 0x3E7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BF0u;
        // 0x3e7bf4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BF8u;
        goto label_3e7bf8;
    }
    ctx->pc = 0x3E7BF0u;
    {
        const bool branch_taken_0x3e7bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BF0u;
        // 0x3e7bf4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bf0) {
            ctx->pc = 0x3E7D10u;
            goto label_3e7d10;
        }
    }
    ctx->pc = 0x3E7BF8u;
label_3e7bf8:
    // 0x3e7bf8: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x3e7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_3e7bfc:
    // 0x3e7bfc: 0x0  nop
    ctx->pc = 0x3e7bfcu;
    // NOP
label_3e7c00:
    // 0x3e7c00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e7c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c04:
    // 0x3e7c04: 0xc0e6758  jal         func_399D60
label_3e7c08:
    if (ctx->pc == 0x3E7C08u) {
        ctx->pc = 0x3E7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C04u;
        // 0x3e7c08: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C0Cu;
        goto label_3e7c0c;
    }
    ctx->pc = 0x3E7C04u;
    SET_GPR_U32(ctx, 31, 0x3E7C0Cu);
    ctx->pc = 0x3E7C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C04u;
    // 0x3e7c08: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D60u, 0x3E7C04u, 0x3E7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C0Cu;
label_3e7c0c:
    // 0x3e7c0c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_3e7c10:
    if (ctx->pc == 0x3E7C10u) {
        ctx->pc = 0x3E7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C0Cu;
        // 0x3e7c10: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C14u;
        goto label_3e7c14;
    }
    ctx->pc = 0x3E7C0Cu;
    {
        const bool branch_taken_0x3e7c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C0Cu;
        // 0x3e7c10: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c0c) {
            ctx->pc = 0x3E7CF8u;
            goto label_3e7cf8;
        }
    }
    ctx->pc = 0x3E7C14u;
label_3e7c14:
    // 0x3e7c14: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x3e7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e7c18:
    // 0x3e7c18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e7c1c:
    // 0x3e7c1c: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3e7c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_3e7c20:
    // 0x3e7c20: 0xc0e44cc  jal         func_391330
label_3e7c24:
    if (ctx->pc == 0x3E7C24u) {
        ctx->pc = 0x3E7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C20u;
        // 0x3e7c24: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C28u;
        goto label_3e7c28;
    }
    ctx->pc = 0x3E7C20u;
    SET_GPR_U32(ctx, 31, 0x3E7C28u);
    ctx->pc = 0x3E7C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C20u;
    // 0x3e7c24: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3E7C20u, 0x3E7C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C28u;
label_3e7c28:
    // 0x3e7c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c2c:
    // 0x3e7c2c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3e7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3e7c30:
    // 0x3e7c30: 0x80820086  lb          $v0, 0x86($a0)
    ctx->pc = 0x3e7c30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
label_3e7c34:
    // 0x3e7c34: 0x54430030  bnel        $v0, $v1, . + 4 + (0x30 << 2)
label_3e7c38:
    if (ctx->pc == 0x3E7C38u) {
        ctx->pc = 0x3E7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C34u;
        // 0x3e7c38: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C3Cu;
        goto label_3e7c3c;
    }
    ctx->pc = 0x3E7C34u;
    {
        const bool branch_taken_0x3e7c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e7c34) {
            ctx->pc = 0x3E7C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C34u;
            // 0x3e7c38: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7CF8u;
            goto label_3e7cf8;
        }
    }
    ctx->pc = 0x3E7C3Cu;
label_3e7c3c:
    // 0x3e7c3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3e7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3e7c40:
    // 0x3e7c40: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x3e7c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_3e7c44:
    // 0x3e7c44: 0xc10c313  jal         func_430C4C
label_3e7c48:
    if (ctx->pc == 0x3E7C48u) {
        ctx->pc = 0x3E7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C44u;
        // 0x3e7c48: 0x244557a0  addiu       $a1, $v0, 0x57A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C4Cu;
        goto label_3e7c4c;
    }
    ctx->pc = 0x3E7C44u;
    SET_GPR_U32(ctx, 31, 0x3E7C4Cu);
    ctx->pc = 0x3E7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C44u;
    // 0x3e7c48: 0x244557a0  addiu       $a1, $v0, 0x57A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3E7C44u, 0x3E7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C4Cu;
label_3e7c4c:
    // 0x3e7c4c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_3e7c50:
    if (ctx->pc == 0x3E7C50u) {
        ctx->pc = 0x3E7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C4Cu;
        // 0x3e7c50: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C54u;
        goto label_3e7c54;
    }
    ctx->pc = 0x3E7C4Cu;
    {
        const bool branch_taken_0x3e7c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C4Cu;
        // 0x3e7c50: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c4c) {
            ctx->pc = 0x3E7CF8u;
            goto label_3e7cf8;
        }
    }
    ctx->pc = 0x3E7C54u;
label_3e7c54:
    // 0x3e7c54: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x3e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_3e7c58:
    // 0x3e7c58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e7c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c5c:
    // 0x3e7c5c: 0xc0e63f8  jal         func_398FE0
label_3e7c60:
    if (ctx->pc == 0x3E7C60u) {
        ctx->pc = 0x3E7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C5Cu;
        // 0x3e7c60: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C64u;
        goto label_3e7c64;
    }
    ctx->pc = 0x3E7C5Cu;
    SET_GPR_U32(ctx, 31, 0x3E7C64u);
    ctx->pc = 0x3E7C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C5Cu;
    // 0x3e7c60: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398FE0u, 0x3E7C5Cu, 0x3E7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C64u;
label_3e7c64:
    // 0x3e7c64: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x3e7c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
label_3e7c68:
    // 0x3e7c68: 0xc0e4080  jal         func_390200
label_3e7c6c:
    if (ctx->pc == 0x3E7C6Cu) {
        ctx->pc = 0x3E7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C68u;
        // 0x3e7c6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C70u;
        goto label_3e7c70;
    }
    ctx->pc = 0x3E7C68u;
    SET_GPR_U32(ctx, 31, 0x3E7C70u);
    ctx->pc = 0x3E7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C68u;
    // 0x3e7c6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3E7C68u, 0x3E7C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C70u;
label_3e7c70:
    // 0x3e7c70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e7c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c74:
    // 0x3e7c74: 0x12560020  beq         $s2, $s6, . + 4 + (0x20 << 2)
label_3e7c78:
    if (ctx->pc == 0x3E7C78u) {
        ctx->pc = 0x3E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C74u;
        // 0x3e7c78: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C7Cu;
        goto label_3e7c7c;
    }
    ctx->pc = 0x3E7C74u;
    {
        const bool branch_taken_0x3e7c74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x3E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C74u;
        // 0x3e7c78: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c74) {
            ctx->pc = 0x3E7CF8u;
            goto label_3e7cf8;
        }
    }
    ctx->pc = 0x3E7C7Cu;
label_3e7c7c:
    // 0x3e7c7c: 0xc0e8630  jal         func_3A18C0
label_3e7c80:
    if (ctx->pc == 0x3E7C80u) {
        ctx->pc = 0x3E7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C7Cu;
        // 0x3e7c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C84u;
        goto label_3e7c84;
    }
    ctx->pc = 0x3E7C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E7C84u);
    ctx->pc = 0x3E7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C7Cu;
    // 0x3e7c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3E7C7Cu, 0x3E7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C84u;
label_3e7c84:
    // 0x3e7c84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e7c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c88:
    // 0x3e7c88: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
label_3e7c8c:
    if (ctx->pc == 0x3E7C8Cu) {
        ctx->pc = 0x3E7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C88u;
        // 0x3e7c8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C90u;
        goto label_3e7c90;
    }
    ctx->pc = 0x3E7C88u;
    {
        const bool branch_taken_0x3e7c88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C88u;
        // 0x3e7c8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c88) {
            ctx->pc = 0x3E7CD8u;
            goto label_3e7cd8;
        }
    }
    ctx->pc = 0x3E7C90u;
label_3e7c90:
    // 0x3e7c90: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3e7c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3e7c94:
    // 0x3e7c94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e7c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c98:
    // 0x3e7c98: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3e7c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3e7c9c:
    // 0x3e7c9c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_3e7ca0:
    if (ctx->pc == 0x3E7CA0u) {
        ctx->pc = 0x3E7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C9Cu;
        // 0x3e7ca0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CA4u;
        goto label_3e7ca4;
    }
    ctx->pc = 0x3E7C9Cu;
    {
        const bool branch_taken_0x3e7c9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C9Cu;
        // 0x3e7ca0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c9c) {
            ctx->pc = 0x3E7CD8u;
            goto label_3e7cd8;
        }
    }
    ctx->pc = 0x3E7CA4u;
label_3e7ca4:
    // 0x3e7ca4: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x3e7ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_3e7ca8:
    // 0x3e7ca8: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x3e7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_3e7cac:
    // 0x3e7cac: 0xc0e409a  jal         func_390268
label_3e7cb0:
    if (ctx->pc == 0x3E7CB0u) {
        ctx->pc = 0x3E7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CACu;
        // 0x3e7cb0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CB4u;
        goto label_3e7cb4;
    }
    ctx->pc = 0x3E7CACu;
    SET_GPR_U32(ctx, 31, 0x3E7CB4u);
    ctx->pc = 0x3E7CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CACu;
    // 0x3e7cb0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3E7CACu, 0x3E7CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CB4u;
label_3e7cb4:
    // 0x3e7cb4: 0xc0e896e  jal         func_3A25B8
label_3e7cb8:
    if (ctx->pc == 0x3E7CB8u) {
        ctx->pc = 0x3E7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CB4u;
        // 0x3e7cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CBCu;
        goto label_3e7cbc;
    }
    ctx->pc = 0x3E7CB4u;
    SET_GPR_U32(ctx, 31, 0x3E7CBCu);
    ctx->pc = 0x3E7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CB4u;
    // 0x3e7cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3E7CB4u, 0x3E7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CBCu;
label_3e7cbc:
    // 0x3e7cbc: 0x1054001c  beq         $v0, $s4, . + 4 + (0x1C << 2)
label_3e7cc0:
    if (ctx->pc == 0x3E7CC0u) {
        ctx->pc = 0x3E7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CBCu;
        // 0x3e7cc0: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CC4u;
        goto label_3e7cc4;
    }
    ctx->pc = 0x3E7CBCu;
    {
        const bool branch_taken_0x3e7cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3E7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CBCu;
        // 0x3e7cc0: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7cbc) {
            ctx->pc = 0x3E7D30u;
            goto label_3e7d30;
        }
    }
    ctx->pc = 0x3E7CC4u;
label_3e7cc4:
    // 0x3e7cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e7cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e7cc8:
    // 0x3e7cc8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3e7cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3e7ccc:
    // 0x3e7ccc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3e7cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e7cd0:
    // 0x3e7cd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3e7cd4:
    if (ctx->pc == 0x3E7CD4u) {
        ctx->pc = 0x3E7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CD0u;
        // 0x3e7cd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CD8u;
        goto label_3e7cd8;
    }
    ctx->pc = 0x3E7CD0u;
    {
        const bool branch_taken_0x3e7cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CD0u;
        // 0x3e7cd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7cd0) {
            ctx->pc = 0x3E7CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7ca8;
        }
    }
    ctx->pc = 0x3E7CD8u;
label_3e7cd8:
    // 0x3e7cd8: 0xc0e8616  jal         func_3A1858
label_3e7cdc:
    if (ctx->pc == 0x3E7CDCu) {
        ctx->pc = 0x3E7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CD8u;
        // 0x3e7cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CE0u;
        goto label_3e7ce0;
    }
    ctx->pc = 0x3E7CD8u;
    SET_GPR_U32(ctx, 31, 0x3E7CE0u);
    ctx->pc = 0x3E7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CD8u;
    // 0x3e7cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E7CD8u, 0x3E7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CE0u;
label_3e7ce0:
    // 0x3e7ce0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3e7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e7ce4:
    // 0x3e7ce4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e7ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e7ce8:
    // 0x3e7ce8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e7cec:
    // 0x3e7cec: 0x60f809  jalr        $v1
label_3e7cf0:
    if (ctx->pc == 0x3E7CF0u) {
        ctx->pc = 0x3E7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CECu;
        // 0x3e7cf0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CF4u;
        goto label_3e7cf4;
    }
    ctx->pc = 0x3E7CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7CF4u);
        ctx->pc = 0x3E7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CECu;
        // 0x3e7cf0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7CECu, 0x3E7CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7CF4u;
label_3e7cf4:
    // 0x3e7cf4: 0x8fc42c7c  lw          $a0, 0x2C7C($fp)
    ctx->pc = 0x3e7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_3e7cf8:
    // 0x3e7cf8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3e7cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e7cfc:
    // 0x3e7cfc: 0x8c830840  lw          $v1, 0x840($a0)
    ctx->pc = 0x3e7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2112)));
label_3e7d00:
    // 0x3e7d00: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x3e7d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_3e7d04:
    // 0x3e7d04: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3e7d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e7d08:
    // 0x3e7d08: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_3e7d0c:
    if (ctx->pc == 0x3E7D0Cu) {
        ctx->pc = 0x3E7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D08u;
        // 0x3e7d0c: 0x8fc22c7c  lw          $v0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D10u;
        goto label_3e7d10;
    }
    ctx->pc = 0x3E7D08u;
    {
        const bool branch_taken_0x3e7d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D08u;
        // 0x3e7d0c: 0x8fc22c7c  lw          $v0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d08) {
            ctx->pc = 0x3E7C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7c00;
        }
    }
    ctx->pc = 0x3E7D10u;
label_3e7d10:
    // 0x3e7d10: 0x8ee30030  lw          $v1, 0x30($s7)
    ctx->pc = 0x3e7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_3e7d14:
    // 0x3e7d14: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3e7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e7d18:
    // 0x3e7d18: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_3e7d1c:
    if (ctx->pc == 0x3E7D1Cu) {
        ctx->pc = 0x3E7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D18u;
        // 0x3e7d1c: 0x8ee50034  lw          $a1, 0x34($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D20u;
        goto label_3e7d20;
    }
    ctx->pc = 0x3E7D18u;
    {
        const bool branch_taken_0x3e7d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7d18) {
            ctx->pc = 0x3E7D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7D18u;
            // 0x3e7d1c: 0x8ee50034  lw          $a1, 0x34($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D54u;
            goto label_3e7d54;
        }
    }
    ctx->pc = 0x3E7D20u;
label_3e7d20:
    // 0x3e7d20: 0xc0e8616  jal         func_3A1858
label_3e7d24:
    if (ctx->pc == 0x3E7D24u) {
        ctx->pc = 0x3E7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D20u;
        // 0x3e7d24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D28u;
        goto label_3e7d28;
    }
    ctx->pc = 0x3E7D20u;
    SET_GPR_U32(ctx, 31, 0x3E7D28u);
    ctx->pc = 0x3E7D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D20u;
    // 0x3e7d24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E7D20u, 0x3E7D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D28u;
label_3e7d28:
    // 0x3e7d28: 0x10000070  b           . + 4 + (0x70 << 2)
label_3e7d2c:
    if (ctx->pc == 0x3E7D2Cu) {
        ctx->pc = 0x3E7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D28u;
        // 0x3e7d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D30u;
        goto label_3e7d30;
    }
    ctx->pc = 0x3E7D28u;
    {
        const bool branch_taken_0x3e7d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D28u;
        // 0x3e7d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d28) {
            ctx->pc = 0x3E7EECu;
            goto label_3e7eec;
        }
    }
    ctx->pc = 0x3E7D30u;
label_3e7d30:
    // 0x3e7d30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7d34:
    // 0x3e7d34: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e7d38:
    // 0x3e7d38: 0xaee20034  sw          $v0, 0x34($s7)
    ctx->pc = 0x3e7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 2));
label_3e7d3c:
    // 0x3e7d3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e7d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e7d40:
    // 0x3e7d40: 0xaee30030  sw          $v1, 0x30($s7)
    ctx->pc = 0x3e7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 3));
label_3e7d44:
    // 0x3e7d44: 0xc0e858c  jal         func_3A1630
label_3e7d48:
    if (ctx->pc == 0x3E7D48u) {
        ctx->pc = 0x3E7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D44u;
        // 0x3e7d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D4Cu;
        goto label_3e7d4c;
    }
    ctx->pc = 0x3E7D44u;
    SET_GPR_U32(ctx, 31, 0x3E7D4Cu);
    ctx->pc = 0x3E7D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D44u;
    // 0x3e7d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E7D44u, 0x3E7D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D4Cu;
label_3e7d4c:
    // 0x3e7d4c: 0x10000067  b           . + 4 + (0x67 << 2)
label_3e7d50:
    if (ctx->pc == 0x3E7D50u) {
        ctx->pc = 0x3E7D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D4Cu;
        // 0x3e7d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D54u;
        goto label_3e7d54;
    }
    ctx->pc = 0x3E7D4Cu;
    {
        const bool branch_taken_0x3e7d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D4Cu;
        // 0x3e7d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d4c) {
            ctx->pc = 0x3E7EECu;
            goto label_3e7eec;
        }
    }
    ctx->pc = 0x3E7D54u;
label_3e7d54:
    // 0x3e7d54: 0xc0e858c  jal         func_3A1630
label_3e7d58:
    if (ctx->pc == 0x3E7D58u) {
        ctx->pc = 0x3E7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D54u;
        // 0x3e7d58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D5Cu;
        goto label_3e7d5c;
    }
    ctx->pc = 0x3E7D54u;
    SET_GPR_U32(ctx, 31, 0x3E7D5Cu);
    ctx->pc = 0x3E7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D54u;
    // 0x3e7d58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E7D54u, 0x3E7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D5Cu;
label_3e7d5c:
    // 0x3e7d5c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3e7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3e7d60:
    // 0x3e7d60: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e7d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e7d64:
    // 0x3e7d64: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e7d68:
    // 0x3e7d68: 0x40f809  jalr        $v0
label_3e7d6c:
    if (ctx->pc == 0x3E7D6Cu) {
        ctx->pc = 0x3E7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D68u;
        // 0x3e7d6c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D70u;
        goto label_3e7d70;
    }
    ctx->pc = 0x3E7D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7D70u);
        ctx->pc = 0x3E7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D68u;
        // 0x3e7d6c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7D68u, 0x3E7D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7D70u;
label_3e7d70:
    // 0x3e7d70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e7d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7d74:
    // 0x3e7d74: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3e7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3e7d78:
    // 0x3e7d78: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3e7d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3e7d7c:
    // 0x3e7d7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3e7d80:
    if (ctx->pc == 0x3E7D80u) {
        ctx->pc = 0x3E7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D7Cu;
        // 0x3e7d80: 0x3c040200  lui         $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D84u;
        goto label_3e7d84;
    }
    ctx->pc = 0x3E7D7Cu;
    {
        const bool branch_taken_0x3e7d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D7Cu;
        // 0x3e7d80: 0x3c040200  lui         $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d7c) {
            ctx->pc = 0x3E7DA8u;
            goto label_3e7da8;
        }
    }
    ctx->pc = 0x3E7D84u;
label_3e7d84:
    // 0x3e7d84: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x3e7d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_3e7d88:
    // 0x3e7d88: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3e7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3e7d8c:
    // 0x3e7d8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e7d90:
    // 0x3e7d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e7d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e7d94:
    // 0x3e7d94: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3e7d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3e7d98:
    // 0x3e7d98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e7d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3e7d9c:
    // 0x3e7d9c: 0xaec30054  sw          $v1, 0x54($s6)
    ctx->pc = 0x3e7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 3));
label_3e7da0:
    // 0x3e7da0: 0xaee50034  sw          $a1, 0x34($s7)
    ctx->pc = 0x3e7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 5));
label_3e7da4:
    // 0x3e7da4: 0xaee00030  sw          $zero, 0x30($s7)
    ctx->pc = 0x3e7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 0));
label_3e7da8:
    // 0x3e7da8: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x3e7da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_3e7dac:
    // 0x3e7dac: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3e7db0:
    if (ctx->pc == 0x3E7DB0u) {
        ctx->pc = 0x3E7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DACu;
        // 0x3e7db0: 0x8ee30030  lw          $v1, 0x30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DB4u;
        goto label_3e7db4;
    }
    ctx->pc = 0x3E7DACu;
    {
        const bool branch_taken_0x3e7dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7dac) {
            ctx->pc = 0x3E7DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7DACu;
            // 0x3e7db0: 0x8ee30030  lw          $v1, 0x30($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7E0Cu;
            goto label_3e7e0c;
        }
    }
    ctx->pc = 0x3E7DB4u;
label_3e7db4:
    // 0x3e7db4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3e7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3e7db8:
    // 0x3e7db8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3e7db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3e7dbc:
    // 0x3e7dbc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3e7dc0:
    if (ctx->pc == 0x3E7DC0u) {
        ctx->pc = 0x3E7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DBCu;
        // 0x3e7dc0: 0x8ee20038  lw          $v0, 0x38($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DC4u;
        goto label_3e7dc4;
    }
    ctx->pc = 0x3E7DBCu;
    {
        const bool branch_taken_0x3e7dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7dbc) {
            ctx->pc = 0x3E7DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7DBCu;
            // 0x3e7dc0: 0x8ee20038  lw          $v0, 0x38($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7DD4u;
            goto label_3e7dd4;
        }
    }
    ctx->pc = 0x3E7DC4u;
label_3e7dc4:
    // 0x3e7dc4: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x3e7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_3e7dc8:
    // 0x3e7dc8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3e7dcc:
    if (ctx->pc == 0x3E7DCCu) {
        ctx->pc = 0x3E7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DC8u;
        // 0x3e7dcc: 0x8ee30030  lw          $v1, 0x30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DD0u;
        goto label_3e7dd0;
    }
    ctx->pc = 0x3E7DC8u;
    {
        const bool branch_taken_0x3e7dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7dc8) {
            ctx->pc = 0x3E7DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7DC8u;
            // 0x3e7dcc: 0x8ee30030  lw          $v1, 0x30($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7E0Cu;
            goto label_3e7e0c;
        }
    }
    ctx->pc = 0x3E7DD0u;
label_3e7dd0:
    // 0x3e7dd0: 0x8ee20038  lw          $v0, 0x38($s7)
    ctx->pc = 0x3e7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
label_3e7dd4:
    // 0x3e7dd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7dd8:
    // 0x3e7dd8: 0xaee30034  sw          $v1, 0x34($s7)
    ctx->pc = 0x3e7dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 3));
label_3e7ddc:
    // 0x3e7ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e7de0:
    // 0x3e7de0: 0x2c43002e  sltiu       $v1, $v0, 0x2E
    ctx->pc = 0x3e7de0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
label_3e7de4:
    // 0x3e7de4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3e7de8:
    if (ctx->pc == 0x3E7DE8u) {
        ctx->pc = 0x3E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DE4u;
        // 0x3e7de8: 0xaee20038  sw          $v0, 0x38($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DECu;
        goto label_3e7dec;
    }
    ctx->pc = 0x3E7DE4u;
    {
        const bool branch_taken_0x3e7de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DE4u;
        // 0x3e7de8: 0xaee20038  sw          $v0, 0x38($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7de4) {
            ctx->pc = 0x3E7E08u;
            goto label_3e7e08;
        }
    }
    ctx->pc = 0x3E7DECu;
label_3e7dec:
    // 0x3e7dec: 0xaee00038  sw          $zero, 0x38($s7)
    ctx->pc = 0x3e7decu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 0));
label_3e7df0:
    // 0x3e7df0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3e7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3e7df4:
    // 0x3e7df4: 0xaee00030  sw          $zero, 0x30($s7)
    ctx->pc = 0x3e7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 0));
label_3e7df8:
    // 0x3e7df8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3e7df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3e7dfc:
    // 0x3e7dfc: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x3e7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_3e7e00:
    // 0x3e7e00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7e04:
    // 0x3e7e04: 0xaec20054  sw          $v0, 0x54($s6)
    ctx->pc = 0x3e7e04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 2));
label_3e7e08:
    // 0x3e7e08: 0x8ee30030  lw          $v1, 0x30($s7)
    ctx->pc = 0x3e7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_3e7e0c:
    // 0x3e7e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e7e10:
    // 0x3e7e10: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_3e7e14:
    if (ctx->pc == 0x3E7E14u) {
        ctx->pc = 0x3E7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E10u;
        // 0x3e7e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E18u;
        goto label_3e7e18;
    }
    ctx->pc = 0x3E7E10u;
    {
        const bool branch_taken_0x3e7e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E10u;
        // 0x3e7e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e10) {
            ctx->pc = 0x3E7EECu;
            goto label_3e7eec;
        }
    }
    ctx->pc = 0x3E7E18u;
label_3e7e18:
    // 0x3e7e18: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x3e7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_3e7e1c:
    // 0x3e7e1c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3e7e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3e7e20:
    // 0x3e7e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e7e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e7e24:
    // 0x3e7e24: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_3e7e28:
    if (ctx->pc == 0x3E7E28u) {
        ctx->pc = 0x3E7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E24u;
        // 0x3e7e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E2Cu;
        goto label_3e7e2c;
    }
    ctx->pc = 0x3E7E24u;
    {
        const bool branch_taken_0x3e7e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E24u;
        // 0x3e7e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e24) {
            ctx->pc = 0x3E7EECu;
            goto label_3e7eec;
        }
    }
    ctx->pc = 0x3E7E2Cu;
label_3e7e2c:
    // 0x3e7e2c: 0xc0e8630  jal         func_3A18C0
label_3e7e30:
    if (ctx->pc == 0x3E7E30u) {
        ctx->pc = 0x3E7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E2Cu;
        // 0x3e7e30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E34u;
        goto label_3e7e34;
    }
    ctx->pc = 0x3E7E2Cu;
    SET_GPR_U32(ctx, 31, 0x3E7E34u);
    ctx->pc = 0x3E7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E2Cu;
    // 0x3e7e30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3E7E2Cu, 0x3E7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E34u;
label_3e7e34:
    // 0x3e7e34: 0xc08a61a  jal         func_229868
label_3e7e38:
    if (ctx->pc == 0x3E7E38u) {
        ctx->pc = 0x3E7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E34u;
        // 0x3e7e38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E3Cu;
        goto label_3e7e3c;
    }
    ctx->pc = 0x3E7E34u;
    SET_GPR_U32(ctx, 31, 0x3E7E3Cu);
    ctx->pc = 0x3E7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E34u;
    // 0x3e7e38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3E7E34u, 0x3E7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E3Cu;
label_3e7e3c:
    // 0x3e7e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7e40:
    // 0x3e7e40: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_3e7e44:
    if (ctx->pc == 0x3E7E44u) {
        ctx->pc = 0x3E7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E40u;
        // 0x3e7e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E48u;
        goto label_3e7e48;
    }
    ctx->pc = 0x3E7E40u;
    {
        const bool branch_taken_0x3e7e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E40u;
        // 0x3e7e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e40) {
            ctx->pc = 0x3E7EECu;
            goto label_3e7eec;
        }
    }
    ctx->pc = 0x3E7E48u;
label_3e7e48:
    // 0x3e7e48: 0xc089f86  jal         func_227E18
label_3e7e4c:
    if (ctx->pc == 0x3E7E4Cu) {
        ctx->pc = 0x3E7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E48u;
        // 0x3e7e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E50u;
        goto label_3e7e50;
    }
    ctx->pc = 0x3E7E48u;
    SET_GPR_U32(ctx, 31, 0x3E7E50u);
    ctx->pc = 0x3E7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E48u;
    // 0x3e7e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x3E7E48u, 0x3E7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E50u;
label_3e7e50:
    // 0x3e7e50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e7e54:
    if (ctx->pc == 0x3E7E54u) {
        ctx->pc = 0x3E7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E50u;
        // 0x3e7e54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E58u;
        goto label_3e7e58;
    }
    ctx->pc = 0x3E7E50u;
    {
        const bool branch_taken_0x3e7e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E50u;
        // 0x3e7e54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e50) {
            ctx->pc = 0x3E7E68u;
            goto label_3e7e68;
        }
    }
    ctx->pc = 0x3E7E58u;
label_3e7e58:
    // 0x3e7e58: 0xc089f76  jal         func_227DD8
label_3e7e5c:
    if (ctx->pc == 0x3E7E5Cu) {
        ctx->pc = 0x3E7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E58u;
        // 0x3e7e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E60u;
        goto label_3e7e60;
    }
    ctx->pc = 0x3E7E58u;
    SET_GPR_U32(ctx, 31, 0x3E7E60u);
    ctx->pc = 0x3E7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E58u;
    // 0x3e7e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x3E7E58u, 0x3E7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E60u;
label_3e7e60:
    // 0x3e7e60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e7e64:
    if (ctx->pc == 0x3E7E64u) {
        ctx->pc = 0x3E7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E60u;
        // 0x3e7e64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E68u;
        goto label_3e7e68;
    }
    ctx->pc = 0x3E7E60u;
    {
        const bool branch_taken_0x3e7e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E60u;
        // 0x3e7e64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e60) {
            ctx->pc = 0x3E7EE8u;
            goto label_3e7ee8;
        }
    }
    ctx->pc = 0x3E7E68u;
label_3e7e68:
    // 0x3e7e68: 0xc0e8dee  jal         func_3A37B8
label_3e7e6c:
    if (ctx->pc == 0x3E7E6Cu) {
        ctx->pc = 0x3E7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E68u;
        // 0x3e7e6c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E70u;
        goto label_3e7e70;
    }
    ctx->pc = 0x3E7E68u;
    SET_GPR_U32(ctx, 31, 0x3E7E70u);
    ctx->pc = 0x3E7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E68u;
    // 0x3e7e6c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3E7E68u, 0x3E7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E70u;
label_3e7e70:
    // 0x3e7e70: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3e7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3e7e74:
    // 0x3e7e74: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_3e7e78:
    if (ctx->pc == 0x3E7E78u) {
        ctx->pc = 0x3E7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E74u;
        // 0x3e7e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E7Cu;
        goto label_3e7e7c;
    }
    ctx->pc = 0x3E7E74u;
    {
        const bool branch_taken_0x3e7e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E74u;
        // 0x3e7e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e74) {
            ctx->pc = 0x3E7EECu;
            goto label_3e7eec;
        }
    }
    ctx->pc = 0x3E7E7Cu;
label_3e7e7c:
    // 0x3e7e7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e7e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e7e80:
    // 0x3e7e80: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e7e84:
    // 0x3e7e84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e7e88:
    // 0x3e7e88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e7e8c:
    // 0x3e7e8c: 0x0  nop
    ctx->pc = 0x3e7e8cu;
    // NOP
label_3e7e90:
    // 0x3e7e90: 0x0  nop
    ctx->pc = 0x3e7e90u;
    // NOP
label_3e7e94:
    // 0x3e7e94: 0x0  nop
    ctx->pc = 0x3e7e94u;
    // NOP
label_3e7e98:
    // 0x3e7e98: 0x0  nop
    ctx->pc = 0x3e7e98u;
    // NOP
label_3e7e9c:
    // 0x3e7e9c: 0x0  nop
    ctx->pc = 0x3e7e9cu;
    // NOP
label_3e7ea0:
    // 0x3e7ea0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e7ea4:
    if (ctx->pc == 0x3E7EA4u) {
        ctx->pc = 0x3E7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EA0u;
        // 0x3e7ea4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EA8u;
        goto label_3e7ea8;
    }
    ctx->pc = 0x3E7EA0u;
    {
        const bool branch_taken_0x3e7ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EA0u;
        // 0x3e7ea4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ea0) {
            ctx->pc = 0x3E7E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7e90;
        }
    }
    ctx->pc = 0x3E7EA8u;
label_3e7ea8:
    // 0x3e7ea8: 0xc138ddc  jal         func_4E3770
label_3e7eac:
    if (ctx->pc == 0x3E7EACu) {
        ctx->pc = 0x3E7EB0u;
        goto label_3e7eb0;
    }
    ctx->pc = 0x3E7EA8u;
    SET_GPR_U32(ctx, 31, 0x3E7EB0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E7EA8u, 0x3E7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7EB0u;
label_3e7eb0:
    // 0x3e7eb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e7eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e7eb4:
    // 0x3e7eb4: 0xc0ea176  jal         func_3A85D8
label_3e7eb8:
    if (ctx->pc == 0x3E7EB8u) {
        ctx->pc = 0x3E7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EB4u;
        // 0x3e7eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EBCu;
        goto label_3e7ebc;
    }
    ctx->pc = 0x3E7EB4u;
    SET_GPR_U32(ctx, 31, 0x3E7EBCu);
    ctx->pc = 0x3E7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7EB4u;
    // 0x3e7eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3E7EB4u, 0x3E7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7EBCu;
label_3e7ebc:
    // 0x3e7ebc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e7ec0:
    // 0x3e7ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e7ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e7ec4:
    // 0x3e7ec4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3e7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3e7ec8:
    // 0x3e7ec8: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e7ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e7ecc:
    // 0x3e7ecc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e7eccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3e7ed0:
    // 0x3e7ed0: 0xc0ea158  jal         func_3A8560
label_3e7ed4:
    if (ctx->pc == 0x3E7ED4u) {
        ctx->pc = 0x3E7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7ED0u;
        // 0x3e7ed4: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7ED8u;
        goto label_3e7ed8;
    }
    ctx->pc = 0x3E7ED0u;
    SET_GPR_U32(ctx, 31, 0x3E7ED8u);
    ctx->pc = 0x3E7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7ED0u;
    // 0x3e7ed4: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3E7ED0u, 0x3E7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7ED8u;
label_3e7ed8:
    // 0x3e7ed8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e7ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e7edc:
    // 0x3e7edc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3e7edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e7ee0:
    // 0x3e7ee0: 0xc0f9e56  jal         func_3E7958
label_3e7ee4:
    if (ctx->pc == 0x3E7EE4u) {
        ctx->pc = 0x3E7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EE0u;
        // 0x3e7ee4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EE8u;
        goto label_3e7ee8;
    }
    ctx->pc = 0x3E7EE0u;
    SET_GPR_U32(ctx, 31, 0x3E7EE8u);
    ctx->pc = 0x3E7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7EE0u;
    // 0x3e7ee4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7958u, 0x3E7EE0u, 0x3E7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7EE8u;
label_3e7ee8:
    // 0x3e7ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e7ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7eec:
    // 0x3e7eec: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3e7eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3e7ef0:
    // 0x3e7ef0: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3e7ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3e7ef4:
    // 0x3e7ef4: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3e7ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3e7ef8:
    // 0x3e7ef8: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3e7ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3e7efc:
    // 0x3e7efc: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x3e7efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e7f00:
    // 0x3e7f00: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x3e7f00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e7f04:
    // 0x3e7f04: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x3e7f04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e7f08:
    // 0x3e7f08: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x3e7f08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e7f0c:
    // 0x3e7f0c: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x3e7f0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e7f10:
    // 0x3e7f10: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3e7f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e7f14:
    // 0x3e7f14: 0x3e00008  jr          $ra
label_3e7f18:
    if (ctx->pc == 0x3E7F18u) {
        ctx->pc = 0x3E7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F14u;
        // 0x3e7f18: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F1Cu;
        goto label_3e7f1c;
    }
    ctx->pc = 0x3E7F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F14u;
        // 0x3e7f18: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7F1Cu;
label_3e7f1c:
    // 0x3e7f1c: 0x0  nop
    ctx->pc = 0x3e7f1cu;
    // NOP
    ctx->pc = 0x3e7f20u;
}
