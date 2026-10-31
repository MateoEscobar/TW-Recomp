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

// Function: sub_001BF090
// Address: 0x1bf090 - 0x1bf7e0
void sub_001BF090_0x1bf090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF090_0x1bf090");
#endif

    ctx->pc = 0x1bf090u;

    // 0x1bf090: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bf090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1bf094: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1bf098: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1bf098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1bf09c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bf09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bf0a0: 0xc4a3e8f4  lwc1        $f3, -0x170C($a1)
    ctx->pc = 0x1bf0a0u;
    { uint32_t bits = FAST_READ32(0x50E8F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bf0a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf0a8: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1bf0ac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1bf0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1bf0b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bf0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bf0b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bf0b8: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1bf0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1bf0bc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf0c4: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x1bf0c4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1bf0c8: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x1bf0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x1bf0cc: 0x46051940  add.s       $f5, $f3, $f5
    ctx->pc = 0x1bf0ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1bf0d0: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x1bf0d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1bf0d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1bf0d8: 0x26582e50  addiu       $t8, $s2, 0x2E50
    ctx->pc = 0x1bf0d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 11856));
    // 0x1bf0dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf0e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf0e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bf0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1bf0e8: 0xc442e8f8  lwc1        $f2, -0x1708($v0)
    ctx->pc = 0x1bf0e8u;
    { uint32_t bits = FAST_READ32(0x50E8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf0ec: 0xc467e8fc  lwc1        $f7, -0x1704($v1)
    ctx->pc = 0x1bf0ecu;
    { uint32_t bits = FAST_READ32(0x50E8FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1bf0f0: 0x27080010  addiu       $t0, $t8, 0x10
    ctx->pc = 0x1bf0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1bf0f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bf0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bf0f8: 0x27090020  addiu       $t1, $t8, 0x20
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x1bf0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf100: 0x27050030  addiu       $a1, $t8, 0x30
    ctx->pc = 0x1bf100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
    // 0x1bf104: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1bf104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E6Cu, _value); } while (0); }
    // 0x1bf108: 0x27020040  addiu       $v0, $t8, 0x40
    ctx->pc = 0x1bf108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x1bf10c: 0xe7060020  swc1        $f6, 0x20($t8)
    ctx->pc = 0x1bf10cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E70u, _value); } while (0); }
    // 0x1bf110: 0x27030060  addiu       $v1, $t8, 0x60
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x1bf114: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1bf114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E7Cu, _value); } while (0); }
    // 0x1bf118: 0x24100140  addiu       $s0, $zero, 0x140
    ctx->pc = 0x1bf118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bf11c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1bf11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E8Cu, _value); } while (0); }
    // 0x1bf120: 0x27060080  addiu       $a2, $t8, 0x80
    ctx->pc = 0x1bf120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x1bf124: 0xe7050040  swc1        $f5, 0x40($t8)
    ctx->pc = 0x1bf124u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E90u, _value); } while (0); }
    // 0x1bf128: 0x27070110  addiu       $a3, $t8, 0x110
    ctx->pc = 0x1bf128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 272));
    // 0x1bf12c: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1bf12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x1bf130: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1bf130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1bf134: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bf134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1bf138: 0x270e0090  addiu       $t6, $t8, 0x90
    ctx->pc = 0x1bf138u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 144));
    // 0x1bf13c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1bf13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E9Cu, _value); } while (0); }
    // 0x1bf140: 0x270f00a0  addiu       $t7, $t8, 0xA0
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 160));
    // 0x1bf144: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1bf144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EBCu, _value); } while (0); }
    // 0x1bf148: 0x460a1280  add.s       $f10, $f2, $f10
    ctx->pc = 0x1bf148u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x1bf14c: 0x3c013f18  lui         $at, 0x3F18
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16152 << 16));
    // 0x1bf150: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bf154: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bf154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1bf158: 0x270b00b0  addiu       $t3, $t8, 0xB0
    ctx->pc = 0x1bf158u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 176));
    // 0x1bf15c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bf15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf160: 0x270c00c0  addiu       $t4, $t8, 0xC0
    ctx->pc = 0x1bf160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 192));
    // 0x1bf164: 0xe7030080  swc1        $f3, 0x80($t8)
    ctx->pc = 0x1bf164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622ED0u, _value); } while (0); }
    // 0x1bf168: 0x460b12c0  add.s       $f11, $f2, $f11
    ctx->pc = 0x1bf168u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x1bf16c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bf16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bf170: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf174: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bf174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1bf178: 0x270d00d0  addiu       $t5, $t8, 0xD0
    ctx->pc = 0x1bf178u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 208));
    // 0x1bf17c: 0xe6462e50  swc1        $f6, 0x2E50($s2)
    ctx->pc = 0x1bf17cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E50u, _value); } while (0); }
    // 0x1bf180: 0x270a00f0  addiu       $t2, $t8, 0xF0
    ctx->pc = 0x1bf180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 240));
    // 0x1bf184: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x1bf184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
    // 0x1bf188: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1bf188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1bf18c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bf18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1bf190: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1bf194: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x1bf194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E54u, _value); } while (0); }
    // 0x1bf198: 0xe70a0008  swc1        $f10, 0x8($t8)
    ctx->pc = 0x1bf198u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E58u, _value); } while (0); }
    // 0x1bf19c: 0xe700000c  swc1        $f0, 0xC($t8)
    ctx->pc = 0x1bf19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E5Cu, _value); } while (0); }
    // 0x1bf1a0: 0xe7090010  swc1        $f9, 0x10($t8)
    ctx->pc = 0x1bf1a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E60u, _value); } while (0); }
    // 0x1bf1a4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bf1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1bf1a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf1a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf1ac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bf1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1bf1b0: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x1bf1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x1bf1b4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1bf1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1bf1b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf1bc: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1bf1c0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bf1c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bf1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bf1c8: 0x46081200  add.s       $f8, $f2, $f8
    ctx->pc = 0x1bf1c8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x1bf1cc: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1bf1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x1bf1d0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1bf1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1bf1d4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bf1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bf1d8: 0x460c3b00  add.s       $f12, $f7, $f12
    ctx->pc = 0x1bf1d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x1bf1dc: 0xe50f0004  swc1        $f15, 0x4($t0)
    ctx->pc = 0x1bf1dcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E64u, _value); } while (0); }
    // 0x1bf1e0: 0x460d3b40  add.s       $f13, $f7, $f13
    ctx->pc = 0x1bf1e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[7], ctx->f[13]);
    // 0x1bf1e4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x1bf1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E68u, _value); } while (0); }
    // 0x1bf1e8: 0x460e3b80  add.s       $f14, $f7, $f14
    ctx->pc = 0x1bf1e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x1bf1ec: 0x3c013f6a  lui         $at, 0x3F6A
    ctx->pc = 0x1bf1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16234 << 16));
    // 0x1bf1f0: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1bf1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1bf1f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf1f8: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x1bf1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E74u, _value); } while (0); }
    // 0x1bf1fc: 0xe52b0008  swc1        $f11, 0x8($t1)
    ctx->pc = 0x1bf1fcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E78u, _value); } while (0); }
    // 0x1bf200: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x1bf200u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x1bf204: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1bf204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1bf208: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf20c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1bf20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1bf210: 0xe7090030  swc1        $f9, 0x30($t8)
    ctx->pc = 0x1bf210u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E80u, _value); } while (0); }
    // 0x1bf214: 0xe4b10004  swc1        $f17, 0x4($a1)
    ctx->pc = 0x1bf214u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E84u, _value); } while (0); }
    // 0x1bf218: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1bf218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E88u, _value); } while (0); }
    // 0x1bf21c: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1bf21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x1bf220: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bf220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1bf224: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf228: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1bf228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E94u, _value); } while (0); }
    // 0x1bf22c: 0xe4480008  swc1        $f8, 0x8($v0)
    ctx->pc = 0x1bf22cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622E98u, _value); } while (0); }
    // 0x1bf230: 0xe7040050  swc1        $f4, 0x50($t8)
    ctx->pc = 0x1bf230u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EA0u, _value); } while (0); }
    // 0x1bf234: 0xaf100054  sw          $s0, 0x54($t8)
    ctx->pc = 0x1bf234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x622EA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EA4u, _value); } while (0);
    // 0x1bf238: 0xe70c0060  swc1        $f12, 0x60($t8)
    ctx->pc = 0x1bf238u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EB0u, _value); } while (0); }
    // 0x1bf23c: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x1bf240: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf244: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1bf244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1bf248: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1bf248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1bf24c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1bf24cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1bf250: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1bf250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1bf254: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1bf254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EB4u, _value); } while (0); }
    // 0x1bf258: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x1bf258u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EB8u, _value); } while (0); }
    // 0x1bf25c: 0x46131080  add.s       $f2, $f2, $f19
    ctx->pc = 0x1bf25cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[19]);
    // 0x1bf260: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x1bf264: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bf264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bf268: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1bf268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1bf26c: 0xe7120070  swc1        $f18, 0x70($t8)
    ctx->pc = 0x1bf26cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EC0u, _value); } while (0); }
    // 0x1bf270: 0xe7100074  swc1        $f16, 0x74($t8)
    ctx->pc = 0x1bf270u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EC4u, _value); } while (0); }
    // 0x1bf274: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1bf274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622ED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622ED4u, _value); } while (0); }
    // 0x1bf278: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x1bf278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622ED8u, _value); } while (0); }
    // 0x1bf27c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1bf27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F6Cu, _value); } while (0); }
    // 0x1bf280: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1bf280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EDCu, _value); } while (0); }
    // 0x1bf284: 0xe5ca0008  swc1        $f10, 0x8($t6)
    ctx->pc = 0x1bf284u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EE8u, _value); } while (0); }
    // 0x1bf288: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x1bf288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EECu, _value); } while (0); }
    // 0x1bf28c: 0xe5ef0004  swc1        $f15, 0x4($t7)
    ctx->pc = 0x1bf28cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EF4u, _value); } while (0); }
    // 0x1bf290: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x1bf290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EFCu, _value); } while (0); }
    // 0x1bf294: 0xe70d00b0  swc1        $f13, 0xB0($t8)
    ctx->pc = 0x1bf294u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F00u, _value); } while (0); }
    // 0x1bf298: 0xe56b0008  swc1        $f11, 0x8($t3)
    ctx->pc = 0x1bf298u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F08u, _value); } while (0); }
    // 0x1bf29c: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1bf29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F0Cu, _value); } while (0); }
    // 0x1bf2a0: 0xe70900c0  swc1        $f9, 0xC0($t8)
    ctx->pc = 0x1bf2a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F10u, _value); } while (0); }
    // 0x1bf2a4: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x1bf2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F1Cu, _value); } while (0); }
    // 0x1bf2a8: 0xe70700d0  swc1        $f7, 0xD0($t8)
    ctx->pc = 0x1bf2a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F20u, _value); } while (0); }
    // 0x1bf2ac: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x1bf2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F2Cu, _value); } while (0); }
    // 0x1bf2b0: 0xe70400e0  swc1        $f4, 0xE0($t8)
    ctx->pc = 0x1bf2b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F30u, _value); } while (0); }
    // 0x1bf2b4: 0xaf1000e4  sw          $s0, 0xE4($t8)
    ctx->pc = 0x1bf2b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x622F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F34u, _value); } while (0);
    // 0x1bf2b8: 0xe70c00f0  swc1        $f12, 0xF0($t8)
    ctx->pc = 0x1bf2b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F40u, _value); } while (0); }
    // 0x1bf2bc: 0xe5480008  swc1        $f8, 0x8($t2)
    ctx->pc = 0x1bf2bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F48u, _value); } while (0); }
    // 0x1bf2c0: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x1bf2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F4Cu, _value); } while (0); }
    // 0x1bf2c4: 0xe7100104  swc1        $f16, 0x104($t8)
    ctx->pc = 0x1bf2c4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F54u, _value); } while (0); }
    // 0x1bf2c8: 0xe70e0110  swc1        $f14, 0x110($t8)
    ctx->pc = 0x1bf2c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F60u, _value); } while (0); }
    // 0x1bf2cc: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1bf2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F64u, _value); } while (0); }
    // 0x1bf2d0: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x1bf2d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F68u, _value); } while (0); }
    // 0x1bf2d4: 0xe70d0090  swc1        $f13, 0x90($t8)
    ctx->pc = 0x1bf2d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EE0u, _value); } while (0); }
    // 0x1bf2d8: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x1bf2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EE4u, _value); } while (0); }
    // 0x1bf2dc: 0xe70900a0  swc1        $f9, 0xA0($t8)
    ctx->pc = 0x1bf2dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EF0u, _value); } while (0); }
    // 0x1bf2e0: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x1bf2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622EF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622EF8u, _value); } while (0); }
    // 0x1bf2e4: 0x8e23cdb4  lw          $v1, -0x324C($s1)
    ctx->pc = 0x1bf2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1bf2e8: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x1bf2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F04u, _value); } while (0); }
    // 0x1bf2ec: 0xe5910004  swc1        $f17, 0x4($t4)
    ctx->pc = 0x1bf2ecu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F14u, _value); } while (0); }
    // 0x1bf2f0: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x1bf2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F18u, _value); } while (0); }
    // 0x1bf2f4: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x1bf2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F24u, _value); } while (0); }
    // 0x1bf2f8: 0xe5a80008  swc1        $f8, 0x8($t5)
    ctx->pc = 0x1bf2f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F28u, _value); } while (0); }
    // 0x1bf2fc: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x1bf2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F44u, _value); } while (0); }
    // 0x1bf300: 0xe7120100  swc1        $f18, 0x100($t8)
    ctx->pc = 0x1bf300u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F50u, _value); } while (0); }
    // 0x1bf304: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bf304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf308: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1bf308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bf30c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1BF30Cu;
    {
        const bool branch_taken_0x1bf30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF30Cu;
        // 0x1bf310: 0x80c82d  daddu       $t9, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf30c) {
            ctx->pc = 0x1BF4E0u;
            goto label_1bf4e0;
        }
    }
    ctx->pc = 0x1BF314u;
    // 0x1bf314: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1bf314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1bf318: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BF318u;
    {
        const bool branch_taken_0x1bf318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF318u;
        // 0x1bf31c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf318) {
            ctx->pc = 0x1BF3ACu;
            goto label_1bf3ac;
        }
    }
    ctx->pc = 0x1BF320u;
    // 0x1bf320: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x1BF320u;
    {
        const bool branch_taken_0x1bf320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF320u;
        // 0x1bf324: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf320) {
            ctx->pc = 0x1BF7CCu;
            goto label_1bf7cc;
        }
    }
    ctx->pc = 0x1BF328u;
    // 0x1bf328: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x1bf32c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1bf32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1bf330: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bf330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bf334: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1bf338: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1bf338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1bf33c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bf33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bf340: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
    // 0x1bf344: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf34c: 0x3c01bdae  lui         $at, 0xBDAE
    ctx->pc = 0x1bf34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48558 << 16));
    // 0x1bf350: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1bf350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1bf354: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf358: 0x3c013f84  lui         $at, 0x3F84
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16260 << 16));
    // 0x1bf35c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1bf35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1bf360: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf364: 0x3c013f4a  lui         $at, 0x3F4A
    ctx->pc = 0x1bf364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16202 << 16));
    // 0x1bf368: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1bf368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1bf36c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf370: 0x3c013f7b  lui         $at, 0x3F7B
    ctx->pc = 0x1bf370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16251 << 16));
    // 0x1bf374: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x1bf374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x1bf378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf37c: 0xe7060118  swc1        $f6, 0x118($t8)
    ctx->pc = 0x1bf37cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 280), bits); }
    // 0x1bf380: 0xe6512e50  swc1        $f17, 0x2E50($s2)
    ctx->pc = 0x1bf380u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11856), bits); }
    // 0x1bf384: 0xe440e91c  swc1        $f0, -0x16E4($v0)
    ctx->pc = 0x1bf384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961436), bits); }
    // 0x1bf388: 0xe7110020  swc1        $f17, 0x20($t8)
    ctx->pc = 0x1bf388u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1bf38c: 0xe7010040  swc1        $f1, 0x40($t8)
    ctx->pc = 0x1bf38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 64), bits); }
    // 0x1bf390: 0xe7020080  swc1        $f2, 0x80($t8)
    ctx->pc = 0x1bf390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1bf394: 0xe70500b0  swc1        $f5, 0xB0($t8)
    ctx->pc = 0x1bf394u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 176), bits); }
    // 0x1bf398: 0xe70300d0  swc1        $f3, 0xD0($t8)
    ctx->pc = 0x1bf398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
    // 0x1bf39c: 0xe7040110  swc1        $f4, 0x110($t8)
    ctx->pc = 0x1bf39cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 272), bits); }
    // 0x1bf3a0: 0xe7060088  swc1        $f6, 0x88($t8)
    ctx->pc = 0x1bf3a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 136), bits); }
    // 0x1bf3a4: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x1BF3A4u;
    {
        const bool branch_taken_0x1bf3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3A4u;
        // 0x1bf3a8: 0xe7050090  swc1        $f5, 0x90($t8) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3a4) {
            ctx->pc = 0x1BF7CCu;
            goto label_1bf7cc;
        }
    }
    ctx->pc = 0x1BF3ACu;
label_1bf3ac:
    // 0x1bf3ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF3ACu;
    {
        const bool branch_taken_0x1bf3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3ACu;
        // 0x1bf3b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3ac) {
            ctx->pc = 0x1BF450u;
            goto label_1bf450;
        }
    }
    ctx->pc = 0x1BF3B4u;
    // 0x1bf3b4: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x1bf3b8: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1bf3b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1bf3bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf3c0: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1bf3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x1bf3c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bf3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bf3c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf3cc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1bf3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1bf3d0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bf3d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bf3d4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bf3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bf3d8: 0x3c01bdb8  lui         $at, 0xBDB8
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48568 << 16));
    // 0x1bf3dc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bf3e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf3e4: 0x3c01bdd7  lui         $at, 0xBDD7
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48599 << 16));
    // 0x1bf3e8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1bf3e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1bf3ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf3f0: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x1bf3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
    // 0x1bf3f4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf3f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bf3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bf3fc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1bf3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1bf400: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1bf400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1bf404: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bf404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1bf408: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1bf40c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1bf40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1bf410: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bf410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1bf414: 0x3c013f8d  lui         $at, 0x3F8D
    ctx->pc = 0x1bf414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16269 << 16));
    // 0x1bf418: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1bf418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1bf41c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf420: 0xe7000110  swc1        $f0, 0x110($t8)
    ctx->pc = 0x1bf420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 272), bits); }
    // 0x1bf424: 0xe6422e50  swc1        $f2, 0x2E50($s2)
    ctx->pc = 0x1bf424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11856), bits); }
    // 0x1bf428: 0xe441e91c  swc1        $f1, -0x16E4($v0)
    ctx->pc = 0x1bf428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961436), bits); }
    // 0x1bf42c: 0xe7020020  swc1        $f2, 0x20($t8)
    ctx->pc = 0x1bf42cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1bf430: 0xe7030040  swc1        $f3, 0x40($t8)
    ctx->pc = 0x1bf430u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 64), bits); }
    // 0x1bf434: 0xe7040060  swc1        $f4, 0x60($t8)
    ctx->pc = 0x1bf434u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1bf438: 0xe7050080  swc1        $f5, 0x80($t8)
    ctx->pc = 0x1bf438u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1bf43c: 0xe70600b0  swc1        $f6, 0xB0($t8)
    ctx->pc = 0x1bf43cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 176), bits); }
    // 0x1bf440: 0xe70700d0  swc1        $f7, 0xD0($t8)
    ctx->pc = 0x1bf440u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
    // 0x1bf444: 0xe70800f0  swc1        $f8, 0xF0($t8)
    ctx->pc = 0x1bf444u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 240), bits); }
    // 0x1bf448: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1BF448u;
    {
        const bool branch_taken_0x1bf448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF448u;
        // 0x1bf44c: 0xe7060090  swc1        $f6, 0x90($t8) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf448) {
            ctx->pc = 0x1BF7CCu;
            goto label_1bf7cc;
        }
    }
    ctx->pc = 0x1BF450u;
label_1bf450:
    // 0x1bf450: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x1bf454: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1bf454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1bf458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf45c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1bf45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1bf460: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bf464: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf468: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1bf468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x1bf46c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1bf46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1bf470: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bf470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bf474: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1bf478: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bf478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bf47c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf480: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x1bf484: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bf484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bf488: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf48c: 0x3c013f6f  lui         $at, 0x3F6F
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16239 << 16));
    // 0x1bf490: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf494: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bf494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bf498: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1bf49c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1bf49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1bf4a0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bf4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1bf4a4: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x1bf4a8: 0x34216873  ori         $at, $at, 0x6873
    ctx->pc = 0x1bf4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26739);
    // 0x1bf4ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf4b0: 0xe7000110  swc1        $f0, 0x110($t8)
    ctx->pc = 0x1bf4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 272), bits); }
    // 0x1bf4b4: 0xe6422e50  swc1        $f2, 0x2E50($s2)
    ctx->pc = 0x1bf4b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11856), bits); }
    // 0x1bf4b8: 0xe441e91c  swc1        $f1, -0x16E4($v0)
    ctx->pc = 0x1bf4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961436), bits); }
    // 0x1bf4bc: 0xe7020020  swc1        $f2, 0x20($t8)
    ctx->pc = 0x1bf4bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1bf4c0: 0xe7030040  swc1        $f3, 0x40($t8)
    ctx->pc = 0x1bf4c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 64), bits); }
    // 0x1bf4c4: 0xe7110060  swc1        $f17, 0x60($t8)
    ctx->pc = 0x1bf4c4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1bf4c8: 0xe7040080  swc1        $f4, 0x80($t8)
    ctx->pc = 0x1bf4c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1bf4cc: 0xe70500b0  swc1        $f5, 0xB0($t8)
    ctx->pc = 0x1bf4ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 176), bits); }
    // 0x1bf4d0: 0xe70600d0  swc1        $f6, 0xD0($t8)
    ctx->pc = 0x1bf4d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
    // 0x1bf4d4: 0xe70700f0  swc1        $f7, 0xF0($t8)
    ctx->pc = 0x1bf4d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 240), bits); }
    // 0x1bf4d8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1BF4D8u;
    {
        const bool branch_taken_0x1bf4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4D8u;
        // 0x1bf4dc: 0xe7050090  swc1        $f5, 0x90($t8) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4d8) {
            ctx->pc = 0x1BF7CCu;
            goto label_1bf7cc;
        }
    }
    ctx->pc = 0x1BF4E0u;
label_1bf4e0:
    // 0x1bf4e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1bf4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1bf4e4: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1BF4E4u;
    {
        const bool branch_taken_0x1bf4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4E4u;
        // 0x1bf4e8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4e4) {
            ctx->pc = 0x1BF68Cu;
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF4ECu;
    // 0x1bf4ec: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf4f0: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1bf4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x1bf4f4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf4f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf4fc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1bf500: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1bf500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf504: 0x3c013c20  lui         $at, 0x3C20
    ctx->pc = 0x1bf504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15392 << 16));
    // 0x1bf508: 0x3421902e  ori         $at, $at, 0x902E
    ctx->pc = 0x1bf508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36910);
    // 0x1bf50c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf510: 0x3c013c8f  lui         $at, 0x3C8F
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15503 << 16));
    // 0x1bf514: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf518: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bf518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bf51c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bf51cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1bf520: 0x3c013d1d  lui         $at, 0x3D1D
    ctx->pc = 0x1bf520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15645 << 16));
    // 0x1bf524: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x1bf524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
    // 0x1bf528: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bf528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bf52c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bf52cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x1bf530: 0x3c013cc8  lui         $at, 0x3CC8
    ctx->pc = 0x1bf530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15560 << 16));
    // 0x1bf534: 0x3421b439  ori         $at, $at, 0xB439
    ctx->pc = 0x1bf534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46137);
    // 0x1bf538: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bf538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1bf53c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1bf53cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x1bf540: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf544: 0x3c013f1f  lui         $at, 0x3F1F
    ctx->pc = 0x1bf544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16159 << 16));
    // 0x1bf548: 0x34213b64  ori         $at, $at, 0x3B64
    ctx->pc = 0x1bf548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15204);
    // 0x1bf54c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf550: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x1bf550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1bf554: 0x3c013f85  lui         $at, 0x3F85
    ctx->pc = 0x1bf554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16261 << 16));
    // 0x1bf558: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1bf558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1bf55c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf560: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf564: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1bf568: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bf568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1bf56c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bf56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1bf570: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1bf570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf574: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x1bf574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x1bf578: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf57c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bf57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1bf580: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1bf584: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf588: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf58c: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x1bf590: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1bf590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1bf594: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf598: 0x3c01be28  lui         $at, 0xBE28
    ctx->pc = 0x1bf598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48680 << 16));
    // 0x1bf59c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1bf59cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1bf5a0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bf5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bf5a4: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf5a8: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x1bf5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    // 0x1bf5ac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bf5b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bf5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bf5b4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1bf5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1bf5b8: 0x3c013d2c  lui         $at, 0x3D2C
    ctx->pc = 0x1bf5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15660 << 16));
    // 0x1bf5bc: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1bf5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x1bf5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf5c4: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf5c8: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x1bf5cc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bf5d0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bf5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1bf5d4: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1bf5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf5d8: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x1bf5dc: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1bf5dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1bf5e0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bf5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1bf5e4: 0x3c013f63  lui         $at, 0x3F63
    ctx->pc = 0x1bf5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16227 << 16));
    // 0x1bf5e8: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x1bf5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x1bf5ec: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bf5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1bf5f0: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf5f4: 0xe4620030  swc1        $f2, 0x30($v1)
    ctx->pc = 0x1bf5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1bf5f8: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf5fc: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1bf5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf600: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf604: 0xe4450034  swc1        $f5, 0x34($v0)
    ctx->pc = 0x1bf604u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1bf608: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf60c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1bf60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf610: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf614: 0xe4660050  swc1        $f6, 0x50($v1)
    ctx->pc = 0x1bf614u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1bf618: 0x8f2400f0  lw          $a0, 0xF0($t9)
    ctx->pc = 0x1bf618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf61c: 0xe4c0e910  swc1        $f0, -0x16F0($a2)
    ctx->pc = 0x1bf61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961424), bits); }
    // 0x1bf620: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x1bf620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf624: 0xe4f2e914  swc1        $f18, -0x16EC($a3)
    ctx->pc = 0x1bf624u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961428), bits); }
    // 0x1bf628: 0x582021  addu        $a0, $v0, $t8
    ctx->pc = 0x1bf628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf62c: 0xe48b0070  swc1        $f11, 0x70($a0)
    ctx->pc = 0x1bf62cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x1bf630: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf634: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1bf634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf638: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf63c: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x1bf63cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1bf640: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf644: 0xe501e91c  swc1        $f1, -0x16E4($t0)
    ctx->pc = 0x1bf644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961436), bits); }
    // 0x1bf648: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1bf648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf64c: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf650: 0xe46f0048  swc1        $f15, 0x48($v1)
    ctx->pc = 0x1bf650u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1bf654: 0xe7070040  swc1        $f7, 0x40($t8)
    ctx->pc = 0x1bf654u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 64), bits); }
    // 0x1bf658: 0xe6432e50  swc1        $f3, 0x2E50($s2)
    ctx->pc = 0x1bf658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11856), bits); }
    // 0x1bf65c: 0xe7030020  swc1        $f3, 0x20($t8)
    ctx->pc = 0x1bf65cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x1bf660: 0xe70e0060  swc1        $f14, 0x60($t8)
    ctx->pc = 0x1bf660u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 96), bits); }
    // 0x1bf664: 0xe70d0080  swc1        $f13, 0x80($t8)
    ctx->pc = 0x1bf664u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1bf668: 0xe70800d0  swc1        $f8, 0xD0($t8)
    ctx->pc = 0x1bf668u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 208), bits); }
    // 0x1bf66c: 0xe70400b0  swc1        $f4, 0xB0($t8)
    ctx->pc = 0x1bf66cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 176), bits); }
    // 0x1bf670: 0xe70900f0  swc1        $f9, 0xF0($t8)
    ctx->pc = 0x1bf670u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 240), bits); }
    // 0x1bf674: 0xe70a0110  swc1        $f10, 0x110($t8)
    ctx->pc = 0x1bf674u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 272), bits); }
    // 0x1bf678: 0xe7040090  swc1        $f4, 0x90($t8)
    ctx->pc = 0x1bf678u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 144), bits); }
    // 0x1bf67c: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf680: 0xe532e918  swc1        $f18, -0x16E8($t1)
    ctx->pc = 0x1bf680u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294961432), bits); }
    // 0x1bf684: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1BF684u;
    {
        const bool branch_taken_0x1bf684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF684u;
        // 0x1bf688: 0x451818  mult        $v1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf684) {
            ctx->pc = 0x1BF7C4u;
            goto label_1bf7c4;
        }
    }
    ctx->pc = 0x1BF68Cu;
label_1bf68c:
    // 0x1bf68c: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf690: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1bf690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1bf694: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x1bf698: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf69c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf6a0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bf6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1bf6a4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1bf6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf6a8: 0x3c013c20  lui         $at, 0x3C20
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15392 << 16));
    // 0x1bf6ac: 0x3421902e  ori         $at, $at, 0x902E
    ctx->pc = 0x1bf6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36910);
    // 0x1bf6b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf6b4: 0x3c013c8f  lui         $at, 0x3C8F
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15503 << 16));
    // 0x1bf6b8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bf6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1bf6bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf6c0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bf6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1bf6c4: 0x3c013d1d  lui         $at, 0x3D1D
    ctx->pc = 0x1bf6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15645 << 16));
    // 0x1bf6c8: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x1bf6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
    // 0x1bf6cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf6d0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bf6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1bf6d4: 0x3c013d2c  lui         $at, 0x3D2C
    ctx->pc = 0x1bf6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15660 << 16));
    // 0x1bf6d8: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1bf6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x1bf6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf6e0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x1bf6e4: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf6e8: 0x3c013cc8  lui         $at, 0x3CC8
    ctx->pc = 0x1bf6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15560 << 16));
    // 0x1bf6ec: 0x3421b439  ori         $at, $at, 0xB439
    ctx->pc = 0x1bf6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46137);
    // 0x1bf6f0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bf6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bf6f4: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x1bf6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1bf6f8: 0x3c013f1f  lui         $at, 0x3F1F
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16159 << 16));
    // 0x1bf6fc: 0x34213b64  ori         $at, $at, 0x3B64
    ctx->pc = 0x1bf6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15204);
    // 0x1bf700: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bf700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bf704: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf708: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1bf708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1bf70c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bf70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1bf710: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bf710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1bf714: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1bf714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf718: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bf718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1bf71c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bf71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bf720: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bf720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1bf724: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x1bf724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x1bf728: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1bf728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1bf72c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bf72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1bf730: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x1bf734: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x1bf734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
    // 0x1bf738: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bf738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1bf73c: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf740: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x1bf740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1bf744: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf748: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1bf748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf74c: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf750: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x1bf750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1bf754: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf758: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1bf758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf75c: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf760: 0xe4630034  swc1        $f3, 0x34($v1)
    ctx->pc = 0x1bf760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1bf764: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf768: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1bf768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf76c: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf770: 0xe4440050  swc1        $f4, 0x50($v0)
    ctx->pc = 0x1bf770u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1bf774: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf778: 0xe4a0e910  swc1        $f0, -0x16F0($a1)
    ctx->pc = 0x1bf778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961424), bits); }
    // 0x1bf77c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1bf77cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf780: 0xe4d2e914  swc1        $f18, -0x16EC($a2)
    ctx->pc = 0x1bf780u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961428), bits); }
    // 0x1bf784: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf788: 0xe4650070  swc1        $f5, 0x70($v1)
    ctx->pc = 0x1bf788u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1bf78c: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf790: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1bf790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf794: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf798: 0xe4460028  swc1        $f6, 0x28($v0)
    ctx->pc = 0x1bf798u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1bf79c: 0x8f2300f0  lw          $v1, 0xF0($t9)
    ctx->pc = 0x1bf79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf7a0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1bf7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf7a4: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x1bf7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1bf7a8: 0xe4690048  swc1        $f9, 0x48($v1)
    ctx->pc = 0x1bf7a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1bf7ac: 0xe7070080  swc1        $f7, 0x80($t8)
    ctx->pc = 0x1bf7acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 128), bits); }
    // 0x1bf7b0: 0xe7080110  swc1        $f8, 0x110($t8)
    ctx->pc = 0x1bf7b0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 272), bits); }
    // 0x1bf7b4: 0x8f2200f0  lw          $v0, 0xF0($t9)
    ctx->pc = 0x1bf7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
    // 0x1bf7b8: 0xe4f2e918  swc1        $f18, -0x16E8($a3)
    ctx->pc = 0x1bf7b8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961432), bits); }
    // 0x1bf7bc: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1bf7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf7c0: 0xe50ae91c  swc1        $f10, -0x16E4($t0)
    ctx->pc = 0x1bf7c0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961436), bits); }
label_1bf7c4:
    // 0x1bf7c4: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x1bf7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf7c8: 0xe4530088  swc1        $f19, 0x88($v0)
    ctx->pc = 0x1bf7c8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_1bf7cc:
    // 0x1bf7cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bf7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf7d4: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x1bf7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D8u;
        // 0x1bf7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF7E0u;
}
