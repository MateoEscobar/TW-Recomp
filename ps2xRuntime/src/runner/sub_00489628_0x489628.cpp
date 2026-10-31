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

// Function: sub_00489628
// Address: 0x489628 - 0x489750
void sub_00489628_0x489628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489628_0x489628");
#endif

    ctx->pc = 0x489628u;

    // 0x489628: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x489628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48962c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48962cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489630: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x489630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489634: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x489634u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x489638: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x489638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x48963c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x48963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489640: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x489640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489644: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x489644u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x489648: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x489648u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x48964c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x48964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489650: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x489650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489654: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x489654u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x489658: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x489658u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x48965c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x48965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489660: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x489660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489664: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x489664u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x489668: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x489668u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x48966c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x48966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489670: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x489670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489674: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x489674u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x489678: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x489678u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x48967c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x48967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489680: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x489680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x489684: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x489684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489688: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x489688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48968c: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x48968cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x489690: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x489690u;
    {
        const bool branch_taken_0x489690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x489694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489690u;
        // 0x489694: 0xe48a0014  swc1        $f10, 0x14($a0) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x489690) {
            ctx->pc = 0x489748u;
            goto label_489748;
        }
    }
    ctx->pc = 0x489698u;
    // 0x489698: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x489698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48969c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x48969cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4896a0: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x4896A0u;
    {
        const bool branch_taken_0x4896a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4896a0) {
            ctx->pc = 0x489748u;
            goto label_489748;
        }
    }
    ctx->pc = 0x4896A8u;
    // 0x4896a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4896a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4896ac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4896acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4896b0: 0x46024243  div.s       $f9, $f8, $f2
    ctx->pc = 0x4896b0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[8], ctx->f[2]); }
    // 0x4896b4: 0x46004203  div.s       $f8, $f8, $f0
    ctx->pc = 0x4896b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[0]); }
    // 0x4896b8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4896b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4896bc: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x4896bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4896c0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4896c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4896c4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4896c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4896c8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x4896c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4896cc: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x4896ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x4896d0: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x4896d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x4896d4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x4896d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x4896d8: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x4896d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x4896dc: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x4896dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x4896e0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x4896e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4896e4: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x4896e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x4896e8: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x4896e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x4896ec: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x4896ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4896f0: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x4896f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4896f4: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x4896f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4896f8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x4896f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4896fc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x4896fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x489700: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x489700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x489704: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x489704u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x489708: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x489708u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x48970c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x48970cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x489710: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x489710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x489714: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x489714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x489718: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x489718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x48971c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x48971cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x489720: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x489720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x489724: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x489724u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x489728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x489728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48972c: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x48972cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x489730: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x489730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x489734: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x489734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x489738: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x489738u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x48973c: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x48973cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x489740: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x489740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x489744: 0x0  nop
    ctx->pc = 0x489744u;
    // NOP
label_489748:
    // 0x489748: 0x3e00008  jr          $ra
    ctx->pc = 0x489748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489748u;
        // 0x48974c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489750u;
}
