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

// Function: sub_0042D808
// Address: 0x42d808 - 0x42d868
void sub_0042D808_0x42d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D808_0x42d808");
#endif

    ctx->pc = 0x42d808u;

    // 0x42d808: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x42d808u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x42d80c: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x42d80cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x42d810: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x42d810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x42d814: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x42d814u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x42d818: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42d818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x42d81c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x42d81cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x42d820: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x42d820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x42d824: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x42d824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42d828: 0x850019  multu       $a0, $a1
    ctx->pc = 0x42d828u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x42d82c: 0x2012  mflo        $a0
    ctx->pc = 0x42d82cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x42d830: 0x1010  mfhi        $v0
    ctx->pc = 0x42d830u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x42d834: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x42d834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x42d838: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42d83c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x42d83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x42d840: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x42d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x42d844: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42d844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x42d848: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x42d848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x42d84c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x42d84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x42d850: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x42d850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x42d854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42d858: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x42d858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x42d85c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42d860: 0x3e00008  jr          $ra
    ctx->pc = 0x42D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D860u;
        // 0x42d864: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D868u;
}
