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

// Function: sub_00125588
// Address: 0x125588 - 0x1255f8
void sub_00125588_0x125588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125588_0x125588");
#endif

    ctx->pc = 0x125588u;

    // 0x125588: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x125588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x12558c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12558cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125590: 0x8c44b19c  lw          $a0, -0x4E64($v0)
    ctx->pc = 0x125590u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B19Cu));
    // 0x125594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125598: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x125598u;
    {
        const bool branch_taken_0x125598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125598u;
        // 0x12559c: 0xc4a10400  lwc1        $f1, 0x400($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125598) {
            ctx->pc = 0x1255D4u;
            goto label_1255d4;
        }
    }
    ctx->pc = 0x1255A0u;
    // 0x1255a0: 0xc4a00300  lwc1        $f0, 0x300($a1)
    ctx->pc = 0x1255a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1255a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1255a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255a8: 0x0  nop
    ctx->pc = 0x1255a8u;
    // NOP
    // 0x1255ac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1255ACu;
    {
        const bool branch_taken_0x1255ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1255ac) {
            ctx->pc = 0x1255B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1255ACu;
            // 0x1255b0: 0xc4a00308  lwc1        $f0, 0x308($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1255BCu;
            goto label_1255bc;
        }
    }
    ctx->pc = 0x1255B4u;
    // 0x1255b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1255B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255B4u;
        // 0x1255b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1255B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1255BCu;
label_1255bc:
    // 0x1255bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1255bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255c0: 0x0  nop
    ctx->pc = 0x1255c0u;
    // NOP
    // 0x1255c4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1255C4u;
    {
        const bool branch_taken_0x1255c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255C4u;
        // 0x1255c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255c4) {
            ctx->pc = 0x1255ECu;
            goto label_1255ec;
        }
    }
    ctx->pc = 0x1255CCu;
    // 0x1255cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1255CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255CCu;
        // 0x1255d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1255CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1255D4u;
label_1255d4:
    // 0x1255d4: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x1255d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1255d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1255d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255dc: 0x0  nop
    ctx->pc = 0x1255dcu;
    // NOP
    // 0x1255e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1255E0u;
    {
        const bool branch_taken_0x1255e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1255E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255E0u;
        // 0x1255e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255e0) {
            ctx->pc = 0x1255ECu;
            goto label_1255ec;
        }
    }
    ctx->pc = 0x1255E8u;
    // 0x1255e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1255e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1255ec:
    // 0x1255ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1255ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1255ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1255F4u;
    // 0x1255f4: 0x0  nop
    ctx->pc = 0x1255f4u;
    // NOP
    ctx->pc = 0x1255f8u;
}
