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

// Function: sub_003F1BB0
// Address: 0x3f1bb0 - 0x3f1ef0
void sub_003F1BB0_0x3f1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1BB0_0x3f1bb0");
#endif

    switch (ctx->pc) {
        case 0x3f1bb0u: goto label_3f1bb0;
        case 0x3f1bb4u: goto label_3f1bb4;
        case 0x3f1bb8u: goto label_3f1bb8;
        case 0x3f1bbcu: goto label_3f1bbc;
        case 0x3f1bc0u: goto label_3f1bc0;
        case 0x3f1bc4u: goto label_3f1bc4;
        case 0x3f1bc8u: goto label_3f1bc8;
        case 0x3f1bccu: goto label_3f1bcc;
        case 0x3f1bd0u: goto label_3f1bd0;
        case 0x3f1bd4u: goto label_3f1bd4;
        case 0x3f1bd8u: goto label_3f1bd8;
        case 0x3f1bdcu: goto label_3f1bdc;
        case 0x3f1be0u: goto label_3f1be0;
        case 0x3f1be4u: goto label_3f1be4;
        case 0x3f1be8u: goto label_3f1be8;
        case 0x3f1becu: goto label_3f1bec;
        case 0x3f1bf0u: goto label_3f1bf0;
        case 0x3f1bf4u: goto label_3f1bf4;
        case 0x3f1bf8u: goto label_3f1bf8;
        case 0x3f1bfcu: goto label_3f1bfc;
        case 0x3f1c00u: goto label_3f1c00;
        case 0x3f1c04u: goto label_3f1c04;
        case 0x3f1c08u: goto label_3f1c08;
        case 0x3f1c0cu: goto label_3f1c0c;
        case 0x3f1c10u: goto label_3f1c10;
        case 0x3f1c14u: goto label_3f1c14;
        case 0x3f1c18u: goto label_3f1c18;
        case 0x3f1c1cu: goto label_3f1c1c;
        case 0x3f1c20u: goto label_3f1c20;
        case 0x3f1c24u: goto label_3f1c24;
        case 0x3f1c28u: goto label_3f1c28;
        case 0x3f1c2cu: goto label_3f1c2c;
        case 0x3f1c30u: goto label_3f1c30;
        case 0x3f1c34u: goto label_3f1c34;
        case 0x3f1c38u: goto label_3f1c38;
        case 0x3f1c3cu: goto label_3f1c3c;
        case 0x3f1c40u: goto label_3f1c40;
        case 0x3f1c44u: goto label_3f1c44;
        case 0x3f1c48u: goto label_3f1c48;
        case 0x3f1c4cu: goto label_3f1c4c;
        case 0x3f1c50u: goto label_3f1c50;
        case 0x3f1c54u: goto label_3f1c54;
        case 0x3f1c58u: goto label_3f1c58;
        case 0x3f1c5cu: goto label_3f1c5c;
        case 0x3f1c60u: goto label_3f1c60;
        case 0x3f1c64u: goto label_3f1c64;
        case 0x3f1c68u: goto label_3f1c68;
        case 0x3f1c6cu: goto label_3f1c6c;
        case 0x3f1c70u: goto label_3f1c70;
        case 0x3f1c74u: goto label_3f1c74;
        case 0x3f1c78u: goto label_3f1c78;
        case 0x3f1c7cu: goto label_3f1c7c;
        case 0x3f1c80u: goto label_3f1c80;
        case 0x3f1c84u: goto label_3f1c84;
        case 0x3f1c88u: goto label_3f1c88;
        case 0x3f1c8cu: goto label_3f1c8c;
        case 0x3f1c90u: goto label_3f1c90;
        case 0x3f1c94u: goto label_3f1c94;
        case 0x3f1c98u: goto label_3f1c98;
        case 0x3f1c9cu: goto label_3f1c9c;
        case 0x3f1ca0u: goto label_3f1ca0;
        case 0x3f1ca4u: goto label_3f1ca4;
        case 0x3f1ca8u: goto label_3f1ca8;
        case 0x3f1cacu: goto label_3f1cac;
        case 0x3f1cb0u: goto label_3f1cb0;
        case 0x3f1cb4u: goto label_3f1cb4;
        case 0x3f1cb8u: goto label_3f1cb8;
        case 0x3f1cbcu: goto label_3f1cbc;
        case 0x3f1cc0u: goto label_3f1cc0;
        case 0x3f1cc4u: goto label_3f1cc4;
        case 0x3f1cc8u: goto label_3f1cc8;
        case 0x3f1cccu: goto label_3f1ccc;
        case 0x3f1cd0u: goto label_3f1cd0;
        case 0x3f1cd4u: goto label_3f1cd4;
        case 0x3f1cd8u: goto label_3f1cd8;
        case 0x3f1cdcu: goto label_3f1cdc;
        case 0x3f1ce0u: goto label_3f1ce0;
        case 0x3f1ce4u: goto label_3f1ce4;
        case 0x3f1ce8u: goto label_3f1ce8;
        case 0x3f1cecu: goto label_3f1cec;
        case 0x3f1cf0u: goto label_3f1cf0;
        case 0x3f1cf4u: goto label_3f1cf4;
        case 0x3f1cf8u: goto label_3f1cf8;
        case 0x3f1cfcu: goto label_3f1cfc;
        case 0x3f1d00u: goto label_3f1d00;
        case 0x3f1d04u: goto label_3f1d04;
        case 0x3f1d08u: goto label_3f1d08;
        case 0x3f1d0cu: goto label_3f1d0c;
        case 0x3f1d10u: goto label_3f1d10;
        case 0x3f1d14u: goto label_3f1d14;
        case 0x3f1d18u: goto label_3f1d18;
        case 0x3f1d1cu: goto label_3f1d1c;
        case 0x3f1d20u: goto label_3f1d20;
        case 0x3f1d24u: goto label_3f1d24;
        case 0x3f1d28u: goto label_3f1d28;
        case 0x3f1d2cu: goto label_3f1d2c;
        case 0x3f1d30u: goto label_3f1d30;
        case 0x3f1d34u: goto label_3f1d34;
        case 0x3f1d38u: goto label_3f1d38;
        case 0x3f1d3cu: goto label_3f1d3c;
        case 0x3f1d40u: goto label_3f1d40;
        case 0x3f1d44u: goto label_3f1d44;
        case 0x3f1d48u: goto label_3f1d48;
        case 0x3f1d4cu: goto label_3f1d4c;
        case 0x3f1d50u: goto label_3f1d50;
        case 0x3f1d54u: goto label_3f1d54;
        case 0x3f1d58u: goto label_3f1d58;
        case 0x3f1d5cu: goto label_3f1d5c;
        case 0x3f1d60u: goto label_3f1d60;
        case 0x3f1d64u: goto label_3f1d64;
        case 0x3f1d68u: goto label_3f1d68;
        case 0x3f1d6cu: goto label_3f1d6c;
        case 0x3f1d70u: goto label_3f1d70;
        case 0x3f1d74u: goto label_3f1d74;
        case 0x3f1d78u: goto label_3f1d78;
        case 0x3f1d7cu: goto label_3f1d7c;
        case 0x3f1d80u: goto label_3f1d80;
        case 0x3f1d84u: goto label_3f1d84;
        case 0x3f1d88u: goto label_3f1d88;
        case 0x3f1d8cu: goto label_3f1d8c;
        case 0x3f1d90u: goto label_3f1d90;
        case 0x3f1d94u: goto label_3f1d94;
        case 0x3f1d98u: goto label_3f1d98;
        case 0x3f1d9cu: goto label_3f1d9c;
        case 0x3f1da0u: goto label_3f1da0;
        case 0x3f1da4u: goto label_3f1da4;
        case 0x3f1da8u: goto label_3f1da8;
        case 0x3f1dacu: goto label_3f1dac;
        case 0x3f1db0u: goto label_3f1db0;
        case 0x3f1db4u: goto label_3f1db4;
        case 0x3f1db8u: goto label_3f1db8;
        case 0x3f1dbcu: goto label_3f1dbc;
        case 0x3f1dc0u: goto label_3f1dc0;
        case 0x3f1dc4u: goto label_3f1dc4;
        case 0x3f1dc8u: goto label_3f1dc8;
        case 0x3f1dccu: goto label_3f1dcc;
        case 0x3f1dd0u: goto label_3f1dd0;
        case 0x3f1dd4u: goto label_3f1dd4;
        case 0x3f1dd8u: goto label_3f1dd8;
        case 0x3f1ddcu: goto label_3f1ddc;
        case 0x3f1de0u: goto label_3f1de0;
        case 0x3f1de4u: goto label_3f1de4;
        case 0x3f1de8u: goto label_3f1de8;
        case 0x3f1decu: goto label_3f1dec;
        case 0x3f1df0u: goto label_3f1df0;
        case 0x3f1df4u: goto label_3f1df4;
        case 0x3f1df8u: goto label_3f1df8;
        case 0x3f1dfcu: goto label_3f1dfc;
        case 0x3f1e00u: goto label_3f1e00;
        case 0x3f1e04u: goto label_3f1e04;
        case 0x3f1e08u: goto label_3f1e08;
        case 0x3f1e0cu: goto label_3f1e0c;
        case 0x3f1e10u: goto label_3f1e10;
        case 0x3f1e14u: goto label_3f1e14;
        case 0x3f1e18u: goto label_3f1e18;
        case 0x3f1e1cu: goto label_3f1e1c;
        case 0x3f1e20u: goto label_3f1e20;
        case 0x3f1e24u: goto label_3f1e24;
        case 0x3f1e28u: goto label_3f1e28;
        case 0x3f1e2cu: goto label_3f1e2c;
        case 0x3f1e30u: goto label_3f1e30;
        case 0x3f1e34u: goto label_3f1e34;
        case 0x3f1e38u: goto label_3f1e38;
        case 0x3f1e3cu: goto label_3f1e3c;
        case 0x3f1e40u: goto label_3f1e40;
        case 0x3f1e44u: goto label_3f1e44;
        case 0x3f1e48u: goto label_3f1e48;
        case 0x3f1e4cu: goto label_3f1e4c;
        case 0x3f1e50u: goto label_3f1e50;
        case 0x3f1e54u: goto label_3f1e54;
        case 0x3f1e58u: goto label_3f1e58;
        case 0x3f1e5cu: goto label_3f1e5c;
        case 0x3f1e60u: goto label_3f1e60;
        case 0x3f1e64u: goto label_3f1e64;
        case 0x3f1e68u: goto label_3f1e68;
        case 0x3f1e6cu: goto label_3f1e6c;
        case 0x3f1e70u: goto label_3f1e70;
        case 0x3f1e74u: goto label_3f1e74;
        case 0x3f1e78u: goto label_3f1e78;
        case 0x3f1e7cu: goto label_3f1e7c;
        case 0x3f1e80u: goto label_3f1e80;
        case 0x3f1e84u: goto label_3f1e84;
        case 0x3f1e88u: goto label_3f1e88;
        case 0x3f1e8cu: goto label_3f1e8c;
        case 0x3f1e90u: goto label_3f1e90;
        case 0x3f1e94u: goto label_3f1e94;
        case 0x3f1e98u: goto label_3f1e98;
        case 0x3f1e9cu: goto label_3f1e9c;
        case 0x3f1ea0u: goto label_3f1ea0;
        case 0x3f1ea4u: goto label_3f1ea4;
        case 0x3f1ea8u: goto label_3f1ea8;
        case 0x3f1eacu: goto label_3f1eac;
        case 0x3f1eb0u: goto label_3f1eb0;
        case 0x3f1eb4u: goto label_3f1eb4;
        case 0x3f1eb8u: goto label_3f1eb8;
        case 0x3f1ebcu: goto label_3f1ebc;
        case 0x3f1ec0u: goto label_3f1ec0;
        case 0x3f1ec4u: goto label_3f1ec4;
        case 0x3f1ec8u: goto label_3f1ec8;
        case 0x3f1eccu: goto label_3f1ecc;
        case 0x3f1ed0u: goto label_3f1ed0;
        case 0x3f1ed4u: goto label_3f1ed4;
        case 0x3f1ed8u: goto label_3f1ed8;
        case 0x3f1edcu: goto label_3f1edc;
        case 0x3f1ee0u: goto label_3f1ee0;
        case 0x3f1ee4u: goto label_3f1ee4;
        case 0x3f1ee8u: goto label_3f1ee8;
        case 0x3f1eecu: goto label_3f1eec;
        default: break;
    }

    ctx->pc = 0x3f1bb0u;

label_3f1bb0:
    // 0x3f1bb0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3f1bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_3f1bb4:
    // 0x3f1bb4: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x3f1bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_3f1bb8:
    // 0x3f1bb8: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x3f1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_3f1bbc:
    // 0x3f1bbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f1bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1bc0:
    // 0x3f1bc0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f1bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f1bc4:
    // 0x3f1bc4: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x3f1bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_3f1bc8:
    // 0x3f1bc8: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x3f1bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_3f1bcc:
    // 0x3f1bcc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3f1bccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f1bd0:
    // 0x3f1bd0: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x3f1bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_3f1bd4:
    // 0x3f1bd4: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x3f1bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_3f1bd8:
    // 0x3f1bd8: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x3f1bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_3f1bdc:
    // 0x3f1bdc: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x3f1bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_3f1be0:
    // 0x3f1be0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3f1be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_3f1be4:
    // 0x3f1be4: 0xc0ea146  jal         func_3A8518
label_3f1be8:
    if (ctx->pc == 0x3F1BE8u) {
        ctx->pc = 0x3F1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BE4u;
        // 0x3f1be8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1BECu;
        goto label_3f1bec;
    }
    ctx->pc = 0x3F1BE4u;
    SET_GPR_U32(ctx, 31, 0x3F1BECu);
    ctx->pc = 0x3F1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1BE4u;
    // 0x3f1be8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F1BE4u, 0x3F1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1BECu;
label_3f1bec:
    // 0x3f1bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f1bf0:
    // 0x3f1bf0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3f1bf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1bf4:
    // 0x3f1bf4: 0xc0ea12a  jal         func_3A84A8
label_3f1bf8:
    if (ctx->pc == 0x3F1BF8u) {
        ctx->pc = 0x3F1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BF4u;
        // 0x3f1bf8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1BFCu;
        goto label_3f1bfc;
    }
    ctx->pc = 0x3F1BF4u;
    SET_GPR_U32(ctx, 31, 0x3F1BFCu);
    ctx->pc = 0x3F1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1BF4u;
    // 0x3f1bf8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F1BF4u, 0x3F1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1BFCu;
label_3f1bfc:
    // 0x3f1bfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f1c00:
    // 0x3f1c00: 0xc0ea12a  jal         func_3A84A8
label_3f1c04:
    if (ctx->pc == 0x3F1C04u) {
        ctx->pc = 0x3F1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C00u;
        // 0x3f1c04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C08u;
        goto label_3f1c08;
    }
    ctx->pc = 0x3F1C00u;
    SET_GPR_U32(ctx, 31, 0x3F1C08u);
    ctx->pc = 0x3F1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C00u;
    // 0x3f1c04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F1C00u, 0x3F1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C08u;
label_3f1c08:
    // 0x3f1c08: 0xc0ea146  jal         func_3A8518
label_3f1c0c:
    if (ctx->pc == 0x3F1C0Cu) {
        ctx->pc = 0x3F1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C08u;
        // 0x3f1c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C10u;
        goto label_3f1c10;
    }
    ctx->pc = 0x3F1C08u;
    SET_GPR_U32(ctx, 31, 0x3F1C10u);
    ctx->pc = 0x3F1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C08u;
    // 0x3f1c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F1C08u, 0x3F1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C10u;
label_3f1c10:
    // 0x3f1c10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f1c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c14:
    // 0x3f1c14: 0xc0ea14c  jal         func_3A8530
label_3f1c18:
    if (ctx->pc == 0x3F1C18u) {
        ctx->pc = 0x3F1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C14u;
        // 0x3f1c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C1Cu;
        goto label_3f1c1c;
    }
    ctx->pc = 0x3F1C14u;
    SET_GPR_U32(ctx, 31, 0x3F1C1Cu);
    ctx->pc = 0x3F1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C14u;
    // 0x3f1c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F1C14u, 0x3F1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C1Cu;
label_3f1c1c:
    // 0x3f1c1c: 0xc08a61a  jal         func_229868
label_3f1c20:
    if (ctx->pc == 0x3F1C20u) {
        ctx->pc = 0x3F1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C1Cu;
        // 0x3f1c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C24u;
        goto label_3f1c24;
    }
    ctx->pc = 0x3F1C1Cu;
    SET_GPR_U32(ctx, 31, 0x3F1C24u);
    ctx->pc = 0x3F1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C1Cu;
    // 0x3f1c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3F1C1Cu, 0x3F1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C24u;
label_3f1c24:
    // 0x3f1c24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f1c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c28:
    // 0x3f1c28: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f1c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3f1c2c:
    // 0x3f1c2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f1c30:
    // 0x3f1c30: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3f1c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3f1c34:
    // 0x3f1c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c38:
    // 0x3f1c38: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3f1c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3f1c3c:
    // 0x3f1c3c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f1c40:
    // 0x3f1c40: 0x60f809  jalr        $v1
label_3f1c44:
    if (ctx->pc == 0x3F1C44u) {
        ctx->pc = 0x3F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C40u;
        // 0x3f1c44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C48u;
        goto label_3f1c48;
    }
    ctx->pc = 0x3F1C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F1C48u);
        ctx->pc = 0x3F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C40u;
        // 0x3f1c44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1C40u, 0x3F1C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1C48u;
label_3f1c48:
    // 0x3f1c48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f1c4c:
    // 0x3f1c4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f1c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c50:
    // 0x3f1c50: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3f1c50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3f1c54:
    // 0x3f1c54: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3f1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3f1c58:
    // 0x3f1c58: 0x60f809  jalr        $v1
label_3f1c5c:
    if (ctx->pc == 0x3F1C5Cu) {
        ctx->pc = 0x3F1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C58u;
        // 0x3f1c5c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C60u;
        goto label_3f1c60;
    }
    ctx->pc = 0x3F1C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F1C60u);
        ctx->pc = 0x3F1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C58u;
        // 0x3f1c5c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1C58u, 0x3F1C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1C60u;
label_3f1c60:
    // 0x3f1c60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f1c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c64:
    // 0x3f1c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c68:
    // 0x3f1c68: 0xc0e8604  jal         func_3A1810
label_3f1c6c:
    if (ctx->pc == 0x3F1C6Cu) {
        ctx->pc = 0x3F1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C68u;
        // 0x3f1c6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1C70u;
        goto label_3f1c70;
    }
    ctx->pc = 0x3F1C68u;
    SET_GPR_U32(ctx, 31, 0x3F1C70u);
    ctx->pc = 0x3F1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C68u;
    // 0x3f1c6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3F1C68u, 0x3F1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C70u;
label_3f1c70:
    // 0x3f1c70: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x3f1c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3f1c74:
    // 0x3f1c74: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x3f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_3f1c78:
    // 0x3f1c78: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x3f1c78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1c7c:
    // 0x3f1c7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3f1c80:
    // 0x3f1c80: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x3f1c80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1c84:
    // 0x3f1c84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f1c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f1c88:
    // 0x3f1c88: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x3f1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_3f1c8c:
    // 0x3f1c8c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x3f1c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3f1c90:
    // 0x3f1c90: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3f1c90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_3f1c94:
    // 0x3f1c94: 0xae460054  sw          $a2, 0x54($s2)
    ctx->pc = 0x3f1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 6));
label_3f1c98:
    // 0x3f1c98: 0x7e470010  sq          $a3, 0x10($s2)
    ctx->pc = 0x3f1c98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 7));
label_3f1c9c:
    // 0x3f1c9c: 0x7e480020  sq          $t0, 0x20($s2)
    ctx->pc = 0x3f1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 8));
label_3f1ca0:
    // 0x3f1ca0: 0xc0e44cc  jal         func_391330
label_3f1ca4:
    if (ctx->pc == 0x3F1CA4u) {
        ctx->pc = 0x3F1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CA0u;
        // 0x3f1ca4: 0x7fa80020  sq          $t0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1CA8u;
        goto label_3f1ca8;
    }
    ctx->pc = 0x3F1CA0u;
    SET_GPR_U32(ctx, 31, 0x3F1CA8u);
    ctx->pc = 0x3F1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1CA0u;
    // 0x3f1ca4: 0x7fa80020  sq          $t0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3F1CA0u, 0x3F1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1CA8u;
label_3f1ca8:
    // 0x3f1ca8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3f1ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1cac:
    // 0x3f1cac: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3f1cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_3f1cb0:
    // 0x3f1cb0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3f1cb4:
    if (ctx->pc == 0x3F1CB4u) {
        ctx->pc = 0x3F1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CB0u;
        // 0x3f1cb4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1CB8u;
        goto label_3f1cb8;
    }
    ctx->pc = 0x3F1CB0u;
    {
        const bool branch_taken_0x3f1cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CB0u;
        // 0x3f1cb4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cb0) {
            ctx->pc = 0x3F1D18u;
            goto label_3f1d18;
        }
    }
    ctx->pc = 0x3F1CB8u;
label_3f1cb8:
    // 0x3f1cb8: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x3f1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3f1cbc:
    // 0x3f1cbc: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3f1cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f1cc0:
    // 0x3f1cc0: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x3f1cc0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_3f1cc4:
    // 0x3f1cc4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x3f1cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3f1cc8:
    // 0x3f1cc8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x3f1cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3f1ccc:
    // 0x3f1ccc: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x3f1cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3f1cd0:
    // 0x3f1cd0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x3f1cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3f1cd4:
    // 0x3f1cd4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x3f1cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3f1cd8:
    // 0x3f1cd8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x3f1cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3f1cdc:
    // 0x3f1cdc: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x3f1cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3f1ce0:
    // 0x3f1ce0: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x3f1ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3f1ce4:
    // 0x3f1ce4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x3f1ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1ce8:
    // 0x3f1ce8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3f1ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1cec:
    // 0x3f1cec: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x3f1cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1cf0:
    // 0x3f1cf0: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x3f1cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1cf4:
    // 0x3f1cf4: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x3f1cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1cf8:
    // 0x3f1cf8: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x3f1cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1cfc:
    // 0x3f1cfc: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x3f1cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1d00:
    // 0x3f1d00: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x3f1d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1d04:
    // 0x3f1d04: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3f1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3f1d08:
    // 0x3f1d08: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_3f1d0c:
    if (ctx->pc == 0x3F1D0Cu) {
        ctx->pc = 0x3F1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D08u;
        // 0x3f1d0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1D10u;
        goto label_3f1d10;
    }
    ctx->pc = 0x3F1D08u;
    {
        const bool branch_taken_0x3f1d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D08u;
        // 0x3f1d0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d08) {
            ctx->pc = 0x3F1CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1cc4;
        }
    }
    ctx->pc = 0x3F1D10u;
label_3f1d10:
    // 0x3f1d10: 0x1000000f  b           . + 4 + (0xF << 2)
label_3f1d14:
    if (ctx->pc == 0x3F1D14u) {
        ctx->pc = 0x3F1D18u;
        goto label_3f1d18;
    }
    ctx->pc = 0x3F1D10u;
    {
        const bool branch_taken_0x3f1d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1d10) {
            ctx->pc = 0x3F1D50u;
            goto label_3f1d50;
        }
    }
    ctx->pc = 0x3F1D18u;
label_3f1d18:
    // 0x3f1d18: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x3f1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3f1d1c:
    // 0x3f1d1c: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3f1d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f1d20:
    // 0x3f1d20: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x3f1d20u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_3f1d24:
    // 0x3f1d24: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x3f1d24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_3f1d28:
    // 0x3f1d28: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x3f1d28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_3f1d2c:
    // 0x3f1d2c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x3f1d2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_3f1d30:
    // 0x3f1d30: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x3f1d30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_3f1d34:
    // 0x3f1d34: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x3f1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_3f1d38:
    // 0x3f1d38: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x3f1d38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_3f1d3c:
    // 0x3f1d3c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x3f1d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_3f1d40:
    // 0x3f1d40: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x3f1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_3f1d44:
    // 0x3f1d44: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3f1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3f1d48:
    // 0x3f1d48: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_3f1d4c:
    if (ctx->pc == 0x3F1D4Cu) {
        ctx->pc = 0x3F1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D48u;
        // 0x3f1d4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1D50u;
        goto label_3f1d50;
    }
    ctx->pc = 0x3F1D48u;
    {
        const bool branch_taken_0x3f1d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D48u;
        // 0x3f1d4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d48) {
            ctx->pc = 0x3F1D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1d24;
        }
    }
    ctx->pc = 0x3F1D50u;
label_3f1d50:
    // 0x3f1d50: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x3f1d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3f1d54:
    // 0x3f1d54: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x3f1d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3f1d58:
    // 0x3f1d58: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3f1d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3f1d5c:
    // 0x3f1d5c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3f1d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3f1d60:
    // 0x3f1d60: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3f1d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1d64:
    // 0x3f1d64: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3f1d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1d68:
    // 0x3f1d68: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x3f1d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3f1d6c:
    // 0x3f1d6c: 0x16c00027  bnez        $s6, . + 4 + (0x27 << 2)
label_3f1d70:
    if (ctx->pc == 0x3F1D70u) {
        ctx->pc = 0x3F1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D6Cu;
        // 0x3f1d70: 0xb4850008  sdr         $a1, 0x8($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1D74u;
        goto label_3f1d74;
    }
    ctx->pc = 0x3F1D6Cu;
    {
        const bool branch_taken_0x3f1d6c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D6Cu;
        // 0x3f1d70: 0xb4850008  sdr         $a1, 0x8($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d6c) {
            ctx->pc = 0x3F1E0Cu;
            goto label_3f1e0c;
        }
    }
    ctx->pc = 0x3F1D74u;
label_3f1d74:
    // 0x3f1d74: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3f1d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1d78:
    // 0x3f1d78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f1d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f1d7c:
    // 0x3f1d7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f1d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1d80:
    // 0x3f1d80: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3f1d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3f1d84:
    // 0x3f1d84: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3f1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3f1d88:
    // 0x3f1d88: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3f1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3f1d8c:
    // 0x3f1d8c: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x3f1d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3f1d90:
    // 0x3f1d90: 0x7a440020  lq          $a0, 0x20($s2)
    ctx->pc = 0x3f1d90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f1d94:
    // 0x3f1d94: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3f1d94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f1d98:
    // 0x3f1d98: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3f1d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3f1d9c:
    // 0x3f1d9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f1d9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f1da0:
    // 0x3f1da0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f1da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f1da4:
    // 0x3f1da4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f1da4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f1da8:
    // 0x3f1da8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f1da8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f1dac:
    // 0x3f1dac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f1dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f1db0:
    // 0x3f1db0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f1db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f1db4:
    // 0x3f1db4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f1db4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f1db8:
    // 0x3f1db8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f1db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f1dbc:
    // 0x3f1dbc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f1dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f1dc0:
    // 0x3f1dc0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f1dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f1dc4:
    // 0x3f1dc4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f1dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f1dc8:
    // 0x3f1dc8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f1dc8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f1dcc:
    // 0x3f1dcc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f1dccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f1dd0:
    // 0x3f1dd0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f1dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f1dd4:
    // 0x3f1dd4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f1dd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f1dd8:
    // 0x3f1dd8: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x3f1dd8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f1ddc:
    // 0x3f1ddc: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3f1ddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f1de0:
    // 0x3f1de0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f1de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f1de4:
    // 0x3f1de4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3f1de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3f1de8:
    // 0x3f1de8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f1de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f1dec:
    // 0x3f1dec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f1decu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f1df0:
    // 0x3f1df0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3f1df0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f1df4:
    // 0x3f1df4: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x3f1df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
label_3f1df8:
    // 0x3f1df8: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3f1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3f1dfc:
    // 0x3f1dfc: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x3f1dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
label_3f1e00:
    // 0x3f1e00: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x3f1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_3f1e04:
    // 0x3f1e04: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x3f1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_3f1e08:
    // 0x3f1e08: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x3f1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_3f1e0c:
    // 0x3f1e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f1e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e10:
    // 0x3f1e10: 0xc0ea176  jal         func_3A85D8
label_3f1e14:
    if (ctx->pc == 0x3F1E14u) {
        ctx->pc = 0x3F1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E10u;
        // 0x3f1e14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1E18u;
        goto label_3f1e18;
    }
    ctx->pc = 0x3F1E10u;
    SET_GPR_U32(ctx, 31, 0x3F1E18u);
    ctx->pc = 0x3F1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1E10u;
    // 0x3f1e14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3F1E10u, 0x3F1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E18u;
label_3f1e18:
    // 0x3f1e18: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3f1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3f1e1c:
    // 0x3f1e1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f1e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e20:
    // 0x3f1e20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f1e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f1e24:
    // 0x3f1e24: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f1e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f1e28:
    // 0x3f1e28: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f1e2c:
    // 0x3f1e2c: 0x40f809  jalr        $v0
label_3f1e30:
    if (ctx->pc == 0x3F1E30u) {
        ctx->pc = 0x3F1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E2Cu;
        // 0x3f1e30: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1E34u;
        goto label_3f1e34;
    }
    ctx->pc = 0x3F1E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1E34u);
        ctx->pc = 0x3F1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E2Cu;
        // 0x3f1e30: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1E2Cu, 0x3F1E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1E34u;
label_3f1e34:
    // 0x3f1e34: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x3f1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1e38:
    // 0x3f1e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f1e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e3c:
    // 0x3f1e3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f1e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f1e40:
    // 0x3f1e40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f1e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1e44:
    // 0x3f1e44: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3f1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3f1e48:
    // 0x3f1e48: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3f1e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3f1e4c:
    // 0x3f1e4c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x3f1e4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_3f1e50:
    // 0x3f1e50: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3f1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3f1e54:
    // 0x3f1e54: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x3f1e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3f1e58:
    // 0x3f1e58: 0xc0ea164  jal         func_3A8590
label_3f1e5c:
    if (ctx->pc == 0x3F1E5Cu) {
        ctx->pc = 0x3F1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E58u;
        // 0x3f1e5c: 0x93b00094  lbu         $s0, 0x94($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1E60u;
        goto label_3f1e60;
    }
    ctx->pc = 0x3F1E58u;
    SET_GPR_U32(ctx, 31, 0x3F1E60u);
    ctx->pc = 0x3F1E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1E58u;
    // 0x3f1e5c: 0x93b00094  lbu         $s0, 0x94($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3F1E58u, 0x3F1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E60u;
label_3f1e60:
    // 0x3f1e60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f1e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e64:
    // 0x3f1e64: 0xc0ea158  jal         func_3A8560
label_3f1e68:
    if (ctx->pc == 0x3F1E68u) {
        ctx->pc = 0x3F1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E64u;
        // 0x3f1e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1E6Cu;
        goto label_3f1e6c;
    }
    ctx->pc = 0x3F1E64u;
    SET_GPR_U32(ctx, 31, 0x3F1E6Cu);
    ctx->pc = 0x3F1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1E64u;
    // 0x3f1e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3F1E64u, 0x3F1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E6Cu;
label_3f1e6c:
    // 0x3f1e6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f1e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e70:
    // 0x3f1e70: 0xc0ea16a  jal         func_3A85A8
label_3f1e74:
    if (ctx->pc == 0x3F1E74u) {
        ctx->pc = 0x3F1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E70u;
        // 0x3f1e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1E78u;
        goto label_3f1e78;
    }
    ctx->pc = 0x3F1E70u;
    SET_GPR_U32(ctx, 31, 0x3F1E78u);
    ctx->pc = 0x3F1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1E70u;
    // 0x3f1e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F1E70u, 0x3F1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E78u;
label_3f1e78:
    // 0x3f1e78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3f1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3f1e7c:
    // 0x3f1e7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f1e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e80:
    // 0x3f1e80: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3f1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3f1e84:
    // 0x3f1e84: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f1e84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f1e88:
    // 0x3f1e88: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f1e8c:
    // 0x3f1e8c: 0x40f809  jalr        $v0
label_3f1e90:
    if (ctx->pc == 0x3F1E90u) {
        ctx->pc = 0x3F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E8Cu;
        // 0x3f1e90: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1E94u;
        goto label_3f1e94;
    }
    ctx->pc = 0x3F1E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1E94u);
        ctx->pc = 0x3F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E8Cu;
        // 0x3f1e90: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1E8Cu, 0x3F1E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1E94u;
label_3f1e94:
    // 0x3f1e94: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x3f1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_3f1e98:
    // 0x3f1e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f1e9c:
    // 0x3f1e9c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3f1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f1ea0:
    // 0x3f1ea0: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x3f1ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_3f1ea4:
    // 0x3f1ea4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3f1ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_3f1ea8:
    // 0x3f1ea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f1ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1eac:
    // 0x3f1eac: 0xc0e8cda  jal         func_3A3368
label_3f1eb0:
    if (ctx->pc == 0x3F1EB0u) {
        ctx->pc = 0x3F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1EACu;
        // 0x3f1eb0: 0xaea3001c  sw          $v1, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1EB4u;
        goto label_3f1eb4;
    }
    ctx->pc = 0x3F1EACu;
    SET_GPR_U32(ctx, 31, 0x3F1EB4u);
    ctx->pc = 0x3F1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1EACu;
    // 0x3f1eb0: 0xaea3001c  sw          $v1, 0x1C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3F1EACu, 0x3F1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1EB4u;
label_3f1eb4:
    // 0x3f1eb4: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x3f1eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_3f1eb8:
    // 0x3f1eb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f1eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1ebc:
    // 0x3f1ebc: 0xc0e8cbc  jal         func_3A32F0
label_3f1ec0:
    if (ctx->pc == 0x3F1EC0u) {
        ctx->pc = 0x3F1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1EBCu;
        // 0x3f1ec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1EC4u;
        goto label_3f1ec4;
    }
    ctx->pc = 0x3F1EBCu;
    SET_GPR_U32(ctx, 31, 0x3F1EC4u);
    ctx->pc = 0x3F1EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1EBCu;
    // 0x3f1ec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3F1EBCu, 0x3F1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1EC4u;
label_3f1ec4:
    // 0x3f1ec4: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x3f1ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3f1ec8:
    // 0x3f1ec8: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x3f1ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3f1ecc:
    // 0x3f1ecc: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x3f1eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3f1ed0:
    // 0x3f1ed0: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x3f1ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3f1ed4:
    // 0x3f1ed4: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x3f1ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3f1ed8:
    // 0x3f1ed8: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x3f1ed8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3f1edc:
    // 0x3f1edc: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x3f1edcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3f1ee0:
    // 0x3f1ee0: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x3f1ee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3f1ee4:
    // 0x3f1ee4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x3f1ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_3f1ee8:
    // 0x3f1ee8: 0x3e00008  jr          $ra
label_3f1eec:
    if (ctx->pc == 0x3F1EECu) {
        ctx->pc = 0x3F1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1EE8u;
        // 0x3f1eec: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1EF0u;
        goto label_fallthrough_0x3f1ee8;
    }
    ctx->pc = 0x3F1EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1EE8u;
        // 0x3f1eec: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1ee8:
    ctx->pc = 0x3F1EF0u;
}
