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

// Function: sub_0016BD38
// Address: 0x16bd38 - 0x16bde8
void sub_0016BD38_0x16bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BD38_0x16bd38");
#endif

    switch (ctx->pc) {
        case 0x16bd6cu: goto label_16bd6c;
        case 0x16bd98u: goto label_16bd98;
        case 0x16bda0u: goto label_16bda0;
        case 0x16bda8u: goto label_16bda8;
        default: break;
    }

    ctx->pc = 0x16bd38u;

    // 0x16bd38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16bd3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bd40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16bd44: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16bd44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bd48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16bd4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16bd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16bd54: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x16bd54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bd58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16bd5c: 0x1092001b  beq         $a0, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x16BD5Cu;
    {
        const bool branch_taken_0x16bd5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x16BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD5Cu;
        // 0x16bd60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd5c) {
            ctx->pc = 0x16BDCCu;
            goto label_16bdcc;
        }
    }
    ctx->pc = 0x16BD64u;
    // 0x16bd64: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BD64u;
    SET_GPR_U32(ctx, 31, 0x16BD6Cu);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BD64u, 0x16BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD6Cu;
label_16bd6c:
    // 0x16bd6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd70: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16bd74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16BD74u;
    {
        const bool branch_taken_0x16bd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD74u;
        // 0x16bd78: 0x2a0203e8  slti        $v0, $s0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd74) {
            ctx->pc = 0x16BDCCu;
            goto label_16bdcc;
        }
    }
    ctx->pc = 0x16BD7Cu;
    // 0x16bd7c: 0x241103e7  addiu       $s1, $zero, 0x3E7
    ctx->pc = 0x16bd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x16bd80: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x16bd80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x16bd84: 0x24930048  addiu       $s3, $a0, 0x48
    ctx->pc = 0x16bd84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x16bd88: 0x251902a  slt         $s2, $s2, $s1
    ctx->pc = 0x16bd88u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16bd8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd94: 0x0  nop
    ctx->pc = 0x16bd94u;
    // NOP
label_16bd98:
    // 0x16bd98: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BD98u;
    SET_GPR_U32(ctx, 31, 0x16BDA0u);
    ctx->pc = 0x16BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BD98u;
    // 0x16bd9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BD98u, 0x16BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDA0u;
label_16bda0:
    // 0x16bda0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BDA0u;
    SET_GPR_U32(ctx, 31, 0x16BDA8u);
    ctx->pc = 0x16BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDA0u;
    // 0x16bda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BDA0u, 0x16BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDA8u;
label_16bda8:
    // 0x16bda8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16bda8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BDACu;
    {
        const bool branch_taken_0x16bdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDACu;
        // 0x16bdb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdac) {
            ctx->pc = 0x16BDBCu;
            goto label_16bdbc;
        }
    }
    ctx->pc = 0x16BDB4u;
    // 0x16bdb4: 0x232100b  movn        $v0, $s1, $s2
    ctx->pc = 0x16bdb4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x16bdb8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x16bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
label_16bdbc:
    // 0x16bdbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bdc0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16bdc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16bdc4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16BDC4u;
    {
        const bool branch_taken_0x16bdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bdc4) {
            ctx->pc = 0x16BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BDC4u;
            // 0x16bdc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bd98;
        }
    }
    ctx->pc = 0x16BDCCu;
label_16bdcc:
    // 0x16bdcc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16bdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bdd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16bdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bdd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bdd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bdd8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16bdd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bde0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDE0u;
        // 0x16bde4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BDE8u;
}
