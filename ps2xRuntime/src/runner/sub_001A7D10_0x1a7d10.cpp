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

// Function: sub_001A7D10
// Address: 0x1a7d10 - 0x1a7e48
void sub_001A7D10_0x1a7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7D10_0x1a7d10");
#endif

    switch (ctx->pc) {
        case 0x1a7d10u: goto label_1a7d10;
        case 0x1a7d14u: goto label_1a7d14;
        case 0x1a7d18u: goto label_1a7d18;
        case 0x1a7d1cu: goto label_1a7d1c;
        case 0x1a7d20u: goto label_1a7d20;
        case 0x1a7d24u: goto label_1a7d24;
        case 0x1a7d28u: goto label_1a7d28;
        case 0x1a7d2cu: goto label_1a7d2c;
        case 0x1a7d30u: goto label_1a7d30;
        case 0x1a7d34u: goto label_1a7d34;
        case 0x1a7d38u: goto label_1a7d38;
        case 0x1a7d3cu: goto label_1a7d3c;
        case 0x1a7d40u: goto label_1a7d40;
        case 0x1a7d44u: goto label_1a7d44;
        case 0x1a7d48u: goto label_1a7d48;
        case 0x1a7d4cu: goto label_1a7d4c;
        case 0x1a7d50u: goto label_1a7d50;
        case 0x1a7d54u: goto label_1a7d54;
        case 0x1a7d58u: goto label_1a7d58;
        case 0x1a7d5cu: goto label_1a7d5c;
        case 0x1a7d60u: goto label_1a7d60;
        case 0x1a7d64u: goto label_1a7d64;
        case 0x1a7d68u: goto label_1a7d68;
        case 0x1a7d6cu: goto label_1a7d6c;
        case 0x1a7d70u: goto label_1a7d70;
        case 0x1a7d74u: goto label_1a7d74;
        case 0x1a7d78u: goto label_1a7d78;
        case 0x1a7d7cu: goto label_1a7d7c;
        case 0x1a7d80u: goto label_1a7d80;
        case 0x1a7d84u: goto label_1a7d84;
        case 0x1a7d88u: goto label_1a7d88;
        case 0x1a7d8cu: goto label_1a7d8c;
        case 0x1a7d90u: goto label_1a7d90;
        case 0x1a7d94u: goto label_1a7d94;
        case 0x1a7d98u: goto label_1a7d98;
        case 0x1a7d9cu: goto label_1a7d9c;
        case 0x1a7da0u: goto label_1a7da0;
        case 0x1a7da4u: goto label_1a7da4;
        case 0x1a7da8u: goto label_1a7da8;
        case 0x1a7dacu: goto label_1a7dac;
        case 0x1a7db0u: goto label_1a7db0;
        case 0x1a7db4u: goto label_1a7db4;
        case 0x1a7db8u: goto label_1a7db8;
        case 0x1a7dbcu: goto label_1a7dbc;
        case 0x1a7dc0u: goto label_1a7dc0;
        case 0x1a7dc4u: goto label_1a7dc4;
        case 0x1a7dc8u: goto label_1a7dc8;
        case 0x1a7dccu: goto label_1a7dcc;
        case 0x1a7dd0u: goto label_1a7dd0;
        case 0x1a7dd4u: goto label_1a7dd4;
        case 0x1a7dd8u: goto label_1a7dd8;
        case 0x1a7ddcu: goto label_1a7ddc;
        case 0x1a7de0u: goto label_1a7de0;
        case 0x1a7de4u: goto label_1a7de4;
        case 0x1a7de8u: goto label_1a7de8;
        case 0x1a7decu: goto label_1a7dec;
        case 0x1a7df0u: goto label_1a7df0;
        case 0x1a7df4u: goto label_1a7df4;
        case 0x1a7df8u: goto label_1a7df8;
        case 0x1a7dfcu: goto label_1a7dfc;
        case 0x1a7e00u: goto label_1a7e00;
        case 0x1a7e04u: goto label_1a7e04;
        case 0x1a7e08u: goto label_1a7e08;
        case 0x1a7e0cu: goto label_1a7e0c;
        case 0x1a7e10u: goto label_1a7e10;
        case 0x1a7e14u: goto label_1a7e14;
        case 0x1a7e18u: goto label_1a7e18;
        case 0x1a7e1cu: goto label_1a7e1c;
        case 0x1a7e20u: goto label_1a7e20;
        case 0x1a7e24u: goto label_1a7e24;
        case 0x1a7e28u: goto label_1a7e28;
        case 0x1a7e2cu: goto label_1a7e2c;
        case 0x1a7e30u: goto label_1a7e30;
        case 0x1a7e34u: goto label_1a7e34;
        case 0x1a7e38u: goto label_1a7e38;
        case 0x1a7e3cu: goto label_1a7e3c;
        case 0x1a7e40u: goto label_1a7e40;
        case 0x1a7e44u: goto label_1a7e44;
        default: break;
    }

    ctx->pc = 0x1a7d10u;

label_1a7d10:
    // 0x1a7d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a7d14:
    // 0x1a7d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a7d18:
    // 0x1a7d18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a7d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1a7d1c:
    // 0x1a7d1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d20:
    // 0x1a7d20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a7d24:
    // 0x1a7d24: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1a7d28:
    // 0x1a7d28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a7d2c:
    // 0x1a7d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a7d30:
    // 0x1a7d30: 0x8e63d24c  lw          $v1, -0x2DB4($s3)
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955596)));
label_1a7d34:
    // 0x1a7d34: 0x8e421578  lw          $v0, 0x1578($s2)
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5496)));
label_1a7d38:
    // 0x1a7d38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a7d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a7d3c:
    // 0x1a7d3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1a7d40:
    if (ctx->pc == 0x1A7D40u) {
        ctx->pc = 0x1A7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D3Cu;
        // 0x1a7d40: 0x58200  sll         $s0, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D44u;
        goto label_1a7d44;
    }
    ctx->pc = 0x1A7D3Cu;
    {
        const bool branch_taken_0x1a7d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D3Cu;
        // 0x1a7d40: 0x58200  sll         $s0, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d3c) {
            ctx->pc = 0x1A7DB0u;
            goto label_1a7db0;
        }
    }
    ctx->pc = 0x1A7D44u;
label_1a7d44:
    // 0x1a7d44: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x1a7d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1a7d48:
    // 0x1a7d48: 0x26040940  addiu       $a0, $s0, 0x940
    ctx->pc = 0x1a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
label_1a7d4c:
    // 0x1a7d4c: 0x8e220940  lw          $v0, 0x940($s1)
    ctx->pc = 0x1a7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2368)));
label_1a7d50:
    // 0x1a7d50: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1a7d54:
    // 0x1a7d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d58:
    // 0x1a7d58: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1a7d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a7d5c:
    // 0x1a7d5c: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a7d60:
    // 0x1a7d60: 0xc0f809  jalr        $a2
label_1a7d64:
    if (ctx->pc == 0x1A7D64u) {
        ctx->pc = 0x1A7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D60u;
        // 0x1a7d64: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D68u;
        goto label_1a7d68;
    }
    ctx->pc = 0x1A7D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A7D68u);
        ctx->pc = 0x1A7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D60u;
        // 0x1a7d64: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7D60u, 0x1A7D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7D68u;
label_1a7d68:
    // 0x1a7d68: 0x8e270340  lw          $a3, 0x340($s1)
    ctx->pc = 0x1a7d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a7d6c:
    // 0x1a7d6c: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1a7d70:
    // 0x1a7d70: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1a7d74:
    // 0x1a7d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d78:
    // 0x1a7d78: 0x84e20040  lh          $v0, 0x40($a3)
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
label_1a7d7c:
    // 0x1a7d7c: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x1a7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_1a7d80:
    // 0x1a7d80: 0x60f809  jalr        $v1
label_1a7d84:
    if (ctx->pc == 0x1A7D84u) {
        ctx->pc = 0x1A7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D80u;
        // 0x1a7d84: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D88u;
        goto label_1a7d88;
    }
    ctx->pc = 0x1A7D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A7D88u);
        ctx->pc = 0x1A7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D80u;
        // 0x1a7d84: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7D80u, 0x1A7D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7D88u;
label_1a7d88:
    // 0x1a7d88: 0x8e260f40  lw          $a2, 0xF40($s1)
    ctx->pc = 0x1a7d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3904)));
label_1a7d8c:
    // 0x1a7d8c: 0x26100f40  addiu       $s0, $s0, 0xF40
    ctx->pc = 0x1a7d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1a7d90:
    // 0x1a7d90: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1a7d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1a7d94:
    // 0x1a7d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d98:
    // 0x1a7d98: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_1a7d9c:
    // 0x1a7d9c: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_1a7da0:
    // 0x1a7da0: 0x40f809  jalr        $v0
label_1a7da4:
    if (ctx->pc == 0x1A7DA4u) {
        ctx->pc = 0x1A7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DA0u;
        // 0x1a7da4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DA8u;
        goto label_1a7da8;
    }
    ctx->pc = 0x1A7DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7DA8u);
        ctx->pc = 0x1A7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DA0u;
        // 0x1a7da4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7DA0u, 0x1A7DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7DA8u;
label_1a7da8:
    // 0x1a7da8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1a7dac:
    if (ctx->pc == 0x1A7DACu) {
        ctx->pc = 0x1A7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DA8u;
        // 0x1a7dac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DB0u;
        goto label_1a7db0;
    }
    ctx->pc = 0x1A7DA8u;
    {
        const bool branch_taken_0x1a7da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DA8u;
        // 0x1a7dac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7da8) {
            ctx->pc = 0x1A7E2Cu;
            goto label_1a7e2c;
        }
    }
    ctx->pc = 0x1A7DB0u;
label_1a7db0:
    // 0x1a7db0: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1a7db4:
    // 0x1a7db4: 0x26040940  addiu       $a0, $s0, 0x940
    ctx->pc = 0x1a7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
label_1a7db8:
    // 0x1a7db8: 0x8e220940  lw          $v0, 0x940($s1)
    ctx->pc = 0x1a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2368)));
label_1a7dbc:
    // 0x1a7dbc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1a7dc0:
    // 0x1a7dc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7dc4:
    // 0x1a7dc4: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a7dc8:
    // 0x1a7dc8: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x1a7dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a7dcc:
    // 0x1a7dcc: 0xc0f809  jalr        $a2
label_1a7dd0:
    if (ctx->pc == 0x1A7DD0u) {
        ctx->pc = 0x1A7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DCCu;
        // 0x1a7dd0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DD4u;
        goto label_1a7dd4;
    }
    ctx->pc = 0x1A7DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A7DD4u);
        ctx->pc = 0x1A7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DCCu;
        // 0x1a7dd0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7DCCu, 0x1A7DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7DD4u;
label_1a7dd4:
    // 0x1a7dd4: 0x8e270340  lw          $a3, 0x340($s1)
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a7dd8:
    // 0x1a7dd8: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x1a7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1a7ddc:
    // 0x1a7ddc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a7ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1a7de0:
    // 0x1a7de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7de4:
    // 0x1a7de4: 0x84e20040  lh          $v0, 0x40($a3)
    ctx->pc = 0x1a7de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
label_1a7de8:
    // 0x1a7de8: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x1a7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_1a7dec:
    // 0x1a7dec: 0x60f809  jalr        $v1
label_1a7df0:
    if (ctx->pc == 0x1A7DF0u) {
        ctx->pc = 0x1A7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DECu;
        // 0x1a7df0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DF4u;
        goto label_1a7df4;
    }
    ctx->pc = 0x1A7DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A7DF4u);
        ctx->pc = 0x1A7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DECu;
        // 0x1a7df0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7DECu, 0x1A7DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7DF4u;
label_1a7df4:
    // 0x1a7df4: 0x8e220f40  lw          $v0, 0xF40($s1)
    ctx->pc = 0x1a7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3904)));
label_1a7df8:
    // 0x1a7df8: 0x26100f40  addiu       $s0, $s0, 0xF40
    ctx->pc = 0x1a7df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1a7dfc:
    // 0x1a7dfc: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1a7dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1a7e00:
    // 0x1a7e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7e04:
    // 0x1a7e04: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a7e08:
    // 0x1a7e08: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a7e0c:
    // 0x1a7e0c: 0x60f809  jalr        $v1
label_1a7e10:
    if (ctx->pc == 0x1A7E10u) {
        ctx->pc = 0x1A7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E0Cu;
        // 0x1a7e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E14u;
        goto label_1a7e14;
    }
    ctx->pc = 0x1A7E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A7E14u);
        ctx->pc = 0x1A7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E0Cu;
        // 0x1a7e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7E0Cu, 0x1A7E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7E14u;
label_1a7e14:
    // 0x1a7e14: 0x8e62d24c  lw          $v0, -0x2DB4($s3)
    ctx->pc = 0x1a7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955596)));
label_1a7e18:
    // 0x1a7e18: 0x8e431578  lw          $v1, 0x1578($s2)
    ctx->pc = 0x1a7e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5496)));
label_1a7e1c:
    // 0x1a7e1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a7e20:
    // 0x1a7e20: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_1a7e24:
    if (ctx->pc == 0x1A7E24u) {
        ctx->pc = 0x1A7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E20u;
        // 0x1a7e24: 0xae401578  sw          $zero, 0x1578($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E28u;
        goto label_1a7e28;
    }
    ctx->pc = 0x1A7E20u;
    {
        const bool branch_taken_0x1a7e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7e20) {
            ctx->pc = 0x1A7E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7E20u;
            // 0x1a7e24: 0xae401578  sw          $zero, 0x1578($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 5496), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7E28u;
            goto label_1a7e28;
        }
    }
    ctx->pc = 0x1A7E28u;
label_1a7e28:
    // 0x1a7e28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a7e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7e2c:
    // 0x1a7e2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a7e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7e30:
    // 0x1a7e30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7e34:
    // 0x1a7e34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a7e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7e38:
    // 0x1a7e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7e3c:
    // 0x1a7e3c: 0x3e00008  jr          $ra
label_1a7e40:
    if (ctx->pc == 0x1A7E40u) {
        ctx->pc = 0x1A7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E3Cu;
        // 0x1a7e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E44u;
        goto label_1a7e44;
    }
    ctx->pc = 0x1A7E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E3Cu;
        // 0x1a7e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7E44u;
label_1a7e44:
    // 0x1a7e44: 0x0  nop
    ctx->pc = 0x1a7e44u;
    // NOP
    ctx->pc = 0x1a7e48u;
}
