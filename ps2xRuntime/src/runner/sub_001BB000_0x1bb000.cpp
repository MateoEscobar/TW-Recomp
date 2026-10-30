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

// Function: sub_001BB000
// Address: 0x1bb000 - 0x1bb038
void sub_001BB000_0x1bb000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB000_0x1bb000");
#endif

    ctx->pc = 0x1bb000u;

    // 0x1bb000: 0x8c8501a8  lw          $a1, 0x1A8($a0)
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x1bb004: 0x8c8201ac  lw          $v0, 0x1AC($a0)
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1bb008: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1bb008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb00c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB00Cu;
    {
        const bool branch_taken_0x1bb00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb00c) {
            ctx->pc = 0x1BB010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB00Cu;
            // 0x1bb010: 0x8c8301a4  lw          $v1, 0x1A4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB01Cu;
            goto label_1bb01c;
        }
    }
    ctx->pc = 0x1BB014u;
    // 0x1bb014: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB014u;
        // 0x1bb018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB01Cu;
label_1bb01c:
    // 0x1bb01c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1bb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bb020: 0xac8201a8  sw          $v0, 0x1A8($a0)
    ctx->pc = 0x1bb020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 2));
    // 0x1bb024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bb024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bb028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB02Cu;
        // 0x1bb030: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB034u;
    // 0x1bb034: 0x0  nop
    ctx->pc = 0x1bb034u;
    // NOP
    ctx->pc = 0x1bb038u;
}
