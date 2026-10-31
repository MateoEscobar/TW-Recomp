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

// Function: sub_004A1A58
// Address: 0x4a1a58 - 0x4a1df0
void sub_004A1A58_0x4a1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1A58_0x4a1a58");
#endif

    ctx->pc = 0x4a1a58u;

    // 0x4a1a58: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x4a1a58u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1a5c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4a1a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x4a1a60: 0xc5c00080  lwc1        $f0, 0x80($t6)
    ctx->pc = 0x4a1a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1a64: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4a1a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4a1a68: 0x8dcd0060  lw          $t5, 0x60($t6)
    ctx->pc = 0x4a1a68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 96)));
    // 0x4a1a6c: 0x2482f810  addiu       $v0, $a0, -0x7F0
    ctx->pc = 0x4a1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965264));
    // 0x4a1a70: 0xe480f810  swc1        $f0, -0x7F0($a0)
    ctx->pc = 0x4a1a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F810u, _value); } while (0); }
    // 0x4a1a74: 0x24c3f820  addiu       $v1, $a2, -0x7E0
    ctx->pc = 0x4a1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965280));
    // 0x4a1a78: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4a1a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F814u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F814u, _value); } while (0); }
    // 0x4a1a7c: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4a1a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x4a1a80: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x4a1a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F81Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F81Cu, _value); } while (0); }
    // 0x4a1a84: 0x24e5f840  addiu       $a1, $a3, -0x7C0
    ctx->pc = 0x4a1a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965312));
    // 0x4a1a88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x4a1a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F818u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F818u, _value); } while (0); }
    // 0x4a1a8c: 0x3c090053  lui         $t1, 0x53
    ctx->pc = 0x4a1a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)83 << 16));
    // 0x4a1a90: 0x2524f850  addiu       $a0, $t1, -0x7B0
    ctx->pc = 0x4a1a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965328));
    // 0x4a1a94: 0x3c0b0053  lui         $t3, 0x53
    ctx->pc = 0x4a1a94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)83 << 16));
    // 0x4a1a98: 0xc5c00084  lwc1        $f0, 0x84($t6)
    ctx->pc = 0x4a1a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1a9c: 0x2568f860  addiu       $t0, $t3, -0x7A0
    ctx->pc = 0x4a1a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965344));
    // 0x4a1aa0: 0x3c0c0053  lui         $t4, 0x53
    ctx->pc = 0x4a1aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)83 << 16));
    // 0x4a1aa4: 0xe4c0f820  swc1        $f0, -0x7E0($a2)
    ctx->pc = 0x4a1aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F820u, _value); } while (0); }
    // 0x4a1aa8: 0x258af8e0  addiu       $t2, $t4, -0x720
    ctx->pc = 0x4a1aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965472));
    // 0x4a1aac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4a1aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F824u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F824u, _value); } while (0); }
    // 0x4a1ab0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x4a1ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F82Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F82Cu, _value); } while (0); }
    // 0x4a1ab4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x4a1ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F828u, _value); } while (0); }
    // 0x4a1ab8: 0xc5a1000c  lwc1        $f1, 0xC($t5)
    ctx->pc = 0x4a1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1abc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a1abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a1ac0: 0xe4e1f840  swc1        $f1, -0x7C0($a3)
    ctx->pc = 0x4a1ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F840u, _value); } while (0); }
    // 0x4a1ac4: 0xc5a00010  lwc1        $f0, 0x10($t5)
    ctx->pc = 0x4a1ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1acc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x4a1accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F844u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F844u, _value); } while (0); }
    // 0x4a1ad0: 0xc5c1008c  lwc1        $f1, 0x8C($t6)
    ctx->pc = 0x4a1ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1ad4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4a1ad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x52F84Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F84Cu, _value); } while (0);
    // 0x4a1ad8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x4a1ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F848u, _value); } while (0); }
    // 0x4a1adc: 0xad20f850  sw          $zero, -0x7B0($t1)
    ctx->pc = 0x4a1adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x52F850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F850u, _value); } while (0);
    // 0x4a1ae0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4a1ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x52F854u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F854u, _value); } while (0);
    // 0x4a1ae4: 0xc5c00090  lwc1        $f0, 0x90($t6)
    ctx->pc = 0x4a1ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1ae8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4a1ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x52F85Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F85Cu, _value); } while (0);
    // 0x4a1aec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4a1aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F858u, _value); } while (0); }
    // 0x4a1af0: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4a1af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a1af4: 0x8da3000c  lw          $v1, 0xC($t5)
    ctx->pc = 0x4a1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x4a1af8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4a1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a1afc: 0x85a4001c  lh          $a0, 0x1C($t5)
    ctx->pc = 0x4a1afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x4a1b00: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x4a1b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a1b04: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x4a1b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a1b08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a1b0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a1b10: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4a1b10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4a1b14: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1b14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1b18: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x4a1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x4a1b1c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a1b20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a1b24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a1b24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1b2c: 0xe560f860  swc1        $f0, -0x7A0($t3)
    ctx->pc = 0x4a1b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294965344), bits); }
    // 0x4a1b30: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4a1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a1b34: 0x8da30010  lw          $v1, 0x10($t5)
    ctx->pc = 0x4a1b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x4a1b38: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a1b3c: 0x85a4001e  lh          $a0, 0x1E($t5)
    ctx->pc = 0x4a1b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 30)));
    // 0x4a1b40: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x4a1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a1b44: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x4a1b44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a1b48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a1b4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a1b50: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4a1b50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4a1b54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1b54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1b58: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x4a1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x4a1b5c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a1b60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a1b64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a1b64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1b68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1b6c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x4a1b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4a1b70: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x4a1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x4a1b74: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x4a1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x4a1b78: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4a1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a1b7c: 0x85a4001c  lh          $a0, 0x1C($t5)
    ctx->pc = 0x4a1b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x4a1b80: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4a1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a1b84: 0x8f868a78  lw          $a2, -0x7588($gp)
    ctx->pc = 0x4a1b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937208)));
    // 0x4a1b88: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4a1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a1b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a1b90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1b94: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x4a1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x4a1b98: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a1b9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a1b9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1ba4: 0xe580f8e0  swc1        $f0, -0x720($t4)
    ctx->pc = 0x4a1ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294965472), bits); }
    // 0x4a1ba8: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4a1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a1bac: 0x85a4001e  lh          $a0, 0x1E($t5)
    ctx->pc = 0x4a1bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 30)));
    // 0x4a1bb0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4a1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4a1bb4: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x4a1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x4a1bb8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4a1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a1bbc: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x4a1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x4a1bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a1bc4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1bc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1bc8: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x4a1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x4a1bcc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a1bd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a1bd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1bd8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x4A1BD8u;
    {
        const bool branch_taken_0x4a1bd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BD8u;
        // 0x4a1bdc: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1bd8) {
            ctx->pc = 0x4A1C0Cu;
            goto label_4a1c0c;
        }
    }
    ctx->pc = 0x4A1BE0u;
    // 0x4a1be0: 0xc5c10084  lwc1        $f1, 0x84($t6)
    ctx->pc = 0x4a1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1be4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4a1be8: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x4a1be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x4a1bec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a1becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a1bf0: 0xe441f83c  swc1        $f1, -0x7C4($v0)
    ctx->pc = 0x4a1bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F83Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F83Cu, _value); } while (0); }
    // 0x4a1bf4: 0xc5c00084  lwc1        $f0, 0x84($t6)
    ctx->pc = 0x4a1bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1bf8: 0xc5c10088  lwc1        $f1, 0x88($t6)
    ctx->pc = 0x4a1bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1bfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4a1bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4a1c00: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x4a1c00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x4a1c04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A1C04u;
    {
        const bool branch_taken_0x4a1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C04u;
        // 0x4a1c08: 0x2443f83c  addiu       $v1, $v0, -0x7C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c04) {
            ctx->pc = 0x4A1C30u;
            goto label_4a1c30;
        }
    }
    ctx->pc = 0x4A1C0Cu;
label_4a1c0c:
    // 0x4a1c0c: 0xc7818a7c  lwc1        $f1, -0x7584($gp)
    ctx->pc = 0x4a1c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1c10: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4a1c14: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x4a1c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x4a1c18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a1c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a1c1c: 0x2443f83c  addiu       $v1, $v0, -0x7C4
    ctx->pc = 0x4a1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965308));
    // 0x4a1c20: 0xe441f83c  swc1        $f1, -0x7C4($v0)
    ctx->pc = 0x4a1c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F83Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F83Cu, _value); } while (0); }
    // 0x4a1c24: 0xc5c00088  lwc1        $f0, 0x88($t6)
    ctx->pc = 0x4a1c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1c28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4a1c28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a1c2c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x4a1c2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_4a1c30:
    // 0x4a1c30: 0xe462fffc  swc1        $f2, -0x4($v1)
    ctx->pc = 0x4a1c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x4a1c34: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x4a1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x4a1c38: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4a1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4a1c3c: 0xc78282f0  lwc1        $f2, -0x7D10($gp)
    ctx->pc = 0x4a1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a1c40: 0x246bf7d0  addiu       $t3, $v1, -0x830
    ctx->pc = 0x4a1c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x4a1c44: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1c48: 0xc5c40080  lwc1        $f4, 0x80($t6)
    ctx->pc = 0x4a1c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4a1c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1c54: 0xc5c10084  lwc1        $f1, 0x84($t6)
    ctx->pc = 0x4a1c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4a1c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4a1c5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4a1c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a1c60: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4a1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4a1c64: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4a1c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4a1c68: 0x248af7e0  addiu       $t2, $a0, -0x820
    ctx->pc = 0x4a1c68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965216));
    // 0x4a1c6c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4a1c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4a1c70: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4a1c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4a1c74: 0x24a8f7f0  addiu       $t0, $a1, -0x810
    ctx->pc = 0x4a1c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965232));
    // 0x4a1c78: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4a1c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x4a1c7c: 0x46011903  div.s       $f4, $f3, $f1
    ctx->pc = 0x4a1c7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x4a1c80: 0x24c9f800  addiu       $t1, $a2, -0x800
    ctx->pc = 0x4a1c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965248));
    // 0x4a1c84: 0xe460f7d0  swc1        $f0, -0x830($v1)
    ctx->pc = 0x4a1c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965200), bits); }
    // 0x4a1c88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a1c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1c8c: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x4a1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x4a1c90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1c9c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4a1c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4a1ca0: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x4a1ca0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x4a1ca4: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x4a1ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x4a1ca8: 0xc5c10084  lwc1        $f1, 0x84($t6)
    ctx->pc = 0x4a1ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1cac: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x4a1cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x4a1cb0: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x4a1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x4a1cb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1cb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1cbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1cc0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4a1cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4a1cc4: 0xe480f7e0  swc1        $f0, -0x820($a0)
    ctx->pc = 0x4a1cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294965216), bits); }
    // 0x4a1cc8: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x4a1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x4a1ccc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1cccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1cd8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4a1cd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4a1cdc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4a1cdcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x4a1ce0: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x4a1ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x4a1ce4: 0xc5c00080  lwc1        $f0, 0x80($t6)
    ctx->pc = 0x4a1ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1ce8: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x4a1ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x4a1cec: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x4a1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x4a1cf0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1cf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1cf4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x4a1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x4a1cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1d00: 0xe4a0f7f0  swc1        $f0, -0x810($a1)
    ctx->pc = 0x4a1d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294965232), bits); }
    // 0x4a1d04: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x4a1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x4a1d08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1d08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1d0c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x4a1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x4a1d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1d14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1d18: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x4a1d18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x4a1d1c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x4a1d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4a1d20: 0xc5c10084  lwc1        $f1, 0x84($t6)
    ctx->pc = 0x4a1d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1d24: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x4a1d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x4a1d28: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x4a1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x4a1d2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1d30: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x4a1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x4a1d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1d38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1d3c: 0xe4c0f800  swc1        $f0, -0x800($a2)
    ctx->pc = 0x4a1d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294965248), bits); }
    // 0x4a1d40: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x4a1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x4a1d44: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1d44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1d48: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x4a1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x4a1d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1d50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1d54: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x4a1d54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x4a1d58: 0xe5230004  swc1        $f3, 0x4($t1)
    ctx->pc = 0x4a1d58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x4a1d5c: 0xc5c00080  lwc1        $f0, 0x80($t6)
    ctx->pc = 0x4a1d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1d60: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x4a1d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x4a1d64: 0x8dc20014  lw          $v0, 0x14($t6)
    ctx->pc = 0x4a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x4a1d68: 0x14470013  bne         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A1D68u;
    {
        const bool branch_taken_0x4a1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x4A1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D68u;
        // 0x4a1d6c: 0xc5c20080  lwc1        $f2, 0x80($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1d68) {
            ctx->pc = 0x4A1DB8u;
            goto label_4a1db8;
        }
    }
    ctx->pc = 0x4A1D70u;
    // 0x4a1d70: 0xc5c00084  lwc1        $f0, 0x84($t6)
    ctx->pc = 0x4a1d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1d74: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x4a1d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x4a1d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a1d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a1d7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a1d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a1d80: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4a1d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4a1d84: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x4a1d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x4a1d88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4a1d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4a1d8c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4a1d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4a1d90: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x4a1d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x4a1d94: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x4a1d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4a1d98: 0xc5c10080  lwc1        $f1, 0x80($t6)
    ctx->pc = 0x4a1d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a1d9c: 0xc5c00084  lwc1        $f0, 0x84($t6)
    ctx->pc = 0x4a1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1da0: 0xa3828780  sb          $v0, -0x7880($gp)
    ctx->pc = 0x4a1da0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936448), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a1da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a1da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4a1da8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4a1da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4a1dac: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x4a1dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x4a1db0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1DB0u;
        // 0x4a1db4: 0xe5200008  swc1        $f0, 0x8($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1DB8u;
label_4a1db8:
    // 0x4a1db8: 0x46042040  add.s       $f1, $f4, $f4
    ctx->pc = 0x4a1db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x4a1dbc: 0xc5c00084  lwc1        $f0, 0x84($t6)
    ctx->pc = 0x4a1dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1dc0: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x4a1dc0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x4a1dc4: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4a1dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4a1dc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a1dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a1dcc: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x4a1dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x4a1dd0: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x4a1dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x4a1dd4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4a1dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4a1dd8: 0xa3828780  sb          $v0, -0x7880($gp)
    ctx->pc = 0x4a1dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936448), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a1ddc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a1ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4a1de0: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x4a1de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x4a1de4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1DE4u;
        // 0x4a1de8: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1DECu;
    // 0x4a1dec: 0x0  nop
    ctx->pc = 0x4a1decu;
    // NOP
    ctx->pc = 0x4a1df0u;
}
