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

// Function: sub_00100A80
// Address: 0x100a80 - 0x101120
void sub_00100A80_0x100a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100A80_0x100a80");
#endif

    ctx->pc = 0x100a80u;

    // 0x100a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100a88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x100a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x100a8c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x100a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x100a90: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x100a94: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x100a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x100a98: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
    // 0x100a9c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x100a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x100aa0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100aa4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x100aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x100aa8: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x100aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x100aac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x100aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x100ab0: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x100ab4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x100ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x100ab8: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x100ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x100abc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x100abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x100ac0: 0x24880060  addiu       $t0, $a0, 0x60
    ctx->pc = 0x100ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x100ac4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x100ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x100ac8: 0x24890070  addiu       $t1, $a0, 0x70
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x100acc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x100accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x100ad0: 0x248b0080  addiu       $t3, $a0, 0x80
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x100ad4: 0x3c01bf89  lui         $at, 0xBF89
    ctx->pc = 0x100ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49033 << 16));
    // 0x100ad8: 0x3421dc62  ori         $at, $at, 0xDC62
    ctx->pc = 0x100ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56418);
    // 0x100adc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100ae0: 0x249e01c0  addiu       $fp, $a0, 0x1C0
    ctx->pc = 0x100ae0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x100ae4: 0x3c0139b9  lui         $at, 0x39B9
    ctx->pc = 0x100ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14777 << 16));
    // 0x100ae8: 0x3421102c  ori         $at, $at, 0x102C
    ctx->pc = 0x100ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4140);
    // 0x100aec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100af0: 0x248c0090  addiu       $t4, $a0, 0x90
    ctx->pc = 0x100af0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x100af4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x100af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x100af8: 0x248d00c0  addiu       $t5, $a0, 0xC0
    ctx->pc = 0x100af8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x100afc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x100afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x100b00: 0x248e00d0  addiu       $t6, $a0, 0xD0
    ctx->pc = 0x100b00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x100b04: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x100b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x100b08: 0x248f00e0  addiu       $t7, $a0, 0xE0
    ctx->pc = 0x100b08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x100b0c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x100b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x100b10: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x100b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x100b14: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x100b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x100b18: 0x24910110  addiu       $s1, $a0, 0x110
    ctx->pc = 0x100b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x100b1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x100b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100b20: 0x24920120  addiu       $s2, $a0, 0x120
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x100b24: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x100b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x100b28: 0x24930130  addiu       $s3, $a0, 0x130
    ctx->pc = 0x100b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x100b2c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x100b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x100b30: 0x24940140  addiu       $s4, $a0, 0x140
    ctx->pc = 0x100b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x100b34: 0xc54566e0  lwc1        $f5, 0x66E0($t2)
    ctx->pc = 0x100b34u;
    { uint32_t bits = FAST_READ32(0x5466E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x100b38: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x100b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x100b3c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x100b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x100b40: 0x248a00b0  addiu       $t2, $a0, 0xB0
    ctx->pc = 0x100b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x100b44: 0x3c01bd21  lui         $at, 0xBD21
    ctx->pc = 0x100b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48417 << 16));
    // 0x100b48: 0x3421ff3e  ori         $at, $at, 0xFF3E
    ctx->pc = 0x100b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65342);
    // 0x100b4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100b50: 0x24950150  addiu       $s5, $a0, 0x150
    ctx->pc = 0x100b50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x100b54: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x100b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x100b58: 0x24960170  addiu       $s6, $a0, 0x170
    ctx->pc = 0x100b58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x100b5c: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x100b5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x100b60: 0x24970180  addiu       $s7, $a0, 0x180
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x100b64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x100b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x100b68: 0x24980190  addiu       $t8, $a0, 0x190
    ctx->pc = 0x100b68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x100b6c: 0x3c01bde4  lui         $at, 0xBDE4
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48612 << 16));
    // 0x100b70: 0x34215720  ori         $at, $at, 0x5720
    ctx->pc = 0x100b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22304);
    // 0x100b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100b78: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x100b7c: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x100b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x100b80: 0x249901a0  addiu       $t9, $a0, 0x1A0
    ctx->pc = 0x100b80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x100b84: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x100b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x100b88: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x100b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x100b8c: 0x34210688  ori         $at, $at, 0x688
    ctx->pc = 0x100b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1672);
    // 0x100b90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100b94: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x100b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x100b98: 0xe4a50008  swc1        $f5, 0x8($a1)
    ctx->pc = 0x100b98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x100b9c: 0x3c013975  lui         $at, 0x3975
    ctx->pc = 0x100b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14709 << 16));
    // 0x100ba0: 0x3421d961  ori         $at, $at, 0xD961
    ctx->pc = 0x100ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55649);
    // 0x100ba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100ba8: 0x24850160  addiu       $a1, $a0, 0x160
    ctx->pc = 0x100ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x100bac: 0xe4820040  swc1        $f2, 0x40($a0)
    ctx->pc = 0x100bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x100bb0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x100bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x100bb4: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x100bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x100bb8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x100bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x100bbc: 0x3c013e96  lui         $at, 0x3E96
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16022 << 16));
    // 0x100bc0: 0x3421e884  ori         $at, $at, 0xE884
    ctx->pc = 0x100bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59524);
    // 0x100bc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100bc8: 0x248601b0  addiu       $a2, $a0, 0x1B0
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x100bcc: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x100bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x100bd0: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x100bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x100bd4: 0x249e01d0  addiu       $fp, $a0, 0x1D0
    ctx->pc = 0x100bd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x100bd8: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x100bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x100bdc: 0x249e01e0  addiu       $fp, $a0, 0x1E0
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x100be0: 0x3c013ae4  lui         $at, 0x3AE4
    ctx->pc = 0x100be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15076 << 16));
    // 0x100be4: 0x34218d33  ori         $at, $at, 0x8D33
    ctx->pc = 0x100be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36147);
    // 0x100be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100bec: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x100becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x100bf0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x100bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x100bf4: 0x249e01f0  addiu       $fp, $a0, 0x1F0
    ctx->pc = 0x100bf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x100bf8: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x100bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x100bfc: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x100bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x100c00: 0x249e0200  addiu       $fp, $a0, 0x200
    ctx->pc = 0x100c00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x100c04: 0xafbe000c  sw          $fp, 0xC($sp)
    ctx->pc = 0x100c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 30));
    // 0x100c08: 0x3c013dfb  lui         $at, 0x3DFB
    ctx->pc = 0x100c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15867 << 16));
    // 0x100c0c: 0x3421d72e  ori         $at, $at, 0xD72E
    ctx->pc = 0x100c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55086);
    // 0x100c10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100c14: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x100c14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x100c18: 0xe4820060  swc1        $f2, 0x60($a0)
    ctx->pc = 0x100c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x100c1c: 0x24870210  addiu       $a3, $a0, 0x210
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x100c20: 0x3c013db1  lui         $at, 0x3DB1
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15793 << 16));
    // 0x100c24: 0x34213210  ori         $at, $at, 0x3210
    ctx->pc = 0x100c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12816);
    // 0x100c28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100c2c: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x100c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x100c30: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x100c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x100c34: 0xe5050008  swc1        $f5, 0x8($t0)
    ctx->pc = 0x100c34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x100c38: 0x3c013a8f  lui         $at, 0x3A8F
    ctx->pc = 0x100c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14991 << 16));
    // 0x100c3c: 0x3421e566  ori         $at, $at, 0xE566
    ctx->pc = 0x100c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58726);
    // 0x100c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100c44: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x100c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x100c48: 0x3c01bce9  lui         $at, 0xBCE9
    ctx->pc = 0x100c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48361 << 16));
    // 0x100c4c: 0x34215c70  ori         $at, $at, 0x5C70
    ctx->pc = 0x100c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23664);
    // 0x100c50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100c54: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x100c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x100c58: 0x3c01bc1b  lui         $at, 0xBC1B
    ctx->pc = 0x100c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48155 << 16));
    // 0x100c5c: 0x34219700  ori         $at, $at, 0x9700
    ctx->pc = 0x100c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38656);
    // 0x100c60: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100c64: 0xe5220008  swc1        $f2, 0x8($t1)
    ctx->pc = 0x100c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x100c68: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x100c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x100c6c: 0x3c01bcb8  lui         $at, 0xBCB8
    ctx->pc = 0x100c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48312 << 16));
    // 0x100c70: 0x3421d635  ori         $at, $at, 0xD635
    ctx->pc = 0x100c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54837);
    // 0x100c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100c78: 0xe4840080  swc1        $f4, 0x80($a0)
    ctx->pc = 0x100c78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x100c7c: 0x3c01b380  lui         $at, 0xB380
    ctx->pc = 0x100c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45952 << 16));
    // 0x100c80: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100c84: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x100c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x100c88: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x100c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x100c8c: 0x3c013df8  lui         $at, 0x3DF8
    ctx->pc = 0x100c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15864 << 16));
    // 0x100c90: 0x34214bdb  ori         $at, $at, 0x4BDB
    ctx->pc = 0x100c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19419);
    // 0x100c94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100c98: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x100c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x100c9c: 0xe56b0004  swc1        $f11, 0x4($t3)
    ctx->pc = 0x100c9cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x100ca0: 0x3c01b300  lui         $at, 0xB300
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45824 << 16));
    // 0x100ca4: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100cac: 0xe4830090  swc1        $f3, 0x90($a0)
    ctx->pc = 0x100cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x100cb0: 0x3c013627  lui         $at, 0x3627
    ctx->pc = 0x100cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13863 << 16));
    // 0x100cb4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x100cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x100cb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100cbc: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x100cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x100cc0: 0x3c01bca8  lui         $at, 0xBCA8
    ctx->pc = 0x100cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48296 << 16));
    // 0x100cc4: 0x34214d01  ori         $at, $at, 0x4D01
    ctx->pc = 0x100cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19713);
    // 0x100cc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100ccc: 0xe5820008  swc1        $f2, 0x8($t4)
    ctx->pc = 0x100cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x100cd0: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x100cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x100cd4: 0x3c01bacc  lui         $at, 0xBACC
    ctx->pc = 0x100cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47820 << 16));
    // 0x100cd8: 0x34218ab3  ori         $at, $at, 0x8AB3
    ctx->pc = 0x100cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35507);
    // 0x100cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100ce0: 0xe48400a0  swc1        $f4, 0xA0($a0)
    ctx->pc = 0x100ce0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x100ce4: 0x3c01bdc1  lui         $at, 0xBDC1
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48577 << 16));
    // 0x100ce8: 0x3421ee7f  ori         $at, $at, 0xEE7F
    ctx->pc = 0x100ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61055);
    // 0x100cec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100cf0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x100cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100cf4: 0x3c013d37  lui         $at, 0x3D37
    ctx->pc = 0x100cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15671 << 16));
    // 0x100cf8: 0x342130ae  ori         $at, $at, 0x30AE
    ctx->pc = 0x100cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12462);
    // 0x100cfc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100d00: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x100d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x100d04: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x100d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x100d08: 0x3c01b32b  lui         $at, 0xB32B
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45867 << 16));
    // 0x100d0c: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x100d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x100d10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100d14: 0xe48300b0  swc1        $f3, 0xB0($a0)
    ctx->pc = 0x100d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x100d18: 0x3c01b400  lui         $at, 0xB400
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46080 << 16));
    // 0x100d1c: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100d20: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x100d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x100d24: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x100d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x100d28: 0x3c01bca8  lui         $at, 0xBCA8
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48296 << 16));
    // 0x100d2c: 0x34213bbe  ori         $at, $at, 0x3BBE
    ctx->pc = 0x100d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15294);
    // 0x100d30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100d34: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x100d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x100d38: 0xe5480004  swc1        $f8, 0x4($t2)
    ctx->pc = 0x100d38u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x100d3c: 0x3c01ba0e  lui         $at, 0xBA0E
    ctx->pc = 0x100d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47630 << 16));
    // 0x100d40: 0x34214959  ori         $at, $at, 0x4959
    ctx->pc = 0x100d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18777);
    // 0x100d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100d48: 0xe48400c0  swc1        $f4, 0xC0($a0)
    ctx->pc = 0x100d48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x100d4c: 0x3c01bdc1  lui         $at, 0xBDC1
    ctx->pc = 0x100d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48577 << 16));
    // 0x100d50: 0x342176a0  ori         $at, $at, 0x76A0
    ctx->pc = 0x100d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30368);
    // 0x100d54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100d58: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x100d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x100d5c: 0x3c013d36  lui         $at, 0x3D36
    ctx->pc = 0x100d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15670 << 16));
    // 0x100d60: 0x3421c66b  ori         $at, $at, 0xC66B
    ctx->pc = 0x100d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50795);
    // 0x100d64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100d68: 0xe5a20008  swc1        $f2, 0x8($t5)
    ctx->pc = 0x100d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x100d6c: 0xe5a1000c  swc1        $f1, 0xC($t5)
    ctx->pc = 0x100d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x100d70: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x100d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x100d74: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100d78: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x100d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x100d7c: 0x3c013380  lui         $at, 0x3380
    ctx->pc = 0x100d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13184 << 16));
    // 0x100d80: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100d88: 0xe48300d0  swc1        $f3, 0xD0($a0)
    ctx->pc = 0x100d88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x100d8c: 0x3c013d9c  lui         $at, 0x3D9C
    ctx->pc = 0x100d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15772 << 16));
    // 0x100d90: 0x3421949f  ori         $at, $at, 0x949F
    ctx->pc = 0x100d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38047);
    // 0x100d94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100d98: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x100d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x100d9c: 0xe5c1000c  swc1        $f1, 0xC($t6)
    ctx->pc = 0x100d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x100da0: 0xe5c90004  swc1        $f9, 0x4($t6)
    ctx->pc = 0x100da0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x100da4: 0x3c01bd9f  lui         $at, 0xBD9F
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48543 << 16));
    // 0x100da8: 0x342178cb  ori         $at, $at, 0x78CB
    ctx->pc = 0x100da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30923);
    // 0x100dac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100db0: 0xe48400e0  swc1        $f4, 0xE0($a0)
    ctx->pc = 0x100db0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x100db4: 0x3c01b461  lui         $at, 0xB461
    ctx->pc = 0x100db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46177 << 16));
    // 0x100db8: 0x34217c5c  ori         $at, $at, 0x7C5C
    ctx->pc = 0x100db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31836);
    // 0x100dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100dc0: 0xe5e20008  swc1        $f2, 0x8($t7)
    ctx->pc = 0x100dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x100dc4: 0x3c01bc15  lui         $at, 0xBC15
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48149 << 16));
    // 0x100dc8: 0x34214480  ori         $at, $at, 0x4480
    ctx->pc = 0x100dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17536);
    // 0x100dcc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100dd0: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x100dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x100dd4: 0xe5e1000c  swc1        $f1, 0xC($t7)
    ctx->pc = 0x100dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x100dd8: 0x3c01bd05  lui         $at, 0xBD05
    ctx->pc = 0x100dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48389 << 16));
    // 0x100ddc: 0x3421199a  ori         $at, $at, 0x199A
    ctx->pc = 0x100ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6554);
    // 0x100de0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100de4: 0xe48300f0  swc1        $f3, 0xF0($a0)
    ctx->pc = 0x100de4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x100de8: 0x3c013a2d  lui         $at, 0x3A2D
    ctx->pc = 0x100de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14893 << 16));
    // 0x100dec: 0x342169db  ori         $at, $at, 0x69DB
    ctx->pc = 0x100decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27099);
    // 0x100df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100df4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x100df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x100df8: 0x3c01bcdb  lui         $at, 0xBCDB
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48347 << 16));
    // 0x100dfc: 0x3421bb42  ori         $at, $at, 0xBB42
    ctx->pc = 0x100dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47938);
    // 0x100e00: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x100e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x100e04: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x100e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x100e08: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x100e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x100e0c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x100e10: 0x34218307  ori         $at, $at, 0x8307
    ctx->pc = 0x100e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33543);
    // 0x100e14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100e18: 0xe48a0100  swc1        $f10, 0x100($a0)
    ctx->pc = 0x100e18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x100e1c: 0x3c01bc04  lui         $at, 0xBC04
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48132 << 16));
    // 0x100e20: 0x3421bafb  ori         $at, $at, 0xBAFB
    ctx->pc = 0x100e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47867);
    // 0x100e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100e28: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x100e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x100e2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x100e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x100e30: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x100e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x100e34: 0x3421242e  ori         $at, $at, 0x242E
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9262);
    // 0x100e38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100e3c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x100e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x100e40: 0x3c0132ab  lui         $at, 0x32AB
    ctx->pc = 0x100e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12971 << 16));
    // 0x100e44: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x100e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x100e48: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x100e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x100e4c: 0xe4820110  swc1        $f2, 0x110($a0)
    ctx->pc = 0x100e4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x100e50: 0x3c013e95  lui         $at, 0x3E95
    ctx->pc = 0x100e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16021 << 16));
    // 0x100e54: 0x34214e8e  ori         $at, $at, 0x4E8E
    ctx->pc = 0x100e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20110);
    // 0x100e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100e5c: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x100e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x100e60: 0xe6280004  swc1        $f8, 0x4($s1)
    ctx->pc = 0x100e60u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x100e64: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x100e64u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x100e68: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x100e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x100e6c: 0x3c013e79  lui         $at, 0x3E79
    ctx->pc = 0x100e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15993 << 16));
    // 0x100e70: 0x34213ef2  ori         $at, $at, 0x3EF2
    ctx->pc = 0x100e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16114);
    // 0x100e74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100e78: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x100e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x100e7c: 0xe6450008  swc1        $f5, 0x8($s2)
    ctx->pc = 0x100e7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x100e80: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x100e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x100e84: 0x3c013480  lui         $at, 0x3480
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13440 << 16));
    // 0x100e88: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100e90: 0xe4830130  swc1        $f3, 0x130($a0)
    ctx->pc = 0x100e90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x100e94: 0x3c01b22b  lui         $at, 0xB22B
    ctx->pc = 0x100e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45611 << 16));
    // 0x100e98: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x100e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x100e9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100ea0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x100ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x100ea4: 0x3c013dc6  lui         $at, 0x3DC6
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15814 << 16));
    // 0x100ea8: 0x3421ae9a  ori         $at, $at, 0xAE9A
    ctx->pc = 0x100ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44698);
    // 0x100eac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100eb0: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x100eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x100eb4: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x100eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x100eb8: 0x3c013d35  lui         $at, 0x3D35
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15669 << 16));
    // 0x100ebc: 0x3421707d  ori         $at, $at, 0x707D
    ctx->pc = 0x100ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28797);
    // 0x100ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100ec4: 0xe4840140  swc1        $f4, 0x140($a0)
    ctx->pc = 0x100ec4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x100ec8: 0x3c013ca7  lui         $at, 0x3CA7
    ctx->pc = 0x100ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15527 << 16));
    // 0x100ecc: 0x3421947f  ori         $at, $at, 0x947F
    ctx->pc = 0x100eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38015);
    // 0x100ed0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x100ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x100ed4: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x100ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x100ed8: 0x3c013dc8  lui         $at, 0x3DC8
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15816 << 16));
    // 0x100edc: 0x34214476  ori         $at, $at, 0x4476
    ctx->pc = 0x100edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17526);
    // 0x100ee0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100ee4: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x100ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x100ee8: 0xe6870008  swc1        $f7, 0x8($s4)
    ctx->pc = 0x100ee8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x100eec: 0x3c01bc0c  lui         $at, 0xBC0C
    ctx->pc = 0x100eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48140 << 16));
    // 0x100ef0: 0x3421ada3  ori         $at, $at, 0xADA3
    ctx->pc = 0x100ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44451);
    // 0x100ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100ef8: 0xe4830150  swc1        $f3, 0x150($a0)
    ctx->pc = 0x100ef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x100efc: 0x3c013c93  lui         $at, 0x3C93
    ctx->pc = 0x100efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15507 << 16));
    // 0x100f00: 0x342116fe  ori         $at, $at, 0x16FE
    ctx->pc = 0x100f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5886);
    // 0x100f04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100f08: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x100f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x100f0c: 0xe6a20008  swc1        $f2, 0x8($s5)
    ctx->pc = 0x100f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x100f10: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x100f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x100f14: 0x3c013d24  lui         $at, 0x3D24
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15652 << 16));
    // 0x100f18: 0x342182fa  ori         $at, $at, 0x82FA
    ctx->pc = 0x100f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33530);
    // 0x100f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100f20: 0x3c01bc04  lui         $at, 0xBC04
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48132 << 16));
    // 0x100f24: 0x3421bbfc  ori         $at, $at, 0xBBFC
    ctx->pc = 0x100f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48124);
    // 0x100f28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100f2c: 0xe48a0160  swc1        $f10, 0x160($a0)
    ctx->pc = 0x100f2cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x100f30: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x100f34: 0x3421242c  ori         $at, $at, 0x242C
    ctx->pc = 0x100f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9260);
    // 0x100f38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100f3c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x100f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x100f40: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x100f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x100f44: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x100f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x100f48: 0xe4830170  swc1        $f3, 0x170($a0)
    ctx->pc = 0x100f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x100f4c: 0x3c013e95  lui         $at, 0x3E95
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16021 << 16));
    // 0x100f50: 0x34214e92  ori         $at, $at, 0x4E92
    ctx->pc = 0x100f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20114);
    // 0x100f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100f58: 0xe6c1000c  swc1        $f1, 0xC($s6)
    ctx->pc = 0x100f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x100f5c: 0xe6c90004  swc1        $f9, 0x4($s6)
    ctx->pc = 0x100f5cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x100f60: 0xe6c60008  swc1        $f6, 0x8($s6)
    ctx->pc = 0x100f60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x100f64: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x100f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x100f68: 0x3c013e79  lui         $at, 0x3E79
    ctx->pc = 0x100f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15993 << 16));
    // 0x100f6c: 0x34213ee4  ori         $at, $at, 0x3EE4
    ctx->pc = 0x100f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16100);
    // 0x100f70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100f74: 0xe6e1000c  swc1        $f1, 0xC($s7)
    ctx->pc = 0x100f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x100f78: 0xe6e50008  swc1        $f5, 0x8($s7)
    ctx->pc = 0x100f78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x100f7c: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x100f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
    // 0x100f80: 0x3c01b480  lui         $at, 0xB480
    ctx->pc = 0x100f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46208 << 16));
    // 0x100f84: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x100f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x100f88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100f8c: 0xe4820190  swc1        $f2, 0x190($a0)
    ctx->pc = 0x100f8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
    // 0x100f90: 0xe7000004  swc1        $f0, 0x4($t8)
    ctx->pc = 0x100f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x100f94: 0x3c013dc6  lui         $at, 0x3DC6
    ctx->pc = 0x100f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15814 << 16));
    // 0x100f98: 0x3421aeaa  ori         $at, $at, 0xAEAA
    ctx->pc = 0x100f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44714);
    // 0x100f9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100fa0: 0xe701000c  swc1        $f1, 0xC($t8)
    ctx->pc = 0x100fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 12), bits); }
    // 0x100fa4: 0xe7050008  swc1        $f5, 0x8($t8)
    ctx->pc = 0x100fa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x100fa8: 0x3c01bd35  lui         $at, 0xBD35
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48437 << 16));
    // 0x100fac: 0x3421706f  ori         $at, $at, 0x706F
    ctx->pc = 0x100facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28783);
    // 0x100fb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100fb4: 0xe48301a0  swc1        $f3, 0x1A0($a0)
    ctx->pc = 0x100fb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x100fb8: 0xe7200004  swc1        $f0, 0x4($t9)
    ctx->pc = 0x100fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x100fbc: 0x3c013dc8  lui         $at, 0x3DC8
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15816 << 16));
    // 0x100fc0: 0x34214485  ori         $at, $at, 0x4485
    ctx->pc = 0x100fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17541);
    // 0x100fc4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100fc8: 0xe7270008  swc1        $f7, 0x8($t9)
    ctx->pc = 0x100fc8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x100fcc: 0xe721000c  swc1        $f1, 0xC($t9)
    ctx->pc = 0x100fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 12), bits); }
    // 0x100fd0: 0x3c013c0c  lui         $at, 0x3C0C
    ctx->pc = 0x100fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15372 << 16));
    // 0x100fd4: 0x3421adc3  ori         $at, $at, 0xADC3
    ctx->pc = 0x100fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44483);
    // 0x100fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100fdc: 0x3c013c93  lui         $at, 0x3C93
    ctx->pc = 0x100fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15507 << 16));
    // 0x100fe0: 0x3421173f  ori         $at, $at, 0x173F
    ctx->pc = 0x100fe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5951);
    // 0x100fe4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100fe8: 0xe48401b0  swc1        $f4, 0x1B0($a0)
    ctx->pc = 0x100fe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x100fec: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x100fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x100ff0: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x100ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x100ff4: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x100ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x100ff8: 0xe48801c0  swc1        $f8, 0x1C0($a0)
    ctx->pc = 0x100ff8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x100ffc: 0x3c01bdd8  lui         $at, 0xBDD8
    ctx->pc = 0x100ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48600 << 16));
    // 0x101000: 0x3421b048  ori         $at, $at, 0xB048
    ctx->pc = 0x101000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45128);
    // 0x101004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101008: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10100c: 0x3c01b421  lui         $at, 0xB421
    ctx->pc = 0x10100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46113 << 16));
    // 0x101010: 0x34210fb0  ori         $at, $at, 0xFB0
    ctx->pc = 0x101010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4016);
    // 0x101014: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x101014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x101018: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x101018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
    // 0x10101c: 0x3421b791  ori         $at, $at, 0xB791
    ctx->pc = 0x10101cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46993);
    // 0x101020: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x101020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x101024: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x101024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101028: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x101028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x10102c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x10102cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101030: 0xe48401d0  swc1        $f4, 0x1D0($a0)
    ctx->pc = 0x101030u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
    // 0x101034: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x101034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x101038: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x101038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x10103c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10103cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101040: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101044: 0x3c013efb  lui         $at, 0x3EFB
    ctx->pc = 0x101044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16123 << 16));
    // 0x101048: 0x3421621e  ori         $at, $at, 0x621E
    ctx->pc = 0x101048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25118);
    // 0x10104c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10104cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x101050: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x101050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x101054: 0xe7c50008  swc1        $f5, 0x8($fp)
    ctx->pc = 0x101054u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x101058: 0xe7c1000c  swc1        $f1, 0xC($fp)
    ctx->pc = 0x101058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x10105c: 0xe48301e0  swc1        $f3, 0x1E0($a0)
    ctx->pc = 0x10105cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 480), bits); }
    // 0x101060: 0x3c01332b  lui         $at, 0x332B
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13099 << 16));
    // 0x101064: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x101064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x101068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10106c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x101070: 0x3c013421  lui         $at, 0x3421
    ctx->pc = 0x101070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13345 << 16));
    // 0x101074: 0x34210fb0  ori         $at, $at, 0xFB0
    ctx->pc = 0x101074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4016);
    // 0x101078: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x101078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10107c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x10107cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x101080: 0xe44b0004  swc1        $f11, 0x4($v0)
    ctx->pc = 0x101080u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101084: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x101084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101088: 0xe48901f0  swc1        $f9, 0x1F0($a0)
    ctx->pc = 0x101088u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x10108c: 0x3c013dd8  lui         $at, 0x3DD8
    ctx->pc = 0x10108cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15832 << 16));
    // 0x101090: 0x3421b050  ori         $at, $at, 0xB050
    ctx->pc = 0x101090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45136);
    // 0x101094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101098: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x101098u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10109c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x10109cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1010a0: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x1010a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x1010a4: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x1010a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x1010a8: 0xe7c1000c  swc1        $f1, 0xC($fp)
    ctx->pc = 0x1010a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x1010ac: 0xe4840200  swc1        $f4, 0x200($a0)
    ctx->pc = 0x1010acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x1010b0: 0x3c01322b  lui         $at, 0x322B
    ctx->pc = 0x1010b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12843 << 16));
    // 0x1010b4: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x1010b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x1010b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1010b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1010bc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1010bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1010c0: 0x3c0133c1  lui         $at, 0x33C1
    ctx->pc = 0x1010c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13249 << 16));
    // 0x1010c4: 0x34214606  ori         $at, $at, 0x4606
    ctx->pc = 0x1010c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17926);
    // 0x1010c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1010c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1010cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1010ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1010d0: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x1010d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1010d4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1010d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1010d8: 0xe4830210  swc1        $f3, 0x210($a0)
    ctx->pc = 0x1010d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 528), bits); }
    // 0x1010dc: 0x3c013396  lui         $at, 0x3396
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13206 << 16));
    // 0x1010e0: 0x342152e8  ori         $at, $at, 0x52E8
    ctx->pc = 0x1010e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21224);
    // 0x1010e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1010e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1010e8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1010e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1010ec: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1010ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1010f0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1010f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1010f4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1010f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1010f8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1010f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1010fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1010fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101100: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101104: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x101104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101108: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x101108u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10110c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x10110cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101110: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x101110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x101114: 0x3e00008  jr          $ra
    ctx->pc = 0x101114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101114u;
        // 0x101118: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10111Cu;
    // 0x10111c: 0x0  nop
    ctx->pc = 0x10111cu;
    // NOP
    ctx->pc = 0x101120u;
}
