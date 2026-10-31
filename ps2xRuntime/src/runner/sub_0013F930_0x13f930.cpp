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

// Function: sub_0013F930
// Address: 0x13f930 - 0x13f9b0
void sub_0013F930_0x13f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F930_0x13f930");
#endif

    ctx->pc = 0x13f930u;

    // 0x13f930: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x13f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13f934: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x13f938: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x13f938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x13f93c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f940: 0x460460c1  sub.s       $f3, $f12, $f4
    ctx->pc = 0x13f940u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x13f944: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x13f944u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x13f948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13f948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f94c: 0x0  nop
    ctx->pc = 0x13f94cu;
    // NOP
    // 0x13f950: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x13F950u;
    {
        const bool branch_taken_0x13f950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f950) {
            ctx->pc = 0x13F954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F950u;
            // 0x13f954: 0xe4ac0000  swc1        $f12, 0x0($a1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F9A8u;
            goto label_13f9a8;
        }
    }
    ctx->pc = 0x13F958u;
    // 0x13f958: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x13f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f95c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x13f95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f960: 0x0  nop
    ctx->pc = 0x13f960u;
    // NOP
    // 0x13f964: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x13F964u;
    {
        const bool branch_taken_0x13f964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f964) {
            ctx->pc = 0x13F968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F964u;
            // 0x13f968: 0xe4ac0000  swc1        $f12, 0x0($a1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F9A8u;
            goto label_13f9a8;
        }
    }
    ctx->pc = 0x13F96Cu;
    // 0x13f96c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f974: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x13f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f978: 0x0  nop
    ctx->pc = 0x13f978u;
    // NOP
    // 0x13f97c: 0x0  nop
    ctx->pc = 0x13f97cu;
    // NOP
    // 0x13f980: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13f980u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x13f984: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13f984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13f988: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13f988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13f98c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x13f98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x13f990: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13f990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13f994: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x13f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f998: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f99c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13f99cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13f9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9A0u;
        // 0x13f9a4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F9A8u;
label_13f9a8:
    // 0x13f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9A8u;
        // 0x13f9ac: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F9B0u;
}
