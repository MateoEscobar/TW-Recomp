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

// Function: sub_002DA3B0
// Address: 0x2da3b0 - 0x2da408
void sub_002DA3B0_0x2da3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA3B0_0x2da3b0");
#endif

    ctx->pc = 0x2da3b0u;

    // 0x2da3b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2da3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2da3b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2da3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2da3b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da3bc: 0x24632130  addiu       $v1, $v1, 0x2130
    ctx->pc = 0x2da3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8496));
    // 0x2da3c0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2da3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2da3c4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2da3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2da3c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2da3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2da3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2da3d0: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2da3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2da3d4: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x2da3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x2da3d8: 0xe48c0028  swc1        $f12, 0x28($a0)
    ctx->pc = 0x2da3d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2da3dc: 0xe48e002c  swc1        $f14, 0x2C($a0)
    ctx->pc = 0x2da3dcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2da3e0: 0xe48d0030  swc1        $f13, 0x30($a0)
    ctx->pc = 0x2da3e0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2da3e4: 0xa489003c  sh          $t1, 0x3C($a0)
    ctx->pc = 0x2da3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 9));
    // 0x2da3e8: 0xa088003f  sb          $t0, 0x3F($a0)
    ctx->pc = 0x2da3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 8));
    // 0x2da3ec: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x2da3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x2da3f0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2da3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da3f4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2da3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da3f8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2da3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2da3fc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2da3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2da400: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA400u;
        // 0x2da404: 0xa080003e  sb          $zero, 0x3E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA408u;
}
