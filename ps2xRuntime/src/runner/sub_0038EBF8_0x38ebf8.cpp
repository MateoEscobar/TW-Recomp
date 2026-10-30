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

// Function: sub_0038EBF8
// Address: 0x38ebf8 - 0x38ec30
void sub_0038EBF8_0x38ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EBF8_0x38ebf8");
#endif

    switch (ctx->pc) {
        case 0x38ec20u: goto label_38ec20;
        default: break;
    }

    ctx->pc = 0x38ebf8u;

    // 0x38ebf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ebfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ec00: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x38ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x38ec04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38ec08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38ec0c: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x38ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38ec10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EC10u;
    {
        const bool branch_taken_0x38ec10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC10u;
        // 0x38ec14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec10) {
            ctx->pc = 0x38EC20u;
            goto label_38ec20;
        }
    }
    ctx->pc = 0x38EC18u;
    // 0x38ec18: 0xc0e1338  jal         func_384CE0
    ctx->pc = 0x38EC18u;
    SET_GPR_U32(ctx, 31, 0x38EC20u);
    ctx->pc = 0x384CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384CE0u, 0x38EC18u, 0x38EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC20u;
label_38ec20:
    // 0x38ec20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ec20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ec24: 0x3e00008  jr          $ra
    ctx->pc = 0x38EC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC24u;
        // 0x38ec28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EC2Cu;
    // 0x38ec2c: 0x0  nop
    ctx->pc = 0x38ec2cu;
    // NOP
    ctx->pc = 0x38ec30u;
}
