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

// Function: sub_0037AB38
// Address: 0x37ab38 - 0x37ac70
void sub_0037AB38_0x37ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AB38_0x37ab38");
#endif

    switch (ctx->pc) {
        case 0x37ab60u: goto label_37ab60;
        case 0x37ab78u: goto label_37ab78;
        case 0x37ab98u: goto label_37ab98;
        case 0x37abb0u: goto label_37abb0;
        case 0x37abb8u: goto label_37abb8;
        case 0x37abd4u: goto label_37abd4;
        case 0x37abe8u: goto label_37abe8;
        case 0x37abf8u: goto label_37abf8;
        case 0x37ac00u: goto label_37ac00;
        case 0x37ac14u: goto label_37ac14;
        case 0x37ac2cu: goto label_37ac2c;
        case 0x37ac40u: goto label_37ac40;
        default: break;
    }

    ctx->pc = 0x37ab38u;

    // 0x37ab38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37ab3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ab40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37ab44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37ab44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37ab4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x37ab50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x37ab54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37ab58: 0xc102488  jal         func_409220
    ctx->pc = 0x37AB58u;
    SET_GPR_U32(ctx, 31, 0x37AB60u);
    ctx->pc = 0x37AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AB58u;
    // 0x37ab5c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37AB58u, 0x37AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AB60u;
label_37ab60:
    // 0x37ab60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37ab60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x37ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x37ab68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37ab6c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x37ab6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab70: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x37ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37ab74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x37ab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_37ab78:
    // 0x37ab78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37ab7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x37ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37ab80: 0x0  nop
    ctx->pc = 0x37ab80u;
    // NOP
    // 0x37ab84: 0x0  nop
    ctx->pc = 0x37ab84u;
    // NOP
    // 0x37ab88: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37AB88u;
    {
        const bool branch_taken_0x37ab88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x37AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB88u;
        // 0x37ab8c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab88) {
            ctx->pc = 0x37AB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ab78;
        }
    }
    ctx->pc = 0x37AB90u;
    // 0x37ab90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ab90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab94: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37ab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37ab98:
    // 0x37ab98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37ab98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37ab9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aba0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37aba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aba8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37ABA8u;
    SET_GPR_U32(ctx, 31, 0x37ABB0u);
    ctx->pc = 0x37ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABA8u;
    // 0x37abac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37ABA8u, 0x37ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABB0u;
label_37abb0:
    // 0x37abb0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37ABB0u;
    SET_GPR_U32(ctx, 31, 0x37ABB8u);
    ctx->pc = 0x37ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABB0u;
    // 0x37abb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37ABB0u, 0x37ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABB8u;
label_37abb8:
    // 0x37abb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x37abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37abbc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x37abbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x37abc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37ABC0u;
    {
        const bool branch_taken_0x37abc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABC0u;
        // 0x37abc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37abc0) {
            ctx->pc = 0x37AB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ab98;
        }
    }
    ctx->pc = 0x37ABC8u;
    // 0x37abc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37abc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abcc: 0xc1055d0  jal         func_415740
    ctx->pc = 0x37ABCCu;
    SET_GPR_U32(ctx, 31, 0x37ABD4u);
    ctx->pc = 0x37ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABCCu;
    // 0x37abd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415740u, 0x37ABCCu, 0x37ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABD4u;
label_37abd4:
    // 0x37abd4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x37abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x37abd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37abd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abdc: 0x24a590c8  addiu       $a1, $a1, -0x6F38
    ctx->pc = 0x37abdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938824));
    // 0x37abe0: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x37ABE0u;
    SET_GPR_U32(ctx, 31, 0x37ABE8u);
    ctx->pc = 0x37ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABE0u;
    // 0x37abe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x37ABE0u, 0x37ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABE8u;
label_37abe8:
    // 0x37abe8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37abe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37abecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abf0: 0xc10254e  jal         func_409538
    ctx->pc = 0x37ABF0u;
    SET_GPR_U32(ctx, 31, 0x37ABF8u);
    ctx->pc = 0x37ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABF0u;
    // 0x37abf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x37ABF0u, 0x37ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABF8u;
label_37abf8:
    // 0x37abf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37abf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abfc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x37abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_37ac00:
    // 0x37ac00: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x37ac00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37ac04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x37ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x37ac08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37ac08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ac0c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37AC0Cu;
    SET_GPR_U32(ctx, 31, 0x37AC14u);
    ctx->pc = 0x37AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC0Cu;
    // 0x37ac10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37AC0Cu, 0x37AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC14u;
label_37ac14:
    // 0x37ac14: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37AC14u;
    {
        const bool branch_taken_0x37ac14 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC14u;
        // 0x37ac18: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac14) {
            ctx->pc = 0x37AC30u;
            goto label_37ac30;
        }
    }
    ctx->pc = 0x37AC1Cu;
    // 0x37ac1c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37ac1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37ac20: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37ac20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37ac24: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37AC24u;
    SET_GPR_U32(ctx, 31, 0x37AC2Cu);
    ctx->pc = 0x37AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC24u;
    // 0x37ac28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37AC24u, 0x37AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC2Cu;
label_37ac2c:
    // 0x37ac2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37ac2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ac30:
    // 0x37ac30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37ac30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac38: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37AC38u;
    SET_GPR_U32(ctx, 31, 0x37AC40u);
    ctx->pc = 0x37AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC38u;
    // 0x37ac3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37AC38u, 0x37AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC40u;
label_37ac40:
    // 0x37ac40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37ac40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac44: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x37ac44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x37ac48: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x37AC48u;
    {
        const bool branch_taken_0x37ac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC48u;
        // 0x37ac4c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac48) {
            ctx->pc = 0x37AC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ac00;
        }
    }
    ctx->pc = 0x37AC50u;
    // 0x37ac50: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37ac50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37ac54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ac58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37ac58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37ac5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37ac5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ac60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37ac60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ac64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37ac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x37AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC68u;
        // 0x37ac6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AC70u;
}
