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

// Function: sub_001A29C0
// Address: 0x1a29c0 - 0x1a2f68
void sub_001A29C0_0x1a29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A29C0_0x1a29c0");
#endif

    ctx->pc = 0x1a29c0u;

    // 0x1a29c0: 0x3c190051  lui         $t9, 0x51
    ctx->pc = 0x1a29c0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)81 << 16));
    // 0x1a29c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a29c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a29c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a29cc: 0x2738d050  addiu       $t8, $t9, -0x2FB0
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 4294955088));
    // 0x1a29d0: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1a29d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x1a29d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a29d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a29d8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a29d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a29dc: 0x27020020  addiu       $v0, $t8, 0x20
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x1a29e0: 0x27030030  addiu       $v1, $t8, 0x30
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
    // 0x1a29e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a29e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D07Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D07Cu, _value); } while (0); }
    // 0x1a29e8: 0x27050040  addiu       $a1, $t8, 0x40
    ctx->pc = 0x1a29e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x1a29ec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1a29ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D08Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D08Cu, _value); } while (0); }
    // 0x1a29f0: 0x27060050  addiu       $a2, $t8, 0x50
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
    // 0x1a29f4: 0xe7060040  swc1        $f6, 0x40($t8)
    ctx->pc = 0x1a29f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D090u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D090u, _value); } while (0); }
    // 0x1a29f8: 0x27070060  addiu       $a3, $t8, 0x60
    ctx->pc = 0x1a29f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x1a29fc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1a29fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D09Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D09Cu, _value); } while (0); }
    // 0x1a2a00: 0x27080080  addiu       $t0, $t8, 0x80
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x1a2a04: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1a2a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1a2a08: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2a0c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2a10: 0x240e0190  addiu       $t6, $zero, 0x190
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1a2a14: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1a2a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0ACu, _value); } while (0); }
    // 0x1a2a18: 0x270c00a0  addiu       $t4, $t8, 0xA0
    ctx->pc = 0x1a2a18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 160));
    // 0x1a2a1c: 0xe7040060  swc1        $f4, 0x60($t8)
    ctx->pc = 0x1a2a1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0B0u, _value); } while (0); }
    // 0x1a2a20: 0x270900e0  addiu       $t1, $t8, 0xE0
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 224));
    // 0x1a2a24: 0x3c013f5a  lui         $at, 0x3F5A
    ctx->pc = 0x1a2a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16218 << 16));
    // 0x1a2a28: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1a2a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1a2a2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a2a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2a30: 0x270a00b0  addiu       $t2, $t8, 0xB0
    ctx->pc = 0x1a2a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 176));
    // 0x1a2a34: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1a2a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0BCu, _value); } while (0); }
    // 0x1a2a38: 0x270b00c0  addiu       $t3, $t8, 0xC0
    ctx->pc = 0x1a2a38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 192));
    // 0x1a2a3c: 0xe7050080  swc1        $f5, 0x80($t8)
    ctx->pc = 0x1a2a3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0D0u, _value); } while (0); }
    // 0x1a2a40: 0x270d00d0  addiu       $t5, $t8, 0xD0
    ctx->pc = 0x1a2a40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 208));
    // 0x1a2a44: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1a2a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1a2a48: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2a4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2a50: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1a2a50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x1a2a54: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x1a2a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
    // 0x1a2a58: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1a2a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1a2a5c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a2a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a2a60: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1a2a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0DCu, _value); } while (0); }
    // 0x1a2a64: 0xe7020090  swc1        $f2, 0x90($t8)
    ctx->pc = 0x1a2a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0E0u, _value); } while (0); }
    // 0x1a2a68: 0xe70700a0  swc1        $f7, 0xA0($t8)
    ctx->pc = 0x1a2a68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0F0u, _value); } while (0); }
    // 0x1a2a6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a2a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2a70: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x1a2a74: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1a2a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1a2a78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2a7c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a2a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a2a80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a2a80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a2a84: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1a2a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a2a88: 0xe722d050  swc1        $f2, -0x2FB0($t9)
    ctx->pc = 0x1a2a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D050u, _value); } while (0); }
    // 0x1a2a8c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1a2a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1a2a90: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a2a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a2a94: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1a2a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1a2a98: 0xe7020010  swc1        $f2, 0x10($t8)
    ctx->pc = 0x1a2a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D060u, _value); } while (0); }
    // 0x1a2a9c: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x1a2a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D054u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D054u, _value); } while (0); }
    // 0x1a2aa0: 0xe7030008  swc1        $f3, 0x8($t8)
    ctx->pc = 0x1a2aa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D058u, _value); } while (0); }
    // 0x1a2aa4: 0xe700000c  swc1        $f0, 0xC($t8)
    ctx->pc = 0x1a2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D05Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D05Cu, _value); } while (0); }
    // 0x1a2aa8: 0xe70e0020  swc1        $f14, 0x20($t8)
    ctx->pc = 0x1a2aa8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D070u, _value); } while (0); }
    // 0x1a2aac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a2aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a2ab0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a2ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a2ab4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1a2ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1a2ab8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D074u, _value); } while (0); }
    // 0x1a2abc: 0xe4480008  swc1        $f8, 0x8($v0)
    ctx->pc = 0x1a2abcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D078u, _value); } while (0); }
    // 0x1a2ac0: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1a2ac4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a2ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a2ac8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a2ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a2acc: 0xe70a0030  swc1        $f10, 0x30($t8)
    ctx->pc = 0x1a2accu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D080u, _value); } while (0); }
    // 0x1a2ad0: 0xe4690004  swc1        $f9, 0x4($v1)
    ctx->pc = 0x1a2ad0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D084u, _value); } while (0); }
    // 0x1a2ad4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1a2ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D088u, _value); } while (0); }
    // 0x1a2ad8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1a2adc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2ae0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1a2ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1a2ae4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1a2ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D094u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D094u, _value); } while (0); }
    // 0x1a2ae8: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x1a2ae8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D098u, _value); } while (0); }
    // 0x1a2aec: 0xe70b0050  swc1        $f11, 0x50($t8)
    ctx->pc = 0x1a2aecu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0A0u, _value); } while (0); }
    // 0x1a2af0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1a2af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0A4u, _value); } while (0); }
    // 0x1a2af4: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x1a2af4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0A8u, _value); } while (0); }
    // 0x1a2af8: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1a2af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1a2afc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2b00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a2b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2b04: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1a2b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0B4u, _value); } while (0); }
    // 0x1a2b08: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x1a2b08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0B8u, _value); } while (0); }
    // 0x1a2b0c: 0xe70c0070  swc1        $f12, 0x70($t8)
    ctx->pc = 0x1a2b0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0C0u, _value); } while (0); }
    // 0x1a2b10: 0xaf0e0074  sw          $t6, 0x74($t8)
    ctx->pc = 0x1a2b10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x50D0C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0C4u, _value); } while (0);
    // 0x1a2b14: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x1a2b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0D4u, _value); } while (0); }
    // 0x1a2b18: 0xe5030008  swc1        $f3, 0x8($t0)
    ctx->pc = 0x1a2b18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0D8u, _value); } while (0); }
    // 0x1a2b1c: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x1a2b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0F4u, _value); } while (0); }
    // 0x1a2b20: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1a2b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D13Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D13Cu, _value); } while (0); }
    // 0x1a2b24: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x1a2b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0FCu, _value); } while (0); }
    // 0x1a2b28: 0xe70a00b0  swc1        $f10, 0xB0($t8)
    ctx->pc = 0x1a2b28u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D100u, _value); } while (0); }
    // 0x1a2b2c: 0xe5490004  swc1        $f9, 0x4($t2)
    ctx->pc = 0x1a2b2cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D104u, _value); } while (0); }
    // 0x1a2b30: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x1a2b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D10Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D10Cu, _value); } while (0); }
    // 0x1a2b34: 0xe5680008  swc1        $f8, 0x8($t3)
    ctx->pc = 0x1a2b34u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D118u, _value); } while (0); }
    // 0x1a2b38: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1a2b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D11Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D11Cu, _value); } while (0); }
    // 0x1a2b3c: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x1a2b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x1a2b40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a2b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a2b44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2b48: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x1a2b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D12Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D12Cu, _value); } while (0); }
    // 0x1a2b4c: 0xe70200e0  swc1        $f2, 0xE0($t8)
    ctx->pc = 0x1a2b4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D130u, _value); } while (0); }
    // 0x1a2b50: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x1a2b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D134u, _value); } while (0); }
    // 0x1a2b54: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x1a2b54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D138u, _value); } while (0); }
    // 0x1a2b58: 0xaf0e00f4  sw          $t6, 0xF4($t8)
    ctx->pc = 0x1a2b58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x50D144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D144u, _value); } while (0);
    // 0x1a2b5c: 0xe5880008  swc1        $f8, 0x8($t4)
    ctx->pc = 0x1a2b5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D0F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D0F8u, _value); } while (0); }
    // 0x1a2b60: 0x8de3cdb4  lw          $v1, -0x324C($t7)
    ctx->pc = 0x1a2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1a2b64: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x1a2b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x1a2b68: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1a2b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1a2b6c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a2b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a2b70: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x1a2b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D108u, _value); } while (0); }
    // 0x1a2b74: 0xe70700c0  swc1        $f7, 0xC0($t8)
    ctx->pc = 0x1a2b74u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D110u, _value); } while (0); }
    // 0x1a2b78: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x1a2b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x1a2b7c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1a2b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1a2b80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a2b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2b84: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x1a2b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D114u, _value); } while (0); }
    // 0x1a2b88: 0xe70d00d0  swc1        $f13, 0xD0($t8)
    ctx->pc = 0x1a2b88u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D120u, _value); } while (0); }
    // 0x1a2b8c: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x1a2b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D124u, _value); } while (0); }
    // 0x1a2b90: 0xe5a30008  swc1        $f3, 0x8($t5)
    ctx->pc = 0x1a2b90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D128u, _value); } while (0); }
    // 0x1a2b94: 0xe70c00f0  swc1        $f12, 0xF0($t8)
    ctx->pc = 0x1a2b94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D140u, _value); } while (0); }
    // 0x1a2b98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2b9c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a2ba0: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1A2BA0u;
    {
        const bool branch_taken_0x1a2ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA0u;
        // 0x1a2ba4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba0) {
            ctx->pc = 0x1A2D5Cu;
            goto label_1a2d5c;
        }
    }
    ctx->pc = 0x1A2BA8u;
    // 0x1a2ba8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A2BA8u;
    {
        const bool branch_taken_0x1a2ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA8u;
        // 0x1a2bac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba8) {
            ctx->pc = 0x1A2C30u;
            goto label_1a2c30;
        }
    }
    ctx->pc = 0x1A2BB0u;
    // 0x1a2bb0: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1A2BB0u;
    {
        const bool branch_taken_0x1a2bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bb0) {
            ctx->pc = 0x1A2F60u;
            goto label_1a2f60;
        }
    }
    ctx->pc = 0x1A2BB8u;
    // 0x1a2bb8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a2bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a2bbc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2bc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2bc4: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x1a2bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
    // 0x1a2bc8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2bcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2bd0: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x1a2bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x1a2bd4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2bd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2bdc: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x1a2bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x1a2be0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1a2be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1a2be4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2be8: 0x3c013f6a  lui         $at, 0x3F6A
    ctx->pc = 0x1a2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16234 << 16));
    // 0x1a2bec: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1a2becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1a2bf0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a2bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2bf4: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x1a2bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x1a2bf8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1a2bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1a2bfc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a2bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a2c00: 0x3c013f8d  lui         $at, 0x3F8D
    ctx->pc = 0x1a2c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16269 << 16));
    // 0x1a2c04: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1a2c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1a2c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2c0c: 0xe721d050  swc1        $f1, -0x2FB0($t9)
    ctx->pc = 0x1a2c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294955088), bits); }
    // 0x1a2c10: 0xe70000e0  swc1        $f0, 0xE0($t8)
    ctx->pc = 0x1a2c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 224), bits); }
    // 0x1a2c14: 0xe7020020  swc1        $f2, 0x20($t8)
    ctx->pc = 0x1a2c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1a2c18: 0xe7030050  swc1        $f3, 0x50($t8)
    ctx->pc = 0x1a2c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 80), bits); }
    // 0x1a2c1c: 0xe7040060  swc1        $f4, 0x60($t8)
    ctx->pc = 0x1a2c1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1a2c20: 0xe7070080  swc1        $f7, 0x80($t8)
    ctx->pc = 0x1a2c20u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1a2c24: 0xe70500a0  swc1        $f5, 0xA0($t8)
    ctx->pc = 0x1a2c24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 160), bits); }
    // 0x1a2c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C28u;
        // 0x1a2c2c: 0xe70600d0  swc1        $f6, 0xD0($t8) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C30u;
label_1a2c30:
    // 0x1a2c30: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A2C30u;
    {
        const bool branch_taken_0x1a2c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c30) {
            ctx->pc = 0x1A2CD0u;
            goto label_1a2cd0;
        }
    }
    ctx->pc = 0x1A2C38u;
    // 0x1a2c38: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x1a2c3c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2c44: 0x3c01bde1  lui         $at, 0xBDE1
    ctx->pc = 0x1a2c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48609 << 16));
    // 0x1a2c48: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1a2c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1a2c4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2c50: 0x3c01bdae  lui         $at, 0xBDAE
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48558 << 16));
    // 0x1a2c54: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1a2c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1a2c58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2c5c: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1a2c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x1a2c60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2c64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2c68: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
    // 0x1a2c6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2c70: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a2c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2c74: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1a2c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x1a2c78: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2c7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a2c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a2c80: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x1a2c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
    // 0x1a2c84: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1a2c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1a2c88: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a2c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a2c8c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1a2c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1a2c90: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1a2c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1a2c94: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1a2c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1a2c98: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1a2c9c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a2c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a2ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2ca4: 0xe721d050  swc1        $f1, -0x2FB0($t9)
    ctx->pc = 0x1a2ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294955088), bits); }
    // 0x1a2ca8: 0xe70000e0  swc1        $f0, 0xE0($t8)
    ctx->pc = 0x1a2ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 224), bits); }
    // 0x1a2cac: 0xe7020020  swc1        $f2, 0x20($t8)
    ctx->pc = 0x1a2cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1a2cb0: 0xe7030040  swc1        $f3, 0x40($t8)
    ctx->pc = 0x1a2cb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 64), bits); }
    // 0x1a2cb4: 0xe7040050  swc1        $f4, 0x50($t8)
    ctx->pc = 0x1a2cb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 80), bits); }
    // 0x1a2cb8: 0xe70b0060  swc1        $f11, 0x60($t8)
    ctx->pc = 0x1a2cb8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1a2cbc: 0xe7050080  swc1        $f5, 0x80($t8)
    ctx->pc = 0x1a2cbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1a2cc0: 0xe70600a0  swc1        $f6, 0xA0($t8)
    ctx->pc = 0x1a2cc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 160), bits); }
    // 0x1a2cc4: 0xe70700c0  swc1        $f7, 0xC0($t8)
    ctx->pc = 0x1a2cc4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 192), bits); }
    // 0x1a2cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CC8u;
        // 0x1a2ccc: 0xe70800d0  swc1        $f8, 0xD0($t8) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CD0u;
label_1a2cd0:
    // 0x1a2cd0: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1a2cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1a2cd4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a2cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a2cd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2cdc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a2cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1a2ce0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2ce4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2ce8: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
    // 0x1a2cec: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a2cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a2cf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2cf4: 0x3c013e57  lui         $at, 0x3E57
    ctx->pc = 0x1a2cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15959 << 16));
    // 0x1a2cf8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1a2cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1a2cfc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2d00: 0x3c013f62  lui         $at, 0x3F62
    ctx->pc = 0x1a2d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16226 << 16));
    // 0x1a2d04: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1a2d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1a2d08: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a2d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2d0c: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x1a2d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x1a2d10: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1a2d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1a2d14: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a2d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a2d18: 0x3c013f58  lui         $at, 0x3F58
    ctx->pc = 0x1a2d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16216 << 16));
    // 0x1a2d1c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a2d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a2d20: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a2d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a2d24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2d28: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1a2d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1a2d2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2d30: 0xe721d050  swc1        $f1, -0x2FB0($t9)
    ctx->pc = 0x1a2d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294955088), bits); }
    // 0x1a2d34: 0xe70000e0  swc1        $f0, 0xE0($t8)
    ctx->pc = 0x1a2d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 224), bits); }
    // 0x1a2d38: 0xe7020020  swc1        $f2, 0x20($t8)
    ctx->pc = 0x1a2d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1a2d3c: 0xe7030040  swc1        $f3, 0x40($t8)
    ctx->pc = 0x1a2d3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 64), bits); }
    // 0x1a2d40: 0xe70e0050  swc1        $f14, 0x50($t8)
    ctx->pc = 0x1a2d40u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 80), bits); }
    // 0x1a2d44: 0xe7040060  swc1        $f4, 0x60($t8)
    ctx->pc = 0x1a2d44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1a2d48: 0xe7050080  swc1        $f5, 0x80($t8)
    ctx->pc = 0x1a2d48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1a2d4c: 0xe70d00a0  swc1        $f13, 0xA0($t8)
    ctx->pc = 0x1a2d4cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 160), bits); }
    // 0x1a2d50: 0xe70600c0  swc1        $f6, 0xC0($t8)
    ctx->pc = 0x1a2d50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 192), bits); }
    // 0x1a2d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0xe70700d0  swc1        $f7, 0xD0($t8) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D5Cu;
label_1a2d5c:
    // 0x1a2d5c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a2d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a2d60: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A2D60u;
    {
        const bool branch_taken_0x1a2d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D60u;
        // 0x1a2d64: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d60) {
            ctx->pc = 0x1A2E6Cu;
            goto label_1a2e6c;
        }
    }
    ctx->pc = 0x1A2D68u;
    // 0x1a2d68: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1a2d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1a2d6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a2d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a2d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2d74: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2d78: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1a2d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1a2d7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a2d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a2d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2d84: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2d88: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1a2d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1a2d8c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a2d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a2d90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2d94: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a2d98: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a2d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1a2d9c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2da0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a2da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a2da4: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2da8: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1a2da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x1a2dac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2db0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a2db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a2db4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2db8: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x1a2db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    // 0x1a2dbc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a2dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a2dc0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1a2dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1a2dc4: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2dc8: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x1a2dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
    // 0x1a2dcc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2dd0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a2dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2dd4: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x1a2dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1a2dd8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1a2dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1a2ddc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a2ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a2de0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a2de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a2de4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2de8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1a2de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1a2dec: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1a2decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1a2df0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2df4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1a2df8: 0x3c013f8b  lui         $at, 0x3F8B
    ctx->pc = 0x1a2df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16267 << 16));
    // 0x1a2dfc: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1a2dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1a2e00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2e04: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x1a2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1a2e08: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x1a2e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
    // 0x1a2e0c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1a2e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1a2e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2e14: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1a2e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1a2e18: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2e1c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2e20: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2e24: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x1a2e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x1a2e28: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2e2c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1a2e30: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x1a2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1a2e34: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x1a2e34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1a2e38: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2e3c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2e40: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2e44: 0xe4490034  swc1        $f9, 0x34($v0)
    ctx->pc = 0x1a2e44u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1a2e48: 0xe727d050  swc1        $f7, -0x2FB0($t9)
    ctx->pc = 0x1a2e48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294955088), bits); }
    // 0x1a2e4c: 0xe70100e0  swc1        $f1, 0xE0($t8)
    ctx->pc = 0x1a2e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 224), bits); }
    // 0x1a2e50: 0xe7080020  swc1        $f8, 0x20($t8)
    ctx->pc = 0x1a2e50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1a2e54: 0xe7050050  swc1        $f5, 0x50($t8)
    ctx->pc = 0x1a2e54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 80), bits); }
    // 0x1a2e58: 0xe70c0060  swc1        $f12, 0x60($t8)
    ctx->pc = 0x1a2e58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1a2e5c: 0xe70600d0  swc1        $f6, 0xD0($t8)
    ctx->pc = 0x1a2e5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
    // 0x1a2e60: 0xe70300a0  swc1        $f3, 0xA0($t8)
    ctx->pc = 0x1a2e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 160), bits); }
    // 0x1a2e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E64u;
        // 0x1a2e68: 0xe7020080  swc1        $f2, 0x80($t8) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E6Cu;
label_1a2e6c:
    // 0x1a2e6c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1a2e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1a2e70: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2e78: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2e7c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1a2e80: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a2e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a2e84: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a2e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a2e88: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2e8c: 0x3c013c8b  lui         $at, 0x3C8B
    ctx->pc = 0x1a2e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15499 << 16));
    // 0x1a2e90: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x1a2e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x1a2e94: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1a2e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1a2e98: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1a2e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1a2e9c: 0x3c013dd7  lui         $at, 0x3DD7
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15831 << 16));
    // 0x1a2ea0: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1a2ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1a2ea4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a2ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a2ea8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2eac: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1a2eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1a2eb0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1a2eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1a2eb4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a2eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a2eb8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2ebc: 0x3c013ce5  lui         $at, 0x3CE5
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15589 << 16));
    // 0x1a2ec0: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1a2ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1a2ec4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1a2ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1a2ec8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2ecc: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1a2eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1a2ed0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a2ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1a2ed4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a2ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2ed8: 0xe44b0010  swc1        $f11, 0x10($v0)
    ctx->pc = 0x1a2ed8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1a2edc: 0x3c013e51  lui         $at, 0x3E51
    ctx->pc = 0x1a2edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15953 << 16));
    // 0x1a2ee0: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1a2ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1a2ee4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a2ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2ee8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2eec: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1a2eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1a2ef0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a2ef4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2ef8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2efc: 0x3c013f53  lui         $at, 0x3F53
    ctx->pc = 0x1a2efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16211 << 16));
    // 0x1a2f00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a2f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a2f04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2f08: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2f0c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1a2f10: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a2f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a2f14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2f18: 0xe4460030  swc1        $f6, 0x30($v0)
    ctx->pc = 0x1a2f18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1a2f1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2f20: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1a2f20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1a2f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2f28: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2f2c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a2f30: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1a2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1a2f34: 0xe44a0034  swc1        $f10, 0x34($v0)
    ctx->pc = 0x1a2f34u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1a2f38: 0xe727d050  swc1        $f7, -0x2FB0($t9)
    ctx->pc = 0x1a2f38u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294955088), bits); }
    // 0x1a2f3c: 0xe70000e0  swc1        $f0, 0xE0($t8)
    ctx->pc = 0x1a2f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 224), bits); }
    // 0x1a2f40: 0xe7080020  swc1        $f8, 0x20($t8)
    ctx->pc = 0x1a2f40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1a2f44: 0xe7050050  swc1        $f5, 0x50($t8)
    ctx->pc = 0x1a2f44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 80), bits); }
    // 0x1a2f48: 0xe7040060  swc1        $f4, 0x60($t8)
    ctx->pc = 0x1a2f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1a2f4c: 0xe70300d0  swc1        $f3, 0xD0($t8)
    ctx->pc = 0x1a2f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
    // 0x1a2f50: 0xe70200a0  swc1        $f2, 0xA0($t8)
    ctx->pc = 0x1a2f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 160), bits); }
    // 0x1a2f54: 0xe7010080  swc1        $f1, 0x80($t8)
    ctx->pc = 0x1a2f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1a2f58: 0xe70900a8  swc1        $f9, 0xA8($t8)
    ctx->pc = 0x1a2f58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 168), bits); }
    // 0x1a2f5c: 0xe7090028  swc1        $f9, 0x28($t8)
    ctx->pc = 0x1a2f5cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 40), bits); }
label_1a2f60:
    // 0x1a2f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2F68u;
}
