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

// Function: sub_003E1C28
// Address: 0x3e1c28 - 0x3e1ee0
void sub_003E1C28_0x3e1c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1C28_0x3e1c28");
#endif

    switch (ctx->pc) {
        case 0x3e1c28u: goto label_3e1c28;
        case 0x3e1c2cu: goto label_3e1c2c;
        case 0x3e1c30u: goto label_3e1c30;
        case 0x3e1c34u: goto label_3e1c34;
        case 0x3e1c38u: goto label_3e1c38;
        case 0x3e1c3cu: goto label_3e1c3c;
        case 0x3e1c40u: goto label_3e1c40;
        case 0x3e1c44u: goto label_3e1c44;
        case 0x3e1c48u: goto label_3e1c48;
        case 0x3e1c4cu: goto label_3e1c4c;
        case 0x3e1c50u: goto label_3e1c50;
        case 0x3e1c54u: goto label_3e1c54;
        case 0x3e1c58u: goto label_3e1c58;
        case 0x3e1c5cu: goto label_3e1c5c;
        case 0x3e1c60u: goto label_3e1c60;
        case 0x3e1c64u: goto label_3e1c64;
        case 0x3e1c68u: goto label_3e1c68;
        case 0x3e1c6cu: goto label_3e1c6c;
        case 0x3e1c70u: goto label_3e1c70;
        case 0x3e1c74u: goto label_3e1c74;
        case 0x3e1c78u: goto label_3e1c78;
        case 0x3e1c7cu: goto label_3e1c7c;
        case 0x3e1c80u: goto label_3e1c80;
        case 0x3e1c84u: goto label_3e1c84;
        case 0x3e1c88u: goto label_3e1c88;
        case 0x3e1c8cu: goto label_3e1c8c;
        case 0x3e1c90u: goto label_3e1c90;
        case 0x3e1c94u: goto label_3e1c94;
        case 0x3e1c98u: goto label_3e1c98;
        case 0x3e1c9cu: goto label_3e1c9c;
        case 0x3e1ca0u: goto label_3e1ca0;
        case 0x3e1ca4u: goto label_3e1ca4;
        case 0x3e1ca8u: goto label_3e1ca8;
        case 0x3e1cacu: goto label_3e1cac;
        case 0x3e1cb0u: goto label_3e1cb0;
        case 0x3e1cb4u: goto label_3e1cb4;
        case 0x3e1cb8u: goto label_3e1cb8;
        case 0x3e1cbcu: goto label_3e1cbc;
        case 0x3e1cc0u: goto label_3e1cc0;
        case 0x3e1cc4u: goto label_3e1cc4;
        case 0x3e1cc8u: goto label_3e1cc8;
        case 0x3e1cccu: goto label_3e1ccc;
        case 0x3e1cd0u: goto label_3e1cd0;
        case 0x3e1cd4u: goto label_3e1cd4;
        case 0x3e1cd8u: goto label_3e1cd8;
        case 0x3e1cdcu: goto label_3e1cdc;
        case 0x3e1ce0u: goto label_3e1ce0;
        case 0x3e1ce4u: goto label_3e1ce4;
        case 0x3e1ce8u: goto label_3e1ce8;
        case 0x3e1cecu: goto label_3e1cec;
        case 0x3e1cf0u: goto label_3e1cf0;
        case 0x3e1cf4u: goto label_3e1cf4;
        case 0x3e1cf8u: goto label_3e1cf8;
        case 0x3e1cfcu: goto label_3e1cfc;
        case 0x3e1d00u: goto label_3e1d00;
        case 0x3e1d04u: goto label_3e1d04;
        case 0x3e1d08u: goto label_3e1d08;
        case 0x3e1d0cu: goto label_3e1d0c;
        case 0x3e1d10u: goto label_3e1d10;
        case 0x3e1d14u: goto label_3e1d14;
        case 0x3e1d18u: goto label_3e1d18;
        case 0x3e1d1cu: goto label_3e1d1c;
        case 0x3e1d20u: goto label_3e1d20;
        case 0x3e1d24u: goto label_3e1d24;
        case 0x3e1d28u: goto label_3e1d28;
        case 0x3e1d2cu: goto label_3e1d2c;
        case 0x3e1d30u: goto label_3e1d30;
        case 0x3e1d34u: goto label_3e1d34;
        case 0x3e1d38u: goto label_3e1d38;
        case 0x3e1d3cu: goto label_3e1d3c;
        case 0x3e1d40u: goto label_3e1d40;
        case 0x3e1d44u: goto label_3e1d44;
        case 0x3e1d48u: goto label_3e1d48;
        case 0x3e1d4cu: goto label_3e1d4c;
        case 0x3e1d50u: goto label_3e1d50;
        case 0x3e1d54u: goto label_3e1d54;
        case 0x3e1d58u: goto label_3e1d58;
        case 0x3e1d5cu: goto label_3e1d5c;
        case 0x3e1d60u: goto label_3e1d60;
        case 0x3e1d64u: goto label_3e1d64;
        case 0x3e1d68u: goto label_3e1d68;
        case 0x3e1d6cu: goto label_3e1d6c;
        case 0x3e1d70u: goto label_3e1d70;
        case 0x3e1d74u: goto label_3e1d74;
        case 0x3e1d78u: goto label_3e1d78;
        case 0x3e1d7cu: goto label_3e1d7c;
        case 0x3e1d80u: goto label_3e1d80;
        case 0x3e1d84u: goto label_3e1d84;
        case 0x3e1d88u: goto label_3e1d88;
        case 0x3e1d8cu: goto label_3e1d8c;
        case 0x3e1d90u: goto label_3e1d90;
        case 0x3e1d94u: goto label_3e1d94;
        case 0x3e1d98u: goto label_3e1d98;
        case 0x3e1d9cu: goto label_3e1d9c;
        case 0x3e1da0u: goto label_3e1da0;
        case 0x3e1da4u: goto label_3e1da4;
        case 0x3e1da8u: goto label_3e1da8;
        case 0x3e1dacu: goto label_3e1dac;
        case 0x3e1db0u: goto label_3e1db0;
        case 0x3e1db4u: goto label_3e1db4;
        case 0x3e1db8u: goto label_3e1db8;
        case 0x3e1dbcu: goto label_3e1dbc;
        case 0x3e1dc0u: goto label_3e1dc0;
        case 0x3e1dc4u: goto label_3e1dc4;
        case 0x3e1dc8u: goto label_3e1dc8;
        case 0x3e1dccu: goto label_3e1dcc;
        case 0x3e1dd0u: goto label_3e1dd0;
        case 0x3e1dd4u: goto label_3e1dd4;
        case 0x3e1dd8u: goto label_3e1dd8;
        case 0x3e1ddcu: goto label_3e1ddc;
        case 0x3e1de0u: goto label_3e1de0;
        case 0x3e1de4u: goto label_3e1de4;
        case 0x3e1de8u: goto label_3e1de8;
        case 0x3e1decu: goto label_3e1dec;
        case 0x3e1df0u: goto label_3e1df0;
        case 0x3e1df4u: goto label_3e1df4;
        case 0x3e1df8u: goto label_3e1df8;
        case 0x3e1dfcu: goto label_3e1dfc;
        case 0x3e1e00u: goto label_3e1e00;
        case 0x3e1e04u: goto label_3e1e04;
        case 0x3e1e08u: goto label_3e1e08;
        case 0x3e1e0cu: goto label_3e1e0c;
        case 0x3e1e10u: goto label_3e1e10;
        case 0x3e1e14u: goto label_3e1e14;
        case 0x3e1e18u: goto label_3e1e18;
        case 0x3e1e1cu: goto label_3e1e1c;
        case 0x3e1e20u: goto label_3e1e20;
        case 0x3e1e24u: goto label_3e1e24;
        case 0x3e1e28u: goto label_3e1e28;
        case 0x3e1e2cu: goto label_3e1e2c;
        case 0x3e1e30u: goto label_3e1e30;
        case 0x3e1e34u: goto label_3e1e34;
        case 0x3e1e38u: goto label_3e1e38;
        case 0x3e1e3cu: goto label_3e1e3c;
        case 0x3e1e40u: goto label_3e1e40;
        case 0x3e1e44u: goto label_3e1e44;
        case 0x3e1e48u: goto label_3e1e48;
        case 0x3e1e4cu: goto label_3e1e4c;
        case 0x3e1e50u: goto label_3e1e50;
        case 0x3e1e54u: goto label_3e1e54;
        case 0x3e1e58u: goto label_3e1e58;
        case 0x3e1e5cu: goto label_3e1e5c;
        case 0x3e1e60u: goto label_3e1e60;
        case 0x3e1e64u: goto label_3e1e64;
        case 0x3e1e68u: goto label_3e1e68;
        case 0x3e1e6cu: goto label_3e1e6c;
        case 0x3e1e70u: goto label_3e1e70;
        case 0x3e1e74u: goto label_3e1e74;
        case 0x3e1e78u: goto label_3e1e78;
        case 0x3e1e7cu: goto label_3e1e7c;
        case 0x3e1e80u: goto label_3e1e80;
        case 0x3e1e84u: goto label_3e1e84;
        case 0x3e1e88u: goto label_3e1e88;
        case 0x3e1e8cu: goto label_3e1e8c;
        case 0x3e1e90u: goto label_3e1e90;
        case 0x3e1e94u: goto label_3e1e94;
        case 0x3e1e98u: goto label_3e1e98;
        case 0x3e1e9cu: goto label_3e1e9c;
        case 0x3e1ea0u: goto label_3e1ea0;
        case 0x3e1ea4u: goto label_3e1ea4;
        case 0x3e1ea8u: goto label_3e1ea8;
        case 0x3e1eacu: goto label_3e1eac;
        case 0x3e1eb0u: goto label_3e1eb0;
        case 0x3e1eb4u: goto label_3e1eb4;
        case 0x3e1eb8u: goto label_3e1eb8;
        case 0x3e1ebcu: goto label_3e1ebc;
        case 0x3e1ec0u: goto label_3e1ec0;
        case 0x3e1ec4u: goto label_3e1ec4;
        case 0x3e1ec8u: goto label_3e1ec8;
        case 0x3e1eccu: goto label_3e1ecc;
        case 0x3e1ed0u: goto label_3e1ed0;
        case 0x3e1ed4u: goto label_3e1ed4;
        case 0x3e1ed8u: goto label_3e1ed8;
        case 0x3e1edcu: goto label_3e1edc;
        default: break;
    }

    ctx->pc = 0x3e1c28u;

label_3e1c28:
    // 0x3e1c28: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x3e1c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
label_3e1c2c:
    // 0x3e1c2c: 0x7fb004e0  sq          $s0, 0x4E0($sp)
    ctx->pc = 0x3e1c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 16));
label_3e1c30:
    // 0x3e1c30: 0x7fb104d0  sq          $s1, 0x4D0($sp)
    ctx->pc = 0x3e1c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 17));
label_3e1c34:
    // 0x3e1c34: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x3e1c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_3e1c38:
    // 0x3e1c38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c3c:
    // 0x3e1c3c: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x3e1c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
label_3e1c40:
    // 0x3e1c40: 0xe7b404f0  swc1        $f20, 0x4F0($sp)
    ctx->pc = 0x3e1c40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
label_3e1c44:
    // 0x3e1c44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e1c48:
    // 0x3e1c48: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e1c4c:
    // 0x3e1c4c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1c50:
    // 0x3e1c50: 0x40f809  jalr        $v0
label_3e1c54:
    if (ctx->pc == 0x3E1C54u) {
        ctx->pc = 0x3E1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C50u;
        // 0x3e1c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C58u;
        goto label_3e1c58;
    }
    ctx->pc = 0x3E1C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1C58u);
        ctx->pc = 0x3E1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C50u;
        // 0x3e1c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1C50u, 0x3E1C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1C58u;
label_3e1c58:
    // 0x3e1c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e1c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c5c:
    // 0x3e1c5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e1c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c60:
    // 0x3e1c60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e1c64:
    // 0x3e1c64: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e1c68:
    // 0x3e1c68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e1c6c:
    // 0x3e1c6c: 0x0  nop
    ctx->pc = 0x3e1c6cu;
    // NOP
label_3e1c70:
    // 0x3e1c70: 0x0  nop
    ctx->pc = 0x3e1c70u;
    // NOP
label_3e1c74:
    // 0x3e1c74: 0x0  nop
    ctx->pc = 0x3e1c74u;
    // NOP
label_3e1c78:
    // 0x3e1c78: 0x0  nop
    ctx->pc = 0x3e1c78u;
    // NOP
label_3e1c7c:
    // 0x3e1c7c: 0x0  nop
    ctx->pc = 0x3e1c7cu;
    // NOP
label_3e1c80:
    // 0x3e1c80: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e1c84:
    if (ctx->pc == 0x3E1C84u) {
        ctx->pc = 0x3E1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C80u;
        // 0x3e1c84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C88u;
        goto label_3e1c88;
    }
    ctx->pc = 0x3E1C80u;
    {
        const bool branch_taken_0x3e1c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C80u;
        // 0x3e1c84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1c80) {
            ctx->pc = 0x3E1C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1c70;
        }
    }
    ctx->pc = 0x3E1C88u;
label_3e1c88:
    // 0x3e1c88: 0xc138ddc  jal         func_4E3770
label_3e1c8c:
    if (ctx->pc == 0x3E1C8Cu) {
        ctx->pc = 0x3E1C90u;
        goto label_3e1c90;
    }
    ctx->pc = 0x3E1C88u;
    SET_GPR_U32(ctx, 31, 0x3E1C90u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E1C88u, 0x3E1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C90u;
label_3e1c90:
    // 0x3e1c90: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3e1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3e1c94:
    // 0x3e1c94: 0x5060008a  beql        $v1, $zero, . + 4 + (0x8A << 2)
label_3e1c98:
    if (ctx->pc == 0x3E1C98u) {
        ctx->pc = 0x3E1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C94u;
        // 0x3e1c98: 0x7bb004e0  lq          $s0, 0x4E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C9Cu;
        goto label_3e1c9c;
    }
    ctx->pc = 0x3E1C94u;
    {
        const bool branch_taken_0x3e1c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1c94) {
            ctx->pc = 0x3E1C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1C94u;
            // 0x3e1c98: 0x7bb004e0  lq          $s0, 0x4E0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1EC0u;
            goto label_3e1ec0;
        }
    }
    ctx->pc = 0x3E1C9Cu;
label_3e1c9c:
    // 0x3e1c9c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3e1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3e1ca0:
    // 0x3e1ca0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_3e1ca4:
    if (ctx->pc == 0x3E1CA4u) {
        ctx->pc = 0x3E1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CA0u;
        // 0x3e1ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CA8u;
        goto label_3e1ca8;
    }
    ctx->pc = 0x3E1CA0u;
    {
        const bool branch_taken_0x3e1ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CA0u;
        // 0x3e1ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ca0) {
            ctx->pc = 0x3E1CF8u;
            goto label_3e1cf8;
        }
    }
    ctx->pc = 0x3E1CA8u;
label_3e1ca8:
    // 0x3e1ca8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3e1ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1cac:
    // 0x3e1cac: 0x14720009  bne         $v1, $s2, . + 4 + (0x9 << 2)
label_3e1cb0:
    if (ctx->pc == 0x3E1CB0u) {
        ctx->pc = 0x3E1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CACu;
        // 0x3e1cb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CB4u;
        goto label_3e1cb4;
    }
    ctx->pc = 0x3E1CACu;
    {
        const bool branch_taken_0x3e1cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x3E1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CACu;
        // 0x3e1cb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cac) {
            ctx->pc = 0x3E1CD4u;
            goto label_3e1cd4;
        }
    }
    ctx->pc = 0x3E1CB4u;
label_3e1cb4:
    // 0x3e1cb4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3e1cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3e1cb8:
    // 0x3e1cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1cbc:
    // 0x3e1cbc: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3e1cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3e1cc0:
    // 0x3e1cc0: 0xc0e858c  jal         func_3A1630
label_3e1cc4:
    if (ctx->pc == 0x3E1CC4u) {
        ctx->pc = 0x3E1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CC0u;
        // 0x3e1cc4: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CC8u;
        goto label_3e1cc8;
    }
    ctx->pc = 0x3E1CC0u;
    SET_GPR_U32(ctx, 31, 0x3E1CC8u);
    ctx->pc = 0x3E1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1CC0u;
    // 0x3e1cc4: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E1CC0u, 0x3E1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1CC8u;
label_3e1cc8:
    // 0x3e1cc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1ccc:
    // 0x3e1ccc: 0x1000007b  b           . + 4 + (0x7B << 2)
label_3e1cd0:
    if (ctx->pc == 0x3E1CD0u) {
        ctx->pc = 0x3E1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CCCu;
        // 0x3e1cd0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CD4u;
        goto label_3e1cd4;
    }
    ctx->pc = 0x3E1CCCu;
    {
        const bool branch_taken_0x3e1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CCCu;
        // 0x3e1cd0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ccc) {
            ctx->pc = 0x3E1EBCu;
            goto label_3e1ebc;
        }
    }
    ctx->pc = 0x3E1CD4u;
label_3e1cd4:
    // 0x3e1cd4: 0x5462007a  bnel        $v1, $v0, . + 4 + (0x7A << 2)
label_3e1cd8:
    if (ctx->pc == 0x3E1CD8u) {
        ctx->pc = 0x3E1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CD4u;
        // 0x3e1cd8: 0x7bb004e0  lq          $s0, 0x4E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CDCu;
        goto label_3e1cdc;
    }
    ctx->pc = 0x3E1CD4u;
    {
        const bool branch_taken_0x3e1cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1cd4) {
            ctx->pc = 0x3E1CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1CD4u;
            // 0x3e1cd8: 0x7bb004e0  lq          $s0, 0x4E0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1EC0u;
            goto label_3e1ec0;
        }
    }
    ctx->pc = 0x3E1CDCu;
label_3e1cdc:
    // 0x3e1cdc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e1cdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e1ce0:
    // 0x3e1ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1ce4:
    // 0x3e1ce4: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3e1ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3e1ce8:
    // 0x3e1ce8: 0xc0e858c  jal         func_3A1630
label_3e1cec:
    if (ctx->pc == 0x3E1CECu) {
        ctx->pc = 0x3E1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CE8u;
        // 0x3e1cec: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CF0u;
        goto label_3e1cf0;
    }
    ctx->pc = 0x3E1CE8u;
    SET_GPR_U32(ctx, 31, 0x3E1CF0u);
    ctx->pc = 0x3E1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1CE8u;
    // 0x3e1cec: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E1CE8u, 0x3E1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1CF0u;
label_3e1cf0:
    // 0x3e1cf0: 0x10000072  b           . + 4 + (0x72 << 2)
label_3e1cf4:
    if (ctx->pc == 0x3E1CF4u) {
        ctx->pc = 0x3E1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CF0u;
        // 0x3e1cf4: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CF8u;
        goto label_3e1cf8;
    }
    ctx->pc = 0x3E1CF0u;
    {
        const bool branch_taken_0x3e1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CF0u;
        // 0x3e1cf4: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cf0) {
            ctx->pc = 0x3E1EBCu;
            goto label_3e1ebc;
        }
    }
    ctx->pc = 0x3E1CF8u;
label_3e1cf8:
    // 0x3e1cf8: 0xc0e858c  jal         func_3A1630
label_3e1cfc:
    if (ctx->pc == 0x3E1CFCu) {
        ctx->pc = 0x3E1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CF8u;
        // 0x3e1cfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D00u;
        goto label_3e1d00;
    }
    ctx->pc = 0x3E1CF8u;
    SET_GPR_U32(ctx, 31, 0x3E1D00u);
    ctx->pc = 0x3E1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1CF8u;
    // 0x3e1cfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E1CF8u, 0x3E1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1D00u;
label_3e1d00:
    // 0x3e1d00: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3e1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3e1d04:
    // 0x3e1d04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1d08:
    // 0x3e1d08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3e1d0c:
    if (ctx->pc == 0x3E1D0Cu) {
        ctx->pc = 0x3E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D08u;
        // 0x3e1d0c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D10u;
        goto label_3e1d10;
    }
    ctx->pc = 0x3E1D08u;
    {
        const bool branch_taken_0x3e1d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D08u;
        // 0x3e1d0c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d08) {
            ctx->pc = 0x3E1D18u;
            goto label_3e1d18;
        }
    }
    ctx->pc = 0x3E1D10u;
label_3e1d10:
    // 0x3e1d10: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e1d14:
    if (ctx->pc == 0x3E1D14u) {
        ctx->pc = 0x3E1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D10u;
        // 0x3e1d14: 0x24420005  addiu       $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D18u;
        goto label_3e1d18;
    }
    ctx->pc = 0x3E1D10u;
    {
        const bool branch_taken_0x3e1d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D10u;
        // 0x3e1d14: 0x24420005  addiu       $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d10) {
            ctx->pc = 0x3E1D1Cu;
            goto label_3e1d1c;
        }
    }
    ctx->pc = 0x3E1D18u;
label_3e1d18:
    // 0x3e1d18: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x3e1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_3e1d1c:
    // 0x3e1d1c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3e1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_3e1d20:
    // 0x3e1d20: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3e1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3e1d24:
    // 0x3e1d24: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3e1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3e1d28:
    // 0x3e1d28: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e1d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e1d2c:
    // 0x3e1d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e1d30:
    if (ctx->pc == 0x3E1D30u) {
        ctx->pc = 0x3E1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D2Cu;
        // 0x3e1d30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D34u;
        goto label_3e1d34;
    }
    ctx->pc = 0x3E1D2Cu;
    {
        const bool branch_taken_0x3e1d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D2Cu;
        // 0x3e1d30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d2c) {
            ctx->pc = 0x3E1D3Cu;
            goto label_3e1d3c;
        }
    }
    ctx->pc = 0x3E1D34u;
label_3e1d34:
    // 0x3e1d34: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3e1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3e1d38:
    // 0x3e1d38: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3e1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_3e1d3c:
    // 0x3e1d3c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3e1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3e1d40:
    // 0x3e1d40: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_3e1d44:
    if (ctx->pc == 0x3E1D44u) {
        ctx->pc = 0x3E1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D40u;
        // 0x3e1d44: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D48u;
        goto label_3e1d48;
    }
    ctx->pc = 0x3E1D40u;
    {
        const bool branch_taken_0x3e1d40 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3e1d40) {
            ctx->pc = 0x3E1D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1D40u;
            // 0x3e1d44: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1D5Cu;
            goto label_3e1d5c;
        }
    }
    ctx->pc = 0x3E1D48u;
label_3e1d48:
    // 0x3e1d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1d4c:
    // 0x3e1d4c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3e1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3e1d50:
    // 0x3e1d50: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3e1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_3e1d54:
    // 0x3e1d54: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3e1d58:
    // 0x3e1d58: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3e1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3e1d5c:
    // 0x3e1d5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3e1d60:
    // 0x3e1d60: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_3e1d64:
    if (ctx->pc == 0x3E1D64u) {
        ctx->pc = 0x3E1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D60u;
        // 0x3e1d64: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D68u;
        goto label_3e1d68;
    }
    ctx->pc = 0x3E1D60u;
    {
        const bool branch_taken_0x3e1d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e1d60) {
            ctx->pc = 0x3E1D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1D60u;
            // 0x3e1d64: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1DA4u;
            goto label_3e1da4;
        }
    }
    ctx->pc = 0x3E1D68u;
label_3e1d68:
    // 0x3e1d68: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3e1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3e1d6c:
    // 0x3e1d6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1d70:
    // 0x3e1d70: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_3e1d74:
    if (ctx->pc == 0x3E1D74u) {
        ctx->pc = 0x3E1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D70u;
        // 0x3e1d74: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D78u;
        goto label_3e1d78;
    }
    ctx->pc = 0x3E1D70u;
    {
        const bool branch_taken_0x3e1d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1d70) {
            ctx->pc = 0x3E1D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1D70u;
            // 0x3e1d74: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1DA8u;
            goto label_3e1da8;
        }
    }
    ctx->pc = 0x3E1D78u;
label_3e1d78:
    // 0x3e1d78: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3e1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3e1d7c:
    // 0x3e1d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1d80:
    // 0x3e1d80: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3e1d84:
    if (ctx->pc == 0x3E1D84u) {
        ctx->pc = 0x3E1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D80u;
        // 0x3e1d84: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D88u;
        goto label_3e1d88;
    }
    ctx->pc = 0x3E1D80u;
    {
        const bool branch_taken_0x3e1d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1d80) {
            ctx->pc = 0x3E1D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1D80u;
            // 0x3e1d84: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1DA4u;
            goto label_3e1da4;
        }
    }
    ctx->pc = 0x3E1D88u;
label_3e1d88:
    // 0x3e1d88: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3e1d88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3e1d8c:
    // 0x3e1d8c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x3e1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_3e1d90:
    // 0x3e1d90: 0x3484a583  ori         $a0, $a0, 0xA583
    ctx->pc = 0x3e1d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42371);
label_3e1d94:
    // 0x3e1d94: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e1d98:
    // 0x3e1d98: 0xc045c8e  jal         func_117238
label_3e1d9c:
    if (ctx->pc == 0x3E1D9Cu) {
        ctx->pc = 0x3E1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D98u;
        // 0x3e1d9c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1DA0u;
        goto label_3e1da0;
    }
    ctx->pc = 0x3E1D98u;
    SET_GPR_U32(ctx, 31, 0x3E1DA0u);
    ctx->pc = 0x3E1D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1D98u;
    // 0x3e1d9c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3E1D98u, 0x3E1DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1DA0u;
label_3e1da0:
    // 0x3e1da0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3e1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3e1da4:
    // 0x3e1da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1da8:
    // 0x3e1da8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_3e1dac:
    if (ctx->pc == 0x3E1DACu) {
        ctx->pc = 0x3E1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DA8u;
        // 0x3e1dac: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1DB0u;
        goto label_3e1db0;
    }
    ctx->pc = 0x3E1DA8u;
    {
        const bool branch_taken_0x3e1da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DA8u;
        // 0x3e1dac: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1da8) {
            ctx->pc = 0x3E1DECu;
            goto label_3e1dec;
        }
    }
    ctx->pc = 0x3E1DB0u;
label_3e1db0:
    // 0x3e1db0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3e1db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3e1db4:
    // 0x3e1db4: 0x24843130  addiu       $a0, $a0, 0x3130
    ctx->pc = 0x3e1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12592));
label_3e1db8:
    // 0x3e1db8: 0xc0f3222  jal         func_3CC888
label_3e1dbc:
    if (ctx->pc == 0x3E1DBCu) {
        ctx->pc = 0x3E1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DB8u;
        // 0x3e1dbc: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1DC0u;
        goto label_3e1dc0;
    }
    ctx->pc = 0x3E1DB8u;
    SET_GPR_U32(ctx, 31, 0x3E1DC0u);
    ctx->pc = 0x3E1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1DB8u;
    // 0x3e1dbc: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3E1DB8u, 0x3E1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1DC0u;
label_3e1dc0:
    // 0x3e1dc0: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x3e1dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1dc4:
    // 0x3e1dc4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3e1dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3e1dc8:
    // 0x3e1dc8: 0x3421ccd0  ori         $at, $at, 0xCCD0
    ctx->pc = 0x3e1dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52432);
label_3e1dcc:
    // 0x3e1dcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e1dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e1dd0:
    // 0x3e1dd0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3e1dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3e1dd4:
    // 0x3e1dd4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e1dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e1dd8:
    // 0x3e1dd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e1dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3e1ddc:
    // 0x3e1ddc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e1ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3e1de0:
    // 0x3e1de0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3e1de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3e1de4:
    // 0x3e1de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e1de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e1de8:
    // 0x3e1de8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3e1de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_3e1dec:
    // 0x3e1dec: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3e1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1df0:
    // 0x3e1df0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3e1df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3e1df4:
    // 0x3e1df4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3e1df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3e1df8:
    // 0x3e1df8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e1df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e1dfc:
    // 0x3e1dfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e1dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e1e00:
    // 0x3e1e00: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x3e1e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e1e04:
    // 0x3e1e04: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3e1e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3e1e08:
    // 0x3e1e08: 0xc6140038  lwc1        $f20, 0x38($s0)
    ctx->pc = 0x3e1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e1e0c:
    // 0x3e1e0c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x3e1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e1e10:
    // 0x3e1e10: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x3e1e10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
label_3e1e14:
    // 0x3e1e14: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3e1e14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3e1e18:
    // 0x3e1e18: 0xc12e29c  jal         func_4B8A70
label_3e1e1c:
    if (ctx->pc == 0x3E1E1Cu) {
        ctx->pc = 0x3E1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E18u;
        // 0x3e1e1c: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E20u;
        goto label_3e1e20;
    }
    ctx->pc = 0x3E1E18u;
    SET_GPR_U32(ctx, 31, 0x3E1E20u);
    ctx->pc = 0x3E1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E18u;
    // 0x3e1e1c: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E1E18u, 0x3E1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E20u;
label_3e1e20:
    // 0x3e1e20: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3e1e20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3e1e24:
    // 0x3e1e24: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x3e1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1e28:
    // 0x3e1e28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e1e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e1e2c:
    // 0x3e1e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e1e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1e30:
    // 0x3e1e30: 0x3c013ac4  lui         $at, 0x3AC4
    ctx->pc = 0x3e1e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15044 << 16));
label_3e1e34:
    // 0x3e1e34: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x3e1e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_3e1e38:
    // 0x3e1e38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e1e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e1e3c:
    // 0x3e1e3c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3e1e3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3e1e40:
    // 0x3e1e40: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e1e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e1e44:
    // 0x3e1e44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3e1e48:
    // 0x3e1e48: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3e1e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3e1e4c:
    // 0x3e1e4c: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x3e1e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
label_3e1e50:
    // 0x3e1e50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e1e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1e54:
    // 0x3e1e54: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x3e1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
label_3e1e58:
    // 0x3e1e58: 0xe7a0044c  swc1        $f0, 0x44C($sp)
    ctx->pc = 0x3e1e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1100), bits); }
label_3e1e5c:
    // 0x3e1e5c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x3e1e5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_3e1e60:
    // 0x3e1e60: 0xafa00448  sw          $zero, 0x448($sp)
    ctx->pc = 0x3e1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 0));
label_3e1e64:
    // 0x3e1e64: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3e1e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3e1e68:
    // 0x3e1e68: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3e1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3e1e6c:
    // 0x3e1e6c: 0xe7b40440  swc1        $f20, 0x440($sp)
    ctx->pc = 0x3e1e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3e1e70:
    // 0x3e1e70: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3e1e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e1e74:
    // 0x3e1e74: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3e1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3e1e78:
    // 0x3e1e78: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3e1e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3e1e7c:
    // 0x3e1e7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e1e7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e1e80:
    // 0x3e1e80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e1e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e1e84:
    // 0x3e1e84: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3e1e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1e88:
    // 0x3e1e88: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e1e88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e1e8c:
    // 0x3e1e8c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e1e8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e1e90:
    // 0x3e1e90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e1e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1e94:
    // 0x3e1e94: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3e1e94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e1e98:
    // 0x3e1e98: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3e1e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1e9c:
    // 0x3e1e9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e1e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1ea0:
    // 0x3e1ea0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3e1ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1ea4:
    // 0x3e1ea4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3e1ea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1ea8:
    // 0x3e1ea8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e1ea8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e1eac:
    // 0x3e1eac: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3e1eacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3e1eb0:
    // 0x3e1eb0: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3e1eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3e1eb4:
    // 0x3e1eb4: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3e1eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3e1eb8:
    // 0x3e1eb8: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e1eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e1ebc:
    // 0x3e1ebc: 0x7bb004e0  lq          $s0, 0x4E0($sp)
    ctx->pc = 0x3e1ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3e1ec0:
    // 0x3e1ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e1ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1ec4:
    // 0x3e1ec4: 0x7bb104d0  lq          $s1, 0x4D0($sp)
    ctx->pc = 0x3e1ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3e1ec8:
    // 0x3e1ec8: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x3e1ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3e1ecc:
    // 0x3e1ecc: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x3e1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_3e1ed0:
    // 0x3e1ed0: 0xc7b404f0  lwc1        $f20, 0x4F0($sp)
    ctx->pc = 0x3e1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e1ed4:
    // 0x3e1ed4: 0x3e00008  jr          $ra
label_3e1ed8:
    if (ctx->pc == 0x3E1ED8u) {
        ctx->pc = 0x3E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1ED4u;
        // 0x3e1ed8: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1EDCu;
        goto label_3e1edc;
    }
    ctx->pc = 0x3E1ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1ED4u;
        // 0x3e1ed8: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1EDCu;
label_3e1edc:
    // 0x3e1edc: 0x0  nop
    ctx->pc = 0x3e1edcu;
    // NOP
    ctx->pc = 0x3e1ee0u;
}
