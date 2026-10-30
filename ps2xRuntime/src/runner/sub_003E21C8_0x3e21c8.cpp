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

// Function: sub_003E21C8
// Address: 0x3e21c8 - 0x3e29c8
void sub_003E21C8_0x3e21c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E21C8_0x3e21c8");
#endif

    ctx->pc = 0x3e21c8u;

    // 0x3e21c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e21c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e21cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3e21ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3e21d0: 0x14a201fa  bne         $a1, $v0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x3E21D0u;
    {
        const bool branch_taken_0x3e21d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21D0u;
        // 0x3e21d4: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e21d0) {
            ctx->pc = 0x3E29BCu;
            goto label_3e29bc;
        }
    }
    ctx->pc = 0x3E21D8u;
    // 0x3e21d8: 0x108001f8  beqz        $a0, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x3E21D8u;
    {
        const bool branch_taken_0x3e21d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21D8u;
        // 0x3e21dc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e21d8) {
            ctx->pc = 0x3E29BCu;
            goto label_3e29bc;
        }
    }
    ctx->pc = 0x3E21E0u;
    // 0x3e21e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e21e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3e21e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e21e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e21e8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3e21e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x3e21ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3e21ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e21f0: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x3e21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
    // 0x3e21f4: 0x3c01441c  lui         $at, 0x441C
    ctx->pc = 0x3e21f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17436 << 16));
    // 0x3e21f8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3e21f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x3e21fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e21fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2200: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3e2200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x3e2204: 0x3c014377  lui         $at, 0x4377
    ctx->pc = 0x3e2204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17271 << 16));
    // 0x3e2208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e2208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e220c: 0x24a52ea0  addiu       $a1, $a1, 0x2EA0
    ctx->pc = 0x3e220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11936));
    // 0x3e2210: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2214: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3e2218: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e221c: 0x24842f30  addiu       $a0, $a0, 0x2F30
    ctx->pc = 0x3e221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12080));
    // 0x3e2220: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x3e2220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2224: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3e2224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x3e2228: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e222c: 0x24c63030  addiu       $a2, $a2, 0x3030
    ctx->pc = 0x3e222cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12336));
    // 0x3e2230: 0x3c01440d  lui         $at, 0x440D
    ctx->pc = 0x3e2230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17421 << 16));
    // 0x3e2234: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x3e2234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x3e2238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e2238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e223c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3e223cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x3e2240: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x3e2240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
    // 0x3e2244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e2244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2248: 0x25293130  addiu       $t1, $t1, 0x3130
    ctx->pc = 0x3e2248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12592));
    // 0x3e224c: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x3e224cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2250: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2254: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2258: 0x3c014405  lui         $at, 0x4405
    ctx->pc = 0x3e2258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17413 << 16));
    // 0x3e225c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3e225cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x3e2260: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e2260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e2264: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2268: 0x3c0142ac  lui         $at, 0x42AC
    ctx->pc = 0x3e2268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17068 << 16));
    // 0x3e226c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e226cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2270: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x3e2270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x3e2274: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3e2274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2278: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e2278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e227c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2280: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x3e2280u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2284: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2288: 0x3c014402  lui         $at, 0x4402
    ctx->pc = 0x3e2288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17410 << 16));
    // 0x3e228c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3e228cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x3e2290: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e2290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2294: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x3e2294u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2298: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x3e2298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x3e229c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e229cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e22a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3e22a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3e22a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e22a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e22a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e22ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e22acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e22b0: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x3e22b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e22b4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e22b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e22b8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x3e22b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x3e22bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e22c0: 0x3c0143f3  lui         $at, 0x43F3
    ctx->pc = 0x3e22c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17395 << 16));
    // 0x3e22c4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x3e22c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x3e22c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e22c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e22cc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e22ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e22d0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3e22d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x3e22d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e22d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e22d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3e22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3e22dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e22dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e22e0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e22e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e22e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e22e8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x3e22e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e22ec: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e22ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e22f0: 0x3c0143eb  lui         $at, 0x43EB
    ctx->pc = 0x3e22f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17387 << 16));
    // 0x3e22f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e22f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e22f8: 0x3c01c204  lui         $at, 0xC204
    ctx->pc = 0x3e22f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49668 << 16));
    // 0x3e22fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e22fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2300: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x3e2300u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2304: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2308: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e230c: 0x3c0143e9  lui         $at, 0x43E9
    ctx->pc = 0x3e230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17385 << 16));
    // 0x3e2310: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x3e2310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x3e2314: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e2314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e2318: 0x3c01c298  lui         $at, 0xC298
    ctx->pc = 0x3e2318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49816 << 16));
    // 0x3e231c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e231cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2320: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2324: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3e2324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2328: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e232c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3e232cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x3e2330: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x3e2330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x3e2334: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3e2334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3e2338: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e2338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e233c: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x3e233cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2340: 0x3c01c2d6  lui         $at, 0xC2D6
    ctx->pc = 0x3e2340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49878 << 16));
    // 0x3e2344: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e2344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2348: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3e2348u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3e234c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x3e234cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2350: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e2350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e2354: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2358: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x3e2358u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e235c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e235cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2360: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x3e2360u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x3e2364: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e2364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e2368: 0x3c014408  lui         $at, 0x4408
    ctx->pc = 0x3e2368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17416 << 16));
    // 0x3e236c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e236cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2370: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2374: 0x3c01c329  lui         $at, 0xC329
    ctx->pc = 0x3e2374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49961 << 16));
    // 0x3e2378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e2378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e237c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3e237cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3e2380: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2384: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3e2384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e2388: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e238c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x3e238cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2390: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2394: 0x3c014412  lui         $at, 0x4412
    ctx->pc = 0x3e2394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17426 << 16));
    // 0x3e2398: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3e2398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x3e239c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e239cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e23a0: 0x3c01c353  lui         $at, 0xC353
    ctx->pc = 0x3e23a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50003 << 16));
    // 0x3e23a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e23a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e23a8: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x3e23a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e23ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e23acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e23b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e23b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e23b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3e23b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3e23b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e23b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e23bc: 0x3c014258  lui         $at, 0x4258
    ctx->pc = 0x3e23bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16984 << 16));
    // 0x3e23c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e23c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e23c4: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x3e23c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x3e23c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e23c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e23cc: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x3e23ccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e23d0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e23d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e23d4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e23d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e23d8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e23d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e23dc: 0x3c01429c  lui         $at, 0x429C
    ctx->pc = 0x3e23dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17052 << 16));
    // 0x3e23e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3e23e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e23e4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e23e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e23e8: 0x3c01435c  lui         $at, 0x435C
    ctx->pc = 0x3e23e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17244 << 16));
    // 0x3e23ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e23ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e23f0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3e23f0u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2EA0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2EA0u, _value); } while (0);
    // 0x3e23f4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x3e23f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e23f8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e23f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e23fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e23fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2400: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e2400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2404: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2408: 0x3c01429e  lui         $at, 0x429E
    ctx->pc = 0x3e2408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17054 << 16));
    // 0x3e240c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e240cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2410: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2414: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x3e2414u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x3e2418: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3e2418u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2EB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2EB0u, _value); } while (0);
    // 0x3e241c: 0x3c01432c  lui         $at, 0x432C
    ctx->pc = 0x3e241cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17196 << 16));
    // 0x3e2420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e2420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2424: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e2424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e2428: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3e2428u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x3e242c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e242cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2430: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2434: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e2434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2438: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e243c: 0x3c0142a8  lui         $at, 0x42A8
    ctx->pc = 0x3e243cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17064 << 16));
    // 0x3e2440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e2440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2444: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e2444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2448: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x3e2448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x3e244c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2450: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2454: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2458: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3e2458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3e245c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e245cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2460: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2464: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3e2464u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2EC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2EC0u, _value); } while (0);
    // 0x3e2468: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e246c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e246cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e2470: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2474: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e2474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2478: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e247c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3e247cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2ED0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2ED0u, _value); } while (0);
    // 0x3e2480: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x3e2480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x3e2484: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3e2484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3e2488: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e2488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e248c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e248cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2490: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2494: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3e2494u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2498: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e2498u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e249c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e249cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e24a0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3e24a0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2EE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2EE0u, _value); } while (0);
    // 0x3e24a4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x3e24a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x3e24a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e24a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e24ac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e24acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e24b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e24b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e24b4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x3e24b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x3e24b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3e24b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e24bc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3e24bcu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2EF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2EF0u, _value); } while (0);
    // 0x3e24c0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3e24c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e24c4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e24c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e24c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e24c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e24cc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e24ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e24d0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e24d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e24d4: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x3e24d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x3e24d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e24d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e24dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e24dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e24e0: 0x3c01c2a0  lui         $at, 0xC2A0
    ctx->pc = 0x3e24e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49824 << 16));
    // 0x3e24e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3e24e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e24e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3e24e8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F00u, _value); } while (0);
    // 0x3e24ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e24ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e24f0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e24f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e24f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e24f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e24f8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e24f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e24fc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e24fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2500: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e2500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3e2504: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3e2504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3e2508: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e250c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3e2510: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3e2510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3e2514: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3e2514u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F10u, _value); } while (0);
    // 0x3e2518: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e251c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3e251cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2520: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3e2520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2524: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2528: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3e2528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3e252c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e252cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2530: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2534: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3e2534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x3e2538: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3e2538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3e253c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x3e253cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F20u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F20u, _value); } while (0);
    // 0x3e2540: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3e2540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2544: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2548: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e254c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e254cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2550: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3e2550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x3e2554: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e2554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e2558: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e255c: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3e255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x3e2560: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3e2560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e2564: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2564u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F30u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F30u, _value); } while (0);
    // 0x3e2568: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x3e2568u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e256c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2570: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2574: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2578: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e257c: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3e257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
    // 0x3e2580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e2580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2584: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2588: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3e2588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x3e258c: 0x342104e6  ori         $at, $at, 0x4E6
    ctx->pc = 0x3e258cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1254);
    // 0x3e2590: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x3e2590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3e2594: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2594u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F40u, _value); } while (0);
    // 0x3e2598: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e259c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e25a0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3e25a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e25a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e25a8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e25a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e25ac: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x3e25acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
    // 0x3e25b0: 0x342104e6  ori         $at, $at, 0x4E6
    ctx->pc = 0x3e25b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1254);
    // 0x3e25b4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3e25b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3e25b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e25b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e25bc: 0x3c013ec3  lui         $at, 0x3EC3
    ctx->pc = 0x3e25bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16067 << 16));
    // 0x3e25c0: 0x3421ef07  ori         $at, $at, 0xEF07
    ctx->pc = 0x3e25c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61191);
    // 0x3e25c4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x3e25c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x3e25c8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e25c8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F50u, _value); } while (0);
    // 0x3e25cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e25d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e25d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e25d4: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x3e25d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e25d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e25dc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e25dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e25e0: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x3e25e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
    // 0x3e25e4: 0x34218366  ori         $at, $at, 0x8366
    ctx->pc = 0x3e25e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33638);
    // 0x3e25e8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x3e25e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3e25ec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e25ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e25f0: 0x3c01bec3  lui         $at, 0xBEC3
    ctx->pc = 0x3e25f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48835 << 16));
    // 0x3e25f4: 0x3421ef07  ori         $at, $at, 0xEF07
    ctx->pc = 0x3e25f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61191);
    // 0x3e25f8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x3e25f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x3e25fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e25fcu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F60u, _value); } while (0);
    // 0x3e2600: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x3e2600u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2604: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e2604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2608: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3e2608u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e260c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2610: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2614: 0x3c01bf6c  lui         $at, 0xBF6C
    ctx->pc = 0x3e2614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49004 << 16));
    // 0x3e2618: 0x34218366  ori         $at, $at, 0x8366
    ctx->pc = 0x3e2618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33638);
    // 0x3e261c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x3e261cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x3e2620: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2624: 0x3c013e47  lui         $at, 0x3E47
    ctx->pc = 0x3e2624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15943 << 16));
    // 0x3e2628: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3e2628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3e262c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3e262cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3e2630: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2630u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F70u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F70u, _value); } while (0);
    // 0x3e2634: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2638: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e2638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e263c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3e263cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2640: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2644: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2648: 0x3c013f7b  lui         $at, 0x3F7B
    ctx->pc = 0x3e2648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16251 << 16));
    // 0x3e264c: 0x3421150e  ori         $at, $at, 0x150E
    ctx->pc = 0x3e264cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5390);
    // 0x3e2650: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e2650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2654: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2658: 0x3c013f0e  lui         $at, 0x3F0E
    ctx->pc = 0x3e2658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16142 << 16));
    // 0x3e265c: 0x342139d6  ori         $at, $at, 0x39D6
    ctx->pc = 0x3e265cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14806);
    // 0x3e2660: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e2660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3e2664: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2664u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F80u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F80u, _value); } while (0);
    // 0x3e2668: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e266c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2670: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2674: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2678: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e267c: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x3e267cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x3e2680: 0x3421db38  ori         $at, $at, 0xDB38
    ctx->pc = 0x3e2680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56120);
    // 0x3e2684: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x3e2684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x3e2688: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e268c: 0x3c01be47  lui         $at, 0xBE47
    ctx->pc = 0x3e268cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48711 << 16));
    // 0x3e2690: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3e2690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3e2694: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x3e2694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3e2698: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2698u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2F90u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2F90u, _value); } while (0);
    // 0x3e269c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x3e269cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e26a0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e26a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e26a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e26a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e26a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e26ac: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e26acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e26b0: 0x3c01bf0e  lui         $at, 0xBF0E
    ctx->pc = 0x3e26b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48910 << 16));
    // 0x3e26b4: 0x342139d6  ori         $at, $at, 0x39D6
    ctx->pc = 0x3e26b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14806);
    // 0x3e26b8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x3e26b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x3e26bc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e26bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e26c0: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x3e26c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
    // 0x3e26c4: 0x3421db38  ori         $at, $at, 0xDB38
    ctx->pc = 0x3e26c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56120);
    // 0x3e26c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e26c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3e26cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e26ccu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2FA0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2FA0u, _value); } while (0);
    // 0x3e26d0: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x3e26d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e26d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e26d8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3e26d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e26dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e26e0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e26e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e26e4: 0x3c01bf7b  lui         $at, 0xBF7B
    ctx->pc = 0x3e26e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49019 << 16));
    // 0x3e26e8: 0x3421150e  ori         $at, $at, 0x150E
    ctx->pc = 0x3e26e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5390);
    // 0x3e26ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e26ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e26f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e26f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e26f4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e26f4u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2FB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2FB0u, _value); } while (0);
    // 0x3e26f8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3e26f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e26fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2700: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x3e2700u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2704: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2708: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e270c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e270cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2710: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2710u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2FC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2FC0u, _value); } while (0);
    // 0x3e2714: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x3e2714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2718: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e2718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e271c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x3e271cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2720: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2724: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2728: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e272c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e272cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2FD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2FD0u, _value); } while (0);
    // 0x3e2730: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2734: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e2734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2738: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3e2738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e273c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2740: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2744: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2748: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2748u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2FE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2FE0u, _value); } while (0);
    // 0x3e274c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e274cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2750: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e2750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2754: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3e2754u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2758: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e275c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e275cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2760: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2764: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2764u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F2FF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F2FF0u, _value); } while (0);
    // 0x3e2768: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x3e2768u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e276c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e2770: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2774: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2778: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e277c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e277cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2780: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e2780u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3000u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3000u, _value); } while (0);
    // 0x3e2784: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3e2784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2788: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e2788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e278c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2790: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2794: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2798: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e279c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3e279cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3010u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3010u, _value); } while (0);
    // 0x3e27a0: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x3e27a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e27a4: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3e27a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e27a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e27ac: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e27acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e27b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e27b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e27b4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3e27b4u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3020u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3020u, _value); } while (0);
    // 0x3e27b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e27bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e27c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e27c4: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x3e27c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e27c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e27c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e27cc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e27ccu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3030u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3030u, _value); } while (0);
    // 0x3e27d0: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x3e27d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e27d4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e27d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e27d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e27dc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3e27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3e27e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e27e4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e27e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e27e8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e27e8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3040u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3040u, _value); } while (0);
    // 0x3e27ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e27f0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e27f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e27f4: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x3e27f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e27f8: 0xe7a8000c  swc1        $f8, 0xC($sp)
    ctx->pc = 0x3e27f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e27fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2800: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2804: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2804u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3050u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3050u, _value); } while (0);
    // 0x3e2808: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e280c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e280cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e2810: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x3e2810u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2814: 0xe7af000c  swc1        $f15, 0xC($sp)
    ctx->pc = 0x3e2814u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2818: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e281c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e281cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2820: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2820u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3060u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3060u, _value); } while (0);
    // 0x3e2824: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2828: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e282c: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x3e282cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2830: 0xe7a9000c  swc1        $f9, 0xC($sp)
    ctx->pc = 0x3e2830u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2834: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2838: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e283c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e283cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3070u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3070u, _value); } while (0);
    // 0x3e2840: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2844: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e2848: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x3e2848u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e284c: 0xe7aa000c  swc1        $f10, 0xC($sp)
    ctx->pc = 0x3e284cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2850: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2854: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2858: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2858u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3080u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3080u, _value); } while (0);
    // 0x3e285c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2860: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e2864: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x3e2864u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2868: 0xe7b0000c  swc1        $f16, 0xC($sp)
    ctx->pc = 0x3e2868u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e286c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e286cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2870: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2874: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2874u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3090u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3090u, _value); } while (0);
    // 0x3e2878: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e287c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e2880: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2884: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x3e2884u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2888: 0xe7b1000c  swc1        $f17, 0xC($sp)
    ctx->pc = 0x3e2888u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e288c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e288cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2890: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2890u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F30A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F30A0u, _value); } while (0);
    // 0x3e2894: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x3e2894u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2898: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e289c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e289cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e28a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e28a4: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x3e28a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e28a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e28a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e28ac: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e28acu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F30B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F30B0u, _value); } while (0);
    // 0x3e28b0: 0xe7ad0008  swc1        $f13, 0x8($sp)
    ctx->pc = 0x3e28b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e28b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e28b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e28b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e28bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e28c0: 0xe7ab000c  swc1        $f11, 0xC($sp)
    ctx->pc = 0x3e28c0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e28c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e28c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e28c8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e28c8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F30C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F30C0u, _value); } while (0);
    // 0x3e28cc: 0xe7ab0008  swc1        $f11, 0x8($sp)
    ctx->pc = 0x3e28ccu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e28d0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e28d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e28d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e28d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e28d8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e28dc: 0xe7ad000c  swc1        $f13, 0xC($sp)
    ctx->pc = 0x3e28dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e28e0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e28e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e28e4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e28e4u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F30D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F30D0u, _value); } while (0);
    // 0x3e28e8: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x3e28e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e28ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e28ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e28f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e28f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e28f8: 0xe7ae000c  swc1        $f14, 0xC($sp)
    ctx->pc = 0x3e28f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e28fc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e28fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2900: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2900u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F30E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F30E0u, _value); } while (0);
    // 0x3e2904: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x3e2904u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2908: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e290c: 0xe7b2000c  swc1        $f18, 0xC($sp)
    ctx->pc = 0x3e290cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2910: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2914: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2918: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e291c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e291cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F30F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F30F0u, _value); } while (0);
    // 0x3e2920: 0xe7ab0008  swc1        $f11, 0x8($sp)
    ctx->pc = 0x3e2920u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2924: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e2928: 0xe7b3000c  swc1        $f19, 0xC($sp)
    ctx->pc = 0x3e2928u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e292c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2930: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2934: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2938: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2938u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3100u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3100u, _value); } while (0);
    // 0x3e293c: 0xe7ad0008  swc1        $f13, 0x8($sp)
    ctx->pc = 0x3e293cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2940: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e2940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e2944: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x3e2944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2948: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e294c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2950: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2954: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2954u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3110u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3110u, _value); } while (0);
    // 0x3e2958: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x3e2958u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e295c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3e295cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2960: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2964: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2968: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e296c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x3e296cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3120u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3120u, _value); } while (0);
    // 0x3e2970: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2974: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2978: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e297c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e297cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e2980: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e2980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2984: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3e2984u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3130u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3130u, _value); } while (0);
    // 0x3e2988: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e298c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3e298cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3e2990: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2994: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2998: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e299c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e299cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e29a0: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3e29a0u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3140u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3140u, _value); } while (0);
    // 0x3e29a4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3e29a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e29a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e29ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e29acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e29b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e29b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e29b4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e29b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e29b8: 0x7d220010  sq          $v0, 0x10($t1)
    ctx->pc = 0x3e29b8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F3150u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F3150u, _value); } while (0);
label_3e29bc:
    // 0x3e29bc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3e29bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e29c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E29C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E29C0u;
        // 0x3e29c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E29C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E29C8u;
}
