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

// Function: sub_002361E8
// Address: 0x2361e8 - 0x236420
void sub_002361E8_0x2361e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002361E8_0x2361e8");
#endif

    ctx->pc = 0x2361e8u;

    // 0x2361e8: 0x3c013c95  lui         $at, 0x3C95
    ctx->pc = 0x2361e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15509 << 16));
    // 0x2361ec: 0x3421db7f  ori         $at, $at, 0xDB7F
    ctx->pc = 0x2361ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56191);
    // 0x2361f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2361f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2361f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2361f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2361f8: 0x3c013c9a  lui         $at, 0x3C9A
    ctx->pc = 0x2361f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15514 << 16));
    // 0x2361fc: 0x3421bd30  ori         $at, $at, 0xBD30
    ctx->pc = 0x2361fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48432);
    // 0x236200: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x236200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x236204: 0x3c0c0071  lui         $t4, 0x71
    ctx->pc = 0x236204u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)113 << 16));
    // 0x236208: 0x3c013a98  lui         $at, 0x3A98
    ctx->pc = 0x236208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15000 << 16));
    // 0x23620c: 0x3421b3eb  ori         $at, $at, 0xB3EB
    ctx->pc = 0x23620cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46059);
    // 0x236210: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x236210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x236214: 0x258c5480  addiu       $t4, $t4, 0x5480
    ctx->pc = 0x236214u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 21632));
    // 0x236218: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x23621c: 0x34215817  ori         $at, $at, 0x5817
    ctx->pc = 0x23621cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22551);
    // 0x236220: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x236220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x236224: 0x3c0d0071  lui         $t5, 0x71
    ctx->pc = 0x236224u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)113 << 16));
    // 0x236228: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x236228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x23622c: 0x25ad54c0  addiu       $t5, $t5, 0x54C0
    ctx->pc = 0x23622cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21696));
    // 0x236230: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x236230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x236234: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x236234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x236238: 0x3c01bec5  lui         $at, 0xBEC5
    ctx->pc = 0x236238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48837 << 16));
    // 0x23623c: 0x34213019  ori         $at, $at, 0x3019
    ctx->pc = 0x23623cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12313);
    // 0x236240: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x236240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x236244: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x236244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
    // 0x236248: 0x3421ae0f  ori         $at, $at, 0xAE0F
    ctx->pc = 0x236248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44559);
    // 0x23624c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x23624cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x236250: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x236254: 0x34216d96  ori         $at, $at, 0x6D96
    ctx->pc = 0x236254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28054);
    // 0x236258: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x236258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x23625c: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x23625cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x236260: 0x3c013c9f  lui         $at, 0x3C9F
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15519 << 16));
    // 0x236264: 0x3421573e  ori         $at, $at, 0x573E
    ctx->pc = 0x236264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22334);
    // 0x236268: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x236268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x23626c: 0x3c01bcae  lui         $at, 0xBCAE
    ctx->pc = 0x23626cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48302 << 16));
    // 0x236270: 0x3421a082  ori         $at, $at, 0xA082
    ctx->pc = 0x236270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41090);
    // 0x236274: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x236274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x236278: 0x3c01391e  lui         $at, 0x391E
    ctx->pc = 0x236278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14622 << 16));
    // 0x23627c: 0x34214047  ori         $at, $at, 0x4047
    ctx->pc = 0x23627cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16455);
    // 0x236280: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x236280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x236284: 0xe4a70008  swc1        $f7, 0x8($a1)
    ctx->pc = 0x236284u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x236288: 0xe4a80004  swc1        $f8, 0x4($a1)
    ctx->pc = 0x236288u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x23628c: 0xe4a90000  swc1        $f9, 0x0($a1)
    ctx->pc = 0x23628cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x236290: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x236290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x236294: 0x3421f592  ori         $at, $at, 0xF592
    ctx->pc = 0x236294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62866);
    // 0x236298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23629c: 0x3c013eab  lui         $at, 0x3EAB
    ctx->pc = 0x23629cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16043 << 16));
    // 0x2362a0: 0x34211734  ori         $at, $at, 0x1734
    ctx->pc = 0x2362a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5940);
    // 0x2362a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2362a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2362a8: 0x3c01bf16  lui         $at, 0xBF16
    ctx->pc = 0x2362a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48918 << 16));
    // 0x2362ac: 0x3421f36c  ori         $at, $at, 0xF36C
    ctx->pc = 0x2362acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62316);
    // 0x2362b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2362b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2362b4: 0x3c01bf25  lui         $at, 0xBF25
    ctx->pc = 0x2362b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48933 << 16));
    // 0x2362b8: 0x342155a8  ori         $at, $at, 0x55A8
    ctx->pc = 0x2362b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21928);
    // 0x2362bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2362bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2362c0: 0xe4c50004  swc1        $f5, 0x4($a2)
    ctx->pc = 0x2362c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2362c4: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x2362c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2362c8: 0xe4c60000  swc1        $f6, 0x0($a2)
    ctx->pc = 0x2362c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2362cc: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2362ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2362d0: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x2362d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2362d4: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x2362d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2362d8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2362d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2362dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2362dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2362e0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2362e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2362e4: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2362e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2362e8: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x2362e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2362ec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2362ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2362f0: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2362f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2362f4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2362f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2362f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2362f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2362fc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2362fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x236300: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x236300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x236304: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x236304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x236308: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x236308u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23630c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x23630cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x236310: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x236310u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x236314: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x236314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x236318: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x236318u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23631c: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x23631cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x236320: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x236320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236324: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x236324u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236328: 0x7d820010  sq          $v0, 0x10($t4)
    ctx->pc = 0x236328u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x715490u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x715490u, _value); } while (0);
    // 0x23632c: 0x7d830000  sq          $v1, 0x0($t4)
    ctx->pc = 0x23632cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x715480u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x715480u, _value); } while (0);
    // 0x236330: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x236330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236334: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x236334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x236338: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x236338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23633c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x236340: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x236340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x236344: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x236344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236348: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x236348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23634c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x23634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236350: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x236350u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x236354: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x236354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x236358: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x236358u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23635c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x23635cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x236360: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x236360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x236364: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x236364u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x236368: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x236368u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23636c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23636cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236370: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x236370u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236374: 0x7d820030  sq          $v0, 0x30($t4)
    ctx->pc = 0x236374u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7154B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7154B0u, _value); } while (0);
    // 0x236378: 0x7d830020  sq          $v1, 0x20($t4)
    ctx->pc = 0x236378u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7154A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7154A0u, _value); } while (0);
    // 0x23637c: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x23637cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x236380: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x236380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236384: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x236384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x236388: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x236388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23638c: 0xc5260008  lwc1        $f6, 0x8($t1)
    ctx->pc = 0x23638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x236390: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x236390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236394: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x236394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x236398: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x236398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23639c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2363a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2363a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2363a4: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2363a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2363a8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2363a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2363ac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2363acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2363b0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2363b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2363b4: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x2363b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2363b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2363b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2363bc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2363bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2363c0: 0x7da20000  sq          $v0, 0x0($t5)
    ctx->pc = 0x2363c0u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7154C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7154C0u, _value); } while (0);
    // 0x2363c4: 0x7da30010  sq          $v1, 0x10($t5)
    ctx->pc = 0x2363c4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7154D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7154D0u, _value); } while (0);
    // 0x2363c8: 0xc5450008  lwc1        $f5, 0x8($t2)
    ctx->pc = 0x2363c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2363cc: 0xc5660008  lwc1        $f6, 0x8($t3)
    ctx->pc = 0x2363ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2363d0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2363d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2363d4: 0xc562000c  lwc1        $f2, 0xC($t3)
    ctx->pc = 0x2363d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2363d8: 0xc5640004  lwc1        $f4, 0x4($t3)
    ctx->pc = 0x2363d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2363dc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2363dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2363e0: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x2363e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2363e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2363e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2363e8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2363e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2363ec: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2363ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2363f0: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x2363f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2363f4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2363f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2363f8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2363f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2363fc: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2363fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x236400: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x236400u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x236404: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x236404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236408: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x236408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23640c: 0x7da20020  sq          $v0, 0x20($t5)
    ctx->pc = 0x23640cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7154E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7154E0u, _value); } while (0);
    // 0x236410: 0x7da30030  sq          $v1, 0x30($t5)
    ctx->pc = 0x236410u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x7154F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x7154F0u, _value); } while (0);
    // 0x236414: 0x3e00008  jr          $ra
    ctx->pc = 0x236414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236414u;
        // 0x236418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23641Cu;
    // 0x23641c: 0x0  nop
    ctx->pc = 0x23641cu;
    // NOP
    ctx->pc = 0x236420u;
}
