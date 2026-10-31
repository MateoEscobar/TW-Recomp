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

// Function: sub_002A3F50
// Address: 0x2a3f50 - 0x2a4118
void sub_002A3F50_0x2a3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3F50_0x2a3f50");
#endif

    switch (ctx->pc) {
        case 0x2a3f50u: goto label_2a3f50;
        case 0x2a3f54u: goto label_2a3f54;
        case 0x2a3f58u: goto label_2a3f58;
        case 0x2a3f5cu: goto label_2a3f5c;
        case 0x2a3f60u: goto label_2a3f60;
        case 0x2a3f64u: goto label_2a3f64;
        case 0x2a3f68u: goto label_2a3f68;
        case 0x2a3f6cu: goto label_2a3f6c;
        case 0x2a3f70u: goto label_2a3f70;
        case 0x2a3f74u: goto label_2a3f74;
        case 0x2a3f78u: goto label_2a3f78;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3f80u: goto label_2a3f80;
        case 0x2a3f84u: goto label_2a3f84;
        case 0x2a3f88u: goto label_2a3f88;
        case 0x2a3f8cu: goto label_2a3f8c;
        case 0x2a3f90u: goto label_2a3f90;
        case 0x2a3f94u: goto label_2a3f94;
        case 0x2a3f98u: goto label_2a3f98;
        case 0x2a3f9cu: goto label_2a3f9c;
        case 0x2a3fa0u: goto label_2a3fa0;
        case 0x2a3fa4u: goto label_2a3fa4;
        case 0x2a3fa8u: goto label_2a3fa8;
        case 0x2a3facu: goto label_2a3fac;
        case 0x2a3fb0u: goto label_2a3fb0;
        case 0x2a3fb4u: goto label_2a3fb4;
        case 0x2a3fb8u: goto label_2a3fb8;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a3fc0u: goto label_2a3fc0;
        case 0x2a3fc4u: goto label_2a3fc4;
        case 0x2a3fc8u: goto label_2a3fc8;
        case 0x2a3fccu: goto label_2a3fcc;
        case 0x2a3fd0u: goto label_2a3fd0;
        case 0x2a3fd4u: goto label_2a3fd4;
        case 0x2a3fd8u: goto label_2a3fd8;
        case 0x2a3fdcu: goto label_2a3fdc;
        case 0x2a3fe0u: goto label_2a3fe0;
        case 0x2a3fe4u: goto label_2a3fe4;
        case 0x2a3fe8u: goto label_2a3fe8;
        case 0x2a3fecu: goto label_2a3fec;
        case 0x2a3ff0u: goto label_2a3ff0;
        case 0x2a3ff4u: goto label_2a3ff4;
        case 0x2a3ff8u: goto label_2a3ff8;
        case 0x2a3ffcu: goto label_2a3ffc;
        case 0x2a4000u: goto label_2a4000;
        case 0x2a4004u: goto label_2a4004;
        case 0x2a4008u: goto label_2a4008;
        case 0x2a400cu: goto label_2a400c;
        case 0x2a4010u: goto label_2a4010;
        case 0x2a4014u: goto label_2a4014;
        case 0x2a4018u: goto label_2a4018;
        case 0x2a401cu: goto label_2a401c;
        case 0x2a4020u: goto label_2a4020;
        case 0x2a4024u: goto label_2a4024;
        case 0x2a4028u: goto label_2a4028;
        case 0x2a402cu: goto label_2a402c;
        case 0x2a4030u: goto label_2a4030;
        case 0x2a4034u: goto label_2a4034;
        case 0x2a4038u: goto label_2a4038;
        case 0x2a403cu: goto label_2a403c;
        case 0x2a4040u: goto label_2a4040;
        case 0x2a4044u: goto label_2a4044;
        case 0x2a4048u: goto label_2a4048;
        case 0x2a404cu: goto label_2a404c;
        case 0x2a4050u: goto label_2a4050;
        case 0x2a4054u: goto label_2a4054;
        case 0x2a4058u: goto label_2a4058;
        case 0x2a405cu: goto label_2a405c;
        case 0x2a4060u: goto label_2a4060;
        case 0x2a4064u: goto label_2a4064;
        case 0x2a4068u: goto label_2a4068;
        case 0x2a406cu: goto label_2a406c;
        case 0x2a4070u: goto label_2a4070;
        case 0x2a4074u: goto label_2a4074;
        case 0x2a4078u: goto label_2a4078;
        case 0x2a407cu: goto label_2a407c;
        case 0x2a4080u: goto label_2a4080;
        case 0x2a4084u: goto label_2a4084;
        case 0x2a4088u: goto label_2a4088;
        case 0x2a408cu: goto label_2a408c;
        case 0x2a4090u: goto label_2a4090;
        case 0x2a4094u: goto label_2a4094;
        case 0x2a4098u: goto label_2a4098;
        case 0x2a409cu: goto label_2a409c;
        case 0x2a40a0u: goto label_2a40a0;
        case 0x2a40a4u: goto label_2a40a4;
        case 0x2a40a8u: goto label_2a40a8;
        case 0x2a40acu: goto label_2a40ac;
        case 0x2a40b0u: goto label_2a40b0;
        case 0x2a40b4u: goto label_2a40b4;
        case 0x2a40b8u: goto label_2a40b8;
        case 0x2a40bcu: goto label_2a40bc;
        case 0x2a40c0u: goto label_2a40c0;
        case 0x2a40c4u: goto label_2a40c4;
        case 0x2a40c8u: goto label_2a40c8;
        case 0x2a40ccu: goto label_2a40cc;
        case 0x2a40d0u: goto label_2a40d0;
        case 0x2a40d4u: goto label_2a40d4;
        case 0x2a40d8u: goto label_2a40d8;
        case 0x2a40dcu: goto label_2a40dc;
        case 0x2a40e0u: goto label_2a40e0;
        case 0x2a40e4u: goto label_2a40e4;
        case 0x2a40e8u: goto label_2a40e8;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a40f0u: goto label_2a40f0;
        case 0x2a40f4u: goto label_2a40f4;
        case 0x2a40f8u: goto label_2a40f8;
        case 0x2a40fcu: goto label_2a40fc;
        case 0x2a4100u: goto label_2a4100;
        case 0x2a4104u: goto label_2a4104;
        case 0x2a4108u: goto label_2a4108;
        case 0x2a410cu: goto label_2a410c;
        case 0x2a4110u: goto label_2a4110;
        case 0x2a4114u: goto label_2a4114;
        default: break;
    }

    ctx->pc = 0x2a3f50u;

label_2a3f50:
    // 0x2a3f50: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a3f50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a3f54:
    // 0x2a3f54: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2a3f54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_2a3f58:
    // 0x2a3f58: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2a3f58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_2a3f5c:
    // 0x2a3f5c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
label_2a3f60:
    // 0x2a3f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a3f64:
    // 0x2a3f64: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a3f64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a3f68:
    // 0x2a3f68: 0x0  nop
    ctx->pc = 0x2a3f68u;
    // NOP
label_2a3f6c:
    // 0x2a3f6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a3f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a3f70:
    // 0x2a3f70: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a3f70u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3f74:
    // 0x2a3f74: 0x0  nop
    ctx->pc = 0x2a3f74u;
    // NOP
label_2a3f78:
    // 0x2a3f78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a3f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a3f7c:
    // 0x2a3f7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a3f80:
    // 0x2a3f80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2a3f84:
    // 0x2a3f84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2a3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2a3f88:
    // 0x2a3f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3f8c:
    // 0x2a3f8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a3f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a3f90:
    // 0x2a3f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a3f94:
    // 0x2a3f94: 0x2442f310  addiu       $v0, $v0, -0xCF0
    ctx->pc = 0x2a3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963984));
label_2a3f98:
    // 0x2a3f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3f9c:
    // 0x2a3f9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a3f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a3fa0:
    // 0x2a3fa0: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x2a3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_2a3fa4:
    // 0x2a3fa4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_2a3fa8:
    // 0x2a3fa8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2a3fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
label_2a3fac:
    // 0x2a3fac: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2a3facu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_2a3fb0:
    // 0x2a3fb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a3fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2a3fb4:
    // 0x2a3fb4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a3fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3fb8:
    // 0x2a3fb8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a3fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2a3fbc:
    // 0x2a3fbc: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x2a3fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2a3fc0:
    // 0x2a3fc0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2a3fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_2a3fc4:
    // 0x2a3fc4: 0xa2080028  sb          $t0, 0x28($s0)
    ctx->pc = 0x2a3fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 8));
label_2a3fc8:
    // 0x2a3fc8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2a3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2a3fcc:
    // 0x2a3fcc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2a3fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2a3fd0:
    // 0x2a3fd0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2a3fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a3fd4:
    // 0x2a3fd4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2a3fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a3fd8:
    // 0x2a3fd8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2a3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2a3fdc:
    // 0x2a3fdc: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x2a3fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
label_2a3fe0:
    // 0x2a3fe0: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x2a3fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
label_2a3fe4:
    // 0x2a3fe4: 0x10c40003  beq         $a2, $a0, . + 4 + (0x3 << 2)
label_2a3fe8:
    if (ctx->pc == 0x2A3FE8u) {
        ctx->pc = 0x2A3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FE4u;
        // 0x2a3fe8: 0xa200002c  sb          $zero, 0x2C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3FECu;
        goto label_2a3fec;
    }
    ctx->pc = 0x2A3FE4u;
    {
        const bool branch_taken_0x2a3fe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FE4u;
        // 0x2a3fe8: 0xa200002c  sb          $zero, 0x2C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fe4) {
            ctx->pc = 0x2A3FF4u;
            goto label_2a3ff4;
        }
    }
    ctx->pc = 0x2A3FECu;
label_2a3fec:
    // 0x2a3fec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a3ff0:
    if (ctx->pc == 0x2A3FF0u) {
        ctx->pc = 0x2A3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FECu;
        // 0x2a3ff0: 0xa2060029  sb          $a2, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3FF4u;
        goto label_2a3ff4;
    }
    ctx->pc = 0x2A3FECu;
    {
        const bool branch_taken_0x2a3fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FECu;
        // 0x2a3ff0: 0xa2060029  sb          $a2, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fec) {
            ctx->pc = 0x2A3FF8u;
            goto label_2a3ff8;
        }
    }
    ctx->pc = 0x2A3FF4u;
label_2a3ff4:
    // 0x2a3ff4: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x2a3ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
label_2a3ff8:
    // 0x2a3ff8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2a3ffc:
    if (ctx->pc == 0x2A3FFCu) {
        ctx->pc = 0x2A3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FF8u;
        // 0x2a3ffc: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4000u;
        goto label_2a4000;
    }
    ctx->pc = 0x2A3FF8u;
    {
        const bool branch_taken_0x2a3ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FF8u;
        // 0x2a3ffc: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ff8) {
            ctx->pc = 0x2A402Cu;
            goto label_2a402c;
        }
    }
    ctx->pc = 0x2A4000u;
label_2a4000:
    // 0x2a4000: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2a4000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2a4004:
    // 0x2a4004: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a4008:
    if (ctx->pc == 0x2A4008u) {
        ctx->pc = 0x2A4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4004u;
        // 0x2a4008: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A400Cu;
        goto label_2a400c;
    }
    ctx->pc = 0x2A4004u;
    {
        const bool branch_taken_0x2a4004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4004u;
        // 0x2a4008: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4004) {
            ctx->pc = 0x2A402Cu;
            goto label_2a402c;
        }
    }
    ctx->pc = 0x2A400Cu;
label_2a400c:
    // 0x2a400c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2a4010:
    // 0x2a4010: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a4014:
    // 0x2a4014: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2a4014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2a4018:
    // 0x2a4018: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2a401c:
    // 0x2a401c: 0x40f809  jalr        $v0
label_2a4020:
    if (ctx->pc == 0x2A4020u) {
        ctx->pc = 0x2A4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A401Cu;
        // 0x2a4020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4024u;
        goto label_2a4024;
    }
    ctx->pc = 0x2A401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4024u);
        ctx->pc = 0x2A4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A401Cu;
        // 0x2a4020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A401Cu, 0x2A4024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4024u;
label_2a4024:
    // 0x2a4024: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2a4024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2a4028:
    // 0x2a4028: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2a4028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2a402c:
    // 0x2a402c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4030:
    // 0x2a4030: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x2a4030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2a4034:
    // 0x2a4034: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2a4034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a4038:
    // 0x2a4038: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a4038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a403c:
    // 0x2a403c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a4040:
    // 0x2a4040: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2a4040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2a4044:
    // 0x2a4044: 0x0  nop
    ctx->pc = 0x2a4044u;
    // NOP
label_2a4048:
    // 0x2a4048: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2a404c:
    if (ctx->pc == 0x2A404Cu) {
        ctx->pc = 0x2A404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4048u;
        // 0x2a404c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4050u;
        goto label_2a4050;
    }
    ctx->pc = 0x2A4048u;
    {
        const bool branch_taken_0x2a4048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4048u;
        // 0x2a404c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4048) {
            ctx->pc = 0x2A4038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4038;
        }
    }
    ctx->pc = 0x2A4050u;
label_2a4050:
    // 0x2a4050: 0xc0e4060  jal         func_390180
label_2a4054:
    if (ctx->pc == 0x2A4054u) {
        ctx->pc = 0x2A4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4050u;
        // 0x2a4054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4058u;
        goto label_2a4058;
    }
    ctx->pc = 0x2A4050u;
    SET_GPR_U32(ctx, 31, 0x2A4058u);
    ctx->pc = 0x2A4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4050u;
    // 0x2a4054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A4050u, 0x2A4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4058u;
label_2a4058:
    // 0x2a4058: 0xc105e98  jal         func_417A60
label_2a405c:
    if (ctx->pc == 0x2A405Cu) {
        ctx->pc = 0x2A405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4058u;
        // 0x2a405c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4060u;
        goto label_2a4060;
    }
    ctx->pc = 0x2A4058u;
    SET_GPR_U32(ctx, 31, 0x2A4060u);
    ctx->pc = 0x2A405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4058u;
    // 0x2a405c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2A4058u, 0x2A4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4060u;
label_2a4060:
    // 0x2a4060: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4064:
    // 0x2a4064: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a4068:
    if (ctx->pc == 0x2A4068u) {
        ctx->pc = 0x2A406Cu;
        goto label_2a406c;
    }
    ctx->pc = 0x2A4064u;
    {
        const bool branch_taken_0x2a4064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4064) {
            ctx->pc = 0x2A4088u;
            goto label_2a4088;
        }
    }
    ctx->pc = 0x2A406Cu;
label_2a406c:
    // 0x2a406c: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x2a406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_2a4070:
    // 0x2a4070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a4074:
    // 0x2a4074: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2a4078:
    // 0x2a4078: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a407c:
    // 0x2a407c: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x2a407cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_2a4080:
    // 0x2a4080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4084:
    // 0x2a4084: 0xa203002b  sb          $v1, 0x2B($s0)
    ctx->pc = 0x2a4084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
label_2a4088:
    // 0x2a4088: 0xc0e4060  jal         func_390180
label_2a408c:
    if (ctx->pc == 0x2A408Cu) {
        ctx->pc = 0x2A408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4088u;
        // 0x2a408c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4090u;
        goto label_2a4090;
    }
    ctx->pc = 0x2A4088u;
    SET_GPR_U32(ctx, 31, 0x2A4090u);
    ctx->pc = 0x2A408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4088u;
    // 0x2a408c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A4088u, 0x2A4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4090u;
label_2a4090:
    // 0x2a4090: 0xc105e98  jal         func_417A60
label_2a4094:
    if (ctx->pc == 0x2A4094u) {
        ctx->pc = 0x2A4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4090u;
        // 0x2a4094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4098u;
        goto label_2a4098;
    }
    ctx->pc = 0x2A4090u;
    SET_GPR_U32(ctx, 31, 0x2A4098u);
    ctx->pc = 0x2A4094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4090u;
    // 0x2a4094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2A4090u, 0x2A4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4098u;
label_2a4098:
    // 0x2a4098: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a409c:
    // 0x2a409c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a40a0:
    if (ctx->pc == 0x2A40A0u) {
        ctx->pc = 0x2A40A4u;
        goto label_2a40a4;
    }
    ctx->pc = 0x2A409Cu;
    {
        const bool branch_taken_0x2a409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a409c) {
            ctx->pc = 0x2A40C0u;
            goto label_2a40c0;
        }
    }
    ctx->pc = 0x2A40A4u;
label_2a40a4:
    // 0x2a40a4: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x2a40a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_2a40a8:
    // 0x2a40a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a40ac:
    // 0x2a40ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a40acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2a40b0:
    // 0x2a40b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a40b4:
    // 0x2a40b4: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x2a40b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_2a40b8:
    // 0x2a40b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a40bc:
    // 0x2a40bc: 0xa203002b  sb          $v1, 0x2B($s0)
    ctx->pc = 0x2a40bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
label_2a40c0:
    // 0x2a40c0: 0xc0e4060  jal         func_390180
label_2a40c4:
    if (ctx->pc == 0x2A40C4u) {
        ctx->pc = 0x2A40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40C0u;
        // 0x2a40c4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A40C8u;
        goto label_2a40c8;
    }
    ctx->pc = 0x2A40C0u;
    SET_GPR_U32(ctx, 31, 0x2A40C8u);
    ctx->pc = 0x2A40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40C0u;
    // 0x2a40c4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A40C0u, 0x2A40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40C8u;
label_2a40c8:
    // 0x2a40c8: 0xc105e98  jal         func_417A60
label_2a40cc:
    if (ctx->pc == 0x2A40CCu) {
        ctx->pc = 0x2A40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40C8u;
        // 0x2a40cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A40D0u;
        goto label_2a40d0;
    }
    ctx->pc = 0x2A40C8u;
    SET_GPR_U32(ctx, 31, 0x2A40D0u);
    ctx->pc = 0x2A40CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40C8u;
    // 0x2a40cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2A40C8u, 0x2A40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40D0u;
label_2a40d0:
    // 0x2a40d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a40d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a40d4:
    // 0x2a40d4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2a40d8:
    if (ctx->pc == 0x2A40D8u) {
        ctx->pc = 0x2A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40D4u;
        // 0x2a40d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A40DCu;
        goto label_2a40dc;
    }
    ctx->pc = 0x2A40D4u;
    {
        const bool branch_taken_0x2a40d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40D4u;
        // 0x2a40d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a40d4) {
            ctx->pc = 0x2A40FCu;
            goto label_2a40fc;
        }
    }
    ctx->pc = 0x2A40DCu;
label_2a40dc:
    // 0x2a40dc: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x2a40dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_2a40e0:
    // 0x2a40e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a40e4:
    // 0x2a40e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2a40e8:
    // 0x2a40e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a40ec:
    // 0x2a40ec: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x2a40ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_2a40f0:
    // 0x2a40f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a40f4:
    // 0x2a40f4: 0xa203002b  sb          $v1, 0x2B($s0)
    ctx->pc = 0x2a40f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
label_2a40f8:
    // 0x2a40f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a40f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a40fc:
    // 0x2a40fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a40fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4100:
    // 0x2a4100: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a4100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4104:
    // 0x2a4104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4108:
    // 0x2a4108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a410c:
    // 0x2a410c: 0x3e00008  jr          $ra
label_2a4110:
    if (ctx->pc == 0x2A4110u) {
        ctx->pc = 0x2A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A410Cu;
        // 0x2a4110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4114u;
        goto label_2a4114;
    }
    ctx->pc = 0x2A410Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A410Cu;
        // 0x2a4110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A410Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4114u;
label_2a4114:
    // 0x2a4114: 0x0  nop
    ctx->pc = 0x2a4114u;
    // NOP
    ctx->pc = 0x2a4118u;
}
