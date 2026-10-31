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

// Function: sub_004228B8
// Address: 0x4228b8 - 0x422900
void sub_004228B8_0x4228b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004228B8_0x4228b8");
#endif

    ctx->pc = 0x4228b8u;

    // 0x4228b8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x4228b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x4228bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4228bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4228c0: 0x0  nop
    ctx->pc = 0x4228c0u;
    // NOP
    // 0x4228c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4228c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4228c8: 0x0  nop
    ctx->pc = 0x4228c8u;
    // NOP
    // 0x4228cc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x4228CCu;
    {
        const bool branch_taken_0x4228cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4228D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4228CCu;
        // 0x4228d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4228cc) {
            ctx->pc = 0x4228F8u;
            goto label_4228f8;
        }
    }
    ctx->pc = 0x4228D4u;
    // 0x4228d4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x4228d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x4228d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4228d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4228dc: 0x0  nop
    ctx->pc = 0x4228dcu;
    // NOP
    // 0x4228e0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4228e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4228e4: 0x0  nop
    ctx->pc = 0x4228e4u;
    // NOP
    // 0x4228e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x4228E8u;
    {
        const bool branch_taken_0x4228e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4228ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4228E8u;
        // 0x4228ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4228e8) {
            ctx->pc = 0x4228F8u;
            goto label_4228f8;
        }
    }
    ctx->pc = 0x4228F0u;
    // 0x4228f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4228F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4228F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4228F0u;
        // 0x4228f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4228F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4228F8u;
label_4228f8:
    // 0x4228f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4228F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4228F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422900u;
}
