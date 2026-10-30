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

// Function: sub_001A5DC0
// Address: 0x1a5dc0 - 0x1a5e38
void sub_001A5DC0_0x1a5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5DC0_0x1a5dc0");
#endif

    ctx->pc = 0x1a5dc0u;

    // 0x1a5dc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5dc8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1a5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a5dcc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a5dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a5dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5dd4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a5dd8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1a5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a5ddc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a5ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a5de0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1a5de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1a5de4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5de8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a5dec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a5decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a5df0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a5df4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1a5df4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5df8: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1a5df8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5dfc: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x1a5dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e00: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x1a5e00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e04: 0xa3a00004  sb          $zero, 0x4($sp)
    ctx->pc = 0x1a5e04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a5e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1a5e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e10: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a5e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1a5e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e18: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x1a5e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x1a5e1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a5e20: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1a5e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1a5e24: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1a5e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1a5e28: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1a5e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1a5e2c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1a5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1a5e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E30u;
        // 0x1a5e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5E38u;
}
