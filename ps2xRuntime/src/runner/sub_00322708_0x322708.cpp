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

// Function: sub_00322708
// Address: 0x322708 - 0x322740
void sub_00322708_0x322708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322708_0x322708");
#endif

    ctx->pc = 0x322708u;

    // 0x322708: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x32270c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x32270cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x322710: 0x24634300  addiu       $v1, $v1, 0x4300
    ctx->pc = 0x322710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17152));
    // 0x322714: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x322714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x322718: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x322718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32271c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x32271cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x322720: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x322720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x322724: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x322724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x322728: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x322728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x32272c: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x32272cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x322730: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x322730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x322734: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x322734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x322738: 0x3e00008  jr          $ra
    ctx->pc = 0x322738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322738u;
        // 0x32273c: 0xa080001a  sb          $zero, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322740u;
}
