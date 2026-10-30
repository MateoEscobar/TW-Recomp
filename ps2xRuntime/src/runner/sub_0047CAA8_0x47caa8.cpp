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

// Function: sub_0047CAA8
// Address: 0x47caa8 - 0x47ccc8
void sub_0047CAA8_0x47caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CAA8_0x47caa8");
#endif

    ctx->pc = 0x47caa8u;

    // 0x47caa8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x47CAA8u;
    {
        const bool branch_taken_0x47caa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CAA8u;
        // 0x47caac: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47caa8) {
            ctx->pc = 0x47CAC0u;
            goto label_47cac0;
        }
    }
    ctx->pc = 0x47CAB0u;
    // 0x47cab0: 0x8f838928  lw          $v1, -0x76D8($gp)
    ctx->pc = 0x47cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x47cab4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47cab8: 0x2442ad24  addiu       $v0, $v0, -0x52DC
    ctx->pc = 0x47cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946084));
    // 0x47cabc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x47cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47cac0:
    // 0x47cac0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x47cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x47cac4: 0xc4890004  lwc1        $f9, 0x4($a0)
    ctx->pc = 0x47cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x47cac8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x47cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47cacc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x47caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x47cad0: 0xc4880010  lwc1        $f8, 0x10($a0)
    ctx->pc = 0x47cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x47cad4: 0x46094c82  mul.s       $f18, $f9, $f9
    ctx->pc = 0x47cad4u;
    ctx->f[18] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x47cad8: 0xc48d0000  lwc1        $f13, 0x0($a0)
    ctx->pc = 0x47cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x47cadc: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x47cadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x47cae0: 0x46084442  mul.s       $f17, $f8, $f8
    ctx->pc = 0x47cae0u;
    ctx->f[17] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x47cae4: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x47cae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x47cae8: 0x460d6882  mul.s       $f2, $f13, $f13
    ctx->pc = 0x47cae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x47caec: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x47caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x47caf0: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x47caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47caf4: 0x460a54c2  mul.s       $f19, $f10, $f10
    ctx->pc = 0x47caf4u;
    ctx->f[19] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x47caf8: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x47caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47cafc: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x47cafcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x47cb00: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x47cb00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
    // 0x47cb04: 0xc46b0008  lwc1        $f11, 0x8($v1)
    ctx->pc = 0x47cb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x47cb08: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x47cb08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x47cb0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47cb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47cb10: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x47cb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x47cb14: 0x46063402  mul.s       $f16, $f6, $f6
    ctx->pc = 0x47cb14u;
    ctx->f[16] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x47cb18: 0x46008800  add.s       $f0, $f17, $f0
    ctx->pc = 0x47cb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
    // 0x47cb1c: 0x460123c0  add.s       $f15, $f4, $f1
    ctx->pc = 0x47cb1cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x47cb20: 0x460b58c2  mul.s       $f3, $f11, $f11
    ctx->pc = 0x47cb20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x47cb24: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x47cb24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x47cb28: 0x46130000  add.s       $f0, $f0, $f19
    ctx->pc = 0x47cb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[19]);
    // 0x47cb2c: 0x460378c0  add.s       $f3, $f15, $f3
    ctx->pc = 0x47cb2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x47cb30: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x47cb30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x47cb34: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x47cb34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x47cb38: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x47cb38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x47cb3c: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x47cb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47cb40: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x47cb40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47cb44: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x47cb44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47cb48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x47cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47cb4c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x47cb4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x47cb50: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x47cb50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47cb54: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x47cb54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x47cb58: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cb5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47cb5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47cb60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47cb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47cb64: 0x0  nop
    ctx->pc = 0x47cb64u;
    // NOP
    // 0x47cb68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x47CB68u;
    {
        const bool branch_taken_0x47cb68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CB68u;
        // 0x47cb6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cb68) {
            ctx->pc = 0x47CB74u;
            goto label_47cb74;
        }
    }
    ctx->pc = 0x47CB70u;
    // 0x47cb70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47cb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47cb74:
    // 0x47cb74: 0x460d2882  mul.s       $f2, $f5, $f13
    ctx->pc = 0x47cb74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x47cb78: 0x460938c2  mul.s       $f3, $f7, $f9
    ctx->pc = 0x47cb78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x47cb7c: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x47cb7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x47cb80: 0x46076102  mul.s       $f4, $f12, $f7
    ctx->pc = 0x47cb80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x47cb84: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x47cb84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x47cb88: 0x460c48c2  mul.s       $f3, $f9, $f12
    ctx->pc = 0x47cb88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x47cb8c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47cb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47cb90: 0x460b5102  mul.s       $f4, $f10, $f11
    ctx->pc = 0x47cb90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x47cb94: 0x46065942  mul.s       $f5, $f11, $f6
    ctx->pc = 0x47cb94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x47cb98: 0x46086842  mul.s       $f1, $f13, $f8
    ctx->pc = 0x47cb98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x47cb9c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47cb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47cba0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x47cba0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x47cba4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47cba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47cba8: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x47cba8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x47cbac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x47cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47cbb0: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x47cbb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47cbb4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x47cbb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47cbb8: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x47cbb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47cbbc: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x47cbbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x47cbc0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x47cbc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x47cbc4: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x47cbc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47cbc8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x47cbc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47cbcc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cbd0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x47cbd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x47cbd4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x47cbd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47cbd8: 0x0  nop
    ctx->pc = 0x47cbd8u;
    // NOP
    // 0x47cbdc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x47CBDCu;
    {
        const bool branch_taken_0x47cbdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CBDCu;
        // 0x47cbe0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cbdc) {
            ctx->pc = 0x47CBE8u;
            goto label_47cbe8;
        }
    }
    ctx->pc = 0x47CBE4u;
    // 0x47cbe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47cbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47cbe8:
    // 0x47cbe8: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x47CBE8u;
    {
        const bool branch_taken_0x47cbe8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CBE8u;
        // 0x47cbec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cbe8) {
            ctx->pc = 0x47CC64u;
            goto label_47cc64;
        }
    }
    ctx->pc = 0x47CBF0u;
    // 0x47cbf0: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x47CBF0u;
    {
        const bool branch_taken_0x47cbf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CBF0u;
        // 0x47cbf4: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cbf0) {
            ctx->pc = 0x47CC64u;
            goto label_47cc64;
        }
    }
    ctx->pc = 0x47CBF8u;
    // 0x47cbf8: 0x460e6881  sub.s       $f2, $f13, $f14
    ctx->pc = 0x47cbf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x47cbfc: 0x460e6001  sub.s       $f0, $f12, $f14
    ctx->pc = 0x47cbfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x47cc00: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x47cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cc04: 0x460e5941  sub.s       $f5, $f11, $f14
    ctx->pc = 0x47cc04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[14]);
    // 0x47cc08: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x47cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cc0c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47cc0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47cc10: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x47cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47cc14: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47cc14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47cc18: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x47cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47cc1c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x47cc1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x47cc20: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x47cc20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
    // 0x47cc24: 0x46008800  add.s       $f0, $f17, $f0
    ctx->pc = 0x47cc24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
    // 0x47cc28: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x47cc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47cc2c: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x47cc2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x47cc30: 0x46130000  add.s       $f0, $f0, $f19
    ctx->pc = 0x47cc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[19]);
    // 0x47cc34: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x47cc34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x47cc38: 0x46057940  add.s       $f5, $f15, $f5
    ctx->pc = 0x47cc38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[15], ctx->f[5]);
    // 0x47cc3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x47cc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x47cc40: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47cc40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x47cc44: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x47cc44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x47cc48: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x47cc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x47cc4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x47cc4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x47cc50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47cc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47cc54: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x47cc54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47cc58: 0x0  nop
    ctx->pc = 0x47cc58u;
    // NOP
    // 0x47cc5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x47CC5Cu;
    {
        const bool branch_taken_0x47cc5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47cc5c) {
            ctx->pc = 0x47CC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47CC5Cu;
            // 0x47cc60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47CC64u;
            goto label_47cc64;
        }
    }
    ctx->pc = 0x47CC64u;
label_47cc64:
    // 0x47cc64: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CC64u;
    {
        const bool branch_taken_0x47cc64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CC64u;
        // 0x47cc68: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cc64) {
            ctx->pc = 0x47CC74u;
            goto label_47cc74;
        }
    }
    ctx->pc = 0x47CC6Cu;
    // 0x47cc6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47CC6Cu;
    {
        const bool branch_taken_0x47cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CC6Cu;
        // 0x47cc70: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cc6c) {
            ctx->pc = 0x47CC80u;
            goto label_47cc80;
        }
    }
    ctx->pc = 0x47CC74u;
label_47cc74:
    // 0x47cc74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x47cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x47cc78: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x47cc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x47cc7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x47cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47cc80:
    // 0x47cc80: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CC80u;
    {
        const bool branch_taken_0x47cc80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cc80) {
            ctx->pc = 0x47CC90u;
            goto label_47cc90;
        }
    }
    ctx->pc = 0x47CC88u;
    // 0x47cc88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47CC88u;
    {
        const bool branch_taken_0x47cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CC88u;
        // 0x47cc8c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cc88) {
            ctx->pc = 0x47CC9Cu;
            goto label_47cc9c;
        }
    }
    ctx->pc = 0x47CC90u;
label_47cc90:
    // 0x47cc90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x47cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x47cc94: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x47cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x47cc98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x47cc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47cc9c:
    // 0x47cc9c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CC9Cu;
    {
        const bool branch_taken_0x47cc9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CC9Cu;
        // 0x47cca0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cc9c) {
            ctx->pc = 0x47CCACu;
            goto label_47ccac;
        }
    }
    ctx->pc = 0x47CCA4u;
    // 0x47cca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47CCA4u;
    {
        const bool branch_taken_0x47cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CCA4u;
        // 0x47cca8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cca4) {
            ctx->pc = 0x47CCB8u;
            goto label_47ccb8;
        }
    }
    ctx->pc = 0x47CCACu;
label_47ccac:
    // 0x47ccac: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x47ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x47ccb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x47ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x47ccb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x47ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47ccb8:
    // 0x47ccb8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x47ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x47ccbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47ccbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ccc0: 0x3e00008  jr          $ra
    ctx->pc = 0x47CCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CCC0u;
        // 0x47ccc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47CCC8u;
}
