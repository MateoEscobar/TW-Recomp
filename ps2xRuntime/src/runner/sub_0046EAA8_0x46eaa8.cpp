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

// Function: sub_0046EAA8
// Address: 0x46eaa8 - 0x46eeb0
void sub_0046EAA8_0x46eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EAA8_0x46eaa8");
#endif

    switch (ctx->pc) {
        case 0x46eb00u: goto label_46eb00;
        case 0x46eb84u: goto label_46eb84;
        default: break;
    }

    ctx->pc = 0x46eaa8u;

    // 0x46eaa8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46eaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x46eaac: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x46eaacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eab0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x46eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x46eab4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x46eab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x46eab8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x46eab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eabc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x46eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x46eac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46eac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eac4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x46eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x46eac8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x46eac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eacc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x46eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x46ead0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x46ead0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ead4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x46ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x46ead8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x46eadc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x46eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x46eae0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x46eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x46eae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46eae8: 0x120000e4  beqz        $s0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x46EAE8u;
    {
        const bool branch_taken_0x46eae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EAE8u;
        // 0x46eaec: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eae8) {
            ctx->pc = 0x46EE7Cu;
            goto label_46ee7c;
        }
    }
    ctx->pc = 0x46EAF0u;
    // 0x46eaf0: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x46eaf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x46eaf4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x46eaf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46eaf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46eaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eafc: 0x0  nop
    ctx->pc = 0x46eafcu;
    // NOP
label_46eb00:
    // 0x46eb00: 0x29960004  slti        $s6, $t4, 0x4
    ctx->pc = 0x46eb00u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x46eb04: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x46EB04u;
    {
        const bool branch_taken_0x46eb04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EB04u;
        // 0x46eb08: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb04) {
            ctx->pc = 0x46EB38u;
            goto label_46eb38;
        }
    }
    ctx->pc = 0x46EB0Cu;
    // 0x46eb0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46eb10: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x46EB10u;
    {
        const bool branch_taken_0x46eb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb10) {
            ctx->pc = 0x46EB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EB10u;
            // 0x46eb14: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EB28u;
            goto label_46eb28;
        }
    }
    ctx->pc = 0x46EB18u;
    // 0x46eb18: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x46eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x46eb1c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x46EB1Cu;
    {
        const bool branch_taken_0x46eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb1c) {
            ctx->pc = 0x46EB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EB1Cu;
            // 0x46eb20: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EB6Cu;
            goto label_46eb6c;
        }
    }
    ctx->pc = 0x46EB24u;
    // 0x46eb24: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46eb28:
    // 0x46eb28: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x46EB28u;
    {
        const bool branch_taken_0x46eb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb28) {
            ctx->pc = 0x46EB6Cu;
            goto label_46eb6c;
        }
    }
    ctx->pc = 0x46EB30u;
    // 0x46eb30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x46EB30u;
    {
        const bool branch_taken_0x46eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EB30u;
        // 0x46eb34: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb30) {
            ctx->pc = 0x46EB64u;
            goto label_46eb64;
        }
    }
    ctx->pc = 0x46EB38u;
label_46eb38:
    // 0x46eb38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46eb3c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x46EB3Cu;
    {
        const bool branch_taken_0x46eb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb3c) {
            ctx->pc = 0x46EB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EB3Cu;
            // 0x46eb40: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EB58u;
            goto label_46eb58;
        }
    }
    ctx->pc = 0x46EB44u;
    // 0x46eb44: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x46eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x46eb48: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x46EB48u;
    {
        const bool branch_taken_0x46eb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46eb48) {
            ctx->pc = 0x46EB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EB48u;
            // 0x46eb4c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EB58u;
            goto label_46eb58;
        }
    }
    ctx->pc = 0x46EB50u;
    // 0x46eb50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x46EB50u;
    {
        const bool branch_taken_0x46eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EB50u;
        // 0x46eb54: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb50) {
            ctx->pc = 0x46EB6Cu;
            goto label_46eb6c;
        }
    }
    ctx->pc = 0x46EB58u;
label_46eb58:
    // 0x46eb58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EB58u;
    {
        const bool branch_taken_0x46eb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb58) {
            ctx->pc = 0x46EB6Cu;
            goto label_46eb6c;
        }
    }
    ctx->pc = 0x46EB60u;
    // 0x46eb60: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x46eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_46eb64:
    // 0x46eb64: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x46eb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eb68: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x46eb68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_46eb6c:
    // 0x46eb6c: 0x122000c3  beqz        $s1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x46EB6Cu;
    {
        const bool branch_taken_0x46eb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EB6Cu;
        // 0x46eb70: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb6c) {
            ctx->pc = 0x46EE7Cu;
            goto label_46ee7c;
        }
    }
    ctx->pc = 0x46EB74u;
    // 0x46eb74: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x46eb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eb78: 0x7fac0010  sq          $t4, 0x10($sp)
    ctx->pc = 0x46eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
    // 0x46eb7c: 0xc11ba44  jal         func_46E910
    ctx->pc = 0x46EB7Cu;
    SET_GPR_U32(ctx, 31, 0x46EB84u);
    ctx->pc = 0x46EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46EB7Cu;
    // 0x46eb80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E910u, 0x46EB7Cu, 0x46EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EB84u;
label_46eb84:
    // 0x46eb84: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x46eb84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x46eb88: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x46eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x46eb8c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46EB8Cu;
    {
        const bool branch_taken_0x46eb8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x46EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EB8Cu;
        // 0x46eb90: 0x7bac0010  lq          $t4, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb8c) {
            ctx->pc = 0x46EB9Cu;
            goto label_46eb9c;
        }
    }
    ctx->pc = 0x46EB94u;
    // 0x46eb94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x46EB94u;
    {
        const bool branch_taken_0x46eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EB94u;
        // 0x46eb98: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb94) {
            ctx->pc = 0x46EBBCu;
            goto label_46ebbc;
        }
    }
    ctx->pc = 0x46EB9Cu;
label_46eb9c:
    // 0x46eb9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x46eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x46eba0: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46EBA0u;
    {
        const bool branch_taken_0x46eba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x46eba0) {
            ctx->pc = 0x46EBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EBA0u;
            // 0x46eba4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EBB0u;
            goto label_46ebb0;
        }
    }
    ctx->pc = 0x46EBA8u;
    // 0x46eba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x46EBA8u;
    {
        const bool branch_taken_0x46eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EBA8u;
        // 0x46ebac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eba8) {
            ctx->pc = 0x46EBBCu;
            goto label_46ebbc;
        }
    }
    ctx->pc = 0x46EBB0u;
label_46ebb0:
    // 0x46ebb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x46ebb4: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x46ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x46ebb8: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x46ebb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_46ebbc:
    // 0x46ebbc: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x46ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x46ebc0: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x46EBC0u;
    {
        const bool branch_taken_0x46ebc0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ebc0) {
            ctx->pc = 0x46EBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EBC0u;
            // 0x46ebc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EBC8u;
            goto label_46ebc8;
        }
    }
    ctx->pc = 0x46EBC8u;
label_46ebc8:
    // 0x46ebc8: 0x77001a  div         $zero, $v1, $s7
    ctx->pc = 0x46ebc8u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x46ebcc: 0x1010  mfhi        $v0
    ctx->pc = 0x46ebccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x46ebd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ebd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x46ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x46ebd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46ebdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46ebe0: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46EBE0u;
    {
        const bool branch_taken_0x46ebe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x46ebe0) {
            ctx->pc = 0x46EBF8u;
            goto label_46ebf8;
        }
    }
    ctx->pc = 0x46EBE8u;
    // 0x46ebe8: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x46EBE8u;
    {
        const bool branch_taken_0x46ebe8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ebe8) {
            ctx->pc = 0x46EBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EBE8u;
            // 0x46ebec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EBF0u;
            goto label_46ebf0;
        }
    }
    ctx->pc = 0x46EBF0u;
label_46ebf0:
    // 0x46ebf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x46EBF0u;
    {
        const bool branch_taken_0x46ebf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EBF0u;
        // 0x46ebf4: 0x94470002  lhu         $a3, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ebf0) {
            ctx->pc = 0x46EC04u;
            goto label_46ec04;
        }
    }
    ctx->pc = 0x46EBF8u;
label_46ebf8:
    // 0x46ebf8: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x46EBF8u;
    {
        const bool branch_taken_0x46ebf8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ebf8) {
            ctx->pc = 0x46EBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EBF8u;
            // 0x46ebfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EC00u;
            goto label_46ec00;
        }
    }
    ctx->pc = 0x46EC00u;
label_46ec00:
    // 0x46ec00: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x46ec00u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46ec04:
    // 0x46ec04: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x46ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x46ec08: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x46ec08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ec0c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x46ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x46ec10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x46ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x46ec14: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x46ec14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ec18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x46ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x46ec1c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x46ec1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ec20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x46ec24: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x46ec24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46ec28: 0x9445fffe  lhu         $a1, -0x2($v0)
    ctx->pc = 0x46ec28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x46ec2c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EC2Cu;
    {
        const bool branch_taken_0x46ec2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x46EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC2Cu;
        // 0x46ec30: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec2c) {
            ctx->pc = 0x46EC40u;
            goto label_46ec40;
        }
    }
    ctx->pc = 0x46EC34u;
    // 0x46ec34: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x46ec34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x46ec38: 0x10470020  beq         $v0, $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x46EC38u;
    {
        const bool branch_taken_0x46ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x46EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC38u;
        // 0x46ec3c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec38) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46EC40u;
label_46ec40:
    // 0x46ec40: 0x54670006  bnel        $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x46EC40u;
    {
        const bool branch_taken_0x46ec40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x46ec40) {
            ctx->pc = 0x46EC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EC40u;
            // 0x46ec44: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EC5Cu;
            goto label_46ec5c;
        }
    }
    ctx->pc = 0x46EC48u;
    // 0x46ec48: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x46ec48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x46ec4c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46EC4Cu;
    {
        const bool branch_taken_0x46ec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x46ec4c) {
            ctx->pc = 0x46EC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EC4Cu;
            // 0x46ec50: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EC5Cu;
            goto label_46ec5c;
        }
    }
    ctx->pc = 0x46EC54u;
    // 0x46ec54: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x46EC54u;
    {
        const bool branch_taken_0x46ec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC54u;
        // 0x46ec58: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec54) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46EC5Cu;
label_46ec5c:
    // 0x46ec5c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46ec5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46ec60: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EC60u;
    {
        const bool branch_taken_0x46ec60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x46EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC60u;
        // 0x46ec64: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec60) {
            ctx->pc = 0x46EC74u;
            goto label_46ec74;
        }
    }
    ctx->pc = 0x46EC68u;
    // 0x46ec68: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x46ec68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x46ec6c: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x46EC6Cu;
    {
        const bool branch_taken_0x46ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x46EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC6Cu;
        // 0x46ec70: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec6c) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46EC74u;
label_46ec74:
    // 0x46ec74: 0x54870005  bnel        $a0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x46EC74u;
    {
        const bool branch_taken_0x46ec74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x46ec74) {
            ctx->pc = 0x46EC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EC74u;
            // 0x46ec78: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EC8Cu;
            goto label_46ec8c;
        }
    }
    ctx->pc = 0x46EC7Cu;
    // 0x46ec7c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x46ec7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x46ec80: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x46EC80u;
    {
        const bool branch_taken_0x46ec80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x46EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC80u;
        // 0x46ec84: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec80) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46EC88u;
    // 0x46ec88: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x46ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46ec8c:
    // 0x46ec8c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46ec8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46ec90: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EC90u;
    {
        const bool branch_taken_0x46ec90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x46EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC90u;
        // 0x46ec94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec90) {
            ctx->pc = 0x46ECA4u;
            goto label_46eca4;
        }
    }
    ctx->pc = 0x46EC98u;
    // 0x46ec98: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x46ec98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x46ec9c: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x46EC9Cu;
    {
        const bool branch_taken_0x46ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x46ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EC9Cu;
        // 0x46eca0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec9c) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46ECA4u;
label_46eca4:
    // 0x46eca4: 0x14870005  bne         $a0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x46ECA4u;
    {
        const bool branch_taken_0x46eca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x46ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECA4u;
        // 0x46eca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eca4) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46ECACu;
    // 0x46ecac: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x46ecacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x46ecb0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x46ECB0u;
    {
        const bool branch_taken_0x46ecb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x46ecb0) {
            ctx->pc = 0x46ECBCu;
            goto label_46ecbc;
        }
    }
    ctx->pc = 0x46ECB8u;
    // 0x46ecb8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x46ecb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46ecbc:
    // 0x46ecbc: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x46ECBCu;
    {
        const bool branch_taken_0x46ecbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECBCu;
        // 0x46ecc0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ecbc) {
            ctx->pc = 0x46ECF8u;
            goto label_46ecf8;
        }
    }
    ctx->pc = 0x46ECC4u;
    // 0x46ecc4: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x46ECC4u;
    {
        const bool branch_taken_0x46ecc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECC4u;
        // 0x46ecc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ecc4) {
            ctx->pc = 0x46ED3Cu;
            goto label_46ed3c;
        }
    }
    ctx->pc = 0x46ECCCu;
    // 0x46eccc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46ecd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46ECD0u;
    {
        const bool branch_taken_0x46ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECD0u;
        // 0x46ecd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ecd0) {
            ctx->pc = 0x46ECE4u;
            goto label_46ece4;
        }
    }
    ctx->pc = 0x46ECD8u;
    // 0x46ecd8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x46ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x46ecdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46ecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ece0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46ece0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46ece4:
    // 0x46ece4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x46ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x46ece8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x46ECE8u;
    {
        const bool branch_taken_0x46ece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECE8u;
        // 0x46ecec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ece8) {
            ctx->pc = 0x46ED30u;
            goto label_46ed30;
        }
    }
    ctx->pc = 0x46ECF0u;
    // 0x46ecf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x46ECF0u;
    {
        const bool branch_taken_0x46ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECF0u;
        // 0x46ecf4: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ecf0) {
            ctx->pc = 0x46ED28u;
            goto label_46ed28;
        }
    }
    ctx->pc = 0x46ECF8u;
label_46ecf8:
    // 0x46ecf8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x46ECF8u;
    {
        const bool branch_taken_0x46ecf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ECF8u;
        // 0x46ecfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ecf8) {
            ctx->pc = 0x46ED3Cu;
            goto label_46ed3c;
        }
    }
    ctx->pc = 0x46ED00u;
    // 0x46ed00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46ed04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46ED04u;
    {
        const bool branch_taken_0x46ed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED04u;
        // 0x46ed08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed04) {
            ctx->pc = 0x46ED18u;
            goto label_46ed18;
        }
    }
    ctx->pc = 0x46ED0Cu;
    // 0x46ed0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x46ed10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed14: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46ed14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46ed18:
    // 0x46ed18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x46ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x46ed1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46ED1Cu;
    {
        const bool branch_taken_0x46ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED1Cu;
        // 0x46ed20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed1c) {
            ctx->pc = 0x46ED30u;
            goto label_46ed30;
        }
    }
    ctx->pc = 0x46ED24u;
    // 0x46ed24: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46ed28:
    // 0x46ed28: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x46ed28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed2c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46ed2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46ed30:
    // 0x46ed30: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46ed34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x46ED34u;
    {
        const bool branch_taken_0x46ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ed34) {
            ctx->pc = 0x46ED40u;
            goto label_46ed40;
        }
    }
    ctx->pc = 0x46ED3Cu;
label_46ed3c:
    // 0x46ed3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ed40:
    // 0x46ed40: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x46ED40u;
    {
        const bool branch_taken_0x46ed40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED40u;
        // 0x46ed44: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed40) {
            ctx->pc = 0x46EE60u;
            goto label_46ee60;
        }
    }
    ctx->pc = 0x46ED48u;
    // 0x46ed48: 0x51090005  beql        $t0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46ED48u;
    {
        const bool branch_taken_0x46ed48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        if (branch_taken_0x46ed48) {
            ctx->pc = 0x46ED4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46ED48u;
            // 0x46ed4c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46ED60u;
            goto label_46ed60;
        }
    }
    ctx->pc = 0x46ED50u;
    // 0x46ed50: 0x51060003  beql        $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x46ED50u;
    {
        const bool branch_taken_0x46ed50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x46ed50) {
            ctx->pc = 0x46ED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46ED50u;
            // 0x46ed54: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46ED60u;
            goto label_46ed60;
        }
    }
    ctx->pc = 0x46ED58u;
    // 0x46ed58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46ED58u;
    {
        const bool branch_taken_0x46ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED58u;
        // 0x46ed5c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed58) {
            ctx->pc = 0x46ED84u;
            goto label_46ed84;
        }
    }
    ctx->pc = 0x46ED60u;
label_46ed60:
    // 0x46ed60: 0x50490005  beql        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46ED60u;
    {
        const bool branch_taken_0x46ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x46ed60) {
            ctx->pc = 0x46ED64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46ED60u;
            // 0x46ed64: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46ED78u;
            goto label_46ed78;
        }
    }
    ctx->pc = 0x46ED68u;
    // 0x46ed68: 0x50460003  beql        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x46ED68u;
    {
        const bool branch_taken_0x46ed68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x46ed68) {
            ctx->pc = 0x46ED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46ED68u;
            // 0x46ed6c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46ED78u;
            goto label_46ed78;
        }
    }
    ctx->pc = 0x46ED70u;
    // 0x46ed70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x46ED70u;
    {
        const bool branch_taken_0x46ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED70u;
        // 0x46ed74: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed70) {
            ctx->pc = 0x46ED84u;
            goto label_46ed84;
        }
    }
    ctx->pc = 0x46ED78u;
label_46ed78:
    // 0x46ed78: 0x10890002  beq         $a0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x46ED78u;
    {
        const bool branch_taken_0x46ed78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x46ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED78u;
        // 0x46ed7c: 0x861026  xor         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed78) {
            ctx->pc = 0x46ED84u;
            goto label_46ed84;
        }
    }
    ctx->pc = 0x46ED80u;
    // 0x46ed80: 0x82a00b  movn        $s4, $a0, $v0
    ctx->pc = 0x46ed80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
label_46ed84:
    // 0x46ed84: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x46ED84u;
    {
        const bool branch_taken_0x46ed84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ed84) {
            ctx->pc = 0x46EDC0u;
            goto label_46edc0;
        }
    }
    ctx->pc = 0x46ED8Cu;
    // 0x46ed8c: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x46ED8Cu;
    {
        const bool branch_taken_0x46ed8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED8Cu;
        // 0x46ed90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed8c) {
            ctx->pc = 0x46EE04u;
            goto label_46ee04;
        }
    }
    ctx->pc = 0x46ED94u;
    // 0x46ed94: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x46ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x46ed98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46ED98u;
    {
        const bool branch_taken_0x46ed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ED98u;
        // 0x46ed9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed98) {
            ctx->pc = 0x46EDACu;
            goto label_46edac;
        }
    }
    ctx->pc = 0x46EDA0u;
    // 0x46eda0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x46eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x46eda4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46eda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eda8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46eda8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46edac:
    // 0x46edac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x46edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x46edb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x46EDB0u;
    {
        const bool branch_taken_0x46edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EDB0u;
        // 0x46edb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46edb0) {
            ctx->pc = 0x46EDF8u;
            goto label_46edf8;
        }
    }
    ctx->pc = 0x46EDB8u;
    // 0x46edb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x46EDB8u;
    {
        const bool branch_taken_0x46edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EDB8u;
        // 0x46edbc: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46edb8) {
            ctx->pc = 0x46EDF0u;
            goto label_46edf0;
        }
    }
    ctx->pc = 0x46EDC0u;
label_46edc0:
    // 0x46edc0: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x46EDC0u;
    {
        const bool branch_taken_0x46edc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EDC0u;
        // 0x46edc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46edc0) {
            ctx->pc = 0x46EE04u;
            goto label_46ee04;
        }
    }
    ctx->pc = 0x46EDC8u;
    // 0x46edc8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x46edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x46edcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EDCCu;
    {
        const bool branch_taken_0x46edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EDCCu;
        // 0x46edd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46edcc) {
            ctx->pc = 0x46EDE0u;
            goto label_46ede0;
        }
    }
    ctx->pc = 0x46EDD4u;
    // 0x46edd4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x46edd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eddc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46eddcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46ede0:
    // 0x46ede0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x46ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x46ede4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EDE4u;
    {
        const bool branch_taken_0x46ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EDE4u;
        // 0x46ede8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ede4) {
            ctx->pc = 0x46EDF8u;
            goto label_46edf8;
        }
    }
    ctx->pc = 0x46EDECu;
    // 0x46edec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46edf0:
    // 0x46edf0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x46edf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46edf4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46edf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46edf8:
    // 0x46edf8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46edfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46edfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ee00: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x46ee00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_46ee04:
    // 0x46ee04: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x46EE04u;
    {
        const bool branch_taken_0x46ee04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EE04u;
        // 0x46ee08: 0x31420001  andi        $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ee04) {
            ctx->pc = 0x46EE40u;
            goto label_46ee40;
        }
    }
    ctx->pc = 0x46EE0Cu;
    // 0x46ee0c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x46EE0Cu;
    {
        const bool branch_taken_0x46ee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EE0Cu;
        // 0x46ee10: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ee0c) {
            ctx->pc = 0x46EE44u;
            goto label_46ee44;
        }
    }
    ctx->pc = 0x46EE14u;
    // 0x46ee14: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x46ee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ee18: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x46ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x46ee1c: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x46ee1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x46ee20: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x46ee20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x46ee24: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x46ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x46ee28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x46ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x46ee2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x46ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x46ee30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x46ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x46ee34: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x46ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x46ee38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x46EE38u;
    {
        const bool branch_taken_0x46ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EE38u;
        // 0x46ee3c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ee38) {
            ctx->pc = 0x46EE4Cu;
            goto label_46ee4c;
        }
    }
    ctx->pc = 0x46EE40u;
label_46ee40:
    // 0x46ee40: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x46ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_46ee44:
    // 0x46ee44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46ee44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ee48: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x46ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_46ee4c:
    // 0x46ee4c: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x46ee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x46ee50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x46ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x46ee54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46ee58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x46EE58u;
    {
        const bool branch_taken_0x46ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EE58u;
        // 0x46ee5c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ee58) {
            ctx->pc = 0x46EE74u;
            goto label_46ee74;
        }
    }
    ctx->pc = 0x46EE60u;
label_46ee60:
    // 0x46ee60: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x46ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x46ee64: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x46ee64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x46ee68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x46ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x46ee6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46ee70: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x46ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_46ee74:
    // 0x46ee74: 0x1600ff22  bnez        $s0, . + 4 + (-0xDE << 2)
    ctx->pc = 0x46EE74u;
    {
        const bool branch_taken_0x46ee74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EE74u;
        // 0x46ee78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ee74) {
            ctx->pc = 0x46EB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46eb00;
        }
    }
    ctx->pc = 0x46EE7Cu;
label_46ee7c:
    // 0x46ee7c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x46ee7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ee80: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x46ee80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46ee84: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x46ee84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46ee88: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x46ee88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46ee8c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x46ee8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x46ee90: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x46ee90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ee94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x46ee94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ee98: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x46ee98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ee9c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x46ee9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46eea0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x46eea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46eea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46eea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46eea8: 0x3e00008  jr          $ra
    ctx->pc = 0x46EEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EEA8u;
        // 0x46eeac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46EEB0u;
}
