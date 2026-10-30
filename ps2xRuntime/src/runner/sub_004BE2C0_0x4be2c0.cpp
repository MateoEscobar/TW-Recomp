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

// Function: sub_004BE2C0
// Address: 0x4be2c0 - 0x4be308
void sub_004BE2C0_0x4be2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE2C0_0x4be2c0");
#endif

    ctx->pc = 0x4be2c0u;

    // 0x4be2c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4be2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be2c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4be2c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4be2c8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4be2c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4be2cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4be2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be2d0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4be2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4be2d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4be2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4be2d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be2dc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4be2dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4be2e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4be2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4be2e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4be2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4be2e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4be2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4be2ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4be2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4be2f0: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4be2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4be2f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4be2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4be2f8: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x4be2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4be2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE2FCu;
        // 0x4be300: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE304u;
    // 0x4be304: 0x0  nop
    ctx->pc = 0x4be304u;
    // NOP
    ctx->pc = 0x4be308u;
}
