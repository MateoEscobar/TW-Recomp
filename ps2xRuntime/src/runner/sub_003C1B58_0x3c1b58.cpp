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

// Function: sub_003C1B58
// Address: 0x3c1b58 - 0x3c1e58
void sub_003C1B58_0x3c1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1B58_0x3c1b58");
#endif

    switch (ctx->pc) {
        case 0x3c1b58u: goto label_3c1b58;
        case 0x3c1b5cu: goto label_3c1b5c;
        case 0x3c1b60u: goto label_3c1b60;
        case 0x3c1b64u: goto label_3c1b64;
        case 0x3c1b68u: goto label_3c1b68;
        case 0x3c1b6cu: goto label_3c1b6c;
        case 0x3c1b70u: goto label_3c1b70;
        case 0x3c1b74u: goto label_3c1b74;
        case 0x3c1b78u: goto label_3c1b78;
        case 0x3c1b7cu: goto label_3c1b7c;
        case 0x3c1b80u: goto label_3c1b80;
        case 0x3c1b84u: goto label_3c1b84;
        case 0x3c1b88u: goto label_3c1b88;
        case 0x3c1b8cu: goto label_3c1b8c;
        case 0x3c1b90u: goto label_3c1b90;
        case 0x3c1b94u: goto label_3c1b94;
        case 0x3c1b98u: goto label_3c1b98;
        case 0x3c1b9cu: goto label_3c1b9c;
        case 0x3c1ba0u: goto label_3c1ba0;
        case 0x3c1ba4u: goto label_3c1ba4;
        case 0x3c1ba8u: goto label_3c1ba8;
        case 0x3c1bacu: goto label_3c1bac;
        case 0x3c1bb0u: goto label_3c1bb0;
        case 0x3c1bb4u: goto label_3c1bb4;
        case 0x3c1bb8u: goto label_3c1bb8;
        case 0x3c1bbcu: goto label_3c1bbc;
        case 0x3c1bc0u: goto label_3c1bc0;
        case 0x3c1bc4u: goto label_3c1bc4;
        case 0x3c1bc8u: goto label_3c1bc8;
        case 0x3c1bccu: goto label_3c1bcc;
        case 0x3c1bd0u: goto label_3c1bd0;
        case 0x3c1bd4u: goto label_3c1bd4;
        case 0x3c1bd8u: goto label_3c1bd8;
        case 0x3c1bdcu: goto label_3c1bdc;
        case 0x3c1be0u: goto label_3c1be0;
        case 0x3c1be4u: goto label_3c1be4;
        case 0x3c1be8u: goto label_3c1be8;
        case 0x3c1becu: goto label_3c1bec;
        case 0x3c1bf0u: goto label_3c1bf0;
        case 0x3c1bf4u: goto label_3c1bf4;
        case 0x3c1bf8u: goto label_3c1bf8;
        case 0x3c1bfcu: goto label_3c1bfc;
        case 0x3c1c00u: goto label_3c1c00;
        case 0x3c1c04u: goto label_3c1c04;
        case 0x3c1c08u: goto label_3c1c08;
        case 0x3c1c0cu: goto label_3c1c0c;
        case 0x3c1c10u: goto label_3c1c10;
        case 0x3c1c14u: goto label_3c1c14;
        case 0x3c1c18u: goto label_3c1c18;
        case 0x3c1c1cu: goto label_3c1c1c;
        case 0x3c1c20u: goto label_3c1c20;
        case 0x3c1c24u: goto label_3c1c24;
        case 0x3c1c28u: goto label_3c1c28;
        case 0x3c1c2cu: goto label_3c1c2c;
        case 0x3c1c30u: goto label_3c1c30;
        case 0x3c1c34u: goto label_3c1c34;
        case 0x3c1c38u: goto label_3c1c38;
        case 0x3c1c3cu: goto label_3c1c3c;
        case 0x3c1c40u: goto label_3c1c40;
        case 0x3c1c44u: goto label_3c1c44;
        case 0x3c1c48u: goto label_3c1c48;
        case 0x3c1c4cu: goto label_3c1c4c;
        case 0x3c1c50u: goto label_3c1c50;
        case 0x3c1c54u: goto label_3c1c54;
        case 0x3c1c58u: goto label_3c1c58;
        case 0x3c1c5cu: goto label_3c1c5c;
        case 0x3c1c60u: goto label_3c1c60;
        case 0x3c1c64u: goto label_3c1c64;
        case 0x3c1c68u: goto label_3c1c68;
        case 0x3c1c6cu: goto label_3c1c6c;
        case 0x3c1c70u: goto label_3c1c70;
        case 0x3c1c74u: goto label_3c1c74;
        case 0x3c1c78u: goto label_3c1c78;
        case 0x3c1c7cu: goto label_3c1c7c;
        case 0x3c1c80u: goto label_3c1c80;
        case 0x3c1c84u: goto label_3c1c84;
        case 0x3c1c88u: goto label_3c1c88;
        case 0x3c1c8cu: goto label_3c1c8c;
        case 0x3c1c90u: goto label_3c1c90;
        case 0x3c1c94u: goto label_3c1c94;
        case 0x3c1c98u: goto label_3c1c98;
        case 0x3c1c9cu: goto label_3c1c9c;
        case 0x3c1ca0u: goto label_3c1ca0;
        case 0x3c1ca4u: goto label_3c1ca4;
        case 0x3c1ca8u: goto label_3c1ca8;
        case 0x3c1cacu: goto label_3c1cac;
        case 0x3c1cb0u: goto label_3c1cb0;
        case 0x3c1cb4u: goto label_3c1cb4;
        case 0x3c1cb8u: goto label_3c1cb8;
        case 0x3c1cbcu: goto label_3c1cbc;
        case 0x3c1cc0u: goto label_3c1cc0;
        case 0x3c1cc4u: goto label_3c1cc4;
        case 0x3c1cc8u: goto label_3c1cc8;
        case 0x3c1cccu: goto label_3c1ccc;
        case 0x3c1cd0u: goto label_3c1cd0;
        case 0x3c1cd4u: goto label_3c1cd4;
        case 0x3c1cd8u: goto label_3c1cd8;
        case 0x3c1cdcu: goto label_3c1cdc;
        case 0x3c1ce0u: goto label_3c1ce0;
        case 0x3c1ce4u: goto label_3c1ce4;
        case 0x3c1ce8u: goto label_3c1ce8;
        case 0x3c1cecu: goto label_3c1cec;
        case 0x3c1cf0u: goto label_3c1cf0;
        case 0x3c1cf4u: goto label_3c1cf4;
        case 0x3c1cf8u: goto label_3c1cf8;
        case 0x3c1cfcu: goto label_3c1cfc;
        case 0x3c1d00u: goto label_3c1d00;
        case 0x3c1d04u: goto label_3c1d04;
        case 0x3c1d08u: goto label_3c1d08;
        case 0x3c1d0cu: goto label_3c1d0c;
        case 0x3c1d10u: goto label_3c1d10;
        case 0x3c1d14u: goto label_3c1d14;
        case 0x3c1d18u: goto label_3c1d18;
        case 0x3c1d1cu: goto label_3c1d1c;
        case 0x3c1d20u: goto label_3c1d20;
        case 0x3c1d24u: goto label_3c1d24;
        case 0x3c1d28u: goto label_3c1d28;
        case 0x3c1d2cu: goto label_3c1d2c;
        case 0x3c1d30u: goto label_3c1d30;
        case 0x3c1d34u: goto label_3c1d34;
        case 0x3c1d38u: goto label_3c1d38;
        case 0x3c1d3cu: goto label_3c1d3c;
        case 0x3c1d40u: goto label_3c1d40;
        case 0x3c1d44u: goto label_3c1d44;
        case 0x3c1d48u: goto label_3c1d48;
        case 0x3c1d4cu: goto label_3c1d4c;
        case 0x3c1d50u: goto label_3c1d50;
        case 0x3c1d54u: goto label_3c1d54;
        case 0x3c1d58u: goto label_3c1d58;
        case 0x3c1d5cu: goto label_3c1d5c;
        case 0x3c1d60u: goto label_3c1d60;
        case 0x3c1d64u: goto label_3c1d64;
        case 0x3c1d68u: goto label_3c1d68;
        case 0x3c1d6cu: goto label_3c1d6c;
        case 0x3c1d70u: goto label_3c1d70;
        case 0x3c1d74u: goto label_3c1d74;
        case 0x3c1d78u: goto label_3c1d78;
        case 0x3c1d7cu: goto label_3c1d7c;
        case 0x3c1d80u: goto label_3c1d80;
        case 0x3c1d84u: goto label_3c1d84;
        case 0x3c1d88u: goto label_3c1d88;
        case 0x3c1d8cu: goto label_3c1d8c;
        case 0x3c1d90u: goto label_3c1d90;
        case 0x3c1d94u: goto label_3c1d94;
        case 0x3c1d98u: goto label_3c1d98;
        case 0x3c1d9cu: goto label_3c1d9c;
        case 0x3c1da0u: goto label_3c1da0;
        case 0x3c1da4u: goto label_3c1da4;
        case 0x3c1da8u: goto label_3c1da8;
        case 0x3c1dacu: goto label_3c1dac;
        case 0x3c1db0u: goto label_3c1db0;
        case 0x3c1db4u: goto label_3c1db4;
        case 0x3c1db8u: goto label_3c1db8;
        case 0x3c1dbcu: goto label_3c1dbc;
        case 0x3c1dc0u: goto label_3c1dc0;
        case 0x3c1dc4u: goto label_3c1dc4;
        case 0x3c1dc8u: goto label_3c1dc8;
        case 0x3c1dccu: goto label_3c1dcc;
        case 0x3c1dd0u: goto label_3c1dd0;
        case 0x3c1dd4u: goto label_3c1dd4;
        case 0x3c1dd8u: goto label_3c1dd8;
        case 0x3c1ddcu: goto label_3c1ddc;
        case 0x3c1de0u: goto label_3c1de0;
        case 0x3c1de4u: goto label_3c1de4;
        case 0x3c1de8u: goto label_3c1de8;
        case 0x3c1decu: goto label_3c1dec;
        case 0x3c1df0u: goto label_3c1df0;
        case 0x3c1df4u: goto label_3c1df4;
        case 0x3c1df8u: goto label_3c1df8;
        case 0x3c1dfcu: goto label_3c1dfc;
        case 0x3c1e00u: goto label_3c1e00;
        case 0x3c1e04u: goto label_3c1e04;
        case 0x3c1e08u: goto label_3c1e08;
        case 0x3c1e0cu: goto label_3c1e0c;
        case 0x3c1e10u: goto label_3c1e10;
        case 0x3c1e14u: goto label_3c1e14;
        case 0x3c1e18u: goto label_3c1e18;
        case 0x3c1e1cu: goto label_3c1e1c;
        case 0x3c1e20u: goto label_3c1e20;
        case 0x3c1e24u: goto label_3c1e24;
        case 0x3c1e28u: goto label_3c1e28;
        case 0x3c1e2cu: goto label_3c1e2c;
        case 0x3c1e30u: goto label_3c1e30;
        case 0x3c1e34u: goto label_3c1e34;
        case 0x3c1e38u: goto label_3c1e38;
        case 0x3c1e3cu: goto label_3c1e3c;
        case 0x3c1e40u: goto label_3c1e40;
        case 0x3c1e44u: goto label_3c1e44;
        case 0x3c1e48u: goto label_3c1e48;
        case 0x3c1e4cu: goto label_3c1e4c;
        case 0x3c1e50u: goto label_3c1e50;
        case 0x3c1e54u: goto label_3c1e54;
        default: break;
    }

    ctx->pc = 0x3c1b58u;

label_3c1b58:
    // 0x3c1b58: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3c1b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3c1b5c:
    // 0x3c1b5c: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3c1b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3c1b60:
    // 0x3c1b60: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x3c1b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_3c1b64:
    // 0x3c1b64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c1b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b68:
    // 0x3c1b68: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3c1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3c1b6c:
    // 0x3c1b6c: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3c1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3c1b70:
    // 0x3c1b70: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3c1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3c1b74:
    // 0x3c1b74: 0x7fb50460  sq          $s5, 0x460($sp)
    ctx->pc = 0x3c1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 21));
label_3c1b78:
    // 0x3c1b78: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3c1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3c1b7c:
    // 0x3c1b7c: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3c1b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3c1b80:
    // 0x3c1b80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1b84:
    // 0x3c1b84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c1b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c1b88:
    // 0x3c1b88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1b8c:
    // 0x3c1b8c: 0x40f809  jalr        $v0
label_3c1b90:
    if (ctx->pc == 0x3C1B90u) {
        ctx->pc = 0x3C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B8Cu;
        // 0x3c1b90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B94u;
        goto label_3c1b94;
    }
    ctx->pc = 0x3C1B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1B94u);
        ctx->pc = 0x3C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B8Cu;
        // 0x3c1b90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1B8Cu, 0x3C1B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1B94u;
label_3c1b94:
    // 0x3c1b94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1b98:
    // 0x3c1b98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c1b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b9c:
    // 0x3c1b9c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c1b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c1ba0:
    // 0x3c1ba0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c1ba4:
    // 0x3c1ba4: 0x40f809  jalr        $v0
label_3c1ba8:
    if (ctx->pc == 0x3C1BA8u) {
        ctx->pc = 0x3C1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BA4u;
        // 0x3c1ba8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BACu;
        goto label_3c1bac;
    }
    ctx->pc = 0x3C1BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1BACu);
        ctx->pc = 0x3C1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BA4u;
        // 0x3c1ba8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1BA4u, 0x3C1BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1BACu;
label_3c1bac:
    // 0x3c1bac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3c1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3c1bb0:
    // 0x3c1bb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c1bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c1bb4:
    // 0x3c1bb4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3c1bb8:
    if (ctx->pc == 0x3C1BB8u) {
        ctx->pc = 0x3C1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BB4u;
        // 0x3c1bb8: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BBCu;
        goto label_3c1bbc;
    }
    ctx->pc = 0x3C1BB4u;
    {
        const bool branch_taken_0x3c1bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BB4u;
        // 0x3c1bb8: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bb4) {
            ctx->pc = 0x3C1CE4u;
            goto label_3c1ce4;
        }
    }
    ctx->pc = 0x3C1BBCu;
label_3c1bbc:
    // 0x3c1bbc: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3c1bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3c1bc0:
    // 0x3c1bc0: 0x3c06685b  lui         $a2, 0x685B
    ctx->pc = 0x3c1bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26715 << 16));
label_3c1bc4:
    // 0x3c1bc4: 0x3c078678  lui         $a3, 0x8678
    ctx->pc = 0x3c1bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34424 << 16));
label_3c1bc8:
    // 0x3c1bc8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c1bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c1bcc:
    // 0x3c1bcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c1bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bd0:
    // 0x3c1bd0: 0x34e75aff  ori         $a3, $a3, 0x5AFF
    ctx->pc = 0x3c1bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)23295);
label_3c1bd4:
    // 0x3c1bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c1bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bd8:
    // 0x3c1bd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c1bd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bdc:
    // 0x3c1bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1be0:
    // 0x3c1be0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c1be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c1be4:
    // 0x3c1be4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c1be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c1be8:
    // 0x3c1be8: 0xc0e9978  jal         func_3A65E0
label_3c1bec:
    if (ctx->pc == 0x3C1BECu) {
        ctx->pc = 0x3C1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BE8u;
        // 0x3c1bec: 0x34c63aff  ori         $a2, $a2, 0x3AFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15103);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BF0u;
        goto label_3c1bf0;
    }
    ctx->pc = 0x3C1BE8u;
    SET_GPR_U32(ctx, 31, 0x3C1BF0u);
    ctx->pc = 0x3C1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1BE8u;
    // 0x3c1bec: 0x34c63aff  ori         $a2, $a2, 0x3AFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15103);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3C1BE8u, 0x3C1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1BF0u;
label_3c1bf0:
    // 0x3c1bf0: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x3c1bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3c1bf4:
    // 0x3c1bf4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c1bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c1bf8:
    // 0x3c1bf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c1bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c1bfc:
    // 0x3c1bfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c1bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1c00:
    // 0x3c1c00: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3c1c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c1c04:
    // 0x3c1c04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c1c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1c08:
    // 0x3c1c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c0c:
    // 0x3c1c0c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3c1c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c1c10:
    // 0x3c1c10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c1c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c14:
    // 0x3c1c14: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3c1c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3c1c18:
    // 0x3c1c18: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3c1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3c1c1c:
    // 0x3c1c1c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c1c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c1c20:
    // 0x3c1c20: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c1c20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1c24:
    // 0x3c1c24: 0xc136b18  jal         func_4DAC60
label_3c1c28:
    if (ctx->pc == 0x3C1C28u) {
        ctx->pc = 0x3C1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C24u;
        // 0x3c1c28: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C2Cu;
        goto label_3c1c2c;
    }
    ctx->pc = 0x3C1C24u;
    SET_GPR_U32(ctx, 31, 0x3C1C2Cu);
    ctx->pc = 0x3C1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C24u;
    // 0x3c1c28: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C1C24u, 0x3C1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C2Cu;
label_3c1c2c:
    // 0x3c1c2c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c1c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1c30:
    // 0x3c1c30: 0x3c06685b  lui         $a2, 0x685B
    ctx->pc = 0x3c1c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26715 << 16));
label_3c1c34:
    // 0x3c1c34: 0x3c078678  lui         $a3, 0x8678
    ctx->pc = 0x3c1c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34424 << 16));
label_3c1c38:
    // 0x3c1c38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c1c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c3c:
    // 0x3c1c3c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c1c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c1c40:
    // 0x3c1c40: 0x34e75aff  ori         $a3, $a3, 0x5AFF
    ctx->pc = 0x3c1c40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)23295);
label_3c1c44:
    // 0x3c1c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c1c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c48:
    // 0x3c1c48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c1c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c4c:
    // 0x3c1c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c50:
    // 0x3c1c50: 0xc0e9978  jal         func_3A65E0
label_3c1c54:
    if (ctx->pc == 0x3C1C54u) {
        ctx->pc = 0x3C1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C50u;
        // 0x3c1c54: 0x34c63aff  ori         $a2, $a2, 0x3AFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15103);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C58u;
        goto label_3c1c58;
    }
    ctx->pc = 0x3C1C50u;
    SET_GPR_U32(ctx, 31, 0x3C1C58u);
    ctx->pc = 0x3C1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C50u;
    // 0x3c1c54: 0x34c63aff  ori         $a2, $a2, 0x3AFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15103);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3C1C50u, 0x3C1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C58u;
label_3c1c58:
    // 0x3c1c58: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3c1c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_3c1c5c:
    // 0x3c1c5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c1c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c1c60:
    // 0x3c1c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c1c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1c64:
    // 0x3c1c64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c1c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1c68:
    // 0x3c1c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c6c:
    // 0x3c1c6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c1c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c70:
    // 0x3c1c70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3c1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c1c74:
    // 0x3c1c74: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3c1c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3c1c78:
    // 0x3c1c78: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3c1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3c1c7c:
    // 0x3c1c7c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c1c7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c1c80:
    // 0x3c1c80: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c1c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1c84:
    // 0x3c1c84: 0xc136b18  jal         func_4DAC60
label_3c1c88:
    if (ctx->pc == 0x3C1C88u) {
        ctx->pc = 0x3C1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C84u;
        // 0x3c1c88: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C8Cu;
        goto label_3c1c8c;
    }
    ctx->pc = 0x3C1C84u;
    SET_GPR_U32(ctx, 31, 0x3C1C8Cu);
    ctx->pc = 0x3C1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C84u;
    // 0x3c1c88: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C1C84u, 0x3C1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C8Cu;
label_3c1c8c:
    // 0x3c1c8c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c1c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1c90:
    // 0x3c1c90: 0x3c06685b  lui         $a2, 0x685B
    ctx->pc = 0x3c1c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26715 << 16));
label_3c1c94:
    // 0x3c1c94: 0x3c078678  lui         $a3, 0x8678
    ctx->pc = 0x3c1c94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34424 << 16));
label_3c1c98:
    // 0x3c1c98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c9c:
    // 0x3c1c9c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c1ca0:
    // 0x3c1ca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c1ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ca4:
    // 0x3c1ca4: 0x34c63aff  ori         $a2, $a2, 0x3AFF
    ctx->pc = 0x3c1ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15103);
label_3c1ca8:
    // 0x3c1ca8: 0x34e75aff  ori         $a3, $a3, 0x5AFF
    ctx->pc = 0x3c1ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)23295);
label_3c1cac:
    // 0x3c1cac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c1cacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1cb0:
    // 0x3c1cb0: 0xc0e9978  jal         func_3A65E0
label_3c1cb4:
    if (ctx->pc == 0x3C1CB4u) {
        ctx->pc = 0x3C1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CB0u;
        // 0x3c1cb4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CB8u;
        goto label_3c1cb8;
    }
    ctx->pc = 0x3C1CB0u;
    SET_GPR_U32(ctx, 31, 0x3C1CB8u);
    ctx->pc = 0x3C1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CB0u;
    // 0x3c1cb4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3C1CB0u, 0x3C1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CB8u;
label_3c1cb8:
    // 0x3c1cb8: 0x8e85002c  lw          $a1, 0x2C($s4)
    ctx->pc = 0x3c1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3c1cbc:
    // 0x3c1cbc: 0x50a0005b  beql        $a1, $zero, . + 4 + (0x5B << 2)
label_3c1cc0:
    if (ctx->pc == 0x3C1CC0u) {
        ctx->pc = 0x3C1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CBCu;
        // 0x3c1cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CC4u;
        goto label_3c1cc4;
    }
    ctx->pc = 0x3C1CBCu;
    {
        const bool branch_taken_0x3c1cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1cbc) {
            ctx->pc = 0x3C1CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1CBCu;
            // 0x3c1cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1E2Cu;
            goto label_3c1e2c;
        }
    }
    ctx->pc = 0x3C1CC4u;
label_3c1cc4:
    // 0x3c1cc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3c1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c1cc8:
    // 0x3c1cc8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c1cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c1ccc:
    // 0x3c1ccc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c1cd0:
    // 0x3c1cd0: 0x60f809  jalr        $v1
label_3c1cd4:
    if (ctx->pc == 0x3C1CD4u) {
        ctx->pc = 0x3C1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CD0u;
        // 0x3c1cd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CD8u;
        goto label_3c1cd8;
    }
    ctx->pc = 0x3C1CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1CD8u);
        ctx->pc = 0x3C1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CD0u;
        // 0x3c1cd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1CD0u, 0x3C1CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1CD8u;
label_3c1cd8:
    // 0x3c1cd8: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x3c1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_3c1cdc:
    // 0x3c1cdc: 0x10000053  b           . + 4 + (0x53 << 2)
label_3c1ce0:
    if (ctx->pc == 0x3C1CE0u) {
        ctx->pc = 0x3C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CDCu;
        // 0x3c1ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CE4u;
        goto label_3c1ce4;
    }
    ctx->pc = 0x3C1CDCu;
    {
        const bool branch_taken_0x3c1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CDCu;
        // 0x3c1ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1cdc) {
            ctx->pc = 0x3C1E2Cu;
            goto label_3c1e2c;
        }
    }
    ctx->pc = 0x3C1CE4u;
label_3c1ce4:
    // 0x3c1ce4: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3c1ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3c1ce8:
    // 0x3c1ce8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c1ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c1cec:
    // 0x3c1cec: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3c1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3c1cf0:
    // 0x3c1cf0: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_3c1cf4:
    if (ctx->pc == 0x3C1CF4u) {
        ctx->pc = 0x3C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CF0u;
        // 0x3c1cf4: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CF8u;
        goto label_3c1cf8;
    }
    ctx->pc = 0x3C1CF0u;
    {
        const bool branch_taken_0x3c1cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CF0u;
        // 0x3c1cf4: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1cf0) {
            ctx->pc = 0x3C1E28u;
            goto label_3c1e28;
        }
    }
    ctx->pc = 0x3C1CF8u;
label_3c1cf8:
    // 0x3c1cf8: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x3c1cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c1cfc:
    // 0x3c1cfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c1d00:
    // 0x3c1d00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c1d04:
    // 0x3c1d04: 0x0  nop
    ctx->pc = 0x3c1d04u;
    // NOP
label_3c1d08:
    // 0x3c1d08: 0x0  nop
    ctx->pc = 0x3c1d08u;
    // NOP
label_3c1d0c:
    // 0x3c1d0c: 0x0  nop
    ctx->pc = 0x3c1d0cu;
    // NOP
label_3c1d10:
    // 0x3c1d10: 0x0  nop
    ctx->pc = 0x3c1d10u;
    // NOP
label_3c1d14:
    // 0x3c1d14: 0x0  nop
    ctx->pc = 0x3c1d14u;
    // NOP
label_3c1d18:
    // 0x3c1d18: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c1d1c:
    if (ctx->pc == 0x3C1D1Cu) {
        ctx->pc = 0x3C1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D18u;
        // 0x3c1d1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D20u;
        goto label_3c1d20;
    }
    ctx->pc = 0x3C1D18u;
    {
        const bool branch_taken_0x3c1d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D18u;
        // 0x3c1d1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d18) {
            ctx->pc = 0x3C1D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1d08;
        }
    }
    ctx->pc = 0x3C1D20u;
label_3c1d20:
    // 0x3c1d20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c1d24:
    // 0x3c1d24: 0xc138ddc  jal         func_4E3770
label_3c1d28:
    if (ctx->pc == 0x3C1D28u) {
        ctx->pc = 0x3C1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D24u;
        // 0x3c1d28: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D2Cu;
        goto label_3c1d2c;
    }
    ctx->pc = 0x3C1D24u;
    SET_GPR_U32(ctx, 31, 0x3C1D2Cu);
    ctx->pc = 0x3C1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D24u;
    // 0x3c1d28: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C1D24u, 0x3C1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D2Cu;
label_3c1d2c:
    // 0x3c1d2c: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3c1d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3c1d30:
    // 0x3c1d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d34:
    // 0x3c1d34: 0xc0cd4ee  jal         func_3353B8
label_3c1d38:
    if (ctx->pc == 0x3C1D38u) {
        ctx->pc = 0x3C1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D34u;
        // 0x3c1d38: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D3Cu;
        goto label_3c1d3c;
    }
    ctx->pc = 0x3C1D34u;
    SET_GPR_U32(ctx, 31, 0x3C1D3Cu);
    ctx->pc = 0x3C1D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D34u;
    // 0x3c1d38: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C1D34u, 0x3C1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D3Cu;
label_3c1d3c:
    // 0x3c1d3c: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x3c1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
label_3c1d40:
    // 0x3c1d40: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3c1d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_3c1d44:
    // 0x3c1d44: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3c1d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_3c1d48:
    // 0x3c1d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c1d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1d4c:
    // 0x3c1d4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3c1d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c1d50:
    // 0x3c1d50: 0x0  nop
    ctx->pc = 0x3c1d50u;
    // NOP
label_3c1d54:
    // 0x3c1d54: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3c1d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3c1d58:
    // 0x3c1d58: 0x3c014353  lui         $at, 0x4353
    ctx->pc = 0x3c1d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17235 << 16));
label_3c1d5c:
    // 0x3c1d5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c1d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1d60:
    // 0x3c1d60: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c1d60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c1d64:
    // 0x3c1d64: 0xc10b1c6  jal         func_42C718
label_3c1d68:
    if (ctx->pc == 0x3C1D68u) {
        ctx->pc = 0x3C1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D64u;
        // 0x3c1d68: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D6Cu;
        goto label_3c1d6c;
    }
    ctx->pc = 0x3C1D64u;
    SET_GPR_U32(ctx, 31, 0x3C1D6Cu);
    ctx->pc = 0x3C1D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D64u;
    // 0x3c1d68: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3C1D64u, 0x3C1D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D6Cu;
label_3c1d6c:
    // 0x3c1d6c: 0x3c014327  lui         $at, 0x4327
    ctx->pc = 0x3c1d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17191 << 16));
label_3c1d70:
    // 0x3c1d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c1d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1d74:
    // 0x3c1d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c1d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d78:
    // 0x3c1d78: 0xc10b1c6  jal         func_42C718
label_3c1d7c:
    if (ctx->pc == 0x3C1D7Cu) {
        ctx->pc = 0x3C1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D78u;
        // 0x3c1d7c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D80u;
        goto label_3c1d80;
    }
    ctx->pc = 0x3C1D78u;
    SET_GPR_U32(ctx, 31, 0x3C1D80u);
    ctx->pc = 0x3C1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D78u;
    // 0x3c1d7c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3C1D78u, 0x3C1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D80u;
label_3c1d80:
    // 0x3c1d80: 0x3c01428a  lui         $at, 0x428A
    ctx->pc = 0x3c1d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17034 << 16));
label_3c1d84:
    // 0x3c1d84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c1d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1d88:
    // 0x3c1d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d8c:
    // 0x3c1d8c: 0xc10b1c6  jal         func_42C718
label_3c1d90:
    if (ctx->pc == 0x3C1D90u) {
        ctx->pc = 0x3C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D8Cu;
        // 0x3c1d90: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D94u;
        goto label_3c1d94;
    }
    ctx->pc = 0x3C1D8Cu;
    SET_GPR_U32(ctx, 31, 0x3C1D94u);
    ctx->pc = 0x3C1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D8Cu;
    // 0x3c1d90: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3C1D8Cu, 0x3C1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D94u;
label_3c1d94:
    // 0x3c1d94: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x3c1d94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
label_3c1d98:
    // 0x3c1d98: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x3c1d98u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_3c1d9c:
    // 0x3c1d9c: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x3c1d9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_3c1da0:
    // 0x3c1da0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3c1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3c1da4:
    // 0x3c1da4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3c1da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3c1da8:
    // 0x3c1da8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c1dac:
    // 0x3c1dac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1db0:
    // 0x3c1db0: 0xc0cd4ee  jal         func_3353B8
label_3c1db4:
    if (ctx->pc == 0x3C1DB4u) {
        ctx->pc = 0x3C1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DB0u;
        // 0x3c1db4: 0x361000ff  ori         $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DB8u;
        goto label_3c1db8;
    }
    ctx->pc = 0x3C1DB0u;
    SET_GPR_U32(ctx, 31, 0x3C1DB8u);
    ctx->pc = 0x3C1DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DB0u;
    // 0x3c1db4: 0x361000ff  ori         $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C1DB0u, 0x3C1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DB8u;
label_3c1db8:
    // 0x3c1db8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x3c1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3c1dbc:
    // 0x3c1dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c1dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1dc0:
    // 0x3c1dc0: 0xc0e858c  jal         func_3A1630
label_3c1dc4:
    if (ctx->pc == 0x3C1DC4u) {
        ctx->pc = 0x3C1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DC0u;
        // 0x3c1dc4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DC8u;
        goto label_3c1dc8;
    }
    ctx->pc = 0x3C1DC0u;
    SET_GPR_U32(ctx, 31, 0x3C1DC8u);
    ctx->pc = 0x3C1DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DC0u;
    // 0x3c1dc4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C1DC0u, 0x3C1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DC8u;
label_3c1dc8:
    // 0x3c1dc8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3c1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3c1dcc:
    // 0x3c1dcc: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3c1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3c1dd0:
    // 0x3c1dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c1dd4:
    // 0x3c1dd4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3c1dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c1dd8:
    // 0x3c1dd8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3c1ddc:
    if (ctx->pc == 0x3C1DDCu) {
        ctx->pc = 0x3C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DD8u;
        // 0x3c1ddc: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DE0u;
        goto label_3c1de0;
    }
    ctx->pc = 0x3C1DD8u;
    {
        const bool branch_taken_0x3c1dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DD8u;
        // 0x3c1ddc: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1dd8) {
            ctx->pc = 0x3C1DF0u;
            goto label_3c1df0;
        }
    }
    ctx->pc = 0x3C1DE0u;
label_3c1de0:
    // 0x3c1de0: 0x3c10d3a7  lui         $s0, 0xD3A7
    ctx->pc = 0x3c1de0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54183 << 16));
label_3c1de4:
    // 0x3c1de4: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3c1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3c1de8:
    // 0x3c1de8: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x3c1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_3c1dec:
    // 0x3c1dec: 0x361045ff  ori         $s0, $s0, 0x45FF
    ctx->pc = 0x3c1decu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)17919);
label_3c1df0:
    // 0x3c1df0: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x3c1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3c1df4:
    // 0x3c1df4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3c1df8:
    if (ctx->pc == 0x3C1DF8u) {
        ctx->pc = 0x3C1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DF4u;
        // 0x3c1df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DFCu;
        goto label_3c1dfc;
    }
    ctx->pc = 0x3C1DF4u;
    {
        const bool branch_taken_0x3c1df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DF4u;
        // 0x3c1df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1df4) {
            ctx->pc = 0x3C1E2Cu;
            goto label_3c1e2c;
        }
    }
    ctx->pc = 0x3C1DFCu;
label_3c1dfc:
    // 0x3c1dfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c1dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e00:
    // 0x3c1e00: 0xc0ea16a  jal         func_3A85A8
label_3c1e04:
    if (ctx->pc == 0x3C1E04u) {
        ctx->pc = 0x3C1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E00u;
        // 0x3c1e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E08u;
        goto label_3c1e08;
    }
    ctx->pc = 0x3C1E00u;
    SET_GPR_U32(ctx, 31, 0x3C1E08u);
    ctx->pc = 0x3C1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E00u;
    // 0x3c1e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3C1E00u, 0x3C1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E08u;
label_3c1e08:
    // 0x3c1e08: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x3c1e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3c1e0c:
    // 0x3c1e0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3c1e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e10:
    // 0x3c1e10: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3c1e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3c1e14:
    // 0x3c1e14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c1e18:
    // 0x3c1e18: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c1e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c1e1c:
    // 0x3c1e1c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c1e20:
    // 0x3c1e20: 0x60f809  jalr        $v1
label_3c1e24:
    if (ctx->pc == 0x3C1E24u) {
        ctx->pc = 0x3C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E20u;
        // 0x3c1e24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E28u;
        goto label_3c1e28;
    }
    ctx->pc = 0x3C1E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1E28u);
        ctx->pc = 0x3C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E20u;
        // 0x3c1e24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1E20u, 0x3C1E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1E28u;
label_3c1e28:
    // 0x3c1e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e2c:
    // 0x3c1e2c: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3c1e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c1e30:
    // 0x3c1e30: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3c1e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c1e34:
    // 0x3c1e34: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3c1e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c1e38:
    // 0x3c1e38: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3c1e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c1e3c:
    // 0x3c1e3c: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x3c1e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c1e40:
    // 0x3c1e40: 0x7bb50460  lq          $s5, 0x460($sp)
    ctx->pc = 0x3c1e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c1e44:
    // 0x3c1e44: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3c1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c1e48:
    // 0x3c1e48: 0xc7b404c0  lwc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3c1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c1e4c:
    // 0x3c1e4c: 0x3e00008  jr          $ra
label_3c1e50:
    if (ctx->pc == 0x3C1E50u) {
        ctx->pc = 0x3C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E4Cu;
        // 0x3c1e50: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E54u;
        goto label_3c1e54;
    }
    ctx->pc = 0x3C1E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E4Cu;
        // 0x3c1e50: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1E54u;
label_3c1e54:
    // 0x3c1e54: 0x0  nop
    ctx->pc = 0x3c1e54u;
    // NOP
    ctx->pc = 0x3c1e58u;
}
