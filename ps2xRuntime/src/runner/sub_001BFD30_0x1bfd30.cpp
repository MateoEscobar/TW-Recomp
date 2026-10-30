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

// Function: sub_001BFD30
// Address: 0x1bfd30 - 0x1c0000
void sub_001BFD30_0x1bfd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFD30_0x1bfd30");
#endif

    ctx->pc = 0x1bfd30u;

    // 0x1bfd30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1bfd34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bfd38: 0xc462e8f8  lwc1        $f2, -0x1708($v1)
    ctx->pc = 0x1bfd38u;
    { uint32_t bits = FAST_READ32(0x50E8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bfd3c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1bfd3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1bfd40: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1bfd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1bfd44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bfd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bfd48: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bfd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bfd4c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1bfd50: 0xc443e8f4  lwc1        $f3, -0x170C($v0)
    ctx->pc = 0x1bfd50u;
    { uint32_t bits = FAST_READ32(0x50E8F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bfd54: 0x3c180062  lui         $t8, 0x62
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)98 << 16));
    // 0x1bfd58: 0x8ca2cdb4  lw          $v0, -0x324C($a1)
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1bfd5c: 0x46061180  add.s       $f6, $f2, $f6
    ctx->pc = 0x1bfd5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x1bfd60: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1bfd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1bfd64: 0x3c0f0062  lui         $t7, 0x62
    ctx->pc = 0x1bfd64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)98 << 16));
    // 0x1bfd68: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1bfd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1bfd6c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x1bfd70: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1bfd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1bfd74: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1bfd74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1bfd78: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1bfd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1bfd7c: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x1bfd7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x1bfd80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1bfd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1bfd84: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x1bfd84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
    // 0x1bfd88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bfd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bfd8c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1bfd8cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x1bfd90: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1bfd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1bfd94: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1bfd94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x1bfd98: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1bfd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1bfd9c: 0x3c0d0062  lui         $t5, 0x62
    ctx->pc = 0x1bfd9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)98 << 16));
    // 0x1bfda0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1bfda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1bfda4: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x1bfda4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
    // 0x1bfda8: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x1bfda8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1bfdac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1bfdacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdb0: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x1bfdb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1bfdb4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1bfdb8: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x1bfdb8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1bfdbc: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x1bfdc0: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1bfdc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1bfdc4: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x1bfdc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x1bfdc8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1bfdc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1bfdcc: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1bfdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1bfdd0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1bfdd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1bfdd4: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x1bfdd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
    // 0x1bfdd8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1bfdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1bfddc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bfddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bfde0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bfde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1bfde4: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x1bfde4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x1bfde8: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1bfde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1bfdec: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1bfdecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1bfdf0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bfdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1bfdf4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x1bfdf8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1bfdfc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bfdfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bfe00: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bfe00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1bfe04: 0x460b1580  add.s       $f22, $f2, $f11
    ctx->pc = 0x1bfe04u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x1bfe08: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x1bfe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
    // 0x1bfe0c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1bfe0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1bfe10: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1bfe10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1bfe14: 0x46081a00  add.s       $f8, $f3, $f8
    ctx->pc = 0x1bfe14u;
    ctx->f[8] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x1bfe18: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x1bfe18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x1bfe1c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1bfe1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1bfe20: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bfe20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1bfe24: 0x460a1a80  add.s       $f10, $f3, $f10
    ctx->pc = 0x1bfe24u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x1bfe28: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bfe28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1bfe2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bfe2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bfe30: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1bfe30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1bfe34: 0x46181540  add.s       $f21, $f2, $f24
    ctx->pc = 0x1bfe34u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x1bfe38: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1bfe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1bfe3c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bfe3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bfe40: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bfe40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1bfe44: 0x46091a40  add.s       $f9, $f3, $f9
    ctx->pc = 0x1bfe44u;
    ctx->f[9] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x1bfe48: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1bfe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1bfe4c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1bfe4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1bfe50: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bfe50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bfe54: 0x46191500  add.s       $f20, $f2, $f25
    ctx->pc = 0x1bfe54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[25]);
    // 0x1bfe58: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1bfe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1bfe5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bfe5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bfe60: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bfe60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bfe64: 0x460719c0  add.s       $f7, $f3, $f7
    ctx->pc = 0x1bfe64u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x1bfe68: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1bfe68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfe6c: 0x46051140  add.s       $f5, $f2, $f5
    ctx->pc = 0x1bfe6cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1bfe70: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1bfe70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x1bfe74: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1bfe74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1bfe78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfe78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfe7c: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1bfe7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1bfe80: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x1bfe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
    // 0x1bfe84: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1bfe84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1bfe88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bfe88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfe8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bfe90: 0xe4862f74  swc1        $f6, 0x2F74($a0)
    ctx->pc = 0x1bfe90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F74u, _value); } while (0); }
    // 0x1bfe94: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1bfe94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1bfe98: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1bfe98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1bfe9c: 0x33240002  andi        $a0, $t9, 0x2
    ctx->pc = 0x1bfe9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)2);
    // 0x1bfea0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bfea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bfea4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x1bfea4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x1bfea8: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1bfea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x1bfeac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bfeacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bfeb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfeb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfeb4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bfeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1bfeb8: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x1bfeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x1bfebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bfebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfec0: 0x3c0c0062  lui         $t4, 0x62
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
    // 0x1bfec4: 0x3c014076  lui         $at, 0x4076
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16502 << 16));
    // 0x1bfec8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bfec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bfecc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bfeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfed0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bfed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1bfed4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1bfed8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bfed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1bfedc: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x1bfedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x1bfee0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1bfee4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bfee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bfee8: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1bfee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1bfeec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1bfef0: 0xe481e924  swc1        $f1, -0x16DC($a0)
    ctx->pc = 0x1bfef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E924u, _value); } while (0); }
    // 0x1bfef4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1bfef4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1bfef8: 0xe7082f78  swc1        $f8, 0x2F78($t8)
    ctx->pc = 0x1bfef8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F78u, _value); } while (0); }
    // 0x1bfefc: 0xe6f62f7c  swc1        $f22, 0x2F7C($s7)
    ctx->pc = 0x1bfefcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F7Cu, _value); } while (0); }
    // 0x1bff00: 0xe6a0e928  swc1        $f0, -0x16D8($s5)
    ctx->pc = 0x1bff00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E928u, _value); } while (0); }
    // 0x1bff04: 0xe66a2f80  swc1        $f10, 0x2F80($s3)
    ctx->pc = 0x1bff04u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F80u, _value); } while (0); }
    // 0x1bff08: 0xe6552f84  swc1        $f21, 0x2F84($s2)
    ctx->pc = 0x1bff08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F84u, _value); } while (0); }
    // 0x1bff0c: 0xe62be92c  swc1        $f11, -0x16D4($s1)
    ctx->pc = 0x1bff0cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E92Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E92Cu, _value); } while (0); }
    // 0x1bff10: 0xe6092f88  swc1        $f9, 0x2F88($s0)
    ctx->pc = 0x1bff10u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F88u, _value); } while (0); }
    // 0x1bff14: 0xe5f42f8c  swc1        $f20, 0x2F8C($t7)
    ctx->pc = 0x1bff14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F8Cu, _value); } while (0); }
    // 0x1bff18: 0xe5cee930  swc1        $f14, -0x16D0($t6)
    ctx->pc = 0x1bff18u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E930u, _value); } while (0); }
    // 0x1bff1c: 0xe5a72f90  swc1        $f7, 0x2F90($t5)
    ctx->pc = 0x1bff1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F90u, _value); } while (0); }
    // 0x1bff20: 0xe56fe934  swc1        $f15, -0x16CC($t3)
    ctx->pc = 0x1bff20u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E934u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E934u, _value); } while (0); }
    // 0x1bff24: 0xe5452f9c  swc1        $f5, 0x2F9C($t2)
    ctx->pc = 0x1bff24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F9Cu, _value); } while (0); }
    // 0x1bff28: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1bff28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1bff2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bff2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bff30: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1bff30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1bff34: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x1bff38: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bff38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bff3c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1bff3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1bff40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bff44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bff44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bff48: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1bff48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1bff4c: 0xe4a22fac  swc1        $f2, 0x2FAC($a1)
    ctx->pc = 0x1bff4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FACu, _value); } while (0); }
    // 0x1bff50: 0xe452e944  swc1        $f18, -0x16BC($v0)
    ctx->pc = 0x1bff50u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E944u, _value); } while (0); }
    // 0x1bff54: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1bff58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bff5c: 0xe530e938  swc1        $f16, -0x16C8($t1)
    ctx->pc = 0x1bff5cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E938u, _value); } while (0); }
    // 0x1bff60: 0xe5042fa0  swc1        $f4, 0x2FA0($t0)
    ctx->pc = 0x1bff60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA0u, _value); } while (0); }
    // 0x1bff64: 0xe4f1e93c  swc1        $f17, -0x16C4($a3)
    ctx->pc = 0x1bff64u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E93Cu, _value); } while (0); }
    // 0x1bff68: 0xe4c32fa8  swc1        $f3, 0x2FA8($a2)
    ctx->pc = 0x1bff68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA8u, _value); } while (0); }
    // 0x1bff6c: 0xe473e940  swc1        $f19, -0x16C0($v1)
    ctx->pc = 0x1bff6cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E940u, _value); } while (0); }
    // 0x1bff70: 0xe4a82f70  swc1        $f8, 0x2F70($a1)
    ctx->pc = 0x1bff70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F70u, _value); } while (0); }
    // 0x1bff74: 0xe6c52f94  swc1        $f5, 0x2F94($s6)
    ctx->pc = 0x1bff74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F94u, _value); } while (0); }
    // 0x1bff78: 0xe6842f98  swc1        $f4, 0x2F98($s4)
    ctx->pc = 0x1bff78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F98u, _value); } while (0); }
    // 0x1bff7c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1BFF7Cu;
    {
        const bool branch_taken_0x1bff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF7Cu;
        // 0x1bff80: 0xe5822fa4  swc1        $f2, 0x2FA4($t4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff7c) {
            ctx->pc = 0x1C0190u;
            return;
        }
    }
    ctx->pc = 0x1BFF84u;
    // 0x1bff84: 0x33220004  andi        $v0, $t9, 0x4
    ctx->pc = 0x1bff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)4);
    // 0x1bff88: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BFF88u;
    {
        const bool branch_taken_0x1bff88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF88u;
        // 0x1bff8c: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff88) {
            ctx->pc = 0x1C0074u;
            return;
        }
    }
    ctx->pc = 0x1BFF90u;
    // 0x1bff90: 0x3c01be1d  lui         $at, 0xBE1D
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48669 << 16));
    // 0x1bff94: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x1bff94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
    // 0x1bff98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bff98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bff9c: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x1bffa0: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1bffa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1bffa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bffa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bffa8: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x1bffac: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1bffacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1bffb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bffb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bffb4: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x1bffb8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bffb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bffbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bffbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bffc0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x1bffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x1bffc4: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1bffc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1bffc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bffc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bffcc: 0x3c01be40  lui         $at, 0xBE40
    ctx->pc = 0x1bffccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48704 << 16));
    // 0x1bffd0: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x1bffd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x1bffd4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bffd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bffd8: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1bffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1bffdc: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bffdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1bffe0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bffe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1bffe4: 0x3c01bde5  lui         $at, 0xBDE5
    ctx->pc = 0x1bffe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48613 << 16));
    // 0x1bffe8: 0x34216041  ori         $at, $at, 0x6041
    ctx->pc = 0x1bffe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24641);
    // 0x1bffec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bffecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bfff0: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x1bfff4: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x1bfff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x1bfff8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bfff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1bfffc: 0x3c01be39  lui         $at, 0xBE39
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48697 << 16));
    ctx->pc = 0x1c0000u;
}
