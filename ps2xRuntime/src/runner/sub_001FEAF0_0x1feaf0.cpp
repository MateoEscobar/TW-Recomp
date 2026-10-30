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

// Function: sub_001FEAF0
// Address: 0x1feaf0 - 0x1feb30
void sub_001FEAF0_0x1feaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEAF0_0x1feaf0");
#endif

    switch (ctx->pc) {
        case 0x1feb08u: goto label_1feb08;
        default: break;
    }

    ctx->pc = 0x1feaf0u;

    // 0x1feaf0: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x1feaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1feaf4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1feaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1feaf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1feaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1feafc: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEAFCu;
    {
        const bool branch_taken_0x1feafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAFCu;
        // 0x1feb00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feafc) {
            ctx->pc = 0x1FEB24u;
            goto label_1feb24;
        }
    }
    ctx->pc = 0x1FEB04u;
    // 0x1feb04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1feb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1feb08:
    // 0x1feb08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1feb0c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEB0Cu;
    {
        const bool branch_taken_0x1feb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB0Cu;
        // 0x1feb10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb0c) {
            ctx->pc = 0x1FEB1Cu;
            goto label_1feb1c;
        }
    }
    ctx->pc = 0x1FEB14u;
    // 0x1feb14: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB14u;
        // 0x1feb18: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB1Cu;
label_1feb1c:
    // 0x1feb1c: 0x5466fffa  bnel        $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FEB1Cu;
    {
        const bool branch_taken_0x1feb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1feb1c) {
            ctx->pc = 0x1FEB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB1Cu;
            // 0x1feb20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feb08;
        }
    }
    ctx->pc = 0x1FEB24u;
label_1feb24:
    // 0x1feb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB24u;
        // 0x1feb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB2Cu;
    // 0x1feb2c: 0x0  nop
    ctx->pc = 0x1feb2cu;
    // NOP
    ctx->pc = 0x1feb30u;
}
