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

// Function: sub_004D4750
// Address: 0x4d4750 - 0x4d4f78
void sub_004D4750_0x4d4750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4750_0x4d4750");
#endif

    switch (ctx->pc) {
        case 0x4d4888u: goto label_4d4888;
        default: break;
    }

    ctx->pc = 0x4d4750u;

    // 0x4d4750: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4d4750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4d4754: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x4d4754u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4758: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x4d4758u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x4d475c: 0x478c3  sra         $t7, $a0, 3
    ctx->pc = 0x4d475cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4d4760: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x4d4760u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4d4764: 0xf2840  sll         $a1, $t7, 1
    ctx->pc = 0x4d4764u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x4d4768: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x4d4768u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4d476c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x4d476cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4770: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x4d4770u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4d4774: 0xf4080  sll         $t0, $t7, 2
    ctx->pc = 0x4d4774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x4d4778: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x4d4778u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d477c: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d477cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d4780: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x4d4780u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4d4784: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x4d4784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x4d4788: 0xe7bf0098  swc1        $f31, 0x98($sp)
    ctx->pc = 0x4d4788u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4d478c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d4790: 0xe7be0090  swc1        $f30, 0x90($sp)
    ctx->pc = 0x4d4790u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4d4794: 0xf10c0  sll         $v0, $t7, 3
    ctx->pc = 0x4d4794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x4d4798: 0xe7bc0080  swc1        $f28, 0x80($sp)
    ctx->pc = 0x4d4798u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4d479c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d479cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d47a0: 0xe7bb0078  swc1        $f27, 0x78($sp)
    ctx->pc = 0x4d47a0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x4d47a4: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x4d47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d47a8: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x4d47a8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4d47ac: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d47acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d47b0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x4d47b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d47b4: 0x25f8fffe  addiu       $t8, $t7, -0x2
    ctx->pc = 0x4d47b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967294));
    // 0x4d47b8: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x4d47b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d47bc: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x4d47bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d47c0: 0x1d8102a  slt         $v0, $t6, $t8
    ctx->pc = 0x4d47c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d47c4: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x4d47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d47c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d47c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d47cc: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x4d47ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d47d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4d47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d47d4: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x4d47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d47d8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d47dc: 0x46040580  add.s       $f22, $f0, $f4
    ctx->pc = 0x4d47dcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4d47e0: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x4d47e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d47e4: 0x460405c1  sub.s       $f23, $f0, $f4
    ctx->pc = 0x4d47e4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4d47e8: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x4d47e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d47ec: 0x46021e00  add.s       $f24, $f3, $f2
    ctx->pc = 0x4d47ecu;
    ctx->f[24] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x4d47f0: 0x46053c00  add.s       $f16, $f7, $f5
    ctx->pc = 0x4d47f0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x4d47f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4d47f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4d47f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4d47f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d47fc: 0x460132c0  add.s       $f11, $f6, $f1
    ctx->pc = 0x4d47fcu;
    ctx->f[11] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x4d4800: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x4d4800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d4804: 0x46013641  sub.s       $f25, $f6, $f1
    ctx->pc = 0x4d4804u;
    ctx->f[25] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x4d4808: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d4808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d480c: 0x46021d41  sub.s       $f21, $f3, $f2
    ctx->pc = 0x4d480cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x4d4810: 0x46053f41  sub.s       $f29, $f7, $f5
    ctx->pc = 0x4d4810u;
    ctx->f[29] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x4d4814: 0x4610c000  add.s       $f0, $f24, $f16
    ctx->pc = 0x4d4814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[16]);
    // 0x4d4818: 0x460bb841  sub.s       $f1, $f23, $f11
    ctx->pc = 0x4d4818u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[11]);
    // 0x4d481c: 0x4610c081  sub.s       $f2, $f24, $f16
    ctx->pc = 0x4d481cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[16]);
    // 0x4d4820: 0x460bb900  add.s       $f4, $f23, $f11
    ctx->pc = 0x4d4820u;
    ctx->f[4] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x4d4824: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x4d4824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x4d4828: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x4d4828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x4d482c: 0x461db0c0  add.s       $f3, $f22, $f29
    ctx->pc = 0x4d482cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[29]);
    // 0x4d4830: 0x4619a940  add.s       $f5, $f21, $f25
    ctx->pc = 0x4d4830u;
    ctx->f[5] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x4d4834: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x4d4834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d4838: 0x4619a841  sub.s       $f1, $f21, $f25
    ctx->pc = 0x4d4838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x4d483c: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x4d483cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d4840: 0x461db001  sub.s       $f0, $f22, $f29
    ctx->pc = 0x4d4840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[29]);
    // 0x4d4844: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x4d4844u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d4848: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x4d4848u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d484c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4d484cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d4850: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d4850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d4854: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x4d4854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x4d4858: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4d4858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d485c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4d485cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d4860: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x4d4860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4864: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4d4864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4d4868: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x4d4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d486c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x4d486cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d4870: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x4d4870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4874: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x4D4874u;
    {
        const bool branch_taken_0x4d4874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4874u;
        // 0x4d4878: 0xe7a40008  swc1        $f4, 0x8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4874) {
            ctx->pc = 0x4D4C84u;
            goto label_4d4c84;
        }
    }
    ctx->pc = 0x4D487Cu;
    // 0x4d487c: 0x24aafff8  addiu       $t2, $a1, -0x8
    ctx->pc = 0x4d487cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x4d4880: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x4d4880u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4884: 0x25690008  addiu       $t1, $t3, 0x8
    ctx->pc = 0x4d4884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_4d4888:
    // 0x4d4888: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x4d4888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x4d488c: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x4d488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4890: 0xac4021  addu        $t0, $a1, $t4
    ctx->pc = 0x4d4890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d4894: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d4894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d4898: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d4898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d489c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d489cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d48a0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d48a4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d48a8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4d48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d48ac: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d48acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d48b0: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x4d48b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d48b4: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x4d48b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x4d48b8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x4d48b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d48bc: 0x18e2823  subu        $a1, $t4, $t6
    ctx->pc = 0x4d48bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x4d48c0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x4d48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d48c4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x4d48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d48c8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x4d48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d48cc: 0x46042e00  add.s       $f24, $f5, $f4
    ctx->pc = 0x4d48ccu;
    ctx->f[24] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x4d48d0: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x4d48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d48d4: 0x46061400  add.s       $f16, $f2, $f6
    ctx->pc = 0x4d48d4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x4d48d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x4d48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d48dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d48dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d48e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d48e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d48e4: 0x46042d41  sub.s       $f21, $f5, $f4
    ctx->pc = 0x4d48e4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4d48e8: 0xc5a80000  lwc1        $f8, 0x0($t5)
    ctx->pc = 0x4d48e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d48ec: 0x46071ac0  add.s       $f11, $f3, $f7
    ctx->pc = 0x4d48ecu;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x4d48f0: 0x46071e41  sub.s       $f25, $f3, $f7
    ctx->pc = 0x4d48f0u;
    ctx->f[25] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x4d48f4: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x4d48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d48f8: 0x4610c1c1  sub.s       $f7, $f24, $f16
    ctx->pc = 0x4d48f8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[24], ctx->f[16]);
    // 0x4d48fc: 0xc5a90004  lwc1        $f9, 0x4($t5)
    ctx->pc = 0x4d48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d4900: 0x46061741  sub.s       $f29, $f2, $f6
    ctx->pc = 0x4d4900u;
    ctx->f[29] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x4d4904: 0xc4940008  lwc1        $f20, 0x8($a0)
    ctx->pc = 0x4d4904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d4908: 0x460105c1  sub.s       $f23, $f0, $f1
    ctx->pc = 0x4d4908u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d490c: 0xc7a6001c  lwc1        $f6, 0x1C($sp)
    ctx->pc = 0x4d490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4910: 0x46082880  add.s       $f2, $f5, $f8
    ctx->pc = 0x4d4910u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x4d4914: 0xc493000c  lwc1        $f19, 0xC($a0)
    ctx->pc = 0x4d4914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d4918: 0xc53a0008  lwc1        $f26, 0x8($t1)
    ctx->pc = 0x4d4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d491c: 0x460930c0  add.s       $f3, $f6, $f9
    ctx->pc = 0x4d491cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x4d4920: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x4d4920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d4924: 0x460bbb00  add.s       $f12, $f23, $f11
    ctx->pc = 0x4d4924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x4d4928: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x4d4928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d492c: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x4d492cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d4930: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x4d4930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4934: 0x4610c000  add.s       $f0, $f24, $f16
    ctx->pc = 0x4d4934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[16]);
    // 0x4d4938: 0xc52a000c  lwc1        $f10, 0xC($t1)
    ctx->pc = 0x4d4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d493c: 0x460bb841  sub.s       $f1, $f23, $f11
    ctx->pc = 0x4d493cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[11]);
    // 0x4d4940: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x4d4940u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d4944: 0x4619ae00  add.s       $f24, $f21, $f25
    ctx->pc = 0x4d4944u;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x4d4948: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x4d4948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d494c: 0x461db5c0  add.s       $f23, $f22, $f29
    ctx->pc = 0x4d494cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[29]);
    // 0x4d4950: 0xc446000c  lwc1        $f6, 0xC($v0)
    ctx->pc = 0x4d4950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4954: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x4d4954u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x4d4958: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x4d4958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x4d495c: 0xe7ac002c  swc1        $f12, 0x2C($sp)
    ctx->pc = 0x4d495cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x4d4960: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x4d4960u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x4d4964: 0xac4021  addu        $t0, $a1, $t4
    ctx->pc = 0x4d4964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d4968: 0xc5a40008  lwc1        $f4, 0x8($t5)
    ctx->pc = 0x4d4968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d496c: 0x460fd7c1  sub.s       $f31, $f26, $f15
    ctx->pc = 0x4d496cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[26], ctx->f[15]);
    // 0x4d4970: 0xc5b0000c  lwc1        $f16, 0xC($t5)
    ctx->pc = 0x4d4970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d4974: 0x461336c1  sub.s       $f27, $f6, $f19
    ctx->pc = 0x4d4974u;
    ctx->f[27] = FPU_SUB_S(ctx->f[6], ctx->f[19]);
    // 0x4d4978: 0xe7a9001c  swc1        $f9, 0x1C($sp)
    ctx->pc = 0x4d4978u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4d497c: 0x460d5780  add.s       $f30, $f10, $f13
    ctx->pc = 0x4d497cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x4d4980: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x4d4980u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d4984: 0x46142f01  sub.s       $f28, $f5, $f20
    ctx->pc = 0x4d4984u;
    ctx->f[28] = FPU_SUB_S(ctx->f[5], ctx->f[20]);
    // 0x4d4988: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x4d4988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4d498c: 0x461712c2  mul.s       $f11, $f2, $f23
    ctx->pc = 0x4d498cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x4d4990: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x4d4990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d4994: 0x46181242  mul.s       $f9, $f2, $f24
    ctx->pc = 0x4d4994u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x4d4998: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x4d4998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x4d499c: 0x46181c82  mul.s       $f18, $f3, $f24
    ctx->pc = 0x4d499cu;
    ctx->f[18] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x4d49a0: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x4d49a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x4d49a4: 0x461bfe00  add.s       $f24, $f31, $f27
    ctx->pc = 0x4d49a4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], ctx->f[27]);
    // 0x4d49a8: 0x46171b82  mul.s       $f14, $f3, $f23
    ctx->pc = 0x4d49a8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x4d49ac: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d49acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d49b0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x4d49b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d49b4: 0x461cf5c0  add.s       $f23, $f30, $f28
    ctx->pc = 0x4d49b4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d49b8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x4d49b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d49bc: 0x460fd680  add.s       $f26, $f26, $f15
    ctx->pc = 0x4d49bcu;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[15]);
    // 0x4d49c0: 0x46046000  add.s       $f0, $f12, $f4
    ctx->pc = 0x4d49c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x4d49c4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4d49c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d49c8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x4d49c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d49cc: 0x46101041  sub.s       $f1, $f2, $f16
    ctx->pc = 0x4d49ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[16]);
    // 0x4d49d0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x4d49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d49d4: 0x46142bc0  add.s       $f15, $f5, $f20
    ctx->pc = 0x4d49d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x4d49d8: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x4d49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d49dc: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x4d49dcu;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
    // 0x4d49e0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x4d49e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d49e4: 0x46181a02  mul.s       $f8, $f3, $f24
    ctx->pc = 0x4d49e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x4d49e8: 0x46182302  mul.s       $f12, $f4, $f24
    ctx->pc = 0x4d49e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x4d49ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d49ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d49f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4d49f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4d49f4: 0xe7b00024  swc1        $f16, 0x24($sp)
    ctx->pc = 0x4d49f4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d49f8: 0x4619ae01  sub.s       $f24, $f21, $f25
    ctx->pc = 0x4d49f8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x4d49fc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4d49fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d4a00: 0x46011442  mul.s       $f17, $f2, $f1
    ctx->pc = 0x4d4a00u;
    ctx->f[17] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4d4a04: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x4d4a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x4d4a08: 0x461719c2  mul.s       $f7, $f3, $f23
    ctx->pc = 0x4d4a08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x4d4a0c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x4d4a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4d4a10: 0x46172102  mul.s       $f4, $f4, $f23
    ctx->pc = 0x4d4a10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x4d4a14: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4d4a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4d4a18: 0x460d5641  sub.s       $f25, $f10, $f13
    ctx->pc = 0x4d4a18u;
    ctx->f[25] = FPU_SUB_S(ctx->f[10], ctx->f[13]);
    // 0x4d4a1c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x4d4a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x4d4a20: 0x461db5c1  sub.s       $f23, $f22, $f29
    ctx->pc = 0x4d4a20u;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[29]);
    // 0x4d4a24: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4d4a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4d4a28: 0x46133080  add.s       $f2, $f6, $f19
    ctx->pc = 0x4d4a28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[19]);
    // 0x4d4a2c: 0x1d8402a  slt         $t0, $t6, $t8
    ctx->pc = 0x4d4a2cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d4a30: 0x461800c2  mul.s       $f3, $f0, $f24
    ctx->pc = 0x4d4a30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x4d4a34: 0x46170142  mul.s       $f5, $f0, $f23
    ctx->pc = 0x4d4a34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x4d4a38: 0x4602c841  sub.s       $f1, $f25, $f2
    ctx->pc = 0x4d4a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[2]);
    // 0x4d4a3c: 0x460fd000  add.s       $f0, $f26, $f15
    ctx->pc = 0x4d4a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[15]);
    // 0x4d4a40: 0x4602c880  add.s       $f2, $f25, $f2
    ctx->pc = 0x4d4a40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
    // 0x4d4a44: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x4d4a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x4d4a48: 0x460fd181  sub.s       $f6, $f26, $f15
    ctx->pc = 0x4d4a48u;
    ctx->f[6] = FPU_SUB_S(ctx->f[26], ctx->f[15]);
    // 0x4d4a4c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x4d4a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x4d4a50: 0x46188b42  mul.s       $f13, $f17, $f24
    ctx->pc = 0x4d4a50u;
    ctx->f[13] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d4a54: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d4a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4a58: 0x46178a82  mul.s       $f10, $f17, $f23
    ctx->pc = 0x4d4a58u;
    ctx->f[10] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4a5c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x4d4a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x4d4a60: 0x461bfe01  sub.s       $f24, $f31, $f27
    ctx->pc = 0x4d4a60u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], ctx->f[27]);
    // 0x4d4a64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4d4a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d4a68: 0x461cf5c1  sub.s       $f23, $f30, $f28
    ctx->pc = 0x4d4a68u;
    ctx->f[23] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d4a6c: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x4d4a6cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x4d4a70: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4d4a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4d4a74: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x4d4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4a78: 0x460e4a41  sub.s       $f9, $f9, $f14
    ctx->pc = 0x4d4a78u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[14]);
    // 0x4d4a7c: 0x46125ac0  add.s       $f11, $f11, $f18
    ctx->pc = 0x4d4a7cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[18]);
    // 0x4d4a80: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x4d4a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d4a84: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x4d4a84u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x4d4a88: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x4d4a88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x4d4a8c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x4d4a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4a90: 0x460d2941  sub.s       $f5, $f5, $f13
    ctx->pc = 0x4d4a90u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x4d4a94: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x4d4a94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4d4a98: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x4d4a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4a9c: 0x46171042  mul.s       $f1, $f2, $f23
    ctx->pc = 0x4d4a9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x4d4aa0: 0x46181002  mul.s       $f0, $f2, $f24
    ctx->pc = 0x4d4aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x4d4aa4: 0xe4690000  swc1        $f9, 0x0($v1)
    ctx->pc = 0x4d4aa4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d4aa8: 0x46183102  mul.s       $f4, $f6, $f24
    ctx->pc = 0x4d4aa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x4d4aac: 0xe46b0004  swc1        $f11, 0x4($v1)
    ctx->pc = 0x4d4aacu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d4ab0: 0x46173082  mul.s       $f2, $f6, $f23
    ctx->pc = 0x4d4ab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x4d4ab4: 0xe467000c  swc1        $f7, 0xC($v1)
    ctx->pc = 0x4d4ab4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x4d4ab8: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x4d4ab8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x4d4abc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4d4abcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4d4ac0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4d4ac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d4ac4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4d4ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d4ac8: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x4d4ac8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d4acc: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d4accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d4ad0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d4ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d4ad4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x4d4ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4ad8: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x4d4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4adc: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x4d4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4ae0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d4ae0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d4ae4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4d4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4ae8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x4d4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4aec: 0xc4e80004  lwc1        $f8, 0x4($a3)
    ctx->pc = 0x4d4aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d4af0: 0x46012e00  add.s       $f24, $f5, $f1
    ctx->pc = 0x4d4af0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x4d4af4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x4d4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4af8: 0x46061c00  add.s       $f16, $f3, $f6
    ctx->pc = 0x4d4af8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x4d4afc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x4d4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4b00: 0x46012d41  sub.s       $f21, $f5, $f1
    ctx->pc = 0x4d4b00u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x4d4b04: 0x460205c1  sub.s       $f23, $f0, $f2
    ctx->pc = 0x4d4b04u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4d4b08: 0xc54afff8  lwc1        $f10, -0x8($t2)
    ctx->pc = 0x4d4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d4b0c: 0x460822c0  add.s       $f11, $f4, $f8
    ctx->pc = 0x4d4b0cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x4d4b10: 0xc4effff8  lwc1        $f15, -0x8($a3)
    ctx->pc = 0x4d4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d4b14: 0x4610c301  sub.s       $f12, $f24, $f16
    ctx->pc = 0x4d4b14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[16]);
    // 0x4d4b18: 0xc4c5fff8  lwc1        $f5, -0x8($a2)
    ctx->pc = 0x4d4b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4b1c: 0x46020580  add.s       $f22, $f0, $f2
    ctx->pc = 0x4d4b1cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d4b20: 0xc547fffc  lwc1        $f7, -0x4($t2)
    ctx->pc = 0x4d4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4b24: 0x46061f41  sub.s       $f29, $f3, $f6
    ctx->pc = 0x4d4b24u;
    ctx->f[29] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x4d4b28: 0xc4c2fffc  lwc1        $f2, -0x4($a2)
    ctx->pc = 0x4d4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4b2c: 0xc4a3fff8  lwc1        $f3, -0x8($a1)
    ctx->pc = 0x4d4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4b30: 0x460bb800  add.s       $f0, $f23, $f11
    ctx->pc = 0x4d4b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x4d4b34: 0xc4adfffc  lwc1        $f13, -0x4($a1)
    ctx->pc = 0x4d4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d4b38: 0x460bb841  sub.s       $f1, $f23, $f11
    ctx->pc = 0x4d4b38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[11]);
    // 0x4d4b3c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x4d4b3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d4b40: 0x46082641  sub.s       $f25, $f4, $f8
    ctx->pc = 0x4d4b40u;
    ctx->f[25] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x4d4b44: 0xc4ecfffc  lwc1        $f12, -0x4($a3)
    ctx->pc = 0x4d4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4b48: 0x460557c1  sub.s       $f31, $f10, $f5
    ctx->pc = 0x4d4b48u;
    ctx->f[31] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x4d4b4c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x4d4b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4d4b50: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x4d4b50u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x4d4b54: 0x4610c000  add.s       $f0, $f24, $f16
    ctx->pc = 0x4d4b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[16]);
    // 0x4d4b58: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x4d4b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x4d4b5c: 0x4619ae00  add.s       $f24, $f21, $f25
    ctx->pc = 0x4d4b5cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x4d4b60: 0x460c6ec1  sub.s       $f27, $f13, $f12
    ctx->pc = 0x4d4b60u;
    ctx->f[27] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x4d4b64: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x4d4b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x4d4b68: 0x46055680  add.s       $f26, $f10, $f5
    ctx->pc = 0x4d4b68u;
    ctx->f[26] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x4d4b6c: 0x461db5c0  add.s       $f23, $f22, $f29
    ctx->pc = 0x4d4b6cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[29]);
    // 0x4d4b70: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x4d4b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4b74: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x4d4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4b78: 0x46023f80  add.s       $f30, $f7, $f2
    ctx->pc = 0x4d4b78u;
    ctx->f[30] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x4d4b7c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x4d4b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4b80: 0x460f1f01  sub.s       $f28, $f3, $f15
    ctx->pc = 0x4d4b80u;
    ctx->f[28] = FPU_SUB_S(ctx->f[3], ctx->f[15]);
    // 0x4d4b84: 0x46180a42  mul.s       $f9, $f1, $f24
    ctx->pc = 0x4d4b84u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x4d4b88: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x4d4b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4b8c: 0x46182502  mul.s       $f20, $f4, $f24
    ctx->pc = 0x4d4b8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x4d4b90: 0xc7a6001c  lwc1        $f6, 0x1C($sp)
    ctx->pc = 0x4d4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4b94: 0x461bfe00  add.s       $f24, $f31, $f27
    ctx->pc = 0x4d4b94u;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], ctx->f[27]);
    // 0x4d4b98: 0x46170ac2  mul.s       $f11, $f1, $f23
    ctx->pc = 0x4d4b98u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x4d4b9c: 0x46172482  mul.s       $f18, $f4, $f23
    ctx->pc = 0x4d4b9cu;
    ctx->f[18] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x4d4ba0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x4d4ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4ba4: 0x46182cc2  mul.s       $f19, $f5, $f24
    ctx->pc = 0x4d4ba4u;
    ctx->f[19] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x4d4ba8: 0x46183202  mul.s       $f8, $f6, $f24
    ctx->pc = 0x4d4ba8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x4d4bac: 0x4619ae01  sub.s       $f24, $f21, $f25
    ctx->pc = 0x4d4bacu;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x4d4bb0: 0x461cf5c0  add.s       $f23, $f30, $f28
    ctx->pc = 0x4d4bb0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d4bb4: 0x46023e41  sub.s       $f25, $f7, $f2
    ctx->pc = 0x4d4bb4u;
    ctx->f[25] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x4d4bb8: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x4d4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4bbc: 0x46188902  mul.s       $f4, $f17, $f24
    ctx->pc = 0x4d4bbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d4bc0: 0x46173282  mul.s       $f10, $f6, $f23
    ctx->pc = 0x4d4bc0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x4d4bc4: 0x46172c02  mul.s       $f16, $f5, $f23
    ctx->pc = 0x4d4bc4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[5], ctx->f[23]);
    // 0x4d4bc8: 0x461839c2  mul.s       $f7, $f7, $f24
    ctx->pc = 0x4d4bc8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[24]);
    // 0x4d4bcc: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x4d4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4bd0: 0x461db5c1  sub.s       $f23, $f22, $f29
    ctx->pc = 0x4d4bd0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[29]);
    // 0x4d4bd4: 0x460f1bc0  add.s       $f15, $f3, $f15
    ctx->pc = 0x4d4bd4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[15]);
    // 0x4d4bd8: 0x461bfe01  sub.s       $f24, $f31, $f27
    ctx->pc = 0x4d4bd8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], ctx->f[27]);
    // 0x4d4bdc: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x4d4bdcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d4be0: 0x460c6880  add.s       $f2, $f13, $f12
    ctx->pc = 0x4d4be0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x4d4be4: 0x46170382  mul.s       $f14, $f0, $f23
    ctx->pc = 0x4d4be4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x4d4be8: 0x461808c2  mul.s       $f3, $f1, $f24
    ctx->pc = 0x4d4be8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x4d4bec: 0x460fd000  add.s       $f0, $f26, $f15
    ctx->pc = 0x4d4becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[15]);
    // 0x4d4bf0: 0x4602c841  sub.s       $f1, $f25, $f2
    ctx->pc = 0x4d4bf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[2]);
    // 0x4d4bf4: 0x46178982  mul.s       $f6, $f17, $f23
    ctx->pc = 0x4d4bf4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4bf8: 0xe540fff8  swc1        $f0, -0x8($t2)
    ctx->pc = 0x4d4bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294967288), bits); }
    // 0x4d4bfc: 0x461cf5c1  sub.s       $f23, $f30, $f28
    ctx->pc = 0x4d4bfcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d4c00: 0xe541fffc  swc1        $f1, -0x4($t2)
    ctx->pc = 0x4d4c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294967292), bits); }
    // 0x4d4c04: 0x4602c880  add.s       $f2, $f25, $f2
    ctx->pc = 0x4d4c04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
    // 0x4d4c08: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x4d4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4c0c: 0x46124a41  sub.s       $f9, $f9, $f18
    ctx->pc = 0x4d4c0cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[18]);
    // 0x4d4c10: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x4d4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4c14: 0x461729c2  mul.s       $f7, $f5, $f23
    ctx->pc = 0x4d4c14u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[23]);
    // 0x4d4c18: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x4d4c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d4c1c: 0x460fd141  sub.s       $f5, $f26, $f15
    ctx->pc = 0x4d4c1cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[26], ctx->f[15]);
    // 0x4d4c20: 0x46176002  mul.s       $f0, $f12, $f23
    ctx->pc = 0x4d4c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x4d4c24: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x4d4c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x4d4c28: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x4d4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4c2c: 0x46145ac0  add.s       $f11, $f11, $f20
    ctx->pc = 0x4d4c2cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[20]);
    // 0x4d4c30: 0x46104201  sub.s       $f8, $f8, $f16
    ctx->pc = 0x4d4c30u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
    // 0x4d4c34: 0x46186042  mul.s       $f1, $f12, $f24
    ctx->pc = 0x4d4c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x4d4c38: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x4d4c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4c3c: 0x46135280  add.s       $f10, $f10, $f19
    ctx->pc = 0x4d4c3cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[19]);
    // 0x4d4c40: 0xe4a2fffc  swc1        $f2, -0x4($a1)
    ctx->pc = 0x4d4c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x4d4c44: 0x460e2100  add.s       $f4, $f4, $f14
    ctx->pc = 0x4d4c44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[14]);
    // 0x4d4c48: 0xe4ac0004  swc1        $f12, 0x4($a1)
    ctx->pc = 0x4d4c48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d4c4c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x4d4c4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x4d4c50: 0xe4a5fff8  swc1        $f5, -0x8($a1)
    ctx->pc = 0x4d4c50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x4d4c54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d4c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d4c58: 0xe4c90000  swc1        $f9, 0x0($a2)
    ctx->pc = 0x4d4c58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4d4c5c: 0xe4cb0004  swc1        $f11, 0x4($a2)
    ctx->pc = 0x4d4c5cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4d4c60: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x4d4c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4c64: 0xe4c8fff8  swc1        $f8, -0x8($a2)
    ctx->pc = 0x4d4c64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), bits); }
    // 0x4d4c68: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x4d4c68u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x4d4c6c: 0xe4cafffc  swc1        $f10, -0x4($a2)
    ctx->pc = 0x4d4c6cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), bits); }
    // 0x4d4c70: 0xe4e40000  swc1        $f4, 0x0($a3)
    ctx->pc = 0x4d4c70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x4d4c74: 0xe4e3fff8  swc1        $f3, -0x8($a3)
    ctx->pc = 0x4d4c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294967288), bits); }
    // 0x4d4c78: 0xe4e60004  swc1        $f6, 0x4($a3)
    ctx->pc = 0x4d4c78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x4d4c7c: 0x1500ff02  bnez        $t0, . + 4 + (-0xFE << 2)
    ctx->pc = 0x4D4C7Cu;
    {
        const bool branch_taken_0x4d4c7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4C7Cu;
        // 0x4d4c80: 0xe4e0fffc  swc1        $f0, -0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4c7c) {
            ctx->pc = 0x4D4888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4888;
        }
    }
    ctx->pc = 0x4D4C84u;
label_4d4c84:
    // 0x4d4c84: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x4d4c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4c88: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x4d4c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4c8c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4d4c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4c90: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4d4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d4c94: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x4d4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4c98: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x4d4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d4c9c: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x4d4c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x4d4ca0: 0xc7a6001c  lwc1        $f6, 0x1C($sp)
    ctx->pc = 0x4d4ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4ca4: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x4d4ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4ca8: 0xac4021  addu        $t0, $a1, $t4
    ctx->pc = 0x4d4ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d4cac: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4d4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d4cb0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d4cb4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4d4cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4d4cb8: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d4cbc: 0x46073200  add.s       $f8, $f6, $f7
    ctx->pc = 0x4d4cbcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x4d4cc0: 0xc465fff8  lwc1        $f5, -0x8($v1)
    ctx->pc = 0x4d4cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4cc4: 0xc484fff8  lwc1        $f4, -0x8($a0)
    ctx->pc = 0x4d4cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4cc8: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d4cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d4ccc: 0xc486fffc  lwc1        $f6, -0x4($a0)
    ctx->pc = 0x4d4cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4cd0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d4cd4: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x4d4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4cd8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d4cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d4cdc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x4d4cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4d4ce0: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4d4ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4d4ce4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4d4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d4ce8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4d4ce8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4d4cec: 0xc4a0fffc  lwc1        $f0, -0x4($a1)
    ctx->pc = 0x4d4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4cf0: 0x46042e00  add.s       $f24, $f5, $f4
    ctx->pc = 0x4d4cf0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x4d4cf4: 0xc447fff8  lwc1        $f7, -0x8($v0)
    ctx->pc = 0x4d4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4cf8: 0x46086202  mul.s       $f8, $f12, $f8
    ctx->pc = 0x4d4cf8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x4d4cfc: 0xc4a3fff8  lwc1        $f3, -0x8($a1)
    ctx->pc = 0x4d4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4d00: 0x46060dc1  sub.s       $f23, $f1, $f6
    ctx->pc = 0x4d4d00u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x4d4d04: 0xc442fffc  lwc1        $f2, -0x4($v0)
    ctx->pc = 0x4d4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4d08: 0x46060d80  add.s       $f22, $f1, $f6
    ctx->pc = 0x4d4d08u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4d4d0c: 0x46033c00  add.s       $f16, $f7, $f3
    ctx->pc = 0x4d4d0cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x4d4d10: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x4d4d10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d4d14: 0x460012c0  add.s       $f11, $f2, $f0
    ctx->pc = 0x4d4d14u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d4d18: 0x46001641  sub.s       $f25, $f2, $f0
    ctx->pc = 0x4d4d18u;
    ctx->f[25] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d4d1c: 0x4610c000  add.s       $f0, $f24, $f16
    ctx->pc = 0x4d4d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[16]);
    // 0x4d4d20: 0x460bb841  sub.s       $f1, $f23, $f11
    ctx->pc = 0x4d4d20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[11]);
    // 0x4d4d24: 0x46033f41  sub.s       $f29, $f7, $f3
    ctx->pc = 0x4d4d24u;
    ctx->f[29] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x4d4d28: 0xe460fff8  swc1        $f0, -0x8($v1)
    ctx->pc = 0x4d4d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
    // 0x4d4d2c: 0x4610c0c1  sub.s       $f3, $f24, $f16
    ctx->pc = 0x4d4d2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[16]);
    // 0x4d4d30: 0xe461fffc  swc1        $f1, -0x4($v1)
    ctx->pc = 0x4d4d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x4d4d34: 0x460bb880  add.s       $f2, $f23, $f11
    ctx->pc = 0x4d4d34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x4d4d38: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x4d4d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4d3c: 0x46042d41  sub.s       $f21, $f5, $f4
    ctx->pc = 0x4d4d3cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4d4d40: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4d4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4d44: 0x461db5c0  add.s       $f23, $f22, $f29
    ctx->pc = 0x4d4d44u;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[29]);
    // 0x4d4d48: 0xe443fff8  swc1        $f3, -0x8($v0)
    ctx->pc = 0x4d4d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x4d4d4c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x4d4d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4d50: 0x46010141  sub.s       $f5, $f0, $f1
    ctx->pc = 0x4d4d50u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d4d54: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4d4d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4d58: 0x4619ae00  add.s       $f24, $f21, $f25
    ctx->pc = 0x4d4d58u;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x4d4d5c: 0xe442fffc  swc1        $f2, -0x4($v0)
    ctx->pc = 0x4d4d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x4d4d60: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x4d4d60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x4d4d64: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x4d4d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4d68: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x4d4d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4d6c: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x4d4d6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4d4d70: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x4d4d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4d74: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x4d4d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4d78: 0x46173102  mul.s       $f4, $f6, $f23
    ctx->pc = 0x4d4d78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x4d4d7c: 0x46183982  mul.s       $f6, $f7, $f24
    ctx->pc = 0x4d4d7cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[24]);
    // 0x4d4d80: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x4d4d80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4d4d84: 0x46173802  mul.s       $f0, $f7, $f23
    ctx->pc = 0x4d4d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[23]);
    // 0x4d4d88: 0x46186082  mul.s       $f2, $f12, $f24
    ctx->pc = 0x4d4d88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x4d4d8c: 0x46011c42  mul.s       $f17, $f3, $f1
    ctx->pc = 0x4d4d8cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x4d4d90: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x4d4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4d94: 0x4619ae01  sub.s       $f24, $f21, $f25
    ctx->pc = 0x4d4d94u;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x4d4d98: 0x461db5c1  sub.s       $f23, $f22, $f29
    ctx->pc = 0x4d4d98u;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[29]);
    // 0x4d4d9c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4d4d9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d4da0: 0x46188942  mul.s       $f5, $f17, $f24
    ctx->pc = 0x4d4da0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d4da4: 0x46173802  mul.s       $f0, $f7, $f23
    ctx->pc = 0x4d4da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[23]);
    // 0x4d4da8: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x4d4da8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x4d4dac: 0xe482fff8  swc1        $f2, -0x8($a0)
    ctx->pc = 0x4d4dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), bits); }
    // 0x4d4db0: 0x461788c2  mul.s       $f3, $f17, $f23
    ctx->pc = 0x4d4db0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4db4: 0x46183842  mul.s       $f1, $f7, $f24
    ctx->pc = 0x4d4db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[24]);
    // 0x4d4db8: 0xe484fffc  swc1        $f4, -0x4($a0)
    ctx->pc = 0x4d4db8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
    // 0x4d4dbc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4d4dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x4d4dc0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4d4dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d4dc4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x4d4dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4dc8: 0xe4a0fffc  swc1        $f0, -0x4($a1)
    ctx->pc = 0x4d4dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x4d4dcc: 0x460061c7  neg.s       $f7, $f12
    ctx->pc = 0x4d4dccu;
    ctx->f[7] = FPU_NEG_S(ctx->f[12]);
    // 0x4d4dd0: 0xe4a1fff8  swc1        $f1, -0x8($a1)
    ctx->pc = 0x4d4dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x4d4dd4: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x4d4dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d4dd8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4ddc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4d4ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4de0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d4de0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d4de4: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x4d4de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4de8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4d4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4dec: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x4d4decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4df0: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x4d4df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4df4: 0x46023600  add.s       $f24, $f6, $f2
    ctx->pc = 0x4d4df4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x4d4df8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x4d4df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4dfc: 0x460405c1  sub.s       $f23, $f0, $f4
    ctx->pc = 0x4d4dfcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4d4e00: 0x46082c00  add.s       $f16, $f5, $f8
    ctx->pc = 0x4d4e00u;
    ctx->f[16] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x4d4e04: 0x46011ac0  add.s       $f11, $f3, $f1
    ctx->pc = 0x4d4e04u;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x4d4e08: 0x46023541  sub.s       $f21, $f6, $f2
    ctx->pc = 0x4d4e08u;
    ctx->f[21] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x4d4e0c: 0x46040580  add.s       $f22, $f0, $f4
    ctx->pc = 0x4d4e0cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4d4e10: 0x46082f41  sub.s       $f29, $f5, $f8
    ctx->pc = 0x4d4e10u;
    ctx->f[29] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x4d4e14: 0x46011e41  sub.s       $f25, $f3, $f1
    ctx->pc = 0x4d4e14u;
    ctx->f[25] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d4e18: 0x4610c101  sub.s       $f4, $f24, $f16
    ctx->pc = 0x4d4e18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[24], ctx->f[16]);
    // 0x4d4e1c: 0x460bb8c0  add.s       $f3, $f23, $f11
    ctx->pc = 0x4d4e1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x4d4e20: 0x4610c000  add.s       $f0, $f24, $f16
    ctx->pc = 0x4d4e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[16]);
    // 0x4d4e24: 0x460bb841  sub.s       $f1, $f23, $f11
    ctx->pc = 0x4d4e24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[11]);
    // 0x4d4e28: 0x4619ae00  add.s       $f24, $f21, $f25
    ctx->pc = 0x4d4e28u;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x4d4e2c: 0x461db5c0  add.s       $f23, $f22, $f29
    ctx->pc = 0x4d4e2cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[29]);
    // 0x4d4e30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x4d4e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d4e34: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4d4e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d4e38: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x4d4e38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d4e3c: 0x4618b880  add.s       $f2, $f23, $f24
    ctx->pc = 0x4d4e3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x4d4e40: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x4d4e40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d4e44: 0x4617c001  sub.s       $f0, $f24, $f23
    ctx->pc = 0x4d4e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x4d4e48: 0x4619ae01  sub.s       $f24, $f21, $f25
    ctx->pc = 0x4d4e48u;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x4d4e4c: 0x461db5c1  sub.s       $f23, $f22, $f29
    ctx->pc = 0x4d4e4cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[29]);
    // 0x4d4e50: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4d4e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4d4e54: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x4d4e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x4d4e58: 0x4618b841  sub.s       $f1, $f23, $f24
    ctx->pc = 0x4d4e58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x4d4e5c: 0x4617c0c0  add.s       $f3, $f24, $f23
    ctx->pc = 0x4d4e5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x4d4e60: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4d4e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d4e64: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x4d4e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d4e68: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x4d4e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x4d4e6c: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x4d4e6cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x4d4e70: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x4d4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4e74: 0xc4a8000c  lwc1        $f8, 0xC($a1)
    ctx->pc = 0x4d4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d4e78: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x4d4e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d4e7c: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x4d4e7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d4e80: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x4d4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4e84: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4d4e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4e88: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x4d4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4e8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d4e8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d4e90: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x4d4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4e94: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x4d4e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4e98: 0x46022e00  add.s       $f24, $f5, $f2
    ctx->pc = 0x4d4e98u;
    ctx->f[24] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x4d4e9c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x4d4e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4ea0: 0x46062400  add.s       $f16, $f4, $f6
    ctx->pc = 0x4d4ea0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x4d4ea4: 0x460305c1  sub.s       $f23, $f0, $f3
    ctx->pc = 0x4d4ea4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4d4ea8: 0x46080ac0  add.s       $f11, $f1, $f8
    ctx->pc = 0x4d4ea8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x4d4eac: 0x46030580  add.s       $f22, $f0, $f3
    ctx->pc = 0x4d4eacu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4d4eb0: 0x46080e41  sub.s       $f25, $f1, $f8
    ctx->pc = 0x4d4eb0u;
    ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x4d4eb4: 0x4610c000  add.s       $f0, $f24, $f16
    ctx->pc = 0x4d4eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[16]);
    // 0x4d4eb8: 0x460bb841  sub.s       $f1, $f23, $f11
    ctx->pc = 0x4d4eb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[11]);
    // 0x4d4ebc: 0x46022d41  sub.s       $f21, $f5, $f2
    ctx->pc = 0x4d4ebcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4d4ec0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x4d4ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x4d4ec4: 0x460bb880  add.s       $f2, $f23, $f11
    ctx->pc = 0x4d4ec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x4d4ec8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x4d4ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x4d4ecc: 0x46062741  sub.s       $f29, $f4, $f6
    ctx->pc = 0x4d4eccu;
    ctx->f[29] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x4d4ed0: 0x4610c0c1  sub.s       $f3, $f24, $f16
    ctx->pc = 0x4d4ed0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[16]);
    // 0x4d4ed4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x4d4ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4ed8: 0x4619ae00  add.s       $f24, $f21, $f25
    ctx->pc = 0x4d4ed8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x4d4edc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x4d4edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x4d4ee0: 0x461db5c0  add.s       $f23, $f22, $f29
    ctx->pc = 0x4d4ee0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[29]);
    // 0x4d4ee4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x4d4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4ee8: 0x46180182  mul.s       $f6, $f0, $f24
    ctx->pc = 0x4d4ee8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x4d4eec: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x4d4eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4d4ef0: 0x46170902  mul.s       $f4, $f1, $f23
    ctx->pc = 0x4d4ef0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x4d4ef4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x4d4ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4ef8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x4d4ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4efc: 0x46180802  mul.s       $f0, $f1, $f24
    ctx->pc = 0x4d4efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x4d4f00: 0x4619ae01  sub.s       $f24, $f21, $f25
    ctx->pc = 0x4d4f00u;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x4d4f04: 0x46171042  mul.s       $f1, $f2, $f23
    ctx->pc = 0x4d4f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x4d4f08: 0x461db5c1  sub.s       $f23, $f22, $f29
    ctx->pc = 0x4d4f08u;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[29]);
    // 0x4d4f0c: 0x46181942  mul.s       $f5, $f3, $f24
    ctx->pc = 0x4d4f0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x4d4f10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d4f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d4f14: 0x46178842  mul.s       $f1, $f17, $f23
    ctx->pc = 0x4d4f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4f18: 0x46188882  mul.s       $f2, $f17, $f24
    ctx->pc = 0x4d4f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d4f1c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d4f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d4f20: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x4d4f20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x4d4f24: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x4d4f24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x4d4f28: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x4d4f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4f2c: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x4d4f2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d4f30: 0x461738c2  mul.s       $f3, $f7, $f23
    ctx->pc = 0x4d4f30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[23]);
    // 0x4d4f34: 0xc7bf0098  lwc1        $f31, 0x98($sp)
    ctx->pc = 0x4d4f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x4d4f38: 0xc7be0090  lwc1        $f30, 0x90($sp)
    ctx->pc = 0x4d4f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x4d4f3c: 0xc7bd0088  lwc1        $f29, 0x88($sp)
    ctx->pc = 0x4d4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x4d4f40: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x4d4f40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x4d4f44: 0xc7bc0080  lwc1        $f28, 0x80($sp)
    ctx->pc = 0x4d4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d4f48: 0xc7bb0078  lwc1        $f27, 0x78($sp)
    ctx->pc = 0x4d4f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d4f4c: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x4d4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d4f50: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x4d4f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d4f54: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x4d4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d4f58: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x4d4f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d4f5c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x4d4f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d4f60: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x4d4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d4f64: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x4d4f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d4f68: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x4d4f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x4d4f6c: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x4d4f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x4d4f70: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4F70u;
        // 0x4d4f74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4F78u;
}
