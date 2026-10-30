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

// Function: sub_0011EA80
// Address: 0x11ea80 - 0x11eae0
void sub_0011EA80_0x11ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EA80_0x11ea80");
#endif

    switch (ctx->pc) {
        case 0x11ea98u: goto label_11ea98;
        case 0x11eaa0u: goto label_11eaa0;
        case 0x11eab0u: goto label_11eab0;
        case 0x11eac8u: goto label_11eac8;
        default: break;
    }

    ctx->pc = 0x11ea80u;

    // 0x11ea80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ea84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11ea88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ea8c: 0x2410003c  addiu       $s0, $zero, 0x3C
    ctx->pc = 0x11ea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11ea90: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x11ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x11ea94: 0x0  nop
    ctx->pc = 0x11ea94u;
    // NOP
label_11ea98:
    // 0x11ea98: 0xc0e4044  jal         func_390110
    ctx->pc = 0x11EA98u;
    SET_GPR_U32(ctx, 31, 0x11EAA0u);
    ctx->pc = 0x11EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA98u;
    // 0x11ea9c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390110u, 0x11EA98u, 0x11EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAA0u;
label_11eaa0:
    // 0x11eaa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EAA0u;
    {
        const bool branch_taken_0x11eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAA0u;
        // 0x11eaa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa0) {
            ctx->pc = 0x11EAB0u;
            goto label_11eab0;
        }
    }
    ctx->pc = 0x11EAA8u;
    // 0x11eaa8: 0xc047910  jal         func_11E440
    ctx->pc = 0x11EAA8u;
    SET_GPR_U32(ctx, 31, 0x11EAB0u);
    ctx->pc = 0x11EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAA8u;
    // 0x11eaac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x11EAA8u, 0x11EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAB0u;
label_11eab0:
    // 0x11eab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11eab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11eab4: 0x2a02006c  slti        $v0, $s0, 0x6C
    ctx->pc = 0x11eab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x11eab8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11EAB8u;
    {
        const bool branch_taken_0x11eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAB8u;
        // 0x11eabc: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eab8) {
            ctx->pc = 0x11EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ea98;
        }
    }
    ctx->pc = 0x11EAC0u;
    // 0x11eac0: 0xc047a70  jal         func_11E9C0
    ctx->pc = 0x11EAC0u;
    SET_GPR_U32(ctx, 31, 0x11EAC8u);
    ctx->pc = 0x11E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9C0u, 0x11EAC0u, 0x11EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAC8u;
label_11eac8:
    // 0x11eac8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11eac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11eaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ead0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAD0u;
        // 0x11ead4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EAD8u;
    // 0x11ead8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11ead8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11eadc: 0x0  nop
    ctx->pc = 0x11eadcu;
    // NOP
    ctx->pc = 0x11eae0u;
}
