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

// Function: sub_002B65F8
// Address: 0x2b65f8 - 0x2b6628
void sub_002B65F8_0x2b65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B65F8_0x2b65f8");
#endif

    ctx->pc = 0x2b65f8u;

    // 0x2b65f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b65fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b6600: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b6604: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x2b6604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x2b6608: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b6608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b660c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b660cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6610: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b6610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6614: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b6614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b6618: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b6618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b661c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B661Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B661Cu;
        // 0x2b6620: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B661Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6624u;
    // 0x2b6624: 0x0  nop
    ctx->pc = 0x2b6624u;
    // NOP
    ctx->pc = 0x2b6628u;
}
