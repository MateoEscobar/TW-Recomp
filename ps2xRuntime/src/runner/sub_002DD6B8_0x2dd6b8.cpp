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

// Function: sub_002DD6B8
// Address: 0x2dd6b8 - 0x2dd6f8
void sub_002DD6B8_0x2dd6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD6B8_0x2dd6b8");
#endif

    ctx->pc = 0x2dd6b8u;

    // 0x2dd6b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dd6bc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2dd6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2dd6c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dd6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dd6c4: 0x24631e30  addiu       $v1, $v1, 0x1E30
    ctx->pc = 0x2dd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
    // 0x2dd6c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dd6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dd6cc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2dd6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2dd6d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dd6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6d4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2dd6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2dd6d8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2dd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2dd6dc: 0xa0870018  sb          $a3, 0x18($a0)
    ctx->pc = 0x2dd6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x2dd6e0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2dd6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd6e4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2dd6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd6e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2dd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2dd6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6ECu;
        // 0x2dd6f0: 0xa0800019  sb          $zero, 0x19($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD6F4u;
    // 0x2dd6f4: 0x0  nop
    ctx->pc = 0x2dd6f4u;
    // NOP
    ctx->pc = 0x2dd6f8u;
}
