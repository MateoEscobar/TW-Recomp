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

// Function: sub_002ADE60
// Address: 0x2ade60 - 0x2ade90
void sub_002ADE60_0x2ade60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADE60_0x2ade60");
#endif

    switch (ctx->pc) {
        case 0x2ade80u: goto label_2ade80;
        default: break;
    }

    ctx->pc = 0x2ade60u;

    // 0x2ade60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ade60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ade64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ade64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ade68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ade68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ade6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ade6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ade70: 0xa04502d3  sb          $a1, 0x2D3($v0)
    ctx->pc = 0x2ade70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 723), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ade74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ade78: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2ADE78u;
    SET_GPR_U32(ctx, 31, 0x2ADE80u);
    ctx->pc = 0x2ADE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE78u;
    // 0x2ade7c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2ADE78u, 0x2ADE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE80u;
label_2ade80:
    // 0x2ade80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ade80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ade84: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE84u;
        // 0x2ade88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADE8Cu;
    // 0x2ade8c: 0x0  nop
    ctx->pc = 0x2ade8cu;
    // NOP
    ctx->pc = 0x2ade90u;
}
