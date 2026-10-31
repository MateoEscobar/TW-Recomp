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

// Function: sub_001E3180
// Address: 0x1e3180 - 0x1e31e0
void sub_001E3180_0x1e3180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3180_0x1e3180");
#endif

    ctx->pc = 0x1e3180u;

    // 0x1e3180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3184: 0x0  nop
    ctx->pc = 0x1e3184u;
    // NOP
    // 0x1e3188: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1e3188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e318c: 0x0  nop
    ctx->pc = 0x1e318cu;
    // NOP
    // 0x1e3190: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3190u;
    {
        const bool branch_taken_0x1e3190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3190) {
            ctx->pc = 0x1E3194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3190u;
            // 0x1e3194: 0xe4800050  swc1        $f0, 0x50($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E31B8u;
            goto label_1e31b8;
        }
    }
    ctx->pc = 0x1E3198u;
    // 0x1e3198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e319c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e31a0: 0x0  nop
    ctx->pc = 0x1e31a0u;
    // NOP
    // 0x1e31a4: 0x46006029  min.s       $f0, $f12, $f0
    ctx->pc = 0x1e31a4u;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
    // 0x1e31a8: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x1e31a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1e31ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e31acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e31b0: 0x0  nop
    ctx->pc = 0x1e31b0u;
    // NOP
    // 0x1e31b4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1e31b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e31b8:
    // 0x1e31b8: 0x0  nop
    ctx->pc = 0x1e31b8u;
    // NOP
    // 0x1e31bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E31BCu;
    {
        const bool branch_taken_0x1e31bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31BCu;
        // 0x1e31c0: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31bc) {
            ctx->pc = 0x1E31D4u;
            goto label_1e31d4;
        }
    }
    ctx->pc = 0x1E31C4u;
    // 0x1e31c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e31c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e31c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e31c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e31cc: 0x0  nop
    ctx->pc = 0x1e31ccu;
    // NOP
    // 0x1e31d0: 0x46006029  min.s       $f0, $f12, $f0
    ctx->pc = 0x1e31d0u;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
label_1e31d4:
    // 0x1e31d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E31D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31D4u;
        // 0x1e31d8: 0xe4800050  swc1        $f0, 0x50($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E31DCu;
    // 0x1e31dc: 0x0  nop
    ctx->pc = 0x1e31dcu;
    // NOP
    ctx->pc = 0x1e31e0u;
}
