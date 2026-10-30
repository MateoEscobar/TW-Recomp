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

// Function: sub_0022AE4C
// Address: 0x22ae4c - 0x22ae7c
void sub_0022AE4C_0x22ae4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE4C_0x22ae4c");
#endif

    switch (ctx->pc) {
        case 0x22ae58u: goto label_22ae58;
        default: break;
    }

    ctx->pc = 0x22ae4cu;

label_22ae4c:
    // 0x22ae4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ae4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ae50: 0x3e00008  jr          $ra
    ctx->pc = 0x22AE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AE58u;
label_22ae58:
    // 0x22ae58: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x22ae58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22ae5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22AE5Cu;
    {
        const bool branch_taken_0x22ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE5Cu;
        // 0x22ae60: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae5c) {
            ctx->pc = 0x22AEA4u;
            return;
        }
    }
    ctx->pc = 0x22AE64u;
    // 0x22ae64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x22ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22ae68: 0x2442bec0  addiu       $v0, $v0, -0x4140
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950592));
    // 0x22ae6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ae70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ae74: 0x800008  jr          $a0
    ctx->pc = 0x22AE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AE4Cu: goto label_22ae4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22AE7Cu;
}
