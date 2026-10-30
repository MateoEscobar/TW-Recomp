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

// Function: sub_00417CA0
// Address: 0x417ca0 - 0x417df8
void sub_00417CA0_0x417ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417CA0_0x417ca0");
#endif

    switch (ctx->pc) {
        case 0x417cd8u: goto label_417cd8;
        case 0x417d1cu: goto label_417d1c;
        case 0x417d30u: goto label_417d30;
        case 0x417d4cu: goto label_417d4c;
        case 0x417d68u: goto label_417d68;
        case 0x417d9cu: goto label_417d9c;
        default: break;
    }

    ctx->pc = 0x417ca0u;

    // 0x417ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x417ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x417ca4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x417ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x417ca8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x417ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x417cac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x417cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417cb0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x417cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x417cb4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x417cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417cb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x417cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x417cbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x417cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417cc0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x417cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x417cc4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x417cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417cc8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x417cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x417ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417cd0: 0xc105f12  jal         func_417C48
    ctx->pc = 0x417CD0u;
    SET_GPR_U32(ctx, 31, 0x417CD8u);
    ctx->pc = 0x417CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417CD0u;
    // 0x417cd4: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417C48u, 0x417CD0u, 0x417CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417CD8u;
label_417cd8:
    // 0x417cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417cdc: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x417cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x417ce0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x417ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x417ce4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x417ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x417ce8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x417ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x417cec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x417cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x417cf0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x417CF0u;
    {
        const bool branch_taken_0x417cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x417CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417CF0u;
        // 0x417cf4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417cf0) {
            ctx->pc = 0x417DA8u;
            goto label_417da8;
        }
    }
    ctx->pc = 0x417CF8u;
    // 0x417cf8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x417cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x417cfc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x417cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x417d00: 0x2442aa10  addiu       $v0, $v0, -0x55F0
    ctx->pc = 0x417d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945296));
    // 0x417d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x417d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x417d08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x417d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x417d0c: 0x800008  jr          $a0
    ctx->pc = 0x417D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x417D14u: goto label_417d14;
            case 0x417D7Cu: goto label_417d7c;
            case 0x417D88u: goto label_417d88;
            case 0x417D90u: goto label_417d90;
            case 0x417DA4u: goto label_417da4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417D0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x417D14u;
label_417d14:
    // 0x417d14: 0xc08a61a  jal         func_229868
    ctx->pc = 0x417D14u;
    SET_GPR_U32(ctx, 31, 0x417D1Cu);
    ctx->pc = 0x417D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417D14u;
    // 0x417d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x417D14u, 0x417D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417D1Cu;
label_417d1c:
    // 0x417d1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x417d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417d20: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x417D20u;
    {
        const bool branch_taken_0x417d20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D20u;
        // 0x417d24: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d20) {
            ctx->pc = 0x417D74u;
            goto label_417d74;
        }
    }
    ctx->pc = 0x417D28u;
    // 0x417d28: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x417D28u;
    SET_GPR_U32(ctx, 31, 0x417D30u);
    ctx->pc = 0x417D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417D28u;
    // 0x417d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x417D28u, 0x417D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417D30u;
label_417d30:
    // 0x417d30: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x417d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x417d34: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x417D34u;
    {
        const bool branch_taken_0x417d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D34u;
        // 0x417d38: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d34) {
            ctx->pc = 0x417D74u;
            goto label_417d74;
        }
    }
    ctx->pc = 0x417D3Cu;
    // 0x417d3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x417d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x417d40: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x417d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x417d44: 0xc10904c  jal         func_424130
    ctx->pc = 0x417D44u;
    SET_GPR_U32(ctx, 31, 0x417D4Cu);
    ctx->pc = 0x417D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417D44u;
    // 0x417d48: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x417D44u, 0x417D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417D4Cu;
label_417d4c:
    // 0x417d4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x417D4Cu;
    {
        const bool branch_taken_0x417d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D4Cu;
        // 0x417d50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d4c) {
            ctx->pc = 0x417D74u;
            goto label_417d74;
        }
    }
    ctx->pc = 0x417D54u;
    // 0x417d54: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x417d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x417d58: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x417d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x417d5c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x417d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x417d60: 0xc107908  jal         func_41E420
    ctx->pc = 0x417D60u;
    SET_GPR_U32(ctx, 31, 0x417D68u);
    ctx->pc = 0x417D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417D60u;
    // 0x417d64: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x417D60u, 0x417D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417D68u;
label_417d68:
    // 0x417d68: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x417d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x417d6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x417d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x417d70: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x417d70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_417d74:
    // 0x417d74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x417D74u;
    {
        const bool branch_taken_0x417d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D74u;
        // 0x417d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d74) {
            ctx->pc = 0x417D94u;
            goto label_417d94;
        }
    }
    ctx->pc = 0x417D7Cu;
label_417d7c:
    // 0x417d7c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x417d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x417d80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x417D80u;
    {
        const bool branch_taken_0x417d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D80u;
        // 0x417d84: 0xae140014  sw          $s4, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d80) {
            ctx->pc = 0x417DA8u;
            goto label_417da8;
        }
    }
    ctx->pc = 0x417D88u;
label_417d88:
    // 0x417d88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x417D88u;
    {
        const bool branch_taken_0x417d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D88u;
        // 0x417d8c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d88) {
            ctx->pc = 0x417D94u;
            goto label_417d94;
        }
    }
    ctx->pc = 0x417D90u;
label_417d90:
    // 0x417d90: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x417d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_417d94:
    // 0x417d94: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x417D94u;
    SET_GPR_U32(ctx, 31, 0x417D9Cu);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x417D94u, 0x417D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417D9Cu;
label_417d9c:
    // 0x417d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x417D9Cu;
    {
        const bool branch_taken_0x417d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D9Cu;
        // 0x417da0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d9c) {
            ctx->pc = 0x417DA8u;
            goto label_417da8;
        }
    }
    ctx->pc = 0x417DA4u;
label_417da4:
    // 0x417da4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x417da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_417da8:
    // 0x417da8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x417da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x417dac: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x417dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x417db0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x417db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x417db4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x417DB4u;
    {
        const bool branch_taken_0x417db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417db4) {
            ctx->pc = 0x417DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417DB4u;
            // 0x417db8: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417DCCu;
            goto label_417dcc;
        }
    }
    ctx->pc = 0x417DBCu;
    // 0x417dbc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x417dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x417dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x417dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x417dc4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x417dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x417dc8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x417dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_417dcc:
    // 0x417dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417dd0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x417dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x417dd4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x417dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x417dd8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x417dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x417ddc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x417ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x417de0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x417de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417de4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x417de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417dec: 0x3e00008  jr          $ra
    ctx->pc = 0x417DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DECu;
        // 0x417df0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417DF4u;
    // 0x417df4: 0x0  nop
    ctx->pc = 0x417df4u;
    // NOP
    ctx->pc = 0x417df8u;
}
