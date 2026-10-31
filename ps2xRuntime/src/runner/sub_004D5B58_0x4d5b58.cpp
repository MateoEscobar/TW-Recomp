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

// Function: sub_004D5B58
// Address: 0x4d5b58 - 0x4d6010
void sub_004D5B58_0x4d5b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5B58_0x4d5b58");
#endif

    switch (ctx->pc) {
        case 0x4d5c70u: goto label_4d5c70;
        default: break;
    }

    ctx->pc = 0x4d5b58u;

    // 0x4d5b58: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4d5b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5b5c: 0x478c3  sra         $t7, $a0, 3
    ctx->pc = 0x4d5b5cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4d5b60: 0xf2880  sll         $a1, $t7, 2
    ctx->pc = 0x4d5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x4d5b64: 0xf5040  sll         $t2, $t7, 1
    ctx->pc = 0x4d5b64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x4d5b68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d5b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d5b6c: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x4d5b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d5b70: 0xe7bc0040  swc1        $f28, 0x40($sp)
    ctx->pc = 0x4d5b70u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d5b74: 0xf10c0  sll         $v0, $t7, 3
    ctx->pc = 0x4d5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x4d5b78: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x4d5b78u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d5b7c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5b80: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x4d5b80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d5b84: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x4d5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4d5b88: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x4d5b88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d5b8c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d5b90: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x4d5b90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d5b94: 0xf3900  sll         $a3, $t7, 4
    ctx->pc = 0x4d5b94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x4d5b98: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x4d5b98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4d5b9c: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x4d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4d5ba0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d5ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d5ba4: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x4d5ba4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ba8: 0xe7bb0038  swc1        $f27, 0x38($sp)
    ctx->pc = 0x4d5ba8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d5bac: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x4d5bacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d5bb0: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x4d5bb0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d5bb4: 0x30f202a  slt         $a0, $t8, $t7
    ctx->pc = 0x4d5bb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x4d5bb8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x4d5bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d5bbc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x4d5bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5bc0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d5bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5bc4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4d5bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5bc8: 0x46001cc1  sub.s       $f19, $f3, $f0
    ctx->pc = 0x4d5bc8u;
    ctx->f[19] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4d5bcc: 0xc7220004  lwc1        $f2, 0x4($t9)
    ctx->pc = 0x4d5bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d5bd0: 0x46012480  add.s       $f18, $f4, $f1
    ctx->pc = 0x4d5bd0u;
    ctx->f[18] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4d5bd4: 0xc52a0000  lwc1        $f10, 0x0($t1)
    ctx->pc = 0x4d5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d5bd8: 0x460125c1  sub.s       $f23, $f4, $f1
    ctx->pc = 0x4d5bd8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4d5bdc: 0xc4490004  lwc1        $f9, 0x4($v0)
    ctx->pc = 0x4d5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d5be0: 0x46001e00  add.s       $f24, $f3, $f0
    ctx->pc = 0x4d5be0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4d5be4: 0xc5280004  lwc1        $f8, 0x4($t1)
    ctx->pc = 0x4d5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d5be8: 0x46139040  add.s       $f1, $f18, $f19
    ctx->pc = 0x4d5be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[18], ctx->f[19]);
    // 0x4d5bec: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4d5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5bf0: 0x46129801  sub.s       $f0, $f19, $f18
    ctx->pc = 0x4d5bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[19], ctx->f[18]);
    // 0x4d5bf4: 0x46095581  sub.s       $f22, $f10, $f9
    ctx->pc = 0x4d5bf4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
    // 0x4d5bf8: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x4d5bf8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4d5bfc: 0x460014c2  mul.s       $f19, $f2, $f0
    ctx->pc = 0x4d5bfcu;
    ctx->f[19] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4d5c00: 0x46044540  add.s       $f21, $f8, $f4
    ctx->pc = 0x4d5c00u;
    ctx->f[21] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x4d5c04: 0x4618b8c0  add.s       $f3, $f23, $f24
    ctx->pc = 0x4d5c04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x4d5c08: 0x4617c141  sub.s       $f5, $f24, $f23
    ctx->pc = 0x4d5c08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x4d5c0c: 0x4613b000  add.s       $f0, $f22, $f19
    ctx->pc = 0x4d5c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[19]);
    // 0x4d5c10: 0x4614a840  add.s       $f1, $f21, $f20
    ctx->pc = 0x4d5c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x4d5c14: 0x4613b181  sub.s       $f6, $f22, $f19
    ctx->pc = 0x4d5c14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[22], ctx->f[19]);
    // 0x4d5c18: 0x4614a9c1  sub.s       $f7, $f21, $f20
    ctx->pc = 0x4d5c18u;
    ctx->f[7] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x4d5c1c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x4d5c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x4d5c20: 0x46031502  mul.s       $f20, $f2, $f3
    ctx->pc = 0x4d5c20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4d5c24: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x4d5c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x4d5c28: 0x460514c2  mul.s       $f19, $f2, $f5
    ctx->pc = 0x4d5c28u;
    ctx->f[19] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4d5c2c: 0xe4a60000  swc1        $f6, 0x0($a1)
    ctx->pc = 0x4d5c2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d5c30: 0x46095700  add.s       $f28, $f10, $f9
    ctx->pc = 0x4d5c30u;
    ctx->f[28] = FPU_ADD_S(ctx->f[10], ctx->f[9]);
    // 0x4d5c34: 0xe4a70004  swc1        $f7, 0x4($a1)
    ctx->pc = 0x4d5c34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d5c38: 0x46044641  sub.s       $f25, $f8, $f4
    ctx->pc = 0x4d5c38u;
    ctx->f[25] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x4d5c3c: 0x4614e001  sub.s       $f0, $f28, $f20
    ctx->pc = 0x4d5c3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[20]);
    // 0x4d5c40: 0x4613c840  add.s       $f1, $f25, $f19
    ctx->pc = 0x4d5c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[19]);
    // 0x4d5c44: 0x4614e080  add.s       $f2, $f28, $f20
    ctx->pc = 0x4d5c44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
    // 0x4d5c48: 0x4613c8c1  sub.s       $f3, $f25, $f19
    ctx->pc = 0x4d5c48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[25], ctx->f[19]);
    // 0x4d5c4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4d5c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d5c50: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x4d5c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d5c54: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d5c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d5c58: 0x10800099  beqz        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x4D5C58u;
    {
        const bool branch_taken_0x4d5c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5C58u;
        // 0x4d5c5c: 0xe4630004  swc1        $f3, 0x4($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5c58) {
            ctx->pc = 0x4D5EC0u;
            goto label_4d5ec0;
        }
    }
    ctx->pc = 0x4D5C60u;
    // 0x4d5c60: 0x24aefff8  addiu       $t6, $a1, -0x8
    ctx->pc = 0x4d5c60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x4d5c64: 0xf96821  addu        $t5, $a3, $t9
    ctx->pc = 0x4d5c64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x4d5c68: 0x252c0008  addiu       $t4, $t1, 0x8
    ctx->pc = 0x4d5c68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x4d5c6c: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x4d5c6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_4d5c70:
    // 0x4d5c70: 0x30a3021  addu        $a2, $t8, $t2
    ctx->pc = 0x4d5c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 10)));
    // 0x4d5c74: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x4d5c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d5c78: 0xca2821  addu        $a1, $a2, $t2
    ctx->pc = 0x4d5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d5c7c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d5c80: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x4d5c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d5c84: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4d5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d5c88: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4d5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5c8c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d5c90: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4d5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4d5c94: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4d5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4d5c98: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x4d5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d5c9c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x4d5c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x4d5ca0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5ca4: 0x25adfff0  addiu       $t5, $t5, -0x10
    ctx->pc = 0x4d5ca4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967280));
    // 0x4d5ca8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4d5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5cac: 0x1582823  subu        $a1, $t2, $t8
    ctx->pc = 0x4d5cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
    // 0x4d5cb0: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x4d5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d5cb4: 0x46001d81  sub.s       $f22, $f3, $f0
    ctx->pc = 0x4d5cb4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4d5cb8: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x4d5cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d5cbc: 0x46011540  add.s       $f21, $f2, $f1
    ctx->pc = 0x4d5cbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4d5cc0: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x4d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d5cc4: 0x46001f00  add.s       $f28, $f3, $f0
    ctx->pc = 0x4d5cc4u;
    ctx->f[28] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4d5cc8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x4d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5ccc: 0x460544c1  sub.s       $f19, $f8, $f5
    ctx->pc = 0x4d5cccu;
    ctx->f[19] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x4d5cd0: 0xc57a0000  lwc1        $f26, 0x0($t3)
    ctx->pc = 0x4d5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d5cd4: 0x46011641  sub.s       $f25, $f2, $f1
    ctx->pc = 0x4d5cd4u;
    ctx->f[25] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4d5cd8: 0x46043480  add.s       $f18, $f6, $f4
    ctx->pc = 0x4d5cd8u;
    ctx->f[18] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x4d5cdc: 0xc57b0004  lwc1        $f27, 0x4($t3)
    ctx->pc = 0x4d5cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d5ce0: 0xc5af0000  lwc1        $f15, 0x0($t5)
    ctx->pc = 0x4d5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d5ce4: 0x4615d302  mul.s       $f12, $f26, $f21
    ctx->pc = 0x4d5ce4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x4d5ce8: 0xc5ae0004  lwc1        $f14, 0x4($t5)
    ctx->pc = 0x4d5ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d5cec: 0x4615d802  mul.s       $f0, $f27, $f21
    ctx->pc = 0x4d5cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[21]);
    // 0x4d5cf0: 0xc569000c  lwc1        $f9, 0xC($t3)
    ctx->pc = 0x4d5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d5cf4: 0x46137b42  mul.s       $f13, $f15, $f19
    ctx->pc = 0x4d5cf4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[19]);
    // 0x4d5cf8: 0xc5a7000c  lwc1        $f7, 0xC($t5)
    ctx->pc = 0x4d5cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d5cfc: 0x461370c2  mul.s       $f3, $f14, $f19
    ctx->pc = 0x4d5cfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[19]);
    // 0x4d5d00: 0x46127842  mul.s       $f1, $f15, $f18
    ctx->pc = 0x4d5d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[18]);
    // 0x4d5d04: 0xc5710008  lwc1        $f17, 0x8($t3)
    ctx->pc = 0x4d5d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d5d08: 0x461272c2  mul.s       $f11, $f14, $f18
    ctx->pc = 0x4d5d08u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[18]);
    // 0x4d5d0c: 0xc5b00008  lwc1        $f16, 0x8($t5)
    ctx->pc = 0x4d5d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d5d10: 0x4616da82  mul.s       $f10, $f27, $f22
    ctx->pc = 0x4d5d10u;
    ctx->f[10] = FPU_MUL_S(ctx->f[27], ctx->f[22]);
    // 0x4d5d14: 0xaa3021  addu        $a2, $a1, $t2
    ctx->pc = 0x4d5d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d5d18: 0x4616d082  mul.s       $f2, $f26, $f22
    ctx->pc = 0x4d5d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
    // 0x4d5d1c: 0xca2821  addu        $a1, $a2, $t2
    ctx->pc = 0x4d5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d5d20: 0x46054600  add.s       $f24, $f8, $f5
    ctx->pc = 0x4d5d20u;
    ctx->f[24] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x4d5d24: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x4d5d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d5d28: 0x460435c1  sub.s       $f23, $f6, $f4
    ctx->pc = 0x4d5d28u;
    ctx->f[23] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x4d5d2c: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x4d5d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d5d30: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x4d5d30u;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
    // 0x4d5d34: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4d5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d5d38: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x4d5d38u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x4d5d3c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4d5d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4d5d40: 0x460a6500  add.s       $f20, $f12, $f10
    ctx->pc = 0x4d5d40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
    // 0x4d5d44: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4d5d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5d48: 0x46011d41  sub.s       $f21, $f3, $f1
    ctx->pc = 0x4d5d48u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d5d4c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4d5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4d5d50: 0x460d5c80  add.s       $f18, $f11, $f13
    ctx->pc = 0x4d5d50u;
    ctx->f[18] = FPU_ADD_S(ctx->f[11], ctx->f[13]);
    // 0x4d5d54: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4d5d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4d5d58: 0x460014c1  sub.s       $f19, $f2, $f0
    ctx->pc = 0x4d5d58u;
    ctx->f[19] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d5d5c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x4d5d5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x4d5d60: 0x46198ac2  mul.s       $f11, $f17, $f25
    ctx->pc = 0x4d5d60u;
    ctx->f[11] = FPU_MUL_S(ctx->f[17], ctx->f[25]);
    // 0x4d5d64: 0x30f402a  slt         $t0, $t8, $t7
    ctx->pc = 0x4d5d64u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x4d5d68: 0x461c4a82  mul.s       $f10, $f9, $f28
    ctx->pc = 0x4d5d68u;
    ctx->f[10] = FPU_MUL_S(ctx->f[9], ctx->f[28]);
    // 0x4d5d6c: 0x46173b42  mul.s       $f13, $f7, $f23
    ctx->pc = 0x4d5d6cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[7], ctx->f[23]);
    // 0x4d5d70: 0x46188302  mul.s       $f12, $f16, $f24
    ctx->pc = 0x4d5d70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x4d5d74: 0x461c88c2  mul.s       $f3, $f17, $f28
    ctx->pc = 0x4d5d74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[28]);
    // 0x4d5d78: 0x46194882  mul.s       $f2, $f9, $f25
    ctx->pc = 0x4d5d78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[25]);
    // 0x4d5d7c: 0x46183942  mul.s       $f5, $f7, $f24
    ctx->pc = 0x4d5d7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[24]);
    // 0x4d5d80: 0x46178102  mul.s       $f4, $f16, $f23
    ctx->pc = 0x4d5d80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x4d5d84: 0x46159a01  sub.s       $f8, $f19, $f21
    ctx->pc = 0x4d5d84u;
    ctx->f[8] = FPU_SUB_S(ctx->f[19], ctx->f[21]);
    // 0x4d5d88: 0x4612a181  sub.s       $f6, $f20, $f18
    ctx->pc = 0x4d5d88u;
    ctx->f[6] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d5d8c: 0x46159800  add.s       $f0, $f19, $f21
    ctx->pc = 0x4d5d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[19], ctx->f[21]);
    // 0x4d5d90: 0x4612a040  add.s       $f1, $f20, $f18
    ctx->pc = 0x4d5d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d5d94: 0x46042d40  add.s       $f21, $f5, $f4
    ctx->pc = 0x4d5d94u;
    ctx->f[21] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x4d5d98: 0x460c6c81  sub.s       $f18, $f13, $f12
    ctx->pc = 0x4d5d98u;
    ctx->f[18] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x4d5d9c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x4d5d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x4d5da0: 0x46021cc0  add.s       $f19, $f3, $f2
    ctx->pc = 0x4d5da0u;
    ctx->f[19] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x4d5da4: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x4d5da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x4d5da8: 0x460a5d01  sub.s       $f20, $f11, $f10
    ctx->pc = 0x4d5da8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x4d5dac: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x4d5dacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d5db0: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x4d5db0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d5db4: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x4d5db4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x4d5db8: 0x46159800  add.s       $f0, $f19, $f21
    ctx->pc = 0x4d5db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[19], ctx->f[21]);
    // 0x4d5dbc: 0x4612a040  add.s       $f1, $f20, $f18
    ctx->pc = 0x4d5dbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d5dc0: 0x46159881  sub.s       $f2, $f19, $f21
    ctx->pc = 0x4d5dc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[19], ctx->f[21]);
    // 0x4d5dc4: 0x4612a0c1  sub.s       $f3, $f20, $f18
    ctx->pc = 0x4d5dc4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d5dc8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x4d5dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d5dcc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4d5dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d5dd0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x4d5dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d5dd4: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x4d5dd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d5dd8: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x4d5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5ddc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x4d5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5de0: 0xc4e80000  lwc1        $f8, 0x0($a3)
    ctx->pc = 0x4d5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d5de4: 0xc5cc0004  lwc1        $f12, 0x4($t6)
    ctx->pc = 0x4d5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d5de8: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x4d5de8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d5dec: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x4d5decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d5df0: 0x46000f00  add.s       $f28, $f1, $f0
    ctx->pc = 0x4d5df0u;
    ctx->f[28] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d5df4: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x4d5df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5df8: 0x46086540  add.s       $f21, $f12, $f8
    ctx->pc = 0x4d5df8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x4d5dfc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x4d5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d5e00: 0x46167342  mul.s       $f13, $f14, $f22
    ctx->pc = 0x4d5e00u;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    // 0x4d5e04: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4d5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d5e08: 0x460434c1  sub.s       $f19, $f6, $f4
    ctx->pc = 0x4d5e08u;
    ctx->f[19] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x4d5e0c: 0x46157a82  mul.s       $f10, $f15, $f21
    ctx->pc = 0x4d5e0cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x4d5e10: 0x46021c80  add.s       $f18, $f3, $f2
    ctx->pc = 0x4d5e10u;
    ctx->f[18] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x4d5e14: 0x4613d842  mul.s       $f1, $f27, $f19
    ctx->pc = 0x4d5e14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[19]);
    // 0x4d5e18: 0x4613d2c2  mul.s       $f11, $f26, $f19
    ctx->pc = 0x4d5e18u;
    ctx->f[11] = FPU_MUL_S(ctx->f[26], ctx->f[19]);
    // 0x4d5e1c: 0x4612d002  mul.s       $f0, $f26, $f18
    ctx->pc = 0x4d5e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[18]);
    // 0x4d5e20: 0x4612d942  mul.s       $f5, $f27, $f18
    ctx->pc = 0x4d5e20u;
    ctx->f[5] = FPU_MUL_S(ctx->f[27], ctx->f[18]);
    // 0x4d5e24: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x4d5e24u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x4d5e28: 0x46167bc2  mul.s       $f15, $f15, $f22
    ctx->pc = 0x4d5e28u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[22]);
    // 0x4d5e2c: 0x46043600  add.s       $f24, $f6, $f4
    ctx->pc = 0x4d5e2cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x4d5e30: 0x46021dc1  sub.s       $f23, $f3, $f2
    ctx->pc = 0x4d5e30u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x4d5e34: 0x46086641  sub.s       $f25, $f12, $f8
    ctx->pc = 0x4d5e34u;
    ctx->f[25] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x4d5e38: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x4d5e38u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d5e3c: 0x460b2c80  add.s       $f18, $f5, $f11
    ctx->pc = 0x4d5e3cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x4d5e40: 0x460e7cc1  sub.s       $f19, $f15, $f14
    ctx->pc = 0x4d5e40u;
    ctx->f[19] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x4d5e44: 0x460d5500  add.s       $f20, $f10, $f13
    ctx->pc = 0x4d5e44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x4d5e48: 0x46198182  mul.s       $f6, $f16, $f25
    ctx->pc = 0x4d5e48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[16], ctx->f[25]);
    // 0x4d5e4c: 0x461c3902  mul.s       $f4, $f7, $f28
    ctx->pc = 0x4d5e4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[28]);
    // 0x4d5e50: 0x46174a02  mul.s       $f8, $f9, $f23
    ctx->pc = 0x4d5e50u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x4d5e54: 0x46188942  mul.s       $f5, $f17, $f24
    ctx->pc = 0x4d5e54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[17], ctx->f[24]);
    // 0x4d5e58: 0x461c8402  mul.s       $f16, $f16, $f28
    ctx->pc = 0x4d5e58u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[28]);
    // 0x4d5e5c: 0x461939c2  mul.s       $f7, $f7, $f25
    ctx->pc = 0x4d5e5cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[25]);
    // 0x4d5e60: 0x46184a42  mul.s       $f9, $f9, $f24
    ctx->pc = 0x4d5e60u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x4d5e64: 0x46178c42  mul.s       $f17, $f17, $f23
    ctx->pc = 0x4d5e64u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[23]);
    // 0x4d5e68: 0x46159800  add.s       $f0, $f19, $f21
    ctx->pc = 0x4d5e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[19], ctx->f[21]);
    // 0x4d5e6c: 0x461598c1  sub.s       $f3, $f19, $f21
    ctx->pc = 0x4d5e6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[19], ctx->f[21]);
    // 0x4d5e70: 0x4612a081  sub.s       $f2, $f20, $f18
    ctx->pc = 0x4d5e70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d5e74: 0x4612a040  add.s       $f1, $f20, $f18
    ctx->pc = 0x4d5e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d5e78: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x4d5e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x4d5e7c: 0x460784c0  add.s       $f19, $f16, $f7
    ctx->pc = 0x4d5e7cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[16], ctx->f[7]);
    // 0x4d5e80: 0x46043501  sub.s       $f20, $f6, $f4
    ctx->pc = 0x4d5e80u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x4d5e84: 0x46114d40  add.s       $f21, $f9, $f17
    ctx->pc = 0x4d5e84u;
    ctx->f[21] = FPU_ADD_S(ctx->f[9], ctx->f[17]);
    // 0x4d5e88: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x4d5e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x4d5e8c: 0x46054481  sub.s       $f18, $f8, $f5
    ctx->pc = 0x4d5e8cu;
    ctx->f[18] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x4d5e90: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x4d5e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d5e94: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x4d5e94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d5e98: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x4d5e98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x4d5e9c: 0x46159800  add.s       $f0, $f19, $f21
    ctx->pc = 0x4d5e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[19], ctx->f[21]);
    // 0x4d5ea0: 0x4612a040  add.s       $f1, $f20, $f18
    ctx->pc = 0x4d5ea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d5ea4: 0x46159881  sub.s       $f2, $f19, $f21
    ctx->pc = 0x4d5ea4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[19], ctx->f[21]);
    // 0x4d5ea8: 0x4612a0c1  sub.s       $f3, $f20, $f18
    ctx->pc = 0x4d5ea8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d5eac: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x4d5eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x4d5eb0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x4d5eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x4d5eb4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x4d5eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4d5eb8: 0x1500ff6d  bnez        $t0, . + 4 + (-0x93 << 2)
    ctx->pc = 0x4D5EB8u;
    {
        const bool branch_taken_0x4d5eb8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5EB8u;
        // 0x4d5ebc: 0xe4c30004  swc1        $f3, 0x4($a2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5eb8) {
            ctx->pc = 0x4D5C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5c70;
        }
    }
    ctx->pc = 0x4D5EC0u;
label_4d5ec0:
    // 0x4d5ec0: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x4d5ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ec4: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x4d5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4d5ec8: 0xaa3021  addu        $a2, $a1, $t2
    ctx->pc = 0x4d5ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d5ecc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4d5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d5ed0: 0xca2821  addu        $a1, $a2, $t2
    ctx->pc = 0x4d5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d5ed4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x4d5ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d5ed8: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x4d5ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d5edc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d5ee0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4d5ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d5ee4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d5ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d5ee8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4d5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4d5eec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4d5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4d5ef0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4d5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4d5ef4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4d5ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5ef8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d5ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5efc: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x4d5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d5f00: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x4d5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d5f04: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d5f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d5f08: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x4d5f08u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d5f0c: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x4d5f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d5f10: 0x46000f00  add.s       $f28, $f1, $f0
    ctx->pc = 0x4d5f10u;
    ctx->f[28] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d5f14: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x4d5f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d5f18: 0x46022540  add.s       $f21, $f4, $f2
    ctx->pc = 0x4d5f18u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x4d5f1c: 0xc4890004  lwc1        $f9, 0x4($a0)
    ctx->pc = 0x4d5f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d5f20: 0x46022641  sub.s       $f25, $f4, $f2
    ctx->pc = 0x4d5f20u;
    ctx->f[25] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x4d5f24: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x4d5f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d5f28: 0x46032cc1  sub.s       $f19, $f5, $f3
    ctx->pc = 0x4d5f28u;
    ctx->f[19] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4d5f2c: 0xc45b0004  lwc1        $f27, 0x4($v0)
    ctx->pc = 0x4d5f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d5f30: 0x46032e00  add.s       $f24, $f5, $f3
    ctx->pc = 0x4d5f30u;
    ctx->f[24] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d5f34: 0x46064c80  add.s       $f18, $f9, $f6
    ctx->pc = 0x4d5f34u;
    ctx->f[18] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x4d5f38: 0xc45a0000  lwc1        $f26, 0x0($v0)
    ctx->pc = 0x4d5f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d5f3c: 0x4616d9c2  mul.s       $f7, $f27, $f22
    ctx->pc = 0x4d5f3cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[27], ctx->f[22]);
    // 0x4d5f40: 0x4615d102  mul.s       $f4, $f26, $f21
    ctx->pc = 0x4d5f40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x4d5f44: 0x4613d142  mul.s       $f5, $f26, $f19
    ctx->pc = 0x4d5f44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[26], ctx->f[19]);
    // 0x4d5f48: 0x4616d082  mul.s       $f2, $f26, $f22
    ctx->pc = 0x4d5f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
    // 0x4d5f4c: 0x4615d802  mul.s       $f0, $f27, $f21
    ctx->pc = 0x4d5f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[21]);
    // 0x4d5f50: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x4d5f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d5f54: 0x4613d8c2  mul.s       $f3, $f27, $f19
    ctx->pc = 0x4d5f54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[27], ctx->f[19]);
    // 0x4d5f58: 0x4612d042  mul.s       $f1, $f26, $f18
    ctx->pc = 0x4d5f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[18]);
    // 0x4d5f5c: 0x4612da02  mul.s       $f8, $f27, $f18
    ctx->pc = 0x4d5f5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[27], ctx->f[18]);
    // 0x4d5f60: 0x46064dc1  sub.s       $f23, $f9, $f6
    ctx->pc = 0x4d5f60u;
    ctx->f[23] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x4d5f64: 0x46072500  add.s       $f20, $f4, $f7
    ctx->pc = 0x4d5f64u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x4d5f68: 0x46011d41  sub.s       $f21, $f3, $f1
    ctx->pc = 0x4d5f68u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d5f6c: 0x46054480  add.s       $f18, $f8, $f5
    ctx->pc = 0x4d5f6cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x4d5f70: 0x460014c1  sub.s       $f19, $f2, $f0
    ctx->pc = 0x4d5f70u;
    ctx->f[19] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d5f74: 0x4617d2c2  mul.s       $f11, $f26, $f23
    ctx->pc = 0x4d5f74u;
    ctx->f[11] = FPU_MUL_S(ctx->f[26], ctx->f[23]);
    // 0x4d5f78: 0x4618da82  mul.s       $f10, $f27, $f24
    ctx->pc = 0x4d5f78u;
    ctx->f[10] = FPU_MUL_S(ctx->f[27], ctx->f[24]);
    // 0x4d5f7c: 0x4619da02  mul.s       $f8, $f27, $f25
    ctx->pc = 0x4d5f7cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[27], ctx->f[25]);
    // 0x4d5f80: 0x461cd1c2  mul.s       $f7, $f26, $f28
    ctx->pc = 0x4d5f80u;
    ctx->f[7] = FPU_MUL_S(ctx->f[26], ctx->f[28]);
    // 0x4d5f84: 0x461cd8c2  mul.s       $f3, $f27, $f28
    ctx->pc = 0x4d5f84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[27], ctx->f[28]);
    // 0x4d5f88: 0x4619d082  mul.s       $f2, $f26, $f25
    ctx->pc = 0x4d5f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[25]);
    // 0x4d5f8c: 0xc7bc0040  lwc1        $f28, 0x40($sp)
    ctx->pc = 0x4d5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d5f90: 0x4618d142  mul.s       $f5, $f26, $f24
    ctx->pc = 0x4d5f90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
    // 0x4d5f94: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x4d5f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d5f98: 0x4617d902  mul.s       $f4, $f27, $f23
    ctx->pc = 0x4d5f98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[27], ctx->f[23]);
    // 0x4d5f9c: 0xc7ba0030  lwc1        $f26, 0x30($sp)
    ctx->pc = 0x4d5f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d5fa0: 0x46159a41  sub.s       $f9, $f19, $f21
    ctx->pc = 0x4d5fa0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[19], ctx->f[21]);
    // 0x4d5fa4: 0xc7bb0038  lwc1        $f27, 0x38($sp)
    ctx->pc = 0x4d5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d5fa8: 0x4612a181  sub.s       $f6, $f20, $f18
    ctx->pc = 0x4d5fa8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d5fac: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x4d5facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d5fb0: 0x46159800  add.s       $f0, $f19, $f21
    ctx->pc = 0x4d5fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[19], ctx->f[21]);
    // 0x4d5fb4: 0xc7b70018  lwc1        $f23, 0x18($sp)
    ctx->pc = 0x4d5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d5fb8: 0x4612a040  add.s       $f1, $f20, $f18
    ctx->pc = 0x4d5fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d5fbc: 0x46021cc1  sub.s       $f19, $f3, $f2
    ctx->pc = 0x4d5fbcu;
    ctx->f[19] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x4d5fc0: 0x46074500  add.s       $f20, $f8, $f7
    ctx->pc = 0x4d5fc0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x4d5fc4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x4d5fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d5fc8: 0x46042d41  sub.s       $f21, $f5, $f4
    ctx->pc = 0x4d5fc8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4d5fcc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4d5fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d5fd0: 0x460a5c80  add.s       $f18, $f11, $f10
    ctx->pc = 0x4d5fd0u;
    ctx->f[18] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x4d5fd4: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x4d5fd4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d5fd8: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x4d5fd8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d5fdc: 0x46159801  sub.s       $f0, $f19, $f21
    ctx->pc = 0x4d5fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[19], ctx->f[21]);
    // 0x4d5fe0: 0x4612a041  sub.s       $f1, $f20, $f18
    ctx->pc = 0x4d5fe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d5fe4: 0x46159880  add.s       $f2, $f19, $f21
    ctx->pc = 0x4d5fe4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[19], ctx->f[21]);
    // 0x4d5fe8: 0x4612a0c0  add.s       $f3, $f20, $f18
    ctx->pc = 0x4d5fe8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d5fec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x4d5fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d5ff0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x4d5ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d5ff4: 0xc7b50008  lwc1        $f21, 0x8($sp)
    ctx->pc = 0x4d5ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d5ff8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d5ffc: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x4d5ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4d6000: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x4d6000u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4d6004: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6004u;
        // 0x4d6008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D600Cu;
    // 0x4d600c: 0x0  nop
    ctx->pc = 0x4d600cu;
    // NOP
    ctx->pc = 0x4d6010u;
}
