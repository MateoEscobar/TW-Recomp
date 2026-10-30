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

// Function: sub_002D23E8
// Address: 0x2d23e8 - 0x2d2438
void sub_002D23E8_0x2d23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D23E8_0x2d23e8");
#endif

    ctx->pc = 0x2d23e8u;

    // 0x2d23e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d23ec: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2d23ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x2d23f0: 0x25081470  addiu       $t0, $t0, 0x1470
    ctx->pc = 0x2d23f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5232));
    // 0x2d23f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d23f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d23f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d23f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d23fc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d2400: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d2400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2404: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2d2404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2d2408: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2d2408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2d240c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2d240cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2d2410: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x2d2410u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2d2414: 0xe48d001c  swc1        $f13, 0x1C($a0)
    ctx->pc = 0x2d2414u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2d2418: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x2d2418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x2d241c: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x2d241cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x2d2420: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2d2420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2424: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2d2424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2428: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2d2428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2d242c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2d242cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2d2430: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2430u;
        // 0x2d2434: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2438u;
}
