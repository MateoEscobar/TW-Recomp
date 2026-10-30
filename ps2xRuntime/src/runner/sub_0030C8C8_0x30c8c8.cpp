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

// Function: sub_0030C8C8
// Address: 0x30c8c8 - 0x30c8f8
void sub_0030C8C8_0x30c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C8C8_0x30c8c8");
#endif

    ctx->pc = 0x30c8c8u;

    // 0x30c8c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x30c8cc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x30c8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x30c8d0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x30c8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x30c8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c8d8: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x30c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x30c8dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30c8e0: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x30c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5102CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5102CCu, _value); } while (0); }
    // 0x30c8e4: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x30c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x30c8e8: 0xa0800033  sb          $zero, 0x33($a0)
    ctx->pc = 0x30c8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c8ec: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x30c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x30c8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x30C8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8F0u;
        // 0x30c8f4: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C8F8u;
}
