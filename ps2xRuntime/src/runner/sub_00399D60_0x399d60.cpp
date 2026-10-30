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

// Function: sub_00399D60
// Address: 0x399d60 - 0x399d88
void sub_00399D60_0x399d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399D60_0x399d60");
#endif

    ctx->pc = 0x399d60u;

    // 0x399d60: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x399d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x399d64: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x399d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x399d68: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x399d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x399d6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x399d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x399d70: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x399d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x399d74: 0x31c82  srl         $v1, $v1, 18
    ctx->pc = 0x399d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
    // 0x399d78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x399d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x399d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x399D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D7Cu;
        // 0x399d80: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399D84u;
    // 0x399d84: 0x0  nop
    ctx->pc = 0x399d84u;
    // NOP
    ctx->pc = 0x399d88u;
}
