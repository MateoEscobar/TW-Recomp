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

// Function: sub_00489298
// Address: 0x489298 - 0x4893d0
void sub_00489298_0x489298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489298_0x489298");
#endif

    ctx->pc = 0x489298u;

    // 0x489298: 0x8f878668  lw          $a3, -0x7998($gp)
    ctx->pc = 0x489298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48929c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x48929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4892a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4892a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4892a4: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x4892a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4892a8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4892a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4892ac: 0x90a80002  lbu         $t0, 0x2($a1)
    ctx->pc = 0x4892acu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4892b0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4892b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4892b4: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x4892b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x4892b8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x4892b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4892bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4892bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4892c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4892c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4892c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4892c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4892c8: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x4892c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4892cc: 0x473824  and         $a3, $v0, $a3
    ctx->pc = 0x4892ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4892d0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4892d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4892d4: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x4892d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x4892d8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4892d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4892dc: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x4892dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x4892e0: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x4892e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x4892e4: 0xa3a70013  sb          $a3, 0x13($sp)
    ctx->pc = 0x4892e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 7));
    // 0x4892e8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x4892e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4892ec: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x4892ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4892f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4892f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4892f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4892f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4892f8: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x4892f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x4892fc: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x4892fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x489300: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x489300u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x489304: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x489304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x489308: 0xc78082a4  lwc1        $f0, -0x7D5C($gp)
    ctx->pc = 0x489308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48930c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x48930cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x489310: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x489310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x489314: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x489314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x489318: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x489318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x48931c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x48931cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x489320: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x489320u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x489324: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x489324u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x489328: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x489328u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48932c: 0xc78182a8  lwc1        $f1, -0x7D58($gp)
    ctx->pc = 0x48932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489330: 0xc78082ac  lwc1        $f0, -0x7D54($gp)
    ctx->pc = 0x489330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489334: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x489334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x489338: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x489338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48933c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x48933cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x489340: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x489340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489344: 0x460529c2  mul.s       $f7, $f5, $f5
    ctx->pc = 0x489344u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x489348: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x489348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x48934c: 0x46042202  mul.s       $f8, $f4, $f4
    ctx->pc = 0x48934cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x489350: 0x46063242  mul.s       $f9, $f6, $f6
    ctx->pc = 0x489350u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x489354: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x489354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x489358: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x489358u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x48935c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x48935cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x489360: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x489360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x489364: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x489364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x489368: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x489368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x48936c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48936cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x489370: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x489370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x489374: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x489374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x489378: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x489378u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x48937c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x48937cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x489380: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x489380u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x489384: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x489384u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x489388: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x489388u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x48938c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x48938cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x489390: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x489390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x489394: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x489394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489398: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x489398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48939c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x48939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4893a0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x4893a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4893a4: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x4893a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4893a8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x4893a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x4893ac: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x4893acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x4893b0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4893b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4893b4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x4893b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x4893b8: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x4893b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4893bc: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4893bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4893c0: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x4893c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4893c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4893C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4893C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4893C4u;
        // 0x4893c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4893C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4893CCu;
    // 0x4893cc: 0x0  nop
    ctx->pc = 0x4893ccu;
    // NOP
    ctx->pc = 0x4893d0u;
}
