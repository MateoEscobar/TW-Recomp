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

// Function: sub_004BF350
// Address: 0x4bf350 - 0x4bf380
void sub_004BF350_0x4bf350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF350_0x4bf350");
#endif

    ctx->pc = 0x4bf350u;

    // 0x4bf350: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4bf350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4bf354: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4bf354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bf358: 0x8c6241f8  lw          $v0, 0x41F8($v1)
    ctx->pc = 0x4bf358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4bf35c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4bf35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bf360: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bf360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bf364: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BF364u;
    {
        const bool branch_taken_0x4bf364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4bf364) {
            ctx->pc = 0x4BF368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF364u;
            // 0x4bf368: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF374u;
            goto label_4bf374;
        }
    }
    ctx->pc = 0x4BF36Cu;
    // 0x4bf36c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF36Cu;
        // 0x4bf370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF374u;
label_4bf374:
    // 0x4bf374: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF374u;
        // 0x4bf378: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF37Cu;
    // 0x4bf37c: 0x0  nop
    ctx->pc = 0x4bf37cu;
    // NOP
    ctx->pc = 0x4bf380u;
}
