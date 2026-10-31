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

// Function: sub_002DA8F8
// Address: 0x2da8f8 - 0x2da960
void sub_002DA8F8_0x2da8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA8F8_0x2da8f8");
#endif

    ctx->pc = 0x2da8f8u;

    // 0x2da8f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2da8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2da8fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2da8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2da900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da904: 0x246320d0  addiu       $v1, $v1, 0x20D0
    ctx->pc = 0x2da904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8400));
    // 0x2da908: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2da908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2da90c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2da90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da910: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2da910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2da914: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2da914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da918: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2da918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x2da91c: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x2da91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x2da920: 0xe48c0038  swc1        $f12, 0x38($a0)
    ctx->pc = 0x2da920u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2da924: 0xe48e003c  swc1        $f14, 0x3C($a0)
    ctx->pc = 0x2da924u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2da928: 0xe48d0040  swc1        $f13, 0x40($a0)
    ctx->pc = 0x2da928u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2da92c: 0xa4880054  sh          $t0, 0x54($a0)
    ctx->pc = 0x2da92cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 8));
    // 0x2da930: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2da930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2da934: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2da934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da938: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2da938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da93c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2da93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2da940: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2da940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2da944: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2da944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2da948: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x2da948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x2da94c: 0xa4800052  sh          $zero, 0x52($a0)
    ctx->pc = 0x2da94cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x2da950: 0xa0800056  sb          $zero, 0x56($a0)
    ctx->pc = 0x2da950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da954: 0xa0800057  sb          $zero, 0x57($a0)
    ctx->pc = 0x2da954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da958: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA958u;
        // 0x2da95c: 0xa0a902d7  sb          $t1, 0x2D7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 727), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA960u;
}
