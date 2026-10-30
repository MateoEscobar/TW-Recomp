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

// Function: sub_0042EFB8
// Address: 0x42efb8 - 0x42efe0
void sub_0042EFB8_0x42efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EFB8_0x42efb8");
#endif

    ctx->pc = 0x42efb8u;

    // 0x42efb8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42EFB8u;
    {
        const bool branch_taken_0x42efb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EFB8u;
        // 0x42efbc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42efb8) {
            ctx->pc = 0x42EFD4u;
            goto label_42efd4;
        }
    }
    ctx->pc = 0x42EFC0u;
    // 0x42efc0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x42efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x42efc4: 0x2442c280  addiu       $v0, $v0, -0x3D80
    ctx->pc = 0x42efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951552));
    // 0x42efc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42efcc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42efccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x42efd0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x42efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_42efd4:
    // 0x42efd4: 0x3e00008  jr          $ra
    ctx->pc = 0x42EFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EFDCu;
    // 0x42efdc: 0x0  nop
    ctx->pc = 0x42efdcu;
    // NOP
    ctx->pc = 0x42efe0u;
}
