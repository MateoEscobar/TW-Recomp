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

// Function: sub_001F5D20
// Address: 0x1f5d20 - 0x1f5e00
void sub_001F5D20_0x1f5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5D20_0x1f5d20");
#endif

    switch (ctx->pc) {
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d24u: goto label_1f5d24;
        case 0x1f5d28u: goto label_1f5d28;
        case 0x1f5d2cu: goto label_1f5d2c;
        case 0x1f5d30u: goto label_1f5d30;
        case 0x1f5d34u: goto label_1f5d34;
        case 0x1f5d38u: goto label_1f5d38;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d40u: goto label_1f5d40;
        case 0x1f5d44u: goto label_1f5d44;
        case 0x1f5d48u: goto label_1f5d48;
        case 0x1f5d4cu: goto label_1f5d4c;
        case 0x1f5d50u: goto label_1f5d50;
        case 0x1f5d54u: goto label_1f5d54;
        case 0x1f5d58u: goto label_1f5d58;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d60u: goto label_1f5d60;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d68u: goto label_1f5d68;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d78u: goto label_1f5d78;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d80u: goto label_1f5d80;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d8cu: goto label_1f5d8c;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5d9cu: goto label_1f5d9c;
        case 0x1f5da0u: goto label_1f5da0;
        case 0x1f5da4u: goto label_1f5da4;
        case 0x1f5da8u: goto label_1f5da8;
        case 0x1f5dacu: goto label_1f5dac;
        case 0x1f5db0u: goto label_1f5db0;
        case 0x1f5db4u: goto label_1f5db4;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dbcu: goto label_1f5dbc;
        case 0x1f5dc0u: goto label_1f5dc0;
        case 0x1f5dc4u: goto label_1f5dc4;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5dccu: goto label_1f5dcc;
        case 0x1f5dd0u: goto label_1f5dd0;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5dd8u: goto label_1f5dd8;
        case 0x1f5ddcu: goto label_1f5ddc;
        case 0x1f5de0u: goto label_1f5de0;
        case 0x1f5de4u: goto label_1f5de4;
        case 0x1f5de8u: goto label_1f5de8;
        case 0x1f5decu: goto label_1f5dec;
        case 0x1f5df0u: goto label_1f5df0;
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5df8u: goto label_1f5df8;
        case 0x1f5dfcu: goto label_1f5dfc;
        default: break;
    }

    ctx->pc = 0x1f5d20u;

label_1f5d20:
    // 0x1f5d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f5d24:
    // 0x1f5d24: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f5d28:
    // 0x1f5d28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f5d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f5d2c:
    // 0x1f5d2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f5d30:
    // 0x1f5d30: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f5d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f5d34:
    // 0x1f5d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d38:
    // 0x1f5d38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f5d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f5d3c:
    // 0x1f5d3c: 0x2442d208  addiu       $v0, $v0, -0x2DF8
    ctx->pc = 0x1f5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955528));
label_1f5d40:
    // 0x1f5d40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f5d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f5d44:
    // 0x1f5d44: 0x2463d230  addiu       $v1, $v1, -0x2DD0
    ctx->pc = 0x1f5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955568));
label_1f5d48:
    // 0x1f5d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5d4c:
    // 0x1f5d4c: 0x24c6d260  addiu       $a2, $a2, -0x2DA0
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955616));
label_1f5d50:
    // 0x1f5d50: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1f5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1f5d54:
    // 0x1f5d54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f5d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d58:
    // 0x1f5d58: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1f5d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1f5d5c:
    // 0x1f5d5c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1f5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1f5d60:
    // 0x1f5d60: 0xc07db64  jal         func_1F6D90
label_1f5d64:
    if (ctx->pc == 0x1F5D64u) {
        ctx->pc = 0x1F5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D60u;
        // 0x1f5d64: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D68u;
        goto label_1f5d68;
    }
    ctx->pc = 0x1F5D60u;
    SET_GPR_U32(ctx, 31, 0x1F5D68u);
    ctx->pc = 0x1F5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D60u;
    // 0x1f5d64: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6D90u, 0x1F5D60u, 0x1F5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D68u;
label_1f5d68:
    // 0x1f5d68: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f5d6c:
    // 0x1f5d6c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1f5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1f5d70:
    // 0x1f5d70: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1f5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1f5d74:
    // 0x1f5d74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f5d78:
    // 0x1f5d78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f5d7c:
    if (ctx->pc == 0x1F5D7Cu) {
        ctx->pc = 0x1F5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D78u;
        // 0x1f5d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D80u;
        goto label_1f5d80;
    }
    ctx->pc = 0x1F5D78u;
    {
        const bool branch_taken_0x1f5d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D78u;
        // 0x1f5d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d78) {
            ctx->pc = 0x1F5DA8u;
            goto label_1f5da8;
        }
    }
    ctx->pc = 0x1F5D80u;
label_1f5d80:
    // 0x1f5d80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5d84:
    // 0x1f5d84: 0xc1376d6  jal         func_4DDB58
label_1f5d88:
    if (ctx->pc == 0x1F5D88u) {
        ctx->pc = 0x1F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D84u;
        // 0x1f5d88: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D8Cu;
        goto label_1f5d8c;
    }
    ctx->pc = 0x1F5D84u;
    SET_GPR_U32(ctx, 31, 0x1F5D8Cu);
    ctx->pc = 0x1F5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D84u;
    // 0x1f5d88: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1F5D84u, 0x1F5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D8Cu;
label_1f5d8c:
    // 0x1f5d8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5d90:
    // 0x1f5d90: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f5d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f5d94:
    // 0x1f5d94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5d98:
    // 0x1f5d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f5d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f5d9c:
    // 0x1f5d9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5da0:
    // 0x1f5da0: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1f5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1f5da4:
    // 0x1f5da4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f5da8:
    // 0x1f5da8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f5da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5dac:
    // 0x1f5dac: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f5db0:
    if (ctx->pc == 0x1F5DB0u) {
        ctx->pc = 0x1F5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DACu;
        // 0x1f5db0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DB4u;
        goto label_1f5db4;
    }
    ctx->pc = 0x1F5DACu;
    {
        const bool branch_taken_0x1f5dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DACu;
        // 0x1f5db0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5dac) {
            ctx->pc = 0x1F5DD8u;
            goto label_1f5dd8;
        }
    }
    ctx->pc = 0x1F5DB4u;
label_1f5db4:
    // 0x1f5db4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1f5db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1f5db8:
    // 0x1f5db8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f5dbc:
    // 0x1f5dbc: 0x24c67660  addiu       $a2, $a2, 0x7660
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30304));
label_1f5dc0:
    // 0x1f5dc0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1f5dc4:
    // 0x1f5dc4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f5dc8:
    // 0x1f5dc8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1f5dcc:
    // 0x1f5dcc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1f5dd0:
    // 0x1f5dd0: 0x60f809  jalr        $v1
label_1f5dd4:
    if (ctx->pc == 0x1F5DD4u) {
        ctx->pc = 0x1F5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DD0u;
        // 0x1f5dd4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DD8u;
        goto label_1f5dd8;
    }
    ctx->pc = 0x1F5DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5DD8u);
        ctx->pc = 0x1F5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DD0u;
        // 0x1f5dd4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5DD0u, 0x1F5DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5DD8u;
label_1f5dd8:
    // 0x1f5dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ddc:
    // 0x1f5ddc: 0xc06a39e  jal         func_1A8E78
label_1f5de0:
    if (ctx->pc == 0x1F5DE0u) {
        ctx->pc = 0x1F5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DDCu;
        // 0x1f5de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DE4u;
        goto label_1f5de4;
    }
    ctx->pc = 0x1F5DDCu;
    SET_GPR_U32(ctx, 31, 0x1F5DE4u);
    ctx->pc = 0x1F5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DDCu;
    // 0x1f5de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1F5DDCu, 0x1F5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DE4u;
label_1f5de4:
    // 0x1f5de4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f5de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5de8:
    // 0x1f5de8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5dec:
    // 0x1f5dec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f5decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5df0:
    // 0x1f5df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5df4:
    // 0x1f5df4: 0x3e00008  jr          $ra
label_1f5df8:
    if (ctx->pc == 0x1F5DF8u) {
        ctx->pc = 0x1F5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DF4u;
        // 0x1f5df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DFCu;
        goto label_1f5dfc;
    }
    ctx->pc = 0x1F5DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DF4u;
        // 0x1f5df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5DFCu;
label_1f5dfc:
    // 0x1f5dfc: 0x0  nop
    ctx->pc = 0x1f5dfcu;
    // NOP
    ctx->pc = 0x1f5e00u;
}
