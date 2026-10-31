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

// Function: sub_001FEA90
// Address: 0x1fea90 - 0x1feaf0
void sub_001FEA90_0x1fea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEA90_0x1fea90");
#endif

    switch (ctx->pc) {
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feae0u: goto label_1feae0;
        default: break;
    }

    ctx->pc = 0x1fea90u;

    // 0x1fea90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fea94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fea98: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1fea98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1fea9c: 0xc07fabc  jal         func_1FEAF0
    ctx->pc = 0x1FEA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FEAA4u);
    ctx->pc = 0x1FEAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA9Cu;
    // 0x1feaa0: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAF0u, 0x1FEA9Cu, 0x1FEAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAA4u;
label_1feaa4:
    // 0x1feaa4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FEAA4u;
    {
        const bool branch_taken_0x1feaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAA4u;
        // 0x1feaa8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaa4) {
            ctx->pc = 0x1FEAE0u;
            goto label_1feae0;
        }
    }
    ctx->pc = 0x1FEAACu;
    // 0x1feaac: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1feaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1feab0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1feab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1feab4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEAB4u;
    {
        const bool branch_taken_0x1feab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1feab4) {
            ctx->pc = 0x1FEAD8u;
            goto label_1fead8;
        }
    }
    ctx->pc = 0x1FEABCu;
    // 0x1feabc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEABCu;
    {
        const bool branch_taken_0x1feabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEABCu;
        // 0x1feac0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feabc) {
            ctx->pc = 0x1FEAC8u;
            goto label_1feac8;
        }
    }
    ctx->pc = 0x1FEAC4u;
    // 0x1feac4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1feac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1feac8:
    // 0x1feac8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1feac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1feacc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1feaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1fead0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEAD0u;
    {
        const bool branch_taken_0x1fead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAD0u;
        // 0x1fead4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fead0) {
            ctx->pc = 0x1FEAE0u;
            goto label_1feae0;
        }
    }
    ctx->pc = 0x1FEAD8u;
label_1fead8:
    // 0x1fead8: 0xc13a4f4  jal         func_4E93D0
    ctx->pc = 0x1FEAD8u;
    SET_GPR_U32(ctx, 31, 0x1FEAE0u);
    ctx->pc = 0x1FEADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAD8u;
    // 0x1feadc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E93D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E93D0u, 0x1FEAD8u, 0x1FEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAE0u;
label_1feae0:
    // 0x1feae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1feae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAE4u;
        // 0x1feae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEAECu;
    // 0x1feaec: 0x0  nop
    ctx->pc = 0x1feaecu;
    // NOP
    ctx->pc = 0x1feaf0u;
}
