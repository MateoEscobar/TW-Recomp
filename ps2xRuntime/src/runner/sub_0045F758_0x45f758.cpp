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

// Function: sub_0045F758
// Address: 0x45f758 - 0x45f950
void sub_0045F758_0x45f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F758_0x45f758");
#endif

    switch (ctx->pc) {
        case 0x45f780u: goto label_45f780;
        default: break;
    }

    ctx->pc = 0x45f758u;

    // 0x45f758: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x45f758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45f75c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45f75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45f760: 0x8d0b0020  lw          $t3, 0x20($t0)
    ctx->pc = 0x45f760u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x45f764: 0x8d0a0008  lw          $t2, 0x8($t0)
    ctx->pc = 0x45f764u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45f768: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x45f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45f76c: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x45f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x45f770: 0x18e00075  blez        $a3, . + 4 + (0x75 << 2)
    ctx->pc = 0x45F770u;
    {
        const bool branch_taken_0x45f770 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x45F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F770u;
        // 0x45f774: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f770) {
            ctx->pc = 0x45F948u;
            goto label_45f948;
        }
    }
    ctx->pc = 0x45F778u;
    // 0x45f778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45f77c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x45f77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_45f780:
    // 0x45f780: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x45f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f784: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45f784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45f788: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x45f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f78c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45f78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45f790: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x45f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f794: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x45f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45f798: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x45f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45f79c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x45f79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x45f7a0: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x45f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45f7a4: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x45f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45f7a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x45f7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45f7ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f7acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f7b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x45f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f7b4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45f7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45f7b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x45f7b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x45f7bc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x45f7bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45f7c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x45f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f7c4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45f7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45f7c8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x45f7c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x45f7cc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x45f7ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45f7d0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x45f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f7d4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45f7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45f7d8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x45f7d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x45f7dc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x45f7dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45f7e0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x45f7e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x45f7e4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x45f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f7e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45f7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45f7ec: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x45f7ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x45f7f0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x45f7f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45f7f4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x45f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f7f8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x45f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x45f7fc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45f7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45f800: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x45f800u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x45f804: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x45f804u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45f808: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f80c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f810: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f814: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f818: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f81c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f81cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f820: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f824: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f82c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f830: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f834: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f838: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f838u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f83c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f840: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f844: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f848: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f84c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x45f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x45f850: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f854: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f85c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f85cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f864: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f868: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f86c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f870: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f874: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f87c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45f87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f880: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f884: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f888: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f88c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f88cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f894: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f898: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x45f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x45f89c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f8a0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f8a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f8a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f8a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f8ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f8b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f8b4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f8b8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f8bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f8c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f8c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f8c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f8c8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45f8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f8cc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f8d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f8d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f8d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f8d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f8dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f8e0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f8e4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x45f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x45f8e8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f8ec: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f8f0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f8f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f8f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f8f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f8f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f8fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f8fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f900: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f904: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f908: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f90c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f90cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f910: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f914: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f91c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45f91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f920: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f924: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f928: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f928u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f92c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f930: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x45f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x45f934: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f93c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f940: 0x14e0ff8f  bnez        $a3, . + 4 + (-0x71 << 2)
    ctx->pc = 0x45F940u;
    {
        const bool branch_taken_0x45f940 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F940u;
        // 0x45f944: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f940) {
            ctx->pc = 0x45F780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45f780;
        }
    }
    ctx->pc = 0x45F948u;
label_45f948:
    // 0x45f948: 0x3e00008  jr          $ra
    ctx->pc = 0x45F948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F948u;
        // 0x45f94c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F950u;
}
