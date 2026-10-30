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

// Function: sub_002B7E00
// Address: 0x2b7e00 - 0x2b7e80
void sub_002B7E00_0x2b7e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E00_0x2b7e00");
#endif

    ctx->pc = 0x2b7e00u;

    // 0x2b7e00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7e04: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b7e08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b7e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b7e0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b7e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7e10: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
    // 0x2b7e14: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x2b7e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b7e18: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b7e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b7e1c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b7e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b7e20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b7e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e24: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b7e28: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2b7e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2b7e2c: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x2b7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2b7e30: 0xa087003e  sb          $a3, 0x3E($a0)
    ctx->pc = 0x2b7e30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7e34: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b7e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e38: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b7e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e3c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2b7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2b7e40: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2b7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2b7e44: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x2b7e44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e48: 0xa0800031  sb          $zero, 0x31($a0)
    ctx->pc = 0x2b7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e4c: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2b7e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e50: 0xa0800033  sb          $zero, 0x33($a0)
    ctx->pc = 0x2b7e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e54: 0xa0870034  sb          $a3, 0x34($a0)
    ctx->pc = 0x2b7e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7e58: 0xa0870035  sb          $a3, 0x35($a0)
    ctx->pc = 0x2b7e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7e5c: 0xa0800036  sb          $zero, 0x36($a0)
    ctx->pc = 0x2b7e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e60: 0xa0800038  sb          $zero, 0x38($a0)
    ctx->pc = 0x2b7e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e64: 0xa0800039  sb          $zero, 0x39($a0)
    ctx->pc = 0x2b7e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e68: 0xa087003a  sb          $a3, 0x3A($a0)
    ctx->pc = 0x2b7e68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7e6c: 0xa080003b  sb          $zero, 0x3B($a0)
    ctx->pc = 0x2b7e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e70: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x2b7e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E74u;
        // 0x2b7e78: 0xa080003d  sb          $zero, 0x3D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7E7Cu;
    // 0x2b7e7c: 0x0  nop
    ctx->pc = 0x2b7e7cu;
    // NOP
    ctx->pc = 0x2b7e80u;
}
