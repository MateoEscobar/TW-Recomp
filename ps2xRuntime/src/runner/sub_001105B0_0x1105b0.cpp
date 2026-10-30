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

// Function: sub_001105B0
// Address: 0x1105b0 - 0x110618
void sub_001105B0_0x1105b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001105B0_0x1105b0");
#endif

    switch (ctx->pc) {
        case 0x1105f8u: goto label_1105f8;
        default: break;
    }

    ctx->pc = 0x1105b0u;

    // 0x1105b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1105b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1105b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1105b8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1105b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1105bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1105bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1105c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1105c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1105c4: 0x0  nop
    ctx->pc = 0x1105c4u;
    // NOP
    // 0x1105c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1105C8u;
    {
        const bool branch_taken_0x1105c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1105CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105C8u;
        // 0x1105cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105c8) {
            ctx->pc = 0x1105D4u;
            goto label_1105d4;
        }
    }
    ctx->pc = 0x1105D0u;
    // 0x1105d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1105d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1105d4:
    // 0x1105d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1105d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1105d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1105d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1105dc: 0x0  nop
    ctx->pc = 0x1105dcu;
    // NOP
    // 0x1105e0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1105e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1105e4: 0x0  nop
    ctx->pc = 0x1105e4u;
    // NOP
    // 0x1105e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1105E8u;
    {
        const bool branch_taken_0x1105e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1105e8) {
            ctx->pc = 0x1105ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1105E8u;
            // 0x1105ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1105F0u;
            goto label_1105f0;
        }
    }
    ctx->pc = 0x1105F0u;
label_1105f0:
    // 0x1105f0: 0xc044bb0  jal         func_112EC0
    ctx->pc = 0x1105F0u;
    SET_GPR_U32(ctx, 31, 0x1105F8u);
    ctx->pc = 0x1105F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105F0u;
    // 0x1105f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x112EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112EC0u, 0x1105F0u, 0x1105F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105F8u;
label_1105f8:
    // 0x1105f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1105f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1105fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1105fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110600: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x110600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x110604: 0xe47457ac  swc1        $f20, 0x57AC($v1)
    ctx->pc = 0x110604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 22444), bits); }
    // 0x110608: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x110608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11060c: 0x3e00008  jr          $ra
    ctx->pc = 0x11060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11060Cu;
        // 0x110610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110614u;
    // 0x110614: 0x0  nop
    ctx->pc = 0x110614u;
    // NOP
    ctx->pc = 0x110618u;
}
