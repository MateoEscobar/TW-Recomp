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

// Function: sub_0042F350
// Address: 0x42f350 - 0x42f370
void sub_0042F350_0x42f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F350_0x42f350");
#endif

    ctx->pc = 0x42f350u;

    // 0x42f350: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42f350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42f354: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42f354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42f358: 0x2442c298  addiu       $v0, $v0, -0x3D68
    ctx->pc = 0x42f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951576));
    // 0x42f35c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x42f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x42f360: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42f360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x42f364: 0x3e00008  jr          $ra
    ctx->pc = 0x42F364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F364u;
        // 0x42f368: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F36Cu;
    // 0x42f36c: 0x0  nop
    ctx->pc = 0x42f36cu;
    // NOP
    ctx->pc = 0x42f370u;
}
