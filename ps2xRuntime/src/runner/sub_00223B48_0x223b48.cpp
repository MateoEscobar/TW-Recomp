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

// Function: sub_00223B48
// Address: 0x223b48 - 0x223b70
void sub_00223B48_0x223b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223B48_0x223b48");
#endif

    switch (ctx->pc) {
        case 0x223b64u: goto label_223b64;
        default: break;
    }

    ctx->pc = 0x223b48u;

    // 0x223b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223b50: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x223b54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223B54u;
    {
        const bool branch_taken_0x223b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B54u;
        // 0x223b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b54) {
            ctx->pc = 0x223B64u;
            goto label_223b64;
        }
    }
    ctx->pc = 0x223B5Cu;
    // 0x223b5c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223B5Cu;
    SET_GPR_U32(ctx, 31, 0x223B64u);
    ctx->pc = 0x223B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B5Cu;
    // 0x223b60: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223B5Cu, 0x223B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B64u;
label_223b64:
    // 0x223b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b68: 0x3e00008  jr          $ra
    ctx->pc = 0x223B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B68u;
        // 0x223b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223B70u;
}
