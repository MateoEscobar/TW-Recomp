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

// Function: sub_00341C10
// Address: 0x341c10 - 0x341e18
void sub_00341C10_0x341c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C10_0x341c10");
#endif

    switch (ctx->pc) {
        case 0x341c10u: goto label_341c10;
        case 0x341c14u: goto label_341c14;
        case 0x341c18u: goto label_341c18;
        case 0x341c1cu: goto label_341c1c;
        case 0x341c20u: goto label_341c20;
        case 0x341c24u: goto label_341c24;
        case 0x341c28u: goto label_341c28;
        case 0x341c2cu: goto label_341c2c;
        case 0x341c30u: goto label_341c30;
        case 0x341c34u: goto label_341c34;
        case 0x341c38u: goto label_341c38;
        case 0x341c3cu: goto label_341c3c;
        case 0x341c40u: goto label_341c40;
        case 0x341c44u: goto label_341c44;
        case 0x341c48u: goto label_341c48;
        case 0x341c4cu: goto label_341c4c;
        case 0x341c50u: goto label_341c50;
        case 0x341c54u: goto label_341c54;
        case 0x341c58u: goto label_341c58;
        case 0x341c5cu: goto label_341c5c;
        case 0x341c60u: goto label_341c60;
        case 0x341c64u: goto label_341c64;
        case 0x341c68u: goto label_341c68;
        case 0x341c6cu: goto label_341c6c;
        case 0x341c70u: goto label_341c70;
        case 0x341c74u: goto label_341c74;
        case 0x341c78u: goto label_341c78;
        case 0x341c7cu: goto label_341c7c;
        case 0x341c80u: goto label_341c80;
        case 0x341c84u: goto label_341c84;
        case 0x341c88u: goto label_341c88;
        case 0x341c8cu: goto label_341c8c;
        case 0x341c90u: goto label_341c90;
        case 0x341c94u: goto label_341c94;
        case 0x341c98u: goto label_341c98;
        case 0x341c9cu: goto label_341c9c;
        case 0x341ca0u: goto label_341ca0;
        case 0x341ca4u: goto label_341ca4;
        case 0x341ca8u: goto label_341ca8;
        case 0x341cacu: goto label_341cac;
        case 0x341cb0u: goto label_341cb0;
        case 0x341cb4u: goto label_341cb4;
        case 0x341cb8u: goto label_341cb8;
        case 0x341cbcu: goto label_341cbc;
        case 0x341cc0u: goto label_341cc0;
        case 0x341cc4u: goto label_341cc4;
        case 0x341cc8u: goto label_341cc8;
        case 0x341cccu: goto label_341ccc;
        case 0x341cd0u: goto label_341cd0;
        case 0x341cd4u: goto label_341cd4;
        case 0x341cd8u: goto label_341cd8;
        case 0x341cdcu: goto label_341cdc;
        case 0x341ce0u: goto label_341ce0;
        case 0x341ce4u: goto label_341ce4;
        case 0x341ce8u: goto label_341ce8;
        case 0x341cecu: goto label_341cec;
        case 0x341cf0u: goto label_341cf0;
        case 0x341cf4u: goto label_341cf4;
        case 0x341cf8u: goto label_341cf8;
        case 0x341cfcu: goto label_341cfc;
        case 0x341d00u: goto label_341d00;
        case 0x341d04u: goto label_341d04;
        case 0x341d08u: goto label_341d08;
        case 0x341d0cu: goto label_341d0c;
        case 0x341d10u: goto label_341d10;
        case 0x341d14u: goto label_341d14;
        case 0x341d18u: goto label_341d18;
        case 0x341d1cu: goto label_341d1c;
        case 0x341d20u: goto label_341d20;
        case 0x341d24u: goto label_341d24;
        case 0x341d28u: goto label_341d28;
        case 0x341d2cu: goto label_341d2c;
        case 0x341d30u: goto label_341d30;
        case 0x341d34u: goto label_341d34;
        case 0x341d38u: goto label_341d38;
        case 0x341d3cu: goto label_341d3c;
        case 0x341d40u: goto label_341d40;
        case 0x341d44u: goto label_341d44;
        case 0x341d48u: goto label_341d48;
        case 0x341d4cu: goto label_341d4c;
        case 0x341d50u: goto label_341d50;
        case 0x341d54u: goto label_341d54;
        case 0x341d58u: goto label_341d58;
        case 0x341d5cu: goto label_341d5c;
        case 0x341d60u: goto label_341d60;
        case 0x341d64u: goto label_341d64;
        case 0x341d68u: goto label_341d68;
        case 0x341d6cu: goto label_341d6c;
        case 0x341d70u: goto label_341d70;
        case 0x341d74u: goto label_341d74;
        case 0x341d78u: goto label_341d78;
        case 0x341d7cu: goto label_341d7c;
        case 0x341d80u: goto label_341d80;
        case 0x341d84u: goto label_341d84;
        case 0x341d88u: goto label_341d88;
        case 0x341d8cu: goto label_341d8c;
        case 0x341d90u: goto label_341d90;
        case 0x341d94u: goto label_341d94;
        case 0x341d98u: goto label_341d98;
        case 0x341d9cu: goto label_341d9c;
        case 0x341da0u: goto label_341da0;
        case 0x341da4u: goto label_341da4;
        case 0x341da8u: goto label_341da8;
        case 0x341dacu: goto label_341dac;
        case 0x341db0u: goto label_341db0;
        case 0x341db4u: goto label_341db4;
        case 0x341db8u: goto label_341db8;
        case 0x341dbcu: goto label_341dbc;
        case 0x341dc0u: goto label_341dc0;
        case 0x341dc4u: goto label_341dc4;
        case 0x341dc8u: goto label_341dc8;
        case 0x341dccu: goto label_341dcc;
        case 0x341dd0u: goto label_341dd0;
        case 0x341dd4u: goto label_341dd4;
        case 0x341dd8u: goto label_341dd8;
        case 0x341ddcu: goto label_341ddc;
        case 0x341de0u: goto label_341de0;
        case 0x341de4u: goto label_341de4;
        case 0x341de8u: goto label_341de8;
        case 0x341decu: goto label_341dec;
        case 0x341df0u: goto label_341df0;
        case 0x341df4u: goto label_341df4;
        case 0x341df8u: goto label_341df8;
        case 0x341dfcu: goto label_341dfc;
        case 0x341e00u: goto label_341e00;
        case 0x341e04u: goto label_341e04;
        case 0x341e08u: goto label_341e08;
        case 0x341e0cu: goto label_341e0c;
        case 0x341e10u: goto label_341e10;
        case 0x341e14u: goto label_341e14;
        default: break;
    }

    ctx->pc = 0x341c10u;

label_341c10:
    // 0x341c10: 0x27bdd8c0  addiu       $sp, $sp, -0x2740
    ctx->pc = 0x341c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294957248));
label_341c14:
    // 0x341c14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x341c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_341c18:
    // 0x341c18: 0x7fb12720  sq          $s1, 0x2720($sp)
    ctx->pc = 0x341c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10016), GPR_VEC(ctx, 17));
label_341c1c:
    // 0x341c1c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x341c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_341c20:
    // 0x341c20: 0x7fb22710  sq          $s2, 0x2710($sp)
    ctx->pc = 0x341c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10000), GPR_VEC(ctx, 18));
label_341c24:
    // 0x341c24: 0x7fb02730  sq          $s0, 0x2730($sp)
    ctx->pc = 0x341c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10032), GPR_VEC(ctx, 16));
label_341c28:
    // 0x341c28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x341c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341c2c:
    // 0x341c2c: 0x7fb32700  sq          $s3, 0x2700($sp)
    ctx->pc = 0x341c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9984), GPR_VEC(ctx, 19));
label_341c30:
    // 0x341c30: 0x7fb426f0  sq          $s4, 0x26F0($sp)
    ctx->pc = 0x341c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9968), GPR_VEC(ctx, 20));
label_341c34:
    // 0x341c34: 0x7fb526e0  sq          $s5, 0x26E0($sp)
    ctx->pc = 0x341c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9952), GPR_VEC(ctx, 21));
label_341c38:
    // 0x341c38: 0xffbf26d0  sd          $ra, 0x26D0($sp)
    ctx->pc = 0x341c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 9936), GPR_U64(ctx, 31));
label_341c3c:
    // 0x341c3c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x341c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_341c40:
    // 0x341c40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x341c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_341c44:
    // 0x341c44: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_341c48:
    if (ctx->pc == 0x341C48u) {
        ctx->pc = 0x341C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C44u;
        // 0x341c48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C4Cu;
        goto label_341c4c;
    }
    ctx->pc = 0x341C44u;
    {
        const bool branch_taken_0x341c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C44u;
        // 0x341c48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c44) {
            ctx->pc = 0x341DF0u;
            goto label_341df0;
        }
    }
    ctx->pc = 0x341C4Cu;
label_341c4c:
    // 0x341c4c: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x341c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_341c50:
    // 0x341c50: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x341c50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
label_341c54:
    // 0x341c54: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x341c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_341c58:
    // 0x341c58: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x341c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_341c5c:
    // 0x341c5c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x341c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_341c60:
    // 0x341c60: 0x60f809  jalr        $v1
label_341c64:
    if (ctx->pc == 0x341C64u) {
        ctx->pc = 0x341C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C60u;
        // 0x341c64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C68u;
        goto label_341c68;
    }
    ctx->pc = 0x341C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341C68u);
        ctx->pc = 0x341C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C60u;
        // 0x341c64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C60u, 0x341C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341C68u;
label_341c68:
    // 0x341c68: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x341c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_341c6c:
    // 0x341c6c: 0xc0d058e  jal         func_341638
label_341c70:
    if (ctx->pc == 0x341C70u) {
        ctx->pc = 0x341C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C6Cu;
        // 0x341c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C74u;
        goto label_341c74;
    }
    ctx->pc = 0x341C6Cu;
    SET_GPR_U32(ctx, 31, 0x341C74u);
    ctx->pc = 0x341C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341C6Cu;
    // 0x341c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x341C6Cu, 0x341C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C74u;
label_341c74:
    // 0x341c74: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x341c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_341c78:
    // 0x341c78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x341c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_341c7c:
    // 0x341c7c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_341c80:
    if (ctx->pc == 0x341C80u) {
        ctx->pc = 0x341C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C7Cu;
        // 0x341c80: 0x8ea47198  lw          $a0, 0x7198($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C84u;
        goto label_341c84;
    }
    ctx->pc = 0x341C7Cu;
    {
        const bool branch_taken_0x341c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c7c) {
            ctx->pc = 0x341C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C7Cu;
            // 0x341c80: 0x8ea47198  lw          $a0, 0x7198($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341CB8u;
            goto label_341cb8;
        }
    }
    ctx->pc = 0x341C84u;
label_341c84:
    // 0x341c84: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x341c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_341c88:
    // 0x341c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x341c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341c8c:
    // 0x341c8c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x341c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_341c90:
    // 0x341c90: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x341c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_341c94:
    // 0x341c94: 0x60f809  jalr        $v1
label_341c98:
    if (ctx->pc == 0x341C98u) {
        ctx->pc = 0x341C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C94u;
        // 0x341c98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C9Cu;
        goto label_341c9c;
    }
    ctx->pc = 0x341C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341C9Cu);
        ctx->pc = 0x341C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C94u;
        // 0x341c98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C94u, 0x341C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341C9Cu;
label_341c9c:
    // 0x341c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341ca0:
    // 0x341ca0: 0xc0d05f0  jal         func_3417C0
label_341ca4:
    if (ctx->pc == 0x341CA4u) {
        ctx->pc = 0x341CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CA0u;
        // 0x341ca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CA8u;
        goto label_341ca8;
    }
    ctx->pc = 0x341CA0u;
    SET_GPR_U32(ctx, 31, 0x341CA8u);
    ctx->pc = 0x341CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341CA0u;
    // 0x341ca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3417C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3417C0u, 0x341CA0u, 0x341CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341CA8u;
label_341ca8:
    // 0x341ca8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x341ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_341cac:
    // 0x341cac: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_341cb0:
    if (ctx->pc == 0x341CB0u) {
        ctx->pc = 0x341CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CACu;
        // 0x341cb0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CB4u;
        goto label_341cb4;
    }
    ctx->pc = 0x341CACu;
    {
        const bool branch_taken_0x341cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x341cac) {
            ctx->pc = 0x341CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341CACu;
            // 0x341cb0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341c88;
        }
    }
    ctx->pc = 0x341CB4u;
label_341cb4:
    // 0x341cb4: 0x8ea47198  lw          $a0, 0x7198($s5)
    ctx->pc = 0x341cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
label_341cb8:
    // 0x341cb8: 0xc0d018a  jal         func_340628
label_341cbc:
    if (ctx->pc == 0x341CBCu) {
        ctx->pc = 0x341CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CB8u;
        // 0x341cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CC0u;
        goto label_341cc0;
    }
    ctx->pc = 0x341CB8u;
    SET_GPR_U32(ctx, 31, 0x341CC0u);
    ctx->pc = 0x341CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341CB8u;
    // 0x341cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340628u, 0x341CB8u, 0x341CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341CC0u;
label_341cc0:
    // 0x341cc0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_341cc4:
    // 0x341cc4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x341cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_341cc8:
    // 0x341cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x341cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_341ccc:
    // 0x341ccc: 0x24040801  addiu       $a0, $zero, 0x801
    ctx->pc = 0x341cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
label_341cd0:
    // 0x341cd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x341cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_341cd4:
    // 0x341cd4: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x341cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_341cd8:
    // 0x341cd8: 0xde420040  ld          $v0, 0x40($s2)
    ctx->pc = 0x341cd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_341cdc:
    // 0x341cdc: 0x30420801  andi        $v0, $v0, 0x801
    ctx->pc = 0x341cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2049);
label_341ce0:
    // 0x341ce0: 0x14440044  bne         $v0, $a0, . + 4 + (0x44 << 2)
label_341ce4:
    if (ctx->pc == 0x341CE4u) {
        ctx->pc = 0x341CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CE0u;
        // 0x341ce4: 0x7bb02730  lq          $s0, 0x2730($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CE8u;
        goto label_341ce8;
    }
    ctx->pc = 0x341CE0u;
    {
        const bool branch_taken_0x341ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x341CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CE0u;
        // 0x341ce4: 0x7bb02730  lq          $s0, 0x2730($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ce0) {
            ctx->pc = 0x341DF4u;
            goto label_341df4;
        }
    }
    ctx->pc = 0x341CE8u;
label_341ce8:
    // 0x341ce8: 0x27b12670  addiu       $s1, $sp, 0x2670
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 9840));
label_341cec:
    // 0x341cec: 0xc0d0456  jal         func_341158
label_341cf0:
    if (ctx->pc == 0x341CF0u) {
        ctx->pc = 0x341CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CECu;
        // 0x341cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CF4u;
        goto label_341cf4;
    }
    ctx->pc = 0x341CECu;
    SET_GPR_U32(ctx, 31, 0x341CF4u);
    ctx->pc = 0x341CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341CECu;
    // 0x341cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x341CECu, 0x341CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341CF4u;
label_341cf4:
    // 0x341cf4: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x341cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_341cf8:
    // 0x341cf8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x341cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341cfc:
    // 0x341cfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341d00:
    // 0x341d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341d04:
    // 0x341d04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x341d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_341d08:
    // 0x341d08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x341d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_341d0c:
    // 0x341d0c: 0x40f809  jalr        $v0
label_341d10:
    if (ctx->pc == 0x341D10u) {
        ctx->pc = 0x341D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D0Cu;
        // 0x341d10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D14u;
        goto label_341d14;
    }
    ctx->pc = 0x341D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341D14u);
        ctx->pc = 0x341D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D0Cu;
        // 0x341d10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D0Cu, 0x341D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341D14u;
label_341d14:
    // 0x341d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x341d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_341d18:
    // 0x341d18: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x341d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_341d1c:
    // 0x341d1c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x341d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_341d20:
    // 0x341d20: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x341d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_341d24:
    // 0x341d24: 0x40f809  jalr        $v0
label_341d28:
    if (ctx->pc == 0x341D28u) {
        ctx->pc = 0x341D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D24u;
        // 0x341d28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D2Cu;
        goto label_341d2c;
    }
    ctx->pc = 0x341D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341D2Cu);
        ctx->pc = 0x341D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D24u;
        // 0x341d28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D24u, 0x341D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341D2Cu;
label_341d2c:
    // 0x341d2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x341d2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_341d30:
    // 0x341d30: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x341d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_341d34:
    // 0x341d34: 0x7a480000  lq          $t0, 0x0($s2)
    ctx->pc = 0x341d34u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_341d38:
    // 0x341d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x341d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341d3c:
    // 0x341d3c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x341d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_341d40:
    // 0x341d40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x341d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341d44:
    // 0x341d44: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x341d44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_341d48:
    // 0x341d48: 0x7a470010  lq          $a3, 0x10($s2)
    ctx->pc = 0x341d48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_341d4c:
    // 0x341d4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x341d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_341d50:
    // 0x341d50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_341d54:
    // 0x341d54: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x341d54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_341d58:
    // 0x341d58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x341d58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_341d5c:
    // 0x341d5c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x341d5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_341d60:
    // 0x341d60: 0x7a460020  lq          $a2, 0x20($s2)
    ctx->pc = 0x341d60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_341d64:
    // 0x341d64: 0x7fa82670  sq          $t0, 0x2670($sp)
    ctx->pc = 0x341d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9840), GPR_VEC(ctx, 8));
label_341d68:
    // 0x341d68: 0x7fa72680  sq          $a3, 0x2680($sp)
    ctx->pc = 0x341d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9856), GPR_VEC(ctx, 7));
label_341d6c:
    // 0x341d6c: 0x7fa62690  sq          $a2, 0x2690($sp)
    ctx->pc = 0x341d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9872), GPR_VEC(ctx, 6));
label_341d70:
    // 0x341d70: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x341d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_341d74:
    // 0x341d74: 0x7fa326a0  sq          $v1, 0x26A0($sp)
    ctx->pc = 0x341d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 9888), GPR_VEC(ctx, 3));
label_341d78:
    // 0x341d78: 0xafa026c8  sw          $zero, 0x26C8($sp)
    ctx->pc = 0x341d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 9928), GPR_U32(ctx, 0));
label_341d7c:
    // 0x341d7c: 0xc0d0610  jal         func_341840
label_341d80:
    if (ctx->pc == 0x341D80u) {
        ctx->pc = 0x341D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D7Cu;
        // 0x341d80: 0xafa026c0  sw          $zero, 0x26C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 9920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D84u;
        goto label_341d84;
    }
    ctx->pc = 0x341D7Cu;
    SET_GPR_U32(ctx, 31, 0x341D84u);
    ctx->pc = 0x341D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341D7Cu;
    // 0x341d80: 0xafa026c0  sw          $zero, 0x26C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 9920), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x341D7Cu, 0x341D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D84u;
label_341d84:
    // 0x341d84: 0x27b425a0  addiu       $s4, $sp, 0x25A0
    ctx->pc = 0x341d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 9632));
label_341d88:
    // 0x341d88: 0x8ea47198  lw          $a0, 0x7198($s5)
    ctx->pc = 0x341d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
label_341d8c:
    // 0x341d8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x341d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341d90:
    // 0x341d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x341d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341d94:
    // 0x341d94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x341d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341d98:
    // 0x341d98: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x341d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_341d9c:
    // 0x341d9c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x341d9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_341da0:
    // 0x341da0: 0x27aa26c0  addiu       $t2, $sp, 0x26C0
    ctx->pc = 0x341da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 9920));
label_341da4:
    // 0x341da4: 0xc0cf526  jal         func_33D498
label_341da8:
    if (ctx->pc == 0x341DA8u) {
        ctx->pc = 0x341DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DA4u;
        // 0x341da8: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DACu;
        goto label_341dac;
    }
    ctx->pc = 0x341DA4u;
    SET_GPR_U32(ctx, 31, 0x341DACu);
    ctx->pc = 0x341DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DA4u;
    // 0x341da8: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D498u, 0x341DA4u, 0x341DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DACu;
label_341dac:
    // 0x341dac: 0x8fa726c0  lw          $a3, 0x26C0($sp)
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 9920)));
label_341db0:
    // 0x341db0: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
label_341db4:
    if (ctx->pc == 0x341DB4u) {
        ctx->pc = 0x341DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DB0u;
        // 0x341db4: 0x27a226c8  addiu       $v0, $sp, 0x26C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 9928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DB8u;
        goto label_341db8;
    }
    ctx->pc = 0x341DB0u;
    {
        const bool branch_taken_0x341db0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x341DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DB0u;
        // 0x341db4: 0x27a226c8  addiu       $v0, $sp, 0x26C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 9928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341db0) {
            ctx->pc = 0x341DF0u;
            goto label_341df0;
        }
    }
    ctx->pc = 0x341DB8u;
label_341db8:
    // 0x341db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_341dbc:
    // 0x341dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341dc0:
    // 0x341dc0: 0x27a326cc  addiu       $v1, $sp, 0x26CC
    ctx->pc = 0x341dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 9932));
label_341dc4:
    // 0x341dc4: 0x8ea47198  lw          $a0, 0x7198($s5)
    ctx->pc = 0x341dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
label_341dc8:
    // 0x341dc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x341dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_341dcc:
    // 0x341dcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x341dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341dd0:
    // 0x341dd0: 0xe7a026c4  swc1        $f0, 0x26C4($sp)
    ctx->pc = 0x341dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9924), bits); }
label_341dd4:
    // 0x341dd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x341dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_341dd8:
    // 0x341dd8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x341dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_341ddc:
    // 0x341ddc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x341ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341de0:
    // 0x341de0: 0x27a926a0  addiu       $t1, $sp, 0x26A0
    ctx->pc = 0x341de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 9888));
label_341de4:
    // 0x341de4: 0x27aa26b0  addiu       $t2, $sp, 0x26B0
    ctx->pc = 0x341de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 9904));
label_341de8:
    // 0x341de8: 0xc0cf676  jal         func_33D9D8
label_341dec:
    if (ctx->pc == 0x341DECu) {
        ctx->pc = 0x341DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DE8u;
        // 0x341dec: 0x27ab26c4  addiu       $t3, $sp, 0x26C4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 9924));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DF0u;
        goto label_341df0;
    }
    ctx->pc = 0x341DE8u;
    SET_GPR_U32(ctx, 31, 0x341DF0u);
    ctx->pc = 0x341DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DE8u;
    // 0x341dec: 0x27ab26c4  addiu       $t3, $sp, 0x26C4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 9924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D9D8u, 0x341DE8u, 0x341DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DF0u;
label_341df0:
    // 0x341df0: 0x7bb02730  lq          $s0, 0x2730($sp)
    ctx->pc = 0x341df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10032)));
label_341df4:
    // 0x341df4: 0x7bb12720  lq          $s1, 0x2720($sp)
    ctx->pc = 0x341df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10016)));
label_341df8:
    // 0x341df8: 0x7bb22710  lq          $s2, 0x2710($sp)
    ctx->pc = 0x341df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 10000)));
label_341dfc:
    // 0x341dfc: 0x7bb32700  lq          $s3, 0x2700($sp)
    ctx->pc = 0x341dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 9984)));
label_341e00:
    // 0x341e00: 0x7bb426f0  lq          $s4, 0x26F0($sp)
    ctx->pc = 0x341e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 9968)));
label_341e04:
    // 0x341e04: 0x7bb526e0  lq          $s5, 0x26E0($sp)
    ctx->pc = 0x341e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 9952)));
label_341e08:
    // 0x341e08: 0xdfbf26d0  ld          $ra, 0x26D0($sp)
    ctx->pc = 0x341e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 9936)));
label_341e0c:
    // 0x341e0c: 0x3e00008  jr          $ra
label_341e10:
    if (ctx->pc == 0x341E10u) {
        ctx->pc = 0x341E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E0Cu;
        // 0x341e10: 0x27bd2740  addiu       $sp, $sp, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E14u;
        goto label_341e14;
    }
    ctx->pc = 0x341E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E0Cu;
        // 0x341e10: 0x27bd2740  addiu       $sp, $sp, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341E14u;
label_341e14:
    // 0x341e14: 0x0  nop
    ctx->pc = 0x341e14u;
    // NOP
    ctx->pc = 0x341e18u;
}
