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

// Function: sub_001254F0
// Address: 0x1254f0 - 0x125588
void sub_001254F0_0x1254f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001254F0_0x1254f0");
#endif

    ctx->pc = 0x1254f0u;

    // 0x1254f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1254f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254f4: 0xc4a10300  lwc1        $f1, 0x300($a1)
    ctx->pc = 0x1254f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254f8: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1254f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1254fc: 0x0  nop
    ctx->pc = 0x1254fcu;
    // NOP
    // 0x125500: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x125500u;
    {
        const bool branch_taken_0x125500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125500) {
            ctx->pc = 0x125504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125500u;
            // 0x125504: 0xc4a00308  lwc1        $f0, 0x308($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x125520u;
            goto label_125520;
        }
    }
    ctx->pc = 0x125508u;
    // 0x125508: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x125508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x12550c: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x12550cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
    // 0x125510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125514: 0xe4a10400  swc1        $f1, 0x400($a1)
    ctx->pc = 0x125514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1024), bits); }
    // 0x125518: 0x3e00008  jr          $ra
    ctx->pc = 0x125518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125518u;
        // 0x12551c: 0xe4a003ac  swc1        $f0, 0x3AC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125520u;
label_125520:
    // 0x125520: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x125520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125524: 0x0  nop
    ctx->pc = 0x125524u;
    // NOP
    // 0x125528: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x125528u;
    {
        const bool branch_taken_0x125528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125528u;
        // 0x12552c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125528) {
            ctx->pc = 0x12556Cu;
            goto label_12556c;
        }
    }
    ctx->pc = 0x125530u;
    // 0x125530: 0xe4a00400  swc1        $f0, 0x400($a1)
    ctx->pc = 0x125530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1024), bits); }
    // 0x125534: 0x8c44b19c  lw          $a0, -0x4E64($v0)
    ctx->pc = 0x125534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
    // 0x125538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12553c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12553Cu;
    {
        const bool branch_taken_0x12553c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12553c) {
            ctx->pc = 0x125558u;
            goto label_125558;
        }
    }
    ctx->pc = 0x125544u;
    // 0x125544: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x125544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x125548: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x125548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x12554c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12554cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125550: 0x3e00008  jr          $ra
    ctx->pc = 0x125550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125550u;
        // 0x125554: 0xe4a003ac  swc1        $f0, 0x3AC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125558u;
label_125558:
    // 0x125558: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x125558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x12555c: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x12555cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
    // 0x125560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125564: 0x3e00008  jr          $ra
    ctx->pc = 0x125564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125564u;
        // 0x125568: 0xe4a003ac  swc1        $f0, 0x3AC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12556Cu;
label_12556c:
    // 0x12556c: 0xc4a00304  lwc1        $f0, 0x304($a1)
    ctx->pc = 0x12556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125570: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x125574: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x125574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x125578: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12557c: 0xe4a00400  swc1        $f0, 0x400($a1)
    ctx->pc = 0x12557cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1024), bits); }
    // 0x125580: 0x3e00008  jr          $ra
    ctx->pc = 0x125580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125580u;
        // 0x125584: 0xe4a103ac  swc1        $f1, 0x3AC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125588u;
}
