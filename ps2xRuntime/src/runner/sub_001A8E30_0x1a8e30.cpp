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

// Function: sub_001A8E30
// Address: 0x1a8e30 - 0x1a8e78
void sub_001A8E30_0x1a8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8E30_0x1a8e30");
#endif

    ctx->pc = 0x1a8e30u;

    // 0x1a8e30: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a8e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8e38: 0x24429978  addiu       $v0, $v0, -0x6688
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941048));
    // 0x1a8e3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8e44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a8e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a8e48: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1a8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1a8e4c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1a8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1a8e50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a8e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e54: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1a8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1a8e58: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a8e5c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1a8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1a8e60: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1a8e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1a8e64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a8e68: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E6Cu;
        // 0x1a8e70: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8E74u;
    // 0x1a8e74: 0x0  nop
    ctx->pc = 0x1a8e74u;
    // NOP
    ctx->pc = 0x1a8e78u;
}
