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

// Function: sub_0014D2B8
// Address: 0x14d2b8 - 0x14d2d8
void sub_0014D2B8_0x14d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2B8_0x14d2b8");
#endif

    ctx->pc = 0x14d2b8u;

    // 0x14d2b8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x14d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x14d2bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d2c0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14d2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14d2c4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x14d2c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14d2c8: 0x24a20fff  addiu       $v0, $a1, 0xFFF
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4095));
    // 0x14d2cc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x14d2ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x14d2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2D0u;
        // 0x14d2d4: 0x21303  sra         $v0, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D2D8u;
}
