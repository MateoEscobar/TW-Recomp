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

// Function: sub_0042E490
// Address: 0x42e490 - 0x42e5d0
void sub_0042E490_0x42e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E490_0x42e490");
#endif

    switch (ctx->pc) {
        case 0x42e4c8u: goto label_42e4c8;
        case 0x42e4d4u: goto label_42e4d4;
        case 0x42e4f0u: goto label_42e4f0;
        case 0x42e504u: goto label_42e504;
        case 0x42e510u: goto label_42e510;
        case 0x42e550u: goto label_42e550;
        case 0x42e560u: goto label_42e560;
        case 0x42e58cu: goto label_42e58c;
        case 0x42e598u: goto label_42e598;
        default: break;
    }

    ctx->pc = 0x42e490u;

    // 0x42e490: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x42e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x42e494: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x42e494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x42e498: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x42e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x42e49c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42e49cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e4a0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x42e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x42e4a4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x42e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x42e4a8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x42e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x42e4ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x42e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x42e4b0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x42e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x42e4b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x42E4B4u;
    {
        const bool branch_taken_0x42e4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E4B4u;
        // 0x42e4b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e4b4) {
            ctx->pc = 0x42E4E8u;
            goto label_42e4e8;
        }
    }
    ctx->pc = 0x42E4BCu;
    // 0x42e4bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e4c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x42E4C0u;
    {
        const bool branch_taken_0x42e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E4C0u;
        // 0x42e4c4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e4c0) {
            ctx->pc = 0x42E4F4u;
            goto label_42e4f4;
        }
    }
    ctx->pc = 0x42E4C8u;
label_42e4c8:
    // 0x42e4c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x42e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e4cc: 0xc10b8f0  jal         func_42E3C0
    ctx->pc = 0x42E4CCu;
    SET_GPR_U32(ctx, 31, 0x42E4D4u);
    ctx->pc = 0x42E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E4CCu;
    // 0x42e4d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E3C0u, 0x42E4CCu, 0x42E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E4D4u;
label_42e4d4:
    // 0x42e4d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e4d8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x42E4D8u;
    {
        const bool branch_taken_0x42e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E4D8u;
        // 0x42e4dc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e4d8) {
            ctx->pc = 0x42E4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e4c8;
        }
    }
    ctx->pc = 0x42E4E0u;
    // 0x42e4e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42E4E0u;
    {
        const bool branch_taken_0x42e4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E4E0u;
        // 0x42e4e4: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e4e0) {
            ctx->pc = 0x42E4F8u;
            goto label_42e4f8;
        }
    }
    ctx->pc = 0x42E4E8u;
label_42e4e8:
    // 0x42e4e8: 0xc10b8f0  jal         func_42E3C0
    ctx->pc = 0x42E4E8u;
    SET_GPR_U32(ctx, 31, 0x42E4F0u);
    ctx->pc = 0x42E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E4E8u;
    // 0x42e4ec: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E3C0u, 0x42E4E8u, 0x42E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E4F0u;
label_42e4f0:
    // 0x42e4f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x42e4f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42e4f4:
    // 0x42e4f4: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x42e4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_42e4f8:
    // 0x42e4f8: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x42e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x42e4fc: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x42E4FCu;
    SET_GPR_U32(ctx, 31, 0x42E504u);
    ctx->pc = 0x42E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E4FCu;
    // 0x42e500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x42E4FCu, 0x42E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E504u;
label_42e504:
    // 0x42e504: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42e504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x42e508: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x42E508u;
    SET_GPR_U32(ctx, 31, 0x42E510u);
    ctx->pc = 0x42E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E508u;
    // 0x42e50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x42E508u, 0x42E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E510u;
label_42e510:
    // 0x42e510: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x42e510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x42e514: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x42e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x42e518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42e518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x42e51c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x42e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x42e520: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x42e520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x42e524: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x42e524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x42e528: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x42e528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x42e52c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x42E52Cu;
    {
        const bool branch_taken_0x42e52c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E52Cu;
        // 0x42e530: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e52c) {
            ctx->pc = 0x42E578u;
            goto label_42e578;
        }
    }
    ctx->pc = 0x42E534u;
    // 0x42e534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42e534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e53c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x42E53Cu;
    {
        const bool branch_taken_0x42e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E53Cu;
        // 0x42e540: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e53c) {
            ctx->pc = 0x42E58Cu;
            goto label_42e58c;
        }
    }
    ctx->pc = 0x42E544u;
    // 0x42e544: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x42e544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x42e548: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x42e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e54c: 0x0  nop
    ctx->pc = 0x42e54cu;
    // NOP
label_42e550:
    // 0x42e550: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42e550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e554: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x42e554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e558: 0xc10b902  jal         func_42E408
    ctx->pc = 0x42E558u;
    SET_GPR_U32(ctx, 31, 0x42E560u);
    ctx->pc = 0x42E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E558u;
    // 0x42e55c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E408u, 0x42E558u, 0x42E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E560u;
label_42e560:
    // 0x42e560: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x42e560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x42e564: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e568: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42E568u;
    {
        const bool branch_taken_0x42e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e568) {
            ctx->pc = 0x42E56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E568u;
            // 0x42e56c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e550;
        }
    }
    ctx->pc = 0x42E570u;
    // 0x42e570: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x42E570u;
    {
        const bool branch_taken_0x42e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E570u;
        // 0x42e574: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e570) {
            ctx->pc = 0x42E590u;
            goto label_42e590;
        }
    }
    ctx->pc = 0x42E578u;
label_42e578:
    // 0x42e578: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x42e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x42e57c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42e57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e580: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x42e580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x42e584: 0xc10b902  jal         func_42E408
    ctx->pc = 0x42E584u;
    SET_GPR_U32(ctx, 31, 0x42E58Cu);
    ctx->pc = 0x42E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E584u;
    // 0x42e588: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E408u, 0x42E584u, 0x42E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E58Cu;
label_42e58c:
    // 0x42e58c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42e58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42e590:
    // 0x42e590: 0xc10b856  jal         func_42E158
    ctx->pc = 0x42E590u;
    SET_GPR_U32(ctx, 31, 0x42E598u);
    ctx->pc = 0x42E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E590u;
    // 0x42e594: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E158u, 0x42E590u, 0x42E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E598u;
label_42e598:
    // 0x42e598: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x42e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42e59c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x42e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x42e5a0: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x42e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x42e5a4: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x42e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x42e5a8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x42e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x42e5ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x42e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x42e5b0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x42e5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x42e5b4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x42e5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42e5b8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x42e5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42e5bc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x42e5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42e5c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x42e5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42e5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x42E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E5C4u;
        // 0x42e5c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E5CCu;
    // 0x42e5cc: 0x0  nop
    ctx->pc = 0x42e5ccu;
    // NOP
    ctx->pc = 0x42e5d0u;
}
