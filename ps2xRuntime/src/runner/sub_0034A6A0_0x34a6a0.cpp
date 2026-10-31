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

// Function: sub_0034A6A0
// Address: 0x34a6a0 - 0x34a6d0
void sub_0034A6A0_0x34a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A6A0_0x34a6a0");
#endif

    ctx->pc = 0x34a6a0u;

    // 0x34a6a0: 0x460f6300  add.s       $f12, $f12, $f15
    ctx->pc = 0x34a6a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[15]);
    // 0x34a6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a6a8: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x34a6a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x34a6ac: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x34a6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a6b0: 0x0  nop
    ctx->pc = 0x34a6b0u;
    // NOP
    // 0x34a6b4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x34A6B4u;
    {
        const bool branch_taken_0x34a6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a6b4) {
            ctx->pc = 0x34A6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A6B4u;
            // 0x34a6b8: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A6C4u;
            goto label_34a6c4;
        }
    }
    ctx->pc = 0x34A6BCu;
    // 0x34a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x34A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6BCu;
        // 0x34a6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A6C4u;
label_34a6c4:
    // 0x34a6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6C4u;
        // 0x34a6c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A6CCu;
    // 0x34a6cc: 0x0  nop
    ctx->pc = 0x34a6ccu;
    // NOP
    ctx->pc = 0x34a6d0u;
}
