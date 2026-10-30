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

// Function: sub_003E80D0
// Address: 0x3e80d0 - 0x3e81a8
void sub_003E80D0_0x3e80d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E80D0_0x3e80d0");
#endif

    switch (ctx->pc) {
        case 0x3e80d0u: goto label_3e80d0;
        case 0x3e80d4u: goto label_3e80d4;
        case 0x3e80d8u: goto label_3e80d8;
        case 0x3e80dcu: goto label_3e80dc;
        case 0x3e80e0u: goto label_3e80e0;
        case 0x3e80e4u: goto label_3e80e4;
        case 0x3e80e8u: goto label_3e80e8;
        case 0x3e80ecu: goto label_3e80ec;
        case 0x3e80f0u: goto label_3e80f0;
        case 0x3e80f4u: goto label_3e80f4;
        case 0x3e80f8u: goto label_3e80f8;
        case 0x3e80fcu: goto label_3e80fc;
        case 0x3e8100u: goto label_3e8100;
        case 0x3e8104u: goto label_3e8104;
        case 0x3e8108u: goto label_3e8108;
        case 0x3e810cu: goto label_3e810c;
        case 0x3e8110u: goto label_3e8110;
        case 0x3e8114u: goto label_3e8114;
        case 0x3e8118u: goto label_3e8118;
        case 0x3e811cu: goto label_3e811c;
        case 0x3e8120u: goto label_3e8120;
        case 0x3e8124u: goto label_3e8124;
        case 0x3e8128u: goto label_3e8128;
        case 0x3e812cu: goto label_3e812c;
        case 0x3e8130u: goto label_3e8130;
        case 0x3e8134u: goto label_3e8134;
        case 0x3e8138u: goto label_3e8138;
        case 0x3e813cu: goto label_3e813c;
        case 0x3e8140u: goto label_3e8140;
        case 0x3e8144u: goto label_3e8144;
        case 0x3e8148u: goto label_3e8148;
        case 0x3e814cu: goto label_3e814c;
        case 0x3e8150u: goto label_3e8150;
        case 0x3e8154u: goto label_3e8154;
        case 0x3e8158u: goto label_3e8158;
        case 0x3e815cu: goto label_3e815c;
        case 0x3e8160u: goto label_3e8160;
        case 0x3e8164u: goto label_3e8164;
        case 0x3e8168u: goto label_3e8168;
        case 0x3e816cu: goto label_3e816c;
        case 0x3e8170u: goto label_3e8170;
        case 0x3e8174u: goto label_3e8174;
        case 0x3e8178u: goto label_3e8178;
        case 0x3e817cu: goto label_3e817c;
        case 0x3e8180u: goto label_3e8180;
        case 0x3e8184u: goto label_3e8184;
        case 0x3e8188u: goto label_3e8188;
        case 0x3e818cu: goto label_3e818c;
        case 0x3e8190u: goto label_3e8190;
        case 0x3e8194u: goto label_3e8194;
        case 0x3e8198u: goto label_3e8198;
        case 0x3e819cu: goto label_3e819c;
        case 0x3e81a0u: goto label_3e81a0;
        case 0x3e81a4u: goto label_3e81a4;
        default: break;
    }

    ctx->pc = 0x3e80d0u;

label_3e80d0:
    // 0x3e80d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e80d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e80d4:
    // 0x3e80d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e80d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3e80d8:
    // 0x3e80d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3e80dc:
    // 0x3e80dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e80dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e80e0:
    // 0x3e80e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e80e4:
    // 0x3e80e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e80e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e80e8:
    // 0x3e80e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3e80ec:
    // 0x3e80ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e80ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e80f0:
    // 0x3e80f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e80f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e80f4:
    // 0x3e80f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e80f8:
    // 0x3e80f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e80f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e80fc:
    // 0x3e80fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8100:
    // 0x3e8100: 0x40f809  jalr        $v0
label_3e8104:
    if (ctx->pc == 0x3E8104u) {
        ctx->pc = 0x3E8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8100u;
        // 0x3e8104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8108u;
        goto label_3e8108;
    }
    ctx->pc = 0x3E8100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8108u);
        ctx->pc = 0x3E8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8100u;
        // 0x3e8104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8100u, 0x3E8108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8108u;
label_3e8108:
    // 0x3e8108: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e810c:
    // 0x3e810c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3e810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e8110:
    // 0x3e8110: 0x12220019  beq         $s1, $v0, . + 4 + (0x19 << 2)
label_3e8114:
    if (ctx->pc == 0x3E8114u) {
        ctx->pc = 0x3E8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8110u;
        // 0x3e8114: 0x2e220014  sltiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8118u;
        goto label_3e8118;
    }
    ctx->pc = 0x3E8110u;
    {
        const bool branch_taken_0x3e8110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8110u;
        // 0x3e8114: 0x2e220014  sltiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8110) {
            ctx->pc = 0x3E8178u;
            goto label_3e8178;
        }
    }
    ctx->pc = 0x3E8118u;
label_3e8118:
    // 0x3e8118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e811c:
    if (ctx->pc == 0x3E811Cu) {
        ctx->pc = 0x3E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8118u;
        // 0x3e811c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8120u;
        goto label_3e8120;
    }
    ctx->pc = 0x3E8118u;
    {
        const bool branch_taken_0x3e8118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8118u;
        // 0x3e811c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8118) {
            ctx->pc = 0x3E8130u;
            goto label_3e8130;
        }
    }
    ctx->pc = 0x3E8120u;
label_3e8120:
    // 0x3e8120: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
label_3e8124:
    if (ctx->pc == 0x3E8124u) {
        ctx->pc = 0x3E8128u;
        goto label_3e8128;
    }
    ctx->pc = 0x3E8120u;
    {
        const bool branch_taken_0x3e8120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e8120) {
            ctx->pc = 0x3E8164u;
            goto label_3e8164;
        }
    }
    ctx->pc = 0x3E8128u;
label_3e8128:
    // 0x3e8128: 0x10000018  b           . + 4 + (0x18 << 2)
label_3e812c:
    if (ctx->pc == 0x3E812Cu) {
        ctx->pc = 0x3E812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8128u;
        // 0x3e812c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8130u;
        goto label_3e8130;
    }
    ctx->pc = 0x3E8128u;
    {
        const bool branch_taken_0x3e8128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8128u;
        // 0x3e812c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8128) {
            ctx->pc = 0x3E818Cu;
            goto label_3e818c;
        }
    }
    ctx->pc = 0x3E8130u;
label_3e8130:
    // 0x3e8130: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3e8130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3e8134:
    // 0x3e8134: 0x56220015  bnel        $s1, $v0, . + 4 + (0x15 << 2)
label_3e8138:
    if (ctx->pc == 0x3E8138u) {
        ctx->pc = 0x3E8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8134u;
        // 0x3e8138: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E813Cu;
        goto label_3e813c;
    }
    ctx->pc = 0x3E8134u;
    {
        const bool branch_taken_0x3e8134 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8134) {
            ctx->pc = 0x3E8138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8134u;
            // 0x3e8138: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E818Cu;
            goto label_3e818c;
        }
    }
    ctx->pc = 0x3E813Cu;
label_3e813c:
    // 0x3e813c: 0xc0ea146  jal         func_3A8518
label_3e8140:
    if (ctx->pc == 0x3E8140u) {
        ctx->pc = 0x3E8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E813Cu;
        // 0x3e8140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8144u;
        goto label_3e8144;
    }
    ctx->pc = 0x3E813Cu;
    SET_GPR_U32(ctx, 31, 0x3E8144u);
    ctx->pc = 0x3E8140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E813Cu;
    // 0x3e8140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E813Cu, 0x3E8144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8144u;
label_3e8144:
    // 0x3e8144: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e8144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8148:
    // 0x3e8148: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3e8148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e814c:
    // 0x3e814c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3e8150:
    if (ctx->pc == 0x3E8150u) {
        ctx->pc = 0x3E8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E814Cu;
        // 0x3e8150: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8154u;
        goto label_3e8154;
    }
    ctx->pc = 0x3E814Cu;
    {
        const bool branch_taken_0x3e814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E814Cu;
        // 0x3e8150: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e814c) {
            ctx->pc = 0x3E8158u;
            goto label_3e8158;
        }
    }
    ctx->pc = 0x3E8154u;
label_3e8154:
    // 0x3e8154: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3e8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e8158:
    // 0x3e8158: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3e8158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3e815c:
    // 0x3e815c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e8160:
    if (ctx->pc == 0x3E8160u) {
        ctx->pc = 0x3E8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E815Cu;
        // 0x3e8160: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8164u;
        goto label_3e8164;
    }
    ctx->pc = 0x3E815Cu;
    {
        const bool branch_taken_0x3e815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E815Cu;
        // 0x3e8160: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e815c) {
            ctx->pc = 0x3E8188u;
            goto label_3e8188;
        }
    }
    ctx->pc = 0x3E8164u;
label_3e8164:
    // 0x3e8164: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e8164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e8168:
    // 0x3e8168: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e8168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e816c:
    // 0x3e816c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e816cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e8170:
    // 0x3e8170: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e8174:
    if (ctx->pc == 0x3E8174u) {
        ctx->pc = 0x3E8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8170u;
        // 0x3e8174: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8178u;
        goto label_3e8178;
    }
    ctx->pc = 0x3E8170u;
    {
        const bool branch_taken_0x3e8170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8170u;
        // 0x3e8174: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8170) {
            ctx->pc = 0x3E8188u;
            goto label_3e8188;
        }
    }
    ctx->pc = 0x3E8178u;
label_3e8178:
    // 0x3e8178: 0xc0e95f6  jal         func_3A57D8
label_3e817c:
    if (ctx->pc == 0x3E817Cu) {
        ctx->pc = 0x3E817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8178u;
        // 0x3e817c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8180u;
        goto label_3e8180;
    }
    ctx->pc = 0x3E8178u;
    SET_GPR_U32(ctx, 31, 0x3E8180u);
    ctx->pc = 0x3E817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8178u;
    // 0x3e817c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3E8178u, 0x3E8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8180u;
label_3e8180:
    // 0x3e8180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e8180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8184:
    // 0x3e8184: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3e8184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3e8188:
    // 0x3e8188: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e8188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e818c:
    // 0x3e818c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e818cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e8190:
    // 0x3e8190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e8190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8194:
    // 0x3e8194: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e8194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8198:
    // 0x3e8198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e819c:
    // 0x3e819c: 0x3e00008  jr          $ra
label_3e81a0:
    if (ctx->pc == 0x3E81A0u) {
        ctx->pc = 0x3E81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E819Cu;
        // 0x3e81a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E81A4u;
        goto label_3e81a4;
    }
    ctx->pc = 0x3E819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E819Cu;
        // 0x3e81a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E81A4u;
label_3e81a4:
    // 0x3e81a4: 0x0  nop
    ctx->pc = 0x3e81a4u;
    // NOP
    ctx->pc = 0x3e81a8u;
}
