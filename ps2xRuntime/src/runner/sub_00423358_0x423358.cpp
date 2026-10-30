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

// Function: sub_00423358
// Address: 0x423358 - 0x4233a8
void sub_00423358_0x423358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423358_0x423358");
#endif

    ctx->pc = 0x423358u;

    // 0x423358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x423358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x42335c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x42335cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x423360: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x423360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x423364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x423364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x423368: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x423368u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x42336c: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x42336cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x423370: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x423370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x423374: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x423374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x423378: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x423378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42337c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x42337cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x423380: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x423380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x423384: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x423384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x423388: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x423388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x42338c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x42338cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x423390: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x423390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x423394: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x423394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x423398: 0x8ca38690  lw          $v1, -0x7970($a1)
    ctx->pc = 0x423398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x598690u));
    // 0x42339c: 0x3e00008  jr          $ra
    ctx->pc = 0x42339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4233A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42339Cu;
        // 0x4233a0: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4233A4u;
    // 0x4233a4: 0x0  nop
    ctx->pc = 0x4233a4u;
    // NOP
    ctx->pc = 0x4233a8u;
}
