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

// Function: sub_0041E9D8
// Address: 0x41e9d8 - 0x41ec60
void sub_0041E9D8_0x41e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E9D8_0x41e9d8");
#endif

    switch (ctx->pc) {
        case 0x41ea54u: goto label_41ea54;
        case 0x41ec20u: goto label_41ec20;
        default: break;
    }

    ctx->pc = 0x41e9d8u;

    // 0x41e9d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41e9dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x41e9e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x41e9e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41e9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e9e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x41e9ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41e9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e9f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x41e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x41e9f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41e9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e9f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x41e9fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x41e9fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea00: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x41ea00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41ea04: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x41EA04u;
    {
        const bool branch_taken_0x41ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA04u;
        // 0x41ea08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea04) {
            ctx->pc = 0x41EC40u;
            goto label_41ec40;
        }
    }
    ctx->pc = 0x41EA0Cu;
    // 0x41ea0c: 0x600008c  bltz        $s0, . + 4 + (0x8C << 2)
    ctx->pc = 0x41EA0Cu;
    {
        const bool branch_taken_0x41ea0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x41EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA0Cu;
        // 0x41ea10: 0x2a020017  slti        $v0, $s0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea0c) {
            ctx->pc = 0x41EC40u;
            goto label_41ec40;
        }
    }
    ctx->pc = 0x41EA14u;
    // 0x41ea14: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x41EA14u;
    {
        const bool branch_taken_0x41ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA14u;
        // 0x41ea18: 0x240303f4  addiu       $v1, $zero, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea14) {
            ctx->pc = 0x41EC40u;
            goto label_41ec40;
        }
    }
    ctx->pc = 0x41EA1Cu;
    // 0x41ea1c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x41ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x41ea20: 0x2232018  mult        $a0, $s1, $v1
    ctx->pc = 0x41ea20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x41ea24: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x41ea24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41ea28: 0x939021  addu        $s2, $a0, $s3
    ctx->pc = 0x41ea28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x41ea2c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x41ea30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x41ea34: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x41EA34u;
    {
        const bool branch_taken_0x41ea34 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x41EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA34u;
        // 0x41ea38: 0xac540020  sw          $s4, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea34) {
            ctx->pc = 0x41EA40u;
            goto label_41ea40;
        }
    }
    ctx->pc = 0x41EA3Cu;
    // 0x41ea3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x41ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_41ea40:
    // 0x41ea40: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x41ea44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x41ea48: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x41ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x41ea4c: 0xc10904c  jal         func_424130
    ctx->pc = 0x41EA4Cu;
    SET_GPR_U32(ctx, 31, 0x41EA54u);
    ctx->pc = 0x41EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA4Cu;
    // 0x41ea50: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x41EA4Cu, 0x41EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA54u;
label_41ea54:
    // 0x41ea54: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x41EA54u;
    {
        const bool branch_taken_0x41ea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA54u;
        // 0x41ea58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea54) {
            ctx->pc = 0x41EAE4u;
            goto label_41eae4;
        }
    }
    ctx->pc = 0x41EA5Cu;
    // 0x41ea5c: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x41EA5Cu;
    {
        const bool branch_taken_0x41ea5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x41ea5c) {
            ctx->pc = 0x41EA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41EA5Cu;
            // 0x41ea60: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41EAE8u;
            goto label_41eae8;
        }
    }
    ctx->pc = 0x41EA64u;
    // 0x41ea64: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x41ea68: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x41ea68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x41ea6c: 0x2443b300  addiu       $v1, $v0, -0x4D00
    ctx->pc = 0x41ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x41ea70: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x41ea70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea74: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x41ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x58B308u));
    // 0x41ea78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x41ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58B30Cu));
    // 0x41ea7c: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x41ea7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x41ea80: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41EA80u;
    {
        const bool branch_taken_0x41ea80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA80u;
        // 0x41ea84: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea80) {
            ctx->pc = 0x41EA9Cu;
            goto label_41ea9c;
        }
    }
    ctx->pc = 0x41EA88u;
    // 0x41ea88: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x41ea88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41ea8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41EA8Cu;
    {
        const bool branch_taken_0x41ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA8Cu;
        // 0x41ea90: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea8c) {
            ctx->pc = 0x41EAA8u;
            goto label_41eaa8;
        }
    }
    ctx->pc = 0x41EA94u;
    // 0x41ea94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x41EA94u;
    {
        const bool branch_taken_0x41ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA94u;
        // 0x41ea98: 0x2522b300  addiu       $v0, $t1, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea94) {
            ctx->pc = 0x41EAD0u;
            goto label_41ead0;
        }
    }
    ctx->pc = 0x41EA9Cu;
label_41ea9c:
    // 0x41ea9c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x41ea9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41eaa0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41EAA0u;
    {
        const bool branch_taken_0x41eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EAA0u;
        // 0x41eaa4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eaa0) {
            ctx->pc = 0x41EACCu;
            goto label_41eacc;
        }
    }
    ctx->pc = 0x41EAA8u;
label_41eaa8:
    // 0x41eaa8: 0x240303f4  addiu       $v1, $zero, 0x3F4
    ctx->pc = 0x41eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41eaac: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x41eaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41eab0: 0x2524b300  addiu       $a0, $t1, -0x4D00
    ctx->pc = 0x41eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
    // 0x41eab4: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x41eab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41eab8: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x41eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41eabc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x41eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x41eac0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x41eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x41eac4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x41EAC4u;
    {
        const bool branch_taken_0x41eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EAC4u;
        // 0x41eac8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eac4) {
            ctx->pc = 0x41EB78u;
            goto label_41eb78;
        }
    }
    ctx->pc = 0x41EACCu;
label_41eacc:
    // 0x41eacc: 0x2522b300  addiu       $v0, $t1, -0x4D00
    ctx->pc = 0x41eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
label_41ead0:
    // 0x41ead0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x41ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x41ead4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41ead8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x41eadc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x41EADCu;
    {
        const bool branch_taken_0x41eadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EADCu;
        // 0x41eae0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eadc) {
            ctx->pc = 0x41EBA0u;
            goto label_41eba0;
        }
    }
    ctx->pc = 0x41EAE4u;
label_41eae4:
    // 0x41eae4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x41eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_41eae8:
    // 0x41eae8: 0x240303f4  addiu       $v1, $zero, 0x3F4
    ctx->pc = 0x41eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41eaec: 0x2024018  mult        $t0, $s0, $v0
    ctx->pc = 0x41eaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x41eaf0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x41eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x41eaf4: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x41eaf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41eaf8: 0x2485b300  addiu       $a1, $a0, -0x4D00
    ctx->pc = 0x41eaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947584));
    // 0x41eafc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x41eafcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eb00: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x41eb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41eb04: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x41eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x41eb08: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x41eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x41eb0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41eb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eb10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x41eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x41eb14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41eb18: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x41eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x41eb1c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x41eb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41eb20: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x41EB20u;
    {
        const bool branch_taken_0x41eb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41eb20) {
            ctx->pc = 0x41EB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41EB20u;
            // 0x41eb24: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41EB4Cu;
            goto label_41eb4c;
        }
    }
    ctx->pc = 0x41EB28u;
    // 0x41eb28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x41eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eb2c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x41eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x41eb30: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x41eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x41eb34: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x41eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x41eb38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x41eb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x41eb3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41EB3Cu;
    {
        const bool branch_taken_0x41eb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB3Cu;
        // 0x41eb40: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eb3c) {
            ctx->pc = 0x41EB5Cu;
            goto label_41eb5c;
        }
    }
    ctx->pc = 0x41EB44u;
    // 0x41eb44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x41EB44u;
    {
        const bool branch_taken_0x41eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB44u;
        // 0x41eb48: 0x2522b300  addiu       $v0, $t1, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eb44) {
            ctx->pc = 0x41EB98u;
            goto label_41eb98;
        }
    }
    ctx->pc = 0x41EB4Cu;
label_41eb4c:
    // 0x41eb4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x41eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x41eb50: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x41eb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41eb54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x41EB54u;
    {
        const bool branch_taken_0x41eb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB54u;
        // 0x41eb58: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eb54) {
            ctx->pc = 0x41EB94u;
            goto label_41eb94;
        }
    }
    ctx->pc = 0x41EB5Cu;
label_41eb5c:
    // 0x41eb5c: 0x240303f4  addiu       $v1, $zero, 0x3F4
    ctx->pc = 0x41eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41eb60: 0x2023818  mult        $a3, $s0, $v0
    ctx->pc = 0x41eb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x41eb64: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x41eb64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41eb68: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x41eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41eb6c: 0x2522b300  addiu       $v0, $t1, -0x4D00
    ctx->pc = 0x41eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
    // 0x41eb70: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x41eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x41eb74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x41eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_41eb78:
    // 0x41eb78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41eb7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x41eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x41eb80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x41eb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41eb84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41EB84u;
    {
        const bool branch_taken_0x41eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB84u;
        // 0x41eb88: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eb84) {
            ctx->pc = 0x41EBA0u;
            goto label_41eba0;
        }
    }
    ctx->pc = 0x41EB8Cu;
    // 0x41eb8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x41EB8Cu;
    {
        const bool branch_taken_0x41eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB8Cu;
        // 0x41eb90: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eb8c) {
            ctx->pc = 0x41EBA0u;
            goto label_41eba0;
        }
    }
    ctx->pc = 0x41EB94u;
label_41eb94:
    // 0x41eb94: 0x2522b300  addiu       $v0, $t1, -0x4D00
    ctx->pc = 0x41eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
label_41eb98:
    // 0x41eb98: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x41eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x41eb9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41eba0:
    // 0x41eba0: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x41eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41eba4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x41eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x41eba8: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x41eba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x41ebac: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x41ebacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41ebb0: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x41ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x41ebb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41ebb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x41ebbc: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x41EBBCu;
    {
        const bool branch_taken_0x41ebbc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x41EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBBCu;
        // 0x41ebc0: 0xac440020  sw          $a0, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ebbc) {
            ctx->pc = 0x41EBC8u;
            goto label_41ebc8;
        }
    }
    ctx->pc = 0x41EBC4u;
    // 0x41ebc4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x41ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_41ebc8:
    // 0x41ebc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x41ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x41ebcc: 0x1602001d  bne         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x41EBCCu;
    {
        const bool branch_taken_0x41ebcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x41EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBCCu;
        // 0x41ebd0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ebcc) {
            ctx->pc = 0x41EC44u;
            goto label_41ec44;
        }
    }
    ctx->pc = 0x41EBD4u;
    // 0x41ebd4: 0x1a80001a  blez        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x41EBD4u;
    {
        const bool branch_taken_0x41ebd4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBD4u;
        // 0x41ebd8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ebd4) {
            ctx->pc = 0x41EC40u;
            goto label_41ec40;
        }
    }
    ctx->pc = 0x41EBDCu;
    // 0x41ebdc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x41ebdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x41ebe0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x41ebe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x41ebe4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x41ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x41ebe8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x41ebe8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x41ebec: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x41ebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x41ebf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41EBF0u;
    {
        const bool branch_taken_0x41ebf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBF0u;
        // 0x41ebf4: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ebf0) {
            ctx->pc = 0x41EC00u;
            goto label_41ec00;
        }
    }
    ctx->pc = 0x41EBF8u;
    // 0x41ebf8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x41EBF8u;
    {
        const bool branch_taken_0x41ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBF8u;
        // 0x41ebfc: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ebf8) {
            ctx->pc = 0x41EC40u;
            goto label_41ec40;
        }
    }
    ctx->pc = 0x41EC00u;
label_41ec00:
    // 0x41ec00: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x41ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x41ec04: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x41ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x41ec08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x41ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x41ec0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41EC0Cu;
    {
        const bool branch_taken_0x41ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC0Cu;
        // 0x41ec10: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ec0c) {
            ctx->pc = 0x41EC40u;
            goto label_41ec40;
        }
    }
    ctx->pc = 0x41EC14u;
    // 0x41ec14: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x41ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x41ec18: 0xc0739c6  jal         func_1CE718
    ctx->pc = 0x41EC18u;
    SET_GPR_U32(ctx, 31, 0x41EC20u);
    ctx->pc = 0x41EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EC18u;
    // 0x41ec1c: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x41EC18u, 0x41EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EC20u;
label_41ec20:
    // 0x41ec20: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x41ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x41ec24: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x41ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x41ec28: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x41ec28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x41ec2c: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x41ec2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x41ec30: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x41ec30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41ec34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x41ec38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x41ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x41ec3c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x41ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_41ec40:
    // 0x41ec40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41ec40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41ec44:
    // 0x41ec44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41ec44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41ec48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41ec48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41ec4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41ec4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41ec50: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x41ec50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41ec54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x41EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC58u;
        // 0x41ec5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EC60u;
}
