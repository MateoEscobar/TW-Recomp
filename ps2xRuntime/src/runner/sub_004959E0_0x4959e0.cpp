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

// Function: sub_004959E0
// Address: 0x4959e0 - 0x495cd0
void sub_004959E0_0x4959e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004959E0_0x4959e0");
#endif

    switch (ctx->pc) {
        case 0x495b18u: goto label_495b18;
        case 0x495b60u: goto label_495b60;
        case 0x495b84u: goto label_495b84;
        case 0x495bc8u: goto label_495bc8;
        case 0x495becu: goto label_495bec;
        case 0x495c24u: goto label_495c24;
        case 0x495c34u: goto label_495c34;
        case 0x495c44u: goto label_495c44;
        case 0x495c54u: goto label_495c54;
        default: break;
    }

    ctx->pc = 0x4959e0u;

    // 0x4959e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4959e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4959e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4959e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4959e8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4959e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4959ec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4959ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4959f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4959f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4959f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4959f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4959f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4959f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4959fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4959fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x495a00: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x495a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x495a04: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x495a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x495a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x495a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x495a0c: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x495a0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x495a10: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x495a10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x495a14: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x495a14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x495a18: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x495a18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x495a1c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x495a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x495a20: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x495a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x495a24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x495a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x495a28: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x495a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x495a2c: 0x40836000  mtc0        $v1, Status
    ctx->pc = 0x495a2cu;
    ctx->cop0_status = GPR_U32(ctx, 3) & 0xFF57FFFF;
    // 0x495a30: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x495a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x495a34: 0x3409f000  ori         $t1, $zero, 0xF000
    ctx->pc = 0x495a34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x495a38: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x495a38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x495a3c: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x495a3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x495a40: 0x3c080500  lui         $t0, 0x500
    ctx->pc = 0x495a40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1280 << 16));
    // 0x495a44: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x495a44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x495a48: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x495a48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x495a4c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x495a4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x495a50: 0x35080102  ori         $t0, $t0, 0x102
    ctx->pc = 0x495a50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)258);
    // 0x495a54: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x495a54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495a58: 0x71093b89  pcpyld      $a3, $t0, $t1
    ctx->pc = 0x495a58u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x495a5c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x495a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x495a60: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x495a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x495a64: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x495a64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x495a68: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x495a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x495a6c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x495a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x495a70: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x495a70u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x710370u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x710370u, _value); } while (0);
    // 0x495a74: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x495a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x495a78: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x495a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x495a7c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x495a7cu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x710290u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x710290u, _value); } while (0);
    // 0x495a80: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x495a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x495a84: 0x3c087130  lui         $t0, 0x7130
    ctx->pc = 0x495a84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28976 << 16));
    // 0x495a88: 0x35084001  ori         $t0, $t0, 0x4001
    ctx->pc = 0x495a88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16385);
    // 0x495a8c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x495a8cu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7101B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7101B0u, _value); } while (0);
    // 0x495a90: 0x3c093f3f  lui         $t1, 0x3F3F
    ctx->pc = 0x495a90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16191 << 16));
    // 0x495a94: 0x35293f3f  ori         $t1, $t1, 0x3F3F
    ctx->pc = 0x495a94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16191);
    // 0x495a98: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x495a98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x495a9c: 0x35292000  ori         $t1, $t1, 0x2000
    ctx->pc = 0x495a9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8192);
    // 0x495aa0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x495aa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x495aa4: 0x71093b89  pcpyld      $a3, $t0, $t1
    ctx->pc = 0x495aa4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x495aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x495aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495aac: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x495aacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x495ab0: 0x3c087130  lui         $t0, 0x7130
    ctx->pc = 0x495ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28976 << 16));
    // 0x495ab4: 0x35084202  ori         $t0, $t0, 0x4202
    ctx->pc = 0x495ab4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16898);
    // 0x495ab8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x495ab8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x495abc: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x495abcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x495ac0: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x495ac0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x495ac4: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x495ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x495ac8: 0x24960080  addiu       $s6, $a0, 0x80
    ctx->pc = 0x495ac8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x495acc: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x495accu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x495ad0: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x495ad0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x495ad4: 0x71063b89  pcpyld      $a3, $t0, $a2
    ctx->pc = 0x495ad4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x495ad8: 0xc79882d8  lwc1        $f24, -0x7D28($gp)
    ctx->pc = 0x495ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x495adc: 0x7ca70070  sq          $a3, 0x70($a1)
    ctx->pc = 0x495adcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 7));
    // 0x495ae0: 0x2474001c  addiu       $s4, $v1, 0x1C
    ctx->pc = 0x495ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x495ae4: 0x7c670070  sq          $a3, 0x70($v1)
    ctx->pc = 0x495ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 7));
    // 0x495ae8: 0x2493001c  addiu       $s3, $a0, 0x1C
    ctx->pc = 0x495ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x495aec: 0x7c470070  sq          $a3, 0x70($v0)
    ctx->pc = 0x495aecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 7));
    // 0x495af0: 0x2452001c  addiu       $s2, $v0, 0x1C
    ctx->pc = 0x495af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x495af4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x495af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x495af8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x495af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x495afc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x495afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495b00: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x495b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x495b04: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x495b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x495b08: 0x3c0142be  lui         $at, 0x42BE
    ctx->pc = 0x495b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17086 << 16));
    // 0x495b0c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x495b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x495b10: 0x7c870070  sq          $a3, 0x70($a0)
    ctx->pc = 0x495b10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 7));
    // 0x495b14: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x495b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_495b18:
    // 0x495b18: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x495b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x495b1c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x495b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x495b20: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x495B20u;
    {
        const bool branch_taken_0x495b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x495B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495B20u;
        // 0x495b24: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495b20) {
            ctx->pc = 0x495B90u;
            goto label_495b90;
        }
    }
    ctx->pc = 0x495B28u;
    // 0x495b28: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x495b28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x495b2c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x495b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x495b30: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x495b30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x495b34: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x495b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x495b38: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x495b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x495b3c: 0x4618a002  mul.s       $f0, $f20, $f24
    ctx->pc = 0x495b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x495b40: 0x4617a503  div.s       $f20, $f20, $f23
    ctx->pc = 0x495b40u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[23]); }
    // 0x495b44: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x495b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x495b48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x495b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x495b4c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x495b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x495b50: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x495b50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x495b54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x495b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x495b58: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x495B58u;
    SET_GPR_U32(ctx, 31, 0x495B60u);
    ctx->pc = 0x495B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495B58u;
    // 0x495b5c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x495B58u, 0x495B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495B60u;
label_495b60:
    // 0x495b60: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x495b60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x495b64: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x495b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x495b68: 0x4614a342  mul.s       $f13, $f20, $f20
    ctx->pc = 0x495b68u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x495b6c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x495b6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x495b70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x495b70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x495b74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x495b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x495b78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x495b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x495b7c: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x495B7Cu;
    SET_GPR_U32(ctx, 31, 0x495B84u);
    ctx->pc = 0x495B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495B7Cu;
    // 0x495b80: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x495B7Cu, 0x495B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495B84u;
label_495b84:
    // 0x495b84: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x495b84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x495b88: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x495B88u;
    {
        const bool branch_taken_0x495b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495B88u;
        // 0x495b8c: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495b88) {
            ctx->pc = 0x495BF4u;
            goto label_495bf4;
        }
    }
    ctx->pc = 0x495B90u;
label_495b90:
    // 0x495b90: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x495b90u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x495b94: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x495b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x495b98: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x495b98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x495b9c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x495b9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x495ba0: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x495ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x495ba4: 0x4618a002  mul.s       $f0, $f20, $f24
    ctx->pc = 0x495ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x495ba8: 0x4617a503  div.s       $f20, $f20, $f23
    ctx->pc = 0x495ba8u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[23]); }
    // 0x495bac: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x495bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x495bb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x495bb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x495bb4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x495bb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x495bb8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x495bb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x495bbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x495bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x495bc0: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x495BC0u;
    SET_GPR_U32(ctx, 31, 0x495BC8u);
    ctx->pc = 0x495BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495BC0u;
    // 0x495bc4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x495BC0u, 0x495BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495BC8u;
label_495bc8:
    // 0x495bc8: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x495bc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x495bcc: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x495bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x495bd0: 0x4614a342  mul.s       $f13, $f20, $f20
    ctx->pc = 0x495bd0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x495bd4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x495bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x495bd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x495bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x495bdc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x495bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x495be0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x495be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x495be4: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x495BE4u;
    SET_GPR_U32(ctx, 31, 0x495BECu);
    ctx->pc = 0x495BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495BE4u;
    // 0x495be8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x495BE4u, 0x495BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495BECu;
label_495bec:
    // 0x495bec: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x495becu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x495bf0: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x495bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_495bf4:
    // 0x495bf4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x495bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x495bf8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x495bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x495bfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x495bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x495c00: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x495c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495c04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x495c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x495c08: 0x2a220060  slti        $v0, $s1, 0x60
    ctx->pc = 0x495c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x495c0c: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x495C0Cu;
    {
        const bool branch_taken_0x495c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495c0c) {
            ctx->pc = 0x495C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495C0Cu;
            // 0x495c10: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495b18;
        }
    }
    ctx->pc = 0x495C14u;
    // 0x495c14: 0x27d000d0  addiu       $s0, $fp, 0xD0
    ctx->pc = 0x495c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
    // 0x495c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x495c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495c1c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x495C1Cu;
    SET_GPR_U32(ctx, 31, 0x495C24u);
    ctx->pc = 0x495C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495C1Cu;
    // 0x495c20: 0x2605015f  addiu       $a1, $s0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x495C1Cu, 0x495C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495C24u;
label_495c24:
    // 0x495c24: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x495c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x495c28: 0x244401b0  addiu       $a0, $v0, 0x1B0
    ctx->pc = 0x495c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x495c2c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x495C2Cu;
    SET_GPR_U32(ctx, 31, 0x495C34u);
    ctx->pc = 0x495C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495C2Cu;
    // 0x495c30: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x495C2Cu, 0x495C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495C34u;
label_495c34:
    // 0x495c34: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x495c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x495c38: 0x24640290  addiu       $a0, $v1, 0x290
    ctx->pc = 0x495c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x495c3c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x495C3Cu;
    SET_GPR_U32(ctx, 31, 0x495C44u);
    ctx->pc = 0x495C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495C3Cu;
    // 0x495c40: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x495C3Cu, 0x495C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495C44u;
label_495c44:
    // 0x495c44: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x495c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x495c48: 0x24440370  addiu       $a0, $v0, 0x370
    ctx->pc = 0x495c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x495c4c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x495C4Cu;
    SET_GPR_U32(ctx, 31, 0x495C54u);
    ctx->pc = 0x495C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495C4Cu;
    // 0x495c50: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x495C4Cu, 0x495C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495C54u;
label_495c54:
    // 0x495c54: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x495c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x495c58: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x495c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x495c5c: 0x2442ec38  addiu       $v0, $v0, -0x13C8
    ctx->pc = 0x495c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962232));
    // 0x495c60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x495c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x495c64: 0x8c450860  lw          $a1, 0x860($v0)
    ctx->pc = 0x495c64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x52F498u));
    // 0x495c68: 0xaf908a3c  sw          $s0, -0x75C4($gp)
    ctx->pc = 0x495c68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 16));
    // 0x495c6c: 0xaf838a40  sw          $v1, -0x75C0($gp)
    ctx->pc = 0x495c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937152), GPR_U32(ctx, 3));
    // 0x495c70: 0xaf808a48  sw          $zero, -0x75B8($gp)
    ctx->pc = 0x495c70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937160), GPR_U32(ctx, 0));
    // 0x495c74: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x495C74u;
    {
        const bool branch_taken_0x495c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x495C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495C74u;
        // 0x495c78: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495c74) {
            ctx->pc = 0x495C80u;
            goto label_495c80;
        }
    }
    ctx->pc = 0x495C7Cu;
    // 0x495c7c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x495c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_495c80:
    // 0x495c80: 0xaf828a44  sw          $v0, -0x75BC($gp)
    ctx->pc = 0x495c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 2));
    // 0x495c84: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x495c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x495c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495c8c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x495c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x495c90: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x495c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x495c94: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x495c94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x495c98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x495c98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x495c9c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x495c9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x495ca0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x495ca0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x495ca4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x495ca4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495ca8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x495ca8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x495cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495cb0: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x495cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x495cb4: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x495cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x495cb8: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x495cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x495cbc: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x495cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x495cc0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x495cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x495cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x495CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495CC4u;
        // 0x495cc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495CCCu;
    // 0x495ccc: 0x0  nop
    ctx->pc = 0x495cccu;
    // NOP
    ctx->pc = 0x495cd0u;
}
