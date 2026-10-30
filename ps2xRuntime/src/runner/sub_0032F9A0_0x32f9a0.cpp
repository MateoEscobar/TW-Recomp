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

// Function: sub_0032F9A0
// Address: 0x32f9a0 - 0x32fac8
void sub_0032F9A0_0x32f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F9A0_0x32f9a0");
#endif

    switch (ctx->pc) {
        case 0x32f9d0u: goto label_32f9d0;
        case 0x32f9e0u: goto label_32f9e0;
        case 0x32fa08u: goto label_32fa08;
        case 0x32fa28u: goto label_32fa28;
        case 0x32fa88u: goto label_32fa88;
        default: break;
    }

    ctx->pc = 0x32f9a0u;

    // 0x32f9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32f9a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32f9a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32f9ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32f9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32f9b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32f9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32f9b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32f9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9c8: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F9C8u;
    SET_GPR_U32(ctx, 31, 0x32F9D0u);
    ctx->pc = 0x32F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F9C8u;
    // 0x32f9cc: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F9C8u, 0x32F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F9D0u;
label_32f9d0:
    // 0x32f9d0: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32F9D0u;
    {
        const bool branch_taken_0x32f9d0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x32F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F9D0u;
        // 0x32f9d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f9d0) {
            ctx->pc = 0x32F9F8u;
            goto label_32f9f8;
        }
    }
    ctx->pc = 0x32F9D8u;
    // 0x32f9d8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x32f9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32f9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32f9e0:
    // 0x32f9e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x32f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x32f9e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32f9e8: 0x0  nop
    ctx->pc = 0x32f9e8u;
    // NOP
    // 0x32f9ec: 0x0  nop
    ctx->pc = 0x32f9ecu;
    // NOP
    // 0x32f9f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x32F9F0u;
    {
        const bool branch_taken_0x32f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F9F0u;
        // 0x32f9f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f9f0) {
            ctx->pc = 0x32F9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f9e0;
        }
    }
    ctx->pc = 0x32F9F8u;
label_32f9f8:
    // 0x32f9f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32f9fc: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32F9FCu;
    {
        const bool branch_taken_0x32f9fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x32FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F9FCu;
        // 0x32fa00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f9fc) {
            ctx->pc = 0x32FA78u;
            goto label_32fa78;
        }
    }
    ctx->pc = 0x32FA04u;
    // 0x32fa04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32fa08:
    // 0x32fa08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32fa0c: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x32fa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32fa10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32fa14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32fa18: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x32FA18u;
    {
        const bool branch_taken_0x32fa18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fa18) {
            ctx->pc = 0x32FA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FA18u;
            // 0x32fa1c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FA68u;
            goto label_32fa68;
        }
    }
    ctx->pc = 0x32FA20u;
    // 0x32fa20: 0x2647002c  addiu       $a3, $s2, 0x2C
    ctx->pc = 0x32fa20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x32fa24: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x32fa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32fa28:
    // 0x32fa28: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FA28u;
    {
        const bool branch_taken_0x32fa28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x32FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA28u;
        // 0x32fa2c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa28) {
            ctx->pc = 0x32FA38u;
            goto label_32fa38;
        }
    }
    ctx->pc = 0x32FA30u;
    // 0x32fa30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32FA30u;
    {
        const bool branch_taken_0x32fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA30u;
        // 0x32fa34: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa30) {
            ctx->pc = 0x32FA40u;
            goto label_32fa40;
        }
    }
    ctx->pc = 0x32FA38u;
label_32fa38:
    // 0x32fa38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32fa3c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x32fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_32fa40:
    // 0x32fa40: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x32fa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x32fa44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32fa48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x32fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x32fa4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32fa50: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x32fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x32fa54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x32fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x32fa58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa5c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x32FA5Cu;
    {
        const bool branch_taken_0x32fa5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fa5c) {
            ctx->pc = 0x32FA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fa28;
        }
    }
    ctx->pc = 0x32FA64u;
    // 0x32fa64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32fa68:
    // 0x32fa68: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x32fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa6c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x32fa6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32fa70: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x32FA70u;
    {
        const bool branch_taken_0x32fa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fa70) {
            ctx->pc = 0x32FA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FA70u;
            // 0x32fa74: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fa08;
        }
    }
    ctx->pc = 0x32FA78u;
label_32fa78:
    // 0x32fa78: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32fa7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32fa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa80: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32FA80u;
    SET_GPR_U32(ctx, 31, 0x32FA88u);
    ctx->pc = 0x32FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA80u;
    // 0x32fa84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32FA80u, 0x32FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA88u;
label_32fa88:
    // 0x32fa88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32fa8c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x32fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x32fa90: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x32fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x32fa94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fa98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32fa9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32faa0: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x32faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x32faa4: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x32faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x32faa8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x32faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x32faac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32faacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32fab0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32fab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fab8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32fab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fabc: 0x3e00008  jr          $ra
    ctx->pc = 0x32FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FABCu;
        // 0x32fac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAC4u;
    // 0x32fac4: 0x0  nop
    ctx->pc = 0x32fac4u;
    // NOP
    ctx->pc = 0x32fac8u;
}
