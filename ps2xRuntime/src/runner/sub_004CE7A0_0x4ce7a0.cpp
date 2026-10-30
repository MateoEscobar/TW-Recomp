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

// Function: sub_004CE7A0
// Address: 0x4ce7a0 - 0x4ce7d0
void sub_004CE7A0_0x4ce7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE7A0_0x4ce7a0");
#endif

    ctx->pc = 0x4ce7a0u;

    // 0x4ce7a0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x4ce7a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4ce7a4: 0x1812  mflo        $v1
    ctx->pc = 0x4ce7a4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4ce7a8: 0x1010  mfhi        $v0
    ctx->pc = 0x4ce7a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4ce7ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4ce7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4ce7b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ce7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ce7b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4ce7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4ce7b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ce7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ce7bc: 0xc21016  dsrlv       $v0, $v0, $a2
    ctx->pc = 0x4ce7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 6) & 0x3F));
    // 0x4ce7c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ce7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ce7c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ce7c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ce7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE7D0u;
}
