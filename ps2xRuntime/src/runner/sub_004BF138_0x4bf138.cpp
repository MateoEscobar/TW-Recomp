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

// Function: sub_004BF138
// Address: 0x4bf138 - 0x4bf218
void sub_004BF138_0x4bf138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF138_0x4bf138");
#endif

    ctx->pc = 0x4bf138u;

    // 0x4bf138: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4bf13c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4bf13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf140: 0x244641f0  addiu       $a2, $v0, 0x41F0
    ctx->pc = 0x4bf140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
    // 0x4bf144: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4bf144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf148: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4bf148u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4bf14c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bf14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bf150: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x4bf150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x714210u));
    // 0x4bf154: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4BF154u;
    {
        const bool branch_taken_0x4bf154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF154u;
        // 0x4bf158: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf154) {
            ctx->pc = 0x4BF1D8u;
            goto label_4bf1d8;
        }
    }
    ctx->pc = 0x4BF15Cu;
    // 0x4bf15c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x4bf15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bf160: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x4bf160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bf164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4bf164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bf168: 0x0  nop
    ctx->pc = 0x4bf168u;
    // NOP
    // 0x4bf16c: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x4BF16Cu;
    {
        const bool branch_taken_0x4bf16c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bf16c) {
            ctx->pc = 0x4BF170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF16Cu;
            // 0x4bf170: 0x250341f0  addiu       $v1, $t0, 0x41F0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16880));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF1E8u;
            goto label_4bf1e8;
        }
    }
    ctx->pc = 0x4BF174u;
    // 0x4bf174: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x4bf174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bf178: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bf178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bf17c: 0x0  nop
    ctx->pc = 0x4bf17cu;
    // NOP
    // 0x4bf180: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x4BF180u;
    {
        const bool branch_taken_0x4bf180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bf180) {
            ctx->pc = 0x4BF184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF180u;
            // 0x4bf184: 0x250341f0  addiu       $v1, $t0, 0x41F0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16880));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF1E8u;
            goto label_4bf1e8;
        }
    }
    ctx->pc = 0x4BF188u;
    // 0x4bf188: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x4bf188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bf18c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x4bf18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bf190: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4bf190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bf194: 0x0  nop
    ctx->pc = 0x4bf194u;
    // NOP
    // 0x4bf198: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x4BF198u;
    {
        const bool branch_taken_0x4bf198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF198u;
        // 0x4bf19c: 0x250341f0  addiu       $v1, $t0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf198) {
            ctx->pc = 0x4BF1E8u;
            goto label_4bf1e8;
        }
    }
    ctx->pc = 0x4BF1A0u;
    // 0x4bf1a0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x4bf1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bf1a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bf1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bf1a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x4BF1A8u;
    {
        const bool branch_taken_0x4bf1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bf1a8) {
            ctx->pc = 0x4BF1E8u;
            goto label_4bf1e8;
        }
    }
    ctx->pc = 0x4BF1B0u;
    // 0x4bf1b0: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x4bf1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bf1b4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x4bf1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bf1b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4bf1b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bf1bc: 0x0  nop
    ctx->pc = 0x4bf1bcu;
    // NOP
    // 0x4bf1c0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x4BF1C0u;
    {
        const bool branch_taken_0x4bf1c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF1C0u;
        // 0x4bf1c4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf1c0) {
            ctx->pc = 0x4BF1ECu;
            goto label_4bf1ec;
        }
    }
    ctx->pc = 0x4BF1C8u;
    // 0x4bf1c8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x4bf1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bf1cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bf1ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bf1d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x4BF1D0u;
    {
        const bool branch_taken_0x4bf1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bf1d0) {
            ctx->pc = 0x4BF1ECu;
            goto label_4bf1ec;
        }
    }
    ctx->pc = 0x4BF1D8u;
label_4bf1d8:
    // 0x4bf1d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bf1dc: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x4bf1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x4bf1e0: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x4bf1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x4bf1e4: 0x250341f0  addiu       $v1, $t0, 0x41F0
    ctx->pc = 0x4bf1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16880));
label_4bf1e8:
    // 0x4bf1e8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4bf1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4bf1ec:
    // 0x4bf1ec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4bf1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4bf1f0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4bf1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4bf1f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4bf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4bf1f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bf1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bf1fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4bf1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4bf200: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF200u;
        // 0x4bf204: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF208u;
    // 0x4bf208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4bf208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4bf20c: 0x0  nop
    ctx->pc = 0x4bf20cu;
    // NOP
    // 0x4bf210: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4bf210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4bf214: 0x0  nop
    ctx->pc = 0x4bf214u;
    // NOP
    ctx->pc = 0x4bf218u;
}
