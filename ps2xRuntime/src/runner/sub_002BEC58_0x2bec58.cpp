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

// Function: sub_002BEC58
// Address: 0x2bec58 - 0x2becb8
void sub_002BEC58_0x2bec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEC58_0x2bec58");
#endif

    ctx->pc = 0x2bec58u;

    // 0x2bec58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bec5c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2bec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2bec60: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x2bec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x2bec64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2bec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2bec68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2bec68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2bec6c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2bec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x2bec70: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2bec70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2bec74: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2bec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bec78: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2bec78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2bec7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bec7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec80: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2bec80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bec84: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2bec84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bec88: 0x8cc3bd30  lw          $v1, -0x42D0($a2)
    ctx->pc = 0x2bec88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2bec8c: 0xa0850029  sb          $a1, 0x29($a0)
    ctx->pc = 0x2bec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bec90: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2bec90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2bec94: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2bec94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2bec98: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2bec98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2bec9c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2bec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2beca0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2beca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2beca4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2beca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2beca8: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x2beca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2becac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECACu;
        // 0x2becb0: 0xa080002a  sb          $zero, 0x2A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECB4u;
    // 0x2becb4: 0x0  nop
    ctx->pc = 0x2becb4u;
    // NOP
    ctx->pc = 0x2becb8u;
}
