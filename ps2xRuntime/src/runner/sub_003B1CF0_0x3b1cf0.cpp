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

// Function: sub_003B1CF0
// Address: 0x3b1cf0 - 0x3b1ef0
void sub_003B1CF0_0x3b1cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1CF0_0x3b1cf0");
#endif

    switch (ctx->pc) {
        case 0x3b1cf0u: goto label_3b1cf0;
        case 0x3b1cf4u: goto label_3b1cf4;
        case 0x3b1cf8u: goto label_3b1cf8;
        case 0x3b1cfcu: goto label_3b1cfc;
        case 0x3b1d00u: goto label_3b1d00;
        case 0x3b1d04u: goto label_3b1d04;
        case 0x3b1d08u: goto label_3b1d08;
        case 0x3b1d0cu: goto label_3b1d0c;
        case 0x3b1d10u: goto label_3b1d10;
        case 0x3b1d14u: goto label_3b1d14;
        case 0x3b1d18u: goto label_3b1d18;
        case 0x3b1d1cu: goto label_3b1d1c;
        case 0x3b1d20u: goto label_3b1d20;
        case 0x3b1d24u: goto label_3b1d24;
        case 0x3b1d28u: goto label_3b1d28;
        case 0x3b1d2cu: goto label_3b1d2c;
        case 0x3b1d30u: goto label_3b1d30;
        case 0x3b1d34u: goto label_3b1d34;
        case 0x3b1d38u: goto label_3b1d38;
        case 0x3b1d3cu: goto label_3b1d3c;
        case 0x3b1d40u: goto label_3b1d40;
        case 0x3b1d44u: goto label_3b1d44;
        case 0x3b1d48u: goto label_3b1d48;
        case 0x3b1d4cu: goto label_3b1d4c;
        case 0x3b1d50u: goto label_3b1d50;
        case 0x3b1d54u: goto label_3b1d54;
        case 0x3b1d58u: goto label_3b1d58;
        case 0x3b1d5cu: goto label_3b1d5c;
        case 0x3b1d60u: goto label_3b1d60;
        case 0x3b1d64u: goto label_3b1d64;
        case 0x3b1d68u: goto label_3b1d68;
        case 0x3b1d6cu: goto label_3b1d6c;
        case 0x3b1d70u: goto label_3b1d70;
        case 0x3b1d74u: goto label_3b1d74;
        case 0x3b1d78u: goto label_3b1d78;
        case 0x3b1d7cu: goto label_3b1d7c;
        case 0x3b1d80u: goto label_3b1d80;
        case 0x3b1d84u: goto label_3b1d84;
        case 0x3b1d88u: goto label_3b1d88;
        case 0x3b1d8cu: goto label_3b1d8c;
        case 0x3b1d90u: goto label_3b1d90;
        case 0x3b1d94u: goto label_3b1d94;
        case 0x3b1d98u: goto label_3b1d98;
        case 0x3b1d9cu: goto label_3b1d9c;
        case 0x3b1da0u: goto label_3b1da0;
        case 0x3b1da4u: goto label_3b1da4;
        case 0x3b1da8u: goto label_3b1da8;
        case 0x3b1dacu: goto label_3b1dac;
        case 0x3b1db0u: goto label_3b1db0;
        case 0x3b1db4u: goto label_3b1db4;
        case 0x3b1db8u: goto label_3b1db8;
        case 0x3b1dbcu: goto label_3b1dbc;
        case 0x3b1dc0u: goto label_3b1dc0;
        case 0x3b1dc4u: goto label_3b1dc4;
        case 0x3b1dc8u: goto label_3b1dc8;
        case 0x3b1dccu: goto label_3b1dcc;
        case 0x3b1dd0u: goto label_3b1dd0;
        case 0x3b1dd4u: goto label_3b1dd4;
        case 0x3b1dd8u: goto label_3b1dd8;
        case 0x3b1ddcu: goto label_3b1ddc;
        case 0x3b1de0u: goto label_3b1de0;
        case 0x3b1de4u: goto label_3b1de4;
        case 0x3b1de8u: goto label_3b1de8;
        case 0x3b1decu: goto label_3b1dec;
        case 0x3b1df0u: goto label_3b1df0;
        case 0x3b1df4u: goto label_3b1df4;
        case 0x3b1df8u: goto label_3b1df8;
        case 0x3b1dfcu: goto label_3b1dfc;
        case 0x3b1e00u: goto label_3b1e00;
        case 0x3b1e04u: goto label_3b1e04;
        case 0x3b1e08u: goto label_3b1e08;
        case 0x3b1e0cu: goto label_3b1e0c;
        case 0x3b1e10u: goto label_3b1e10;
        case 0x3b1e14u: goto label_3b1e14;
        case 0x3b1e18u: goto label_3b1e18;
        case 0x3b1e1cu: goto label_3b1e1c;
        case 0x3b1e20u: goto label_3b1e20;
        case 0x3b1e24u: goto label_3b1e24;
        case 0x3b1e28u: goto label_3b1e28;
        case 0x3b1e2cu: goto label_3b1e2c;
        case 0x3b1e30u: goto label_3b1e30;
        case 0x3b1e34u: goto label_3b1e34;
        case 0x3b1e38u: goto label_3b1e38;
        case 0x3b1e3cu: goto label_3b1e3c;
        case 0x3b1e40u: goto label_3b1e40;
        case 0x3b1e44u: goto label_3b1e44;
        case 0x3b1e48u: goto label_3b1e48;
        case 0x3b1e4cu: goto label_3b1e4c;
        case 0x3b1e50u: goto label_3b1e50;
        case 0x3b1e54u: goto label_3b1e54;
        case 0x3b1e58u: goto label_3b1e58;
        case 0x3b1e5cu: goto label_3b1e5c;
        case 0x3b1e60u: goto label_3b1e60;
        case 0x3b1e64u: goto label_3b1e64;
        case 0x3b1e68u: goto label_3b1e68;
        case 0x3b1e6cu: goto label_3b1e6c;
        case 0x3b1e70u: goto label_3b1e70;
        case 0x3b1e74u: goto label_3b1e74;
        case 0x3b1e78u: goto label_3b1e78;
        case 0x3b1e7cu: goto label_3b1e7c;
        case 0x3b1e80u: goto label_3b1e80;
        case 0x3b1e84u: goto label_3b1e84;
        case 0x3b1e88u: goto label_3b1e88;
        case 0x3b1e8cu: goto label_3b1e8c;
        case 0x3b1e90u: goto label_3b1e90;
        case 0x3b1e94u: goto label_3b1e94;
        case 0x3b1e98u: goto label_3b1e98;
        case 0x3b1e9cu: goto label_3b1e9c;
        case 0x3b1ea0u: goto label_3b1ea0;
        case 0x3b1ea4u: goto label_3b1ea4;
        case 0x3b1ea8u: goto label_3b1ea8;
        case 0x3b1eacu: goto label_3b1eac;
        case 0x3b1eb0u: goto label_3b1eb0;
        case 0x3b1eb4u: goto label_3b1eb4;
        case 0x3b1eb8u: goto label_3b1eb8;
        case 0x3b1ebcu: goto label_3b1ebc;
        case 0x3b1ec0u: goto label_3b1ec0;
        case 0x3b1ec4u: goto label_3b1ec4;
        case 0x3b1ec8u: goto label_3b1ec8;
        case 0x3b1eccu: goto label_3b1ecc;
        case 0x3b1ed0u: goto label_3b1ed0;
        case 0x3b1ed4u: goto label_3b1ed4;
        case 0x3b1ed8u: goto label_3b1ed8;
        case 0x3b1edcu: goto label_3b1edc;
        case 0x3b1ee0u: goto label_3b1ee0;
        case 0x3b1ee4u: goto label_3b1ee4;
        case 0x3b1ee8u: goto label_3b1ee8;
        case 0x3b1eecu: goto label_3b1eec;
        default: break;
    }

    ctx->pc = 0x3b1cf0u;

label_3b1cf0:
    // 0x3b1cf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b1cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b1cf4:
    // 0x3b1cf4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b1cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3b1cf8:
    // 0x3b1cf8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b1cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3b1cfc:
    // 0x3b1cfc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3b1d00:
    // 0x3b1d00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b1d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1d04:
    // 0x3b1d04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b1d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b1d08:
    // 0x3b1d08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b1d0c:
    // 0x3b1d0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b1d10:
    // 0x3b1d10: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b1d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1d14:
    // 0x3b1d14: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1d18:
    // 0x3b1d18: 0x40f809  jalr        $v0
label_3b1d1c:
    if (ctx->pc == 0x3B1D1Cu) {
        ctx->pc = 0x3B1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D18u;
        // 0x3b1d1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D20u;
        goto label_3b1d20;
    }
    ctx->pc = 0x3B1D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1D20u);
        ctx->pc = 0x3B1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D18u;
        // 0x3b1d1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D18u, 0x3B1D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1D20u;
label_3b1d20:
    // 0x3b1d20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b1d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1d24:
    // 0x3b1d24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3b1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b1d28:
    // 0x3b1d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b1d2c:
    if (ctx->pc == 0x3B1D2Cu) {
        ctx->pc = 0x3B1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D28u;
        // 0x3b1d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D30u;
        goto label_3b1d30;
    }
    ctx->pc = 0x3B1D28u;
    {
        const bool branch_taken_0x3b1d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D28u;
        // 0x3b1d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d28) {
            ctx->pc = 0x3B1D40u;
            goto label_3b1d40;
        }
    }
    ctx->pc = 0x3B1D30u;
label_3b1d30:
    // 0x3b1d30: 0xc0ec68a  jal         func_3B1A28
label_3b1d34:
    if (ctx->pc == 0x3B1D34u) {
        ctx->pc = 0x3B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D30u;
        // 0x3b1d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D38u;
        goto label_3b1d38;
    }
    ctx->pc = 0x3B1D30u;
    SET_GPR_U32(ctx, 31, 0x3B1D38u);
    ctx->pc = 0x3B1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D30u;
    // 0x3b1d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A28u, 0x3B1D30u, 0x3B1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D38u;
label_3b1d38:
    // 0x3b1d38: 0x10000066  b           . + 4 + (0x66 << 2)
label_3b1d3c:
    if (ctx->pc == 0x3B1D3Cu) {
        ctx->pc = 0x3B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D38u;
        // 0x3b1d3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D40u;
        goto label_3b1d40;
    }
    ctx->pc = 0x3B1D38u;
    {
        const bool branch_taken_0x3b1d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D38u;
        // 0x3b1d3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d38) {
            ctx->pc = 0x3B1ED4u;
            goto label_3b1ed4;
        }
    }
    ctx->pc = 0x3B1D40u;
label_3b1d40:
    // 0x3b1d40: 0xc0e4060  jal         func_390180
label_3b1d44:
    if (ctx->pc == 0x3B1D44u) {
        ctx->pc = 0x3B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D40u;
        // 0x3b1d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D48u;
        goto label_3b1d48;
    }
    ctx->pc = 0x3B1D40u;
    SET_GPR_U32(ctx, 31, 0x3B1D48u);
    ctx->pc = 0x3B1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D40u;
    // 0x3b1d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3B1D40u, 0x3B1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D48u;
label_3b1d48:
    // 0x3b1d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b1d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1d4c:
    // 0x3b1d4c: 0x10a00061  beqz        $a1, . + 4 + (0x61 << 2)
label_3b1d50:
    if (ctx->pc == 0x3B1D50u) {
        ctx->pc = 0x3B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D4Cu;
        // 0x3b1d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D54u;
        goto label_3b1d54;
    }
    ctx->pc = 0x3B1D4Cu;
    {
        const bool branch_taken_0x3b1d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D4Cu;
        // 0x3b1d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d4c) {
            ctx->pc = 0x3B1ED4u;
            goto label_3b1ed4;
        }
    }
    ctx->pc = 0x3B1D54u;
label_3b1d54:
    // 0x3b1d54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b1d58:
    // 0x3b1d58: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b1d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1d5c:
    // 0x3b1d5c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1d60:
    // 0x3b1d60: 0x40f809  jalr        $v0
label_3b1d64:
    if (ctx->pc == 0x3B1D64u) {
        ctx->pc = 0x3B1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D60u;
        // 0x3b1d64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D68u;
        goto label_3b1d68;
    }
    ctx->pc = 0x3B1D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1D68u);
        ctx->pc = 0x3B1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D60u;
        // 0x3b1d64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D60u, 0x3B1D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1D68u;
label_3b1d68:
    // 0x3b1d68: 0xc0e409a  jal         func_390268
label_3b1d6c:
    if (ctx->pc == 0x3B1D6Cu) {
        ctx->pc = 0x3B1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D68u;
        // 0x3b1d6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D70u;
        goto label_3b1d70;
    }
    ctx->pc = 0x3B1D68u;
    SET_GPR_U32(ctx, 31, 0x3B1D70u);
    ctx->pc = 0x3B1D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D68u;
    // 0x3b1d6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3B1D68u, 0x3B1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D70u;
label_3b1d70:
    // 0x3b1d70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b1d74:
    if (ctx->pc == 0x3B1D74u) {
        ctx->pc = 0x3B1D78u;
        goto label_3b1d78;
    }
    ctx->pc = 0x3B1D70u;
    {
        const bool branch_taken_0x3b1d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1d70) {
            ctx->pc = 0x3B1D80u;
            goto label_3b1d80;
        }
    }
    ctx->pc = 0x3B1D78u;
label_3b1d78:
    // 0x3b1d78: 0x10000056  b           . + 4 + (0x56 << 2)
label_3b1d7c:
    if (ctx->pc == 0x3B1D7Cu) {
        ctx->pc = 0x3B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D78u;
        // 0x3b1d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D80u;
        goto label_3b1d80;
    }
    ctx->pc = 0x3B1D78u;
    {
        const bool branch_taken_0x3b1d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D78u;
        // 0x3b1d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d78) {
            ctx->pc = 0x3B1ED4u;
            goto label_3b1ed4;
        }
    }
    ctx->pc = 0x3B1D80u;
label_3b1d80:
    // 0x3b1d80: 0xc0e87c0  jal         func_3A1F00
label_3b1d84:
    if (ctx->pc == 0x3B1D84u) {
        ctx->pc = 0x3B1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D80u;
        // 0x3b1d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D88u;
        goto label_3b1d88;
    }
    ctx->pc = 0x3B1D80u;
    SET_GPR_U32(ctx, 31, 0x3B1D88u);
    ctx->pc = 0x3B1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D80u;
    // 0x3b1d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3B1D80u, 0x3B1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D88u;
label_3b1d88:
    // 0x3b1d88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b1d8c:
    // 0x3b1d8c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x3b1d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_3b1d90:
    // 0x3b1d90: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b1d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b1d94:
    // 0x3b1d94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b1d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b1d98:
    // 0x3b1d98: 0x2473b8b8  addiu       $s3, $v1, -0x4748
    ctx->pc = 0x3b1d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3b1d9c:
    // 0x3b1d9c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3b1d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3b1da0:
    // 0x3b1da0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3b1da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3b1da4:
    // 0x3b1da4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b1da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b1da8:
    // 0x3b1da8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1dac:
    // 0x3b1dac: 0xc0cd518  jal         func_335460
label_3b1db0:
    if (ctx->pc == 0x3B1DB0u) {
        ctx->pc = 0x3B1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DACu;
        // 0x3b1db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1DB4u;
        goto label_3b1db4;
    }
    ctx->pc = 0x3B1DACu;
    SET_GPR_U32(ctx, 31, 0x3B1DB4u);
    ctx->pc = 0x3B1DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DACu;
    // 0x3b1db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B1DACu, 0x3B1DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DB4u;
label_3b1db4:
    // 0x3b1db4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3b1db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1db8:
    // 0x3b1db8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b1db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b1dbc:
    // 0x3b1dbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b1dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b1dc0:
    // 0x3b1dc0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b1dc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b1dc4:
    // 0x3b1dc4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b1dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b1dc8:
    // 0x3b1dc8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b1dc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b1dcc:
    // 0x3b1dcc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b1dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b1dd0:
    // 0x3b1dd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3b1dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b1dd4:
    // 0x3b1dd4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3b1dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3b1dd8:
    // 0x3b1dd8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3b1dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3b1ddc:
    // 0x3b1ddc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3b1ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b1de0:
    // 0x3b1de0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3b1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b1de4:
    // 0x3b1de4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b1de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b1de8:
    // 0x3b1de8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b1de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b1dec:
    // 0x3b1dec: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3b1decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b1df0:
    // 0x3b1df0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3b1df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3b1df4:
    // 0x3b1df4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3b1df8:
    if (ctx->pc == 0x3B1DF8u) {
        ctx->pc = 0x3B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DF4u;
        // 0x3b1df8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1DFCu;
        goto label_3b1dfc;
    }
    ctx->pc = 0x3B1DF4u;
    {
        const bool branch_taken_0x3b1df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DF4u;
        // 0x3b1df8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1df4) {
            ctx->pc = 0x3B1E00u;
            goto label_3b1e00;
        }
    }
    ctx->pc = 0x3B1DFCu;
label_3b1dfc:
    // 0x3b1dfc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3b1dfcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3b1e00:
    // 0x3b1e00: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b1e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b1e04:
    // 0x3b1e04: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3b1e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b1e08:
    // 0x3b1e08: 0x0  nop
    ctx->pc = 0x3b1e08u;
    // NOP
label_3b1e0c:
    // 0x3b1e0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3b1e10:
    if (ctx->pc == 0x3B1E10u) {
        ctx->pc = 0x3B1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E0Cu;
        // 0x3b1e10: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E14u;
        goto label_3b1e14;
    }
    ctx->pc = 0x3B1E0Cu;
    {
        const bool branch_taken_0x3b1e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b1e0c) {
            ctx->pc = 0x3B1E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1E0Cu;
            // 0x3b1e10: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1E14u;
            goto label_3b1e14;
        }
    }
    ctx->pc = 0x3B1E14u;
label_3b1e14:
    // 0x3b1e14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b1e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b1e18:
    // 0x3b1e18: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3b1e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3b1e1c:
    // 0x3b1e1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b1e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b1e20:
    // 0x3b1e20: 0x0  nop
    ctx->pc = 0x3b1e20u;
    // NOP
label_3b1e24:
    // 0x3b1e24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b1e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b1e28:
    // 0x3b1e28: 0x0  nop
    ctx->pc = 0x3b1e28u;
    // NOP
label_3b1e2c:
    // 0x3b1e2c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_3b1e30:
    if (ctx->pc == 0x3B1E30u) {
        ctx->pc = 0x3B1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E2Cu;
        // 0x3b1e30: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E34u;
        goto label_3b1e34;
    }
    ctx->pc = 0x3B1E2Cu;
    {
        const bool branch_taken_0x3b1e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b1e2c) {
            ctx->pc = 0x3B1E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1E2Cu;
            // 0x3b1e30: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1E44u;
            goto label_3b1e44;
        }
    }
    ctx->pc = 0x3B1E34u;
label_3b1e34:
    // 0x3b1e34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b1e38:
    // 0x3b1e38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3b1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3b1e3c:
    // 0x3b1e3c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3b1e40:
    // 0x3b1e40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b1e44:
    // 0x3b1e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b1e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b1e48:
    // 0x3b1e48: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3b1e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3b1e4c:
    // 0x3b1e4c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3b1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3b1e50:
    // 0x3b1e50: 0x60f809  jalr        $v1
label_3b1e54:
    if (ctx->pc == 0x3B1E54u) {
        ctx->pc = 0x3B1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E50u;
        // 0x3b1e54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E58u;
        goto label_3b1e58;
    }
    ctx->pc = 0x3B1E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1E58u);
        ctx->pc = 0x3B1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E50u;
        // 0x3b1e54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1E50u, 0x3B1E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1E58u;
label_3b1e58:
    // 0x3b1e58: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3b1e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b1e5c:
    // 0x3b1e5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b1e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1e60:
    // 0x3b1e60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1e64:
    // 0x3b1e64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1e68:
    // 0x3b1e68: 0xc0cd4ee  jal         func_3353B8
label_3b1e6c:
    if (ctx->pc == 0x3B1E6Cu) {
        ctx->pc = 0x3B1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E68u;
        // 0x3b1e6c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E70u;
        goto label_3b1e70;
    }
    ctx->pc = 0x3B1E68u;
    SET_GPR_U32(ctx, 31, 0x3B1E70u);
    ctx->pc = 0x3B1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E68u;
    // 0x3b1e6c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B1E68u, 0x3B1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E70u;
label_3b1e70:
    // 0x3b1e70: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x3b1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_3b1e74:
    // 0x3b1e74: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x3b1e74u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3b1e78:
    // 0x3b1e78: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
label_3b1e7c:
    if (ctx->pc == 0x3B1E7Cu) {
        ctx->pc = 0x3B1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E78u;
        // 0x3b1e7c: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E80u;
        goto label_3b1e80;
    }
    ctx->pc = 0x3B1E78u;
    {
        const bool branch_taken_0x3b1e78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e78) {
            ctx->pc = 0x3B1E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1E78u;
            // 0x3b1e7c: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1EA8u;
            goto label_3b1ea8;
        }
    }
    ctx->pc = 0x3B1E80u;
label_3b1e80:
    // 0x3b1e80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3b1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b1e84:
    // 0x3b1e84: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3b1e88:
    if (ctx->pc == 0x3B1E88u) {
        ctx->pc = 0x3B1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E84u;
        // 0x3b1e88: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E8Cu;
        goto label_3b1e8c;
    }
    ctx->pc = 0x3B1E84u;
    {
        const bool branch_taken_0x3b1e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e84) {
            ctx->pc = 0x3B1E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1E84u;
            // 0x3b1e88: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1EA8u;
            goto label_3b1ea8;
        }
    }
    ctx->pc = 0x3B1E8Cu;
label_3b1e8c:
    // 0x3b1e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b1e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b1e90:
    // 0x3b1e90: 0xc0e858c  jal         func_3A1630
label_3b1e94:
    if (ctx->pc == 0x3B1E94u) {
        ctx->pc = 0x3B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E90u;
        // 0x3b1e94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1E98u;
        goto label_3b1e98;
    }
    ctx->pc = 0x3B1E90u;
    SET_GPR_U32(ctx, 31, 0x3B1E98u);
    ctx->pc = 0x3B1E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E90u;
    // 0x3b1e94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B1E90u, 0x3B1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E98u;
label_3b1e98:
    // 0x3b1e98: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x3b1e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_3b1e9c:
    // 0x3b1e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1ea0:
    // 0x3b1ea0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3b1ea4:
    if (ctx->pc == 0x3B1EA4u) {
        ctx->pc = 0x3B1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EA0u;
        // 0x3b1ea4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1EA8u;
        goto label_3b1ea8;
    }
    ctx->pc = 0x3B1EA0u;
    {
        const bool branch_taken_0x3b1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EA0u;
        // 0x3b1ea4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ea0) {
            ctx->pc = 0x3B1ED0u;
            goto label_3b1ed0;
        }
    }
    ctx->pc = 0x3B1EA8u;
label_3b1ea8:
    // 0x3b1ea8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b1eac:
    // 0x3b1eac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3b1eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b1eb0:
    // 0x3b1eb0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b1eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3b1eb4:
    // 0x3b1eb4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b1eb8:
    // 0x3b1eb8: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x3b1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b1ebc:
    // 0x3b1ebc: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x3b1ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b1ec0:
    // 0x3b1ec0: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x3b1ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_3b1ec4:
    // 0x3b1ec4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b1ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3b1ec8:
    // 0x3b1ec8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3b1ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3b1ecc:
    // 0x3b1ecc: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3b1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3b1ed0:
    // 0x3b1ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1ed4:
    // 0x3b1ed4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b1ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1ed8:
    // 0x3b1ed8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b1ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1edc:
    // 0x3b1edc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b1edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1ee0:
    // 0x3b1ee0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b1ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1ee4:
    // 0x3b1ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b1ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1ee8:
    // 0x3b1ee8: 0x3e00008  jr          $ra
label_3b1eec:
    if (ctx->pc == 0x3B1EECu) {
        ctx->pc = 0x3B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EE8u;
        // 0x3b1eec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1EF0u;
        goto label_fallthrough_0x3b1ee8;
    }
    ctx->pc = 0x3B1EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EE8u;
        // 0x3b1eec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1ee8:
    ctx->pc = 0x3B1EF0u;
}
