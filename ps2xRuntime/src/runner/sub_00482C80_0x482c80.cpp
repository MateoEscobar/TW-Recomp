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

// Function: sub_00482C80
// Address: 0x482c80 - 0x482d08
void sub_00482C80_0x482c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482C80_0x482c80");
#endif

    switch (ctx->pc) {
        case 0x482ca0u: goto label_482ca0;
        default: break;
    }

    ctx->pc = 0x482c80u;

    // 0x482c80: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x482c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482c84: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x482c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x482c88: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x482c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x482c8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x482c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x482c90: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x482c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x482c94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x482c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x482c98: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x482c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x482c9c: 0x0  nop
    ctx->pc = 0x482c9cu;
    // NOP
label_482ca0:
    // 0x482ca0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x482ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482ca4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x482ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482ca8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x482ca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x482cac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x482cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482cb0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x482cb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x482cb4: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x482cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x482cb8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x482cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x482cbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x482cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x482cc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x482cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x482cc4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x482cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x482cc8: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x482cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x482ccc: 0x0  nop
    ctx->pc = 0x482cccu;
    // NOP
    // 0x482cd0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x482CD0u;
    {
        const bool branch_taken_0x482cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x482cd0) {
            ctx->pc = 0x482CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x482CD0u;
            // 0x482cd4: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x482CE0u;
            goto label_482ce0;
        }
    }
    ctx->pc = 0x482CD8u;
    // 0x482cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x482CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482CD8u;
        // 0x482cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482CE0u;
label_482ce0:
    // 0x482ce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x482ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x482ce4: 0x0  nop
    ctx->pc = 0x482ce4u;
    // NOP
    // 0x482ce8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x482CE8u;
    {
        const bool branch_taken_0x482ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x482ce8) {
            ctx->pc = 0x482CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x482CE8u;
            // 0x482cec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x482CF0u;
            goto label_482cf0;
        }
    }
    ctx->pc = 0x482CF0u;
label_482cf0:
    // 0x482cf0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x482cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482cf4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x482cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x482cf8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x482CF8u;
    {
        const bool branch_taken_0x482cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x482CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482CF8u;
        // 0x482cfc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482cf8) {
            ctx->pc = 0x482CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_482ca0;
        }
    }
    ctx->pc = 0x482D00u;
    // 0x482d00: 0x3e00008  jr          $ra
    ctx->pc = 0x482D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482D00u;
        // 0x482d04: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482D08u;
}
