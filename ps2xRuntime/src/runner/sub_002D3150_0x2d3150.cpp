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

// Function: sub_002D3150
// Address: 0x2d3150 - 0x2d31b0
void sub_002D3150_0x2d3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3150_0x2d3150");
#endif

    ctx->pc = 0x2d3150u;

    // 0x2d3150: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d3150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d3154: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d3154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d3158: 0x24631290  addiu       $v1, $v1, 0x1290
    ctx->pc = 0x2d3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4752));
    // 0x2d315c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d3160: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d3160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d3164: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2d3164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2d3168: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2d3168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2d316c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d316cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d3170: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d3170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3174: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2d3174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3178: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2d3178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d317c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d3180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3184: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2d3184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d3188: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2d3188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2d318c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2d318cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2d3190: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2d3194: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2d3194u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d3198: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2d3198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2d319c: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2d319cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2d31a0: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x2d31a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d31a4: 0xa0800031  sb          $zero, 0x31($a0)
    ctx->pc = 0x2d31a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d31a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31A8u;
        // 0x2d31ac: 0xa0800032  sb          $zero, 0x32($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D31B0u;
}
