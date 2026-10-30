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

// Function: sub_004D57D8
// Address: 0x4d57d8 - 0x4d5b58
void sub_004D57D8_0x4d57d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D57D8_0x4d57d8");
#endif

    switch (ctx->pc) {
        case 0x4d58a8u: goto label_4d58a8;
        default: break;
    }

    ctx->pc = 0x4d57d8u;

    // 0x4d57d8: 0x470c3  sra         $t6, $a0, 3
    ctx->pc = 0x4d57d8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4d57dc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4d57dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d57e0: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x4d57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x4d57e4: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x4d57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x4d57e8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4d57e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4d57ec: 0xe3880  sll         $a3, $t6, 2
    ctx->pc = 0x4d57ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x4d57f0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x4d57f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d57f4: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x4d57f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d57f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d57f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d57fc: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x4d57fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x4d5800: 0xe10c0  sll         $v0, $t6, 3
    ctx->pc = 0x4d5800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x4d5804: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d5804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5808: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x4d5808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4d580c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d5810: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x4d5810u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d5814: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x4d5814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d5818: 0x46001441  sub.s       $f17, $f2, $f0
    ctx->pc = 0x4d5818u;
    ctx->f[17] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d581c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x4d581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d5820: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x4d5820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5824: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x4d5824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d5828: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4d5828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d582c: 0x46032ac0  add.s       $f11, $f5, $f3
    ctx->pc = 0x4d582cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d5830: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x4d5830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d5834: 0x46032c01  sub.s       $f16, $f5, $f3
    ctx->pc = 0x4d5834u;
    ctx->f[16] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4d5838: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d5838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d583c: 0x46012340  add.s       $f13, $f4, $f1
    ctx->pc = 0x4d583cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4d5840: 0x460123c1  sub.s       $f15, $f4, $f1
    ctx->pc = 0x4d5840u;
    ctx->f[15] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4d5844: 0x1ee102a  slt         $v0, $t7, $t6
    ctx->pc = 0x4d5844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x4d5848: 0x46001280  add.s       $f10, $f2, $f0
    ctx->pc = 0x4d5848u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d584c: 0x46001381  sub.s       $f14, $f2, $f0
    ctx->pc = 0x4d584cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d5850: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x4d5850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x4d5854: 0x460a5800  add.s       $f0, $f11, $f10
    ctx->pc = 0x4d5854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x4d5858: 0x460d6081  sub.s       $f2, $f12, $f13
    ctx->pc = 0x4d5858u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x4d585c: 0x460a5901  sub.s       $f4, $f11, $f10
    ctx->pc = 0x4d585cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x4d5860: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x4d5860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x4d5864: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x4d5864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x4d5868: 0x460e8941  sub.s       $f5, $f17, $f14
    ctx->pc = 0x4d5868u;
    ctx->f[5] = FPU_SUB_S(ctx->f[17], ctx->f[14]);
    // 0x4d586c: 0x460f80c0  add.s       $f3, $f16, $f15
    ctx->pc = 0x4d586cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x4d5870: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x4d5870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x4d5874: 0x460e8840  add.s       $f1, $f17, $f14
    ctx->pc = 0x4d5874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[17], ctx->f[14]);
    // 0x4d5878: 0xe4e40004  swc1        $f4, 0x4($a3)
    ctx->pc = 0x4d5878u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x4d587c: 0x460f8001  sub.s       $f0, $f16, $f15
    ctx->pc = 0x4d587cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x4d5880: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x4d5880u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d5884: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x4d5884u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d5888: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x4d5888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d588c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4d588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d5890: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x4D5890u;
    {
        const bool branch_taken_0x4d5890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5890u;
        // 0x4d5894: 0xc4d20004  lwc1        $f18, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5890) {
            ctx->pc = 0x4D5A80u;
            goto label_4d5a80;
        }
    }
    ctx->pc = 0x4D5898u;
    // 0x4d5898: 0x24edfff8  addiu       $t5, $a3, -0x8
    ctx->pc = 0x4d5898u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4d589c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x4d589cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d58a0: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x4d58a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x4d58a4: 0x0  nop
    ctx->pc = 0x4d58a4u;
    // NOP
label_4d58a8:
    // 0x4d58a8: 0x1ea1821  addu        $v1, $t7, $t2
    ctx->pc = 0x4d58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x4d58ac: 0xc5670000  lwc1        $f7, 0x0($t3)
    ctx->pc = 0x4d58acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d58b0: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x4d58b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d58b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4d58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d58b8: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x4d58b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x4d58bc: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d58c0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x4d58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d58c4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4d58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4d58c8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4d58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4d58cc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4d58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4d58d0: 0xc5660004  lwc1        $f6, 0x4($t3)
    ctx->pc = 0x4d58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d58d4: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x4d58d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x4d58d8: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x4d58d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d58dc: 0x14f3023  subu        $a2, $t2, $t7
    ctx->pc = 0x4d58dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x4d58e0: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x4d58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d58e4: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x4d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d58e8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4d58e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d58ec: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x4d58ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d58f0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x4d58f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d58f4: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x4d58f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x4d58f8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x4d58f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d58fc: 0x46013b00  add.s       $f12, $f7, $f1
    ctx->pc = 0x4d58fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x4d5900: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d5900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5904: 0x460232c0  add.s       $f11, $f6, $f2
    ctx->pc = 0x4d5904u;
    ctx->f[11] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x4d5908: 0x46032b40  add.s       $f13, $f5, $f3
    ctx->pc = 0x4d5908u;
    ctx->f[13] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d590c: 0xc5880000  lwc1        $f8, 0x0($t4)
    ctx->pc = 0x4d590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d5910: 0x46002280  add.s       $f10, $f4, $f0
    ctx->pc = 0x4d5910u;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4d5914: 0xc5890008  lwc1        $f9, 0x8($t4)
    ctx->pc = 0x4d5914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d5918: 0x46013c41  sub.s       $f17, $f7, $f1
    ctx->pc = 0x4d5918u;
    ctx->f[17] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x4d591c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4d591cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d5920: 0x46023401  sub.s       $f16, $f6, $f2
    ctx->pc = 0x4d5920u;
    ctx->f[16] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x4d5924: 0xc5870004  lwc1        $f7, 0x4($t4)
    ctx->pc = 0x4d5924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d5928: 0x46032bc1  sub.s       $f15, $f5, $f3
    ctx->pc = 0x4d5928u;
    ctx->f[15] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4d592c: 0xc586000c  lwc1        $f6, 0xC($t4)
    ctx->pc = 0x4d592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d5930: 0x46002381  sub.s       $f14, $f4, $f0
    ctx->pc = 0x4d5930u;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4d5934: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4d5934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4d5938: 0x460a5881  sub.s       $f2, $f11, $f10
    ctx->pc = 0x4d5938u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x4d593c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d593cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d5940: 0x460a5840  add.s       $f1, $f11, $f10
    ctx->pc = 0x4d5940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x4d5944: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4d5944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5948: 0x460d6141  sub.s       $f5, $f12, $f13
    ctx->pc = 0x4d5948u;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x4d594c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d5950: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x4d5950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x4d5954: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4d5954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4d5958: 0x460e8b01  sub.s       $f12, $f17, $f14
    ctx->pc = 0x4d5958u;
    ctx->f[12] = FPU_SUB_S(ctx->f[17], ctx->f[14]);
    // 0x4d595c: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x4d595cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x4d5960: 0x460f82c0  add.s       $f11, $f16, $f15
    ctx->pc = 0x4d5960u;
    ctx->f[11] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x4d5964: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x4d5964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x4d5968: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x4d5968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x4d596c: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x4d596cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x4d5970: 0x460c3a82  mul.s       $f10, $f7, $f12
    ctx->pc = 0x4d5970u;
    ctx->f[10] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x4d5974: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x4d5974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d5978: 0x460b3802  mul.s       $f0, $f7, $f11
    ctx->pc = 0x4d5978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x4d597c: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x4d597cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d5980: 0x460b4102  mul.s       $f4, $f8, $f11
    ctx->pc = 0x4d5980u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x4d5984: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x4d5984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x4d5988: 0x460c40c2  mul.s       $f3, $f8, $f12
    ctx->pc = 0x4d5988u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x4d598c: 0x1ee102a  slt         $v0, $t7, $t6
    ctx->pc = 0x4d598cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x4d5990: 0x460e8b00  add.s       $f12, $f17, $f14
    ctx->pc = 0x4d5990u;
    ctx->f[12] = FPU_ADD_S(ctx->f[17], ctx->f[14]);
    // 0x4d5994: 0x460f82c1  sub.s       $f11, $f16, $f15
    ctx->pc = 0x4d5994u;
    ctx->f[11] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x4d5998: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4d5998u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4d599c: 0x460c3142  mul.s       $f5, $f6, $f12
    ctx->pc = 0x4d599cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x4d59a0: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x4d59a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x4d59a4: 0x460b4802  mul.s       $f0, $f9, $f11
    ctx->pc = 0x4d59a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x4d59a8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4d59a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d59ac: 0x460c4842  mul.s       $f1, $f9, $f12
    ctx->pc = 0x4d59acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x4d59b0: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x4d59b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x4d59b4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4d59b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x4d59b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4d59b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4d59bc: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x4d59bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d59c0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x4d59c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d59c4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x4d59c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d59c8: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x4d59c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d59cc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4d59ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d59d0: 0xc5a40004  lwc1        $f4, 0x4($t5)
    ctx->pc = 0x4d59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d59d4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x4d59d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d59d8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x4d59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d59dc: 0x46001441  sub.s       $f17, $f2, $f0
    ctx->pc = 0x4d59dcu;
    ctx->f[17] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d59e0: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x4d59e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d59e4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x4d59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d59e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4d59e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d59ec: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x4d59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d59f0: 0x460122c0  add.s       $f11, $f4, $f1
    ctx->pc = 0x4d59f0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4d59f4: 0x46050340  add.s       $f13, $f0, $f5
    ctx->pc = 0x4d59f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4d59f8: 0x46031280  add.s       $f10, $f2, $f3
    ctx->pc = 0x4d59f8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x4d59fc: 0x46012401  sub.s       $f16, $f4, $f1
    ctx->pc = 0x4d59fcu;
    ctx->f[16] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4d5a00: 0x46031381  sub.s       $f14, $f2, $f3
    ctx->pc = 0x4d5a00u;
    ctx->f[14] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4d5a04: 0x460503c1  sub.s       $f15, $f0, $f5
    ctx->pc = 0x4d5a04u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x4d5a08: 0x460a5881  sub.s       $f2, $f11, $f10
    ctx->pc = 0x4d5a08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x4d5a0c: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x4d5a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x4d5a10: 0x460a5840  add.s       $f1, $f11, $f10
    ctx->pc = 0x4d5a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x4d5a14: 0x460d6101  sub.s       $f4, $f12, $f13
    ctx->pc = 0x4d5a14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x4d5a18: 0x460e8b01  sub.s       $f12, $f17, $f14
    ctx->pc = 0x4d5a18u;
    ctx->f[12] = FPU_SUB_S(ctx->f[17], ctx->f[14]);
    // 0x4d5a1c: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x4d5a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x4d5a20: 0x460f82c0  add.s       $f11, $f16, $f15
    ctx->pc = 0x4d5a20u;
    ctx->f[11] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x4d5a24: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x4d5a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x4d5a28: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x4d5a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d5a2c: 0x25adfff8  addiu       $t5, $t5, -0x8
    ctx->pc = 0x4d5a2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
    // 0x4d5a30: 0x460c40c2  mul.s       $f3, $f8, $f12
    ctx->pc = 0x4d5a30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x4d5a34: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x4d5a34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d5a38: 0x460b3842  mul.s       $f1, $f7, $f11
    ctx->pc = 0x4d5a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x4d5a3c: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x4d5a3cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x4d5a40: 0x460b4202  mul.s       $f8, $f8, $f11
    ctx->pc = 0x4d5a40u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x4d5a44: 0x460e8b00  add.s       $f12, $f17, $f14
    ctx->pc = 0x4d5a44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[17], ctx->f[14]);
    // 0x4d5a48: 0x460f82c1  sub.s       $f11, $f16, $f15
    ctx->pc = 0x4d5a48u;
    ctx->f[11] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x4d5a4c: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x4d5a4cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x4d5a50: 0x460c4882  mul.s       $f2, $f9, $f12
    ctx->pc = 0x4d5a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x4d5a54: 0x460b3002  mul.s       $f0, $f6, $f11
    ctx->pc = 0x4d5a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x4d5a58: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x4d5a58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x4d5a5c: 0xe4e70000  swc1        $f7, 0x0($a3)
    ctx->pc = 0x4d5a5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x4d5a60: 0x460b4a42  mul.s       $f9, $f9, $f11
    ctx->pc = 0x4d5a60u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x4d5a64: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4d5a64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d5a68: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4d5a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4d5a6c: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x4d5a6cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x4d5a70: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x4d5a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x4d5a74: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x4d5a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4d5a78: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x4D5A78u;
    {
        const bool branch_taken_0x4d5a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5A78u;
        // 0x4d5a7c: 0xe4c60000  swc1        $f6, 0x0($a2) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5a78) {
            ctx->pc = 0x4D58A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d58a8;
        }
    }
    ctx->pc = 0x4D5A80u;
label_4d5a80:
    // 0x4d5a80: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4d5a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5a84: 0x46009187  neg.s       $f6, $f18
    ctx->pc = 0x4d5a84u;
    ctx->f[6] = FPU_NEG_S(ctx->f[18]);
    // 0x4d5a88: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x4d5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d5a8c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d5a90: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x4d5a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d5a94: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4d5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4d5a98: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d5a9c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4d5a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5aa0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4d5aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4d5aa4: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x4d5aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x4d5aa8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d5ab0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x4d5ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5ab4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d5ab8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x4d5ab8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d5abc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4d5abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4d5ac0: 0x46000c41  sub.s       $f17, $f1, $f0
    ctx->pc = 0x4d5ac0u;
    ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d5ac4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x4d5ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5ac8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x4d5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d5acc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d5ad0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5ad4: 0x460322c0  add.s       $f11, $f4, $f3
    ctx->pc = 0x4d5ad4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x4d5ad8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5adc: 0x46032401  sub.s       $f16, $f4, $f3
    ctx->pc = 0x4d5adcu;
    ctx->f[16] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4d5ae0: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x4d5ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d5ae4: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x4d5ae4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d5ae8: 0x46022b40  add.s       $f13, $f5, $f2
    ctx->pc = 0x4d5ae8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x4d5aec: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x4d5aecu;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d5af0: 0x46022bc1  sub.s       $f15, $f5, $f2
    ctx->pc = 0x4d5af0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4d5af4: 0x460a58c1  sub.s       $f3, $f11, $f10
    ctx->pc = 0x4d5af4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x4d5af8: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x4d5af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x4d5afc: 0x460a5840  add.s       $f1, $f11, $f10
    ctx->pc = 0x4d5afcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x4d5b00: 0x460d6101  sub.s       $f4, $f12, $f13
    ctx->pc = 0x4d5b00u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x4d5b04: 0x460e8b01  sub.s       $f12, $f17, $f14
    ctx->pc = 0x4d5b04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[17], ctx->f[14]);
    // 0x4d5b08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4d5b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d5b0c: 0x460f82c0  add.s       $f11, $f16, $f15
    ctx->pc = 0x4d5b0cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x4d5b10: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x4d5b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d5b14: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x4d5b14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d5b18: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x4d5b18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d5b1c: 0x460c5880  add.s       $f2, $f11, $f12
    ctx->pc = 0x4d5b1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[12]);
    // 0x4d5b20: 0x460b6041  sub.s       $f1, $f12, $f11
    ctx->pc = 0x4d5b20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x4d5b24: 0x460e8b00  add.s       $f12, $f17, $f14
    ctx->pc = 0x4d5b24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[17], ctx->f[14]);
    // 0x4d5b28: 0x460f82c1  sub.s       $f11, $f16, $f15
    ctx->pc = 0x4d5b28u;
    ctx->f[11] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x4d5b2c: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x4d5b2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x4d5b30: 0x46029082  mul.s       $f2, $f18, $f2
    ctx->pc = 0x4d5b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x4d5b34: 0x460c5801  sub.s       $f0, $f11, $f12
    ctx->pc = 0x4d5b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[12]);
    // 0x4d5b38: 0x460b60c0  add.s       $f3, $f12, $f11
    ctx->pc = 0x4d5b38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
    // 0x4d5b3c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4d5b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d5b40: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x4d5b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d5b44: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4d5b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4d5b48: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x4d5b48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4d5b4c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x4d5b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d5b50: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5B50u;
        // 0x4d5b54: 0xe4a60000  swc1        $f6, 0x0($a1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D5B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D5B58u;
}
