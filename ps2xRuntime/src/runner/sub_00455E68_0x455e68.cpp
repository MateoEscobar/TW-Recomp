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

// Function: sub_00455E68
// Address: 0x455e68 - 0x456680
void sub_00455E68_0x455e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455E68_0x455e68");
#endif

    switch (ctx->pc) {
        case 0x455f4cu: goto label_455f4c;
        case 0x455f78u: goto label_455f78;
        case 0x455fc8u: goto label_455fc8;
        case 0x455ff0u: goto label_455ff0;
        case 0x456078u: goto label_456078;
        case 0x456094u: goto label_456094;
        case 0x4560dcu: goto label_4560dc;
        case 0x456100u: goto label_456100;
        case 0x456158u: goto label_456158;
        case 0x456180u: goto label_456180;
        case 0x4561b8u: goto label_4561b8;
        case 0x456234u: goto label_456234;
        case 0x45626cu: goto label_45626c;
        case 0x456290u: goto label_456290;
        case 0x45630cu: goto label_45630c;
        case 0x456358u: goto label_456358;
        case 0x456380u: goto label_456380;
        case 0x456408u: goto label_456408;
        case 0x456430u: goto label_456430;
        case 0x456468u: goto label_456468;
        case 0x4564f4u: goto label_4564f4;
        case 0x45653cu: goto label_45653c;
        case 0x456560u: goto label_456560;
        case 0x4565e8u: goto label_4565e8;
        default: break;
    }

    ctx->pc = 0x455e68u;

    // 0x455e68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x455e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x455e6c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x455e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x455e70: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x455e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x455e74: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x455e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455e78: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x455e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x455e7c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x455e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x455e80: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x455e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x455e84: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x455e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x455e88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x455e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x455e8c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x455e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x455e90: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x455e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x455e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x455e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x455e98: 0xc5010070  lwc1        $f1, 0x70($t0)
    ctx->pc = 0x455e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x455e9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x455e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x455ea0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x455ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x455ea4: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x455ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x455ea8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x455ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x455eac: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x455eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x455eb0: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x455eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x455eb4: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x455eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x455eb8: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x455eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x455ebc: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x455ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x455ec0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x455ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x455ec4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x455ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x455ec8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x455ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x455ecc: 0xc5000074  lwc1        $f0, 0x74($t0)
    ctx->pc = 0x455eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x455ed0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x455ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x455ed4: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x455ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x455ed8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x455ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x455edc: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x455edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x455ee0: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x455ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x455ee4: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x455ee4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x455ee8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x455ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x455eec: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x455eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x455ef0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x455ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x455ef4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x455ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x455ef8: 0xc5010068  lwc1        $f1, 0x68($t0)
    ctx->pc = 0x455ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x455efc: 0xc500006c  lwc1        $f0, 0x6C($t0)
    ctx->pc = 0x455efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x455f00: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x455f00u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x455f04: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x455f04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x455f08: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x455f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x455f0c: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x455f0cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x455f10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x455f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x455f14: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x455f14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x455f18: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x455f18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x455f1c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x455f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x455f20: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x455f20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x455f24: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x455f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x455f28: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x455f28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x455f2c: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x455f2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x455f30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x455f30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x455f34: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x455f34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x455f38: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x455f38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x455f3c: 0x14a201a4  bne         $a1, $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x455F3Cu;
    {
        const bool branch_taken_0x455f3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x455F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455F3Cu;
        // 0x455f40: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x455f3c) {
            ctx->pc = 0x4565D0u;
            goto label_4565d0;
        }
    }
    ctx->pc = 0x455F44u;
    // 0x455f44: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x455F44u;
    SET_GPR_U32(ctx, 31, 0x455F4Cu);
    ctx->pc = 0x455F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455F44u;
    // 0x455f48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x455F44u, 0x455F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455F4Cu;
label_455f4c:
    // 0x455f4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455f50: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x455f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x455f54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x455f54u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x455f58: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x455f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x455f5c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x455F5Cu;
    {
        const bool branch_taken_0x455f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x455F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455F5Cu;
        // 0x455f60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455f5c) {
            ctx->pc = 0x455F98u;
            goto label_455f98;
        }
    }
    ctx->pc = 0x455F64u;
    // 0x455f64: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x455f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455f68: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455f6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455f6cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455f70: 0xf  sync
    ctx->pc = 0x455f70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455f74: 0x40f  sync.p
    ctx->pc = 0x455f74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455f78:
    // 0x455f78: 0x0  nop
    ctx->pc = 0x455f78u;
    // NOP
    // 0x455f7c: 0x0  nop
    ctx->pc = 0x455f7cu;
    // NOP
    // 0x455f80: 0x0  nop
    ctx->pc = 0x455f80u;
    // NOP
    // 0x455f84: 0x0  nop
    ctx->pc = 0x455f84u;
    // NOP
    // 0x455f88: 0x0  nop
    ctx->pc = 0x455f88u;
    // NOP
    // 0x455f8c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455F8Cu;
    {
        const bool branch_taken_0x455f8c = (false);
        if (branch_taken_0x455f8c) {
            ctx->pc = 0x455F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455f78;
        }
    }
    ctx->pc = 0x455F94u;
    // 0x455f94: 0x0  nop
    ctx->pc = 0x455f94u;
    // NOP
label_455f98:
    // 0x455f98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455f9c: 0x2a2400cd  slti        $a0, $s1, 0xCD
    ctx->pc = 0x455f9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x455fa0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x455fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455fa8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455fac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x455FACu;
    {
        const bool branch_taken_0x455fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455FACu;
        // 0x455fb0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455fac) {
            ctx->pc = 0x45600Cu;
            goto label_45600c;
        }
    }
    ctx->pc = 0x455FB4u;
    // 0x455fb4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x455fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x455fb8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455fbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455fbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455fc0: 0xf  sync
    ctx->pc = 0x455fc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455fc4: 0x40f  sync.p
    ctx->pc = 0x455fc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455fc8:
    // 0x455fc8: 0x0  nop
    ctx->pc = 0x455fc8u;
    // NOP
    // 0x455fcc: 0x0  nop
    ctx->pc = 0x455fccu;
    // NOP
    // 0x455fd0: 0x0  nop
    ctx->pc = 0x455fd0u;
    // NOP
    // 0x455fd4: 0x0  nop
    ctx->pc = 0x455fd4u;
    // NOP
    // 0x455fd8: 0x0  nop
    ctx->pc = 0x455fd8u;
    // NOP
    // 0x455fdc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455FDCu;
    {
        const bool branch_taken_0x455fdc = (false);
        if (branch_taken_0x455fdc) {
            ctx->pc = 0x455FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455fc8;
        }
    }
    ctx->pc = 0x455FE4u;
    // 0x455fe4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455fe8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x455fec: 0x0  nop
    ctx->pc = 0x455fecu;
    // NOP
label_455ff0:
    // 0x455ff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455ff4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455ff8: 0x0  nop
    ctx->pc = 0x455ff8u;
    // NOP
    // 0x455ffc: 0x0  nop
    ctx->pc = 0x455ffcu;
    // NOP
    // 0x456000: 0x0  nop
    ctx->pc = 0x456000u;
    // NOP
    // 0x456004: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456004u;
    {
        const bool branch_taken_0x456004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456004) {
            ctx->pc = 0x455FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455ff0;
        }
    }
    ctx->pc = 0x45600Cu;
label_45600c:
    // 0x45600c: 0x148000b2  bnez        $a0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x45600Cu;
    {
        const bool branch_taken_0x45600c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x45600c) {
            ctx->pc = 0x4562D8u;
            goto label_4562d8;
        }
    }
    ctx->pc = 0x456014u;
    // 0x456014: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x456014u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x456018: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x456018u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x45601c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45601cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x456020: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x456020u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x456024: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x456024u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x456028: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x456028u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x45602c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x45602cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x456030: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x456030u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x456034: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x456034u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x456038: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x456038u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x45603c: 0x356bd000  ori         $t3, $t3, 0xD000
    ctx->pc = 0x45603cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)53248);
    // 0x456040: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x456040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x456044: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x456044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x456048: 0x3529d400  ori         $t1, $t1, 0xD400
    ctx->pc = 0x456048u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)54272);
    // 0x45604c: 0x240d0200  addiu       $t5, $zero, 0x200
    ctx->pc = 0x45604cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x456050: 0x358ce010  ori         $t4, $t4, 0xE010
    ctx->pc = 0x456050u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57360);
    // 0x456054: 0x36d6d480  ori         $s6, $s6, 0xD480
    ctx->pc = 0x456054u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54400);
    // 0x456058: 0x36b5d420  ori         $s5, $s5, 0xD420
    ctx->pc = 0x456058u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)54304);
    // 0x45605c: 0x3694d080  ori         $s4, $s4, 0xD080
    ctx->pc = 0x45605cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53376);
    // 0x456060: 0x3673d020  ori         $s3, $s3, 0xD020
    ctx->pc = 0x456060u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53280);
    // 0x456064: 0x3739d410  ori         $t9, $t9, 0xD410
    ctx->pc = 0x456064u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54288);
    // 0x456068: 0x241e0cc0  addiu       $fp, $zero, 0xCC0
    ctx->pc = 0x456068u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x45606c: 0x3718d010  ori         $t8, $t8, 0xD010
    ctx->pc = 0x45606cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)53264);
    // 0x456070: 0x24170330  addiu       $s7, $zero, 0x330
    ctx->pc = 0x456070u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x456074: 0x0  nop
    ctx->pc = 0x456074u;
    // NOP
label_456078:
    // 0x456078: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x456078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x45607c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456080: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x456080u;
    {
        const bool branch_taken_0x456080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456080) {
            ctx->pc = 0x4560B0u;
            goto label_4560b0;
        }
    }
    ctx->pc = 0x456088u;
    // 0x456088: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x456088u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45608c: 0xf  sync
    ctx->pc = 0x45608cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456090: 0x40f  sync.p
    ctx->pc = 0x456090u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456094:
    // 0x456094: 0x0  nop
    ctx->pc = 0x456094u;
    // NOP
    // 0x456098: 0x0  nop
    ctx->pc = 0x456098u;
    // NOP
    // 0x45609c: 0x0  nop
    ctx->pc = 0x45609cu;
    // NOP
    // 0x4560a0: 0x0  nop
    ctx->pc = 0x4560a0u;
    // NOP
    // 0x4560a4: 0x0  nop
    ctx->pc = 0x4560a4u;
    // NOP
    // 0x4560a8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4560A8u;
    {
        const bool branch_taken_0x4560a8 = (false);
        if (branch_taken_0x4560a8) {
            ctx->pc = 0x456094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456094;
        }
    }
    ctx->pc = 0x4560B0u;
label_4560b0:
    // 0x4560b0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4560b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4560b4: 0x2631ff34  addiu       $s1, $s1, -0xCC
    ctx->pc = 0x4560b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967092));
    // 0x4560b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4560b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4560bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4560bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4560c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4560c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4560c4: 0x260e0cc0  addiu       $t6, $s0, 0xCC0
    ctx->pc = 0x4560c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
    // 0x4560c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4560C8u;
    {
        const bool branch_taken_0x4560c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4560CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4560C8u;
        // 0x4560cc: 0x264f3300  addiu       $t7, $s2, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 13056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4560c8) {
            ctx->pc = 0x45611Cu;
            goto label_45611c;
        }
    }
    ctx->pc = 0x4560D0u;
    // 0x4560d0: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x4560d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x4560d4: 0xf  sync
    ctx->pc = 0x4560d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4560d8: 0x40f  sync.p
    ctx->pc = 0x4560d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4560dc:
    // 0x4560dc: 0x0  nop
    ctx->pc = 0x4560dcu;
    // NOP
    // 0x4560e0: 0x0  nop
    ctx->pc = 0x4560e0u;
    // NOP
    // 0x4560e4: 0x0  nop
    ctx->pc = 0x4560e4u;
    // NOP
    // 0x4560e8: 0x0  nop
    ctx->pc = 0x4560e8u;
    // NOP
    // 0x4560ec: 0x0  nop
    ctx->pc = 0x4560ecu;
    // NOP
    // 0x4560f0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4560F0u;
    {
        const bool branch_taken_0x4560f0 = (false);
        if (branch_taken_0x4560f0) {
            ctx->pc = 0x4560DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4560dc;
        }
    }
    ctx->pc = 0x4560F8u;
    // 0x4560f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4560f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4560fc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4560fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_456100:
    // 0x456100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456100u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456104: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456108: 0x0  nop
    ctx->pc = 0x456108u;
    // NOP
    // 0x45610c: 0x0  nop
    ctx->pc = 0x45610cu;
    // NOP
    // 0x456110: 0x0  nop
    ctx->pc = 0x456110u;
    // NOP
    // 0x456114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456114u;
    {
        const bool branch_taken_0x456114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456114) {
            ctx->pc = 0x456100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456100;
        }
    }
    ctx->pc = 0x45611Cu;
label_45611c:
    // 0x45611c: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x45611cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x456120: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x456120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x456124: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x456124u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x456128: 0xaf300000  sw          $s0, 0x0($t9)
    ctx->pc = 0x456128u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 16));
    // 0x45612c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x45612cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x456130: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x456130u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x456134: 0xf  sync
    ctx->pc = 0x456134u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456138: 0x40f  sync.p
    ctx->pc = 0x456138u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45613c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x456140: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456144: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x456144u;
    {
        const bool branch_taken_0x456144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456144u;
        // 0x456148: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456144) {
            ctx->pc = 0x4561A0u;
            goto label_4561a0;
        }
    }
    ctx->pc = 0x45614Cu;
    // 0x45614c: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x45614cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x456150: 0xf  sync
    ctx->pc = 0x456150u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456154: 0x40f  sync.p
    ctx->pc = 0x456154u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456158:
    // 0x456158: 0x0  nop
    ctx->pc = 0x456158u;
    // NOP
    // 0x45615c: 0x0  nop
    ctx->pc = 0x45615cu;
    // NOP
    // 0x456160: 0x0  nop
    ctx->pc = 0x456160u;
    // NOP
    // 0x456164: 0x0  nop
    ctx->pc = 0x456164u;
    // NOP
    // 0x456168: 0x0  nop
    ctx->pc = 0x456168u;
    // NOP
    // 0x45616c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45616Cu;
    {
        const bool branch_taken_0x45616c = (false);
        if (branch_taken_0x45616c) {
            ctx->pc = 0x456158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456158;
        }
    }
    ctx->pc = 0x456174u;
    // 0x456174: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456178: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45617c: 0x0  nop
    ctx->pc = 0x45617cu;
    // NOP
label_456180:
    // 0x456180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456180u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456184: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456188: 0x0  nop
    ctx->pc = 0x456188u;
    // NOP
    // 0x45618c: 0x0  nop
    ctx->pc = 0x45618cu;
    // NOP
    // 0x456190: 0x0  nop
    ctx->pc = 0x456190u;
    // NOP
    // 0x456194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456194u;
    {
        const bool branch_taken_0x456194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456194) {
            ctx->pc = 0x456180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456180;
        }
    }
    ctx->pc = 0x45619Cu;
    // 0x45619c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_4561a0:
    // 0x4561a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4561a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4561a4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4561a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4561a8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4561a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4561ac: 0x34630cc0  ori         $v1, $v1, 0xCC0
    ctx->pc = 0x4561acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3264);
    // 0x4561b0: 0x240700cb  addiu       $a3, $zero, 0xCB
    ctx->pc = 0x4561b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x4561b4: 0x0  nop
    ctx->pc = 0x4561b4u;
    // NOP
label_4561b8:
    // 0x4561b8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x4561b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4561bc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x4561bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4561c0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x4561c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4561c4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x4561c4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4561c8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x4561c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4561cc: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x4561ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4561d0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x4561d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4561d4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x4561d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4561d8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x4561d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4561dc: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x4561dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4561e0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x4561e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4561e4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x4561e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4561e8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x4561e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4561ec: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x4561ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4561f0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x4561f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4561f4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x4561f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4561f8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x4561f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x4561fc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x4561fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x456200: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x456200u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x456204: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x456204u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x456208: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x456208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x45620c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45620cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x456210: 0x4e1ffe9  bgez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x456210u;
    {
        const bool branch_taken_0x456210 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x456214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456210u;
        // 0x456214: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456210) {
            ctx->pc = 0x4561B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4561b8;
        }
    }
    ctx->pc = 0x456218u;
    // 0x456218: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x456218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x45621c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x456220u;
    {
        const bool branch_taken_0x456220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456220) {
            ctx->pc = 0x456250u;
            goto label_456250;
        }
    }
    ctx->pc = 0x456228u;
    // 0x456228: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x456228u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45622c: 0xf  sync
    ctx->pc = 0x45622cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456230: 0x40f  sync.p
    ctx->pc = 0x456230u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456234:
    // 0x456234: 0x0  nop
    ctx->pc = 0x456234u;
    // NOP
    // 0x456238: 0x0  nop
    ctx->pc = 0x456238u;
    // NOP
    // 0x45623c: 0x0  nop
    ctx->pc = 0x45623cu;
    // NOP
    // 0x456240: 0x0  nop
    ctx->pc = 0x456240u;
    // NOP
    // 0x456244: 0x0  nop
    ctx->pc = 0x456244u;
    // NOP
    // 0x456248: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456248u;
    {
        const bool branch_taken_0x456248 = (false);
        if (branch_taken_0x456248) {
            ctx->pc = 0x456234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456234;
        }
    }
    ctx->pc = 0x456250u;
label_456250:
    // 0x456250: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x456250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x456254: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456258: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x456258u;
    {
        const bool branch_taken_0x456258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456258) {
            ctx->pc = 0x4562ACu;
            goto label_4562ac;
        }
    }
    ctx->pc = 0x456260u;
    // 0x456260: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x456260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x456264: 0xf  sync
    ctx->pc = 0x456264u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456268: 0x40f  sync.p
    ctx->pc = 0x456268u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45626c:
    // 0x45626c: 0x0  nop
    ctx->pc = 0x45626cu;
    // NOP
    // 0x456270: 0x0  nop
    ctx->pc = 0x456270u;
    // NOP
    // 0x456274: 0x0  nop
    ctx->pc = 0x456274u;
    // NOP
    // 0x456278: 0x0  nop
    ctx->pc = 0x456278u;
    // NOP
    // 0x45627c: 0x0  nop
    ctx->pc = 0x45627cu;
    // NOP
    // 0x456280: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456280u;
    {
        const bool branch_taken_0x456280 = (false);
        if (branch_taken_0x456280) {
            ctx->pc = 0x45626Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45626c;
        }
    }
    ctx->pc = 0x456288u;
    // 0x456288: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45628c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_456290:
    // 0x456290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456290u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456294: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456298: 0x0  nop
    ctx->pc = 0x456298u;
    // NOP
    // 0x45629c: 0x0  nop
    ctx->pc = 0x45629cu;
    // NOP
    // 0x4562a0: 0x0  nop
    ctx->pc = 0x4562a0u;
    // NOP
    // 0x4562a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4562A4u;
    {
        const bool branch_taken_0x4562a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4562a4) {
            ctx->pc = 0x456290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456290;
        }
    }
    ctx->pc = 0x4562ACu;
label_4562ac:
    // 0x4562ac: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x4562acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x4562b0: 0xae9e0000  sw          $fp, 0x0($s4)
    ctx->pc = 0x4562b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 30));
    // 0x4562b4: 0xaf120000  sw          $s2, 0x0($t8)
    ctx->pc = 0x4562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 18));
    // 0x4562b8: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x4562b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x4562bc: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x4562bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x4562c0: 0xf  sync
    ctx->pc = 0x4562c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4562c4: 0x40f  sync.p
    ctx->pc = 0x4562c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4562c8: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x4562c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4562cc: 0x2a2200cd  slti        $v0, $s1, 0xCD
    ctx->pc = 0x4562ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x4562d0: 0x1040ff69  beqz        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x4562D0u;
    {
        const bool branch_taken_0x4562d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4562D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4562D0u;
        // 0x4562d4: 0x1e0902d  daddu       $s2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4562d0) {
            ctx->pc = 0x456078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456078;
        }
    }
    ctx->pc = 0x4562D8u;
label_4562d8:
    // 0x4562d8: 0x522000dd  beql        $s1, $zero, . + 4 + (0xDD << 2)
    ctx->pc = 0x4562D8u;
    {
        const bool branch_taken_0x4562d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4562d8) {
            ctx->pc = 0x4562DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4562D8u;
            // 0x4562dc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x456650u;
            goto label_456650;
        }
    }
    ctx->pc = 0x4562E0u;
    // 0x4562e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4562e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4562e4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4562e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4562e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4562e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4562ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4562ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4562f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4562F0u;
    {
        const bool branch_taken_0x4562f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4562F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4562F0u;
        // 0x4562f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4562f0) {
            ctx->pc = 0x456328u;
            goto label_456328;
        }
    }
    ctx->pc = 0x4562F8u;
    // 0x4562f8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4562f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4562fc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4562fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x456300: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456300u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456304: 0xf  sync
    ctx->pc = 0x456304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456308: 0x40f  sync.p
    ctx->pc = 0x456308u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45630c:
    // 0x45630c: 0x0  nop
    ctx->pc = 0x45630cu;
    // NOP
    // 0x456310: 0x0  nop
    ctx->pc = 0x456310u;
    // NOP
    // 0x456314: 0x0  nop
    ctx->pc = 0x456314u;
    // NOP
    // 0x456318: 0x0  nop
    ctx->pc = 0x456318u;
    // NOP
    // 0x45631c: 0x0  nop
    ctx->pc = 0x45631cu;
    // NOP
    // 0x456320: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456320u;
    {
        const bool branch_taken_0x456320 = (false);
        if (branch_taken_0x456320) {
            ctx->pc = 0x45630Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45630c;
        }
    }
    ctx->pc = 0x456328u;
label_456328:
    // 0x456328: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45632c: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x45632cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x456330: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x456334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456334u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456338: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45633c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45633Cu;
    {
        const bool branch_taken_0x45633c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45633Cu;
        // 0x456340: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45633c) {
            ctx->pc = 0x45639Cu;
            goto label_45639c;
        }
    }
    ctx->pc = 0x456344u;
    // 0x456344: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x456344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x456348: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x456348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45634c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45634cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456350: 0xf  sync
    ctx->pc = 0x456350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456354: 0x40f  sync.p
    ctx->pc = 0x456354u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456358:
    // 0x456358: 0x0  nop
    ctx->pc = 0x456358u;
    // NOP
    // 0x45635c: 0x0  nop
    ctx->pc = 0x45635cu;
    // NOP
    // 0x456360: 0x0  nop
    ctx->pc = 0x456360u;
    // NOP
    // 0x456364: 0x0  nop
    ctx->pc = 0x456364u;
    // NOP
    // 0x456368: 0x0  nop
    ctx->pc = 0x456368u;
    // NOP
    // 0x45636c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45636Cu;
    {
        const bool branch_taken_0x45636c = (false);
        if (branch_taken_0x45636c) {
            ctx->pc = 0x456358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456358;
        }
    }
    ctx->pc = 0x456374u;
    // 0x456374: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456378: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45637c: 0x0  nop
    ctx->pc = 0x45637cu;
    // NOP
label_456380:
    // 0x456380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456380u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456384: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456388: 0x0  nop
    ctx->pc = 0x456388u;
    // NOP
    // 0x45638c: 0x0  nop
    ctx->pc = 0x45638cu;
    // NOP
    // 0x456390: 0x0  nop
    ctx->pc = 0x456390u;
    // NOP
    // 0x456394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456394u;
    {
        const bool branch_taken_0x456394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456394) {
            ctx->pc = 0x456380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456380;
        }
    }
    ctx->pc = 0x45639Cu;
label_45639c:
    // 0x45639c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4563a0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x4563a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4563a4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x4563a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x4563a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4563a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4563ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4563acu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x4563b0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x4563b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x4563b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4563b4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x4563b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4563b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4563bc: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x4563bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x4563c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4563c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4563c4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4563c4u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x4563c8: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x4563c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x4563cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4563ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4563d0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x4563d0u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x4563d4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x4563d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x4563d8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4563d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4563dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4563dcu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x4563e0: 0xf  sync
    ctx->pc = 0x4563e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4563e4: 0x40f  sync.p
    ctx->pc = 0x4563e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4563e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4563e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4563ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4563ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4563f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4563F0u;
    {
        const bool branch_taken_0x4563f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4563F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4563F0u;
        // 0x4563f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4563f0) {
            ctx->pc = 0x45644Cu;
            goto label_45644c;
        }
    }
    ctx->pc = 0x4563F8u;
    // 0x4563f8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4563f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4563fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4563fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x456400: 0xf  sync
    ctx->pc = 0x456400u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456404: 0x40f  sync.p
    ctx->pc = 0x456404u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456408:
    // 0x456408: 0x0  nop
    ctx->pc = 0x456408u;
    // NOP
    // 0x45640c: 0x0  nop
    ctx->pc = 0x45640cu;
    // NOP
    // 0x456410: 0x0  nop
    ctx->pc = 0x456410u;
    // NOP
    // 0x456414: 0x0  nop
    ctx->pc = 0x456414u;
    // NOP
    // 0x456418: 0x0  nop
    ctx->pc = 0x456418u;
    // NOP
    // 0x45641c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45641Cu;
    {
        const bool branch_taken_0x45641c = (false);
        if (branch_taken_0x45641c) {
            ctx->pc = 0x456408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456408;
        }
    }
    ctx->pc = 0x456424u;
    // 0x456424: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456428: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45642c: 0x0  nop
    ctx->pc = 0x45642cu;
    // NOP
label_456430:
    // 0x456430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456430u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456434: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456438: 0x0  nop
    ctx->pc = 0x456438u;
    // NOP
    // 0x45643c: 0x0  nop
    ctx->pc = 0x45643cu;
    // NOP
    // 0x456440: 0x0  nop
    ctx->pc = 0x456440u;
    // NOP
    // 0x456444: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456444u;
    {
        const bool branch_taken_0x456444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456444) {
            ctx->pc = 0x456430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456430;
        }
    }
    ctx->pc = 0x45644Cu;
label_45644c:
    // 0x45644c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x456450: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x456450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x456454: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x456454u;
    {
        const bool branch_taken_0x456454 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x456458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456454u;
        // 0x456458: 0x34630cc0  ori         $v1, $v1, 0xCC0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x456454) {
            ctx->pc = 0x4564C8u;
            goto label_4564c8;
        }
    }
    ctx->pc = 0x45645Cu;
    // 0x45645c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45645cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456460: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x456460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x456464: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x456464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_456468:
    // 0x456468: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x456468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45646c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x45646cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x456470: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x456470u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456474: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x456474u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456478: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x456478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45647c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x45647cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456480: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x456480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456484: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x456484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456488: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x456488u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45648c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x45648cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456490: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x456490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456494: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x456494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456498: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x456498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45649c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x45649cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4564a0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x4564a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4564a4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x4564a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4564a8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x4564a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x4564ac: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x4564acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x4564b0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x4564b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x4564b4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x4564b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x4564b8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x4564b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x4564bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4564bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4564c0: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4564C0u;
    {
        const bool branch_taken_0x4564c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4564C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4564C0u;
        // 0x4564c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4564c0) {
            ctx->pc = 0x456468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456468;
        }
    }
    ctx->pc = 0x4564C8u;
label_4564c8:
    // 0x4564c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4564c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4564cc: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4564ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4564d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4564d0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4564d4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4564d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4564d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4564D8u;
    {
        const bool branch_taken_0x4564d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4564DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4564D8u;
        // 0x4564dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4564d8) {
            ctx->pc = 0x456510u;
            goto label_456510;
        }
    }
    ctx->pc = 0x4564E0u;
    // 0x4564e0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4564e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4564e4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4564e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4564e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4564e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4564ec: 0xf  sync
    ctx->pc = 0x4564ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4564f0: 0x40f  sync.p
    ctx->pc = 0x4564f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4564f4:
    // 0x4564f4: 0x0  nop
    ctx->pc = 0x4564f4u;
    // NOP
    // 0x4564f8: 0x0  nop
    ctx->pc = 0x4564f8u;
    // NOP
    // 0x4564fc: 0x0  nop
    ctx->pc = 0x4564fcu;
    // NOP
    // 0x456500: 0x0  nop
    ctx->pc = 0x456500u;
    // NOP
    // 0x456504: 0x0  nop
    ctx->pc = 0x456504u;
    // NOP
    // 0x456508: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456508u;
    {
        const bool branch_taken_0x456508 = (false);
        if (branch_taken_0x456508) {
            ctx->pc = 0x4564F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4564f4;
        }
    }
    ctx->pc = 0x456510u;
label_456510:
    // 0x456510: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456514: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x456514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x456518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x456518u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45651c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x456520: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x456520u;
    {
        const bool branch_taken_0x456520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456520u;
        // 0x456524: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456520) {
            ctx->pc = 0x45657Cu;
            goto label_45657c;
        }
    }
    ctx->pc = 0x456528u;
    // 0x456528: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x456528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45652c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x456530: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456530u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456534: 0xf  sync
    ctx->pc = 0x456534u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456538: 0x40f  sync.p
    ctx->pc = 0x456538u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45653c:
    // 0x45653c: 0x0  nop
    ctx->pc = 0x45653cu;
    // NOP
    // 0x456540: 0x0  nop
    ctx->pc = 0x456540u;
    // NOP
    // 0x456544: 0x0  nop
    ctx->pc = 0x456544u;
    // NOP
    // 0x456548: 0x0  nop
    ctx->pc = 0x456548u;
    // NOP
    // 0x45654c: 0x0  nop
    ctx->pc = 0x45654cu;
    // NOP
    // 0x456550: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456550u;
    {
        const bool branch_taken_0x456550 = (false);
        if (branch_taken_0x456550) {
            ctx->pc = 0x45653Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45653c;
        }
    }
    ctx->pc = 0x456558u;
    // 0x456558: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45655c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_456560:
    // 0x456560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456560u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456564: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456568: 0x0  nop
    ctx->pc = 0x456568u;
    // NOP
    // 0x45656c: 0x0  nop
    ctx->pc = 0x45656cu;
    // NOP
    // 0x456570: 0x0  nop
    ctx->pc = 0x456570u;
    // NOP
    // 0x456574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456574u;
    {
        const bool branch_taken_0x456574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456574) {
            ctx->pc = 0x456560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456560;
        }
    }
    ctx->pc = 0x45657Cu;
label_45657c:
    // 0x45657c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456580: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x456580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x456584: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x456584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x456588: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45658c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45658cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x456590: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x456590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x456594: 0x24040cc0  addiu       $a0, $zero, 0xCC0
    ctx->pc = 0x456594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x456598: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45659c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45659cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x4565a0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x4565a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x4565a4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x4565a4u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x4565a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4565a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4565ac: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x4565acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x4565b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4565b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4565b4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4565b4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x4565b8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4565b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4565bc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4565bcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x4565c0: 0xf  sync
    ctx->pc = 0x4565c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4565c4: 0x40f  sync.p
    ctx->pc = 0x4565c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4565c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4565C8u;
    {
        const bool branch_taken_0x4565c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4565CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4565C8u;
        // 0x4565cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4565c8) {
            ctx->pc = 0x456650u;
            goto label_456650;
        }
    }
    ctx->pc = 0x4565D0u;
label_4565d0:
    // 0x4565d0: 0x5a20001f  blezl       $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x4565D0u;
    {
        const bool branch_taken_0x4565d0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x4565d0) {
            ctx->pc = 0x4565D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4565D0u;
            // 0x4565d4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x456650u;
            goto label_456650;
        }
    }
    ctx->pc = 0x4565D8u;
    // 0x4565d8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4565d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4565dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4565dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4565e0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x4565e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4565e4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x4565e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4565e8:
    // 0x4565e8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x4565e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4565ec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x4565ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4565f0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x4565f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4565f4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x4565f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4565f8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x4565f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4565fc: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x4565fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456600: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x456600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456604: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x456604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456608: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x456608u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45660c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x45660cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456610: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x456610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456614: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x456614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456618: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x456618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45661c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x45661cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456620: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x456620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456624: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x456624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456628: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x456628u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x45662c: 0xfa450010  sqc2        $vf5, 0x10($s2)
    ctx->pc = 0x45662cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x456630: 0xfa460020  sqc2        $vf6, 0x20($s2)
    ctx->pc = 0x456630u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x456634: 0xfa470030  sqc2        $vf7, 0x30($s2)
    ctx->pc = 0x456634u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x456638: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x456638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x45663c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45663cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x456640: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x456640u;
    {
        const bool branch_taken_0x456640 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x456644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456640u;
        // 0x456644: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456640) {
            ctx->pc = 0x4565E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4565e8;
        }
    }
    ctx->pc = 0x456648u;
    // 0x456648: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x456648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45664c: 0x0  nop
    ctx->pc = 0x45664cu;
    // NOP
label_456650:
    // 0x456650: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x456650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x456654: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x456654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x456658: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x456658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45665c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x45665cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x456660: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x456660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x456664: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x456664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x456668: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x456668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45666c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x45666cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x456670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456674: 0x3e00008  jr          $ra
    ctx->pc = 0x456674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456674u;
        // 0x456678: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45667Cu;
    // 0x45667c: 0x0  nop
    ctx->pc = 0x45667cu;
    // NOP
    ctx->pc = 0x456680u;
}
