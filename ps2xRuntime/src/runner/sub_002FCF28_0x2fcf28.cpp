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

// Function: sub_002FCF28
// Address: 0x2fcf28 - 0x2fcf48
void sub_002FCF28_0x2fcf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCF28_0x2fcf28");
#endif

    ctx->pc = 0x2fcf28u;

    // 0x2fcf28: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fcf2c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fcf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fcf30: 0x24633220  addiu       $v1, $v1, 0x3220
    ctx->pc = 0x2fcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12832));
    // 0x2fcf34: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x2fcf34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fcf38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fcf38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf3c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fcf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fcf40: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF40u;
        // 0x2fcf44: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCF48u;
}
