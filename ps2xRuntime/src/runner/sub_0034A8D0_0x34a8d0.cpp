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

// Function: sub_0034A8D0
// Address: 0x34a8d0 - 0x34aa60
void sub_0034A8D0_0x34a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A8D0_0x34a8d0");
#endif

    switch (ctx->pc) {
        case 0x34a940u: goto label_34a940;
        case 0x34a948u: goto label_34a948;
        case 0x34a970u: goto label_34a970;
        default: break;
    }

    ctx->pc = 0x34a8d0u;

    // 0x34a8d0: 0x460e8834  c.lt.s      $f17, $f14
    ctx->pc = 0x34a8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a8d4: 0x0  nop
    ctx->pc = 0x34a8d4u;
    // NOP
    // 0x34a8d8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x34A8D8u;
    {
        const bool branch_taken_0x34a8d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a8d8) {
            ctx->pc = 0x34A978u;
            goto label_34a978;
        }
    }
    ctx->pc = 0x34A8E0u;
    // 0x34a8e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a8e4: 0x0  nop
    ctx->pc = 0x34a8e4u;
    // NOP
    // 0x34a8e8: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x34a8e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a8ec: 0x0  nop
    ctx->pc = 0x34a8ecu;
    // NOP
    // 0x34a8f0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x34A8F0u;
    {
        const bool branch_taken_0x34a8f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a8f0) {
            ctx->pc = 0x34A970u;
            goto label_34a970;
        }
    }
    ctx->pc = 0x34A8F8u;
    // 0x34a8f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a8fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a900: 0x46117041  sub.s       $f1, $f14, $f17
    ctx->pc = 0x34a900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
    // 0x34a904: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a908: 0x0  nop
    ctx->pc = 0x34a908u;
    // NOP
    // 0x34a90c: 0x0  nop
    ctx->pc = 0x34a90cu;
    // NOP
    // 0x34a910: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x34a910u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x34a914: 0x460d0802  mul.s       $f0, $f1, $f13
    ctx->pc = 0x34a914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x34a918: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34a918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a91c: 0x0  nop
    ctx->pc = 0x34a91cu;
    // NOP
    // 0x34a920: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34A920u;
    {
        const bool branch_taken_0x34a920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a920) {
            ctx->pc = 0x34A924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A920u;
            // 0x34a924: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A928u;
            goto label_34a928;
        }
    }
    ctx->pc = 0x34A928u;
label_34a928:
    // 0x34a928: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a92c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x34a92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a930: 0x0  nop
    ctx->pc = 0x34a930u;
    // NOP
    // 0x34a934: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x34A934u;
    {
        const bool branch_taken_0x34a934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a934) {
            ctx->pc = 0x34A970u;
            goto label_34a970;
        }
    }
    ctx->pc = 0x34A93Cu;
    // 0x34a93c: 0x46107801  sub.s       $f0, $f15, $f16
    ctx->pc = 0x34a93cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
label_34a940:
    // 0x34a940: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x34a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a944: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x34a944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_34a948:
    // 0x34a948: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a94c: 0x0  nop
    ctx->pc = 0x34a94cu;
    // NOP
    // 0x34a950: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34A950u;
    {
        const bool branch_taken_0x34a950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a950) {
            ctx->pc = 0x34A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A950u;
            // 0x34a954: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A958u;
            goto label_34a958;
        }
    }
    ctx->pc = 0x34A958u;
label_34a958:
    // 0x34a958: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x34a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a95c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x34a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a960: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a964: 0x0  nop
    ctx->pc = 0x34a964u;
    // NOP
    // 0x34a968: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x34A968u;
    {
        const bool branch_taken_0x34a968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a968) {
            ctx->pc = 0x34AA54u;
            goto label_34aa54;
        }
    }
    ctx->pc = 0x34A970u;
label_34a970:
    // 0x34a970: 0x3e00008  jr          $ra
    ctx->pc = 0x34A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A970u;
        // 0x34a974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A978u;
label_34a978:
    // 0x34a978: 0x46107834  c.lt.s      $f15, $f16
    ctx->pc = 0x34a978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a97c: 0x0  nop
    ctx->pc = 0x34a97cu;
    // NOP
    // 0x34a980: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x34A980u;
    {
        const bool branch_taken_0x34a980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a980) {
            ctx->pc = 0x34A9ECu;
            goto label_34a9ec;
        }
    }
    ctx->pc = 0x34A988u;
    // 0x34a988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a98c: 0x0  nop
    ctx->pc = 0x34a98cu;
    // NOP
    // 0x34a990: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x34a990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a994: 0x0  nop
    ctx->pc = 0x34a994u;
    // NOP
    // 0x34a998: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
    ctx->pc = 0x34A998u;
    {
        const bool branch_taken_0x34a998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a998) {
            ctx->pc = 0x34A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a970;
        }
    }
    ctx->pc = 0x34A9A0u;
    // 0x34a9a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a9a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a9a8: 0x46107841  sub.s       $f1, $f15, $f16
    ctx->pc = 0x34a9a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x34a9ac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a9b0: 0x0  nop
    ctx->pc = 0x34a9b0u;
    // NOP
    // 0x34a9b4: 0x0  nop
    ctx->pc = 0x34a9b4u;
    // NOP
    // 0x34a9b8: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x34a9b8u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x34a9bc: 0x460d0802  mul.s       $f0, $f1, $f13
    ctx->pc = 0x34a9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x34a9c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34a9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a9c4: 0x0  nop
    ctx->pc = 0x34a9c4u;
    // NOP
    // 0x34a9c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34A9C8u;
    {
        const bool branch_taken_0x34a9c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a9c8) {
            ctx->pc = 0x34A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A9C8u;
            // 0x34a9cc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A9D0u;
            goto label_34a9d0;
        }
    }
    ctx->pc = 0x34A9D0u;
label_34a9d0:
    // 0x34a9d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a9d4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x34a9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a9d8: 0x0  nop
    ctx->pc = 0x34a9d8u;
    // NOP
    // 0x34a9dc: 0x4501ffe4  bc1t        . + 4 + (-0x1C << 2)
    ctx->pc = 0x34A9DCu;
    {
        const bool branch_taken_0x34a9dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a9dc) {
            ctx->pc = 0x34A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a970;
        }
    }
    ctx->pc = 0x34A9E4u;
    // 0x34a9e4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x34A9E4u;
    {
        const bool branch_taken_0x34a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9E4u;
        // 0x34a9e8: 0x46117001  sub.s       $f0, $f14, $f17 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a9e4) {
            ctx->pc = 0x34A940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a940;
        }
    }
    ctx->pc = 0x34A9ECu;
label_34a9ec:
    // 0x34a9ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34a9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a9f0: 0x0  nop
    ctx->pc = 0x34a9f0u;
    // NOP
    // 0x34a9f4: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x34a9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a9f8: 0x0  nop
    ctx->pc = 0x34a9f8u;
    // NOP
    // 0x34a9fc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34A9FCu;
    {
        const bool branch_taken_0x34a9fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a9fc) {
            ctx->pc = 0x34AA1Cu;
            goto label_34aa1c;
        }
    }
    ctx->pc = 0x34AA04u;
    // 0x34aa04: 0x46107801  sub.s       $f0, $f15, $f16
    ctx->pc = 0x34aa04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x34aa08: 0x0  nop
    ctx->pc = 0x34aa08u;
    // NOP
    // 0x34aa0c: 0x0  nop
    ctx->pc = 0x34aa0cu;
    // NOP
    // 0x34aa10: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x34aa10u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x34aa14: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x34AA14u;
    {
        const bool branch_taken_0x34aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA14u;
        // 0x34aa18: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa14) {
            ctx->pc = 0x34A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a948;
        }
    }
    ctx->pc = 0x34AA1Cu;
label_34aa1c:
    // 0x34aa1c: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x34aa1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aa20: 0x0  nop
    ctx->pc = 0x34aa20u;
    // NOP
    // 0x34aa24: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x34AA24u;
    {
        const bool branch_taken_0x34aa24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34aa24) {
            ctx->pc = 0x34AA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AA24u;
            // 0x34aa28: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AA44u;
            goto label_34aa44;
        }
    }
    ctx->pc = 0x34AA2Cu;
    // 0x34aa2c: 0x46117001  sub.s       $f0, $f14, $f17
    ctx->pc = 0x34aa2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
    // 0x34aa30: 0x0  nop
    ctx->pc = 0x34aa30u;
    // NOP
    // 0x34aa34: 0x0  nop
    ctx->pc = 0x34aa34u;
    // NOP
    // 0x34aa38: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x34aa38u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x34aa3c: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x34AA3Cu;
    {
        const bool branch_taken_0x34aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA3Cu;
        // 0x34aa40: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa3c) {
            ctx->pc = 0x34A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a948;
        }
    }
    ctx->pc = 0x34AA44u;
label_34aa44:
    // 0x34aa44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34aa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34aa48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34aa48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aa4c: 0x0  nop
    ctx->pc = 0x34aa4cu;
    // NOP
    // 0x34aa50: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x34aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_34aa54:
    // 0x34aa54: 0x3e00008  jr          $ra
    ctx->pc = 0x34AA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA54u;
        // 0x34aa58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AA5Cu;
    // 0x34aa5c: 0x0  nop
    ctx->pc = 0x34aa5cu;
    // NOP
    ctx->pc = 0x34aa60u;
}
