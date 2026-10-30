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

// Function: sub_004CD270
// Address: 0x4cd270 - 0x4cd2b8
void sub_004CD270_0x4cd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD270_0x4cd270");
#endif

    ctx->pc = 0x4cd270u;

    // 0x4cd270: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CD270u;
    {
        const bool branch_taken_0x4cd270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd270) {
            ctx->pc = 0x4CD2A8u;
            goto label_4cd2a8;
        }
    }
    ctx->pc = 0x4CD278u;
    // 0x4cd278: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4cd278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4cd27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cd280: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CD280u;
    {
        const bool branch_taken_0x4cd280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD280u;
        // 0x4cd284: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd280) {
            ctx->pc = 0x4CD29Cu;
            goto label_4cd29c;
        }
    }
    ctx->pc = 0x4CD288u;
    // 0x4cd288: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4cd288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4cd28c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4cd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cd290: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CD290u;
    {
        const bool branch_taken_0x4cd290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD290u;
        // 0x4cd294: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd290) {
            ctx->pc = 0x4CD2A8u;
            goto label_4cd2a8;
        }
    }
    ctx->pc = 0x4CD298u;
    // 0x4cd298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cd29c:
    // 0x4cd29c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4cd29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4cd2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD2A8u;
label_4cd2a8:
    // 0x4cd2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD2A8u;
        // 0x4cd2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD2B0u;
    // 0x4cd2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cd2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd2b4: 0x0  nop
    ctx->pc = 0x4cd2b4u;
    // NOP
    ctx->pc = 0x4cd2b8u;
}
