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

// Function: sub_00170300
// Address: 0x170300 - 0x170330
void sub_00170300_0x170300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170300_0x170300");
#endif

    ctx->pc = 0x170300u;

    // 0x170300: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x170300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170304: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x170304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x170308: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x170308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17030c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17030cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x170310: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x170310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x170314: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x170314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x170318: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x170318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17031c: 0x3e00008  jr          $ra
    ctx->pc = 0x17031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17031Cu;
        // 0x170320: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170324u;
    // 0x170324: 0x0  nop
    ctx->pc = 0x170324u;
    // NOP
    // 0x170328: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x170328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17032c: 0x0  nop
    ctx->pc = 0x17032cu;
    // NOP
    ctx->pc = 0x170330u;
}
