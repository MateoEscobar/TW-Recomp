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

// Function: sub_00327CE0
// Address: 0x327ce0 - 0x327d18
void sub_00327CE0_0x327ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327CE0_0x327ce0");
#endif

    ctx->pc = 0x327ce0u;

    // 0x327ce0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x327ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x327ce4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x327ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x327ce8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x327CE8u;
    {
        const bool branch_taken_0x327ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327ce8) {
            ctx->pc = 0x327CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327CE8u;
            // 0x327cec: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327CF8u;
            goto label_327cf8;
        }
    }
    ctx->pc = 0x327CF0u;
    // 0x327cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x327CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CF0u;
        // 0x327cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327CF8u;
label_327cf8:
    // 0x327cf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327cfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x327cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327d00: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x327d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x327d04: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x327d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327d08: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x327d08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x327d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x327D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D0Cu;
        // 0x327d10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D14u;
    // 0x327d14: 0x0  nop
    ctx->pc = 0x327d14u;
    // NOP
    ctx->pc = 0x327d18u;
}
