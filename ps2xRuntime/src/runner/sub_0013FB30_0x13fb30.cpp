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

// Function: sub_0013FB30
// Address: 0x13fb30 - 0x13fba0
void sub_0013FB30_0x13fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB30_0x13fb30");
#endif

    ctx->pc = 0x13fb30u;

    // 0x13fb30: 0x3c01c3b4  lui         $at, 0xC3B4
    ctx->pc = 0x13fb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50100 << 16));
    // 0x13fb34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fb38: 0x0  nop
    ctx->pc = 0x13fb38u;
    // NOP
    // 0x13fb3c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x13fb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fb40: 0x0  nop
    ctx->pc = 0x13fb40u;
    // NOP
    // 0x13fb44: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x13FB44u;
    {
        const bool branch_taken_0x13fb44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB44u;
        // 0x13fb48: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb44) {
            ctx->pc = 0x13FB8Cu;
            goto label_13fb8c;
        }
    }
    ctx->pc = 0x13FB4Cu;
    // 0x13fb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13fb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fb50: 0x0  nop
    ctx->pc = 0x13fb50u;
    // NOP
    // 0x13fb54: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x13fb54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fb58: 0x0  nop
    ctx->pc = 0x13fb58u;
    // NOP
    // 0x13fb5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13FB5Cu;
    {
        const bool branch_taken_0x13fb5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fb5c) {
            ctx->pc = 0x13FB70u;
            goto label_13fb70;
        }
    }
    ctx->pc = 0x13FB64u;
    // 0x13fb64: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x13fb68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13fb68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13fb6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13fb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13fb70:
    // 0x13fb70: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x13fb74: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x13fb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x13fb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fb7c: 0x0  nop
    ctx->pc = 0x13fb7cu;
    // NOP
    // 0x13fb80: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x13fb80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x13fb84: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB84u;
        // 0x13fb88: 0xe4800394  swc1        $f0, 0x394($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 916), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB8Cu;
label_13fb8c:
    // 0x13fb8c: 0xc44092bc  lwc1        $f0, -0x6D44($v0)
    ctx->pc = 0x13fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fb90: 0xe480036c  swc1        $f0, 0x36C($a0)
    ctx->pc = 0x13fb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 876), bits); }
    // 0x13fb94: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB94u;
        // 0x13fb98: 0xe4800394  swc1        $f0, 0x394($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 916), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB9Cu;
    // 0x13fb9c: 0x0  nop
    ctx->pc = 0x13fb9cu;
    // NOP
    ctx->pc = 0x13fba0u;
}
