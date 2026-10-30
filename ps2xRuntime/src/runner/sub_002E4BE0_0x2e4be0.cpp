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

// Function: sub_002E4BE0
// Address: 0x2e4be0 - 0x2e4cf0
void sub_002E4BE0_0x2e4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4BE0_0x2e4be0");
#endif

    switch (ctx->pc) {
        case 0x2e4bf8u: goto label_2e4bf8;
        case 0x2e4c14u: goto label_2e4c14;
        case 0x2e4cc0u: goto label_2e4cc0;
        case 0x2e4cd0u: goto label_2e4cd0;
        default: break;
    }

    ctx->pc = 0x2e4be0u;

    // 0x2e4be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4be4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e4be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4bf0: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2E4BF0u;
    SET_GPR_U32(ctx, 31, 0x2E4BF8u);
    ctx->pc = 0x2E4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BF0u;
    // 0x2e4bf4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2E4BF0u, 0x2E4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BF8u;
label_2e4bf8:
    // 0x2e4bf8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4BF8u;
    {
        const bool branch_taken_0x2e4bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4bf8) {
            ctx->pc = 0x2E4BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4BF8u;
            // 0x2e4bfc: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E4C00u;
    // 0x2e4c00: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2E4C00u;
    {
        const bool branch_taken_0x2e4c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C00u;
        // 0x2e4c04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c00) {
            ctx->pc = 0x2E4CDCu;
            goto label_2e4cdc;
        }
    }
    ctx->pc = 0x2E4C08u;
label_2e4c08:
    // 0x2e4c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c0c: 0xc051282  jal         func_144A08
    ctx->pc = 0x2E4C0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4C14u);
    ctx->pc = 0x2E4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C0Cu;
    // 0x2e4c10: 0x2484d810  addiu       $a0, $a0, -0x27F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x2E4C0Cu, 0x2E4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C14u;
label_2e4c14:
    // 0x2e4c14: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e4c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2e4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e4c1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4C1Cu;
    {
        const bool branch_taken_0x2e4c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c1c) {
            ctx->pc = 0x2E4C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4C1Cu;
            // 0x2e4c20: 0x8e06001c  lw          $a2, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C4Cu;
            goto label_2e4c4c;
        }
    }
    ctx->pc = 0x2E4C24u;
    // 0x2e4c24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2e4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2e4c28: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2e4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2e4c2c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2e4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2e4c30: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2e4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
    // 0x2e4c34: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2e4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2e4c38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e4c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e4c3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4C3Cu;
    {
        const bool branch_taken_0x2e4c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C3Cu;
        // 0x2e4c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c3c) {
            ctx->pc = 0x2E4C48u;
            goto label_2e4c48;
        }
    }
    ctx->pc = 0x2E4C44u;
    // 0x2e4c44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2e4c48:
    // 0x2e4c48: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x2e4c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2e4c4c:
    // 0x2e4c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4c50: 0x14c2001d  bne         $a2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4C50u;
    {
        const bool branch_taken_0x2e4c50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C50u;
        // 0x2e4c54: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c50) {
            ctx->pc = 0x2E4CC8u;
            goto label_2e4cc8;
        }
    }
    ctx->pc = 0x2E4C58u;
    // 0x2e4c58: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2e4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2e4c5c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2e4c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x2e4c60: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x2e4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
    // 0x2e4c64: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2e4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2e4c68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e4c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e4c6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4C6Cu;
    {
        const bool branch_taken_0x2e4c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C6Cu;
        // 0x2e4c70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c6c) {
            ctx->pc = 0x2E4C78u;
            goto label_2e4c78;
        }
    }
    ctx->pc = 0x2E4C74u;
    // 0x2e4c74: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2e4c78:
    // 0x2e4c78: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2e4c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e4c7c: 0x14a60012  bne         $a1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E4C7Cu;
    {
        const bool branch_taken_0x2e4c7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C7Cu;
        // 0x2e4c80: 0x30e24000  andi        $v0, $a3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c7c) {
            ctx->pc = 0x2E4CC8u;
            goto label_2e4cc8;
        }
    }
    ctx->pc = 0x2E4C84u;
    // 0x2e4c84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4C84u;
    {
        const bool branch_taken_0x2e4c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C84u;
        // 0x2e4c88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c84) {
            ctx->pc = 0x2E4C9Cu;
            goto label_2e4c9c;
        }
    }
    ctx->pc = 0x2E4C8Cu;
    // 0x2e4c8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e4c90: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2e4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2e4c94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4C94u;
    {
        const bool branch_taken_0x2e4c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C94u;
        // 0x2e4c98: 0xa4650412  sh          $a1, 0x412($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1042), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c94) {
            ctx->pc = 0x2E4CB4u;
            goto label_2e4cb4;
        }
    }
    ctx->pc = 0x2E4C9Cu;
label_2e4c9c:
    // 0x2e4c9c: 0x30e21000  andi        $v0, $a3, 0x1000
    ctx->pc = 0x2e4c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
    // 0x2e4ca0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4CA0u;
    {
        const bool branch_taken_0x2e4ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CA0u;
        // 0x2e4ca4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ca0) {
            ctx->pc = 0x2E4CC8u;
            goto label_2e4cc8;
        }
    }
    ctx->pc = 0x2E4CA8u;
    // 0x2e4ca8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e4ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e4cac: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2e4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2e4cb0: 0xa4600412  sh          $zero, 0x412($v1)
    ctx->pc = 0x2e4cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1042), (uint16_t)GPR_U32(ctx, 0));
label_2e4cb4:
    // 0x2e4cb4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x2e4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x2e4cb8: 0xc0d5312  jal         func_354C48
    ctx->pc = 0x2E4CB8u;
    SET_GPR_U32(ctx, 31, 0x2E4CC0u);
    ctx->pc = 0x2E4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CB8u;
    // 0x2e4cbc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C48u, 0x2E4CB8u, 0x2E4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CC0u;
label_2e4cc0:
    // 0x2e4cc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4CC0u;
    {
        const bool branch_taken_0x2e4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CC0u;
        // 0x2e4cc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cc0) {
            ctx->pc = 0x2E4CDCu;
            goto label_2e4cdc;
        }
    }
    ctx->pc = 0x2E4CC8u;
label_2e4cc8:
    // 0x2e4cc8: 0xc0d5016  jal         func_354058
    ctx->pc = 0x2E4CC8u;
    SET_GPR_U32(ctx, 31, 0x2E4CD0u);
    ctx->pc = 0x2E4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CC8u;
    // 0x2e4ccc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354058u, 0x2E4CC8u, 0x2E4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CD0u;
label_2e4cd0:
    // 0x2e4cd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4cd4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e4cd4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e4cd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e4cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e4cdc:
    // 0x2e4cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e4cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CE4u;
        // 0x2e4ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4CECu;
    // 0x2e4cec: 0x0  nop
    ctx->pc = 0x2e4cecu;
    // NOP
    ctx->pc = 0x2e4cf0u;
}
