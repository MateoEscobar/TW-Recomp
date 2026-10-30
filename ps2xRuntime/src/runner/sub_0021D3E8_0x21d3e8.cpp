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

// Function: sub_0021D3E8
// Address: 0x21d3e8 - 0x21d408
void sub_0021D3E8_0x21d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D3E8_0x21d3e8");
#endif

    ctx->pc = 0x21d3e8u;

    // 0x21d3e8: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x21d3e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x21d3ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x21d3f0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x21d3f4: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x21d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x21d3f8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x21d3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21d3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3FCu;
        // 0x21d400: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D404u;
    // 0x21d404: 0x0  nop
    ctx->pc = 0x21d404u;
    // NOP
    ctx->pc = 0x21d408u;
}
