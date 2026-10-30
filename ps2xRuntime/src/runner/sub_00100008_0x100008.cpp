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

// Function: sub_00100008
// Address: 0x100008 - 0x100100
void sub_00100008_0x100008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100008_0x100008");
#endif

    ctx->pc = 0x100008u;

    // 0x100008: 0x70000c28  padduw      $at, $zero, $zero
    ctx->pc = 0x100008u;
    SET_GPR_VEC(ctx, 1, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10000c: 0x70001428  padduw      $v0, $zero, $zero
    ctx->pc = 0x10000cu;
    SET_GPR_VEC(ctx, 2, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100010: 0x70001c28  padduw      $v1, $zero, $zero
    ctx->pc = 0x100010u;
    SET_GPR_VEC(ctx, 3, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100014: 0x70002428  padduw      $a0, $zero, $zero
    ctx->pc = 0x100014u;
    SET_GPR_VEC(ctx, 4, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100018: 0x70002c28  padduw      $a1, $zero, $zero
    ctx->pc = 0x100018u;
    SET_GPR_VEC(ctx, 5, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10001c: 0x70003428  padduw      $a2, $zero, $zero
    ctx->pc = 0x10001cu;
    SET_GPR_VEC(ctx, 6, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100020: 0x70003c28  padduw      $a3, $zero, $zero
    ctx->pc = 0x100020u;
    SET_GPR_VEC(ctx, 7, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100024: 0x70004428  padduw      $t0, $zero, $zero
    ctx->pc = 0x100024u;
    SET_GPR_VEC(ctx, 8, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100028: 0x70004c28  padduw      $t1, $zero, $zero
    ctx->pc = 0x100028u;
    SET_GPR_VEC(ctx, 9, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10002c: 0x70005428  padduw      $t2, $zero, $zero
    ctx->pc = 0x10002cu;
    SET_GPR_VEC(ctx, 10, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100030: 0x70005c28  padduw      $t3, $zero, $zero
    ctx->pc = 0x100030u;
    SET_GPR_VEC(ctx, 11, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100034: 0x70006428  padduw      $t4, $zero, $zero
    ctx->pc = 0x100034u;
    SET_GPR_VEC(ctx, 12, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100038: 0x70006c28  padduw      $t5, $zero, $zero
    ctx->pc = 0x100038u;
    SET_GPR_VEC(ctx, 13, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10003c: 0x70007428  padduw      $t6, $zero, $zero
    ctx->pc = 0x10003cu;
    SET_GPR_VEC(ctx, 14, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100040: 0x70007c28  padduw      $t7, $zero, $zero
    ctx->pc = 0x100040u;
    SET_GPR_VEC(ctx, 15, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100044: 0x70008428  padduw      $s0, $zero, $zero
    ctx->pc = 0x100044u;
    SET_GPR_VEC(ctx, 16, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100048: 0x70008c28  padduw      $s1, $zero, $zero
    ctx->pc = 0x100048u;
    SET_GPR_VEC(ctx, 17, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10004c: 0x70009428  padduw      $s2, $zero, $zero
    ctx->pc = 0x10004cu;
    SET_GPR_VEC(ctx, 18, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100050: 0x70009c28  padduw      $s3, $zero, $zero
    ctx->pc = 0x100050u;
    SET_GPR_VEC(ctx, 19, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100054: 0x7000a428  padduw      $s4, $zero, $zero
    ctx->pc = 0x100054u;
    SET_GPR_VEC(ctx, 20, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100058: 0x7000ac28  padduw      $s5, $zero, $zero
    ctx->pc = 0x100058u;
    SET_GPR_VEC(ctx, 21, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10005c: 0x7000b428  padduw      $s6, $zero, $zero
    ctx->pc = 0x10005cu;
    SET_GPR_VEC(ctx, 22, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100060: 0x7000bc28  padduw      $s7, $zero, $zero
    ctx->pc = 0x100060u;
    SET_GPR_VEC(ctx, 23, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100064: 0x7000c428  padduw      $t8, $zero, $zero
    ctx->pc = 0x100064u;
    SET_GPR_VEC(ctx, 24, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100068: 0x7000cc28  padduw      $t9, $zero, $zero
    ctx->pc = 0x100068u;
    SET_GPR_VEC(ctx, 25, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10006c: 0x7000e428  padduw      $gp, $zero, $zero
    ctx->pc = 0x10006cu;
    SET_GPR_VEC(ctx, 28, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100070: 0x7000ec28  padduw      $sp, $zero, $zero
    ctx->pc = 0x100070u;
    SET_GPR_VEC(ctx, 29, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100074: 0x7000f428  padduw      $fp, $zero, $zero
    ctx->pc = 0x100074u;
    SET_GPR_VEC(ctx, 30, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100078: 0x7000fc28  padduw      $ra, $zero, $zero
    ctx->pc = 0x100078u;
    SET_GPR_VEC(ctx, 31, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10007c: 0x11  mthi        $zero
    ctx->pc = 0x10007cu;
    ctx->hi = GPR_U64(ctx, 0);
    // 0x100080: 0x70000011  mthi1       $zero
    ctx->pc = 0x100080u;
    ctx->hi1 = GPR_U64(ctx, 0);
    // 0x100084: 0x13  mtlo        $zero
    ctx->pc = 0x100084u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x100088: 0x70000013  mtlo1       $zero
    ctx->pc = 0x100088u;
    ctx->lo1 = GPR_U64(ctx, 0);
    // 0x10008c: 0x4190000  mtsah       $zero, 0x0
    ctx->pc = 0x10008cu;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)0) & 0x7) << 4;
    // 0x100090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x100090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100094: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x100094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100098: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x100098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10009c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10009cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1000a0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1000a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1000a4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1000a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1000a8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1000a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1000ac: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1000acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1000b0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1000b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1000b4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1000b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1000b8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1000b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1000bc: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1000bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1000c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1000c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1000c4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1000c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1000c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1000c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1000cc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1000ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1000d0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1000d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1000d4: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x1000d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1000d8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1000d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1000dc: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x1000dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1000e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1000e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1000e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1000e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1000e8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1000e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1000ec: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1000ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1000f0: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1000f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1000f4: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1000f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1000f8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x1000f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1000fc: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x1000fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    ctx->pc = 0x100100u;
}
