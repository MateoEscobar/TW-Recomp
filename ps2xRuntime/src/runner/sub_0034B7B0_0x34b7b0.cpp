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

// Function: sub_0034B7B0
// Address: 0x34b7b0 - 0x34baf0
void sub_0034B7B0_0x34b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B7B0_0x34b7b0");
#endif

    switch (ctx->pc) {
        case 0x34b984u: goto label_34b984;
        case 0x34bab4u: goto label_34bab4;
        default: break;
    }

    ctx->pc = 0x34b7b0u;

    // 0x34b7b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x34b7b4: 0x46006286  mov.s       $f10, $f12
    ctx->pc = 0x34b7b4u;
    ctx->f[10] = FPU_MOV_S(ctx->f[12]);
    // 0x34b7b8: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x34b7b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x34b7bc: 0x460072c6  mov.s       $f11, $f14
    ctx->pc = 0x34b7bcu;
    ctx->f[11] = FPU_MOV_S(ctx->f[14]);
    // 0x34b7c0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x34b7c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x34b7c4: 0x46008646  mov.s       $f25, $f16
    ctx->pc = 0x34b7c4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    // 0x34b7c8: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x34b7c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x34b7cc: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x34b7ccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x34b7d0: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x34b7d0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x34b7d4: 0x460ac301  sub.s       $f12, $f24, $f10
    ctx->pc = 0x34b7d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[10]);
    // 0x34b7d8: 0x4617cb41  sub.s       $f13, $f25, $f23
    ctx->pc = 0x34b7d8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x34b7dc: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x34b7dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34b7e0: 0x46008e86  mov.s       $f26, $f17
    ctx->pc = 0x34b7e0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[17]);
    // 0x34b7e4: 0xc7a800a8  lwc1        $f8, 0xA8($sp)
    ctx->pc = 0x34b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x34b7e8: 0x460bd381  sub.s       $f14, $f26, $f11
    ctx->pc = 0x34b7e8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[26], ctx->f[11]);
    // 0x34b7ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x34b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x34b7f0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x34b7f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34b7f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x34b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x34b7f8: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x34b7f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x34b7fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34b800: 0x460e7082  mul.s       $f2, $f14, $f14
    ctx->pc = 0x34b800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34b804: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x34b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x34b808: 0x460841c2  mul.s       $f7, $f8, $f8
    ctx->pc = 0x34b808u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x34b80c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x34b80cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x34b810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b814: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x34b814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x34b818: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x34b818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34b81c: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x34b81cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x34b820: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x34b820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x34b824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b828: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34b828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34b82c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b830: 0x46009d06  mov.s       $f20, $f19
    ctx->pc = 0x34b830u;
    ctx->f[20] = FPU_MOV_S(ctx->f[19]);
    // 0x34b834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b838: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34b838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b83c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34b83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b840: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x34b840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x34b844: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x34b844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b848: 0x0  nop
    ctx->pc = 0x34b848u;
    // NOP
    // 0x34b84c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B84Cu;
    {
        const bool branch_taken_0x34b84c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B84Cu;
        // 0x34b850: 0xc7b600a0  lwc1        $f22, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b84c) {
            ctx->pc = 0x34B860u;
            goto label_34b860;
        }
    }
    ctx->pc = 0x34B854u;
    // 0x34b854: 0xe6060000  swc1        $f6, 0x0($s0)
    ctx->pc = 0x34b854u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b858: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x34B858u;
    {
        const bool branch_taken_0x34b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B858u;
        // 0x34b85c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b858) {
            ctx->pc = 0x34BAB4u;
            goto label_34bab4;
        }
    }
    ctx->pc = 0x34B860u;
label_34b860:
    // 0x34b860: 0x460ca802  mul.s       $f0, $f21, $f12
    ctx->pc = 0x34b860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x34b864: 0x460da042  mul.s       $f1, $f20, $f13
    ctx->pc = 0x34b864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x34b868: 0x460eb082  mul.s       $f2, $f22, $f14
    ctx->pc = 0x34b868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[14]);
    // 0x34b86c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b870: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34b870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34b874: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x34b874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b878: 0x0  nop
    ctx->pc = 0x34b878u;
    // NOP
    // 0x34b87c: 0x4501008d  bc1t        . + 4 + (0x8D << 2)
    ctx->pc = 0x34B87Cu;
    {
        const bool branch_taken_0x34b87c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B87Cu;
        // 0x34b880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b87c) {
            ctx->pc = 0x34BAB4u;
            goto label_34bab4;
        }
    }
    ctx->pc = 0x34B884u;
    // 0x34b884: 0x460cb002  mul.s       $f0, $f22, $f12
    ctx->pc = 0x34b884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x34b888: 0x460ea882  mul.s       $f2, $f21, $f14
    ctx->pc = 0x34b888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[14]);
    // 0x34b88c: 0x460ea0c2  mul.s       $f3, $f20, $f14
    ctx->pc = 0x34b88cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x34b890: 0x460db042  mul.s       $f1, $f22, $f13
    ctx->pc = 0x34b890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[13]);
    // 0x34b894: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x34b894u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x34b898: 0x460da802  mul.s       $f0, $f21, $f13
    ctx->pc = 0x34b898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[13]);
    // 0x34b89c: 0x460ca102  mul.s       $f4, $f20, $f12
    ctx->pc = 0x34b89cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x34b8a0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x34b8a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x34b8a4: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x34b8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b8a8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x34b8a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x34b8ac: 0x46021402  mul.s       $f16, $f2, $f2
    ctx->pc = 0x34b8acu;
    ctx->f[16] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34b8b0: 0x46031bc2  mul.s       $f15, $f3, $f3
    ctx->pc = 0x34b8b0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x34b8b4: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x34b8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x34b8b8: 0x4614a242  mul.s       $f9, $f20, $f20
    ctx->pc = 0x34b8b8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x34b8bc: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x34b8bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x34b8c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34B8C0u;
    {
        const bool branch_taken_0x34b8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B8C0u;
        // 0x34b8c4: 0x4616b442  mul.s       $f17, $f22, $f22 (Delay Slot)
        ctx->f[17] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b8c0) {
            ctx->pc = 0x34B8F0u;
            goto label_34b8f0;
        }
    }
    ctx->pc = 0x34B8C8u;
    // 0x34b8c8: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x34b8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b8cc: 0x0  nop
    ctx->pc = 0x34b8ccu;
    // NOP
    // 0x34b8d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34B8D0u;
    {
        const bool branch_taken_0x34b8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b8d0) {
            ctx->pc = 0x34B8F0u;
            goto label_34b8f0;
        }
    }
    ctx->pc = 0x34B8D8u;
    // 0x34b8d8: 0x46003842  mul.s       $f1, $f7, $f0
    ctx->pc = 0x34b8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x34b8dc: 0x46058000  add.s       $f0, $f16, $f5
    ctx->pc = 0x34b8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[5]);
    // 0x34b8e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34b8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b8e4: 0x0  nop
    ctx->pc = 0x34b8e4u;
    // NOP
    // 0x34b8e8: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x34B8E8u;
    {
        const bool branch_taken_0x34b8e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b8e8) {
            ctx->pc = 0x34B8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B8E8u;
            // 0x34b8ec: 0x46084482  mul.s       $f18, $f8, $f8 (Delay Slot)
            ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B974u;
            goto label_34b974;
        }
    }
    ctx->pc = 0x34B8F0u;
label_34b8f0:
    // 0x34b8f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b8f4: 0x0  nop
    ctx->pc = 0x34b8f4u;
    // NOP
    // 0x34b8f8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x34b8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b8fc: 0x0  nop
    ctx->pc = 0x34b8fcu;
    // NOP
    // 0x34b900: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x34B900u;
    {
        const bool branch_taken_0x34b900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b900) {
            ctx->pc = 0x34B934u;
            goto label_34b934;
        }
    }
    ctx->pc = 0x34B908u;
    // 0x34b908: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34b908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b90c: 0x0  nop
    ctx->pc = 0x34b90cu;
    // NOP
    // 0x34b910: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34B910u;
    {
        const bool branch_taken_0x34b910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b910) {
            ctx->pc = 0x34B934u;
            goto label_34b934;
        }
    }
    ctx->pc = 0x34B918u;
    // 0x34b918: 0x46057840  add.s       $f1, $f15, $f5
    ctx->pc = 0x34b918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[5]);
    // 0x34b91c: 0x46093802  mul.s       $f0, $f7, $f9
    ctx->pc = 0x34b91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x34b920: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34b920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b924: 0x0  nop
    ctx->pc = 0x34b924u;
    // NOP
    // 0x34b928: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x34B928u;
    {
        const bool branch_taken_0x34b928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b928) {
            ctx->pc = 0x34B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B928u;
            // 0x34b92c: 0x46084482  mul.s       $f18, $f8, $f8 (Delay Slot)
            ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B974u;
            goto label_34b974;
        }
    }
    ctx->pc = 0x34B930u;
    // 0x34b930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34b934:
    // 0x34b934: 0x0  nop
    ctx->pc = 0x34b934u;
    // NOP
    // 0x34b938: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34b938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b93c: 0x0  nop
    ctx->pc = 0x34b93cu;
    // NOP
    // 0x34b940: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x34B940u;
    {
        const bool branch_taken_0x34b940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b940) {
            ctx->pc = 0x34B9BCu;
            goto label_34b9bc;
        }
    }
    ctx->pc = 0x34B948u;
    // 0x34b948: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x34b948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b94c: 0x0  nop
    ctx->pc = 0x34b94cu;
    // NOP
    // 0x34b950: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x34B950u;
    {
        const bool branch_taken_0x34b950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b950) {
            ctx->pc = 0x34B9BCu;
            goto label_34b9bc;
        }
    }
    ctx->pc = 0x34B958u;
    // 0x34b958: 0x46107840  add.s       $f1, $f15, $f16
    ctx->pc = 0x34b958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[16]);
    // 0x34b95c: 0x46113802  mul.s       $f0, $f7, $f17
    ctx->pc = 0x34b95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[17]);
    // 0x34b960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34b960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b964: 0x0  nop
    ctx->pc = 0x34b964u;
    // NOP
    // 0x34b968: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x34B968u;
    {
        const bool branch_taken_0x34b968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b968) {
            ctx->pc = 0x34B9BCu;
            goto label_34b9bc;
        }
    }
    ctx->pc = 0x34B970u;
    // 0x34b970: 0x46084482  mul.s       $f18, $f8, $f8
    ctx->pc = 0x34b970u;
    ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_34b974:
    // 0x34b974: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x34b974u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x34b978: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x34b978u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x34b97c: 0xc0d2bd4  jal         func_34AF50
    ctx->pc = 0x34B97Cu;
    SET_GPR_U32(ctx, 31, 0x34B984u);
    ctx->pc = 0x34B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B97Cu;
    // 0x34b980: 0x4600b446  mov.s       $f17, $f22 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AF50u, 0x34B97Cu, 0x34B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B984u;
label_34b984:
    // 0x34b984: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x34b984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x34b988: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b990: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x34b990u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x34b994: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x34b994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34b998: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b99c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x34b99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x34b9a0: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x34b9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x34b9a4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x34b9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x34b9a8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x34b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b9ac: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x34b9acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x34b9b0: 0x461a0840  add.s       $f1, $f1, $f26
    ctx->pc = 0x34b9b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
    // 0x34b9b4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x34B9B4u;
    {
        const bool branch_taken_0x34b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B9B4u;
        // 0x34b9b8: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b9b4) {
            ctx->pc = 0x34BAB4u;
            goto label_34bab4;
        }
    }
    ctx->pc = 0x34B9BCu;
label_34b9bc:
    // 0x34b9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b9c0: 0x0  nop
    ctx->pc = 0x34b9c0u;
    // NOP
    // 0x34b9c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34b9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b9c8: 0x0  nop
    ctx->pc = 0x34b9c8u;
    // NOP
    // 0x34b9cc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x34B9CCu;
    {
        const bool branch_taken_0x34b9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b9cc) {
            ctx->pc = 0x34BA1Cu;
            goto label_34ba1c;
        }
    }
    ctx->pc = 0x34B9D4u;
    // 0x34b9d4: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x34b9d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b9d8: 0x0  nop
    ctx->pc = 0x34b9d8u;
    // NOP
    // 0x34b9dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34B9DCu;
    {
        const bool branch_taken_0x34b9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B9DCu;
        // 0x34b9e0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b9dc) {
            ctx->pc = 0x34BA1Cu;
            goto label_34ba1c;
        }
    }
    ctx->pc = 0x34B9E4u;
    // 0x34b9e4: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x34b9e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b9e8: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x34b9e8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b9ec: 0x46005346  mov.s       $f13, $f10
    ctx->pc = 0x34b9ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[10]);
    // 0x34b9f0: 0x46005b86  mov.s       $f14, $f11
    ctx->pc = 0x34b9f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[11]);
    // 0x34b9f4: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x34b9f4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x34b9f8: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x34b9f8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x34b9fc: 0x4600d446  mov.s       $f17, $f26
    ctx->pc = 0x34b9fcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[26]);
    // 0x34ba00: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x34ba00u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x34ba04: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x34ba04u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x34ba08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34ba0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34ba10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x34BA14u;
    {
        const bool branch_taken_0x34ba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA14u;
        // 0x34ba18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba14) {
            ctx->pc = 0x34BAACu;
            goto label_34baac;
        }
    }
    ctx->pc = 0x34BA1Cu;
label_34ba1c:
    // 0x34ba1c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x34ba1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba20: 0x0  nop
    ctx->pc = 0x34ba20u;
    // NOP
    // 0x34ba24: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x34BA24u;
    {
        const bool branch_taken_0x34ba24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ba24) {
            ctx->pc = 0x34BA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BA24u;
            // 0x34ba28: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BA78u;
            goto label_34ba78;
        }
    }
    ctx->pc = 0x34BA2Cu;
    // 0x34ba2c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34ba2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba30: 0x0  nop
    ctx->pc = 0x34ba30u;
    // NOP
    // 0x34ba34: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34BA34u;
    {
        const bool branch_taken_0x34ba34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA34u;
        // 0x34ba38: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba34) {
            ctx->pc = 0x34BA74u;
            goto label_34ba74;
        }
    }
    ctx->pc = 0x34BA3Cu;
    // 0x34ba3c: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x34ba3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34ba40: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x34ba40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34ba44: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x34ba44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x34ba48: 0x46005b86  mov.s       $f14, $f11
    ctx->pc = 0x34ba48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[11]);
    // 0x34ba4c: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x34ba4cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x34ba50: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x34ba50u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x34ba54: 0x4600d446  mov.s       $f17, $f26
    ctx->pc = 0x34ba54u;
    ctx->f[17] = FPU_MOV_S(ctx->f[26]);
    // 0x34ba58: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x34ba58u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x34ba5c: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x34ba5cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x34ba60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34ba68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34BA6Cu;
    {
        const bool branch_taken_0x34ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA6Cu;
        // 0x34ba70: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba6c) {
            ctx->pc = 0x34BAACu;
            goto label_34baac;
        }
    }
    ctx->pc = 0x34BA74u;
label_34ba74:
    // 0x34ba74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34ba74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34ba78:
    // 0x34ba78: 0x46005306  mov.s       $f12, $f10
    ctx->pc = 0x34ba78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[10]);
    // 0x34ba7c: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x34ba7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34ba80: 0x46005b46  mov.s       $f13, $f11
    ctx->pc = 0x34ba80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[11]);
    // 0x34ba84: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x34ba84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x34ba88: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x34ba88u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x34ba8c: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x34ba8cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x34ba90: 0x4600cc46  mov.s       $f17, $f25
    ctx->pc = 0x34ba90u;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
    // 0x34ba94: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x34ba94u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x34ba98: 0x4600b4c6  mov.s       $f19, $f22
    ctx->pc = 0x34ba98u;
    ctx->f[19] = FPU_MOV_S(ctx->f[22]);
    // 0x34ba9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34baa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baa4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x34baa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baa8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x34baa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34baac:
    // 0x34baac: 0xc0d2d80  jal         func_34B600
    ctx->pc = 0x34BAACu;
    SET_GPR_U32(ctx, 31, 0x34BAB4u);
    ctx->pc = 0x34BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BAACu;
    // 0x34bab0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B600u, 0x34BAACu, 0x34BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BAB4u;
label_34bab4:
    // 0x34bab4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x34bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34bab8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x34bab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34babc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34babcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bac0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x34bac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34bac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bac8: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x34bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34bacc: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x34baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x34bad0: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x34bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34bad4: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x34bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34bad8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x34bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34badc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x34badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34bae0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x34bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34bae4: 0x3e00008  jr          $ra
    ctx->pc = 0x34BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BAE4u;
        // 0x34bae8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BAECu;
    // 0x34baec: 0x0  nop
    ctx->pc = 0x34baecu;
    // NOP
    ctx->pc = 0x34baf0u;
}
