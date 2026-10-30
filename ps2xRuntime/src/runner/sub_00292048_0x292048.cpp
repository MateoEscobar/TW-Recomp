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

// Function: sub_00292048
// Address: 0x292048 - 0x292088
void sub_00292048_0x292048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292048_0x292048");
#endif

    ctx->pc = 0x292048u;

    // 0x292048: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x292048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29204c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x29204cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x292050: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x292050u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x292054: 0x8ca30a98  lw          $v1, 0xA98($a1)
    ctx->pc = 0x292054u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510A98u));
    // 0x292058: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x29205c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x29205cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292060: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x292060u;
    {
        const bool branch_taken_0x292060 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x292060) {
            ctx->pc = 0x292064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292060u;
            // 0x292064: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292068u;
            goto label_292068;
        }
    }
    ctx->pc = 0x292068u;
label_292068:
    // 0x292068: 0x28631771  slti        $v1, $v1, 0x1771
    ctx->pc = 0x292068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6001) ? 1 : 0);
    // 0x29206c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29206Cu;
    {
        const bool branch_taken_0x29206c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29206c) {
            ctx->pc = 0x292070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29206Cu;
            // 0x292070: 0xaca20a98  sw          $v0, 0xA98($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2712), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29207Cu;
            goto label_29207c;
        }
    }
    ctx->pc = 0x292074u;
    // 0x292074: 0x3e00008  jr          $ra
    ctx->pc = 0x292074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292074u;
        // 0x292078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29207Cu;
label_29207c:
    // 0x29207c: 0x3e00008  jr          $ra
    ctx->pc = 0x29207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29207Cu;
        // 0x292080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292084u;
    // 0x292084: 0x0  nop
    ctx->pc = 0x292084u;
    // NOP
    ctx->pc = 0x292088u;
}
