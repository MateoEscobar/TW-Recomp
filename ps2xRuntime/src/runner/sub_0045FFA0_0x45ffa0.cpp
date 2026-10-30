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

// Function: sub_0045FFA0
// Address: 0x45ffa0 - 0x460248
void sub_0045FFA0_0x45ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045FFA0_0x45ffa0");
#endif

    switch (ctx->pc) {
        case 0x460018u: goto label_460018;
        default: break;
    }

    ctx->pc = 0x45ffa0u;

    // 0x45ffa0: 0xc505006c  lwc1        $f5, 0x6C($t0)
    ctx->pc = 0x45ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45ffa4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45ffa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45ffa8: 0xc5000068  lwc1        $f0, 0x68($t0)
    ctx->pc = 0x45ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ffac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ffb0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x45ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45ffb4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x45ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45ffb8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x45ffb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45ffbc: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x45ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45ffc0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x45ffc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x45ffc4: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x45ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45ffc8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x45ffc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45ffcc: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x45ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x45ffd0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x45ffd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x45ffd4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x45ffd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x45ffd8: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x45ffd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45ffdc: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x45ffdcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x45ffe0: 0x8d0b0008  lw          $t3, 0x8($t0)
    ctx->pc = 0x45ffe0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45ffe4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x45ffe4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x45ffe8: 0x8d0a0020  lw          $t2, 0x20($t0)
    ctx->pc = 0x45ffe8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x45ffec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45ffecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fff0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x45fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45fff4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x45fff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x45fff8: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x45fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x45fffc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x460000: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x460000u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x460004: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x460004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x460008: 0x18e0008d  blez        $a3, . + 4 + (0x8D << 2)
    ctx->pc = 0x460008u;
    {
        const bool branch_taken_0x460008 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x46000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460008u;
        // 0x46000c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x460008) {
            ctx->pc = 0x460240u;
            goto label_460240;
        }
    }
    ctx->pc = 0x460010u;
    // 0x460010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x460010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x460014: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x460014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_460018:
    // 0x460018: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x460018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46001c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x46001cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x460020: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x460020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460024: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x460024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x460028: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x460028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46002c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x46002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460030: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x460030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x460034: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x460034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x460038: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x460038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x46003c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x46003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x460040: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x460040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x460044: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x460044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x460048: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x460048u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x46004c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x46004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460050: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x460050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x460054: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x460054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x460058: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x460058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x46005c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x46005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460060: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x460060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x460064: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x460064u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x460068: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x460068u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x46006c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x46006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460070: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x460070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x460074: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x460074u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x460078: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x460078u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x46007c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x46007cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x460080: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x460080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460084: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x460084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x460088: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x460088u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x46008c: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x46008cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x460090: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x460090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460094: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x460094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x460098: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x460098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x46009c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x46009cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4600a0: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x4600a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4600a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4600a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4600a8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4600a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4600ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4600acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4600b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4600b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4600b4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x4600b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4600b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4600b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4600bc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4600bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4600c0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x4600c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4600c4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x4600c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4600c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4600c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4600cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4600ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4600d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4600d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4600d4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4600d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4600d8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4600d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4600dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4600dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4600e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4600e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4600e4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x4600e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4600e8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x4600e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4600ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4600ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4600f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4600f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4600f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4600f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4600f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4600f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4600fc: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4600fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x460100: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x460100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460104: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x460104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460108: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x460108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46010c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x46010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460110: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x460110u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460114: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x460114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x460118: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x46011c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x46011cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x460120: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x460120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460124: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x460124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460128: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x460128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46012c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x46012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460130: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x460130u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x460134: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x460134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x460138: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x460138u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x46013c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x46013cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x460140: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x460140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460144: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x460144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460148: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x460148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46014c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x46014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460150: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x460150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460154: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x460154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x460158: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x46015c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x46015cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x460160: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x460160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x460164: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x460164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460168: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x460168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46016c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x46016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460170: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x460170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460174: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x460174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460178: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x460178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x46017c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x46017cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x460180: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x460180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x460184: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x460184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460188: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x460188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46018c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x46018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460190: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x460190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460194: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x460194u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x460198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x46019c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x46019cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4601a0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x4601a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4601a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4601a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4601a8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x4601a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4601ac: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x4601acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4601b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x4601b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4601b4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4601b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4601b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4601b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4601bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4601bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4601c0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4601c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4601c4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4601c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4601c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4601c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4601cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4601ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4601d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4601d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4601d4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x4601d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4601d8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x4601d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4601dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4601dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4601e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4601e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4601e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4601e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4601e8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4601e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4601ec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4601ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4601f0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4601f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4601f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4601f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4601f8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x4601f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4601fc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x4601fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460200: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x460200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x460204: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x460204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x460208: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x46020c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x46020cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x460210: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x460210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460214: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x460214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460218: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x460218u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x46021c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x46021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460220: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x460220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460224: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x460224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x460228: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x460228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x46022c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x46022cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x460230: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x460234: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x460234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x460238: 0x14e0ff77  bnez        $a3, . + 4 + (-0x89 << 2)
    ctx->pc = 0x460238u;
    {
        const bool branch_taken_0x460238 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x46023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460238u;
        // 0x46023c: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460238) {
            ctx->pc = 0x460018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460018;
        }
    }
    ctx->pc = 0x460240u;
label_460240:
    // 0x460240: 0x3e00008  jr          $ra
    ctx->pc = 0x460240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460240u;
        // 0x460244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460248u;
}
