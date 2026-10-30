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

// Function: sub_004893D0
// Address: 0x4893d0 - 0x4894e0
void sub_004893D0_0x4893d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004893D0_0x4893d0");
#endif

    ctx->pc = 0x4893d0u;

    // 0x4893d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4893d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4893d4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x4893d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4893d8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4893d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4893dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4893dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4893e0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x4893e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4893e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4893e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4893e8: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x4893e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4893ec: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x4893ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x4893f0: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x4893f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4893f4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x4893f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x4893f8: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x4893f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4893fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4893fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x489400: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x489400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x489404: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x489404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x489408: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x489408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x48940c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48940cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x489410: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x489410u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x489414: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x489414u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x489418: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x489418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48941c: 0x0  nop
    ctx->pc = 0x48941cu;
    // NOP
    // 0x489420: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x489420u;
    {
        const bool branch_taken_0x489420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x489424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489420u;
        // 0x489424: 0xe4c20014  swc1        $f2, 0x14($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x489420) {
            ctx->pc = 0x48942Cu;
            goto label_48942c;
        }
    }
    ctx->pc = 0x489428u;
    // 0x489428: 0xe4c60014  swc1        $f6, 0x14($a2)
    ctx->pc = 0x489428u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_48942c:
    // 0x48942c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x48942cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x489430: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x489430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489434: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x489434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x489438: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x489438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x48943c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x48943cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x489440: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x489440u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x489444: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x489444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x489448: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x489448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48944c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x48944cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x489450: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x489450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x489454: 0xc78082b0  lwc1        $f0, -0x7D50($gp)
    ctx->pc = 0x489454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489458: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x489458u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x48945c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x48945cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x489460: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x489460u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x489464: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x489464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x489468: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x489468u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x48946c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x48946cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x489470: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x489470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489474: 0xc78382b8  lwc1        $f3, -0x7D48($gp)
    ctx->pc = 0x489474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x489478: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x489478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x48947c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x48947cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x489480: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x489480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489484: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x489484u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x489488: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x489488u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x48948c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x48948cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x489490: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x489490u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x489494: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x489494u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x489498: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x489498u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48949c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x48949cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4894a0: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x4894a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4894a4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4894a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4894a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4894a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4894ac: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x4894acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4894b0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4894b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4894b4: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x4894b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4894b8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x4894b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x4894bc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x4894bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x4894c0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x4894c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4894c4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x4894c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x4894c8: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x4894c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4894cc: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x4894ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x4894d0: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x4894d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x4894d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4894D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4894D4u;
        // 0x4894d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4894D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4894DCu;
    // 0x4894dc: 0x0  nop
    ctx->pc = 0x4894dcu;
    // NOP
    ctx->pc = 0x4894e0u;
}
