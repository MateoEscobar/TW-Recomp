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

// Function: sub_002A30C0
// Address: 0x2a30c0 - 0x2a30e8
void sub_002A30C0_0x2a30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A30C0_0x2a30c0");
#endif

    ctx->pc = 0x2a30c0u;

    // 0x2a30c0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a30c4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2a30c8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a30cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2a30d0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2a30d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a30d4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2a30d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a30d8: 0x24420c40  addiu       $v0, $v0, 0xC40
    ctx->pc = 0x2a30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3136));
    // 0x2a30dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a30e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A30E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30E0u;
        // 0x2a30e4: 0xacc50208  sw          $a1, 0x208($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A30E8u;
}
