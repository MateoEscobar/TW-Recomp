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

// Function: sub_002D55D8
// Address: 0x2d55d8 - 0x2d5620
void sub_002D55D8_0x2d55d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D55D8_0x2d55d8");
#endif

    ctx->pc = 0x2d55d8u;

    // 0x2d55d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d55dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d55e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d55e4: 0x24631170  addiu       $v1, $v1, 0x1170
    ctx->pc = 0x2d55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4464));
    // 0x2d55e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2d55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2d55ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d55f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d55f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55f4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d55f8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2d55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2d55fc: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2d55fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d5600: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2d5600u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5604: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2d5604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5608: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2d5608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2d560c: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x2d560cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5610: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x2d5610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5614: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5614u;
        // 0x2d5618: 0xa080001e  sb          $zero, 0x1E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D561Cu;
    // 0x2d561c: 0x0  nop
    ctx->pc = 0x2d561cu;
    // NOP
    ctx->pc = 0x2d5620u;
}
