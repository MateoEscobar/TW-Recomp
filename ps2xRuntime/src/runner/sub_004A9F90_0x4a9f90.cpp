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

// Function: sub_004A9F90
// Address: 0x4a9f90 - 0x4aa0e0
void sub_004A9F90_0x4a9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9F90_0x4a9f90");
#endif

    switch (ctx->pc) {
        case 0x4aa020u: goto label_4aa020;
        case 0x4aa06cu: goto label_4aa06c;
        default: break;
    }

    ctx->pc = 0x4a9f90u;

    // 0x4a9f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a9f94: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a9f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a9f98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a9f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a9f9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a9f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9fa0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a9fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a9fa4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a9fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a9fa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a9fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a9fac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a9facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4a9fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9fb4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4a9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a9fb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9fbc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4a9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4a9fc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a9fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a9fc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a9fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9fcc: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x4A9FCCu;
    {
        const bool branch_taken_0x4a9fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FCCu;
        // 0x4a9fd0: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9fcc) {
            ctx->pc = 0x4AA0B4u;
            goto label_4aa0b4;
        }
    }
    ctx->pc = 0x4A9FD4u;
    // 0x4a9fd4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4a9fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a9fd8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4a9fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a9fdc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4a9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4a9fe0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a9fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a9fe4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4A9FE4u;
    {
        const bool branch_taken_0x4a9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FE4u;
        // 0x4a9fe8: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9fe4) {
            ctx->pc = 0x4AA0ACu;
            goto label_4aa0ac;
        }
    }
    ctx->pc = 0x4A9FECu;
    // 0x4a9fec: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x4a9fecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4a9ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9ff4: 0xc2a804  sllv        $s5, $v0, $a2
    ctx->pc = 0x4a9ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x4a9ff8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4a9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a9ffc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4aa000: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4aa000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4aa004: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4AA004u;
    {
        const bool branch_taken_0x4aa004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa004) {
            ctx->pc = 0x4AA008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA004u;
            // 0x4aa008: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA090u;
            goto label_4aa090;
        }
    }
    ctx->pc = 0x4AA00Cu;
    // 0x4aa00c: 0x96510002  lhu         $s1, 0x2($s2)
    ctx->pc = 0x4aa00cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4aa010: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x4aa010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4aa014: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4aa014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4aa018: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4aa018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4aa01c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x4aa01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4aa020:
    // 0x4aa020: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4aa020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4aa024: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4aa024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4aa028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4aa028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aa02c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4aa02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4aa030: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x4aa030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x4aa034: 0x54800013  bnel        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4AA034u;
    {
        const bool branch_taken_0x4aa034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa034) {
            ctx->pc = 0x4AA038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA034u;
            // 0x4aa038: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA084u;
            goto label_4aa084;
        }
    }
    ctx->pc = 0x4AA03Cu;
    // 0x4aa03c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4aa03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4aa040: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AA040u;
    {
        const bool branch_taken_0x4aa040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa040) {
            ctx->pc = 0x4AA044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA040u;
            // 0x4aa044: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA084u;
            goto label_4aa084;
        }
    }
    ctx->pc = 0x4AA048u;
    // 0x4aa048: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4aa048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aa04c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AA04Cu;
    {
        const bool branch_taken_0x4aa04c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa04c) {
            ctx->pc = 0x4AA050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA04Cu;
            // 0x4aa050: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA070u;
            goto label_4aa070;
        }
    }
    ctx->pc = 0x4AA054u;
    // 0x4aa054: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4aa054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa058: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4aa058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4aa05c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA05Cu;
    {
        const bool branch_taken_0x4aa05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa05c) {
            ctx->pc = 0x4AA060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA05Cu;
            // 0x4aa060: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA070u;
            goto label_4aa070;
        }
    }
    ctx->pc = 0x4AA064u;
    // 0x4aa064: 0xc12a298  jal         func_4A8A60
    ctx->pc = 0x4AA064u;
    SET_GPR_U32(ctx, 31, 0x4AA06Cu);
    ctx->pc = 0x4AA068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA064u;
    // 0x4aa068: 0x8f8487d0  lw          $a0, -0x7830($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8A60u, 0x4AA064u, 0x4AA06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA06Cu;
label_4aa06c:
    // 0x4aa06c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4aa06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4aa070:
    // 0x4aa070: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4aa070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4aa074: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4aa074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4aa078: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4aa078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4aa07c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4aa07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4aa080: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4aa080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4aa084:
    // 0x4aa084: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4AA084u;
    {
        const bool branch_taken_0x4aa084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA084u;
        // 0x4aa088: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa084) {
            ctx->pc = 0x4AA020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa020;
        }
    }
    ctx->pc = 0x4AA08Cu;
    // 0x4aa08c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x4aa08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4aa090:
    // 0x4aa090: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4aa090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4aa094: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4aa094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x4aa098: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4aa098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4aa09c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x4aa09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x4aa0a0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x4aa0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4aa0a4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x4aa0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x4aa0a8: 0xae840010  sw          $a0, 0x10($s4)
    ctx->pc = 0x4aa0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 4));
label_4aa0ac:
    // 0x4aa0ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA0ACu;
    {
        const bool branch_taken_0x4aa0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA0ACu;
        // 0x4aa0b0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa0ac) {
            ctx->pc = 0x4AA0B8u;
            goto label_4aa0b8;
        }
    }
    ctx->pc = 0x4AA0B4u;
label_4aa0b4:
    // 0x4aa0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4aa0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aa0b8:
    // 0x4aa0b8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4aa0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4aa0bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4aa0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aa0c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4aa0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aa0c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4aa0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa0c8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4aa0c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa0cc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4aa0ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA0D4u;
        // 0x4aa0d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA0DCu;
    // 0x4aa0dc: 0x0  nop
    ctx->pc = 0x4aa0dcu;
    // NOP
    ctx->pc = 0x4aa0e0u;
}
