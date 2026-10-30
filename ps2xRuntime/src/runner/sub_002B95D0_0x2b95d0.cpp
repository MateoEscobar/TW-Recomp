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

// Function: sub_002B95D0
// Address: 0x2b95d0 - 0x2b9618
void sub_002B95D0_0x2b95d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B95D0_0x2b95d0");
#endif

    ctx->pc = 0x2b95d0u;

    // 0x2b95d0: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2b95d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2b95d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b95d8: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x2b95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x2b95dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b95e0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2b95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2b95e4: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2b95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2b95e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b95e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b95ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b95ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b95f0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2b95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2b95f4: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2b95f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b95f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b95fc: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b95fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9600: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b9600u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9604: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2b9604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2b9608: 0x8ca3021c  lw          $v1, 0x21C($a1)
    ctx->pc = 0x2b9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x2b960c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2b960cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2b9610: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9610u;
        // 0x2b9614: 0xaca0021c  sw          $zero, 0x21C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9618u;
}
