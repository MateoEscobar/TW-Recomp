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

// Function: sub_00480430
// Address: 0x480430 - 0x4804d0
void sub_00480430_0x480430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480430_0x480430");
#endif

    switch (ctx->pc) {
        case 0x480440u: goto label_480440;
        default: break;
    }

    ctx->pc = 0x480430u;

    // 0x480430: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x480430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x480434: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x480434u;
    {
        const bool branch_taken_0x480434 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x480438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480434u;
        // 0x480438: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480434) {
            ctx->pc = 0x4804C8u;
            goto label_4804c8;
        }
    }
    ctx->pc = 0x48043Cu;
    // 0x48043c: 0x0  nop
    ctx->pc = 0x48043cu;
    // NOP
label_480440:
    // 0x480440: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x480440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x480444: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x480444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x480448: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x480448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48044c: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x48044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x480450: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x480450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x480454: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x480454u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x480458: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x480458u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x48045c: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x48045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x480460: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x480460u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x480464: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x480464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x480468: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x480468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x48046c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x48046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480470: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x480470u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x480474: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x480474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480478: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x480478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x48047c: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x48047cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x480480: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x480480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x480484: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x480484u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x480488: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x480488u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x48048c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x48048cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x480490: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x480490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x480494: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x480494u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x480498: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x480498u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48049c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x48049cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4804a0: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x4804a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4804a4: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x4804a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x4804a8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4804a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4804ac: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4804acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4804b0: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x4804b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4804b4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x4804b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x4804b8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x4804b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4804bc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4804bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4804c0: 0x4c1ffdf  bgez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4804C0u;
    {
        const bool branch_taken_0x4804c0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4804C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4804C0u;
        // 0x4804c4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4804c0) {
            ctx->pc = 0x480440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_480440;
        }
    }
    ctx->pc = 0x4804C8u;
label_4804c8:
    // 0x4804c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4804C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4804C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4804D0u;
}
