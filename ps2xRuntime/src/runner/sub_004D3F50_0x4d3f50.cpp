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

// Function: sub_004D3F50
// Address: 0x4d3f50 - 0x4d4750
void sub_004D3F50_0x4d3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3F50_0x4d3f50");
#endif

    switch (ctx->pc) {
        case 0x4d4088u: goto label_4d4088;
        default: break;
    }

    ctx->pc = 0x4d3f50u;

    // 0x4d3f50: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x4d3f50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3f54: 0x478c3  sra         $t7, $a0, 3
    ctx->pc = 0x4d3f54u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4d3f58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4d3f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4d3f5c: 0xf2840  sll         $a1, $t7, 1
    ctx->pc = 0x4d3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x4d3f60: 0xe7be0090  swc1        $f30, 0x90($sp)
    ctx->pc = 0x4d3f60u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4d3f64: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x4d3f64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3f68: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x4d3f68u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4d3f6c: 0xf4080  sll         $t0, $t7, 2
    ctx->pc = 0x4d3f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x4d3f70: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x4d3f70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4d3f74: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x4d3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x4d3f78: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x4d3f78u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4d3f7c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d3f80: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x4d3f80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4d3f84: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d3f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3f88: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x4d3f88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4d3f8c: 0xf10c0  sll         $v0, $t7, 3
    ctx->pc = 0x4d3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x4d3f90: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x4d3f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d3f94: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3f98: 0xe7bf0098  swc1        $f31, 0x98($sp)
    ctx->pc = 0x4d3f98u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4d3f9c: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x4d3f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d3fa0: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x4d3fa0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x4d3fa4: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d3fa8: 0xe7bc0080  swc1        $f28, 0x80($sp)
    ctx->pc = 0x4d3fa8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4d3fac: 0x25f8fffe  addiu       $t8, $t7, -0x2
    ctx->pc = 0x4d3facu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967294));
    // 0x4d3fb0: 0xe7bb0078  swc1        $f27, 0x78($sp)
    ctx->pc = 0x4d3fb0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x4d3fb4: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x4d3fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d3fb8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x4d3fb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d3fbc: 0x1d8102a  slt         $v0, $t6, $t8
    ctx->pc = 0x4d3fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d3fc0: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x4d3fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3fc4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4d3fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3fc8: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x4d3fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3fcc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3fd0: 0x46011e00  add.s       $f24, $f3, $f1
    ctx->pc = 0x4d3fd0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x4d3fd4: 0x46011d01  sub.s       $f20, $f3, $f1
    ctx->pc = 0x4d3fd4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d3fd8: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x4d3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d3fdc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x4d3fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3fe0: 0x46002640  add.s       $f25, $f4, $f0
    ctx->pc = 0x4d3fe0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4d3fe4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x4d3fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3fe8: 0x46002781  sub.s       $f30, $f4, $f0
    ctx->pc = 0x4d3fe8u;
    ctx->f[30] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4d3fec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d3fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3ff0: 0x46022dc0  add.s       $f23, $f5, $f2
    ctx->pc = 0x4d3ff0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x4d3ff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4d3ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4d3ff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4d3ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d3ffc: 0x46022d41  sub.s       $f21, $f5, $f2
    ctx->pc = 0x4d3ffcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4d4000: 0x46011bc0  add.s       $f15, $f3, $f1
    ctx->pc = 0x4d4000u;
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x4d4004: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x4d4004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4d4008: 0x46011e81  sub.s       $f26, $f3, $f1
    ctx->pc = 0x4d4008u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d400c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x4d400cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4d4010: 0x4619c081  sub.s       $f2, $f24, $f25
    ctx->pc = 0x4d4010u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x4d4014: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x4d4014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x4d4018: 0x460fb840  add.s       $f1, $f23, $f15
    ctx->pc = 0x4d4018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x4d401c: 0x460fb901  sub.s       $f4, $f23, $f15
    ctx->pc = 0x4d401cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x4d4020: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x4d4020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x4d4024: 0x461ea8c0  add.s       $f3, $f21, $f30
    ctx->pc = 0x4d4024u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
    // 0x4d4028: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x4d4028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x4d402c: 0x461aa141  sub.s       $f5, $f20, $f26
    ctx->pc = 0x4d402cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x4d4030: 0x461aa040  add.s       $f1, $f20, $f26
    ctx->pc = 0x4d4030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x4d4034: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x4d4034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d4038: 0x461ea801  sub.s       $f0, $f21, $f30
    ctx->pc = 0x4d4038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[30]);
    // 0x4d403c: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x4d403cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d4040: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x4d4040u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d4044: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x4d4044u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d4048: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4d4048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d404c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d4050: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x4d4050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x4d4054: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4d4054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4058: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4d4058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d405c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x4d405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4060: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4d4060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4d4064: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x4d4064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4068: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x4d4068u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d406c: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x4d406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4070: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x4D4070u;
    {
        const bool branch_taken_0x4d4070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4070u;
        // 0x4d4074: 0xe7a40008  swc1        $f4, 0x8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4070) {
            ctx->pc = 0x4D4488u;
            goto label_4d4488;
        }
    }
    ctx->pc = 0x4D4078u;
    // 0x4d4078: 0x24aafff8  addiu       $t2, $a1, -0x8
    ctx->pc = 0x4d4078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x4d407c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x4d407cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4080: 0x25690008  addiu       $t1, $t3, 0x8
    ctx->pc = 0x4d4080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x4d4084: 0x0  nop
    ctx->pc = 0x4d4084u;
    // NOP
label_4d4088:
    // 0x4d4088: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x4d4088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x4d408c: 0xc5290000  lwc1        $f9, 0x0($t1)
    ctx->pc = 0x4d408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d4090: 0xac4021  addu        $t0, $a1, $t4
    ctx->pc = 0x4d4090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d4094: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d4094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d4098: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d4098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d409c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d409cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d40a0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d40a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d40a4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d40a8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4d40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d40ac: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d40acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d40b0: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x4d40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d40b4: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x4d40b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x4d40b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4d40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d40bc: 0x18e3023  subu        $a2, $t4, $t6
    ctx->pc = 0x4d40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x4d40c0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x4d40c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d40c4: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x4d40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x4d40c8: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x4d40c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d40cc: 0x46004e00  add.s       $f24, $f9, $f0
    ctx->pc = 0x4d40ccu;
    ctx->f[24] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x4d40d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d40d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d40d4: 0x46051640  add.s       $f25, $f2, $f5
    ctx->pc = 0x4d40d4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x4d40d8: 0x46004d01  sub.s       $f20, $f9, $f0
    ctx->pc = 0x4d40d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x4d40dc: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x4d40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d40e0: 0xc4890008  lwc1        $f9, 0x8($a0)
    ctx->pc = 0x4d40e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d40e4: 0x46012541  sub.s       $f21, $f4, $f1
    ctx->pc = 0x4d40e4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4d40e8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x4d40e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d40ec: 0x460125c0  add.s       $f23, $f4, $f1
    ctx->pc = 0x4d40ecu;
    ctx->f[23] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4d40f0: 0xc5a70000  lwc1        $f7, 0x0($t5)
    ctx->pc = 0x4d40f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d40f4: 0x4619c041  sub.s       $f1, $f24, $f25
    ctx->pc = 0x4d40f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x4d40f8: 0xc5a80004  lwc1        $f8, 0x4($t5)
    ctx->pc = 0x4d40f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d40fc: 0x46061bc0  add.s       $f15, $f3, $f6
    ctx->pc = 0x4d40fcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x4d4100: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x4d4100u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d4104: 0x46061e81  sub.s       $f26, $f3, $f6
    ctx->pc = 0x4d4104u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x4d4108: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x4d4108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d410c: 0x46051781  sub.s       $f30, $f2, $f5
    ctx->pc = 0x4d410cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x4d4110: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x4d4110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4114: 0x460fb901  sub.s       $f4, $f23, $f15
    ctx->pc = 0x4d4114u;
    ctx->f[4] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x4d4118: 0xc493000c  lwc1        $f19, 0xC($a0)
    ctx->pc = 0x4d4118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d411c: 0x46076080  add.s       $f2, $f12, $f7
    ctx->pc = 0x4d411cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x4d4120: 0xc53b0008  lwc1        $f27, 0x8($t1)
    ctx->pc = 0x4d4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d4124: 0x460800c0  add.s       $f3, $f0, $f8
    ctx->pc = 0x4d4124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4d4128: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x4d4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d412c: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x4d412cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x4d4130: 0xc46b000c  lwc1        $f11, 0xC($v1)
    ctx->pc = 0x4d4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d4134: 0x461aa601  sub.s       $f24, $f20, $f26
    ctx->pc = 0x4d4134u;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x4d4138: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x4d4138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d413c: 0x460ddd81  sub.s       $f22, $f27, $f13
    ctx->pc = 0x4d413cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[27], ctx->f[13]);
    // 0x4d4140: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x4d4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d4144: 0x460fb840  add.s       $f1, $f23, $f15
    ctx->pc = 0x4d4144u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x4d4148: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x4d4148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d414c: 0x461eadc0  add.s       $f23, $f21, $f30
    ctx->pc = 0x4d414cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
    // 0x4d4150: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x4d4150u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x4d4154: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x4d4154u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x4d4158: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x4d4158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x4d415c: 0xc5a40008  lwc1        $f4, 0x8($t5)
    ctx->pc = 0x4d415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4160: 0xc5af000c  lwc1        $f15, 0xC($t5)
    ctx->pc = 0x4d4160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d4164: 0x460ddec0  add.s       $f27, $f27, $f13
    ctx->pc = 0x4d4164u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[13]);
    // 0x4d4168: 0xc446000c  lwc1        $f6, 0xC($v0)
    ctx->pc = 0x4d4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d416c: 0x46181c82  mul.s       $f18, $f3, $f24
    ctx->pc = 0x4d416cu;
    ctx->f[18] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x4d4170: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x4d4170u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d4174: 0x46171282  mul.s       $f10, $f2, $f23
    ctx->pc = 0x4d4174u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x4d4178: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x4d4178u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4d417c: 0x46181242  mul.s       $f9, $f2, $f24
    ctx->pc = 0x4d417cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x4d4180: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x4d4180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4d4184: 0x46133701  sub.s       $f28, $f6, $f19
    ctx->pc = 0x4d4184u;
    ctx->f[28] = FPU_SUB_S(ctx->f[6], ctx->f[19]);
    // 0x4d4188: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x4d4188u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d418c: 0x46171b82  mul.s       $f14, $f3, $f23
    ctx->pc = 0x4d418cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x4d4190: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x4d4190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x4d4194: 0x46125280  add.s       $f10, $f10, $f18
    ctx->pc = 0x4d4194u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[18]);
    // 0x4d4198: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x4d4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x4d419c: 0x461cb601  sub.s       $f24, $f22, $f28
    ctx->pc = 0x4d419cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[28]);
    // 0x4d41a0: 0xc52c000c  lwc1        $f12, 0xC($t1)
    ctx->pc = 0x4d41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d41a4: 0x460e4a41  sub.s       $f9, $f9, $f14
    ctx->pc = 0x4d41a4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[14]);
    // 0x4d41a8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x4d41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d41ac: 0xac4021  addu        $t0, $a1, $t4
    ctx->pc = 0x4d41acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d41b0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x4d41b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d41b4: 0x460b67c1  sub.s       $f31, $f12, $f11
    ctx->pc = 0x4d41b4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x4d41b8: 0x46002f41  sub.s       $f29, $f5, $f0
    ctx->pc = 0x4d41b8u;
    ctx->f[29] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x4d41bc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x4d41bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d41c0: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x4d41c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x4d41c4: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d41c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d41c8: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x4d41c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4d41cc: 0x460f1041  sub.s       $f1, $f2, $f15
    ctx->pc = 0x4d41ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x4d41d0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x4d41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d41d4: 0x461dfdc0  add.s       $f23, $f31, $f29
    ctx->pc = 0x4d41d4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d41d8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x4d41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d41dc: 0x46007bc7  neg.s       $f15, $f15
    ctx->pc = 0x4d41dcu;
    ctx->f[15] = FPU_NEG_S(ctx->f[15]);
    // 0x4d41e0: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x4d41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d41e4: 0x46001402  mul.s       $f16, $f2, $f0
    ctx->pc = 0x4d41e4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4d41e8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x4d41e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d41ec: 0x461719c2  mul.s       $f7, $f3, $f23
    ctx->pc = 0x4d41ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x4d41f0: 0x46181a02  mul.s       $f8, $f3, $f24
    ctx->pc = 0x4d41f0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x4d41f4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4d41f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d41f8: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x4d41f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d41fc: 0x46182302  mul.s       $f12, $f4, $f24
    ctx->pc = 0x4d41fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x4d4200: 0x461aa600  add.s       $f24, $f20, $f26
    ctx->pc = 0x4d4200u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x4d4204: 0xe7af0020  swc1        $f15, 0x20($sp)
    ctx->pc = 0x4d4204u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d4208: 0x46011442  mul.s       $f17, $f2, $f1
    ctx->pc = 0x4d4208u;
    ctx->f[17] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4d420c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d420cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d4210: 0x46002e40  add.s       $f25, $f5, $f0
    ctx->pc = 0x4d4210u;
    ctx->f[25] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x4d4214: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4d4214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d4218: 0x460b1e80  add.s       $f26, $f3, $f11
    ctx->pc = 0x4d4218u;
    ctx->f[26] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x4d421c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x4d421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x4d4220: 0x46133080  add.s       $f2, $f6, $f19
    ctx->pc = 0x4d4220u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[19]);
    // 0x4d4224: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4d4224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4d4228: 0x4619d800  add.s       $f0, $f27, $f25
    ctx->pc = 0x4d4228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[25]);
    // 0x4d422c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x4d422cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x4d4230: 0x46172102  mul.s       $f4, $f4, $f23
    ctx->pc = 0x4d4230u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x4d4234: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4d4234u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4d4238: 0x4602d040  add.s       $f1, $f26, $f2
    ctx->pc = 0x4d4238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[2]);
    // 0x4d423c: 0x1d8402a  slt         $t0, $t6, $t8
    ctx->pc = 0x4d423cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d4240: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x4d4240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x4d4244: 0x4602d081  sub.s       $f2, $f26, $f2
    ctx->pc = 0x4d4244u;
    ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
    // 0x4d4248: 0x461eadc1  sub.s       $f23, $f21, $f30
    ctx->pc = 0x4d4248u;
    ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[30]);
    // 0x4d424c: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x4d424cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x4d4250: 0x4619d981  sub.s       $f6, $f27, $f25
    ctx->pc = 0x4d4250u;
    ctx->f[6] = FPU_SUB_S(ctx->f[27], ctx->f[25]);
    // 0x4d4254: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x4d4254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4258: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x4d4258u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x4d425c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x4d425cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x4d4260: 0x46178ac2  mul.s       $f11, $f17, $f23
    ctx->pc = 0x4d4260u;
    ctx->f[11] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4264: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4d4264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d4268: 0x46178142  mul.s       $f5, $f16, $f23
    ctx->pc = 0x4d4268u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x4d426c: 0x461dfdc1  sub.s       $f23, $f31, $f29
    ctx->pc = 0x4d426cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d4270: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4d4270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4d4274: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x4d4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4278: 0x46188b42  mul.s       $f13, $f17, $f24
    ctx->pc = 0x4d4278u;
    ctx->f[13] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d427c: 0x461880c2  mul.s       $f3, $f16, $f24
    ctx->pc = 0x4d427cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x4d4280: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x4d4280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d4284: 0x461cb600  add.s       $f24, $f22, $f28
    ctx->pc = 0x4d4284u;
    ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[28]);
    // 0x4d4288: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x4d4288u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x4d428c: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x4d428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d4290: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x4d4290u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x4d4294: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x4d4294u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4d4298: 0x460d2941  sub.s       $f5, $f5, $f13
    ctx->pc = 0x4d4298u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x4d429c: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x4d429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d42a0: 0x46172042  mul.s       $f1, $f4, $f23
    ctx->pc = 0x4d42a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x4d42a4: 0xe4690000  swc1        $f9, 0x0($v1)
    ctx->pc = 0x4d42a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d42a8: 0xc7a9001c  lwc1        $f9, 0x1C($sp)
    ctx->pc = 0x4d42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d42ac: 0x46183102  mul.s       $f4, $f6, $f24
    ctx->pc = 0x4d42acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x4d42b0: 0x46173082  mul.s       $f2, $f6, $f23
    ctx->pc = 0x4d42b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x4d42b4: 0xe46a0004  swc1        $f10, 0x4($v1)
    ctx->pc = 0x4d42b4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d42b8: 0x46184802  mul.s       $f0, $f9, $f24
    ctx->pc = 0x4d42b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x4d42bc: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x4d42bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x4d42c0: 0xe467000c  swc1        $f7, 0xC($v1)
    ctx->pc = 0x4d42c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x4d42c4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4d42c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4d42c8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4d42c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d42cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4d42ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d42d0: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x4d42d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d42d4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d42d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d42d8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d42d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d42dc: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x4d42dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d42e0: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x4d42e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d42e4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4d42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d42e8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d42ec: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x4d42ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d42f0: 0x46002600  add.s       $f24, $f4, $f0
    ctx->pc = 0x4d42f0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4d42f4: 0xc4e70004  lwc1        $f7, 0x4($a3)
    ctx->pc = 0x4d42f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d42f8: 0x46061640  add.s       $f25, $f2, $f6
    ctx->pc = 0x4d42f8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x4d42fc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4d42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4300: 0x46002501  sub.s       $f20, $f4, $f0
    ctx->pc = 0x4d4300u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4d4304: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x4d4304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4308: 0x46061781  sub.s       $f30, $f2, $f6
    ctx->pc = 0x4d4308u;
    ctx->f[30] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x4d430c: 0x46012dc0  add.s       $f23, $f5, $f1
    ctx->pc = 0x4d430cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x4d4310: 0xc549fff8  lwc1        $f9, -0x8($t2)
    ctx->pc = 0x4d4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d4314: 0x46071bc0  add.s       $f15, $f3, $f7
    ctx->pc = 0x4d4314u;
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x4d4318: 0xc54dfffc  lwc1        $f13, -0x4($t2)
    ctx->pc = 0x4d4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d431c: 0x4619c001  sub.s       $f0, $f24, $f25
    ctx->pc = 0x4d431cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x4d4320: 0xc4eefff8  lwc1        $f14, -0x8($a3)
    ctx->pc = 0x4d4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d4324: 0x46012d41  sub.s       $f21, $f5, $f1
    ctx->pc = 0x4d4324u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x4d4328: 0xc4c4fff8  lwc1        $f4, -0x8($a2)
    ctx->pc = 0x4d4328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d432c: 0xc4c5fffc  lwc1        $f5, -0x4($a2)
    ctx->pc = 0x4d432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4330: 0x460fb841  sub.s       $f1, $f23, $f15
    ctx->pc = 0x4d4330u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x4d4334: 0xc4acfff8  lwc1        $f12, -0x8($a1)
    ctx->pc = 0x4d4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4338: 0x46071e81  sub.s       $f26, $f3, $f7
    ctx->pc = 0x4d4338u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x4d433c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4d433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d4340: 0x46044d81  sub.s       $f22, $f9, $f4
    ctx->pc = 0x4d4340u;
    ctx->f[22] = FPU_SUB_S(ctx->f[9], ctx->f[4]);
    // 0x4d4344: 0xc4abfffc  lwc1        $f11, -0x4($a1)
    ctx->pc = 0x4d4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d4348: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x4d4348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x4d434c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4d434cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4d4350: 0x461aa601  sub.s       $f24, $f20, $f26
    ctx->pc = 0x4d4350u;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x4d4354: 0x460fb840  add.s       $f1, $f23, $f15
    ctx->pc = 0x4d4354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x4d4358: 0xc4e2fffc  lwc1        $f2, -0x4($a3)
    ctx->pc = 0x4d4358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d435c: 0x461eadc0  add.s       $f23, $f21, $f30
    ctx->pc = 0x4d435cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
    // 0x4d4360: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x4d4360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x4d4364: 0x46056fc1  sub.s       $f31, $f13, $f5
    ctx->pc = 0x4d4364u;
    ctx->f[31] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    // 0x4d4368: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x4d4368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x4d436c: 0x46025f01  sub.s       $f28, $f11, $f2
    ctx->pc = 0x4d436cu;
    ctx->f[28] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x4d4370: 0x460e6741  sub.s       $f29, $f12, $f14
    ctx->pc = 0x4d4370u;
    ctx->f[29] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x4d4374: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x4d4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4378: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x4d4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d437c: 0x46044ec0  add.s       $f27, $f9, $f4
    ctx->pc = 0x4d437cu;
    ctx->f[27] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x4d4380: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x4d4380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4384: 0x460e6640  add.s       $f25, $f12, $f14
    ctx->pc = 0x4d4384u;
    ctx->f[25] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x4d4388: 0x46171a82  mul.s       $f10, $f3, $f23
    ctx->pc = 0x4d4388u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x4d438c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x4d438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4390: 0x461735c2  mul.s       $f23, $f6, $f23
    ctx->pc = 0x4d4390u;
    ctx->f[23] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x4d4394: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x4d4394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d4398: 0x461834c2  mul.s       $f19, $f6, $f24
    ctx->pc = 0x4d4398u;
    ctx->f[19] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x4d439c: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x4d439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d43a0: 0x46181a02  mul.s       $f8, $f3, $f24
    ctx->pc = 0x4d43a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x4d43a4: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x4d43a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d43a8: 0x461cb601  sub.s       $f24, $f22, $f28
    ctx->pc = 0x4d43a8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[28]);
    // 0x4d43ac: 0x461dfdc0  add.s       $f23, $f31, $f29
    ctx->pc = 0x4d43acu;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d43b0: 0x46025880  add.s       $f2, $f11, $f2
    ctx->pc = 0x4d43b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x4d43b4: 0x46184c82  mul.s       $f18, $f9, $f24
    ctx->pc = 0x4d43b4u;
    ctx->f[18] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x4d43b8: 0x461801c2  mul.s       $f7, $f0, $f24
    ctx->pc = 0x4d43b8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x4d43bc: 0x461aa600  add.s       $f24, $f20, $f26
    ctx->pc = 0x4d43bcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x4d43c0: 0x46170242  mul.s       $f9, $f0, $f23
    ctx->pc = 0x4d43c0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x4d43c4: 0x46170bc2  mul.s       $f15, $f1, $f23
    ctx->pc = 0x4d43c4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x4d43c8: 0x46056e80  add.s       $f26, $f13, $f5
    ctx->pc = 0x4d43c8u;
    ctx->f[26] = FPU_ADD_S(ctx->f[13], ctx->f[5]);
    // 0x4d43cc: 0x461eadc1  sub.s       $f23, $f21, $f30
    ctx->pc = 0x4d43ccu;
    ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[30]);
    // 0x4d43d0: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x4d43d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d43d4: 0x461880c2  mul.s       $f3, $f16, $f24
    ctx->pc = 0x4d43d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x4d43d8: 0x4602d040  add.s       $f1, $f26, $f2
    ctx->pc = 0x4d43d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[2]);
    // 0x4d43dc: 0x46178982  mul.s       $f6, $f17, $f23
    ctx->pc = 0x4d43dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d43e0: 0x46178342  mul.s       $f13, $f16, $f23
    ctx->pc = 0x4d43e0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x4d43e4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x4d43e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x4d43e8: 0x4619d800  add.s       $f0, $f27, $f25
    ctx->pc = 0x4d43e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[25]);
    // 0x4d43ec: 0xe541fffc  swc1        $f1, -0x4($t2)
    ctx->pc = 0x4d43ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294967292), bits); }
    // 0x4d43f0: 0x461dfdc1  sub.s       $f23, $f31, $f29
    ctx->pc = 0x4d43f0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d43f4: 0x46188902  mul.s       $f4, $f17, $f24
    ctx->pc = 0x4d43f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d43f8: 0xe540fff8  swc1        $f0, -0x8($t2)
    ctx->pc = 0x4d43f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294967288), bits); }
    // 0x4d43fc: 0x461cb600  add.s       $f24, $f22, $f28
    ctx->pc = 0x4d43fcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[28]);
    // 0x4d4400: 0x461762c2  mul.s       $f11, $f12, $f23
    ctx->pc = 0x4d4400u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x4d4404: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x4d4404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x4d4408: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x4d4408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d440c: 0x4602d081  sub.s       $f2, $f26, $f2
    ctx->pc = 0x4d440cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
    // 0x4d4410: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x4d4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4414: 0x461828c2  mul.s       $f3, $f5, $f24
    ctx->pc = 0x4d4414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x4d4418: 0xe4ac0000  swc1        $f12, 0x0($a1)
    ctx->pc = 0x4d4418u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d441c: 0x4619d941  sub.s       $f5, $f27, $f25
    ctx->pc = 0x4d441cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[27], ctx->f[25]);
    // 0x4d4420: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x4d4420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4424: 0x46170802  mul.s       $f0, $f1, $f23
    ctx->pc = 0x4d4424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x4d4428: 0x46135280  add.s       $f10, $f10, $f19
    ctx->pc = 0x4d4428u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[19]);
    // 0x4d442c: 0x46186042  mul.s       $f1, $f12, $f24
    ctx->pc = 0x4d442cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x4d4430: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x4d4430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4434: 0x460f39c1  sub.s       $f7, $f7, $f15
    ctx->pc = 0x4d4434u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x4d4438: 0x46124a40  add.s       $f9, $f9, $f18
    ctx->pc = 0x4d4438u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[18]);
    // 0x4d443c: 0xe4ac0004  swc1        $f12, 0x4($a1)
    ctx->pc = 0x4d443cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d4440: 0x460d2100  add.s       $f4, $f4, $f13
    ctx->pc = 0x4d4440u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x4d4444: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x4d4444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4448: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x4d4448u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x4d444c: 0xe4a2fffc  swc1        $f2, -0x4($a1)
    ctx->pc = 0x4d444cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x4d4450: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d4450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d4454: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x4d4454u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x4d4458: 0xe4a5fff8  swc1        $f5, -0x8($a1)
    ctx->pc = 0x4d4458u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x4d445c: 0xe4ca0004  swc1        $f10, 0x4($a2)
    ctx->pc = 0x4d445cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4d4460: 0xe4c80000  swc1        $f8, 0x0($a2)
    ctx->pc = 0x4d4460u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4d4464: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x4d4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4468: 0xe4c7fff8  swc1        $f7, -0x8($a2)
    ctx->pc = 0x4d4468u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), bits); }
    // 0x4d446c: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x4d446cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x4d4470: 0xe4c9fffc  swc1        $f9, -0x4($a2)
    ctx->pc = 0x4d4470u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), bits); }
    // 0x4d4474: 0xe4e40000  swc1        $f4, 0x0($a3)
    ctx->pc = 0x4d4474u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x4d4478: 0xe4e3fff8  swc1        $f3, -0x8($a3)
    ctx->pc = 0x4d4478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294967288), bits); }
    // 0x4d447c: 0xe4e60004  swc1        $f6, 0x4($a3)
    ctx->pc = 0x4d447cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x4d4480: 0x1500ff01  bnez        $t0, . + 4 + (-0xFF << 2)
    ctx->pc = 0x4D4480u;
    {
        const bool branch_taken_0x4d4480 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4480u;
        // 0x4d4484: 0xe4e0fffc  swc1        $f0, -0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4480) {
            ctx->pc = 0x4D4088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4088;
        }
    }
    ctx->pc = 0x4D4488u;
label_4d4488:
    // 0x4d4488: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4d4488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d448c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x4d448cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4490: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x4d4490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4494: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x4d4494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x4d4498: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x4d4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d449c: 0xac4021  addu        $t0, $a1, $t4
    ctx->pc = 0x4d449cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4d44a0: 0x46041840  add.s       $f1, $f3, $f4
    ctx->pc = 0x4d44a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x4d44a4: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x4d44a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d44a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d44ac: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4d44acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d44b0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4d44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d44b4: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d44b8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x4d44b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x4d44bc: 0xc442fff8  lwc1        $f2, -0x8($v0)
    ctx->pc = 0x4d44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d44c0: 0x46042980  add.s       $f6, $f5, $f4
    ctx->pc = 0x4d44c0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x4d44c4: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x4d44c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d44c8: 0xc445fffc  lwc1        $f5, -0x4($v0)
    ctx->pc = 0x4d44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d44cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4d44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d44d0: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d44d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d44d4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x4d44d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4d44d8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d44dc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d44dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d44e0: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4d44e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4d44e4: 0x46001600  add.s       $f24, $f2, $f0
    ctx->pc = 0x4d44e4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d44e8: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x4d44e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d44ec: 0xc483fffc  lwc1        $f3, -0x4($a0)
    ctx->pc = 0x4d44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d44f0: 0xc464fff8  lwc1        $f4, -0x8($v1)
    ctx->pc = 0x4d44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d44f4: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x4d44f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x4d44f8: 0xc4a1fff8  lwc1        $f1, -0x8($a1)
    ctx->pc = 0x4d44f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d44fc: 0x46032dc0  add.s       $f23, $f5, $f3
    ctx->pc = 0x4d44fcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d4500: 0xc462fffc  lwc1        $f2, -0x4($v1)
    ctx->pc = 0x4d4500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d4504: 0x46032d41  sub.s       $f21, $f5, $f3
    ctx->pc = 0x4d4504u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4d4508: 0xc4a0fffc  lwc1        $f0, -0x4($a1)
    ctx->pc = 0x4d4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d450c: 0x46012640  add.s       $f25, $f4, $f1
    ctx->pc = 0x4d450cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4d4510: 0x46012781  sub.s       $f30, $f4, $f1
    ctx->pc = 0x4d4510u;
    ctx->f[30] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4d4514: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x4d4514u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d4518: 0x460013c0  add.s       $f15, $f2, $f0
    ctx->pc = 0x4d4518u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d451c: 0x46001681  sub.s       $f26, $f2, $f0
    ctx->pc = 0x4d451cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d4520: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x4d4520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x4d4524: 0x460fb840  add.s       $f1, $f23, $f15
    ctx->pc = 0x4d4524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x4d4528: 0x4619c0c1  sub.s       $f3, $f24, $f25
    ctx->pc = 0x4d4528u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x4d452c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x4d452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x4d4530: 0x460fb881  sub.s       $f2, $f23, $f15
    ctx->pc = 0x4d4530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x4d4534: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x4d4534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x4d4538: 0x461eadc0  add.s       $f23, $f21, $f30
    ctx->pc = 0x4d4538u;
    ctx->f[23] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
    // 0x4d453c: 0x461aa601  sub.s       $f24, $f20, $f26
    ctx->pc = 0x4d453cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x4d4540: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4d4540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4544: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x4d4544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4548: 0xe463fff8  swc1        $f3, -0x8($v1)
    ctx->pc = 0x4d4548u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
    // 0x4d454c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x4d454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4550: 0x46006141  sub.s       $f5, $f12, $f0
    ctx->pc = 0x4d4550u;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x4d4554: 0xe462fffc  swc1        $f2, -0x4($v1)
    ctx->pc = 0x4d4554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x4d4558: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x4d4558u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4d455c: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x4d455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d4560: 0xc7a90010  lwc1        $f9, 0x10($sp)
    ctx->pc = 0x4d4560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d4564: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x4d4564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d4568: 0x46173102  mul.s       $f4, $f6, $f23
    ctx->pc = 0x4d4568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x4d456c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x4d456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4570: 0x46184982  mul.s       $f6, $f9, $f24
    ctx->pc = 0x4d4570u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x4d4574: 0x46174802  mul.s       $f0, $f9, $f23
    ctx->pc = 0x4d4574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x4d4578: 0x46186082  mul.s       $f2, $f12, $f24
    ctx->pc = 0x4d4578u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x4d457c: 0x46051c02  mul.s       $f16, $f3, $f5
    ctx->pc = 0x4d457cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4d4580: 0x46011c42  mul.s       $f17, $f3, $f1
    ctx->pc = 0x4d4580u;
    ctx->f[17] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x4d4584: 0x461aa600  add.s       $f24, $f20, $f26
    ctx->pc = 0x4d4584u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x4d4588: 0x461eadc1  sub.s       $f23, $f21, $f30
    ctx->pc = 0x4d4588u;
    ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[30]);
    // 0x4d458c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4d458cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d4590: 0x46188942  mul.s       $f5, $f17, $f24
    ctx->pc = 0x4d4590u;
    ctx->f[5] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d4594: 0x461788c2  mul.s       $f3, $f17, $f23
    ctx->pc = 0x4d4594u;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4598: 0x46178002  mul.s       $f0, $f16, $f23
    ctx->pc = 0x4d4598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x4d459c: 0xe482fff8  swc1        $f2, -0x8($a0)
    ctx->pc = 0x4d459cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), bits); }
    // 0x4d45a0: 0x46188042  mul.s       $f1, $f16, $f24
    ctx->pc = 0x4d45a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x4d45a4: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x4d45a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x4d45a8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4d45a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x4d45ac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4d45acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d45b0: 0xe484fffc  swc1        $f4, -0x4($a0)
    ctx->pc = 0x4d45b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
    // 0x4d45b4: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4d45b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d45b8: 0xe4a0fffc  swc1        $f0, -0x4($a1)
    ctx->pc = 0x4d45b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x4d45bc: 0xe4a1fff8  swc1        $f1, -0x8($a1)
    ctx->pc = 0x4d45bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x4d45c0: 0x46002187  neg.s       $f6, $f4
    ctx->pc = 0x4d45c0u;
    ctx->f[6] = FPU_NEG_S(ctx->f[4]);
    // 0x4d45c4: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x4d45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d45c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4d45c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d45cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d45ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d45d0: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x4d45d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d45d4: 0x46000e00  add.s       $f24, $f1, $f0
    ctx->pc = 0x4d45d4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d45d8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x4d45d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d45dc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x4d45dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d45e0: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x4d45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d45e4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x4d45e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d45e8: 0x46032dc0  add.s       $f23, $f5, $f3
    ctx->pc = 0x4d45e8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d45ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d45ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d45f0: 0x46072640  add.s       $f25, $f4, $f7
    ctx->pc = 0x4d45f0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x4d45f4: 0x46032d41  sub.s       $f21, $f5, $f3
    ctx->pc = 0x4d45f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4d45f8: 0x460013c0  add.s       $f15, $f2, $f0
    ctx->pc = 0x4d45f8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d45fc: 0x46072781  sub.s       $f30, $f4, $f7
    ctx->pc = 0x4d45fcu;
    ctx->f[30] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x4d4600: 0x46001681  sub.s       $f26, $f2, $f0
    ctx->pc = 0x4d4600u;
    ctx->f[26] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d4604: 0x4619c0c1  sub.s       $f3, $f24, $f25
    ctx->pc = 0x4d4604u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x4d4608: 0x460fb901  sub.s       $f4, $f23, $f15
    ctx->pc = 0x4d4608u;
    ctx->f[4] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x4d460c: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x4d460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x4d4610: 0x460fb840  add.s       $f1, $f23, $f15
    ctx->pc = 0x4d4610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x4d4614: 0x461aa601  sub.s       $f24, $f20, $f26
    ctx->pc = 0x4d4614u;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x4d4618: 0x461eadc0  add.s       $f23, $f21, $f30
    ctx->pc = 0x4d4618u;
    ctx->f[23] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
    // 0x4d461c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4d461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d4620: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x4d4620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d4624: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x4d4624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d4628: 0x4618b880  add.s       $f2, $f23, $f24
    ctx->pc = 0x4d4628u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x4d462c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x4d462cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d4630: 0x4617c001  sub.s       $f0, $f24, $f23
    ctx->pc = 0x4d4630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x4d4634: 0xc7bf0098  lwc1        $f31, 0x98($sp)
    ctx->pc = 0x4d4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x4d4638: 0x461aa600  add.s       $f24, $f20, $f26
    ctx->pc = 0x4d4638u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x4d463c: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x4d463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4640: 0x461eadc1  sub.s       $f23, $f21, $f30
    ctx->pc = 0x4d4640u;
    ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[30]);
    // 0x4d4644: 0xc7bd0088  lwc1        $f29, 0x88($sp)
    ctx->pc = 0x4d4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x4d4648: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4d4648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4d464c: 0xc7bc0080  lwc1        $f28, 0x80($sp)
    ctx->pc = 0x4d464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d4650: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x4d4650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x4d4654: 0xc7bb0078  lwc1        $f27, 0x78($sp)
    ctx->pc = 0x4d4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d4658: 0x4618b841  sub.s       $f1, $f23, $f24
    ctx->pc = 0x4d4658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x4d465c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x4d465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d4660: 0x4617c0c0  add.s       $f3, $f24, $f23
    ctx->pc = 0x4d4660u;
    ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x4d4664: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4d4664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d4668: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x4d4668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d466c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x4d466cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4d4670: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x4d4670u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4d4674: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x4d4674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d4678: 0xc4a8000c  lwc1        $f8, 0xC($a1)
    ctx->pc = 0x4d4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d467c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x4d467cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d4680: 0xe4a60000  swc1        $f6, 0x0($a1)
    ctx->pc = 0x4d4680u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d4684: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4d4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4688: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x4d4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d468c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x4d468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d4690: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x4d4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d4694: 0x46000e00  add.s       $f24, $f1, $f0
    ctx->pc = 0x4d4694u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d4698: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x4d4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d469c: 0x46071e40  add.s       $f25, $f3, $f7
    ctx->pc = 0x4d469cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x4d46a0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x4d46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d46a4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x4d46a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d46a8: 0x46042dc0  add.s       $f23, $f5, $f4
    ctx->pc = 0x4d46a8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x4d46ac: 0x460813c0  add.s       $f15, $f2, $f8
    ctx->pc = 0x4d46acu;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x4d46b0: 0x46042d41  sub.s       $f21, $f5, $f4
    ctx->pc = 0x4d46b0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4d46b4: 0x46071f81  sub.s       $f30, $f3, $f7
    ctx->pc = 0x4d46b4u;
    ctx->f[30] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x4d46b8: 0x46081681  sub.s       $f26, $f2, $f8
    ctx->pc = 0x4d46b8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x4d46bc: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x4d46bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x4d46c0: 0x4619c0c1  sub.s       $f3, $f24, $f25
    ctx->pc = 0x4d46c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x4d46c4: 0x460fb881  sub.s       $f2, $f23, $f15
    ctx->pc = 0x4d46c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x4d46c8: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x4d46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d46cc: 0x460fb840  add.s       $f1, $f23, $f15
    ctx->pc = 0x4d46ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x4d46d0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x4d46d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4d46d4: 0x461aa601  sub.s       $f24, $f20, $f26
    ctx->pc = 0x4d46d4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x4d46d8: 0x461eadc0  add.s       $f23, $f21, $f30
    ctx->pc = 0x4d46d8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
    // 0x4d46dc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x4d46dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x4d46e0: 0x46186182  mul.s       $f6, $f12, $f24
    ctx->pc = 0x4d46e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x4d46e4: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x4d46e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x4d46e8: 0x46176042  mul.s       $f1, $f12, $f23
    ctx->pc = 0x4d46e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x4d46ec: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x4d46ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x4d46f0: 0x46174902  mul.s       $f4, $f9, $f23
    ctx->pc = 0x4d46f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x4d46f4: 0x46184802  mul.s       $f0, $f9, $f24
    ctx->pc = 0x4d46f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x4d46f8: 0x461aa600  add.s       $f24, $f20, $f26
    ctx->pc = 0x4d46f8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x4d46fc: 0x461eadc1  sub.s       $f23, $f21, $f30
    ctx->pc = 0x4d46fcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[30]);
    // 0x4d4700: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x4d4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d4704: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d4704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d4708: 0xc7be0090  lwc1        $f30, 0x90($sp)
    ctx->pc = 0x4d4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x4d470c: 0x46188142  mul.s       $f5, $f16, $f24
    ctx->pc = 0x4d470cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x4d4710: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x4d4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d4714: 0x46178842  mul.s       $f1, $f17, $f23
    ctx->pc = 0x4d4714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d4718: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x4d4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d471c: 0x46188882  mul.s       $f2, $f17, $f24
    ctx->pc = 0x4d471cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d4720: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d4720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d4724: 0x461780c2  mul.s       $f3, $f16, $f23
    ctx->pc = 0x4d4724u;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x4d4728: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x4d4728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d472c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x4d472cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x4d4730: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x4d4730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d4734: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x4d4734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x4d4738: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x4d4738u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x4d473c: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x4d473cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d4740: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x4d4740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x4d4744: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x4d4744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x4d4748: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4748u;
        // 0x4d474c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4750u;
}
