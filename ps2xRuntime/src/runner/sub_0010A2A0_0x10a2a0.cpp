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

// Function: sub_0010A2A0
// Address: 0x10a2a0 - 0x10a310
void sub_0010A2A0_0x10a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A2A0_0x10a2a0");
#endif

    ctx->pc = 0x10a2a0u;

    // 0x10a2a0: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x10a2a4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x10a2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x10a2a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2ac: 0x0  nop
    ctx->pc = 0x10a2acu;
    // NOP
    // 0x10a2b0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10a2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a2b4: 0x0  nop
    ctx->pc = 0x10a2b4u;
    // NOP
    // 0x10a2b8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x10A2B8u;
    {
        const bool branch_taken_0x10a2b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2B8u;
        // 0x10a2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2b8) {
            ctx->pc = 0x10A308u;
            goto label_10a308;
        }
    }
    ctx->pc = 0x10A2C0u;
    // 0x10a2c0: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x10a2c4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x10a2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x10a2c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2cc: 0x0  nop
    ctx->pc = 0x10a2ccu;
    // NOP
    // 0x10a2d0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10a2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a2d4: 0x0  nop
    ctx->pc = 0x10a2d4u;
    // NOP
    // 0x10a2d8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x10A2D8u;
    {
        const bool branch_taken_0x10a2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2D8u;
        // 0x10a2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2d8) {
            ctx->pc = 0x10A308u;
            goto label_10a308;
        }
    }
    ctx->pc = 0x10A2E0u;
    // 0x10a2e0: 0x3c01403f  lui         $at, 0x403F
    ctx->pc = 0x10a2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16447 << 16));
    // 0x10a2e4: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x10a2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x10a2e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2ec: 0x0  nop
    ctx->pc = 0x10a2ecu;
    // NOP
    // 0x10a2f0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10a2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a2f4: 0x0  nop
    ctx->pc = 0x10a2f4u;
    // NOP
    // 0x10a2f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x10A2F8u;
    {
        const bool branch_taken_0x10a2f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2F8u;
        // 0x10a2fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2f8) {
            ctx->pc = 0x10A308u;
            goto label_10a308;
        }
    }
    ctx->pc = 0x10A300u;
    // 0x10a300: 0x3e00008  jr          $ra
    ctx->pc = 0x10A300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A300u;
        // 0x10a304: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A308u;
label_10a308:
    // 0x10a308: 0x3e00008  jr          $ra
    ctx->pc = 0x10A308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A310u;
}
