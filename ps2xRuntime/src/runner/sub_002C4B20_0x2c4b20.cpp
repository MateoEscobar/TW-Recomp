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

// Function: sub_002C4B20
// Address: 0x2c4b20 - 0x2c4ec8
void sub_002C4B20_0x2c4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4B20_0x2c4b20");
#endif

    switch (ctx->pc) {
        case 0x2c4b20u: goto label_2c4b20;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b28u: goto label_2c4b28;
        case 0x2c4b2cu: goto label_2c4b2c;
        case 0x2c4b30u: goto label_2c4b30;
        case 0x2c4b34u: goto label_2c4b34;
        case 0x2c4b38u: goto label_2c4b38;
        case 0x2c4b3cu: goto label_2c4b3c;
        case 0x2c4b40u: goto label_2c4b40;
        case 0x2c4b44u: goto label_2c4b44;
        case 0x2c4b48u: goto label_2c4b48;
        case 0x2c4b4cu: goto label_2c4b4c;
        case 0x2c4b50u: goto label_2c4b50;
        case 0x2c4b54u: goto label_2c4b54;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4b5cu: goto label_2c4b5c;
        case 0x2c4b60u: goto label_2c4b60;
        case 0x2c4b64u: goto label_2c4b64;
        case 0x2c4b68u: goto label_2c4b68;
        case 0x2c4b6cu: goto label_2c4b6c;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b74u: goto label_2c4b74;
        case 0x2c4b78u: goto label_2c4b78;
        case 0x2c4b7cu: goto label_2c4b7c;
        case 0x2c4b80u: goto label_2c4b80;
        case 0x2c4b84u: goto label_2c4b84;
        case 0x2c4b88u: goto label_2c4b88;
        case 0x2c4b8cu: goto label_2c4b8c;
        case 0x2c4b90u: goto label_2c4b90;
        case 0x2c4b94u: goto label_2c4b94;
        case 0x2c4b98u: goto label_2c4b98;
        case 0x2c4b9cu: goto label_2c4b9c;
        case 0x2c4ba0u: goto label_2c4ba0;
        case 0x2c4ba4u: goto label_2c4ba4;
        case 0x2c4ba8u: goto label_2c4ba8;
        case 0x2c4bacu: goto label_2c4bac;
        case 0x2c4bb0u: goto label_2c4bb0;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bb8u: goto label_2c4bb8;
        case 0x2c4bbcu: goto label_2c4bbc;
        case 0x2c4bc0u: goto label_2c4bc0;
        case 0x2c4bc4u: goto label_2c4bc4;
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4bccu: goto label_2c4bcc;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bd4u: goto label_2c4bd4;
        case 0x2c4bd8u: goto label_2c4bd8;
        case 0x2c4bdcu: goto label_2c4bdc;
        case 0x2c4be0u: goto label_2c4be0;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4be8u: goto label_2c4be8;
        case 0x2c4becu: goto label_2c4bec;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4bf4u: goto label_2c4bf4;
        case 0x2c4bf8u: goto label_2c4bf8;
        case 0x2c4bfcu: goto label_2c4bfc;
        case 0x2c4c00u: goto label_2c4c00;
        case 0x2c4c04u: goto label_2c4c04;
        case 0x2c4c08u: goto label_2c4c08;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c10u: goto label_2c4c10;
        case 0x2c4c14u: goto label_2c4c14;
        case 0x2c4c18u: goto label_2c4c18;
        case 0x2c4c1cu: goto label_2c4c1c;
        case 0x2c4c20u: goto label_2c4c20;
        case 0x2c4c24u: goto label_2c4c24;
        case 0x2c4c28u: goto label_2c4c28;
        case 0x2c4c2cu: goto label_2c4c2c;
        case 0x2c4c30u: goto label_2c4c30;
        case 0x2c4c34u: goto label_2c4c34;
        case 0x2c4c38u: goto label_2c4c38;
        case 0x2c4c3cu: goto label_2c4c3c;
        case 0x2c4c40u: goto label_2c4c40;
        case 0x2c4c44u: goto label_2c4c44;
        case 0x2c4c48u: goto label_2c4c48;
        case 0x2c4c4cu: goto label_2c4c4c;
        case 0x2c4c50u: goto label_2c4c50;
        case 0x2c4c54u: goto label_2c4c54;
        case 0x2c4c58u: goto label_2c4c58;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4c60u: goto label_2c4c60;
        case 0x2c4c64u: goto label_2c4c64;
        case 0x2c4c68u: goto label_2c4c68;
        case 0x2c4c6cu: goto label_2c4c6c;
        case 0x2c4c70u: goto label_2c4c70;
        case 0x2c4c74u: goto label_2c4c74;
        case 0x2c4c78u: goto label_2c4c78;
        case 0x2c4c7cu: goto label_2c4c7c;
        case 0x2c4c80u: goto label_2c4c80;
        case 0x2c4c84u: goto label_2c4c84;
        case 0x2c4c88u: goto label_2c4c88;
        case 0x2c4c8cu: goto label_2c4c8c;
        case 0x2c4c90u: goto label_2c4c90;
        case 0x2c4c94u: goto label_2c4c94;
        case 0x2c4c98u: goto label_2c4c98;
        case 0x2c4c9cu: goto label_2c4c9c;
        case 0x2c4ca0u: goto label_2c4ca0;
        case 0x2c4ca4u: goto label_2c4ca4;
        case 0x2c4ca8u: goto label_2c4ca8;
        case 0x2c4cacu: goto label_2c4cac;
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cb4u: goto label_2c4cb4;
        case 0x2c4cb8u: goto label_2c4cb8;
        case 0x2c4cbcu: goto label_2c4cbc;
        case 0x2c4cc0u: goto label_2c4cc0;
        case 0x2c4cc4u: goto label_2c4cc4;
        case 0x2c4cc8u: goto label_2c4cc8;
        case 0x2c4cccu: goto label_2c4ccc;
        case 0x2c4cd0u: goto label_2c4cd0;
        case 0x2c4cd4u: goto label_2c4cd4;
        case 0x2c4cd8u: goto label_2c4cd8;
        case 0x2c4cdcu: goto label_2c4cdc;
        case 0x2c4ce0u: goto label_2c4ce0;
        case 0x2c4ce4u: goto label_2c4ce4;
        case 0x2c4ce8u: goto label_2c4ce8;
        case 0x2c4cecu: goto label_2c4cec;
        case 0x2c4cf0u: goto label_2c4cf0;
        case 0x2c4cf4u: goto label_2c4cf4;
        case 0x2c4cf8u: goto label_2c4cf8;
        case 0x2c4cfcu: goto label_2c4cfc;
        case 0x2c4d00u: goto label_2c4d00;
        case 0x2c4d04u: goto label_2c4d04;
        case 0x2c4d08u: goto label_2c4d08;
        case 0x2c4d0cu: goto label_2c4d0c;
        case 0x2c4d10u: goto label_2c4d10;
        case 0x2c4d14u: goto label_2c4d14;
        case 0x2c4d18u: goto label_2c4d18;
        case 0x2c4d1cu: goto label_2c4d1c;
        case 0x2c4d20u: goto label_2c4d20;
        case 0x2c4d24u: goto label_2c4d24;
        case 0x2c4d28u: goto label_2c4d28;
        case 0x2c4d2cu: goto label_2c4d2c;
        case 0x2c4d30u: goto label_2c4d30;
        case 0x2c4d34u: goto label_2c4d34;
        case 0x2c4d38u: goto label_2c4d38;
        case 0x2c4d3cu: goto label_2c4d3c;
        case 0x2c4d40u: goto label_2c4d40;
        case 0x2c4d44u: goto label_2c4d44;
        case 0x2c4d48u: goto label_2c4d48;
        case 0x2c4d4cu: goto label_2c4d4c;
        case 0x2c4d50u: goto label_2c4d50;
        case 0x2c4d54u: goto label_2c4d54;
        case 0x2c4d58u: goto label_2c4d58;
        case 0x2c4d5cu: goto label_2c4d5c;
        case 0x2c4d60u: goto label_2c4d60;
        case 0x2c4d64u: goto label_2c4d64;
        case 0x2c4d68u: goto label_2c4d68;
        case 0x2c4d6cu: goto label_2c4d6c;
        case 0x2c4d70u: goto label_2c4d70;
        case 0x2c4d74u: goto label_2c4d74;
        case 0x2c4d78u: goto label_2c4d78;
        case 0x2c4d7cu: goto label_2c4d7c;
        case 0x2c4d80u: goto label_2c4d80;
        case 0x2c4d84u: goto label_2c4d84;
        case 0x2c4d88u: goto label_2c4d88;
        case 0x2c4d8cu: goto label_2c4d8c;
        case 0x2c4d90u: goto label_2c4d90;
        case 0x2c4d94u: goto label_2c4d94;
        case 0x2c4d98u: goto label_2c4d98;
        case 0x2c4d9cu: goto label_2c4d9c;
        case 0x2c4da0u: goto label_2c4da0;
        case 0x2c4da4u: goto label_2c4da4;
        case 0x2c4da8u: goto label_2c4da8;
        case 0x2c4dacu: goto label_2c4dac;
        case 0x2c4db0u: goto label_2c4db0;
        case 0x2c4db4u: goto label_2c4db4;
        case 0x2c4db8u: goto label_2c4db8;
        case 0x2c4dbcu: goto label_2c4dbc;
        case 0x2c4dc0u: goto label_2c4dc0;
        case 0x2c4dc4u: goto label_2c4dc4;
        case 0x2c4dc8u: goto label_2c4dc8;
        case 0x2c4dccu: goto label_2c4dcc;
        case 0x2c4dd0u: goto label_2c4dd0;
        case 0x2c4dd4u: goto label_2c4dd4;
        case 0x2c4dd8u: goto label_2c4dd8;
        case 0x2c4ddcu: goto label_2c4ddc;
        case 0x2c4de0u: goto label_2c4de0;
        case 0x2c4de4u: goto label_2c4de4;
        case 0x2c4de8u: goto label_2c4de8;
        case 0x2c4decu: goto label_2c4dec;
        case 0x2c4df0u: goto label_2c4df0;
        case 0x2c4df4u: goto label_2c4df4;
        case 0x2c4df8u: goto label_2c4df8;
        case 0x2c4dfcu: goto label_2c4dfc;
        case 0x2c4e00u: goto label_2c4e00;
        case 0x2c4e04u: goto label_2c4e04;
        case 0x2c4e08u: goto label_2c4e08;
        case 0x2c4e0cu: goto label_2c4e0c;
        case 0x2c4e10u: goto label_2c4e10;
        case 0x2c4e14u: goto label_2c4e14;
        case 0x2c4e18u: goto label_2c4e18;
        case 0x2c4e1cu: goto label_2c4e1c;
        case 0x2c4e20u: goto label_2c4e20;
        case 0x2c4e24u: goto label_2c4e24;
        case 0x2c4e28u: goto label_2c4e28;
        case 0x2c4e2cu: goto label_2c4e2c;
        case 0x2c4e30u: goto label_2c4e30;
        case 0x2c4e34u: goto label_2c4e34;
        case 0x2c4e38u: goto label_2c4e38;
        case 0x2c4e3cu: goto label_2c4e3c;
        case 0x2c4e40u: goto label_2c4e40;
        case 0x2c4e44u: goto label_2c4e44;
        case 0x2c4e48u: goto label_2c4e48;
        case 0x2c4e4cu: goto label_2c4e4c;
        case 0x2c4e50u: goto label_2c4e50;
        case 0x2c4e54u: goto label_2c4e54;
        case 0x2c4e58u: goto label_2c4e58;
        case 0x2c4e5cu: goto label_2c4e5c;
        case 0x2c4e60u: goto label_2c4e60;
        case 0x2c4e64u: goto label_2c4e64;
        case 0x2c4e68u: goto label_2c4e68;
        case 0x2c4e6cu: goto label_2c4e6c;
        case 0x2c4e70u: goto label_2c4e70;
        case 0x2c4e74u: goto label_2c4e74;
        case 0x2c4e78u: goto label_2c4e78;
        case 0x2c4e7cu: goto label_2c4e7c;
        case 0x2c4e80u: goto label_2c4e80;
        case 0x2c4e84u: goto label_2c4e84;
        case 0x2c4e88u: goto label_2c4e88;
        case 0x2c4e8cu: goto label_2c4e8c;
        case 0x2c4e90u: goto label_2c4e90;
        case 0x2c4e94u: goto label_2c4e94;
        case 0x2c4e98u: goto label_2c4e98;
        case 0x2c4e9cu: goto label_2c4e9c;
        case 0x2c4ea0u: goto label_2c4ea0;
        case 0x2c4ea4u: goto label_2c4ea4;
        case 0x2c4ea8u: goto label_2c4ea8;
        case 0x2c4eacu: goto label_2c4eac;
        case 0x2c4eb0u: goto label_2c4eb0;
        case 0x2c4eb4u: goto label_2c4eb4;
        case 0x2c4eb8u: goto label_2c4eb8;
        case 0x2c4ebcu: goto label_2c4ebc;
        case 0x2c4ec0u: goto label_2c4ec0;
        case 0x2c4ec4u: goto label_2c4ec4;
        default: break;
    }

    ctx->pc = 0x2c4b20u;

label_2c4b20:
    // 0x2c4b20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2c4b24:
    // 0x2c4b24: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c4b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2c4b28:
    // 0x2c4b28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c4b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c4b2c:
    // 0x2c4b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c4b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b30:
    // 0x2c4b30: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c4b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2c4b34:
    // 0x2c4b34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c4b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c4b38:
    // 0x2c4b38: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c4b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2c4b3c:
    // 0x2c4b3c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c4b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2c4b40:
    // 0x2c4b40: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2c4b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2c4b44:
    // 0x2c4b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4b48:
    // 0x2c4b48: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c4b48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2c4b4c:
    // 0x2c4b4c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c4b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2c4b50:
    // 0x2c4b50: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c4b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2c4b54:
    // 0x2c4b54: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2c4b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4b58:
    // 0x2c4b58: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2c4b5c:
    // 0x2c4b5c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2c4b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c4b60:
    // 0x2c4b60: 0xc0e409a  jal         func_390268
label_2c4b64:
    if (ctx->pc == 0x2C4B64u) {
        ctx->pc = 0x2C4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B60u;
        // 0x2c4b64: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4B68u;
        goto label_2c4b68;
    }
    ctx->pc = 0x2C4B60u;
    SET_GPR_U32(ctx, 31, 0x2C4B68u);
    ctx->pc = 0x2C4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B60u;
    // 0x2c4b64: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C4B60u, 0x2C4B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B68u;
label_2c4b68:
    // 0x2c4b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b6c:
    // 0x2c4b6c: 0xc0a34d6  jal         func_28D358
label_2c4b70:
    if (ctx->pc == 0x2C4B70u) {
        ctx->pc = 0x2C4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B6Cu;
        // 0x2c4b70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4B74u;
        goto label_2c4b74;
    }
    ctx->pc = 0x2C4B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C4B74u);
    ctx->pc = 0x2C4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B6Cu;
    // 0x2c4b70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C4B6Cu, 0x2C4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B74u;
label_2c4b74:
    // 0x2c4b74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c4b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b78:
    // 0x2c4b78: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_2c4b7c:
    if (ctx->pc == 0x2C4B7Cu) {
        ctx->pc = 0x2C4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B78u;
        // 0x2c4b7c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4B80u;
        goto label_2c4b80;
    }
    ctx->pc = 0x2C4B78u;
    {
        const bool branch_taken_0x2c4b78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b78) {
            ctx->pc = 0x2C4B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4B78u;
            // 0x2c4b7c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4B88u;
            goto label_2c4b88;
        }
    }
    ctx->pc = 0x2C4B80u;
label_2c4b80:
    // 0x2c4b80: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_2c4b84:
    if (ctx->pc == 0x2C4B84u) {
        ctx->pc = 0x2C4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B80u;
        // 0x2c4b84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4B88u;
        goto label_2c4b88;
    }
    ctx->pc = 0x2C4B80u;
    {
        const bool branch_taken_0x2c4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B80u;
        // 0x2c4b84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b80) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4B88u;
label_2c4b88:
    // 0x2c4b88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c4b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b8c:
    // 0x2c4b8c: 0xc0a3fde  jal         func_28FF78
label_2c4b90:
    if (ctx->pc == 0x2C4B90u) {
        ctx->pc = 0x2C4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B8Cu;
        // 0x2c4b90: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4B94u;
        goto label_2c4b94;
    }
    ctx->pc = 0x2C4B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C4B94u);
    ctx->pc = 0x2C4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B8Cu;
    // 0x2c4b90: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2C4B8Cu, 0x2C4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B94u;
label_2c4b94:
    // 0x2c4b94: 0xc08bfbc  jal         func_22FEF0
label_2c4b98:
    if (ctx->pc == 0x2C4B98u) {
        ctx->pc = 0x2C4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B94u;
        // 0x2c4b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4B9Cu;
        goto label_2c4b9c;
    }
    ctx->pc = 0x2C4B94u;
    SET_GPR_U32(ctx, 31, 0x2C4B9Cu);
    ctx->pc = 0x2C4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B94u;
    // 0x2c4b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2C4B94u, 0x2C4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B9Cu;
label_2c4b9c:
    // 0x2c4b9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4ba0:
    // 0x2c4ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ba4:
    // 0x2c4ba4: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c4ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2c4ba8:
    // 0x2c4ba8: 0xc08a08a  jal         func_228228
label_2c4bac:
    if (ctx->pc == 0x2C4BACu) {
        ctx->pc = 0x2C4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BA8u;
        // 0x2c4bac: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4BB0u;
        goto label_2c4bb0;
    }
    ctx->pc = 0x2C4BA8u;
    SET_GPR_U32(ctx, 31, 0x2C4BB0u);
    ctx->pc = 0x2C4BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BA8u;
    // 0x2c4bac: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C4BA8u, 0x2C4BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BB0u;
label_2c4bb0:
    // 0x2c4bb0: 0x1456000b  bne         $v0, $s6, . + 4 + (0xB << 2)
label_2c4bb4:
    if (ctx->pc == 0x2C4BB4u) {
        ctx->pc = 0x2C4BB8u;
        goto label_2c4bb8;
    }
    ctx->pc = 0x2C4BB0u;
    {
        const bool branch_taken_0x2c4bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2c4bb0) {
            ctx->pc = 0x2C4BE0u;
            goto label_2c4be0;
        }
    }
    ctx->pc = 0x2C4BB8u;
label_2c4bb8:
    // 0x2c4bb8: 0x161600b6  bne         $s0, $s6, . + 4 + (0xB6 << 2)
label_2c4bbc:
    if (ctx->pc == 0x2C4BBCu) {
        ctx->pc = 0x2C4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BB8u;
        // 0x2c4bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4BC0u;
        goto label_2c4bc0;
    }
    ctx->pc = 0x2C4BB8u;
    {
        const bool branch_taken_0x2c4bb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BB8u;
        // 0x2c4bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bb8) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4BC0u;
label_2c4bc0:
    // 0x2c4bc0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2c4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2c4bc4:
    // 0x2c4bc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c4bc8:
    // 0x2c4bc8: 0x146200b2  bne         $v1, $v0, . + 4 + (0xB2 << 2)
label_2c4bcc:
    if (ctx->pc == 0x2C4BCCu) {
        ctx->pc = 0x2C4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BC8u;
        // 0x2c4bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4BD0u;
        goto label_2c4bd0;
    }
    ctx->pc = 0x2C4BC8u;
    {
        const bool branch_taken_0x2c4bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BC8u;
        // 0x2c4bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bc8) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4BD0u;
label_2c4bd0:
    // 0x2c4bd0: 0xc0a36c8  jal         func_28DB20
label_2c4bd4:
    if (ctx->pc == 0x2C4BD4u) {
        ctx->pc = 0x2C4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BD0u;
        // 0x2c4bd4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4BD8u;
        goto label_2c4bd8;
    }
    ctx->pc = 0x2C4BD0u;
    SET_GPR_U32(ctx, 31, 0x2C4BD8u);
    ctx->pc = 0x2C4BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BD0u;
    // 0x2c4bd4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C4BD0u, 0x2C4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BD8u;
label_2c4bd8:
    // 0x2c4bd8: 0x100000ad  b           . + 4 + (0xAD << 2)
label_2c4bdc:
    if (ctx->pc == 0x2C4BDCu) {
        ctx->pc = 0x2C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BD8u;
        // 0x2c4bdc: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4BE0u;
        goto label_2c4be0;
    }
    ctx->pc = 0x2C4BD8u;
    {
        const bool branch_taken_0x2c4bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BD8u;
        // 0x2c4bdc: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bd8) {
            ctx->pc = 0x2C4E90u;
            goto label_2c4e90;
        }
    }
    ctx->pc = 0x2C4BE0u;
label_2c4be0:
    // 0x2c4be0: 0x121600ab  beq         $s0, $s6, . + 4 + (0xAB << 2)
label_2c4be4:
    if (ctx->pc == 0x2C4BE4u) {
        ctx->pc = 0x2C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BE0u;
        // 0x2c4be4: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4BE8u;
        goto label_2c4be8;
    }
    ctx->pc = 0x2C4BE0u;
    {
        const bool branch_taken_0x2c4be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BE0u;
        // 0x2c4be4: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4be0) {
            ctx->pc = 0x2C4E90u;
            goto label_2c4e90;
        }
    }
    ctx->pc = 0x2C4BE8u;
label_2c4be8:
    // 0x2c4be8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x2c4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2c4bec:
    // 0x2c4bec: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2c4bf0:
    // 0x2c4bf0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c4bf4:
    // 0x2c4bf4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c4bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c4bf8:
    // 0x2c4bf8: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_2c4bfc:
    if (ctx->pc == 0x2C4BFCu) {
        ctx->pc = 0x2C4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BF8u;
        // 0x2c4bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C00u;
        goto label_2c4c00;
    }
    ctx->pc = 0x2C4BF8u;
    {
        const bool branch_taken_0x2c4bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BF8u;
        // 0x2c4bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bf8) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4C00u;
label_2c4c00:
    // 0x2c4c00: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2c4c04:
    // 0x2c4c04: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2c4c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2c4c08:
    // 0x2c4c08: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_2c4c0c:
    if (ctx->pc == 0x2C4C0Cu) {
        ctx->pc = 0x2C4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C08u;
        // 0x2c4c0c: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C10u;
        goto label_2c4c10;
    }
    ctx->pc = 0x2C4C08u;
    {
        const bool branch_taken_0x2c4c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C08u;
        // 0x2c4c0c: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c08) {
            ctx->pc = 0x2C4DF8u;
            goto label_2c4df8;
        }
    }
    ctx->pc = 0x2C4C10u;
label_2c4c10:
    // 0x2c4c10: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x2c4c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2c4c14:
    // 0x2c4c14: 0x26910090  addiu       $s1, $s4, 0x90
    ctx->pc = 0x2c4c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2c4c18:
    // 0x2c4c18: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2c4c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c4c1c:
    // 0x2c4c1c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c4c20:
    // 0x2c4c20: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2c4c20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c4c24:
    // 0x2c4c24: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x2c4c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c4c28:
    // 0x2c4c28: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c4c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c4c2c:
    // 0x2c4c2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c4c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c4c30:
    // 0x2c4c30: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2c4c34:
    // 0x2c4c34: 0xc0cdb38  jal         func_336CE0
label_2c4c38:
    if (ctx->pc == 0x2C4C38u) {
        ctx->pc = 0x2C4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C34u;
        // 0x2c4c38: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C3Cu;
        goto label_2c4c3c;
    }
    ctx->pc = 0x2C4C34u;
    SET_GPR_U32(ctx, 31, 0x2C4C3Cu);
    ctx->pc = 0x2C4C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C34u;
    // 0x2c4c38: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C4C34u, 0x2C4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C3Cu;
label_2c4c3c:
    // 0x2c4c3c: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2c4c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2c4c40:
    // 0x2c4c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4c44:
    // 0x2c4c44: 0x0  nop
    ctx->pc = 0x2c4c44u;
    // NOP
label_2c4c48:
    // 0x2c4c48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4c4c:
    // 0x2c4c4c: 0x0  nop
    ctx->pc = 0x2c4c4cu;
    // NOP
label_2c4c50:
    // 0x2c4c50: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2c4c54:
    if (ctx->pc == 0x2C4C54u) {
        ctx->pc = 0x2C4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C50u;
        // 0x2c4c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C58u;
        goto label_2c4c58;
    }
    ctx->pc = 0x2C4C50u;
    {
        const bool branch_taken_0x2c4c50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C50u;
        // 0x2c4c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c50) {
            ctx->pc = 0x2C4C64u;
            goto label_2c4c64;
        }
    }
    ctx->pc = 0x2C4C58u;
label_2c4c58:
    // 0x2c4c58: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2c4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2c4c5c:
    // 0x2c4c5c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_2c4c60:
    if (ctx->pc == 0x2C4C60u) {
        ctx->pc = 0x2C4C64u;
        goto label_2c4c64;
    }
    ctx->pc = 0x2C4C5Cu;
    {
        const bool branch_taken_0x2c4c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c5c) {
            ctx->pc = 0x2C4CF4u;
            goto label_2c4cf4;
        }
    }
    ctx->pc = 0x2C4C64u;
label_2c4c64:
    // 0x2c4c64: 0xc088bd2  jal         func_222F48
label_2c4c68:
    if (ctx->pc == 0x2C4C68u) {
        ctx->pc = 0x2C4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C64u;
        // 0x2c4c68: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C6Cu;
        goto label_2c4c6c;
    }
    ctx->pc = 0x2C4C64u;
    SET_GPR_U32(ctx, 31, 0x2C4C6Cu);
    ctx->pc = 0x2C4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C64u;
    // 0x2c4c68: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222F48u, 0x2C4C64u, 0x2C4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C6Cu;
label_2c4c6c:
    // 0x2c4c6c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2c4c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2c4c70:
    // 0x2c4c70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4c74:
    // 0x2c4c74: 0x0  nop
    ctx->pc = 0x2c4c74u;
    // NOP
label_2c4c78:
    // 0x2c4c78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4c7c:
    // 0x2c4c7c: 0x0  nop
    ctx->pc = 0x2c4c7cu;
    // NOP
label_2c4c80:
    // 0x2c4c80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2c4c84:
    if (ctx->pc == 0x2C4C84u) {
        ctx->pc = 0x2C4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C80u;
        // 0x2c4c84: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C88u;
        goto label_2c4c88;
    }
    ctx->pc = 0x2C4C80u;
    {
        const bool branch_taken_0x2c4c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4c80) {
            ctx->pc = 0x2C4C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C80u;
            // 0x2c4c84: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C88u;
            goto label_2c4c88;
        }
    }
    ctx->pc = 0x2C4C88u;
label_2c4c88:
    // 0x2c4c88: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c4c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4c8c:
    // 0x2c4c8c: 0xc0a2ab0  jal         func_28AAC0
label_2c4c90:
    if (ctx->pc == 0x2C4C90u) {
        ctx->pc = 0x2C4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C8Cu;
        // 0x2c4c90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4C94u;
        goto label_2c4c94;
    }
    ctx->pc = 0x2C4C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C4C94u);
    ctx->pc = 0x2C4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C8Cu;
    // 0x2c4c90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C4C8Cu, 0x2C4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C94u;
label_2c4c94:
    // 0x2c4c94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c4c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c98:
    // 0x2c4c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c9c:
    // 0x2c4c9c: 0xc0b12be  jal         func_2C4AF8
label_2c4ca0:
    if (ctx->pc == 0x2C4CA0u) {
        ctx->pc = 0x2C4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C9Cu;
        // 0x2c4ca0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CA4u;
        goto label_2c4ca4;
    }
    ctx->pc = 0x2C4C9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4CA4u);
    ctx->pc = 0x2C4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C9Cu;
    // 0x2c4ca0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AF8u, 0x2C4C9Cu, 0x2C4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CA4u;
label_2c4ca4:
    // 0x2c4ca4: 0x14560052  bne         $v0, $s6, . + 4 + (0x52 << 2)
label_2c4ca8:
    if (ctx->pc == 0x2C4CA8u) {
        ctx->pc = 0x2C4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CA4u;
        // 0x2c4ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CACu;
        goto label_2c4cac;
    }
    ctx->pc = 0x2C4CA4u;
    {
        const bool branch_taken_0x2c4ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CA4u;
        // 0x2c4ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ca4) {
            ctx->pc = 0x2C4DF0u;
            goto label_2c4df0;
        }
    }
    ctx->pc = 0x2C4CACu;
label_2c4cac:
    // 0x2c4cac: 0xc0a367c  jal         func_28D9F0
label_2c4cb0:
    if (ctx->pc == 0x2C4CB0u) {
        ctx->pc = 0x2C4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CACu;
        // 0x2c4cb0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CB4u;
        goto label_2c4cb4;
    }
    ctx->pc = 0x2C4CACu;
    SET_GPR_U32(ctx, 31, 0x2C4CB4u);
    ctx->pc = 0x2C4CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CACu;
    // 0x2c4cb0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C4CACu, 0x2C4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CB4u;
label_2c4cb4:
    // 0x2c4cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4cb8:
    // 0x2c4cb8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2c4cbc:
    if (ctx->pc == 0x2C4CBCu) {
        ctx->pc = 0x2C4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CB8u;
        // 0x2c4cbc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CC0u;
        goto label_2c4cc0;
    }
    ctx->pc = 0x2C4CB8u;
    {
        const bool branch_taken_0x2c4cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CB8u;
        // 0x2c4cbc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cb8) {
            ctx->pc = 0x2C4CECu;
            goto label_2c4cec;
        }
    }
    ctx->pc = 0x2C4CC0u;
label_2c4cc0:
    // 0x2c4cc0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4cc4:
    // 0x2c4cc4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c4cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c4cc8:
    // 0x2c4cc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c4cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ccc:
    // 0x2c4ccc: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2c4cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2c4cd0:
    // 0x2c4cd0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2c4cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2c4cd4:
    // 0x2c4cd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c4cd8:
    // 0x2c4cd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c4cdc:
    // 0x2c4cdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c4cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4ce0:
    // 0x2c4ce0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c4ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ce4:
    // 0x2c4ce4: 0xc0bee7a  jal         func_2FB9E8
label_2c4ce8:
    if (ctx->pc == 0x2C4CE8u) {
        ctx->pc = 0x2C4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CE4u;
        // 0x2c4ce8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CECu;
        goto label_2c4cec;
    }
    ctx->pc = 0x2C4CE4u;
    SET_GPR_U32(ctx, 31, 0x2C4CECu);
    ctx->pc = 0x2C4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CE4u;
    // 0x2c4ce8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C4CE4u, 0x2C4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CECu;
label_2c4cec:
    // 0x2c4cec: 0x10000040  b           . + 4 + (0x40 << 2)
label_2c4cf0:
    if (ctx->pc == 0x2C4CF0u) {
        ctx->pc = 0x2C4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CECu;
        // 0x2c4cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CF4u;
        goto label_2c4cf4;
    }
    ctx->pc = 0x2C4CECu;
    {
        const bool branch_taken_0x2c4cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CECu;
        // 0x2c4cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cec) {
            ctx->pc = 0x2C4DF0u;
            goto label_2c4df0;
        }
    }
    ctx->pc = 0x2C4CF4u;
label_2c4cf4:
    // 0x2c4cf4: 0xc088e88  jal         func_223A20
label_2c4cf8:
    if (ctx->pc == 0x2C4CF8u) {
        ctx->pc = 0x2C4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CF4u;
        // 0x2c4cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4CFCu;
        goto label_2c4cfc;
    }
    ctx->pc = 0x2C4CF4u;
    SET_GPR_U32(ctx, 31, 0x2C4CFCu);
    ctx->pc = 0x2C4CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CF4u;
    // 0x2c4cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2C4CF4u, 0x2C4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CFCu;
label_2c4cfc:
    // 0x2c4cfc: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_2c4d00:
    if (ctx->pc == 0x2C4D00u) {
        ctx->pc = 0x2C4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CFCu;
        // 0x2c4d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D04u;
        goto label_2c4d04;
    }
    ctx->pc = 0x2C4CFCu;
    {
        const bool branch_taken_0x2c4cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CFCu;
        // 0x2c4d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cfc) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4D04u;
label_2c4d04:
    // 0x2c4d04: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2c4d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c4d08:
    // 0x2c4d08: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c4d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c4d0c:
    // 0x2c4d0c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2c4d10:
    // 0x2c4d10: 0xc0cd7d2  jal         func_335F48
label_2c4d14:
    if (ctx->pc == 0x2C4D14u) {
        ctx->pc = 0x2C4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D10u;
        // 0x2c4d14: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D18u;
        goto label_2c4d18;
    }
    ctx->pc = 0x2C4D10u;
    SET_GPR_U32(ctx, 31, 0x2C4D18u);
    ctx->pc = 0x2C4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D10u;
    // 0x2c4d14: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2C4D10u, 0x2C4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D18u;
label_2c4d18:
    // 0x2c4d18: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2c4d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c4d1c:
    // 0x2c4d1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c4d1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c4d20:
    // 0x2c4d20: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2c4d20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c4d24:
    // 0x2c4d24: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c4d28:
    // 0x2c4d28: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c4d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c4d2c:
    // 0x2c4d2c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2c4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2c4d30:
    // 0x2c4d30: 0xc0cd780  jal         func_335E00
label_2c4d34:
    if (ctx->pc == 0x2C4D34u) {
        ctx->pc = 0x2C4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D30u;
        // 0x2c4d34: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D38u;
        goto label_2c4d38;
    }
    ctx->pc = 0x2C4D30u;
    SET_GPR_U32(ctx, 31, 0x2C4D38u);
    ctx->pc = 0x2C4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D30u;
    // 0x2c4d34: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2C4D30u, 0x2C4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D38u;
label_2c4d38:
    // 0x2c4d38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c4d38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c4d3c:
    // 0x2c4d3c: 0xc0cd742  jal         func_335D08
label_2c4d40:
    if (ctx->pc == 0x2C4D40u) {
        ctx->pc = 0x2C4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D3Cu;
        // 0x2c4d40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D44u;
        goto label_2c4d44;
    }
    ctx->pc = 0x2C4D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4D44u);
    ctx->pc = 0x2C4D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D3Cu;
    // 0x2c4d40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2C4D3Cu, 0x2C4D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D44u;
label_2c4d44:
    // 0x2c4d44: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c4d44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c4d48:
    // 0x2c4d48: 0xc0cdd2e  jal         func_3374B8
label_2c4d4c:
    if (ctx->pc == 0x2C4D4Cu) {
        ctx->pc = 0x2C4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D48u;
        // 0x2c4d4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D50u;
        goto label_2c4d50;
    }
    ctx->pc = 0x2C4D48u;
    SET_GPR_U32(ctx, 31, 0x2C4D50u);
    ctx->pc = 0x2C4D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D48u;
    // 0x2c4d4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2C4D48u, 0x2C4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D50u;
label_2c4d50:
    // 0x2c4d50: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2c4d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_2c4d54:
    // 0x2c4d54: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c4d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2c4d58:
    // 0x2c4d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4d5c:
    // 0x2c4d5c: 0x0  nop
    ctx->pc = 0x2c4d5cu;
    // NOP
label_2c4d60:
    // 0x2c4d60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4d64:
    // 0x2c4d64: 0x0  nop
    ctx->pc = 0x2c4d64u;
    // NOP
label_2c4d68:
    // 0x2c4d68: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_2c4d6c:
    if (ctx->pc == 0x2C4D6Cu) {
        ctx->pc = 0x2C4D70u;
        goto label_2c4d70;
    }
    ctx->pc = 0x2C4D68u;
    {
        const bool branch_taken_0x2c4d68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4d68) {
            ctx->pc = 0x2C4DACu;
            goto label_2c4dac;
        }
    }
    ctx->pc = 0x2C4D70u;
label_2c4d70:
    // 0x2c4d70: 0xc0a367c  jal         func_28D9F0
label_2c4d74:
    if (ctx->pc == 0x2C4D74u) {
        ctx->pc = 0x2C4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D70u;
        // 0x2c4d74: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D78u;
        goto label_2c4d78;
    }
    ctx->pc = 0x2C4D70u;
    SET_GPR_U32(ctx, 31, 0x2C4D78u);
    ctx->pc = 0x2C4D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D70u;
    // 0x2c4d74: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C4D70u, 0x2C4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D78u;
label_2c4d78:
    // 0x2c4d78: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2c4d7c:
    if (ctx->pc == 0x2C4D7Cu) {
        ctx->pc = 0x2C4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D78u;
        // 0x2c4d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D80u;
        goto label_2c4d80;
    }
    ctx->pc = 0x2C4D78u;
    {
        const bool branch_taken_0x2c4d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D78u;
        // 0x2c4d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d78) {
            ctx->pc = 0x2C4E90u;
            goto label_2c4e90;
        }
    }
    ctx->pc = 0x2C4D80u;
label_2c4d80:
    // 0x2c4d80: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2c4d80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c4d84:
    // 0x2c4d84: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4d88:
    // 0x2c4d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4d8c:
    // 0x2c4d8c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2c4d90:
    // 0x2c4d90: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c4d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c4d94:
    // 0x2c4d94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c4d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c4d98:
    // 0x2c4d98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c4d9c:
    // 0x2c4d9c: 0xc0bf800  jal         func_2FE000
label_2c4da0:
    if (ctx->pc == 0x2C4DA0u) {
        ctx->pc = 0x2C4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D9Cu;
        // 0x2c4da0: 0xd53021  addu        $a2, $a2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DA4u;
        goto label_2c4da4;
    }
    ctx->pc = 0x2C4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4DA4u);
    ctx->pc = 0x2C4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D9Cu;
    // 0x2c4da0: 0xd53021  addu        $a2, $a2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C4D9Cu, 0x2C4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DA4u;
label_2c4da4:
    // 0x2c4da4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2c4da8:
    if (ctx->pc == 0x2C4DA8u) {
        ctx->pc = 0x2C4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DA4u;
        // 0x2c4da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DACu;
        goto label_2c4dac;
    }
    ctx->pc = 0x2C4DA4u;
    {
        const bool branch_taken_0x2c4da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DA4u;
        // 0x2c4da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4da4) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4DACu;
label_2c4dac:
    // 0x2c4dac: 0xc0a367c  jal         func_28D9F0
label_2c4db0:
    if (ctx->pc == 0x2C4DB0u) {
        ctx->pc = 0x2C4DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DACu;
        // 0x2c4db0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DB4u;
        goto label_2c4db4;
    }
    ctx->pc = 0x2C4DACu;
    SET_GPR_U32(ctx, 31, 0x2C4DB4u);
    ctx->pc = 0x2C4DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DACu;
    // 0x2c4db0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C4DACu, 0x2C4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DB4u;
label_2c4db4:
    // 0x2c4db4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c4db8:
    if (ctx->pc == 0x2C4DB8u) {
        ctx->pc = 0x2C4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB4u;
        // 0x2c4db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DBCu;
        goto label_2c4dbc;
    }
    ctx->pc = 0x2C4DB4u;
    {
        const bool branch_taken_0x2c4db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB4u;
        // 0x2c4db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4db4) {
            ctx->pc = 0x2C4DDCu;
            goto label_2c4ddc;
        }
    }
    ctx->pc = 0x2C4DBCu;
label_2c4dbc:
    // 0x2c4dbc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4dc0:
    // 0x2c4dc0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c4dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c4dc4:
    // 0x2c4dc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c4dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c4dc8:
    // 0x2c4dc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c4dcc:
    // 0x2c4dcc: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c4dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c4dd0:
    // 0x2c4dd0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c4dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c4dd4:
    // 0x2c4dd4: 0xc0be8c0  jal         func_2FA300
label_2c4dd8:
    if (ctx->pc == 0x2C4DD8u) {
        ctx->pc = 0x2C4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DD4u;
        // 0x2c4dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DDCu;
        goto label_2c4ddc;
    }
    ctx->pc = 0x2C4DD4u;
    SET_GPR_U32(ctx, 31, 0x2C4DDCu);
    ctx->pc = 0x2C4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DD4u;
    // 0x2c4dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C4DD4u, 0x2C4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DDCu;
label_2c4ddc:
    // 0x2c4ddc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x2c4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2c4de0:
    // 0x2c4de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4de4:
    // 0x2c4de4: 0xc08ce24  jal         func_233890
label_2c4de8:
    if (ctx->pc == 0x2C4DE8u) {
        ctx->pc = 0x2C4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DE4u;
        // 0x2c4de8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DECu;
        goto label_2c4dec;
    }
    ctx->pc = 0x2C4DE4u;
    SET_GPR_U32(ctx, 31, 0x2C4DECu);
    ctx->pc = 0x2C4DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DE4u;
    // 0x2c4de8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233890u, 0x2C4DE4u, 0x2C4DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DECu;
label_2c4dec:
    // 0x2c4dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c4df0:
    // 0x2c4df0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2c4df4:
    if (ctx->pc == 0x2C4DF4u) {
        ctx->pc = 0x2C4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DF0u;
        // 0x2c4df4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DF8u;
        goto label_2c4df8;
    }
    ctx->pc = 0x2C4DF0u;
    {
        const bool branch_taken_0x2c4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DF0u;
        // 0x2c4df4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4df0) {
            ctx->pc = 0x2C4E90u;
            goto label_2c4e90;
        }
    }
    ctx->pc = 0x2C4DF8u;
label_2c4df8:
    // 0x2c4df8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c4dfc:
    // 0x2c4dfc: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2c4e00:
    if (ctx->pc == 0x2C4E00u) {
        ctx->pc = 0x2C4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DFCu;
        // 0x2c4e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E04u;
        goto label_2c4e04;
    }
    ctx->pc = 0x2C4DFCu;
    {
        const bool branch_taken_0x2c4dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DFCu;
        // 0x2c4e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dfc) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4E04u;
label_2c4e04:
    // 0x2c4e04: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2c4e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c4e08:
    // 0x2c4e08: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c4e0c:
    // 0x2c4e0c: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x2c4e0cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c4e10:
    // 0x2c4e10: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c4e14:
    // 0x2c4e14: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x2c4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2c4e18:
    // 0x2c4e18: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c4e1c:
    // 0x2c4e1c: 0x84c40028  lh          $a0, 0x28($a2)
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
label_2c4e20:
    // 0x2c4e20: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c4e20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c4e24:
    // 0x2c4e24: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_2c4e28:
    // 0x2c4e28: 0x2c5880a  movz        $s1, $s6, $a1
    ctx->pc = 0x2c4e28u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
label_2c4e2c:
    // 0x2c4e2c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2c4e30:
    // 0x2c4e30: 0x40f809  jalr        $v0
label_2c4e34:
    if (ctx->pc == 0x2C4E34u) {
        ctx->pc = 0x2C4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E30u;
        // 0x2c4e34: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E38u;
        goto label_2c4e38;
    }
    ctx->pc = 0x2C4E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C4E38u);
        ctx->pc = 0x2C4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E30u;
        // 0x2c4e34: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4E30u, 0x2C4E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4E38u;
label_2c4e38:
    // 0x2c4e38: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c4e3c:
    // 0x2c4e3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e40:
    // 0x2c4e40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c4e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c4e44:
    // 0x2c4e44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c4e48:
    // 0x2c4e48: 0x40f809  jalr        $v0
label_2c4e4c:
    if (ctx->pc == 0x2C4E4Cu) {
        ctx->pc = 0x2C4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E48u;
        // 0x2c4e4c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E50u;
        goto label_2c4e50;
    }
    ctx->pc = 0x2C4E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C4E50u);
        ctx->pc = 0x2C4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E48u;
        // 0x2c4e4c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4E48u, 0x2C4E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4E50u;
label_2c4e50:
    // 0x2c4e50: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x2c4e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2c4e54:
    // 0x2c4e54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e58:
    // 0x2c4e58: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c4e58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e5c:
    // 0x2c4e5c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2c4e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e60:
    // 0x2c4e60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2c4e60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e64:
    // 0x2c4e64: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c4e68:
    // 0x2c4e68: 0xc05b7da  jal         func_16DF68
label_2c4e6c:
    if (ctx->pc == 0x2C4E6Cu) {
        ctx->pc = 0x2C4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E68u;
        // 0x2c4e6c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E70u;
        goto label_2c4e70;
    }
    ctx->pc = 0x2C4E68u;
    SET_GPR_U32(ctx, 31, 0x2C4E70u);
    ctx->pc = 0x2C4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E68u;
    // 0x2c4e6c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF68u, 0x2C4E68u, 0x2C4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E70u;
label_2c4e70:
    // 0x2c4e70: 0xc087502  jal         func_21D408
label_2c4e74:
    if (ctx->pc == 0x2C4E74u) {
        ctx->pc = 0x2C4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E70u;
        // 0x2c4e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E78u;
        goto label_2c4e78;
    }
    ctx->pc = 0x2C4E70u;
    SET_GPR_U32(ctx, 31, 0x2C4E78u);
    ctx->pc = 0x2C4E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E70u;
    // 0x2c4e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C4E70u, 0x2C4E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E78u;
label_2c4e78:
    // 0x2c4e78: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x2c4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2c4e7c:
    // 0x2c4e7c: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x2c4e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c4e80:
    // 0x2c4e80: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c4e84:
    // 0x2c4e84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c4e88:
    // 0x2c4e88: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c4e8c:
    if (ctx->pc == 0x2C4E8Cu) {
        ctx->pc = 0x2C4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E88u;
        // 0x2c4e8c: 0xaca405f4  sw          $a0, 0x5F4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E90u;
        goto label_2c4e90;
    }
    ctx->pc = 0x2C4E88u;
    {
        const bool branch_taken_0x2c4e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E88u;
        // 0x2c4e8c: 0xaca405f4  sw          $a0, 0x5F4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e88) {
            ctx->pc = 0x2C4E94u;
            goto label_2c4e94;
        }
    }
    ctx->pc = 0x2C4E90u;
label_2c4e90:
    // 0x2c4e90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e94:
    // 0x2c4e94: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c4e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c4e98:
    // 0x2c4e98: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c4e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c4e9c:
    // 0x2c4e9c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c4e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c4ea0:
    // 0x2c4ea0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c4ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4ea4:
    // 0x2c4ea4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c4ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4ea8:
    // 0x2c4ea8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c4ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4eac:
    // 0x2c4eac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2c4eacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4eb0:
    // 0x2c4eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4eb4:
    // 0x2c4eb4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c4eb8:
    // 0x2c4eb8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c4eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c4ebc:
    // 0x2c4ebc: 0x3e00008  jr          $ra
label_2c4ec0:
    if (ctx->pc == 0x2C4EC0u) {
        ctx->pc = 0x2C4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EBCu;
        // 0x2c4ec0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4EC4u;
        goto label_2c4ec4;
    }
    ctx->pc = 0x2C4EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EBCu;
        // 0x2c4ec0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4EC4u;
label_2c4ec4:
    // 0x2c4ec4: 0x0  nop
    ctx->pc = 0x2c4ec4u;
    // NOP
    ctx->pc = 0x2c4ec8u;
}
