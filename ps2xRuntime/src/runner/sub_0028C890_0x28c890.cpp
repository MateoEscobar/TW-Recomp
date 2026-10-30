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

// Function: sub_0028C890
// Address: 0x28c890 - 0x28ca50
void sub_0028C890_0x28c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C890_0x28c890");
#endif

    switch (ctx->pc) {
        case 0x28c8c0u: goto label_28c8c0;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8e4u: goto label_28c8e4;
        case 0x28c914u: goto label_28c914;
        case 0x28c928u: goto label_28c928;
        case 0x28c92cu: goto label_28c92c;
        case 0x28c944u: goto label_28c944;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c978u: goto label_28c978;
        case 0x28c988u: goto label_28c988;
        case 0x28c998u: goto label_28c998;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28c9bcu: goto label_28c9bc;
        case 0x28c9c4u: goto label_28c9c4;
        case 0x28c9e8u: goto label_28c9e8;
        case 0x28ca00u: goto label_28ca00;
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca28u: goto label_28ca28;
        default: break;
    }

    ctx->pc = 0x28c890u;

    // 0x28c890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28c894: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28c894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28c898: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28c89c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28c89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28c8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28c8a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c8a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28c8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28c8b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x28c8b4: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x28c8b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28c8b8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x28C8B8u;
    SET_GPR_U32(ctx, 31, 0x28C8C0u);
    ctx->pc = 0x28C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8B8u;
    // 0x28c8bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28C8B8u, 0x28C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8C0u;
label_28c8c0:
    // 0x28c8c0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28c8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x28c8c4: 0x50600059  beql        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x28C8C4u;
    {
        const bool branch_taken_0x28c8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c8c4) {
            ctx->pc = 0x28C8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C8C4u;
            // 0x28c8c8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CA2Cu;
            goto label_28ca2c;
        }
    }
    ctx->pc = 0x28C8CCu;
    // 0x28c8cc: 0xc087502  jal         func_21D408
    ctx->pc = 0x28C8CCu;
    SET_GPR_U32(ctx, 31, 0x28C8D4u);
    ctx->pc = 0x28C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8CCu;
    // 0x28c8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28C8CCu, 0x28C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8D4u;
label_28c8d4:
    // 0x28c8d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8d8: 0x261201a4  addiu       $s2, $s0, 0x1A4
    ctx->pc = 0x28c8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x28c8dc: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x28C8DCu;
    SET_GPR_U32(ctx, 31, 0x28C8E4u);
    ctx->pc = 0x28C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8DCu;
    // 0x28c8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28C8DCu, 0x28C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8E4u;
label_28c8e4:
    // 0x28c8e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c8ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28c8f0: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x28C8F0u;
    {
        const bool branch_taken_0x28c8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8F0u;
        // 0x28c8f4: 0x2ca20002  sltiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8f0) {
            ctx->pc = 0x28CA28u;
            goto label_28ca28;
        }
    }
    ctx->pc = 0x28C8F8u;
    // 0x28c8f8: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x28C8F8u;
    {
        const bool branch_taken_0x28c8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8F8u;
        // 0x28c8fc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8f8) {
            ctx->pc = 0x28CA2Cu;
            goto label_28ca2c;
        }
    }
    ctx->pc = 0x28C900u;
    // 0x28c900: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x28c900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x28c904: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28c908: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x28c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x28c90c: 0xc0cd526  jal         func_335498
    ctx->pc = 0x28C90Cu;
    SET_GPR_U32(ctx, 31, 0x28C914u);
    ctx->pc = 0x28C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C90Cu;
    // 0x28c910: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x28C90Cu, 0x28C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C914u;
label_28c914:
    // 0x28c914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c918: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28c918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c91c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28C91Cu;
    {
        const bool branch_taken_0x28c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C91Cu;
        // 0x28c920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c91c) {
            ctx->pc = 0x28C92Cu;
            goto label_28c92c;
        }
    }
    ctx->pc = 0x28C924u;
    // 0x28c924: 0x0  nop
    ctx->pc = 0x28c924u;
    // NOP
label_28c928:
    // 0x28c928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28c92c:
    // 0x28c92c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x28c92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28c930: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C930u;
    {
        const bool branch_taken_0x28c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c930) {
            ctx->pc = 0x28C968u;
            goto label_28c968;
        }
    }
    ctx->pc = 0x28C938u;
    // 0x28c938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c93c: 0xc137866  jal         func_4DE198
    ctx->pc = 0x28C93Cu;
    SET_GPR_U32(ctx, 31, 0x28C944u);
    ctx->pc = 0x28C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C93Cu;
    // 0x28c940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x28C93Cu, 0x28C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C944u;
label_28c944:
    // 0x28c944: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28C944u;
    SET_GPR_U32(ctx, 31, 0x28C94Cu);
    ctx->pc = 0x28C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C944u;
    // 0x28c948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28C944u, 0x28C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C94Cu;
label_28c94c:
    // 0x28c94c: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28C94Cu;
    {
        const bool branch_taken_0x28c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c94c) {
            ctx->pc = 0x28C950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C94Cu;
            // 0x28c950: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c92c;
        }
    }
    ctx->pc = 0x28C954u;
    // 0x28c954: 0x5055fff5  beql        $v0, $s5, . + 4 + (-0xB << 2)
    ctx->pc = 0x28C954u;
    {
        const bool branch_taken_0x28c954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x28c954) {
            ctx->pc = 0x28C958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C954u;
            // 0x28c958: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c92c;
        }
    }
    ctx->pc = 0x28C95Cu;
    // 0x28c95c: 0x5634fff2  bnel        $s1, $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x28C95Cu;
    {
        const bool branch_taken_0x28c95c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x28c95c) {
            ctx->pc = 0x28C960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C95Cu;
            // 0x28c960: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c928;
        }
    }
    ctx->pc = 0x28C964u;
    // 0x28c964: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28c964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c968:
    // 0x28c968: 0x52600030  beql        $s3, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x28C968u;
    {
        const bool branch_taken_0x28c968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c968) {
            ctx->pc = 0x28C96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C968u;
            // 0x28c96c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CA2Cu;
            goto label_28ca2c;
        }
    }
    ctx->pc = 0x28C970u;
    // 0x28c970: 0xc08a096  jal         func_228258
    ctx->pc = 0x28C970u;
    SET_GPR_U32(ctx, 31, 0x28C978u);
    ctx->pc = 0x28C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C970u;
    // 0x28c974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x28C970u, 0x28C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C978u;
label_28c978:
    // 0x28c978: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x28C978u;
    {
        const bool branch_taken_0x28c978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c978) {
            ctx->pc = 0x28C97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C978u;
            // 0x28c97c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CA2Cu;
            goto label_28ca2c;
        }
    }
    ctx->pc = 0x28C980u;
    // 0x28c980: 0xc08a08a  jal         func_228228
    ctx->pc = 0x28C980u;
    SET_GPR_U32(ctx, 31, 0x28C988u);
    ctx->pc = 0x28C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C980u;
    // 0x28c984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x28C980u, 0x28C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C988u;
label_28c988:
    // 0x28c988: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x28C988u;
    {
        const bool branch_taken_0x28c988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c988) {
            ctx->pc = 0x28C98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C988u;
            // 0x28c98c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CA2Cu;
            goto label_28ca2c;
        }
    }
    ctx->pc = 0x28C990u;
    // 0x28c990: 0xc087502  jal         func_21D408
    ctx->pc = 0x28C990u;
    SET_GPR_U32(ctx, 31, 0x28C998u);
    ctx->pc = 0x28C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C990u;
    // 0x28c994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28C990u, 0x28C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C998u;
label_28c998:
    // 0x28c998: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c99c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x28C99Cu;
    SET_GPR_U32(ctx, 31, 0x28C9A4u);
    ctx->pc = 0x28C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C99Cu;
    // 0x28c9a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28C99Cu, 0x28C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9A4u;
label_28c9a4:
    // 0x28c9a4: 0x8223002e  lb          $v1, 0x2E($s1)
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x28c9a8: 0x5c600020  bgtzl       $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x28C9A8u;
    {
        const bool branch_taken_0x28c9a8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x28c9a8) {
            ctx->pc = 0x28C9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C9A8u;
            // 0x28c9ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CA2Cu;
            goto label_28ca2c;
        }
    }
    ctx->pc = 0x28C9B0u;
    // 0x28c9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9b4: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x28C9B4u;
    SET_GPR_U32(ctx, 31, 0x28C9BCu);
    ctx->pc = 0x28C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9B4u;
    // 0x28c9b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x28C9B4u, 0x28C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9BCu;
label_28c9bc:
    // 0x28c9bc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28C9BCu;
    SET_GPR_U32(ctx, 31, 0x28C9C4u);
    ctx->pc = 0x28C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9BCu;
    // 0x28c9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28C9BCu, 0x28C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9C4u;
label_28c9c4:
    // 0x28c9c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28c9c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9c8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x28C9C8u;
    {
        const bool branch_taken_0x28c9c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C9C8u;
        // 0x28c9cc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9c8) {
            ctx->pc = 0x28CA00u;
            goto label_28ca00;
        }
    }
    ctx->pc = 0x28C9D0u;
    // 0x28c9d0: 0x86b00092  lh          $s0, 0x92($s5)
    ctx->pc = 0x28c9d0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x28c9d4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x28c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x28c9d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9dc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x28c9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x28c9e0: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x28C9E0u;
    SET_GPR_U32(ctx, 31, 0x28C9E8u);
    ctx->pc = 0x28C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9E0u;
    // 0x28c9e4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x28C9E0u, 0x28C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9E8u;
label_28c9e8:
    // 0x28c9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28c9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x28c9f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x28c9f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f8: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x28C9F8u;
    SET_GPR_U32(ctx, 31, 0x28CA00u);
    ctx->pc = 0x28C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9F8u;
    // 0x28c9fc: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x28C9F8u, 0x28CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA00u;
label_28ca00:
    // 0x28ca00: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28CA00u;
    SET_GPR_U32(ctx, 31, 0x28CA08u);
    ctx->pc = 0x28CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA00u;
    // 0x28ca04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28CA00u, 0x28CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA08u;
label_28ca08:
    // 0x28ca08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CA08u;
    {
        const bool branch_taken_0x28ca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA08u;
        // 0x28ca0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca08) {
            ctx->pc = 0x28CA28u;
            goto label_28ca28;
        }
    }
    ctx->pc = 0x28CA10u;
    // 0x28ca10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28ca10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca14: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ca18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ca18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca1c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x28ca1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x28ca20: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x28CA20u;
    SET_GPR_U32(ctx, 31, 0x28CA28u);
    ctx->pc = 0x28CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA20u;
    // 0x28ca24: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x28CA20u, 0x28CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA28u;
label_28ca28:
    // 0x28ca28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28ca28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28ca2c:
    // 0x28ca2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28ca2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ca30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28ca30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ca34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ca34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ca38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28ca38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ca3c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28ca3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ca40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x28CA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA44u;
        // 0x28ca48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CA4Cu;
    // 0x28ca4c: 0x0  nop
    ctx->pc = 0x28ca4cu;
    // NOP
    ctx->pc = 0x28ca50u;
}
