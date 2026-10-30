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

// Function: sub_00462E48
// Address: 0x462e48 - 0x463318
void sub_00462E48_0x462e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462E48_0x462e48");
#endif

    ctx->pc = 0x462e48u;

    // 0x462e48: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x462e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462e4c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x462e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x462e50: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x462e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462e54: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x462e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x462e58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x462e58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x462e5c: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x462e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x462e60: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x462e60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x462e64: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x462e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x462e68: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x462e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x462e6c: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x462e6cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x462e70: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x462e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462e74: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x462e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x462e78: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x462e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x462e7c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x462e7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x462e80: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x462e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x462e84: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x462e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x462e88: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x462e88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x462e8c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x462e8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x462e90: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x462e90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x462e94: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x462e94u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x462e98: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x462e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462e9c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x462e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462ea0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x462ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x462ea4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x462ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x462ea8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x462ea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x462eac: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x462eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x462eb0: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x462eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x462eb4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x462eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462eb8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x462eb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x462ebc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x462ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x462ec0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x462ec0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x462ec4: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x462ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x462ec8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x462ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462ecc: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x462eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462ed0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x462ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x462ed4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x462ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x462ed8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x462ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x462edc: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x462edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x462ee0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x462ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x462ee4: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x462ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x462ee8: 0x0  nop
    ctx->pc = 0x462ee8u;
    // NOP
    // 0x462eec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x462EECu;
    {
        const bool branch_taken_0x462eec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x462EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462EECu;
        // 0x462ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462eec) {
            ctx->pc = 0x462EF8u;
            goto label_462ef8;
        }
    }
    ctx->pc = 0x462EF4u;
    // 0x462ef4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x462ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462ef8:
    // 0x462ef8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x462EF8u;
    {
        const bool branch_taken_0x462ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462ef8) {
            ctx->pc = 0x462F38u;
            goto label_462f38;
        }
    }
    ctx->pc = 0x462F00u;
    // 0x462f00: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x462f00u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x462f04: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x462f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462f08: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x462f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x462f0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x462f0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x462f10: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x462f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462f14: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x462f14u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x462f18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x462f18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x462f1c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x462f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x462f20: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x462f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x462f24: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x462f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x462f28: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x462f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462f2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x462f2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x462f30: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x462f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x462f34: 0x0  nop
    ctx->pc = 0x462f34u;
    // NOP
label_462f38:
    // 0x462f38: 0xc7808050  lwc1        $f0, -0x7FB0($gp)
    ctx->pc = 0x462f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x462f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x462f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x462f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x462f44: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x462f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x462f48: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x462f48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x462f4c: 0x0  nop
    ctx->pc = 0x462f4cu;
    // NOP
    // 0x462f50: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x462F50u;
    {
        const bool branch_taken_0x462f50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x462F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462F50u;
        // 0x462f54: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x462f50) {
            ctx->pc = 0x462F5Cu;
            goto label_462f5c;
        }
    }
    ctx->pc = 0x462F58u;
    // 0x462f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x462f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462f5c:
    // 0x462f5c: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x462F5Cu;
    {
        const bool branch_taken_0x462f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462f5c) {
            ctx->pc = 0x462F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462F5Cu;
            // 0x462f60: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4632B8u;
            goto label_4632b8;
        }
    }
    ctx->pc = 0x462F64u;
    // 0x462f64: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x462f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x462f68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x462f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462f6c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x462f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x462f70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x462f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x462f74: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x462f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x462f78: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x462f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x462f7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x462f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x462f80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x462f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x462f84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x462F84u;
    {
        const bool branch_taken_0x462f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462f84) {
            ctx->pc = 0x462F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462F84u;
            // 0x462f88: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462FA0u;
            goto label_462fa0;
        }
    }
    ctx->pc = 0x462F8Cu;
    // 0x462f8c: 0xc78a8054  lwc1        $f10, -0x7FAC($gp)
    ctx->pc = 0x462f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x462f90: 0x5ce0008f  bgtzl       $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x462F90u;
    {
        const bool branch_taken_0x462f90 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x462f90) {
            ctx->pc = 0x462F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462F90u;
            // 0x462f94: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4631D0u;
            goto label_4631d0;
        }
    }
    ctx->pc = 0x462F98u;
    // 0x462f98: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x462F98u;
    {
        const bool branch_taken_0x462f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462F98u;
        // 0x462f9c: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x462f98) {
            ctx->pc = 0x4631D8u;
            goto label_4631d8;
        }
    }
    ctx->pc = 0x462FA0u;
label_462fa0:
    // 0x462fa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x462fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x462fa4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x462fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x462fa8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x462FA8u;
    {
        const bool branch_taken_0x462fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462FA8u;
        // 0x462fac: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462fa8) {
            ctx->pc = 0x46305Cu;
            goto label_46305c;
        }
    }
    ctx->pc = 0x462FB0u;
    // 0x462fb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x462fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x462fb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x462FB4u;
    {
        const bool branch_taken_0x462fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462fb4) {
            ctx->pc = 0x462FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462FB4u;
            // 0x462fb8: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x462FC8u;
            goto label_462fc8;
        }
    }
    ctx->pc = 0x462FBCu;
    // 0x462fbc: 0xc78a8058  lwc1        $f10, -0x7FA8($gp)
    ctx->pc = 0x462fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x462fc0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x462FC0u;
    {
        const bool branch_taken_0x462fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462FC0u;
        // 0x462fc4: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x462fc0) {
            ctx->pc = 0x4631D8u;
            goto label_4631d8;
        }
    }
    ctx->pc = 0x462FC8u;
label_462fc8:
    // 0x462fc8: 0xc780805c  lwc1        $f0, -0x7FA4($gp)
    ctx->pc = 0x462fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462fcc: 0xc7838060  lwc1        $f3, -0x7FA0($gp)
    ctx->pc = 0x462fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x462fd0: 0xc7878064  lwc1        $f7, -0x7F9C($gp)
    ctx->pc = 0x462fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x462fd4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x462fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x462fd8: 0xc7818068  lwc1        $f1, -0x7F98($gp)
    ctx->pc = 0x462fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462fdc: 0xc782806c  lwc1        $f2, -0x7F94($gp)
    ctx->pc = 0x462fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x462fe0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x462fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x462fe4: 0xc7858070  lwc1        $f5, -0x7F90($gp)
    ctx->pc = 0x462fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x462fe8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x462fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x462fec: 0xc7848074  lwc1        $f4, -0x7F8C($gp)
    ctx->pc = 0x462fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x462ff0: 0xc7888078  lwc1        $f8, -0x7F88($gp)
    ctx->pc = 0x462ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x462ff4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x462ff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x462ff8: 0xc783807c  lwc1        $f3, -0x7F84($gp)
    ctx->pc = 0x462ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x462ffc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x462ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463000: 0xc7868080  lwc1        $f6, -0x7F80($gp)
    ctx->pc = 0x463000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463004: 0xc7828084  lwc1        $f2, -0x7F7C($gp)
    ctx->pc = 0x463004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463008: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x46300c: 0xc7898088  lwc1        $f9, -0x7F78($gp)
    ctx->pc = 0x46300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x463010: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x463014: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x463014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x463018: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x46301c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x46301cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463020: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x463020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x463024: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x463024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x463028: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x46302c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x46302cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463030: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x463030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x463034: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x463034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x463038: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x46303c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x46303cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x463040: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463044: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x463044u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x463048: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x463048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x46304c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x46304cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x463050: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x463050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x463054: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x463054u;
    {
        const bool branch_taken_0x463054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463054u;
        // 0x463058: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x463054) {
            ctx->pc = 0x4631D0u;
            goto label_4631d0;
        }
    }
    ctx->pc = 0x46305Cu;
label_46305c:
    // 0x46305c: 0x4e3002c  bgezl       $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x46305Cu;
    {
        const bool branch_taken_0x46305c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x46305c) {
            ctx->pc = 0x463060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46305Cu;
            // 0x463060: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x463110u;
            goto label_463110;
        }
    }
    ctx->pc = 0x463064u;
    // 0x463064: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x463064u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x463068: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x463068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x46306c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x46306cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x463070: 0xc780808c  lwc1        $f0, -0x7F74($gp)
    ctx->pc = 0x463070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463074: 0xc7848090  lwc1        $f4, -0x7F70($gp)
    ctx->pc = 0x463074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x463078: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x463078u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x46307c: 0xc7868094  lwc1        $f6, -0x7F6C($gp)
    ctx->pc = 0x46307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463080: 0xc7818098  lwc1        $f1, -0x7F68($gp)
    ctx->pc = 0x463080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463084: 0xc782809c  lwc1        $f2, -0x7F64($gp)
    ctx->pc = 0x463084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463088: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x46308c: 0xc78780a0  lwc1        $f7, -0x7F60($gp)
    ctx->pc = 0x46308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x463090: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463094: 0xc78380a4  lwc1        $f3, -0x7F5C($gp)
    ctx->pc = 0x463094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x463098: 0xc78880a8  lwc1        $f8, -0x7F58($gp)
    ctx->pc = 0x463098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x46309c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46309cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4630a0: 0xc78580ac  lwc1        $f5, -0x7F54($gp)
    ctx->pc = 0x4630a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4630a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4630a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4630a8: 0xc78480b0  lwc1        $f4, -0x7F50($gp)
    ctx->pc = 0x4630a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4630ac: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4630acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4630b0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4630b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4630b4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x4630b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x4630b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4630b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4630bc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4630bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4630c0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4630c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4630c4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4630c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4630c8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4630c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4630cc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4630ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4630d0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4630d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4630d4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4630d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4630d8: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x4630d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x4630dc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4630dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4630e0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4630e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4630e4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4630e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4630e8: 0x460b0344  c1          0xB0344
    ctx->pc = 0x4630e8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x4630ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4630ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4630f0: 0xc78280b4  lwc1        $f2, -0x7F4C($gp)
    ctx->pc = 0x4630f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4630f4: 0xc78380b8  lwc1        $f3, -0x7F48($gp)
    ctx->pc = 0x4630f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4630f8: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x4630f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x4630fc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x4630fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x463100: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x463100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x463104: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x463104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x463108: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x463108u;
    {
        const bool branch_taken_0x463108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463108u;
        // 0x46310c: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x463108) {
            ctx->pc = 0x4631D0u;
            goto label_4631d0;
        }
    }
    ctx->pc = 0x463110u;
label_463110:
    // 0x463110: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x463110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x463114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x463114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463118: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x463118u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x46311c: 0x460b0344  c1          0xB0344
    ctx->pc = 0x46311cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x463120: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x463120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x463124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x463124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463128: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x463128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x46312c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x46312cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x463130: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x463130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x463134: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x463134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x463138: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x463138u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x46313c: 0xc78080bc  lwc1        $f0, -0x7F44($gp)
    ctx->pc = 0x46313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463140: 0xc78480c0  lwc1        $f4, -0x7F40($gp)
    ctx->pc = 0x463140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x463144: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463148: 0xc78a80c4  lwc1        $f10, -0x7F3C($gp)
    ctx->pc = 0x463148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x46314c: 0xc78180c8  lwc1        $f1, -0x7F38($gp)
    ctx->pc = 0x46314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463150: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x463150u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x463154: 0xc78680cc  lwc1        $f6, -0x7F34($gp)
    ctx->pc = 0x463154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463158: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x463158u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x46315c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46315cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x463160: 0xc78780d0  lwc1        $f7, -0x7F30($gp)
    ctx->pc = 0x463160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x463164: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463168: 0xc78480d4  lwc1        $f4, -0x7F2C($gp)
    ctx->pc = 0x463168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46316c: 0xc78980d8  lwc1        $f9, -0x7F28($gp)
    ctx->pc = 0x46316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x463170: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x463170u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x463174: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463178: 0xc78380dc  lwc1        $f3, -0x7F24($gp)
    ctx->pc = 0x463178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46317c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x46317cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x463180: 0xc78880e0  lwc1        $f8, -0x7F20($gp)
    ctx->pc = 0x463180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x463184: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x463184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x463188: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x46318c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46318cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463190: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x463190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x463194: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x463198: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x46319c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46319cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4631a0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4631a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4631a4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x4631a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x4631a8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4631a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4631ac: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4631acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4631b0: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x4631b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x4631b4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4631b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4631b8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4631b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4631bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4631bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4631c0: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x4631c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x4631c4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4631c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4631c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4631c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4631cc: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x4631ccu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4631d0:
    // 0x4631d0: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x4631d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x4631d4: 0x0  nop
    ctx->pc = 0x4631d4u;
    // NOP
label_4631d8:
    // 0x4631d8: 0xc78280e4  lwc1        $f2, -0x7F1C($gp)
    ctx->pc = 0x4631d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4631dc: 0xc78580e8  lwc1        $f5, -0x7F18($gp)
    ctx->pc = 0x4631dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4631e0: 0xc78680ec  lwc1        $f6, -0x7F14($gp)
    ctx->pc = 0x4631e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4631e4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x4631e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4631e8: 0xc78780f0  lwc1        $f7, -0x7F10($gp)
    ctx->pc = 0x4631e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4631ec: 0xc78880f4  lwc1        $f8, -0x7F0C($gp)
    ctx->pc = 0x4631ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4631f0: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x4631f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x4631f4: 0xc78980f8  lwc1        $f9, -0x7F08($gp)
    ctx->pc = 0x4631f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4631f8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4631f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4631fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4631fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463200: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x463200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x463204: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x463204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463208: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x46320c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x46320cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463210: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x463210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x463214: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x463214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463218: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x463218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x46321c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x46321cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x463220: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x463220u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x463224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x463224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x463228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x463228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x46322c: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x46322cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x463230: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x463230u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x463234: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x463234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x463238: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x463238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x46323c: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x46323cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x463240: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x463240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x463244: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x463244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463248: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x463248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x46324c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x46324cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463250: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x463254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x463254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463258: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x463258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x46325c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x46325cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463260: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x463260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x463264: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x463264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x463268: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x463268u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x46326c: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x46326cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x463270: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x463270u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x463274: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x463274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x463278: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x463278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x46327c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x46327cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x463280: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x463280u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x463284: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x463284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463288: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x463288u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x46328c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x46328cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463290: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x463290u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x463294: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x463294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463298: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x463298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x46329c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x46329cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4632a0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x4632a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x4632a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4632a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4632a8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x4632a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x4632ac: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x4632acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x4632b0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4632b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4632b4: 0x0  nop
    ctx->pc = 0x4632b4u;
    // NOP
label_4632b8:
    // 0x4632b8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x4632b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4632bc: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x4632bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x4632c0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4632c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4632c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4632c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4632c8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4632c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4632cc: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x4632ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4632d0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x4632d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4632d4: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x4632d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x4632d8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4632d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4632dc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4632dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4632e0: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x4632e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4632e4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x4632e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4632e8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x4632e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4632ec: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x4632ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x4632f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4632f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4632f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4632f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4632f8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x4632f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4632fc: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x4632fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463300: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x463300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463304: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x463304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x463308: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x463308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46330c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x46330cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x463310: 0x3e00008  jr          $ra
    ctx->pc = 0x463310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463310u;
        // 0x463314: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463318u;
}
