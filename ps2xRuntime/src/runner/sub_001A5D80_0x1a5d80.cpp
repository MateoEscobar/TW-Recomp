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

// Function: sub_001A5D80
// Address: 0x1a5d80 - 0x1a5dc0
void sub_001A5D80_0x1a5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5D80_0x1a5d80");
#endif

    ctx->pc = 0x1a5d80u;

    // 0x1a5d80: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a5d84: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1a5d84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a5d88: 0x244298c8  addiu       $v0, $v0, -0x6738
    ctx->pc = 0x1a5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940872));
    // 0x1a5d8c: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1a5d8cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a5d90: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x1a5d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x1a5d94: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x1a5d94u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1a5d98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d9c: 0xe48f000c  swc1        $f15, 0xC($a0)
    ctx->pc = 0x1a5d9cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a5da0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1a5da0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5da4: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1a5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1a5da8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1a5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x1a5dac: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x1a5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x1a5db0: 0xe490002c  swc1        $f16, 0x2C($a0)
    ctx->pc = 0x1a5db0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1a5db4: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x1a5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x1a5db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DB8u;
        // 0x1a5dbc: 0xe4900028  swc1        $f16, 0x28($a0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5DC0u;
}
