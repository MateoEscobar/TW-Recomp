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

// Function: sub_002BAE38
// Address: 0x2bae38 - 0x2bae80
void sub_002BAE38_0x2bae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAE38_0x2bae38");
#endif

    ctx->pc = 0x2bae38u;

    // 0x2bae38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bae3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2bae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2bae40: 0x2463faf0  addiu       $v1, $v1, -0x510
    ctx->pc = 0x2bae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966000));
    // 0x2bae44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2bae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2bae48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2bae48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2bae4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2bae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2bae50: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2bae50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2bae54: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2bae54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2bae58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bae58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae5c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2bae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2bae60: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2bae60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bae64: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2bae64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bae68: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2bae68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2bae6c: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x2bae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x2bae70: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2bae70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2bae74: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x2bae74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bae78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE78u;
        // 0x2bae7c: 0xa080001d  sb          $zero, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE80u;
}
