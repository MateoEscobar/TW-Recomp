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

// Function: sub_0010EF90
// Address: 0x10ef90 - 0x10efc0
void sub_0010EF90_0x10ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF90_0x10ef90");
#endif

    ctx->pc = 0x10ef90u;

    // 0x10ef90: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x10ef90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ef94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10ef94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef98: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x10ef9c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x10ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10efa0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x10efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x10efa4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x10efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10efa8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x10efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x10efac: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x10efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10efb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFB0u;
        // 0x10efb4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFB8u;
    // 0x10efb8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10efbc: 0x0  nop
    ctx->pc = 0x10efbcu;
    // NOP
    ctx->pc = 0x10efc0u;
}
