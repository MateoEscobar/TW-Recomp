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

// Function: sub_003F7838
// Address: 0x3f7838 - 0x3f7c78
void sub_003F7838_0x3f7838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7838_0x3f7838");
#endif

    switch (ctx->pc) {
        case 0x3f7838u: goto label_3f7838;
        case 0x3f783cu: goto label_3f783c;
        case 0x3f7840u: goto label_3f7840;
        case 0x3f7844u: goto label_3f7844;
        case 0x3f7848u: goto label_3f7848;
        case 0x3f784cu: goto label_3f784c;
        case 0x3f7850u: goto label_3f7850;
        case 0x3f7854u: goto label_3f7854;
        case 0x3f7858u: goto label_3f7858;
        case 0x3f785cu: goto label_3f785c;
        case 0x3f7860u: goto label_3f7860;
        case 0x3f7864u: goto label_3f7864;
        case 0x3f7868u: goto label_3f7868;
        case 0x3f786cu: goto label_3f786c;
        case 0x3f7870u: goto label_3f7870;
        case 0x3f7874u: goto label_3f7874;
        case 0x3f7878u: goto label_3f7878;
        case 0x3f787cu: goto label_3f787c;
        case 0x3f7880u: goto label_3f7880;
        case 0x3f7884u: goto label_3f7884;
        case 0x3f7888u: goto label_3f7888;
        case 0x3f788cu: goto label_3f788c;
        case 0x3f7890u: goto label_3f7890;
        case 0x3f7894u: goto label_3f7894;
        case 0x3f7898u: goto label_3f7898;
        case 0x3f789cu: goto label_3f789c;
        case 0x3f78a0u: goto label_3f78a0;
        case 0x3f78a4u: goto label_3f78a4;
        case 0x3f78a8u: goto label_3f78a8;
        case 0x3f78acu: goto label_3f78ac;
        case 0x3f78b0u: goto label_3f78b0;
        case 0x3f78b4u: goto label_3f78b4;
        case 0x3f78b8u: goto label_3f78b8;
        case 0x3f78bcu: goto label_3f78bc;
        case 0x3f78c0u: goto label_3f78c0;
        case 0x3f78c4u: goto label_3f78c4;
        case 0x3f78c8u: goto label_3f78c8;
        case 0x3f78ccu: goto label_3f78cc;
        case 0x3f78d0u: goto label_3f78d0;
        case 0x3f78d4u: goto label_3f78d4;
        case 0x3f78d8u: goto label_3f78d8;
        case 0x3f78dcu: goto label_3f78dc;
        case 0x3f78e0u: goto label_3f78e0;
        case 0x3f78e4u: goto label_3f78e4;
        case 0x3f78e8u: goto label_3f78e8;
        case 0x3f78ecu: goto label_3f78ec;
        case 0x3f78f0u: goto label_3f78f0;
        case 0x3f78f4u: goto label_3f78f4;
        case 0x3f78f8u: goto label_3f78f8;
        case 0x3f78fcu: goto label_3f78fc;
        case 0x3f7900u: goto label_3f7900;
        case 0x3f7904u: goto label_3f7904;
        case 0x3f7908u: goto label_3f7908;
        case 0x3f790cu: goto label_3f790c;
        case 0x3f7910u: goto label_3f7910;
        case 0x3f7914u: goto label_3f7914;
        case 0x3f7918u: goto label_3f7918;
        case 0x3f791cu: goto label_3f791c;
        case 0x3f7920u: goto label_3f7920;
        case 0x3f7924u: goto label_3f7924;
        case 0x3f7928u: goto label_3f7928;
        case 0x3f792cu: goto label_3f792c;
        case 0x3f7930u: goto label_3f7930;
        case 0x3f7934u: goto label_3f7934;
        case 0x3f7938u: goto label_3f7938;
        case 0x3f793cu: goto label_3f793c;
        case 0x3f7940u: goto label_3f7940;
        case 0x3f7944u: goto label_3f7944;
        case 0x3f7948u: goto label_3f7948;
        case 0x3f794cu: goto label_3f794c;
        case 0x3f7950u: goto label_3f7950;
        case 0x3f7954u: goto label_3f7954;
        case 0x3f7958u: goto label_3f7958;
        case 0x3f795cu: goto label_3f795c;
        case 0x3f7960u: goto label_3f7960;
        case 0x3f7964u: goto label_3f7964;
        case 0x3f7968u: goto label_3f7968;
        case 0x3f796cu: goto label_3f796c;
        case 0x3f7970u: goto label_3f7970;
        case 0x3f7974u: goto label_3f7974;
        case 0x3f7978u: goto label_3f7978;
        case 0x3f797cu: goto label_3f797c;
        case 0x3f7980u: goto label_3f7980;
        case 0x3f7984u: goto label_3f7984;
        case 0x3f7988u: goto label_3f7988;
        case 0x3f798cu: goto label_3f798c;
        case 0x3f7990u: goto label_3f7990;
        case 0x3f7994u: goto label_3f7994;
        case 0x3f7998u: goto label_3f7998;
        case 0x3f799cu: goto label_3f799c;
        case 0x3f79a0u: goto label_3f79a0;
        case 0x3f79a4u: goto label_3f79a4;
        case 0x3f79a8u: goto label_3f79a8;
        case 0x3f79acu: goto label_3f79ac;
        case 0x3f79b0u: goto label_3f79b0;
        case 0x3f79b4u: goto label_3f79b4;
        case 0x3f79b8u: goto label_3f79b8;
        case 0x3f79bcu: goto label_3f79bc;
        case 0x3f79c0u: goto label_3f79c0;
        case 0x3f79c4u: goto label_3f79c4;
        case 0x3f79c8u: goto label_3f79c8;
        case 0x3f79ccu: goto label_3f79cc;
        case 0x3f79d0u: goto label_3f79d0;
        case 0x3f79d4u: goto label_3f79d4;
        case 0x3f79d8u: goto label_3f79d8;
        case 0x3f79dcu: goto label_3f79dc;
        case 0x3f79e0u: goto label_3f79e0;
        case 0x3f79e4u: goto label_3f79e4;
        case 0x3f79e8u: goto label_3f79e8;
        case 0x3f79ecu: goto label_3f79ec;
        case 0x3f79f0u: goto label_3f79f0;
        case 0x3f79f4u: goto label_3f79f4;
        case 0x3f79f8u: goto label_3f79f8;
        case 0x3f79fcu: goto label_3f79fc;
        case 0x3f7a00u: goto label_3f7a00;
        case 0x3f7a04u: goto label_3f7a04;
        case 0x3f7a08u: goto label_3f7a08;
        case 0x3f7a0cu: goto label_3f7a0c;
        case 0x3f7a10u: goto label_3f7a10;
        case 0x3f7a14u: goto label_3f7a14;
        case 0x3f7a18u: goto label_3f7a18;
        case 0x3f7a1cu: goto label_3f7a1c;
        case 0x3f7a20u: goto label_3f7a20;
        case 0x3f7a24u: goto label_3f7a24;
        case 0x3f7a28u: goto label_3f7a28;
        case 0x3f7a2cu: goto label_3f7a2c;
        case 0x3f7a30u: goto label_3f7a30;
        case 0x3f7a34u: goto label_3f7a34;
        case 0x3f7a38u: goto label_3f7a38;
        case 0x3f7a3cu: goto label_3f7a3c;
        case 0x3f7a40u: goto label_3f7a40;
        case 0x3f7a44u: goto label_3f7a44;
        case 0x3f7a48u: goto label_3f7a48;
        case 0x3f7a4cu: goto label_3f7a4c;
        case 0x3f7a50u: goto label_3f7a50;
        case 0x3f7a54u: goto label_3f7a54;
        case 0x3f7a58u: goto label_3f7a58;
        case 0x3f7a5cu: goto label_3f7a5c;
        case 0x3f7a60u: goto label_3f7a60;
        case 0x3f7a64u: goto label_3f7a64;
        case 0x3f7a68u: goto label_3f7a68;
        case 0x3f7a6cu: goto label_3f7a6c;
        case 0x3f7a70u: goto label_3f7a70;
        case 0x3f7a74u: goto label_3f7a74;
        case 0x3f7a78u: goto label_3f7a78;
        case 0x3f7a7cu: goto label_3f7a7c;
        case 0x3f7a80u: goto label_3f7a80;
        case 0x3f7a84u: goto label_3f7a84;
        case 0x3f7a88u: goto label_3f7a88;
        case 0x3f7a8cu: goto label_3f7a8c;
        case 0x3f7a90u: goto label_3f7a90;
        case 0x3f7a94u: goto label_3f7a94;
        case 0x3f7a98u: goto label_3f7a98;
        case 0x3f7a9cu: goto label_3f7a9c;
        case 0x3f7aa0u: goto label_3f7aa0;
        case 0x3f7aa4u: goto label_3f7aa4;
        case 0x3f7aa8u: goto label_3f7aa8;
        case 0x3f7aacu: goto label_3f7aac;
        case 0x3f7ab0u: goto label_3f7ab0;
        case 0x3f7ab4u: goto label_3f7ab4;
        case 0x3f7ab8u: goto label_3f7ab8;
        case 0x3f7abcu: goto label_3f7abc;
        case 0x3f7ac0u: goto label_3f7ac0;
        case 0x3f7ac4u: goto label_3f7ac4;
        case 0x3f7ac8u: goto label_3f7ac8;
        case 0x3f7accu: goto label_3f7acc;
        case 0x3f7ad0u: goto label_3f7ad0;
        case 0x3f7ad4u: goto label_3f7ad4;
        case 0x3f7ad8u: goto label_3f7ad8;
        case 0x3f7adcu: goto label_3f7adc;
        case 0x3f7ae0u: goto label_3f7ae0;
        case 0x3f7ae4u: goto label_3f7ae4;
        case 0x3f7ae8u: goto label_3f7ae8;
        case 0x3f7aecu: goto label_3f7aec;
        case 0x3f7af0u: goto label_3f7af0;
        case 0x3f7af4u: goto label_3f7af4;
        case 0x3f7af8u: goto label_3f7af8;
        case 0x3f7afcu: goto label_3f7afc;
        case 0x3f7b00u: goto label_3f7b00;
        case 0x3f7b04u: goto label_3f7b04;
        case 0x3f7b08u: goto label_3f7b08;
        case 0x3f7b0cu: goto label_3f7b0c;
        case 0x3f7b10u: goto label_3f7b10;
        case 0x3f7b14u: goto label_3f7b14;
        case 0x3f7b18u: goto label_3f7b18;
        case 0x3f7b1cu: goto label_3f7b1c;
        case 0x3f7b20u: goto label_3f7b20;
        case 0x3f7b24u: goto label_3f7b24;
        case 0x3f7b28u: goto label_3f7b28;
        case 0x3f7b2cu: goto label_3f7b2c;
        case 0x3f7b30u: goto label_3f7b30;
        case 0x3f7b34u: goto label_3f7b34;
        case 0x3f7b38u: goto label_3f7b38;
        case 0x3f7b3cu: goto label_3f7b3c;
        case 0x3f7b40u: goto label_3f7b40;
        case 0x3f7b44u: goto label_3f7b44;
        case 0x3f7b48u: goto label_3f7b48;
        case 0x3f7b4cu: goto label_3f7b4c;
        case 0x3f7b50u: goto label_3f7b50;
        case 0x3f7b54u: goto label_3f7b54;
        case 0x3f7b58u: goto label_3f7b58;
        case 0x3f7b5cu: goto label_3f7b5c;
        case 0x3f7b60u: goto label_3f7b60;
        case 0x3f7b64u: goto label_3f7b64;
        case 0x3f7b68u: goto label_3f7b68;
        case 0x3f7b6cu: goto label_3f7b6c;
        case 0x3f7b70u: goto label_3f7b70;
        case 0x3f7b74u: goto label_3f7b74;
        case 0x3f7b78u: goto label_3f7b78;
        case 0x3f7b7cu: goto label_3f7b7c;
        case 0x3f7b80u: goto label_3f7b80;
        case 0x3f7b84u: goto label_3f7b84;
        case 0x3f7b88u: goto label_3f7b88;
        case 0x3f7b8cu: goto label_3f7b8c;
        case 0x3f7b90u: goto label_3f7b90;
        case 0x3f7b94u: goto label_3f7b94;
        case 0x3f7b98u: goto label_3f7b98;
        case 0x3f7b9cu: goto label_3f7b9c;
        case 0x3f7ba0u: goto label_3f7ba0;
        case 0x3f7ba4u: goto label_3f7ba4;
        case 0x3f7ba8u: goto label_3f7ba8;
        case 0x3f7bacu: goto label_3f7bac;
        case 0x3f7bb0u: goto label_3f7bb0;
        case 0x3f7bb4u: goto label_3f7bb4;
        case 0x3f7bb8u: goto label_3f7bb8;
        case 0x3f7bbcu: goto label_3f7bbc;
        case 0x3f7bc0u: goto label_3f7bc0;
        case 0x3f7bc4u: goto label_3f7bc4;
        case 0x3f7bc8u: goto label_3f7bc8;
        case 0x3f7bccu: goto label_3f7bcc;
        case 0x3f7bd0u: goto label_3f7bd0;
        case 0x3f7bd4u: goto label_3f7bd4;
        case 0x3f7bd8u: goto label_3f7bd8;
        case 0x3f7bdcu: goto label_3f7bdc;
        case 0x3f7be0u: goto label_3f7be0;
        case 0x3f7be4u: goto label_3f7be4;
        case 0x3f7be8u: goto label_3f7be8;
        case 0x3f7becu: goto label_3f7bec;
        case 0x3f7bf0u: goto label_3f7bf0;
        case 0x3f7bf4u: goto label_3f7bf4;
        case 0x3f7bf8u: goto label_3f7bf8;
        case 0x3f7bfcu: goto label_3f7bfc;
        case 0x3f7c00u: goto label_3f7c00;
        case 0x3f7c04u: goto label_3f7c04;
        case 0x3f7c08u: goto label_3f7c08;
        case 0x3f7c0cu: goto label_3f7c0c;
        case 0x3f7c10u: goto label_3f7c10;
        case 0x3f7c14u: goto label_3f7c14;
        case 0x3f7c18u: goto label_3f7c18;
        case 0x3f7c1cu: goto label_3f7c1c;
        case 0x3f7c20u: goto label_3f7c20;
        case 0x3f7c24u: goto label_3f7c24;
        case 0x3f7c28u: goto label_3f7c28;
        case 0x3f7c2cu: goto label_3f7c2c;
        case 0x3f7c30u: goto label_3f7c30;
        case 0x3f7c34u: goto label_3f7c34;
        case 0x3f7c38u: goto label_3f7c38;
        case 0x3f7c3cu: goto label_3f7c3c;
        case 0x3f7c40u: goto label_3f7c40;
        case 0x3f7c44u: goto label_3f7c44;
        case 0x3f7c48u: goto label_3f7c48;
        case 0x3f7c4cu: goto label_3f7c4c;
        case 0x3f7c50u: goto label_3f7c50;
        case 0x3f7c54u: goto label_3f7c54;
        case 0x3f7c58u: goto label_3f7c58;
        case 0x3f7c5cu: goto label_3f7c5c;
        case 0x3f7c60u: goto label_3f7c60;
        case 0x3f7c64u: goto label_3f7c64;
        case 0x3f7c68u: goto label_3f7c68;
        case 0x3f7c6cu: goto label_3f7c6c;
        case 0x3f7c70u: goto label_3f7c70;
        case 0x3f7c74u: goto label_3f7c74;
        default: break;
    }

    ctx->pc = 0x3f7838u;

label_3f7838:
    // 0x3f7838: 0x27bdf650  addiu       $sp, $sp, -0x9B0
    ctx->pc = 0x3f7838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964816));
label_3f783c:
    // 0x3f783c: 0x7fb00980  sq          $s0, 0x980($sp)
    ctx->pc = 0x3f783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 16));
label_3f7840:
    // 0x3f7840: 0x7fb10970  sq          $s1, 0x970($sp)
    ctx->pc = 0x3f7840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 17));
label_3f7844:
    // 0x3f7844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7848:
    // 0x3f7848: 0x7fbe0900  sq          $fp, 0x900($sp)
    ctx->pc = 0x3f7848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 30));
label_3f784c:
    // 0x3f784c: 0x7fb20960  sq          $s2, 0x960($sp)
    ctx->pc = 0x3f784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 18));
label_3f7850:
    // 0x3f7850: 0x7fb30950  sq          $s3, 0x950($sp)
    ctx->pc = 0x3f7850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 19));
label_3f7854:
    // 0x3f7854: 0x7fb40940  sq          $s4, 0x940($sp)
    ctx->pc = 0x3f7854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 20));
label_3f7858:
    // 0x3f7858: 0x7fb50930  sq          $s5, 0x930($sp)
    ctx->pc = 0x3f7858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 21));
label_3f785c:
    // 0x3f785c: 0x7fb60920  sq          $s6, 0x920($sp)
    ctx->pc = 0x3f785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 22));
label_3f7860:
    // 0x3f7860: 0x7fb70910  sq          $s7, 0x910($sp)
    ctx->pc = 0x3f7860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 23));
label_3f7864:
    // 0x3f7864: 0xffbf08f0  sd          $ra, 0x8F0($sp)
    ctx->pc = 0x3f7864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2288), GPR_U64(ctx, 31));
label_3f7868:
    // 0x3f7868: 0xe7b709a8  swc1        $f23, 0x9A8($sp)
    ctx->pc = 0x3f7868u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2472), bits); }
label_3f786c:
    // 0x3f786c: 0xe7b609a0  swc1        $f22, 0x9A0($sp)
    ctx->pc = 0x3f786cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2464), bits); }
label_3f7870:
    // 0x3f7870: 0xe7b50998  swc1        $f21, 0x998($sp)
    ctx->pc = 0x3f7870u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2456), bits); }
label_3f7874:
    // 0x3f7874: 0xe7b40990  swc1        $f20, 0x990($sp)
    ctx->pc = 0x3f7874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2448), bits); }
label_3f7878:
    // 0x3f7878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f7878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f787c:
    // 0x3f787c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f787cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f7880:
    // 0x3f7880: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f7880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f7884:
    // 0x3f7884: 0x40f809  jalr        $v0
label_3f7888:
    if (ctx->pc == 0x3F7888u) {
        ctx->pc = 0x3F7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7884u;
        // 0x3f7888: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F788Cu;
        goto label_3f788c;
    }
    ctx->pc = 0x3F7884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F788Cu);
        ctx->pc = 0x3F7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7884u;
        // 0x3f7888: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7884u, 0x3F788Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F788Cu;
label_3f788c:
    // 0x3f788c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3f788cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f7890:
    // 0x3f7890: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f7890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f7894:
    // 0x3f7894: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3f7894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3f7898:
    // 0x3f7898: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f7898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f789c:
    // 0x3f789c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3f789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f78a0:
    // 0x3f78a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f78a4:
    // 0x3f78a4: 0x0  nop
    ctx->pc = 0x3f78a4u;
    // NOP
label_3f78a8:
    // 0x3f78a8: 0x0  nop
    ctx->pc = 0x3f78a8u;
    // NOP
label_3f78ac:
    // 0x3f78ac: 0x0  nop
    ctx->pc = 0x3f78acu;
    // NOP
label_3f78b0:
    // 0x3f78b0: 0x0  nop
    ctx->pc = 0x3f78b0u;
    // NOP
label_3f78b4:
    // 0x3f78b4: 0x0  nop
    ctx->pc = 0x3f78b4u;
    // NOP
label_3f78b8:
    // 0x3f78b8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f78bc:
    if (ctx->pc == 0x3F78BCu) {
        ctx->pc = 0x3F78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78B8u;
        // 0x3f78bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78C0u;
        goto label_3f78c0;
    }
    ctx->pc = 0x3F78B8u;
    {
        const bool branch_taken_0x3f78b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78B8u;
        // 0x3f78bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f78b8) {
            ctx->pc = 0x3F78A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f78a8;
        }
    }
    ctx->pc = 0x3F78C0u;
label_3f78c0:
    // 0x3f78c0: 0xc138ddc  jal         func_4E3770
label_3f78c4:
    if (ctx->pc == 0x3F78C4u) {
        ctx->pc = 0x3F78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78C0u;
        // 0x3f78c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78C8u;
        goto label_3f78c8;
    }
    ctx->pc = 0x3F78C0u;
    SET_GPR_U32(ctx, 31, 0x3F78C8u);
    ctx->pc = 0x3F78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F78C0u;
    // 0x3f78c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F78C0u, 0x3F78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F78C8u;
label_3f78c8:
    // 0x3f78c8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f78c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f78cc:
    // 0x3f78cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f78ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f78d0:
    // 0x3f78d0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3f78d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3f78d4:
    // 0x3f78d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f78d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f78d8:
    // 0x3f78d8: 0xc0e94a0  jal         func_3A5280
label_3f78dc:
    if (ctx->pc == 0x3F78DCu) {
        ctx->pc = 0x3F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78D8u;
        // 0x3f78dc: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78E0u;
        goto label_3f78e0;
    }
    ctx->pc = 0x3F78D8u;
    SET_GPR_U32(ctx, 31, 0x3F78E0u);
    ctx->pc = 0x3F78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F78D8u;
    // 0x3f78dc: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F78D8u, 0x3F78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F78E0u;
label_3f78e0:
    // 0x3f78e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3f78e4:
    if (ctx->pc == 0x3F78E4u) {
        ctx->pc = 0x3F78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78E0u;
        // 0x3f78e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78E8u;
        goto label_3f78e8;
    }
    ctx->pc = 0x3F78E0u;
    {
        const bool branch_taken_0x3f78e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f78e0) {
            ctx->pc = 0x3F78E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F78E0u;
            // 0x3f78e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7900u;
            goto label_3f7900;
        }
    }
    ctx->pc = 0x3F78E8u;
label_3f78e8:
    // 0x3f78e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3f78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3f78ec:
    // 0x3f78ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f78f0:
    // 0x3f78f0: 0x2c430384  sltiu       $v1, $v0, 0x384
    ctx->pc = 0x3f78f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
label_3f78f4:
    // 0x3f78f4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3f78f8:
    if (ctx->pc == 0x3F78F8u) {
        ctx->pc = 0x3F78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78F4u;
        // 0x3f78f8: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F78FCu;
        goto label_3f78fc;
    }
    ctx->pc = 0x3F78F4u;
    {
        const bool branch_taken_0x3f78f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F78F4u;
        // 0x3f78f8: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f78f4) {
            ctx->pc = 0x3F7900u;
            goto label_3f7900;
        }
    }
    ctx->pc = 0x3F78FCu;
label_3f78fc:
    // 0x3f78fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3f78fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7900:
    // 0x3f7900: 0x164000cd  bnez        $s2, . + 4 + (0xCD << 2)
label_3f7904:
    if (ctx->pc == 0x3F7904u) {
        ctx->pc = 0x3F7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7900u;
        // 0x3f7904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7908u;
        goto label_3f7908;
    }
    ctx->pc = 0x3F7900u;
    {
        const bool branch_taken_0x3f7900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7900u;
        // 0x3f7904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7900) {
            ctx->pc = 0x3F7C38u;
            goto label_3f7c38;
        }
    }
    ctx->pc = 0x3F7908u;
label_3f7908:
    // 0x3f7908: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3f7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3f790c:
    // 0x3f790c: 0x504000bb  beql        $v0, $zero, . + 4 + (0xBB << 2)
label_3f7910:
    if (ctx->pc == 0x3F7910u) {
        ctx->pc = 0x3F7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F790Cu;
        // 0x3f7910: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7914u;
        goto label_3f7914;
    }
    ctx->pc = 0x3F790Cu;
    {
        const bool branch_taken_0x3f790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f790c) {
            ctx->pc = 0x3F7910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F790Cu;
            // 0x3f7910: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7BFCu;
            goto label_3f7bfc;
        }
    }
    ctx->pc = 0x3F7914u;
label_3f7914:
    // 0x3f7914: 0xc0e9694  jal         func_3A5A50
label_3f7918:
    if (ctx->pc == 0x3F7918u) {
        ctx->pc = 0x3F7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7914u;
        // 0x3f7918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F791Cu;
        goto label_3f791c;
    }
    ctx->pc = 0x3F7914u;
    SET_GPR_U32(ctx, 31, 0x3F791Cu);
    ctx->pc = 0x3F7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7914u;
    // 0x3f7918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F7914u, 0x3F791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F791Cu;
label_3f791c:
    // 0x3f791c: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
label_3f7920:
    if (ctx->pc == 0x3F7920u) {
        ctx->pc = 0x3F7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F791Cu;
        // 0x3f7920: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7924u;
        goto label_3f7924;
    }
    ctx->pc = 0x3F791Cu;
    {
        const bool branch_taken_0x3f791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F791Cu;
        // 0x3f7920: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f791c) {
            ctx->pc = 0x3F7BECu;
            goto label_3f7bec;
        }
    }
    ctx->pc = 0x3F7924u;
label_3f7924:
    // 0x3f7924: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3f7924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3f7928:
    // 0x3f7928: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f7928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f792c:
    // 0x3f792c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f792cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7930:
    // 0x3f7930: 0x2454b8b8  addiu       $s4, $v0, -0x4748
    ctx->pc = 0x3f7930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3f7934:
    // 0x3f7934: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x3f7934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
label_3f7938:
    // 0x3f7938: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x3f7938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_3f793c:
    // 0x3f793c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f793cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7940:
    // 0x3f7940: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3f7940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3f7944:
    // 0x3f7944: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f7944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f7948:
    // 0x3f7948: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3f7948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3f794c:
    // 0x3f794c: 0xc0cd518  jal         func_335460
label_3f7950:
    if (ctx->pc == 0x3F7950u) {
        ctx->pc = 0x3F7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F794Cu;
        // 0x3f7950: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7954u;
        goto label_3f7954;
    }
    ctx->pc = 0x3F794Cu;
    SET_GPR_U32(ctx, 31, 0x3F7954u);
    ctx->pc = 0x3F7950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F794Cu;
    // 0x3f7950: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F794Cu, 0x3F7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7954u;
label_3f7954:
    // 0x3f7954: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3f7954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3f7958:
    // 0x3f7958: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f7958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f795c:
    // 0x3f795c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3f795cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3f7960:
    // 0x3f7960: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f7960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f7964:
    // 0x3f7964: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3f7964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3f7968:
    // 0x3f7968: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3f7968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3f796c:
    // 0x3f796c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f796cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7970:
    // 0x3f7970: 0x3c013cc4  lui         $at, 0x3CC4
    ctx->pc = 0x3f7970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15556 << 16));
label_3f7974:
    // 0x3f7974: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x3f7974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_3f7978:
    // 0x3f7978: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f7978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f797c:
    // 0x3f797c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f797cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f7980:
    // 0x3f7980: 0xafa208e4  sw          $v0, 0x8E4($sp)
    ctx->pc = 0x3f7980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2276), GPR_U32(ctx, 2));
label_3f7984:
    // 0x3f7984: 0xc0cd518  jal         func_335460
label_3f7988:
    if (ctx->pc == 0x3F7988u) {
        ctx->pc = 0x3F7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7984u;
        // 0x3f7988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F798Cu;
        goto label_3f798c;
    }
    ctx->pc = 0x3F7984u;
    SET_GPR_U32(ctx, 31, 0x3F798Cu);
    ctx->pc = 0x3F7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7984u;
    // 0x3f7988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F7984u, 0x3F798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F798Cu;
label_3f798c:
    // 0x3f798c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f7990:
    // 0x3f7990: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3f7990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3f7994:
    // 0x3f7994: 0x8fa208e4  lw          $v0, 0x8E4($sp)
    ctx->pc = 0x3f7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2276)));
label_3f7998:
    // 0x3f7998: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3f7998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3f799c:
    // 0x3f799c: 0xe7b40438  swc1        $f20, 0x438($sp)
    ctx->pc = 0x3f799cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3f79a0:
    // 0x3f79a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f79a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f79a4:
    // 0x3f79a4: 0xe7a0043c  swc1        $f0, 0x43C($sp)
    ctx->pc = 0x3f79a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3f79a8:
    // 0x3f79a8: 0x3442ff18  ori         $v0, $v0, 0xFF18
    ctx->pc = 0x3f79a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65304);
label_3f79ac:
    // 0x3f79ac: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3f79acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3f79b0:
    // 0x3f79b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3f79b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3f79b4:
    // 0x3f79b4: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3f79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3f79b8:
    // 0x3f79b8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3f79b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3f79bc:
    // 0x3f79bc: 0xafa208e4  sw          $v0, 0x8E4($sp)
    ctx->pc = 0x3f79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2276), GPR_U32(ctx, 2));
label_3f79c0:
    // 0x3f79c0: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3f79c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3f79c4:
    // 0x3f79c4: 0xc0cd518  jal         func_335460
label_3f79c8:
    if (ctx->pc == 0x3F79C8u) {
        ctx->pc = 0x3F79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F79C4u;
        // 0x3f79c8: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F79CCu;
        goto label_3f79cc;
    }
    ctx->pc = 0x3F79C4u;
    SET_GPR_U32(ctx, 31, 0x3F79CCu);
    ctx->pc = 0x3F79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F79C4u;
    // 0x3f79c8: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F79C4u, 0x3F79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F79CCu;
label_3f79cc:
    // 0x3f79cc: 0x27a20430  addiu       $v0, $sp, 0x430
    ctx->pc = 0x3f79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3f79d0:
    // 0x3f79d0: 0x27b10870  addiu       $s1, $sp, 0x870
    ctx->pc = 0x3f79d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3f79d4:
    // 0x3f79d4: 0xe7a00878  swc1        $f0, 0x878($sp)
    ctx->pc = 0x3f79d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2168), bits); }
label_3f79d8:
    // 0x3f79d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f79d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f79dc:
    // 0x3f79dc: 0xafa208e0  sw          $v0, 0x8E0($sp)
    ctx->pc = 0x3f79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2272), GPR_U32(ctx, 2));
label_3f79e0:
    // 0x3f79e0: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x3f79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_3f79e4:
    // 0x3f79e4: 0xafa00874  sw          $zero, 0x874($sp)
    ctx->pc = 0x3f79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 0));
label_3f79e8:
    // 0x3f79e8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x3f79e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3f79ec:
    // 0x3f79ec: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3f79ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_3f79f0:
    // 0x3f79f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f79f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f79f4:
    // 0x3f79f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f79f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f79f8:
    // 0x3f79f8: 0x7ba30870  lq          $v1, 0x870($sp)
    ctx->pc = 0x3f79f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3f79fc:
    // 0x3f79fc: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3f79fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f7a00:
    // 0x3f7a00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f7a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f7a04:
    // 0x3f7a04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f7a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f7a08:
    // 0x3f7a08: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f7a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f7a0c:
    // 0x3f7a0c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f7a0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f7a10:
    // 0x3f7a10: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3f7a10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f7a14:
    // 0x3f7a14: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3f7a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3f7a18:
    // 0x3f7a18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f7a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f7a1c:
    // 0x3f7a1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f7a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7a20:
    // 0x3f7a20: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3f7a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3f7a24:
    // 0x3f7a24: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3f7a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3f7a28:
    // 0x3f7a28: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3f7a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3f7a2c:
    // 0x3f7a2c: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3f7a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3f7a30:
    // 0x3f7a30: 0xc0cd518  jal         func_335460
label_3f7a34:
    if (ctx->pc == 0x3F7A34u) {
        ctx->pc = 0x3F7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A30u;
        // 0x3f7a34: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7A38u;
        goto label_3f7a38;
    }
    ctx->pc = 0x3F7A30u;
    SET_GPR_U32(ctx, 31, 0x3F7A38u);
    ctx->pc = 0x3F7A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7A30u;
    // 0x3f7a34: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F7A30u, 0x3F7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7A38u;
label_3f7a38:
    // 0x3f7a38: 0x27b00890  addiu       $s0, $sp, 0x890
    ctx->pc = 0x3f7a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3f7a3c:
    // 0x3f7a3c: 0xe7a00898  swc1        $f0, 0x898($sp)
    ctx->pc = 0x3f7a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2200), bits); }
label_3f7a40:
    // 0x3f7a40: 0xafa00890  sw          $zero, 0x890($sp)
    ctx->pc = 0x3f7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
label_3f7a44:
    // 0x3f7a44: 0x27b608a0  addiu       $s6, $sp, 0x8A0
    ctx->pc = 0x3f7a44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3f7a48:
    // 0x3f7a48: 0xafa00894  sw          $zero, 0x894($sp)
    ctx->pc = 0x3f7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2196), GPR_U32(ctx, 0));
label_3f7a4c:
    // 0x3f7a4c: 0x27b708b0  addiu       $s7, $sp, 0x8B0
    ctx->pc = 0x3f7a4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_3f7a50:
    // 0x3f7a50: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3f7a50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3f7a54:
    // 0x3f7a54: 0x27b508c0  addiu       $s5, $sp, 0x8C0
    ctx->pc = 0x3f7a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
label_3f7a58:
    // 0x3f7a58: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3f7a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3f7a5c:
    // 0x3f7a5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3f7a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3f7a60:
    // 0x3f7a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f7a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7a64:
    // 0x3f7a64: 0x27b308d0  addiu       $s3, $sp, 0x8D0
    ctx->pc = 0x3f7a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
label_3f7a68:
    // 0x3f7a68: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3f7a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3f7a6c:
    // 0x3f7a6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f7a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a70:
    // 0x3f7a70: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x3f7a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3f7a74:
    // 0x3f7a74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3f7a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a78:
    // 0x3f7a78: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3f7a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3f7a7c:
    // 0x3f7a7c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3f7a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a80:
    // 0x3f7a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f7a84:
    // 0x3f7a84: 0x8fa508e0  lw          $a1, 0x8E0($sp)
    ctx->pc = 0x3f7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f7a88:
    // 0x3f7a88: 0xafa208b0  sw          $v0, 0x8B0($sp)
    ctx->pc = 0x3f7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 2));
label_3f7a8c:
    // 0x3f7a8c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3f7a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a90:
    // 0x3f7a90: 0x8fa208e4  lw          $v0, 0x8E4($sp)
    ctx->pc = 0x3f7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2276)));
label_3f7a94:
    // 0x3f7a94: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3f7a94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f7a98:
    // 0x3f7a98: 0xe7a108a0  swc1        $f1, 0x8A0($sp)
    ctx->pc = 0x3f7a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2208), bits); }
label_3f7a9c:
    // 0x3f7a9c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x3f7a9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f7aa0:
    // 0x3f7aa0: 0xafa208c0  sw          $v0, 0x8C0($sp)
    ctx->pc = 0x3f7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 2));
label_3f7aa4:
    // 0x3f7aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7aa8:
    // 0x3f7aa8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3f7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f7aac:
    // 0x3f7aac: 0x7fa30870  sq          $v1, 0x870($sp)
    ctx->pc = 0x3f7aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 3));
label_3f7ab0:
    // 0x3f7ab0: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3f7ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3f7ab4:
    // 0x3f7ab4: 0xc0ea084  jal         func_3A8210
label_3f7ab8:
    if (ctx->pc == 0x3F7AB8u) {
        ctx->pc = 0x3F7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7AB4u;
        // 0x3f7ab8: 0xafa208d0  sw          $v0, 0x8D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7ABCu;
        goto label_3f7abc;
    }
    ctx->pc = 0x3F7AB4u;
    SET_GPR_U32(ctx, 31, 0x3F7ABCu);
    ctx->pc = 0x3F7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7AB4u;
    // 0x3f7ab8: 0xafa208d0  sw          $v0, 0x8D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F7AB4u, 0x3F7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7ABCu;
label_3f7abc:
    // 0x3f7abc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f7abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f7ac0:
    // 0x3f7ac0: 0x24846868  addiu       $a0, $a0, 0x6868
    ctx->pc = 0x3f7ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26728));
label_3f7ac4:
    // 0x3f7ac4: 0xc0f15bc  jal         func_3C56F0
label_3f7ac8:
    if (ctx->pc == 0x3F7AC8u) {
        ctx->pc = 0x3F7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7AC4u;
        // 0x3f7ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7ACCu;
        goto label_3f7acc;
    }
    ctx->pc = 0x3F7AC4u;
    SET_GPR_U32(ctx, 31, 0x3F7ACCu);
    ctx->pc = 0x3F7AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7AC4u;
    // 0x3f7ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F7AC4u, 0x3F7ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7ACCu;
label_3f7acc:
    // 0x3f7acc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3f7accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3f7ad0:
    // 0x3f7ad0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3f7ad0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3f7ad4:
    // 0x3f7ad4: 0xc0cd518  jal         func_335460
label_3f7ad8:
    if (ctx->pc == 0x3F7AD8u) {
        ctx->pc = 0x3F7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7AD4u;
        // 0x3f7ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7ADCu;
        goto label_3f7adc;
    }
    ctx->pc = 0x3F7AD4u;
    SET_GPR_U32(ctx, 31, 0x3F7ADCu);
    ctx->pc = 0x3F7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7AD4u;
    // 0x3f7ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F7AD4u, 0x3F7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7ADCu;
label_3f7adc:
    // 0x3f7adc: 0xe7a00878  swc1        $f0, 0x878($sp)
    ctx->pc = 0x3f7adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2168), bits); }
label_3f7ae0:
    // 0x3f7ae0: 0x27b20840  addiu       $s2, $sp, 0x840
    ctx->pc = 0x3f7ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3f7ae4:
    // 0x3f7ae4: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x3f7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_3f7ae8:
    // 0x3f7ae8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f7ae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f7aec:
    // 0x3f7aec: 0xafa00874  sw          $zero, 0x874($sp)
    ctx->pc = 0x3f7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 0));
label_3f7af0:
    // 0x3f7af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f7af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f7af4:
    // 0x3f7af4: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x3f7af4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3f7af8:
    // 0x3f7af8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x3f7af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_3f7afc:
    // 0x3f7afc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f7afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f7b00:
    // 0x3f7b00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f7b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7b04:
    // 0x3f7b04: 0x7ba30870  lq          $v1, 0x870($sp)
    ctx->pc = 0x3f7b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3f7b08:
    // 0x3f7b08: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3f7b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f7b0c:
    // 0x3f7b0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f7b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f7b10:
    // 0x3f7b10: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f7b10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f7b14:
    // 0x3f7b14: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f7b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f7b18:
    // 0x3f7b18: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f7b18u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f7b1c:
    // 0x3f7b1c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3f7b1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f7b20:
    // 0x3f7b20: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3f7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3f7b24:
    // 0x3f7b24: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3f7b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3f7b28:
    // 0x3f7b28: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3f7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3f7b2c:
    // 0x3f7b2c: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3f7b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3f7b30:
    // 0x3f7b30: 0xc0cd518  jal         func_335460
label_3f7b34:
    if (ctx->pc == 0x3F7B34u) {
        ctx->pc = 0x3F7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B30u;
        // 0x3f7b34: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7B38u;
        goto label_3f7b38;
    }
    ctx->pc = 0x3F7B30u;
    SET_GPR_U32(ctx, 31, 0x3F7B38u);
    ctx->pc = 0x3F7B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7B30u;
    // 0x3f7b34: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F7B30u, 0x3F7B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7B38u;
label_3f7b38:
    // 0x3f7b38: 0xe7a00898  swc1        $f0, 0x898($sp)
    ctx->pc = 0x3f7b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2200), bits); }
label_3f7b3c:
    // 0x3f7b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f7b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b40:
    // 0x3f7b40: 0xafa00890  sw          $zero, 0x890($sp)
    ctx->pc = 0x3f7b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
label_3f7b44:
    // 0x3f7b44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f7b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b48:
    // 0x3f7b48: 0xafa00894  sw          $zero, 0x894($sp)
    ctx->pc = 0x3f7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2196), GPR_U32(ctx, 0));
label_3f7b4c:
    // 0x3f7b4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3f7b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b50:
    // 0x3f7b50: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3f7b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3f7b54:
    // 0x3f7b54: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3f7b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b58:
    // 0x3f7b58: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3f7b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3f7b5c:
    // 0x3f7b5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3f7b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3f7b60:
    // 0x3f7b60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f7b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7b64:
    // 0x3f7b64: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3f7b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b68:
    // 0x3f7b68: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3f7b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3f7b6c:
    // 0x3f7b6c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3f7b6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b70:
    // 0x3f7b70: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x3f7b70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3f7b74:
    // 0x3f7b74: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x3f7b74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f7b78:
    // 0x3f7b78: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3f7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3f7b7c:
    // 0x3f7b7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f7b80:
    // 0x3f7b80: 0x8fa408e0  lw          $a0, 0x8E0($sp)
    ctx->pc = 0x3f7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f7b84:
    // 0x3f7b84: 0xafa208b0  sw          $v0, 0x8B0($sp)
    ctx->pc = 0x3f7b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 2));
label_3f7b88:
    // 0x3f7b88: 0x8fa208e4  lw          $v0, 0x8E4($sp)
    ctx->pc = 0x3f7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2276)));
label_3f7b8c:
    // 0x3f7b8c: 0x7fa30870  sq          $v1, 0x870($sp)
    ctx->pc = 0x3f7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 3));
label_3f7b90:
    // 0x3f7b90: 0xafa208c0  sw          $v0, 0x8C0($sp)
    ctx->pc = 0x3f7b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 2));
label_3f7b94:
    // 0x3f7b94: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3f7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f7b98:
    // 0x3f7b98: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3f7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3f7b9c:
    // 0x3f7b9c: 0xe7a108a0  swc1        $f1, 0x8A0($sp)
    ctx->pc = 0x3f7b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2208), bits); }
label_3f7ba0:
    // 0x3f7ba0: 0xc0ea084  jal         func_3A8210
label_3f7ba4:
    if (ctx->pc == 0x3F7BA4u) {
        ctx->pc = 0x3F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BA0u;
        // 0x3f7ba4: 0xafa208d0  sw          $v0, 0x8D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7BA8u;
        goto label_3f7ba8;
    }
    ctx->pc = 0x3F7BA0u;
    SET_GPR_U32(ctx, 31, 0x3F7BA8u);
    ctx->pc = 0x3F7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7BA0u;
    // 0x3f7ba4: 0xafa208d0  sw          $v0, 0x8D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F7BA0u, 0x3F7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7BA8u;
label_3f7ba8:
    // 0x3f7ba8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f7ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f7bac:
    // 0x3f7bac: 0x24846868  addiu       $a0, $a0, 0x6868
    ctx->pc = 0x3f7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26728));
label_3f7bb0:
    // 0x3f7bb0: 0xc0f15bc  jal         func_3C56F0
label_3f7bb4:
    if (ctx->pc == 0x3F7BB4u) {
        ctx->pc = 0x3F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BB0u;
        // 0x3f7bb4: 0x8fa508e0  lw          $a1, 0x8E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7BB8u;
        goto label_3f7bb8;
    }
    ctx->pc = 0x3F7BB0u;
    SET_GPR_U32(ctx, 31, 0x3F7BB8u);
    ctx->pc = 0x3F7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7BB0u;
    // 0x3f7bb4: 0x8fa508e0  lw          $a1, 0x8E0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F7BB0u, 0x3F7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7BB8u;
label_3f7bb8:
    // 0x3f7bb8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3f7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3f7bbc:
    // 0x3f7bbc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3f7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3f7bc0:
    // 0x3f7bc0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3f7bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f7bc4:
    // 0x3f7bc4: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_3f7bc8:
    if (ctx->pc == 0x3F7BC8u) {
        ctx->pc = 0x3F7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BC4u;
        // 0x3f7bc8: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7BCCu;
        goto label_3f7bcc;
    }
    ctx->pc = 0x3F7BC4u;
    {
        const bool branch_taken_0x3f7bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7bc4) {
            ctx->pc = 0x3F7BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7BC4u;
            // 0x3f7bc8: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7BF0u;
            goto label_3f7bf0;
        }
    }
    ctx->pc = 0x3F7BCCu;
label_3f7bcc:
    // 0x3f7bcc: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x3f7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_3f7bd0:
    // 0x3f7bd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f7bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f7bd4:
    // 0x3f7bd4: 0xc0cd4ee  jal         func_3353B8
label_3f7bd8:
    if (ctx->pc == 0x3F7BD8u) {
        ctx->pc = 0x3F7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BD4u;
        // 0x3f7bd8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7BDCu;
        goto label_3f7bdc;
    }
    ctx->pc = 0x3F7BD4u;
    SET_GPR_U32(ctx, 31, 0x3F7BDCu);
    ctx->pc = 0x3F7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7BD4u;
    // 0x3f7bd8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F7BD4u, 0x3F7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7BDCu;
label_3f7bdc:
    // 0x3f7bdc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3f7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3f7be0:
    // 0x3f7be0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3f7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_3f7be4:
    // 0x3f7be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f7be8:
    // 0x3f7be8: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x3f7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_3f7bec:
    // 0x3f7bec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3f7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3f7bf0:
    // 0x3f7bf0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3f7bf4:
    if (ctx->pc == 0x3F7BF4u) {
        ctx->pc = 0x3F7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BF0u;
        // 0x3f7bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7BF8u;
        goto label_3f7bf8;
    }
    ctx->pc = 0x3F7BF0u;
    {
        const bool branch_taken_0x3f7bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BF0u;
        // 0x3f7bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7bf0) {
            ctx->pc = 0x3F7C38u;
            goto label_3f7c38;
        }
    }
    ctx->pc = 0x3F7BF8u;
label_3f7bf8:
    // 0x3f7bf8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3f7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3f7bfc:
    // 0x3f7bfc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3f7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3f7c00:
    // 0x3f7c00: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3f7c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f7c04:
    // 0x3f7c04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3f7c08:
    if (ctx->pc == 0x3F7C08u) {
        ctx->pc = 0x3F7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C04u;
        // 0x3f7c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7C0Cu;
        goto label_3f7c0c;
    }
    ctx->pc = 0x3F7C04u;
    {
        const bool branch_taken_0x3f7c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C04u;
        // 0x3f7c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c04) {
            ctx->pc = 0x3F7C38u;
            goto label_3f7c38;
        }
    }
    ctx->pc = 0x3F7C0Cu;
label_3f7c0c:
    // 0x3f7c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7c10:
    // 0x3f7c10: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f7c14:
    // 0x3f7c14: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3f7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3f7c18:
    // 0x3f7c18: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f7c1c:
    // 0x3f7c1c: 0xc0cd4ee  jal         func_3353B8
label_3f7c20:
    if (ctx->pc == 0x3F7C20u) {
        ctx->pc = 0x3F7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C1Cu;
        // 0x3f7c20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7C24u;
        goto label_3f7c24;
    }
    ctx->pc = 0x3F7C1Cu;
    SET_GPR_U32(ctx, 31, 0x3F7C24u);
    ctx->pc = 0x3F7C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7C1Cu;
    // 0x3f7c20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F7C1Cu, 0x3F7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7C24u;
label_3f7c24:
    // 0x3f7c24: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3f7c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3f7c28:
    // 0x3f7c28: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3f7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3f7c2c:
    // 0x3f7c2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f7c30:
    // 0x3f7c30: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x3f7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_3f7c34:
    // 0x3f7c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f7c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f7c38:
    // 0x3f7c38: 0x7bb00980  lq          $s0, 0x980($sp)
    ctx->pc = 0x3f7c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
label_3f7c3c:
    // 0x3f7c3c: 0x7bb10970  lq          $s1, 0x970($sp)
    ctx->pc = 0x3f7c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
label_3f7c40:
    // 0x3f7c40: 0x7bb20960  lq          $s2, 0x960($sp)
    ctx->pc = 0x3f7c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_3f7c44:
    // 0x3f7c44: 0x7bb30950  lq          $s3, 0x950($sp)
    ctx->pc = 0x3f7c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3f7c48:
    // 0x3f7c48: 0x7bb40940  lq          $s4, 0x940($sp)
    ctx->pc = 0x3f7c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3f7c4c:
    // 0x3f7c4c: 0x7bb50930  lq          $s5, 0x930($sp)
    ctx->pc = 0x3f7c4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3f7c50:
    // 0x3f7c50: 0x7bb60920  lq          $s6, 0x920($sp)
    ctx->pc = 0x3f7c50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3f7c54:
    // 0x3f7c54: 0x7bb70910  lq          $s7, 0x910($sp)
    ctx->pc = 0x3f7c54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3f7c58:
    // 0x3f7c58: 0x7bbe0900  lq          $fp, 0x900($sp)
    ctx->pc = 0x3f7c58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3f7c5c:
    // 0x3f7c5c: 0xdfbf08f0  ld          $ra, 0x8F0($sp)
    ctx->pc = 0x3f7c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2288)));
label_3f7c60:
    // 0x3f7c60: 0xc7b709a8  lwc1        $f23, 0x9A8($sp)
    ctx->pc = 0x3f7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3f7c64:
    // 0x3f7c64: 0xc7b609a0  lwc1        $f22, 0x9A0($sp)
    ctx->pc = 0x3f7c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f7c68:
    // 0x3f7c68: 0xc7b50998  lwc1        $f21, 0x998($sp)
    ctx->pc = 0x3f7c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f7c6c:
    // 0x3f7c6c: 0xc7b40990  lwc1        $f20, 0x990($sp)
    ctx->pc = 0x3f7c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f7c70:
    // 0x3f7c70: 0x3e00008  jr          $ra
label_3f7c74:
    if (ctx->pc == 0x3F7C74u) {
        ctx->pc = 0x3F7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C70u;
        // 0x3f7c74: 0x27bd09b0  addiu       $sp, $sp, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7C78u;
        goto label_fallthrough_0x3f7c70;
    }
    ctx->pc = 0x3F7C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C70u;
        // 0x3f7c74: 0x27bd09b0  addiu       $sp, $sp, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7c70:
    ctx->pc = 0x3F7C78u;
}
