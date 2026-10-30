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

// Function: sub_001A5E38
// Address: 0x1a5e38 - 0x1a6058
void sub_001A5E38_0x1a5e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5E38_0x1a5e38");
#endif

    switch (ctx->pc) {
        case 0x1a604cu: goto label_1a604c;
        default: break;
    }

    ctx->pc = 0x1a5e38u;

    // 0x1a5e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5e3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a5e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5e44: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x1a5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1a5e48: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1A5E48u;
    {
        const bool branch_taken_0x1a5e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E48u;
        // 0x1a5e4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e48) {
            ctx->pc = 0x1A6050u;
            goto label_1a6050;
        }
    }
    ctx->pc = 0x1A5E50u;
    // 0x1a5e50: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x1a5e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5e54: 0xc5040028  lwc1        $f4, 0x28($t0)
    ctx->pc = 0x1a5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a5e58: 0xc5020014  lwc1        $f2, 0x14($t0)
    ctx->pc = 0x1a5e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5e5c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a5e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1a5e60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a5e64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a5e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a5e68: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a5e68u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1a5e6c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1a5e6cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1a5e70: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1a5e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5e74: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x1a5e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5e78: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x1a5e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5e7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a5e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a5e80: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a5e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a5e84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5E84u;
    {
        const bool branch_taken_0x1a5e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E84u;
        // 0x1a5e88: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e84) {
            ctx->pc = 0x1A5E90u;
            goto label_1a5e90;
        }
    }
    ctx->pc = 0x1A5E8Cu;
    // 0x1a5e8c: 0xe504002c  swc1        $f4, 0x2C($t0)
    ctx->pc = 0x1a5e8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
label_1a5e90:
    // 0x1a5e90: 0xc504002c  lwc1        $f4, 0x2C($t0)
    ctx->pc = 0x1a5e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a5e94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a5e98: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x1a5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5e9c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a5ea0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a5ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a5ea4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a5ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a5ea8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1a5ea8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1a5eac: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1a5eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5eb0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1a5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5eb4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1a5eb8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a5eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a5ebc: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1a5ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1a5ec0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a5ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a5ec4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a5ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a5ec8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5ecc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a5eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a5ed0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1a5ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1a5ed4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a5ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a5ed8: 0xe501002c  swc1        $f1, 0x2C($t0)
    ctx->pc = 0x1a5ed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x1a5edc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5ee0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a5ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a5ee4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a5ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a5ee8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a5ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a5eec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5EECu;
    {
        const bool branch_taken_0x1a5eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x46050282  mul.s       $f10, $f0, $f5 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5eec) {
            ctx->pc = 0x1A5F3Cu;
            goto label_1a5f3c;
        }
    }
    ctx->pc = 0x1A5EF4u;
    // 0x1a5ef4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1a5ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1a5ef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5EF8u;
    {
        const bool branch_taken_0x1a5ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EF8u;
        // 0x1a5efc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ef8) {
            ctx->pc = 0x1A5F14u;
            goto label_1a5f14;
        }
    }
    ctx->pc = 0x1A5F00u;
    // 0x1a5f00: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1a5f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1a5f04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a5f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a5f08: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a5f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a5f0c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5F0Cu;
    {
        const bool branch_taken_0x1a5f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F0Cu;
        // 0x1a5f10: 0xc5020004  lwc1        $f2, 0x4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f0c) {
            ctx->pc = 0x1A5F70u;
            goto label_1a5f70;
        }
    }
    ctx->pc = 0x1A5F14u;
label_1a5f14:
    // 0x1a5f14: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1a5f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1a5f18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a5f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a5f1c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a5f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a5f20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5F20u;
    {
        const bool branch_taken_0x1a5f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F20u;
        // 0x1a5f24: 0xc5020004  lwc1        $f2, 0x4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f20) {
            ctx->pc = 0x1A5F70u;
            goto label_1a5f70;
        }
    }
    ctx->pc = 0x1A5F28u;
    // 0x1a5f28: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1a5f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1a5f2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a5f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a5f30: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a5f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a5f34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A5F34u;
    {
        const bool branch_taken_0x1a5f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F34u;
        // 0x1a5f38: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f34) {
            ctx->pc = 0x1A5F74u;
            goto label_1a5f74;
        }
    }
    ctx->pc = 0x1A5F3Cu;
label_1a5f3c:
    // 0x1a5f3c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a5f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a5f40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5F40u;
    {
        const bool branch_taken_0x1a5f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F40u;
        // 0x1a5f44: 0xc5020004  lwc1        $f2, 0x4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f40) {
            ctx->pc = 0x1A5F68u;
            goto label_1a5f68;
        }
    }
    ctx->pc = 0x1A5F48u;
    // 0x1a5f48: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1a5f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1a5f4c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a5f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a5f50: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a5f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a5f54: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1a5f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1a5f58: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a5f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a5f5c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a5f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a5f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5F60u;
    {
        const bool branch_taken_0x1a5f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F60u;
        // 0x1a5f64: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f60) {
            ctx->pc = 0x1A5F74u;
            goto label_1a5f74;
        }
    }
    ctx->pc = 0x1A5F68u;
label_1a5f68:
    // 0x1a5f68: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a5f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1a5f6c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a5f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1a5f70:
    // 0x1a5f70: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a5f74:
    // 0x1a5f74: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x1a5f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5f78: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a5f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a5f7c: 0x91020021  lbu         $v0, 0x21($t0)
    ctx->pc = 0x1a5f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 33)));
    // 0x1a5f80: 0x46061202  mul.s       $f8, $f2, $f6
    ctx->pc = 0x1a5f80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1a5f84: 0x91040022  lbu         $a0, 0x22($t0)
    ctx->pc = 0x1a5f84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 34)));
    // 0x1a5f88: 0x0  nop
    ctx->pc = 0x1a5f88u;
    // NOP
    // 0x1a5f8c: 0x0  nop
    ctx->pc = 0x1a5f8cu;
    // NOP
    // 0x1a5f90: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x1a5f90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1a5f94: 0x91030020  lbu         $v1, 0x20($t0)
    ctx->pc = 0x1a5f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1a5f98: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x1a5f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a5f9c: 0x0  nop
    ctx->pc = 0x1a5f9cu;
    // NOP
    // 0x1a5fa0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1a5fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1a5fa4: 0x91050023  lbu         $a1, 0x23($t0)
    ctx->pc = 0x1a5fa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 35)));
    // 0x1a5fa8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1a5fa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a5fac: 0x0  nop
    ctx->pc = 0x1a5facu;
    // NOP
    // 0x1a5fb0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1a5fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1a5fb4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x1a5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5fb8: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1a5fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a5fbc: 0x0  nop
    ctx->pc = 0x1a5fbcu;
    // NOP
    // 0x1a5fc0: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1a5fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1a5fc4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1a5fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1a5fc8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1a5fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1a5fcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5fd0: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x1a5fd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a5fd4: 0x0  nop
    ctx->pc = 0x1a5fd4u;
    // NOP
    // 0x1a5fd8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1a5fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1a5fdc: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x1a5fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x1a5fe0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1a5fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5fe4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a5fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5fe8: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x1a5fe8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a5fec: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x1a5fecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a5ff0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x1a5ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x1a5ff4: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x1a5ff4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a5ff8: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x1a5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1a5ffc: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x1a5ffcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a6000: 0xa10600f4  sb          $a2, 0xF4($t0)
    ctx->pc = 0x1a6000u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 244), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a6004: 0xe50300f0  swc1        $f3, 0xF0($t0)
    ctx->pc = 0x1a6004u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
    // 0x1a6008: 0xe5020058  swc1        $f2, 0x58($t0)
    ctx->pc = 0x1a6008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 88), bits); }
    // 0x1a600c: 0xe508005c  swc1        $f8, 0x5C($t0)
    ctx->pc = 0x1a600cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 92), bits); }
    // 0x1a6010: 0xe5010064  swc1        $f1, 0x64($t0)
    ctx->pc = 0x1a6010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x1a6014: 0x7d020040  sq          $v0, 0x40($t0)
    ctx->pc = 0x1a6014u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), GPR_VEC(ctx, 2));
    // 0x1a6018: 0xa10600f5  sb          $a2, 0xF5($t0)
    ctx->pc = 0x1a6018u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 245), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a601c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a6020: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a6020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a6024: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1a6024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a6028: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1a6028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a602c: 0xb1020083  sdl         $v0, 0x83($t0)
    ctx->pc = 0x1a602cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6030: 0xb502007c  sdr         $v0, 0x7C($t0)
    ctx->pc = 0x1a6030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6034: 0xb103008b  sdl         $v1, 0x8B($t0)
    ctx->pc = 0x1a6034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6038: 0xb5030084  sdr         $v1, 0x84($t0)
    ctx->pc = 0x1a6038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a603c: 0xa107006c  sb          $a3, 0x6C($t0)
    ctx->pc = 0x1a603cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 108), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a6040: 0xe5000068  swc1        $f0, 0x68($t0)
    ctx->pc = 0x1a6040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 104), bits); }
    // 0x1a6044: 0xc05ee2a  jal         func_17B8A8
    ctx->pc = 0x1A6044u;
    SET_GPR_U32(ctx, 31, 0x1A604Cu);
    ctx->pc = 0x1A6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6044u;
    // 0x1a6048: 0xad00009c  sw          $zero, 0x9C($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8A8u, 0x1A6044u, 0x1A604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A604Cu;
label_1a604c:
    // 0x1a604c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6050:
    // 0x1a6050: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6050u;
        // 0x1a6054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6058u;
}
