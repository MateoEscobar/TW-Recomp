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

// Function: sub_0019CF90
// Address: 0x19cf90 - 0x19d1b0
void sub_0019CF90_0x19cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CF90_0x19cf90");
#endif

    switch (ctx->pc) {
        case 0x19d118u: goto label_19d118;
        case 0x19d128u: goto label_19d128;
        case 0x19d14cu: goto label_19d14c;
        default: break;
    }

    ctx->pc = 0x19cf90u;

    // 0x19cf90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x19cf94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19cf98: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x19cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x19cf9c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x19cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x19cfa0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x19cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x19cfa4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x19cfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x19cfa8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x19cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x19cfac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x19cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x19cfb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19cfb4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x19cfb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x19cfb8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x19cfb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x19cfbc: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x19cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x19cfc0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x19cfc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cfc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cfcc: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x19cfd0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19cfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x19cfd4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19cfd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CFD8u;
    {
        const bool branch_taken_0x19cfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFD8u;
        // 0x19cfdc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfd8) {
            ctx->pc = 0x19CFE4u;
            goto label_19cfe4;
        }
    }
    ctx->pc = 0x19CFE0u;
    // 0x19cfe0: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x19cfe0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_19cfe4:
    // 0x19cfe4: 0xc6640060  lwc1        $f4, 0x60($s3)
    ctx->pc = 0x19cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19cfe8: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x19cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cfec: 0xc6620068  lwc1        $f2, 0x68($s3)
    ctx->pc = 0x19cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19cff0: 0x0  nop
    ctx->pc = 0x19cff0u;
    // NOP
    // 0x19cff4: 0x0  nop
    ctx->pc = 0x19cff4u;
    // NOP
    // 0x19cff8: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x19cff8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x19cffc: 0xc663006c  lwc1        $f3, 0x6C($s3)
    ctx->pc = 0x19cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d000: 0x0  nop
    ctx->pc = 0x19d000u;
    // NOP
    // 0x19d004: 0x0  nop
    ctx->pc = 0x19d004u;
    // NOP
    // 0x19d008: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19d008u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19d00c: 0x0  nop
    ctx->pc = 0x19d00cu;
    // NOP
    // 0x19d010: 0x0  nop
    ctx->pc = 0x19d010u;
    // NOP
    // 0x19d014: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x19d014u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    // 0x19d018: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x19d01c: 0x0  nop
    ctx->pc = 0x19d01cu;
    // NOP
    // 0x19d020: 0x0  nop
    ctx->pc = 0x19d020u;
    // NOP
    // 0x19d024: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x19d024u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
    // 0x19d028: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x19d028u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19d02c: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x19d02cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x19d030: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x19d030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19d034: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x19d034u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x19d038: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x19d038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19d03c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x19d03cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x19d040: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x19d040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19d044: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x19d044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19d048: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x19d048u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19d04c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D04Cu;
    {
        const bool branch_taken_0x19d04c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D04Cu;
        // 0x19d050: 0xe7a40030  swc1        $f4, 0x30($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d04c) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19D054u;
    // 0x19d054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d058: 0x0  nop
    ctx->pc = 0x19d058u;
    // NOP
    // 0x19d05c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D060u;
    {
        const bool branch_taken_0x19d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d060) {
            ctx->pc = 0x19D084u;
            goto label_19d084;
        }
    }
    ctx->pc = 0x19D068u;
label_19d068:
    // 0x19d068: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19d068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19d06c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d078: 0x0  nop
    ctx->pc = 0x19d078u;
    // NOP
    // 0x19d07c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d080: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d084:
    // 0x19d084: 0x0  nop
    ctx->pc = 0x19d084u;
    // NOP
    // 0x19d088: 0x0  nop
    ctx->pc = 0x19d088u;
    // NOP
    // 0x19d08c: 0x46012d43  div.s       $f21, $f5, $f1
    ctx->pc = 0x19d08cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x19d090: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d094: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x19d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d098: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x19d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x19d09c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19d09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19d0a0: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x19d0a0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x19d0a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D0A4u;
    {
        const bool branch_taken_0x19d0a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0A4u;
        // 0x19d0a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0a4) {
            ctx->pc = 0x19D0C0u;
            goto label_19d0c0;
        }
    }
    ctx->pc = 0x19D0ACu;
    // 0x19d0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d0b0: 0x0  nop
    ctx->pc = 0x19d0b0u;
    // NOP
    // 0x19d0b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d0b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D0B8u;
    {
        const bool branch_taken_0x19d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d0b8) {
            ctx->pc = 0x19D0D8u;
            goto label_19d0d8;
        }
    }
    ctx->pc = 0x19D0C0u;
label_19d0c0:
    // 0x19d0c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d0c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d0c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d0cc: 0x0  nop
    ctx->pc = 0x19d0ccu;
    // NOP
    // 0x19d0d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d0d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d0d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d0d8:
    // 0x19d0d8: 0x0  nop
    ctx->pc = 0x19d0d8u;
    // NOP
    // 0x19d0dc: 0x0  nop
    ctx->pc = 0x19d0dcu;
    // NOP
    // 0x19d0e0: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x19d0e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19d0e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d0e8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d0ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19d0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0f0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x19d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x19d0f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19d0f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x19d0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19d0fc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x19d0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x19d100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d104: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19D104u;
    {
        const bool branch_taken_0x19d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D104u;
        // 0x19d108: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d104) {
            ctx->pc = 0x19D184u;
            goto label_19d184;
        }
    }
    ctx->pc = 0x19D10Cu;
    // 0x19d10c: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x19d10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19d110: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19d110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d114: 0x0  nop
    ctx->pc = 0x19d114u;
    // NOP
label_19d118:
    // 0x19d118: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x19d118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19d11c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19D11Cu;
    {
        const bool branch_taken_0x19d11c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D11Cu;
        // 0x19d120: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d11c) {
            ctx->pc = 0x19D164u;
            goto label_19d164;
        }
    }
    ctx->pc = 0x19D124u;
    // 0x19d124: 0x0  nop
    ctx->pc = 0x19d124u;
    // NOP
label_19d128:
    // 0x19d128: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19d12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d130: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x19d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d138: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x19d138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19d13c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x19d13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19d140: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x19d140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x19d144: 0xc0673d4  jal         func_19CF50
    ctx->pc = 0x19D144u;
    SET_GPR_U32(ctx, 31, 0x19D14Cu);
    ctx->pc = 0x19D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D144u;
    // 0x19d148: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CF50u, 0x19D144u, 0x19D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D14Cu;
label_19d14c:
    // 0x19d14c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19d150: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x19d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d154: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x19d154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x19d158: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x19d158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19d15c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19D15Cu;
    {
        const bool branch_taken_0x19d15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D15Cu;
        // 0x19d160: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d15c) {
            ctx->pc = 0x19D128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d128;
        }
    }
    ctx->pc = 0x19D164u;
label_19d164:
    // 0x19d164: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d168: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x19d168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d16c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d170: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x19d170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x19d174: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x19d174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x19d178: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x19d178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x19d17c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x19D17Cu;
    {
        const bool branch_taken_0x19d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D17Cu;
        // 0x19d180: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d17c) {
            ctx->pc = 0x19D118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d118;
        }
    }
    ctx->pc = 0x19D184u;
label_19d184:
    // 0x19d184: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x19d184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19d188: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x19d188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19d18c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x19d18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d190: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x19d190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d194: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x19d194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d198: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x19d198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d19c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d1a0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x19d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19d1a4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x19d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1A8u;
        // 0x19d1ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D1B0u;
}
