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

// Function: sub_0045EA90
// Address: 0x45ea90 - 0x45eb30
void sub_0045EA90_0x45ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EA90_0x45ea90");
#endif

    switch (ctx->pc) {
        case 0x45eaa8u: goto label_45eaa8;
        default: break;
    }

    ctx->pc = 0x45ea90u;

    // 0x45ea90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45ea94: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x45ea94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x45ea98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45ea9c: 0x18a00021  blez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x45EA9Cu;
    {
        const bool branch_taken_0x45ea9c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x45EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EA9Cu;
        // 0x45eaa0: 0x8cc20014  lw          $v0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ea9c) {
            ctx->pc = 0x45EB24u;
            goto label_45eb24;
        }
    }
    ctx->pc = 0x45EAA4u;
    // 0x45eaa4: 0x0  nop
    ctx->pc = 0x45eaa4u;
    // NOP
label_45eaa8:
    // 0x45eaa8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x45eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45eaac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45eab0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x45eab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45eab4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eab8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45eabc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x45eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45eac0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x45eac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45eac4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45eac8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eacc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45eaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45ead0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ead4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45ead4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45ead8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eadc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45eadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45eae0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45eae4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eae8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45eaec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45eaf0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45eaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45eaf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eaf8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45eaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45eafc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45eb00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eb04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45eb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45eb08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45eb0c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45eb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45eb10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45eb14: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x45eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x45eb18: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45eb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45eb1c: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x45EB1Cu;
    {
        const bool branch_taken_0x45eb1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EB1Cu;
        // 0x45eb20: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eb1c) {
            ctx->pc = 0x45EAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45eaa8;
        }
    }
    ctx->pc = 0x45EB24u;
label_45eb24:
    // 0x45eb24: 0x3e00008  jr          $ra
    ctx->pc = 0x45EB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EB2Cu;
    // 0x45eb2c: 0x0  nop
    ctx->pc = 0x45eb2cu;
    // NOP
    ctx->pc = 0x45eb30u;
}
