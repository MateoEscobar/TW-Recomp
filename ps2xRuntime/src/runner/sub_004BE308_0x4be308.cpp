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

// Function: sub_004BE308
// Address: 0x4be308 - 0x4be340
void sub_004BE308_0x4be308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE308_0x4be308");
#endif

    ctx->pc = 0x4be308u;

    // 0x4be308: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4be308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be30c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4be30cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4be310: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4be310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be314: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4be314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4be318: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4be318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4be31c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4be31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4be320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be324: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4be324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4be328: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4be328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4be32c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4be32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4be330: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x4be330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4be334: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE334u;
        // 0x4be338: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE33Cu;
    // 0x4be33c: 0x0  nop
    ctx->pc = 0x4be33cu;
    // NOP
    ctx->pc = 0x4be340u;
}
