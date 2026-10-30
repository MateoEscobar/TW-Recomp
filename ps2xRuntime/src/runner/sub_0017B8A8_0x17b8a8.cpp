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

// Function: sub_0017B8A8
// Address: 0x17b8a8 - 0x17bc28
void sub_0017B8A8_0x17b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8A8_0x17b8a8");
#endif

    switch (ctx->pc) {
        case 0x17b8a8u: goto label_17b8a8;
        case 0x17b8acu: goto label_17b8ac;
        case 0x17b8b0u: goto label_17b8b0;
        case 0x17b8b4u: goto label_17b8b4;
        case 0x17b8b8u: goto label_17b8b8;
        case 0x17b8bcu: goto label_17b8bc;
        case 0x17b8c0u: goto label_17b8c0;
        case 0x17b8c4u: goto label_17b8c4;
        case 0x17b8c8u: goto label_17b8c8;
        case 0x17b8ccu: goto label_17b8cc;
        case 0x17b8d0u: goto label_17b8d0;
        case 0x17b8d4u: goto label_17b8d4;
        case 0x17b8d8u: goto label_17b8d8;
        case 0x17b8dcu: goto label_17b8dc;
        case 0x17b8e0u: goto label_17b8e0;
        case 0x17b8e4u: goto label_17b8e4;
        case 0x17b8e8u: goto label_17b8e8;
        case 0x17b8ecu: goto label_17b8ec;
        case 0x17b8f0u: goto label_17b8f0;
        case 0x17b8f4u: goto label_17b8f4;
        case 0x17b8f8u: goto label_17b8f8;
        case 0x17b8fcu: goto label_17b8fc;
        case 0x17b900u: goto label_17b900;
        case 0x17b904u: goto label_17b904;
        case 0x17b908u: goto label_17b908;
        case 0x17b90cu: goto label_17b90c;
        case 0x17b910u: goto label_17b910;
        case 0x17b914u: goto label_17b914;
        case 0x17b918u: goto label_17b918;
        case 0x17b91cu: goto label_17b91c;
        case 0x17b920u: goto label_17b920;
        case 0x17b924u: goto label_17b924;
        case 0x17b928u: goto label_17b928;
        case 0x17b92cu: goto label_17b92c;
        case 0x17b930u: goto label_17b930;
        case 0x17b934u: goto label_17b934;
        case 0x17b938u: goto label_17b938;
        case 0x17b93cu: goto label_17b93c;
        case 0x17b940u: goto label_17b940;
        case 0x17b944u: goto label_17b944;
        case 0x17b948u: goto label_17b948;
        case 0x17b94cu: goto label_17b94c;
        case 0x17b950u: goto label_17b950;
        case 0x17b954u: goto label_17b954;
        case 0x17b958u: goto label_17b958;
        case 0x17b95cu: goto label_17b95c;
        case 0x17b960u: goto label_17b960;
        case 0x17b964u: goto label_17b964;
        case 0x17b968u: goto label_17b968;
        case 0x17b96cu: goto label_17b96c;
        case 0x17b970u: goto label_17b970;
        case 0x17b974u: goto label_17b974;
        case 0x17b978u: goto label_17b978;
        case 0x17b97cu: goto label_17b97c;
        case 0x17b980u: goto label_17b980;
        case 0x17b984u: goto label_17b984;
        case 0x17b988u: goto label_17b988;
        case 0x17b98cu: goto label_17b98c;
        case 0x17b990u: goto label_17b990;
        case 0x17b994u: goto label_17b994;
        case 0x17b998u: goto label_17b998;
        case 0x17b99cu: goto label_17b99c;
        case 0x17b9a0u: goto label_17b9a0;
        case 0x17b9a4u: goto label_17b9a4;
        case 0x17b9a8u: goto label_17b9a8;
        case 0x17b9acu: goto label_17b9ac;
        case 0x17b9b0u: goto label_17b9b0;
        case 0x17b9b4u: goto label_17b9b4;
        case 0x17b9b8u: goto label_17b9b8;
        case 0x17b9bcu: goto label_17b9bc;
        case 0x17b9c0u: goto label_17b9c0;
        case 0x17b9c4u: goto label_17b9c4;
        case 0x17b9c8u: goto label_17b9c8;
        case 0x17b9ccu: goto label_17b9cc;
        case 0x17b9d0u: goto label_17b9d0;
        case 0x17b9d4u: goto label_17b9d4;
        case 0x17b9d8u: goto label_17b9d8;
        case 0x17b9dcu: goto label_17b9dc;
        case 0x17b9e0u: goto label_17b9e0;
        case 0x17b9e4u: goto label_17b9e4;
        case 0x17b9e8u: goto label_17b9e8;
        case 0x17b9ecu: goto label_17b9ec;
        case 0x17b9f0u: goto label_17b9f0;
        case 0x17b9f4u: goto label_17b9f4;
        case 0x17b9f8u: goto label_17b9f8;
        case 0x17b9fcu: goto label_17b9fc;
        case 0x17ba00u: goto label_17ba00;
        case 0x17ba04u: goto label_17ba04;
        case 0x17ba08u: goto label_17ba08;
        case 0x17ba0cu: goto label_17ba0c;
        case 0x17ba10u: goto label_17ba10;
        case 0x17ba14u: goto label_17ba14;
        case 0x17ba18u: goto label_17ba18;
        case 0x17ba1cu: goto label_17ba1c;
        case 0x17ba20u: goto label_17ba20;
        case 0x17ba24u: goto label_17ba24;
        case 0x17ba28u: goto label_17ba28;
        case 0x17ba2cu: goto label_17ba2c;
        case 0x17ba30u: goto label_17ba30;
        case 0x17ba34u: goto label_17ba34;
        case 0x17ba38u: goto label_17ba38;
        case 0x17ba3cu: goto label_17ba3c;
        case 0x17ba40u: goto label_17ba40;
        case 0x17ba44u: goto label_17ba44;
        case 0x17ba48u: goto label_17ba48;
        case 0x17ba4cu: goto label_17ba4c;
        case 0x17ba50u: goto label_17ba50;
        case 0x17ba54u: goto label_17ba54;
        case 0x17ba58u: goto label_17ba58;
        case 0x17ba5cu: goto label_17ba5c;
        case 0x17ba60u: goto label_17ba60;
        case 0x17ba64u: goto label_17ba64;
        case 0x17ba68u: goto label_17ba68;
        case 0x17ba6cu: goto label_17ba6c;
        case 0x17ba70u: goto label_17ba70;
        case 0x17ba74u: goto label_17ba74;
        case 0x17ba78u: goto label_17ba78;
        case 0x17ba7cu: goto label_17ba7c;
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba84u: goto label_17ba84;
        case 0x17ba88u: goto label_17ba88;
        case 0x17ba8cu: goto label_17ba8c;
        case 0x17ba90u: goto label_17ba90;
        case 0x17ba94u: goto label_17ba94;
        case 0x17ba98u: goto label_17ba98;
        case 0x17ba9cu: goto label_17ba9c;
        case 0x17baa0u: goto label_17baa0;
        case 0x17baa4u: goto label_17baa4;
        case 0x17baa8u: goto label_17baa8;
        case 0x17baacu: goto label_17baac;
        case 0x17bab0u: goto label_17bab0;
        case 0x17bab4u: goto label_17bab4;
        case 0x17bab8u: goto label_17bab8;
        case 0x17babcu: goto label_17babc;
        case 0x17bac0u: goto label_17bac0;
        case 0x17bac4u: goto label_17bac4;
        case 0x17bac8u: goto label_17bac8;
        case 0x17baccu: goto label_17bacc;
        case 0x17bad0u: goto label_17bad0;
        case 0x17bad4u: goto label_17bad4;
        case 0x17bad8u: goto label_17bad8;
        case 0x17badcu: goto label_17badc;
        case 0x17bae0u: goto label_17bae0;
        case 0x17bae4u: goto label_17bae4;
        case 0x17bae8u: goto label_17bae8;
        case 0x17baecu: goto label_17baec;
        case 0x17baf0u: goto label_17baf0;
        case 0x17baf4u: goto label_17baf4;
        case 0x17baf8u: goto label_17baf8;
        case 0x17bafcu: goto label_17bafc;
        case 0x17bb00u: goto label_17bb00;
        case 0x17bb04u: goto label_17bb04;
        case 0x17bb08u: goto label_17bb08;
        case 0x17bb0cu: goto label_17bb0c;
        case 0x17bb10u: goto label_17bb10;
        case 0x17bb14u: goto label_17bb14;
        case 0x17bb18u: goto label_17bb18;
        case 0x17bb1cu: goto label_17bb1c;
        case 0x17bb20u: goto label_17bb20;
        case 0x17bb24u: goto label_17bb24;
        case 0x17bb28u: goto label_17bb28;
        case 0x17bb2cu: goto label_17bb2c;
        case 0x17bb30u: goto label_17bb30;
        case 0x17bb34u: goto label_17bb34;
        case 0x17bb38u: goto label_17bb38;
        case 0x17bb3cu: goto label_17bb3c;
        case 0x17bb40u: goto label_17bb40;
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb48u: goto label_17bb48;
        case 0x17bb4cu: goto label_17bb4c;
        case 0x17bb50u: goto label_17bb50;
        case 0x17bb54u: goto label_17bb54;
        case 0x17bb58u: goto label_17bb58;
        case 0x17bb5cu: goto label_17bb5c;
        case 0x17bb60u: goto label_17bb60;
        case 0x17bb64u: goto label_17bb64;
        case 0x17bb68u: goto label_17bb68;
        case 0x17bb6cu: goto label_17bb6c;
        case 0x17bb70u: goto label_17bb70;
        case 0x17bb74u: goto label_17bb74;
        case 0x17bb78u: goto label_17bb78;
        case 0x17bb7cu: goto label_17bb7c;
        case 0x17bb80u: goto label_17bb80;
        case 0x17bb84u: goto label_17bb84;
        case 0x17bb88u: goto label_17bb88;
        case 0x17bb8cu: goto label_17bb8c;
        case 0x17bb90u: goto label_17bb90;
        case 0x17bb94u: goto label_17bb94;
        case 0x17bb98u: goto label_17bb98;
        case 0x17bb9cu: goto label_17bb9c;
        case 0x17bba0u: goto label_17bba0;
        case 0x17bba4u: goto label_17bba4;
        case 0x17bba8u: goto label_17bba8;
        case 0x17bbacu: goto label_17bbac;
        case 0x17bbb0u: goto label_17bbb0;
        case 0x17bbb4u: goto label_17bbb4;
        case 0x17bbb8u: goto label_17bbb8;
        case 0x17bbbcu: goto label_17bbbc;
        case 0x17bbc0u: goto label_17bbc0;
        case 0x17bbc4u: goto label_17bbc4;
        case 0x17bbc8u: goto label_17bbc8;
        case 0x17bbccu: goto label_17bbcc;
        case 0x17bbd0u: goto label_17bbd0;
        case 0x17bbd4u: goto label_17bbd4;
        case 0x17bbd8u: goto label_17bbd8;
        case 0x17bbdcu: goto label_17bbdc;
        case 0x17bbe0u: goto label_17bbe0;
        case 0x17bbe4u: goto label_17bbe4;
        case 0x17bbe8u: goto label_17bbe8;
        case 0x17bbecu: goto label_17bbec;
        case 0x17bbf0u: goto label_17bbf0;
        case 0x17bbf4u: goto label_17bbf4;
        case 0x17bbf8u: goto label_17bbf8;
        case 0x17bbfcu: goto label_17bbfc;
        case 0x17bc00u: goto label_17bc00;
        case 0x17bc04u: goto label_17bc04;
        case 0x17bc08u: goto label_17bc08;
        case 0x17bc0cu: goto label_17bc0c;
        case 0x17bc10u: goto label_17bc10;
        case 0x17bc14u: goto label_17bc14;
        case 0x17bc18u: goto label_17bc18;
        case 0x17bc1cu: goto label_17bc1c;
        case 0x17bc20u: goto label_17bc20;
        case 0x17bc24u: goto label_17bc24;
        default: break;
    }

    ctx->pc = 0x17b8a8u;

label_17b8a8:
    // 0x17b8a8: 0x27bddea0  addiu       $sp, $sp, -0x2160
    ctx->pc = 0x17b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958752));
label_17b8ac:
    // 0x17b8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b8b0:
    // 0x17b8b0: 0x7fb020f0  sq          $s0, 0x20F0($sp)
    ctx->pc = 0x17b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8432), GPR_VEC(ctx, 16));
label_17b8b4:
    // 0x17b8b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17b8b8:
    // 0x17b8b8: 0x7fb120e0  sq          $s1, 0x20E0($sp)
    ctx->pc = 0x17b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8416), GPR_VEC(ctx, 17));
label_17b8bc:
    // 0x17b8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b8c0:
    // 0x17b8c0: 0x7fb220d0  sq          $s2, 0x20D0($sp)
    ctx->pc = 0x17b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8400), GPR_VEC(ctx, 18));
label_17b8c4:
    // 0x17b8c4: 0x7fb320c0  sq          $s3, 0x20C0($sp)
    ctx->pc = 0x17b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8384), GPR_VEC(ctx, 19));
label_17b8c8:
    // 0x17b8c8: 0x7fb420b0  sq          $s4, 0x20B0($sp)
    ctx->pc = 0x17b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8368), GPR_VEC(ctx, 20));
label_17b8cc:
    // 0x17b8cc: 0x7fb520a0  sq          $s5, 0x20A0($sp)
    ctx->pc = 0x17b8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8352), GPR_VEC(ctx, 21));
label_17b8d0:
    // 0x17b8d0: 0x7fb62090  sq          $s6, 0x2090($sp)
    ctx->pc = 0x17b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8336), GPR_VEC(ctx, 22));
label_17b8d4:
    // 0x17b8d4: 0x7fb72080  sq          $s7, 0x2080($sp)
    ctx->pc = 0x17b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8320), GPR_VEC(ctx, 23));
label_17b8d8:
    // 0x17b8d8: 0x7fbe2070  sq          $fp, 0x2070($sp)
    ctx->pc = 0x17b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8304), GPR_VEC(ctx, 30));
label_17b8dc:
    // 0x17b8dc: 0xffbf2060  sd          $ra, 0x2060($sp)
    ctx->pc = 0x17b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8288), GPR_U64(ctx, 31));
label_17b8e0:
    // 0x17b8e0: 0xe7bf2158  swc1        $f31, 0x2158($sp)
    ctx->pc = 0x17b8e0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8536), bits); }
label_17b8e4:
    // 0x17b8e4: 0xe7be2150  swc1        $f30, 0x2150($sp)
    ctx->pc = 0x17b8e4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8528), bits); }
label_17b8e8:
    // 0x17b8e8: 0xe7bd2148  swc1        $f29, 0x2148($sp)
    ctx->pc = 0x17b8e8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8520), bits); }
label_17b8ec:
    // 0x17b8ec: 0xe7bc2140  swc1        $f28, 0x2140($sp)
    ctx->pc = 0x17b8ecu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8512), bits); }
label_17b8f0:
    // 0x17b8f0: 0xe7bb2138  swc1        $f27, 0x2138($sp)
    ctx->pc = 0x17b8f0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8504), bits); }
label_17b8f4:
    // 0x17b8f4: 0xe7ba2130  swc1        $f26, 0x2130($sp)
    ctx->pc = 0x17b8f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8496), bits); }
label_17b8f8:
    // 0x17b8f8: 0xe7b92128  swc1        $f25, 0x2128($sp)
    ctx->pc = 0x17b8f8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8488), bits); }
label_17b8fc:
    // 0x17b8fc: 0xe7b82120  swc1        $f24, 0x2120($sp)
    ctx->pc = 0x17b8fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8480), bits); }
label_17b900:
    // 0x17b900: 0xe7b72118  swc1        $f23, 0x2118($sp)
    ctx->pc = 0x17b900u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8472), bits); }
label_17b904:
    // 0x17b904: 0xe7b62110  swc1        $f22, 0x2110($sp)
    ctx->pc = 0x17b904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8464), bits); }
label_17b908:
    // 0x17b908: 0xe7b52108  swc1        $f21, 0x2108($sp)
    ctx->pc = 0x17b908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8456), bits); }
label_17b90c:
    // 0x17b90c: 0xe7b42100  swc1        $f20, 0x2100($sp)
    ctx->pc = 0x17b90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8448), bits); }
label_17b910:
    // 0x17b910: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_17b914:
    // 0x17b914: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x17b914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b918:
    // 0x17b918: 0x9211002c  lbu         $s1, 0x2C($s0)
    ctx->pc = 0x17b918u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_17b91c:
    // 0x17b91c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b91cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b920:
    // 0x17b920: 0x0  nop
    ctx->pc = 0x17b920u;
    // NOP
label_17b924:
    // 0x17b924: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17b928:
    if (ctx->pc == 0x17B928u) {
        ctx->pc = 0x17B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B924u;
        // 0x17b928: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B92Cu;
        goto label_17b92c;
    }
    ctx->pc = 0x17B924u;
    {
        const bool branch_taken_0x17b924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B924u;
        // 0x17b928: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b924) {
            ctx->pc = 0x17B934u;
            goto label_17b934;
        }
    }
    ctx->pc = 0x17B92Cu;
label_17b92c:
    // 0x17b92c: 0x10000009  b           . + 4 + (0x9 << 2)
label_17b930:
    if (ctx->pc == 0x17B930u) {
        ctx->pc = 0x17B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B92Cu;
        // 0x17b930: 0x46000f86  mov.s       $f30, $f1 (Delay Slot)
        ctx->f[30] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B934u;
        goto label_17b934;
    }
    ctx->pc = 0x17B92Cu;
    {
        const bool branch_taken_0x17b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B92Cu;
        // 0x17b930: 0x46000f86  mov.s       $f30, $f1 (Delay Slot)
        ctx->f[30] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b92c) {
            ctx->pc = 0x17B954u;
            goto label_17b954;
        }
    }
    ctx->pc = 0x17B934u;
label_17b934:
    // 0x17b934: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x17b934u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b938:
    // 0x17b938: 0x0  nop
    ctx->pc = 0x17b938u;
    // NOP
label_17b93c:
    // 0x17b93c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17b93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17b940:
    // 0x17b940: 0x3c01c0c9  lui         $at, 0xC0C9
    ctx->pc = 0x17b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49353 << 16));
label_17b944:
    // 0x17b944: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17b944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_17b948:
    // 0x17b948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b94c:
    // 0x17b94c: 0x0  nop
    ctx->pc = 0x17b94cu;
    // NOP
label_17b950:
    // 0x17b950: 0x46010783  div.s       $f30, $f0, $f1
    ctx->pc = 0x17b950u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[30] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_17b954:
    // 0x17b954: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x17b954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17b958:
    // 0x17b958: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17b958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17b95c:
    // 0x17b95c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17b95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17b960:
    // 0x17b960: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x17b960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_17b964:
    // 0x17b964: 0x27a62000  addiu       $a2, $sp, 0x2000
    ctx->pc = 0x17b964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8192));
label_17b968:
    // 0x17b968: 0x7fa22000  sq          $v0, 0x2000($sp)
    ctx->pc = 0x17b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8192), GPR_VEC(ctx, 2));
label_17b96c:
    // 0x17b96c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17b96cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b970:
    // 0x17b970: 0xe7bf2050  swc1        $f31, 0x2050($sp)
    ctx->pc = 0x17b970u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8272), bits); }
label_17b974:
    // 0x17b974: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17b978:
    // 0x17b978: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_17b97c:
    // 0x17b97c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17b980:
    // 0x17b980: 0x60f809  jalr        $v1
label_17b984:
    if (ctx->pc == 0x17B984u) {
        ctx->pc = 0x17B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B980u;
        // 0x17b984: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B988u;
        goto label_17b988;
    }
    ctx->pc = 0x17B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17B988u);
        ctx->pc = 0x17B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B980u;
        // 0x17b984: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B980u, 0x17B988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B988u;
label_17b988:
    // 0x17b988: 0x8e15005c  lw          $s5, 0x5C($s0)
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_17b98c:
    // 0x17b98c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_17b990:
    if (ctx->pc == 0x17B990u) {
        ctx->pc = 0x17B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B98Cu;
        // 0x17b990: 0x27a42040  addiu       $a0, $sp, 0x2040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B994u;
        goto label_17b994;
    }
    ctx->pc = 0x17B98Cu;
    {
        const bool branch_taken_0x17b98c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B98Cu;
        // 0x17b990: 0x27a42040  addiu       $a0, $sp, 0x2040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b98c) {
            ctx->pc = 0x17B9A4u;
            goto label_17b9a4;
        }
    }
    ctx->pc = 0x17B994u;
label_17b994:
    // 0x17b994: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x17b994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b998:
    // 0x17b998: 0x27b62010  addiu       $s6, $sp, 0x2010
    ctx->pc = 0x17b998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 8208));
label_17b99c:
    // 0x17b99c: 0xe7a02050  swc1        $f0, 0x2050($sp)
    ctx->pc = 0x17b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8272), bits); }
label_17b9a0:
    // 0x17b9a0: 0xc61f0050  lwc1        $f31, 0x50($s0)
    ctx->pc = 0x17b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_17b9a4:
    // 0x17b9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b9a8:
    // 0x17b9a8: 0x6a020043  ldl         $v0, 0x43($s0)
    ctx->pc = 0x17b9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_17b9ac:
    // 0x17b9ac: 0x6e02003c  ldr         $v0, 0x3C($s0)
    ctx->pc = 0x17b9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_17b9b0:
    // 0x17b9b0: 0x6a03004b  ldl         $v1, 0x4B($s0)
    ctx->pc = 0x17b9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_17b9b4:
    // 0x17b9b4: 0x6e030044  ldr         $v1, 0x44($s0)
    ctx->pc = 0x17b9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_17b9b8:
    // 0x17b9b8: 0xb3a22027  sdl         $v0, 0x2027($sp)
    ctx->pc = 0x17b9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b9bc:
    // 0x17b9bc: 0xb7a22020  sdr         $v0, 0x2020($sp)
    ctx->pc = 0x17b9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b9c0:
    // 0x17b9c0: 0xb3a3202f  sdl         $v1, 0x202F($sp)
    ctx->pc = 0x17b9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b9c4:
    // 0x17b9c4: 0xb7a32028  sdr         $v1, 0x2028($sp)
    ctx->pc = 0x17b9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b9c8:
    // 0x17b9c8: 0xc10c1fa  jal         func_4307E8
label_17b9cc:
    if (ctx->pc == 0x17B9CCu) {
        ctx->pc = 0x17B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9C8u;
        // 0x17b9cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B9D0u;
        goto label_17b9d0;
    }
    ctx->pc = 0x17B9C8u;
    SET_GPR_U32(ctx, 31, 0x17B9D0u);
    ctx->pc = 0x17B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9C8u;
    // 0x17b9cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x17B9C8u, 0x17B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B9D0u;
label_17b9d0:
    // 0x17b9d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17b9d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b9d4:
    // 0x17b9d4: 0xc61d0010  lwc1        $f29, 0x10($s0)
    ctx->pc = 0x17b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17b9d8:
    // 0x17b9d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17b9dc:
    // 0x17b9dc: 0xc61c0014  lwc1        $f28, 0x14($s0)
    ctx->pc = 0x17b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17b9e0:
    // 0x17b9e0: 0xafa2205c  sw          $v0, 0x205C($sp)
    ctx->pc = 0x17b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8284), GPR_U32(ctx, 2));
label_17b9e4:
    // 0x17b9e4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x17b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b9e8:
    // 0x17b9e8: 0xe7a02054  swc1        $f0, 0x2054($sp)
    ctx->pc = 0x17b9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8276), bits); }
label_17b9ec:
    // 0x17b9ec: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x17b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b9f0:
    // 0x17b9f0: 0xe7a22058  swc1        $f2, 0x2058($sp)
    ctx->pc = 0x17b9f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8280), bits); }
label_17b9f4:
    // 0x17b9f4: 0xc61800b0  lwc1        $f24, 0xB0($s0)
    ctx->pc = 0x17b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17b9f8:
    // 0x17b9f8: 0x921e00b5  lbu         $fp, 0xB5($s0)
    ctx->pc = 0x17b9f8u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_17b9fc:
    // 0x17b9fc: 0x921700b4  lbu         $s7, 0xB4($s0)
    ctx->pc = 0x17b9fcu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 180)));
label_17ba00:
    // 0x17ba00: 0xc6160020  lwc1        $f22, 0x20($s0)
    ctx->pc = 0x17ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17ba04:
    // 0x17ba04: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_17ba08:
    if (ctx->pc == 0x17BA08u) {
        ctx->pc = 0x17BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA04u;
        // 0x17ba08: 0xc6150024  lwc1        $f21, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA0Cu;
        goto label_17ba0c;
    }
    ctx->pc = 0x17BA04u;
    {
        const bool branch_taken_0x17ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA04u;
        // 0x17ba08: 0xc6150024  lwc1        $f21, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba04) {
            ctx->pc = 0x17BBA4u;
            goto label_17bba4;
        }
    }
    ctx->pc = 0x17BA0Cu;
label_17ba0c:
    // 0x17ba0c: 0x0  nop
    ctx->pc = 0x17ba0cu;
    // NOP
label_17ba10:
    // 0x17ba10: 0xc12e310  jal         func_4B8C40
label_17ba14:
    if (ctx->pc == 0x17BA14u) {
        ctx->pc = 0x17BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA10u;
        // 0x17ba14: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA18u;
        goto label_17ba18;
    }
    ctx->pc = 0x17BA10u;
    SET_GPR_U32(ctx, 31, 0x17BA18u);
    ctx->pc = 0x17BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA10u;
    // 0x17ba14: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17BA10u, 0x17BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA18u;
label_17ba18:
    // 0x17ba18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x17ba18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_17ba1c:
    // 0x17ba1c: 0xc12e29c  jal         func_4B8A70
label_17ba20:
    if (ctx->pc == 0x17BA20u) {
        ctx->pc = 0x17BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA1Cu;
        // 0x17ba20: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA24u;
        goto label_17ba24;
    }
    ctx->pc = 0x17BA1Cu;
    SET_GPR_U32(ctx, 31, 0x17BA24u);
    ctx->pc = 0x17BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA1Cu;
    // 0x17ba20: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17BA1Cu, 0x17BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA24u;
label_17ba24:
    // 0x17ba24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17ba24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_17ba28:
    // 0x17ba28: 0xc12e310  jal         func_4B8C40
label_17ba2c:
    if (ctx->pc == 0x17BA2Cu) {
        ctx->pc = 0x17BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA28u;
        // 0x17ba2c: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA30u;
        goto label_17ba30;
    }
    ctx->pc = 0x17BA28u;
    SET_GPR_U32(ctx, 31, 0x17BA30u);
    ctx->pc = 0x17BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA28u;
    // 0x17ba2c: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17BA28u, 0x17BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA30u;
label_17ba30:
    // 0x17ba30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17ba30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17ba34:
    // 0x17ba34: 0xc12e29c  jal         func_4B8A70
label_17ba38:
    if (ctx->pc == 0x17BA38u) {
        ctx->pc = 0x17BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA34u;
        // 0x17ba38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA3Cu;
        goto label_17ba3c;
    }
    ctx->pc = 0x17BA34u;
    SET_GPR_U32(ctx, 31, 0x17BA3Cu);
    ctx->pc = 0x17BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA34u;
    // 0x17ba38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17BA34u, 0x17BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA3Cu;
label_17ba3c:
    // 0x17ba3c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_17ba40:
    if (ctx->pc == 0x17BA40u) {
        ctx->pc = 0x17BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA3Cu;
        // 0x17ba40: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA44u;
        goto label_17ba44;
    }
    ctx->pc = 0x17BA3Cu;
    {
        const bool branch_taken_0x17ba3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA3Cu;
        // 0x17ba40: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba3c) {
            ctx->pc = 0x17BA78u;
            goto label_17ba78;
        }
    }
    ctx->pc = 0x17BA44u;
label_17ba44:
    // 0x17ba44: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x17ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ba48:
    // 0x17ba48: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x17ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ba4c:
    // 0x17ba4c: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x17ba4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
label_17ba50:
    // 0x17ba50: 0xc7a22050  lwc1        $f2, 0x2050($sp)
    ctx->pc = 0x17ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17ba54:
    // 0x17ba54: 0x4601e042  mul.s       $f1, $f28, $f1
    ctx->pc = 0x17ba54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[1]);
label_17ba58:
    // 0x17ba58: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x17ba58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_17ba5c:
    // 0x17ba5c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x17ba5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_17ba60:
    // 0x17ba60: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x17ba60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_17ba64:
    // 0x17ba64: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x17ba64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_17ba68:
    // 0x17ba68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17ba68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_17ba6c:
    // 0x17ba6c: 0x4601f841  sub.s       $f1, $f31, $f1
    ctx->pc = 0x17ba6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], ctx->f[1]);
label_17ba70:
    // 0x17ba70: 0xe7a02010  swc1        $f0, 0x2010($sp)
    ctx->pc = 0x17ba70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8208), bits); }
label_17ba74:
    // 0x17ba74: 0xe7a12014  swc1        $f1, 0x2014($sp)
    ctx->pc = 0x17ba74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8212), bits); }
label_17ba78:
    // 0x17ba78: 0xc7a22058  lwc1        $f2, 0x2058($sp)
    ctx->pc = 0x17ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17ba7c:
    // 0x17ba7c: 0x449e2000  mtc1        $fp, $f4
    ctx->pc = 0x17ba7cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_17ba80:
    // 0x17ba80: 0x0  nop
    ctx->pc = 0x17ba80u;
    // NOP
label_17ba84:
    // 0x17ba84: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x17ba84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_17ba88:
    // 0x17ba88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17ba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17ba8c:
    // 0x17ba8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17ba8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ba90:
    // 0x17ba90: 0x27b12030  addiu       $s1, $sp, 0x2030
    ctx->pc = 0x17ba90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8240));
label_17ba94:
    // 0x17ba94: 0xc7a32004  lwc1        $f3, 0x2004($sp)
    ctx->pc = 0x17ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17ba98:
    // 0x17ba98: 0x27b22020  addiu       $s2, $sp, 0x2020
    ctx->pc = 0x17ba98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8224));
label_17ba9c:
    // 0x17ba9c: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x17ba9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17baa0:
    // 0x17baa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17baa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17baa4:
    // 0x17baa4: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x17baa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_17baa8:
    // 0x17baa8: 0xc7a02054  lwc1        $f0, 0x2054($sp)
    ctx->pc = 0x17baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17baac:
    // 0x17baac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17baacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17bab0:
    // 0x17bab0: 0xc7a22000  lwc1        $f2, 0x2000($sp)
    ctx->pc = 0x17bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17bab4:
    // 0x17bab4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17bab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bab8:
    // 0x17bab8: 0x461405c2  mul.s       $f23, $f0, $f20
    ctx->pc = 0x17bab8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_17babc:
    // 0x17babc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x17babcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17bac0:
    // 0x17bac0: 0xc7a02008  lwc1        $f0, 0x2008($sp)
    ctx->pc = 0x17bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bac4:
    // 0x17bac4: 0x46050d02  mul.s       $f20, $f1, $f5
    ctx->pc = 0x17bac4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_17bac8:
    // 0x17bac8: 0xe7a02038  swc1        $f0, 0x2038($sp)
    ctx->pc = 0x17bac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8248), bits); }
label_17bacc:
    // 0x17bacc: 0x4618b842  mul.s       $f1, $f23, $f24
    ctx->pc = 0x17baccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_17bad0:
    // 0x17bad0: 0x4618a002  mul.s       $f0, $f20, $f24
    ctx->pc = 0x17bad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
label_17bad4:
    // 0x17bad4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17bad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_17bad8:
    // 0x17bad8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17bad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_17badc:
    // 0x17badc: 0xe7a12030  swc1        $f1, 0x2030($sp)
    ctx->pc = 0x17badcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8240), bits); }
label_17bae0:
    // 0x17bae0: 0xe7a02034  swc1        $f0, 0x2034($sp)
    ctx->pc = 0x17bae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8244), bits); }
label_17bae4:
    // 0x17bae4: 0xe63b000c  swc1        $f27, 0xC($s1)
    ctx->pc = 0x17bae4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_17bae8:
    // 0x17bae8: 0xe7a4202c  swc1        $f4, 0x202C($sp)
    ctx->pc = 0x17bae8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8236), bits); }
label_17baec:
    // 0x17baec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17baecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17baf0:
    // 0x17baf0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_17baf4:
    // 0x17baf4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x17baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_17baf8:
    // 0x17baf8: 0x60f809  jalr        $v1
label_17bafc:
    if (ctx->pc == 0x17BAFCu) {
        ctx->pc = 0x17BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAF8u;
        // 0x17bafc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB00u;
        goto label_17bb00;
    }
    ctx->pc = 0x17BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BB00u);
        ctx->pc = 0x17BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAF8u;
        // 0x17bafc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAF8u, 0x17BB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BB00u;
label_17bb00:
    // 0x17bb00: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
label_17bb04:
    if (ctx->pc == 0x17BB04u) {
        ctx->pc = 0x17BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB00u;
        // 0x17bb04: 0xc7a22050  lwc1        $f2, 0x2050($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB08u;
        goto label_17bb08;
    }
    ctx->pc = 0x17BB00u;
    {
        const bool branch_taken_0x17bb00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB00u;
        // 0x17bb04: 0xc7a22050  lwc1        $f2, 0x2050($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb00) {
            ctx->pc = 0x17BB30u;
            goto label_17bb30;
        }
    }
    ctx->pc = 0x17BB08u;
label_17bb08:
    // 0x17bb08: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x17bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bb0c:
    // 0x17bb0c: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x17bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb10:
    // 0x17bb10: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x17bb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
label_17bb14:
    // 0x17bb14: 0x4601e042  mul.s       $f1, $f28, $f1
    ctx->pc = 0x17bb14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[1]);
label_17bb18:
    // 0x17bb18: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x17bb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_17bb1c:
    // 0x17bb1c: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x17bb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_17bb20:
    // 0x17bb20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17bb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_17bb24:
    // 0x17bb24: 0x4601f841  sub.s       $f1, $f31, $f1
    ctx->pc = 0x17bb24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], ctx->f[1]);
label_17bb28:
    // 0x17bb28: 0xe7a02010  swc1        $f0, 0x2010($sp)
    ctx->pc = 0x17bb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8208), bits); }
label_17bb2c:
    // 0x17bb2c: 0xe7a12014  swc1        $f1, 0x2014($sp)
    ctx->pc = 0x17bb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8212), bits); }
label_17bb30:
    // 0x17bb30: 0xc7a12000  lwc1        $f1, 0x2000($sp)
    ctx->pc = 0x17bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb34:
    // 0x17bb34: 0x44971800  mtc1        $s7, $f3
    ctx->pc = 0x17bb34u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17bb38:
    // 0x17bb38: 0x0  nop
    ctx->pc = 0x17bb38u;
    // NOP
label_17bb3c:
    // 0x17bb3c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17bb3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_17bb40:
    // 0x17bb40: 0xc7a22004  lwc1        $f2, 0x2004($sp)
    ctx->pc = 0x17bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17bb44:
    // 0x17bb44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17bb48:
    // 0x17bb48: 0x4601b840  add.s       $f1, $f23, $f1
    ctx->pc = 0x17bb48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_17bb4c:
    // 0x17bb4c: 0xc7a02008  lwc1        $f0, 0x2008($sp)
    ctx->pc = 0x17bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bb50:
    // 0x17bb50: 0x4602a080  add.s       $f2, $f20, $f2
    ctx->pc = 0x17bb50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_17bb54:
    // 0x17bb54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17bb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bb58:
    // 0x17bb58: 0xe7a02038  swc1        $f0, 0x2038($sp)
    ctx->pc = 0x17bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8248), bits); }
label_17bb5c:
    // 0x17bb5c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x17bb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17bb60:
    // 0x17bb60: 0xe7a12030  swc1        $f1, 0x2030($sp)
    ctx->pc = 0x17bb60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8240), bits); }
label_17bb64:
    // 0x17bb64: 0x461eb580  add.s       $f22, $f22, $f30
    ctx->pc = 0x17bb64u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[30]);
label_17bb68:
    // 0x17bb68: 0xe7a22034  swc1        $f2, 0x2034($sp)
    ctx->pc = 0x17bb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8244), bits); }
label_17bb6c:
    // 0x17bb6c: 0x461ead40  add.s       $f21, $f21, $f30
    ctx->pc = 0x17bb6cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
label_17bb70:
    // 0x17bb70: 0xe63b000c  swc1        $f27, 0xC($s1)
    ctx->pc = 0x17bb70u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_17bb74:
    // 0x17bb74: 0xe7a3202c  swc1        $f3, 0x202C($sp)
    ctx->pc = 0x17bb74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8236), bits); }
label_17bb78:
    // 0x17bb78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17bb7c:
    // 0x17bb7c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17bb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_17bb80:
    // 0x17bb80: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x17bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_17bb84:
    // 0x17bb84: 0x60f809  jalr        $v1
label_17bb88:
    if (ctx->pc == 0x17BB88u) {
        ctx->pc = 0x17BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB84u;
        // 0x17bb88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB8Cu;
        goto label_17bb8c;
    }
    ctx->pc = 0x17BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BB8Cu);
        ctx->pc = 0x17BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB84u;
        // 0x17bb88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB84u, 0x17BB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BB8Cu;
label_17bb8c:
    // 0x17bb8c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x17bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17bb90:
    // 0x17bb90: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x17bb90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17bb94:
    // 0x17bb94: 0x8fa2205c  lw          $v0, 0x205C($sp)
    ctx->pc = 0x17bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8284)));
label_17bb98:
    // 0x17bb98: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x17bb98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17bb9c:
    // 0x17bb9c: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
label_17bba0:
    if (ctx->pc == 0x17BBA0u) {
        ctx->pc = 0x17BBA4u;
        goto label_17bba4;
    }
    ctx->pc = 0x17BB9Cu;
    {
        const bool branch_taken_0x17bb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bb9c) {
            ctx->pc = 0x17BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ba10;
        }
    }
    ctx->pc = 0x17BBA4u;
label_17bba4:
    // 0x17bba4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17bba8:
    // 0x17bba8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17bbac:
    // 0x17bbac: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x17bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_17bbb0:
    // 0x17bbb0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17bbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17bbb4:
    // 0x17bbb4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x17bbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_17bbb8:
    // 0x17bbb8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_17bbbc:
    // 0x17bbbc: 0x60f809  jalr        $v1
label_17bbc0:
    if (ctx->pc == 0x17BBC0u) {
        ctx->pc = 0x17BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBBCu;
        // 0x17bbc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BBC4u;
        goto label_17bbc4;
    }
    ctx->pc = 0x17BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BBC4u);
        ctx->pc = 0x17BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBBCu;
        // 0x17bbc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBBCu, 0x17BBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BBC4u;
label_17bbc4:
    // 0x17bbc4: 0x7bb020f0  lq          $s0, 0x20F0($sp)
    ctx->pc = 0x17bbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8432)));
label_17bbc8:
    // 0x17bbc8: 0x7bb120e0  lq          $s1, 0x20E0($sp)
    ctx->pc = 0x17bbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 8416)));
label_17bbcc:
    // 0x17bbcc: 0x7bb220d0  lq          $s2, 0x20D0($sp)
    ctx->pc = 0x17bbccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 8400)));
label_17bbd0:
    // 0x17bbd0: 0x7bb320c0  lq          $s3, 0x20C0($sp)
    ctx->pc = 0x17bbd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 8384)));
label_17bbd4:
    // 0x17bbd4: 0x7bb420b0  lq          $s4, 0x20B0($sp)
    ctx->pc = 0x17bbd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 8368)));
label_17bbd8:
    // 0x17bbd8: 0x7bb520a0  lq          $s5, 0x20A0($sp)
    ctx->pc = 0x17bbd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
label_17bbdc:
    // 0x17bbdc: 0x7bb62090  lq          $s6, 0x2090($sp)
    ctx->pc = 0x17bbdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 8336)));
label_17bbe0:
    // 0x17bbe0: 0x7bb72080  lq          $s7, 0x2080($sp)
    ctx->pc = 0x17bbe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 8320)));
label_17bbe4:
    // 0x17bbe4: 0x7bbe2070  lq          $fp, 0x2070($sp)
    ctx->pc = 0x17bbe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 8304)));
label_17bbe8:
    // 0x17bbe8: 0xdfbf2060  ld          $ra, 0x2060($sp)
    ctx->pc = 0x17bbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8288)));
label_17bbec:
    // 0x17bbec: 0xc7bf2158  lwc1        $f31, 0x2158($sp)
    ctx->pc = 0x17bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_17bbf0:
    // 0x17bbf0: 0xc7be2150  lwc1        $f30, 0x2150($sp)
    ctx->pc = 0x17bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_17bbf4:
    // 0x17bbf4: 0xc7bd2148  lwc1        $f29, 0x2148($sp)
    ctx->pc = 0x17bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17bbf8:
    // 0x17bbf8: 0xc7bc2140  lwc1        $f28, 0x2140($sp)
    ctx->pc = 0x17bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17bbfc:
    // 0x17bbfc: 0xc7bb2138  lwc1        $f27, 0x2138($sp)
    ctx->pc = 0x17bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17bc00:
    // 0x17bc00: 0xc7ba2130  lwc1        $f26, 0x2130($sp)
    ctx->pc = 0x17bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17bc04:
    // 0x17bc04: 0xc7b92128  lwc1        $f25, 0x2128($sp)
    ctx->pc = 0x17bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17bc08:
    // 0x17bc08: 0xc7b82120  lwc1        $f24, 0x2120($sp)
    ctx->pc = 0x17bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17bc0c:
    // 0x17bc0c: 0xc7b72118  lwc1        $f23, 0x2118($sp)
    ctx->pc = 0x17bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17bc10:
    // 0x17bc10: 0xc7b62110  lwc1        $f22, 0x2110($sp)
    ctx->pc = 0x17bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17bc14:
    // 0x17bc14: 0xc7b52108  lwc1        $f21, 0x2108($sp)
    ctx->pc = 0x17bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17bc18:
    // 0x17bc18: 0xc7b42100  lwc1        $f20, 0x2100($sp)
    ctx->pc = 0x17bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17bc1c:
    // 0x17bc1c: 0x3e00008  jr          $ra
label_17bc20:
    if (ctx->pc == 0x17BC20u) {
        ctx->pc = 0x17BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC1Cu;
        // 0x17bc20: 0x27bd2160  addiu       $sp, $sp, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BC24u;
        goto label_17bc24;
    }
    ctx->pc = 0x17BC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC1Cu;
        // 0x17bc20: 0x27bd2160  addiu       $sp, $sp, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC24u;
label_17bc24:
    // 0x17bc24: 0x0  nop
    ctx->pc = 0x17bc24u;
    // NOP
    ctx->pc = 0x17bc28u;
}
