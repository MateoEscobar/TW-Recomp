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

// Function: sub_0043AC38
// Address: 0x43ac38 - 0x43ace0
void sub_0043AC38_0x43ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AC38_0x43ac38");
#endif

    switch (ctx->pc) {
        case 0x43ac64u: goto label_43ac64;
        case 0x43aca8u: goto label_43aca8;
        default: break;
    }

    ctx->pc = 0x43ac38u;

    // 0x43ac38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43ac3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43ac40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43ac44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43ac44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ac48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43ac4c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x43ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x43ac50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43AC50u;
    {
        const bool branch_taken_0x43ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AC50u;
        // 0x43ac54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ac50) {
            ctx->pc = 0x43AC6Cu;
            goto label_43ac6c;
        }
    }
    ctx->pc = 0x43AC58u;
    // 0x43ac58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x43ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43ac5c: 0xc10eef6  jal         func_43BBD8
    ctx->pc = 0x43AC5Cu;
    SET_GPR_U32(ctx, 31, 0x43AC64u);
    ctx->pc = 0x43AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AC5Cu;
    // 0x43ac60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43BBD8u, 0x43AC5Cu, 0x43AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AC64u;
label_43ac64:
    // 0x43ac64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43AC64u;
    {
        const bool branch_taken_0x43ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AC64u;
        // 0x43ac68: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ac64) {
            ctx->pc = 0x43ACB4u;
            goto label_43acb4;
        }
    }
    ctx->pc = 0x43AC6Cu;
label_43ac6c:
    // 0x43ac6c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x43ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x43ac70: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x43ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x43ac74: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x43ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43ac78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43ac7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x43AC7Cu;
    {
        const bool branch_taken_0x43ac7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AC7Cu;
        // 0x43ac80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ac7c) {
            ctx->pc = 0x43AC90u;
            goto label_43ac90;
        }
    }
    ctx->pc = 0x43AC84u;
    // 0x43ac84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43ac88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x43AC88u;
    {
        const bool branch_taken_0x43ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AC88u;
        // 0x43ac8c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ac88) {
            ctx->pc = 0x43ACC0u;
            goto label_43acc0;
        }
    }
    ctx->pc = 0x43AC90u;
label_43ac90:
    // 0x43ac90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ac94: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x43ac94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x43ac98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43ac9c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x43ac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x43aca0: 0xc10eef6  jal         func_43BBD8
    ctx->pc = 0x43ACA0u;
    SET_GPR_U32(ctx, 31, 0x43ACA8u);
    ctx->pc = 0x43ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43ACA0u;
    // 0x43aca4: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43BBD8u, 0x43ACA0u, 0x43ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43ACA8u;
label_43aca8:
    // 0x43aca8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43aca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43acac: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x43ACACu;
    {
        const bool branch_taken_0x43acac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43acac) {
            ctx->pc = 0x43ACB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43ACACu;
            // 0x43acb0: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43ACBCu;
            goto label_43acbc;
        }
    }
    ctx->pc = 0x43ACB4u;
label_43acb4:
    // 0x43acb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x43ACB4u;
    {
        const bool branch_taken_0x43acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ACB4u;
        // 0x43acb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43acb4) {
            ctx->pc = 0x43ACCCu;
            goto label_43accc;
        }
    }
    ctx->pc = 0x43ACBCu;
label_43acbc:
    // 0x43acbc: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x43acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_43acc0:
    // 0x43acc0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x43acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x43acc4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43acc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43acc8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x43acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_43accc:
    // 0x43accc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43acccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43acd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43acd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43acd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43acd8: 0x3e00008  jr          $ra
    ctx->pc = 0x43ACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ACD8u;
        // 0x43acdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43ACD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43ACE0u;
}
