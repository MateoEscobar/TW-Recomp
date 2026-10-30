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

// Function: sub_0010B1C8
// Address: 0x10b1c8 - 0x10b290
void sub_0010B1C8_0x10b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B1C8_0x10b1c8");
#endif

    ctx->pc = 0x10b1c8u;

    // 0x10b1c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10b1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10b1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b1d0: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x10b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b1d4: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x10b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10b1d8: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x10b1d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x10b1dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10b1dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b1e0: 0x0  nop
    ctx->pc = 0x10b1e0u;
    // NOP
    // 0x10b1e4: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x10B1E4u;
    {
        const bool branch_taken_0x10b1e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b1e4) {
            ctx->pc = 0x10B1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B1E4u;
            // 0x10b1e8: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B23Cu;
            goto label_10b23c;
        }
    }
    ctx->pc = 0x10B1ECu;
    // 0x10b1ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10b1f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10b1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b1f4: 0xc440a8a4  lwc1        $f0, -0x575C($v0)
    ctx->pc = 0x10b1f4u;
    { uint32_t bits = FAST_READ32(0x50A8A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b1f8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x10B1F8u;
    {
        const bool branch_taken_0x10b1f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1F8u;
        // 0x10b1fc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1f8) {
            ctx->pc = 0x10B21Cu;
            goto label_10b21c;
        }
    }
    ctx->pc = 0x10B200u;
    // 0x10b200: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x10b200u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x10b204: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10b204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b208: 0x0  nop
    ctx->pc = 0x10b208u;
    // NOP
    // 0x10b20c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x10B20Cu;
    {
        const bool branch_taken_0x10b20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b20c) {
            ctx->pc = 0x10B210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B20Cu;
            // 0x10b210: 0xe4a30024  swc1        $f3, 0x24($a1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B238u;
            goto label_10b238;
        }
    }
    ctx->pc = 0x10B214u;
    // 0x10b214: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B214u;
    {
        const bool branch_taken_0x10b214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B214u;
        // 0x10b218: 0x460c1001  sub.s       $f0, $f2, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b214) {
            ctx->pc = 0x10B234u;
            goto label_10b234;
        }
    }
    ctx->pc = 0x10B21Cu;
label_10b21c:
    // 0x10b21c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x10b21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b220: 0x0  nop
    ctx->pc = 0x10b220u;
    // NOP
    // 0x10b224: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x10B224u;
    {
        const bool branch_taken_0x10b224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b224) {
            ctx->pc = 0x10B228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B224u;
            // 0x10b228: 0x460c1000  add.s       $f0, $f2, $f12 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B234u;
            goto label_10b234;
        }
    }
    ctx->pc = 0x10B22Cu;
    // 0x10b22c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B22Cu;
    {
        const bool branch_taken_0x10b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B22Cu;
        // 0x10b230: 0xe4a30024  swc1        $f3, 0x24($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b22c) {
            ctx->pc = 0x10B238u;
            goto label_10b238;
        }
    }
    ctx->pc = 0x10B234u;
label_10b234:
    // 0x10b234: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x10b234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_10b238:
    // 0x10b238: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x10b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_10b23c:
    // 0x10b23c: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x10b23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x10b240: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x10b240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x10b244: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b248: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10b248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x10b24c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10b24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10b250: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10b250u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b254: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x10b254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x10b258: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10b258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10b25c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10b260: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10b260u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b264: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x10b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b268: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10b268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b26c: 0x0  nop
    ctx->pc = 0x10b26cu;
    // NOP
    // 0x10b270: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x10B270u;
    {
        const bool branch_taken_0x10b270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b270) {
            ctx->pc = 0x10B274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B270u;
            // 0x10b274: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B27Cu;
            goto label_10b27c;
        }
    }
    ctx->pc = 0x10B278u;
    // 0x10b278: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x10b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_10b27c:
    // 0x10b27c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10b27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10b280: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x10b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x10b284: 0x3e00008  jr          $ra
    ctx->pc = 0x10B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B284u;
        // 0x10b288: 0xa462001e  sh          $v0, 0x1E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B28Cu;
    // 0x10b28c: 0x0  nop
    ctx->pc = 0x10b28cu;
    // NOP
    ctx->pc = 0x10b290u;
}
