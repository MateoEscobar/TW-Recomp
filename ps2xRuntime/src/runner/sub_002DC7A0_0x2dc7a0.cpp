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

// Function: sub_002DC7A0
// Address: 0x2dc7a0 - 0x2dc7f8
void sub_002DC7A0_0x2dc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC7A0_0x2dc7a0");
#endif

    ctx->pc = 0x2dc7a0u;

    // 0x2dc7a0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2dc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2dc7a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2dc7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2dc7a8: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x2dc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x2dc7ac: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2dc7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2dc7b0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2dc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2dc7b4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2dc7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2dc7b8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2dc7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc7bc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2dc7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2dc7c0: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2dc7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc7c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc7c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc7cc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2dc7ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2dc7d0: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2dc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2dc7d4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2dc7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2dc7d8: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x2dc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x2dc7dc: 0xa0880032  sb          $t0, 0x32($a0)
    ctx->pc = 0x2dc7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 8));
    // 0x2dc7e0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2dc7e4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2dc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2dc7e8: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x2dc7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7ECu;
        // 0x2dc7f0: 0xa0800031  sb          $zero, 0x31($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC7F4u;
    // 0x2dc7f4: 0x0  nop
    ctx->pc = 0x2dc7f4u;
    // NOP
    ctx->pc = 0x2dc7f8u;
}
