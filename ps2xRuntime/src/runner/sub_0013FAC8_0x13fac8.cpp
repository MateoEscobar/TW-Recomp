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

// Function: sub_0013FAC8
// Address: 0x13fac8 - 0x13fb30
void sub_0013FAC8_0x13fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FAC8_0x13fac8");
#endif

    ctx->pc = 0x13fac8u;

    // 0x13fac8: 0x3c01c3b4  lui         $at, 0xC3B4
    ctx->pc = 0x13fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50100 << 16));
    // 0x13facc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13faccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fad0: 0x0  nop
    ctx->pc = 0x13fad0u;
    // NOP
    // 0x13fad4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x13fad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fad8: 0x0  nop
    ctx->pc = 0x13fad8u;
    // NOP
    // 0x13fadc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13FADCu;
    {
        const bool branch_taken_0x13fadc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FADCu;
        // 0x13fae0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fadc) {
            ctx->pc = 0x13FB04u;
            goto label_13fb04;
        }
    }
    ctx->pc = 0x13FAE4u;
    // 0x13fae4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x13fae8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x13fae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x13faec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13faecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13faf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13faf4: 0xa0a203ed  sb          $v0, 0x3ED($a1)
    ctx->pc = 0x13faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1005), (uint8_t)GPR_U32(ctx, 2));
    // 0x13faf8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x13faf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x13fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x13FAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAFCu;
        // 0x13fb00: 0xe4a00388  swc1        $f0, 0x388($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB04u;
label_13fb04:
    // 0x13fb04: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x13fb08: 0x90a403ed  lbu         $a0, 0x3ED($a1)
    ctx->pc = 0x13fb08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1005)));
    // 0x13fb0c: 0xc44092b8  lwc1        $f0, -0x6D48($v0)
    ctx->pc = 0x13fb0cu;
    { uint32_t bits = FAST_READ32(0x5492B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fb10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fb14: 0xe4a00368  swc1        $f0, 0x368($a1)
    ctx->pc = 0x13fb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 872), bits); }
    // 0x13fb18: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FB18u;
    {
        const bool branch_taken_0x13fb18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB18u;
        // 0x13fb1c: 0xe4a00388  swc1        $f0, 0x388($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb18) {
            ctx->pc = 0x13FB24u;
            goto label_13fb24;
        }
    }
    ctx->pc = 0x13FB20u;
    // 0x13fb20: 0xa0a003ed  sb          $zero, 0x3ED($a1)
    ctx->pc = 0x13fb20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1005), (uint8_t)GPR_U32(ctx, 0));
label_13fb24:
    // 0x13fb24: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB2Cu;
    // 0x13fb2c: 0x0  nop
    ctx->pc = 0x13fb2cu;
    // NOP
    ctx->pc = 0x13fb30u;
}
