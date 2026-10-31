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

// Function: sub_002F9358
// Address: 0x2f9358 - 0x2f93b0
void sub_002F9358_0x2f9358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9358_0x2f9358");
#endif

    ctx->pc = 0x2f9358u;

    // 0x2f9358: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f9358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f935c: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x2f935cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x2f9360: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f9360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f9364: 0x24e72ac0  addiu       $a3, $a3, 0x2AC0
    ctx->pc = 0x2f9364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10944));
    // 0x2f9368: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f9368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f936c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f936cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f9370: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f9370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9374: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f9374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f9378: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2f9378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2f937c: 0xa0880031  sb          $t0, 0x31($a0)
    ctx->pc = 0x2f937cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f9380: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x2f9380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2f9384: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f9384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9388: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2f9388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f938c: 0xa0880030  sb          $t0, 0x30($a0)
    ctx->pc = 0x2f938cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f9390: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2f9390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9394: 0xa0800033  sb          $zero, 0x33($a0)
    ctx->pc = 0x2f9394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9398: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2f9398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2f939c: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x2f939cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f93a0: 0xa080003d  sb          $zero, 0x3D($a0)
    ctx->pc = 0x2f93a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f93a4: 0xa080003e  sb          $zero, 0x3E($a0)
    ctx->pc = 0x2f93a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f93a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F93A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93A8u;
        // 0x2f93ac: 0xa080003f  sb          $zero, 0x3F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F93A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F93B0u;
}
