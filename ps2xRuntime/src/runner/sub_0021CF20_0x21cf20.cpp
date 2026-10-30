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

// Function: sub_0021CF20
// Address: 0x21cf20 - 0x21cf78
void sub_0021CF20_0x21cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CF20_0x21cf20");
#endif

    switch (ctx->pc) {
        case 0x21cf50u: goto label_21cf50;
        case 0x21cf60u: goto label_21cf60;
        default: break;
    }

    ctx->pc = 0x21cf20u;

    // 0x21cf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21cf24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21cf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf30: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x21cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x21cf34: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x21CF34u;
    {
        const bool branch_taken_0x21cf34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF34u;
        // 0x21cf38: 0x240201cc  addiu       $v0, $zero, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf34) {
            ctx->pc = 0x21CF64u;
            goto label_21cf64;
        }
    }
    ctx->pc = 0x21CF3Cu;
    // 0x21cf3c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x21cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x21cf40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CF40u;
    {
        const bool branch_taken_0x21cf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF40u;
        // 0x21cf44: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf40) {
            ctx->pc = 0x21CF58u;
            goto label_21cf58;
        }
    }
    ctx->pc = 0x21CF48u;
    // 0x21cf48: 0xc0cf2fc  jal         func_33CBF0
    ctx->pc = 0x21CF48u;
    SET_GPR_U32(ctx, 31, 0x21CF50u);
    ctx->pc = 0x21CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF48u;
    // 0x21cf4c: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CBF0u, 0x21CF48u, 0x21CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF50u;
label_21cf50:
    // 0x21cf50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21CF50u;
    {
        const bool branch_taken_0x21cf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF50u;
        // 0x21cf54: 0xae0001a0  sw          $zero, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf50) {
            ctx->pc = 0x21CF64u;
            goto label_21cf64;
        }
    }
    ctx->pc = 0x21CF58u;
label_21cf58:
    // 0x21cf58: 0xc0cf380  jal         func_33CE00
    ctx->pc = 0x21CF58u;
    SET_GPR_U32(ctx, 31, 0x21CF60u);
    ctx->pc = 0x21CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF58u;
    // 0x21cf5c: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE00u, 0x21CF58u, 0x21CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF60u;
label_21cf60:
    // 0x21cf60: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x21cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_21cf64:
    // 0x21cf64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21cf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF6Cu;
        // 0x21cf70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CF74u;
    // 0x21cf74: 0x0  nop
    ctx->pc = 0x21cf74u;
    // NOP
    ctx->pc = 0x21cf78u;
}
