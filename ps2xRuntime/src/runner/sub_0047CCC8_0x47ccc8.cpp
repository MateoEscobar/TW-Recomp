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

// Function: sub_0047CCC8
// Address: 0x47ccc8 - 0x47ce40
void sub_0047CCC8_0x47ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CCC8_0x47ccc8");
#endif

    switch (ctx->pc) {
        case 0x47ce28u: goto label_47ce28;
        default: break;
    }

    ctx->pc = 0x47ccc8u;

    // 0x47ccc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47ccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47cccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47ccd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47ccd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47ccd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ccd8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x47ccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x47ccdc: 0x8f848928  lw          $a0, -0x76D8($gp)
    ctx->pc = 0x47ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x47cce0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47cce4: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47cce8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x47cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x47ccec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x47ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x47ccf0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x47ccf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x47ccf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x47ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47ccf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x47ccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x47ccfc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x47CCFCu;
    {
        const bool branch_taken_0x47ccfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CCFCu;
        // 0x47cd00: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ccfc) {
            ctx->pc = 0x47CD28u;
            goto label_47cd28;
        }
    }
    ctx->pc = 0x47CD04u;
    // 0x47cd04: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x47cd04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47cd08: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x47cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x47cd0c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x47cd0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x47cd10: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x47cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x47cd14: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x47cd14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x47cd18: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x47cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x47cd1c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x47cd1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x47cd20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x47CD20u;
    {
        const bool branch_taken_0x47cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CD20u;
        // 0x47cd24: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cd20) {
            ctx->pc = 0x47CE28u;
            goto label_47ce28;
        }
    }
    ctx->pc = 0x47CD28u;
label_47cd28:
    // 0x47cd28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47cd2c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x47CD2Cu;
    {
        const bool branch_taken_0x47cd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47cd2c) {
            ctx->pc = 0x47CE20u;
            goto label_47ce20;
        }
    }
    ctx->pc = 0x47CD34u;
    // 0x47cd34: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd38: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x47cd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x47cd3c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x47cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cd40: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x47cd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x47cd44: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x47cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd48: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x47cd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x47cd4c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x47cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cd50: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x47cd50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x47cd54: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x47cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd58: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x47cd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x47cd5c: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x47cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cd60: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x47cd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x47cd64: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd68: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x47cd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x47cd6c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x47cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cd70: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x47cd70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x47cd74: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x47cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd78: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x47cd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x47cd7c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd80: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x47cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47cd84: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x47cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cd88: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x47cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cd8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cd8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cd90: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x47cd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cd94: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47cd94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47cd98: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cd9c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47cd9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47cda0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47cda0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47cda4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47cda4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47cda8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x47cda8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x47cdac: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x47cdacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x47cdb0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x47cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cdb4: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x47cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47cdb8: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x47cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cdbc: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x47cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cdc0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47cdc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47cdc4: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x47cdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cdc8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x47cdc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x47cdcc: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x47cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cdd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cdd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cdd4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x47cdd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x47cdd8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x47cdd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x47cddc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x47cddcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x47cde0: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x47cde0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x47cde4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x47cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cde8: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x47cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cdec: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cdf0: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x47cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cdf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cdf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cdf8: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x47cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47cdfc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x47cdfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x47ce00: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x47ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ce04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x47ce04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x47ce08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47ce08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47ce0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47ce0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47ce10: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x47ce10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x47ce14: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x47ce14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x47ce18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47CE18u;
    {
        const bool branch_taken_0x47ce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CE18u;
        // 0x47ce1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ce18) {
            ctx->pc = 0x47CE28u;
            goto label_47ce28;
        }
    }
    ctx->pc = 0x47CE20u;
label_47ce20:
    // 0x47ce20: 0xc11f218  jal         func_47C860
    ctx->pc = 0x47CE20u;
    SET_GPR_U32(ctx, 31, 0x47CE28u);
    ctx->pc = 0x47CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47CE20u;
    // 0x47ce24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C860u, 0x47CE20u, 0x47CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CE28u;
label_47ce28:
    // 0x47ce28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47ce28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ce2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ce2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ce30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47ce30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x47CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CE34u;
        // 0x47ce38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47CE3Cu;
    // 0x47ce3c: 0x0  nop
    ctx->pc = 0x47ce3cu;
    // NOP
    ctx->pc = 0x47ce40u;
}
