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

// Function: sub_00144348
// Address: 0x144348 - 0x144370
void sub_00144348_0x144348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144348_0x144348");
#endif

    ctx->pc = 0x144348u;

    // 0x144348: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x144348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14434c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x144350: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x144350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x144354: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x144354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x144358: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x144358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14435c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144360: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x144360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x144364: 0x3e00008  jr          $ra
    ctx->pc = 0x144364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144364u;
        // 0x144368: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14436Cu;
    // 0x14436c: 0x0  nop
    ctx->pc = 0x14436cu;
    // NOP
    ctx->pc = 0x144370u;
}
