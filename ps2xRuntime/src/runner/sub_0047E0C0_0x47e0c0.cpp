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

// Function: sub_0047E0C0
// Address: 0x47e0c0 - 0x47e110
void sub_0047E0C0_0x47e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E0C0_0x47e0c0");
#endif

    switch (ctx->pc) {
        case 0x47e0d8u: goto label_47e0d8;
        case 0x47e0e0u: goto label_47e0e0;
        case 0x47e0f4u: goto label_47e0f4;
        default: break;
    }

    ctx->pc = 0x47e0c0u;

    // 0x47e0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47e0c4: 0x8f848930  lw          $a0, -0x76D0($gp)
    ctx->pc = 0x47e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
    // 0x47e0c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47e0cc: 0x27908930  addiu       $s0, $gp, -0x76D0
    ctx->pc = 0x47e0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936880));
    // 0x47e0d0: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47E0D0u;
    {
        const bool branch_taken_0x47e0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x47E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E0D0u;
        // 0x47e0d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e0d0) {
            ctx->pc = 0x47E0ECu;
            goto label_47e0ec;
        }
    }
    ctx->pc = 0x47E0D8u;
label_47e0d8:
    // 0x47e0d8: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x47E0D8u;
    SET_GPR_U32(ctx, 31, 0x47E0E0u);
    ctx->pc = 0x47E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E0D8u;
    // 0x47e0dc: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x47E0D8u, 0x47E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E0E0u;
label_47e0e0:
    // 0x47e0e0: 0x8f848930  lw          $a0, -0x76D0($gp)
    ctx->pc = 0x47e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
    // 0x47e0e4: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x47E0E4u;
    {
        const bool branch_taken_0x47e0e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x47e0e4) {
            ctx->pc = 0x47E0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e0d8;
        }
    }
    ctx->pc = 0x47E0ECu;
label_47e0ec:
    // 0x47e0ec: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x47E0ECu;
    SET_GPR_U32(ctx, 31, 0x47E0F4u);
    ctx->pc = 0x47E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E0ECu;
    // 0x47e0f0: 0x8f8485dc  lw          $a0, -0x7A24($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x47E0ECu, 0x47E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E0F4u;
label_47e0f4:
    // 0x47e0f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47e0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e0fc: 0xaf8085dc  sw          $zero, -0x7A24($gp)
    ctx->pc = 0x47e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 0));
    // 0x47e100: 0xaf8085d8  sw          $zero, -0x7A28($gp)
    ctx->pc = 0x47e100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
    // 0x47e104: 0x3e00008  jr          $ra
    ctx->pc = 0x47E104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E104u;
        // 0x47e108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E10Cu;
    // 0x47e10c: 0x0  nop
    ctx->pc = 0x47e10cu;
    // NOP
    ctx->pc = 0x47e110u;
}
