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

// Function: sub_0016AE60
// Address: 0x16ae60 - 0x16ae90
void sub_0016AE60_0x16ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AE60_0x16ae60");
#endif

    switch (ctx->pc) {
        case 0x16ae80u: goto label_16ae80;
        default: break;
    }

    ctx->pc = 0x16ae60u;

    // 0x16ae60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ae64: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ae68: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16ae68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16ae6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ae70: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AE70u;
    {
        const bool branch_taken_0x16ae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE70u;
        // 0x16ae74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae70) {
            ctx->pc = 0x16AE80u;
            goto label_16ae80;
        }
    }
    ctx->pc = 0x16AE78u;
    // 0x16ae78: 0xc05b0ea  jal         func_16C3A8
    ctx->pc = 0x16AE78u;
    SET_GPR_U32(ctx, 31, 0x16AE80u);
    ctx->pc = 0x16AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE78u;
    // 0x16ae7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3A8u, 0x16AE78u, 0x16AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE80u;
label_16ae80:
    // 0x16ae80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ae80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae84: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE84u;
        // 0x16ae88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE8Cu;
    // 0x16ae8c: 0x0  nop
    ctx->pc = 0x16ae8cu;
    // NOP
    ctx->pc = 0x16ae90u;
}
