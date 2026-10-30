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

// Function: sub_001A77B0
// Address: 0x1a77b0 - 0x1a7cf0
void sub_001A77B0_0x1a77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A77B0_0x1a77b0");
#endif

    switch (ctx->pc) {
        case 0x1a77b0u: goto label_1a77b0;
        case 0x1a77b4u: goto label_1a77b4;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77bcu: goto label_1a77bc;
        case 0x1a77c0u: goto label_1a77c0;
        case 0x1a77c4u: goto label_1a77c4;
        case 0x1a77c8u: goto label_1a77c8;
        case 0x1a77ccu: goto label_1a77cc;
        case 0x1a77d0u: goto label_1a77d0;
        case 0x1a77d4u: goto label_1a77d4;
        case 0x1a77d8u: goto label_1a77d8;
        case 0x1a77dcu: goto label_1a77dc;
        case 0x1a77e0u: goto label_1a77e0;
        case 0x1a77e4u: goto label_1a77e4;
        case 0x1a77e8u: goto label_1a77e8;
        case 0x1a77ecu: goto label_1a77ec;
        case 0x1a77f0u: goto label_1a77f0;
        case 0x1a77f4u: goto label_1a77f4;
        case 0x1a77f8u: goto label_1a77f8;
        case 0x1a77fcu: goto label_1a77fc;
        case 0x1a7800u: goto label_1a7800;
        case 0x1a7804u: goto label_1a7804;
        case 0x1a7808u: goto label_1a7808;
        case 0x1a780cu: goto label_1a780c;
        case 0x1a7810u: goto label_1a7810;
        case 0x1a7814u: goto label_1a7814;
        case 0x1a7818u: goto label_1a7818;
        case 0x1a781cu: goto label_1a781c;
        case 0x1a7820u: goto label_1a7820;
        case 0x1a7824u: goto label_1a7824;
        case 0x1a7828u: goto label_1a7828;
        case 0x1a782cu: goto label_1a782c;
        case 0x1a7830u: goto label_1a7830;
        case 0x1a7834u: goto label_1a7834;
        case 0x1a7838u: goto label_1a7838;
        case 0x1a783cu: goto label_1a783c;
        case 0x1a7840u: goto label_1a7840;
        case 0x1a7844u: goto label_1a7844;
        case 0x1a7848u: goto label_1a7848;
        case 0x1a784cu: goto label_1a784c;
        case 0x1a7850u: goto label_1a7850;
        case 0x1a7854u: goto label_1a7854;
        case 0x1a7858u: goto label_1a7858;
        case 0x1a785cu: goto label_1a785c;
        case 0x1a7860u: goto label_1a7860;
        case 0x1a7864u: goto label_1a7864;
        case 0x1a7868u: goto label_1a7868;
        case 0x1a786cu: goto label_1a786c;
        case 0x1a7870u: goto label_1a7870;
        case 0x1a7874u: goto label_1a7874;
        case 0x1a7878u: goto label_1a7878;
        case 0x1a787cu: goto label_1a787c;
        case 0x1a7880u: goto label_1a7880;
        case 0x1a7884u: goto label_1a7884;
        case 0x1a7888u: goto label_1a7888;
        case 0x1a788cu: goto label_1a788c;
        case 0x1a7890u: goto label_1a7890;
        case 0x1a7894u: goto label_1a7894;
        case 0x1a7898u: goto label_1a7898;
        case 0x1a789cu: goto label_1a789c;
        case 0x1a78a0u: goto label_1a78a0;
        case 0x1a78a4u: goto label_1a78a4;
        case 0x1a78a8u: goto label_1a78a8;
        case 0x1a78acu: goto label_1a78ac;
        case 0x1a78b0u: goto label_1a78b0;
        case 0x1a78b4u: goto label_1a78b4;
        case 0x1a78b8u: goto label_1a78b8;
        case 0x1a78bcu: goto label_1a78bc;
        case 0x1a78c0u: goto label_1a78c0;
        case 0x1a78c4u: goto label_1a78c4;
        case 0x1a78c8u: goto label_1a78c8;
        case 0x1a78ccu: goto label_1a78cc;
        case 0x1a78d0u: goto label_1a78d0;
        case 0x1a78d4u: goto label_1a78d4;
        case 0x1a78d8u: goto label_1a78d8;
        case 0x1a78dcu: goto label_1a78dc;
        case 0x1a78e0u: goto label_1a78e0;
        case 0x1a78e4u: goto label_1a78e4;
        case 0x1a78e8u: goto label_1a78e8;
        case 0x1a78ecu: goto label_1a78ec;
        case 0x1a78f0u: goto label_1a78f0;
        case 0x1a78f4u: goto label_1a78f4;
        case 0x1a78f8u: goto label_1a78f8;
        case 0x1a78fcu: goto label_1a78fc;
        case 0x1a7900u: goto label_1a7900;
        case 0x1a7904u: goto label_1a7904;
        case 0x1a7908u: goto label_1a7908;
        case 0x1a790cu: goto label_1a790c;
        case 0x1a7910u: goto label_1a7910;
        case 0x1a7914u: goto label_1a7914;
        case 0x1a7918u: goto label_1a7918;
        case 0x1a791cu: goto label_1a791c;
        case 0x1a7920u: goto label_1a7920;
        case 0x1a7924u: goto label_1a7924;
        case 0x1a7928u: goto label_1a7928;
        case 0x1a792cu: goto label_1a792c;
        case 0x1a7930u: goto label_1a7930;
        case 0x1a7934u: goto label_1a7934;
        case 0x1a7938u: goto label_1a7938;
        case 0x1a793cu: goto label_1a793c;
        case 0x1a7940u: goto label_1a7940;
        case 0x1a7944u: goto label_1a7944;
        case 0x1a7948u: goto label_1a7948;
        case 0x1a794cu: goto label_1a794c;
        case 0x1a7950u: goto label_1a7950;
        case 0x1a7954u: goto label_1a7954;
        case 0x1a7958u: goto label_1a7958;
        case 0x1a795cu: goto label_1a795c;
        case 0x1a7960u: goto label_1a7960;
        case 0x1a7964u: goto label_1a7964;
        case 0x1a7968u: goto label_1a7968;
        case 0x1a796cu: goto label_1a796c;
        case 0x1a7970u: goto label_1a7970;
        case 0x1a7974u: goto label_1a7974;
        case 0x1a7978u: goto label_1a7978;
        case 0x1a797cu: goto label_1a797c;
        case 0x1a7980u: goto label_1a7980;
        case 0x1a7984u: goto label_1a7984;
        case 0x1a7988u: goto label_1a7988;
        case 0x1a798cu: goto label_1a798c;
        case 0x1a7990u: goto label_1a7990;
        case 0x1a7994u: goto label_1a7994;
        case 0x1a7998u: goto label_1a7998;
        case 0x1a799cu: goto label_1a799c;
        case 0x1a79a0u: goto label_1a79a0;
        case 0x1a79a4u: goto label_1a79a4;
        case 0x1a79a8u: goto label_1a79a8;
        case 0x1a79acu: goto label_1a79ac;
        case 0x1a79b0u: goto label_1a79b0;
        case 0x1a79b4u: goto label_1a79b4;
        case 0x1a79b8u: goto label_1a79b8;
        case 0x1a79bcu: goto label_1a79bc;
        case 0x1a79c0u: goto label_1a79c0;
        case 0x1a79c4u: goto label_1a79c4;
        case 0x1a79c8u: goto label_1a79c8;
        case 0x1a79ccu: goto label_1a79cc;
        case 0x1a79d0u: goto label_1a79d0;
        case 0x1a79d4u: goto label_1a79d4;
        case 0x1a79d8u: goto label_1a79d8;
        case 0x1a79dcu: goto label_1a79dc;
        case 0x1a79e0u: goto label_1a79e0;
        case 0x1a79e4u: goto label_1a79e4;
        case 0x1a79e8u: goto label_1a79e8;
        case 0x1a79ecu: goto label_1a79ec;
        case 0x1a79f0u: goto label_1a79f0;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a79f8u: goto label_1a79f8;
        case 0x1a79fcu: goto label_1a79fc;
        case 0x1a7a00u: goto label_1a7a00;
        case 0x1a7a04u: goto label_1a7a04;
        case 0x1a7a08u: goto label_1a7a08;
        case 0x1a7a0cu: goto label_1a7a0c;
        case 0x1a7a10u: goto label_1a7a10;
        case 0x1a7a14u: goto label_1a7a14;
        case 0x1a7a18u: goto label_1a7a18;
        case 0x1a7a1cu: goto label_1a7a1c;
        case 0x1a7a20u: goto label_1a7a20;
        case 0x1a7a24u: goto label_1a7a24;
        case 0x1a7a28u: goto label_1a7a28;
        case 0x1a7a2cu: goto label_1a7a2c;
        case 0x1a7a30u: goto label_1a7a30;
        case 0x1a7a34u: goto label_1a7a34;
        case 0x1a7a38u: goto label_1a7a38;
        case 0x1a7a3cu: goto label_1a7a3c;
        case 0x1a7a40u: goto label_1a7a40;
        case 0x1a7a44u: goto label_1a7a44;
        case 0x1a7a48u: goto label_1a7a48;
        case 0x1a7a4cu: goto label_1a7a4c;
        case 0x1a7a50u: goto label_1a7a50;
        case 0x1a7a54u: goto label_1a7a54;
        case 0x1a7a58u: goto label_1a7a58;
        case 0x1a7a5cu: goto label_1a7a5c;
        case 0x1a7a60u: goto label_1a7a60;
        case 0x1a7a64u: goto label_1a7a64;
        case 0x1a7a68u: goto label_1a7a68;
        case 0x1a7a6cu: goto label_1a7a6c;
        case 0x1a7a70u: goto label_1a7a70;
        case 0x1a7a74u: goto label_1a7a74;
        case 0x1a7a78u: goto label_1a7a78;
        case 0x1a7a7cu: goto label_1a7a7c;
        case 0x1a7a80u: goto label_1a7a80;
        case 0x1a7a84u: goto label_1a7a84;
        case 0x1a7a88u: goto label_1a7a88;
        case 0x1a7a8cu: goto label_1a7a8c;
        case 0x1a7a90u: goto label_1a7a90;
        case 0x1a7a94u: goto label_1a7a94;
        case 0x1a7a98u: goto label_1a7a98;
        case 0x1a7a9cu: goto label_1a7a9c;
        case 0x1a7aa0u: goto label_1a7aa0;
        case 0x1a7aa4u: goto label_1a7aa4;
        case 0x1a7aa8u: goto label_1a7aa8;
        case 0x1a7aacu: goto label_1a7aac;
        case 0x1a7ab0u: goto label_1a7ab0;
        case 0x1a7ab4u: goto label_1a7ab4;
        case 0x1a7ab8u: goto label_1a7ab8;
        case 0x1a7abcu: goto label_1a7abc;
        case 0x1a7ac0u: goto label_1a7ac0;
        case 0x1a7ac4u: goto label_1a7ac4;
        case 0x1a7ac8u: goto label_1a7ac8;
        case 0x1a7accu: goto label_1a7acc;
        case 0x1a7ad0u: goto label_1a7ad0;
        case 0x1a7ad4u: goto label_1a7ad4;
        case 0x1a7ad8u: goto label_1a7ad8;
        case 0x1a7adcu: goto label_1a7adc;
        case 0x1a7ae0u: goto label_1a7ae0;
        case 0x1a7ae4u: goto label_1a7ae4;
        case 0x1a7ae8u: goto label_1a7ae8;
        case 0x1a7aecu: goto label_1a7aec;
        case 0x1a7af0u: goto label_1a7af0;
        case 0x1a7af4u: goto label_1a7af4;
        case 0x1a7af8u: goto label_1a7af8;
        case 0x1a7afcu: goto label_1a7afc;
        case 0x1a7b00u: goto label_1a7b00;
        case 0x1a7b04u: goto label_1a7b04;
        case 0x1a7b08u: goto label_1a7b08;
        case 0x1a7b0cu: goto label_1a7b0c;
        case 0x1a7b10u: goto label_1a7b10;
        case 0x1a7b14u: goto label_1a7b14;
        case 0x1a7b18u: goto label_1a7b18;
        case 0x1a7b1cu: goto label_1a7b1c;
        case 0x1a7b20u: goto label_1a7b20;
        case 0x1a7b24u: goto label_1a7b24;
        case 0x1a7b28u: goto label_1a7b28;
        case 0x1a7b2cu: goto label_1a7b2c;
        case 0x1a7b30u: goto label_1a7b30;
        case 0x1a7b34u: goto label_1a7b34;
        case 0x1a7b38u: goto label_1a7b38;
        case 0x1a7b3cu: goto label_1a7b3c;
        case 0x1a7b40u: goto label_1a7b40;
        case 0x1a7b44u: goto label_1a7b44;
        case 0x1a7b48u: goto label_1a7b48;
        case 0x1a7b4cu: goto label_1a7b4c;
        case 0x1a7b50u: goto label_1a7b50;
        case 0x1a7b54u: goto label_1a7b54;
        case 0x1a7b58u: goto label_1a7b58;
        case 0x1a7b5cu: goto label_1a7b5c;
        case 0x1a7b60u: goto label_1a7b60;
        case 0x1a7b64u: goto label_1a7b64;
        case 0x1a7b68u: goto label_1a7b68;
        case 0x1a7b6cu: goto label_1a7b6c;
        case 0x1a7b70u: goto label_1a7b70;
        case 0x1a7b74u: goto label_1a7b74;
        case 0x1a7b78u: goto label_1a7b78;
        case 0x1a7b7cu: goto label_1a7b7c;
        case 0x1a7b80u: goto label_1a7b80;
        case 0x1a7b84u: goto label_1a7b84;
        case 0x1a7b88u: goto label_1a7b88;
        case 0x1a7b8cu: goto label_1a7b8c;
        case 0x1a7b90u: goto label_1a7b90;
        case 0x1a7b94u: goto label_1a7b94;
        case 0x1a7b98u: goto label_1a7b98;
        case 0x1a7b9cu: goto label_1a7b9c;
        case 0x1a7ba0u: goto label_1a7ba0;
        case 0x1a7ba4u: goto label_1a7ba4;
        case 0x1a7ba8u: goto label_1a7ba8;
        case 0x1a7bacu: goto label_1a7bac;
        case 0x1a7bb0u: goto label_1a7bb0;
        case 0x1a7bb4u: goto label_1a7bb4;
        case 0x1a7bb8u: goto label_1a7bb8;
        case 0x1a7bbcu: goto label_1a7bbc;
        case 0x1a7bc0u: goto label_1a7bc0;
        case 0x1a7bc4u: goto label_1a7bc4;
        case 0x1a7bc8u: goto label_1a7bc8;
        case 0x1a7bccu: goto label_1a7bcc;
        case 0x1a7bd0u: goto label_1a7bd0;
        case 0x1a7bd4u: goto label_1a7bd4;
        case 0x1a7bd8u: goto label_1a7bd8;
        case 0x1a7bdcu: goto label_1a7bdc;
        case 0x1a7be0u: goto label_1a7be0;
        case 0x1a7be4u: goto label_1a7be4;
        case 0x1a7be8u: goto label_1a7be8;
        case 0x1a7becu: goto label_1a7bec;
        case 0x1a7bf0u: goto label_1a7bf0;
        case 0x1a7bf4u: goto label_1a7bf4;
        case 0x1a7bf8u: goto label_1a7bf8;
        case 0x1a7bfcu: goto label_1a7bfc;
        case 0x1a7c00u: goto label_1a7c00;
        case 0x1a7c04u: goto label_1a7c04;
        case 0x1a7c08u: goto label_1a7c08;
        case 0x1a7c0cu: goto label_1a7c0c;
        case 0x1a7c10u: goto label_1a7c10;
        case 0x1a7c14u: goto label_1a7c14;
        case 0x1a7c18u: goto label_1a7c18;
        case 0x1a7c1cu: goto label_1a7c1c;
        case 0x1a7c20u: goto label_1a7c20;
        case 0x1a7c24u: goto label_1a7c24;
        case 0x1a7c28u: goto label_1a7c28;
        case 0x1a7c2cu: goto label_1a7c2c;
        case 0x1a7c30u: goto label_1a7c30;
        case 0x1a7c34u: goto label_1a7c34;
        case 0x1a7c38u: goto label_1a7c38;
        case 0x1a7c3cu: goto label_1a7c3c;
        case 0x1a7c40u: goto label_1a7c40;
        case 0x1a7c44u: goto label_1a7c44;
        case 0x1a7c48u: goto label_1a7c48;
        case 0x1a7c4cu: goto label_1a7c4c;
        case 0x1a7c50u: goto label_1a7c50;
        case 0x1a7c54u: goto label_1a7c54;
        case 0x1a7c58u: goto label_1a7c58;
        case 0x1a7c5cu: goto label_1a7c5c;
        case 0x1a7c60u: goto label_1a7c60;
        case 0x1a7c64u: goto label_1a7c64;
        case 0x1a7c68u: goto label_1a7c68;
        case 0x1a7c6cu: goto label_1a7c6c;
        case 0x1a7c70u: goto label_1a7c70;
        case 0x1a7c74u: goto label_1a7c74;
        case 0x1a7c78u: goto label_1a7c78;
        case 0x1a7c7cu: goto label_1a7c7c;
        case 0x1a7c80u: goto label_1a7c80;
        case 0x1a7c84u: goto label_1a7c84;
        case 0x1a7c88u: goto label_1a7c88;
        case 0x1a7c8cu: goto label_1a7c8c;
        case 0x1a7c90u: goto label_1a7c90;
        case 0x1a7c94u: goto label_1a7c94;
        case 0x1a7c98u: goto label_1a7c98;
        case 0x1a7c9cu: goto label_1a7c9c;
        case 0x1a7ca0u: goto label_1a7ca0;
        case 0x1a7ca4u: goto label_1a7ca4;
        case 0x1a7ca8u: goto label_1a7ca8;
        case 0x1a7cacu: goto label_1a7cac;
        case 0x1a7cb0u: goto label_1a7cb0;
        case 0x1a7cb4u: goto label_1a7cb4;
        case 0x1a7cb8u: goto label_1a7cb8;
        case 0x1a7cbcu: goto label_1a7cbc;
        case 0x1a7cc0u: goto label_1a7cc0;
        case 0x1a7cc4u: goto label_1a7cc4;
        case 0x1a7cc8u: goto label_1a7cc8;
        case 0x1a7cccu: goto label_1a7ccc;
        case 0x1a7cd0u: goto label_1a7cd0;
        case 0x1a7cd4u: goto label_1a7cd4;
        case 0x1a7cd8u: goto label_1a7cd8;
        case 0x1a7cdcu: goto label_1a7cdc;
        case 0x1a7ce0u: goto label_1a7ce0;
        case 0x1a7ce4u: goto label_1a7ce4;
        case 0x1a7ce8u: goto label_1a7ce8;
        case 0x1a7cecu: goto label_1a7cec;
        default: break;
    }

    ctx->pc = 0x1a77b0u;

label_1a77b0:
    // 0x1a77b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a77b4:
    // 0x1a77b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1a77b8:
    // 0x1a77b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1a77b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1a77bc:
    // 0x1a77bc: 0x246306a0  addiu       $v1, $v1, 0x6A0
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1696));
label_1a77c0:
    // 0x1a77c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1a77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1a77c4:
    // 0x1a77c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a77c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a77c8:
    // 0x1a77c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1a77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1a77cc:
    // 0x1a77cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a77d0:
    // 0x1a77d0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1a77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1a77d4:
    // 0x1a77d4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a77d8:
    // 0x1a77d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a77d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1a77dc:
    // 0x1a77dc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a77dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a77e0:
    // 0x1a77e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a77e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a77e4:
    // 0x1a77e4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1a77e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a77e8:
    // 0x1a77e8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1a77e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1a77ec:
    // 0x1a77ec: 0x26070c40  addiu       $a3, $s0, 0xC40
    ctx->pc = 0x1a77ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3136));
label_1a77f0:
    // 0x1a77f0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1a77f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1a77f4:
    // 0x1a77f4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1a77f8:
    // 0x1a77f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a77f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a77fc:
    // 0x1a77fc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1a77fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1a7800:
    // 0x1a7800: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1a7800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1a7804:
    // 0x1a7804: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1a7804u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1a7808:
    // 0x1a7808: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1a7808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1a780c:
    // 0x1a780c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1a780cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1a7810:
    // 0x1a7810: 0xc483d20c  lwc1        $f3, -0x2DF4($a0)
    ctx->pc = 0x1a7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7814:
    // 0x1a7814: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1a7818:
    // 0x1a7818: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1a7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a781c:
    // 0x1a781c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1a7820:
    // 0x1a7820: 0xc4a0d21c  lwc1        $f0, -0x2DE4($a1)
    ctx->pc = 0x1a7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294955548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7824:
    // 0x1a7824: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a7824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a7828:
    // 0x1a7828: 0xc4c1d22c  lwc1        $f1, -0x2DD4($a2)
    ctx->pc = 0x1a7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294955564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a782c:
    // 0x1a782c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7830:
    // 0x1a7830: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a7834:
    // 0x1a7834: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a7834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a7838:
    // 0x1a7838: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a783c:
    // 0x1a783c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1a783cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1a7840:
    // 0x1a7840: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a7840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a7844:
    // 0x1a7844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7848:
    // 0x1a7848: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a7848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a784c:
    // 0x1a784c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1a784cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a7850:
    // 0x1a7850: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a7854:
    // 0x1a7854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7858:
    // 0x1a7858: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a785c:
    // 0x1a785c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7860:
    // 0x1a7860: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1a7860u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a7864:
    // 0x1a7864: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a7864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a7868:
    // 0x1a7868: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a7868u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a786c:
    // 0x1a786c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a786cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7870:
    // 0x1a7870: 0x8e020c40  lw          $v0, 0xC40($s0)
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3136)));
label_1a7874:
    // 0x1a7874: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a7874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a7878:
    // 0x1a7878: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a7878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a787c:
    // 0x1a787c: 0x60f809  jalr        $v1
label_1a7880:
    if (ctx->pc == 0x1A7880u) {
        ctx->pc = 0x1A7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A787Cu;
        // 0x1a7880: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7884u;
        goto label_1a7884;
    }
    ctx->pc = 0x1A787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A7884u);
        ctx->pc = 0x1A7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A787Cu;
        // 0x1a7880: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A787Cu, 0x1A7884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7884u;
label_1a7884:
    // 0x1a7884: 0x8e070640  lw          $a3, 0x640($s0)
    ctx->pc = 0x1a7884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_1a7888:
    // 0x1a7888: 0x26030640  addiu       $v1, $s0, 0x640
    ctx->pc = 0x1a7888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
label_1a788c:
    // 0x1a788c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7890:
    // 0x1a7890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7894:
    // 0x1a7894: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x1a7894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1a7898:
    // 0x1a7898: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1a7898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1a789c:
    // 0x1a789c: 0x40f809  jalr        $v0
label_1a78a0:
    if (ctx->pc == 0x1A78A0u) {
        ctx->pc = 0x1A78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A789Cu;
        // 0x1a78a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A78A4u;
        goto label_1a78a4;
    }
    ctx->pc = 0x1A789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A78A4u);
        ctx->pc = 0x1A78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A789Cu;
        // 0x1a78a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A789Cu, 0x1A78A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A78A4u;
label_1a78a4:
    // 0x1a78a4: 0x8e031240  lw          $v1, 0x1240($s0)
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_1a78a8:
    // 0x1a78a8: 0x26071240  addiu       $a3, $s0, 0x1240
    ctx->pc = 0x1a78a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4672));
label_1a78ac:
    // 0x1a78ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a78acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a78b0:
    // 0x1a78b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a78b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a78b4:
    // 0x1a78b4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a78b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a78b8:
    // 0x1a78b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a78bc:
    // 0x1a78bc: 0x40f809  jalr        $v0
label_1a78c0:
    if (ctx->pc == 0x1A78C0u) {
        ctx->pc = 0x1A78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78BCu;
        // 0x1a78c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A78C4u;
        goto label_1a78c4;
    }
    ctx->pc = 0x1A78BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A78C4u);
        ctx->pc = 0x1A78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78BCu;
        // 0x1a78c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A78BCu, 0x1A78C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A78C4u;
label_1a78c4:
    // 0x1a78c4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a78c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a78c8:
    // 0x1a78c8: 0x26070b40  addiu       $a3, $s0, 0xB40
    ctx->pc = 0x1a78c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2880));
label_1a78cc:
    // 0x1a78cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a78ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a78d0:
    // 0x1a78d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a78d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a78d4:
    // 0x1a78d4: 0xc642d214  lwc1        $f2, -0x2DEC($s2)
    ctx->pc = 0x1a78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a78d8:
    // 0x1a78d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a78d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a78dc:
    // 0x1a78dc: 0xc663d218  lwc1        $f3, -0x2DE8($s3)
    ctx->pc = 0x1a78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a78e0:
    // 0x1a78e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a78e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a78e4:
    // 0x1a78e4: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a78e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a78e8:
    // 0x1a78e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a78e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a78ec:
    // 0x1a78ec: 0xc6a4d220  lwc1        $f4, -0x2DE0($s5)
    ctx->pc = 0x1a78ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a78f0:
    // 0x1a78f0: 0xc683d230  lwc1        $f3, -0x2DD0($s4)
    ctx->pc = 0x1a78f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a78f4:
    // 0x1a78f4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a78f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a78f8:
    // 0x1a78f8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a78f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a78fc:
    // 0x1a78fc: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a78fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7900:
    // 0x1a7900: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7904:
    // 0x1a7904: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7908:
    // 0x1a7908: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1a7908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1a790c:
    // 0x1a790c: 0x8e030b40  lw          $v1, 0xB40($s0)
    ctx->pc = 0x1a790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2880)));
label_1a7910:
    // 0x1a7910: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a7910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a7914:
    // 0x1a7914: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7918:
    // 0x1a7918: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a791c:
    // 0x1a791c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a791cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7920:
    // 0x1a7920: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7924:
    // 0x1a7924: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7928:
    // 0x1a7928: 0x40f809  jalr        $v0
label_1a792c:
    if (ctx->pc == 0x1A792Cu) {
        ctx->pc = 0x1A792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7928u;
        // 0x1a792c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7930u;
        goto label_1a7930;
    }
    ctx->pc = 0x1A7928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7930u);
        ctx->pc = 0x1A792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7928u;
        // 0x1a792c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7928u, 0x1A7930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7930u;
label_1a7930:
    // 0x1a7930: 0x8e030540  lw          $v1, 0x540($s0)
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1344)));
label_1a7934:
    // 0x1a7934: 0x26070540  addiu       $a3, $s0, 0x540
    ctx->pc = 0x1a7934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
label_1a7938:
    // 0x1a7938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a793c:
    // 0x1a793c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7940:
    // 0x1a7940: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7944:
    // 0x1a7944: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7948:
    // 0x1a7948: 0x40f809  jalr        $v0
label_1a794c:
    if (ctx->pc == 0x1A794Cu) {
        ctx->pc = 0x1A794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7948u;
        // 0x1a794c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7950u;
        goto label_1a7950;
    }
    ctx->pc = 0x1A7948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7950u);
        ctx->pc = 0x1A794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7948u;
        // 0x1a794c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7948u, 0x1A7950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7950u;
label_1a7950:
    // 0x1a7950: 0x8e031140  lw          $v1, 0x1140($s0)
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4416)));
label_1a7954:
    // 0x1a7954: 0x26071140  addiu       $a3, $s0, 0x1140
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4416));
label_1a7958:
    // 0x1a7958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a795c:
    // 0x1a795c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a795cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7960:
    // 0x1a7960: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7964:
    // 0x1a7964: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7968:
    // 0x1a7968: 0x40f809  jalr        $v0
label_1a796c:
    if (ctx->pc == 0x1A796Cu) {
        ctx->pc = 0x1A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7968u;
        // 0x1a796c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7970u;
        goto label_1a7970;
    }
    ctx->pc = 0x1A7968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7970u);
        ctx->pc = 0x1A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7968u;
        // 0x1a796c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7968u, 0x1A7970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7970u;
label_1a7970:
    // 0x1a7970: 0xc640d214  lwc1        $f0, -0x2DEC($s2)
    ctx->pc = 0x1a7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7974:
    // 0x1a7974: 0x26070a40  addiu       $a3, $s0, 0xA40
    ctx->pc = 0x1a7974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
label_1a7978:
    // 0x1a7978: 0xc661d218  lwc1        $f1, -0x2DE8($s3)
    ctx->pc = 0x1a7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a797c:
    // 0x1a797c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a797cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7980:
    // 0x1a7980: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a7980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a7984:
    // 0x1a7984: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1a7984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7988:
    // 0x1a7988: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a7988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a798c:
    // 0x1a798c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a7990:
    // 0x1a7990: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a7990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a7994:
    // 0x1a7994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7998:
    // 0x1a7998: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a7998u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1a799c:
    // 0x1a799c: 0xc6e5d234  lwc1        $f5, -0x2DCC($s7)
    ctx->pc = 0x1a799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1a79a0:
    // 0x1a79a0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a79a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a79a4:
    // 0x1a79a4: 0x8e030a40  lw          $v1, 0xA40($s0)
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2624)));
label_1a79a8:
    // 0x1a79a8: 0xc6c4d224  lwc1        $f4, -0x2DDC($s6)
    ctx->pc = 0x1a79a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294955556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a79ac:
    // 0x1a79ac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a79acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a79b0:
    // 0x1a79b0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a79b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a79b4:
    // 0x1a79b4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a79b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a79b8:
    // 0x1a79b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a79bc:
    // 0x1a79bc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a79bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a79c0:
    // 0x1a79c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1a79c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1a79c4:
    // 0x1a79c4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1a79c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1a79c8:
    // 0x1a79c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a79c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a79cc:
    // 0x1a79cc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a79ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a79d0:
    // 0x1a79d0: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a79d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a79d4:
    // 0x1a79d4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a79d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a79d8:
    // 0x1a79d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a79dc:
    // 0x1a79dc: 0x40f809  jalr        $v0
label_1a79e0:
    if (ctx->pc == 0x1A79E0u) {
        ctx->pc = 0x1A79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79DCu;
        // 0x1a79e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79E4u;
        goto label_1a79e4;
    }
    ctx->pc = 0x1A79DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A79E4u);
        ctx->pc = 0x1A79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79DCu;
        // 0x1a79e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A79DCu, 0x1A79E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
label_1a79e8:
    // 0x1a79e8: 0x26070440  addiu       $a3, $s0, 0x440
    ctx->pc = 0x1a79e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_1a79ec:
    // 0x1a79ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a79ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a79f0:
    // 0x1a79f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a79f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a79f4:
    // 0x1a79f4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a79f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a79f8:
    // 0x1a79f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a79fc:
    // 0x1a79fc: 0x40f809  jalr        $v0
label_1a7a00:
    if (ctx->pc == 0x1A7A00u) {
        ctx->pc = 0x1A7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79FCu;
        // 0x1a7a00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A04u;
        goto label_1a7a04;
    }
    ctx->pc = 0x1A79FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7A04u);
        ctx->pc = 0x1A7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79FCu;
        // 0x1a7a00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A79FCu, 0x1A7A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7A04u;
label_1a7a04:
    // 0x1a7a04: 0x8e031040  lw          $v1, 0x1040($s0)
    ctx->pc = 0x1a7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
label_1a7a08:
    // 0x1a7a08: 0x26071040  addiu       $a3, $s0, 0x1040
    ctx->pc = 0x1a7a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
label_1a7a0c:
    // 0x1a7a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a10:
    // 0x1a7a10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7a14:
    // 0x1a7a14: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7a18:
    // 0x1a7a18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7a1c:
    // 0x1a7a1c: 0x40f809  jalr        $v0
label_1a7a20:
    if (ctx->pc == 0x1A7A20u) {
        ctx->pc = 0x1A7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A1Cu;
        // 0x1a7a20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A24u;
        goto label_1a7a24;
    }
    ctx->pc = 0x1A7A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7A24u);
        ctx->pc = 0x1A7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A1Cu;
        // 0x1a7a20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A1Cu, 0x1A7A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7A24u;
label_1a7a24:
    // 0x1a7a24: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7a28:
    // 0x1a7a28: 0x26070d40  addiu       $a3, $s0, 0xD40
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3392));
label_1a7a2c:
    // 0x1a7a2c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7a30:
    // 0x1a7a30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a34:
    // 0x1a7a34: 0xc642d214  lwc1        $f2, -0x2DEC($s2)
    ctx->pc = 0x1a7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a7a38:
    // 0x1a7a38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7a3c:
    // 0x1a7a3c: 0xc663d218  lwc1        $f3, -0x2DE8($s3)
    ctx->pc = 0x1a7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7a40:
    // 0x1a7a40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a7a40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1a7a44:
    // 0x1a7a44: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a7a44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a7a48:
    // 0x1a7a48: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a7a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a7a4c:
    // 0x1a7a4c: 0xc6a4d220  lwc1        $f4, -0x2DE0($s5)
    ctx->pc = 0x1a7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a7a50:
    // 0x1a7a50: 0xc683d230  lwc1        $f3, -0x2DD0($s4)
    ctx->pc = 0x1a7a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7a54:
    // 0x1a7a54: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a7a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7a58:
    // 0x1a7a58: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a7a5c:
    // 0x1a7a5c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a7a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7a60:
    // 0x1a7a60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7a64:
    // 0x1a7a64: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7a68:
    // 0x1a7a68: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a7a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1a7a6c:
    // 0x1a7a6c: 0x8e030d40  lw          $v1, 0xD40($s0)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3392)));
label_1a7a70:
    // 0x1a7a70: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a7a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a7a74:
    // 0x1a7a74: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7a78:
    // 0x1a7a78: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a7a7c:
    // 0x1a7a7c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a7a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7a80:
    // 0x1a7a80: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7a84:
    // 0x1a7a84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7a88:
    // 0x1a7a88: 0x40f809  jalr        $v0
label_1a7a8c:
    if (ctx->pc == 0x1A7A8Cu) {
        ctx->pc = 0x1A7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A88u;
        // 0x1a7a8c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A90u;
        goto label_1a7a90;
    }
    ctx->pc = 0x1A7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7A90u);
        ctx->pc = 0x1A7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A88u;
        // 0x1a7a8c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A88u, 0x1A7A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7A90u;
label_1a7a90:
    // 0x1a7a90: 0x8e030740  lw          $v1, 0x740($s0)
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
label_1a7a94:
    // 0x1a7a94: 0x26070740  addiu       $a3, $s0, 0x740
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
label_1a7a98:
    // 0x1a7a98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a9c:
    // 0x1a7a9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7aa0:
    // 0x1a7aa0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7aa4:
    // 0x1a7aa4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7aa8:
    // 0x1a7aa8: 0x40f809  jalr        $v0
label_1a7aac:
    if (ctx->pc == 0x1A7AACu) {
        ctx->pc = 0x1A7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AA8u;
        // 0x1a7aac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7AB0u;
        goto label_1a7ab0;
    }
    ctx->pc = 0x1A7AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7AB0u);
        ctx->pc = 0x1A7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AA8u;
        // 0x1a7aac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7AA8u, 0x1A7AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7AB0u;
label_1a7ab0:
    // 0x1a7ab0: 0x8e031340  lw          $v1, 0x1340($s0)
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1a7ab4:
    // 0x1a7ab4: 0x26071340  addiu       $a3, $s0, 0x1340
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4928));
label_1a7ab8:
    // 0x1a7ab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7abc:
    // 0x1a7abc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7ac0:
    // 0x1a7ac0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7ac4:
    // 0x1a7ac4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7ac8:
    // 0x1a7ac8: 0x40f809  jalr        $v0
label_1a7acc:
    if (ctx->pc == 0x1A7ACCu) {
        ctx->pc = 0x1A7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AC8u;
        // 0x1a7acc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7AD0u;
        goto label_1a7ad0;
    }
    ctx->pc = 0x1A7AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7AD0u);
        ctx->pc = 0x1A7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AC8u;
        // 0x1a7acc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7AC8u, 0x1A7AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7AD0u;
label_1a7ad0:
    // 0x1a7ad0: 0xc640d214  lwc1        $f0, -0x2DEC($s2)
    ctx->pc = 0x1a7ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7ad4:
    // 0x1a7ad4: 0x26070e40  addiu       $a3, $s0, 0xE40
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3648));
label_1a7ad8:
    // 0x1a7ad8: 0xc661d218  lwc1        $f1, -0x2DE8($s3)
    ctx->pc = 0x1a7ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7adc:
    // 0x1a7adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ae0:
    // 0x1a7ae0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a7ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a7ae4:
    // 0x1a7ae4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1a7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7ae8:
    // 0x1a7ae8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a7ae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a7aec:
    // 0x1a7aec: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a7aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a7af0:
    // 0x1a7af0: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a7af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a7af4:
    // 0x1a7af4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7af8:
    // 0x1a7af8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1a7af8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1a7afc:
    // 0x1a7afc: 0xc6c4d224  lwc1        $f4, -0x2DDC($s6)
    ctx->pc = 0x1a7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294955556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a7b00:
    // 0x1a7b00: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a7b00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a7b04:
    // 0x1a7b04: 0x8e030e40  lw          $v1, 0xE40($s0)
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3648)));
label_1a7b08:
    // 0x1a7b08: 0xc6e5d234  lwc1        $f5, -0x2DCC($s7)
    ctx->pc = 0x1a7b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1a7b0c:
    // 0x1a7b0c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a7b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7b10:
    // 0x1a7b10: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a7b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a7b14:
    // 0x1a7b14: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a7b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7b18:
    // 0x1a7b18: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7b1c:
    // 0x1a7b1c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7b20:
    // 0x1a7b20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a7b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1a7b24:
    // 0x1a7b24: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1a7b24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1a7b28:
    // 0x1a7b28: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7b2c:
    // 0x1a7b2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a7b30:
    // 0x1a7b30: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a7b30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7b34:
    // 0x1a7b34: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7b38:
    // 0x1a7b38: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7b3c:
    // 0x1a7b3c: 0x40f809  jalr        $v0
label_1a7b40:
    if (ctx->pc == 0x1A7B40u) {
        ctx->pc = 0x1A7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B3Cu;
        // 0x1a7b40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B44u;
        goto label_1a7b44;
    }
    ctx->pc = 0x1A7B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7B44u);
        ctx->pc = 0x1A7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B3Cu;
        // 0x1a7b40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B3Cu, 0x1A7B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7B44u;
label_1a7b44:
    // 0x1a7b44: 0x8e030840  lw          $v1, 0x840($s0)
    ctx->pc = 0x1a7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
label_1a7b48:
    // 0x1a7b48: 0x26070840  addiu       $a3, $s0, 0x840
    ctx->pc = 0x1a7b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_1a7b4c:
    // 0x1a7b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b50:
    // 0x1a7b50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7b54:
    // 0x1a7b54: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7b58:
    // 0x1a7b58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7b5c:
    // 0x1a7b5c: 0x40f809  jalr        $v0
label_1a7b60:
    if (ctx->pc == 0x1A7B60u) {
        ctx->pc = 0x1A7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B5Cu;
        // 0x1a7b60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B64u;
        goto label_1a7b64;
    }
    ctx->pc = 0x1A7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7B64u);
        ctx->pc = 0x1A7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B5Cu;
        // 0x1a7b60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B5Cu, 0x1A7B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7B64u;
label_1a7b64:
    // 0x1a7b64: 0x8e031440  lw          $v1, 0x1440($s0)
    ctx->pc = 0x1a7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5184)));
label_1a7b68:
    // 0x1a7b68: 0x26071440  addiu       $a3, $s0, 0x1440
    ctx->pc = 0x1a7b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 5184));
label_1a7b6c:
    // 0x1a7b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b70:
    // 0x1a7b70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7b74:
    // 0x1a7b74: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7b78:
    // 0x1a7b78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7b7c:
    // 0x1a7b7c: 0x40f809  jalr        $v0
label_1a7b80:
    if (ctx->pc == 0x1A7B80u) {
        ctx->pc = 0x1A7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B7Cu;
        // 0x1a7b80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B84u;
        goto label_1a7b84;
    }
    ctx->pc = 0x1A7B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7B84u);
        ctx->pc = 0x1A7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B7Cu;
        // 0x1a7b80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B7Cu, 0x1A7B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7B84u;
label_1a7b84:
    // 0x1a7b84: 0xc661d218  lwc1        $f1, -0x2DE8($s3)
    ctx->pc = 0x1a7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7b88:
    // 0x1a7b88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7b8c:
    // 0x1a7b8c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a7b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1a7b90:
    // 0x1a7b90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a7b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a7b94:
    // 0x1a7b94: 0x26070940  addiu       $a3, $s0, 0x940
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
label_1a7b98:
    // 0x1a7b98: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7b9c:
    // 0x1a7b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ba0:
    // 0x1a7ba0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a7ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a7ba4:
    // 0x1a7ba4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a7ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a7ba8:
    // 0x1a7ba8: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a7ba8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a7bac:
    // 0x1a7bac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7bb0:
    // 0x1a7bb0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a7bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a7bb4:
    // 0x1a7bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a7bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a7bb8:
    // 0x1a7bb8: 0xc443d23c  lwc1        $f3, -0x2DC4($v0)
    ctx->pc = 0x1a7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7bbc:
    // 0x1a7bbc: 0x8e030940  lw          $v1, 0x940($s0)
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a7bc0:
    // 0x1a7bc0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a7bc4:
    // 0x1a7bc4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a7bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7bc8:
    // 0x1a7bc8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7bcc:
    // 0x1a7bcc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a7bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a7bd0:
    // 0x1a7bd0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a7bd4:
    // 0x1a7bd4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a7bd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a7bd8:
    // 0x1a7bd8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7bdc:
    // 0x1a7bdc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7be0:
    // 0x1a7be0: 0x40f809  jalr        $v0
label_1a7be4:
    if (ctx->pc == 0x1A7BE4u) {
        ctx->pc = 0x1A7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BE0u;
        // 0x1a7be4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7BE8u;
        goto label_1a7be8;
    }
    ctx->pc = 0x1A7BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7BE8u);
        ctx->pc = 0x1A7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BE0u;
        // 0x1a7be4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7BE0u, 0x1A7BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7BE8u;
label_1a7be8:
    // 0x1a7be8: 0x8e030340  lw          $v1, 0x340($s0)
    ctx->pc = 0x1a7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_1a7bec:
    // 0x1a7bec: 0x26070340  addiu       $a3, $s0, 0x340
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1a7bf0:
    // 0x1a7bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bf4:
    // 0x1a7bf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7bf8:
    // 0x1a7bf8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7bfc:
    // 0x1a7bfc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7c00:
    // 0x1a7c00: 0x40f809  jalr        $v0
label_1a7c04:
    if (ctx->pc == 0x1A7C04u) {
        ctx->pc = 0x1A7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C00u;
        // 0x1a7c04: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C08u;
        goto label_1a7c08;
    }
    ctx->pc = 0x1A7C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7C08u);
        ctx->pc = 0x1A7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C00u;
        // 0x1a7c04: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7C00u, 0x1A7C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7C08u;
label_1a7c08:
    // 0x1a7c08: 0x8e030f40  lw          $v1, 0xF40($s0)
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
label_1a7c0c:
    // 0x1a7c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c10:
    // 0x1a7c10: 0x26100f40  addiu       $s0, $s0, 0xF40
    ctx->pc = 0x1a7c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1a7c14:
    // 0x1a7c14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7c18:
    // 0x1a7c18: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7c1c:
    // 0x1a7c1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a7c20:
    // 0x1a7c20: 0x40f809  jalr        $v0
label_1a7c24:
    if (ctx->pc == 0x1A7C24u) {
        ctx->pc = 0x1A7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C20u;
        // 0x1a7c24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C28u;
        goto label_1a7c28;
    }
    ctx->pc = 0x1A7C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7C28u);
        ctx->pc = 0x1A7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C20u;
        // 0x1a7c24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7C20u, 0x1A7C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7C28u;
label_1a7c28:
    // 0x1a7c28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a7c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a7c2c:
    // 0x1a7c2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a7c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a7c30:
    // 0x1a7c30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a7c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a7c34:
    // 0x1a7c34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a7c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a7c38:
    // 0x1a7c38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a7c38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a7c3c:
    // 0x1a7c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a7c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a7c40:
    // 0x1a7c40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1a7c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7c44:
    // 0x1a7c44: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1a7c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7c48:
    // 0x1a7c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7c4c:
    // 0x1a7c4c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1a7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a7c50:
    // 0x1a7c50: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1a7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a7c54:
    // 0x1a7c54: 0x3e00008  jr          $ra
label_1a7c58:
    if (ctx->pc == 0x1A7C58u) {
        ctx->pc = 0x1A7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C54u;
        // 0x1a7c58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C5Cu;
        goto label_1a7c5c;
    }
    ctx->pc = 0x1A7C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C54u;
        // 0x1a7c58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7C5Cu;
label_1a7c5c:
    // 0x1a7c5c: 0x0  nop
    ctx->pc = 0x1a7c5cu;
    // NOP
label_1a7c60:
    // 0x1a7c60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a7c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c64:
    // 0x1a7c64: 0x8ca31540  lw          $v1, 0x1540($a1)
    ctx->pc = 0x1a7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5440)));
label_1a7c68:
    // 0x1a7c68: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1a7c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a7c6c:
    // 0x1a7c6c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1a7c70:
    if (ctx->pc == 0x1A7C70u) {
        ctx->pc = 0x1A7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C6Cu;
        // 0x1a7c70: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C74u;
        goto label_1a7c74;
    }
    ctx->pc = 0x1A7C6Cu;
    {
        const bool branch_taken_0x1a7c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C6Cu;
        // 0x1a7c70: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c6c) {
            ctx->pc = 0x1A7D08u;
            return;
        }
    }
    ctx->pc = 0x1A7C74u;
label_1a7c74:
    // 0x1a7c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a7c78:
    // 0x1a7c78: 0x24423fc0  addiu       $v0, $v0, 0x3FC0
    ctx->pc = 0x1a7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16320));
label_1a7c7c:
    // 0x1a7c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a7c80:
    // 0x1a7c80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a7c84:
    // 0x1a7c84: 0x800008  jr          $a0
label_1a7c88:
    if (ctx->pc == 0x1A7C88u) {
        ctx->pc = 0x1A7C8Cu;
        goto label_1a7c8c;
    }
    ctx->pc = 0x1A7C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7C8Cu: goto label_1a7c8c;
            case 0x1A7CA0u: goto label_1a7ca0;
            case 0x1A7CB4u: goto label_1a7cb4;
            case 0x1A7CC8u: goto label_1a7cc8;
            case 0x1A7CDCu: goto label_1a7cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7C84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A7C8Cu;
label_1a7c8c:
    // 0x1a7c8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7c90:
    // 0x1a7c90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7c94:
    // 0x1a7c94: 0xc440d2c4  lwc1        $f0, -0x2D3C($v0)
    ctx->pc = 0x1a7c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7c98:
    // 0x1a7c98: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a7c9c:
    if (ctx->pc == 0x1A7C9Cu) {
        ctx->pc = 0x1A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C98u;
        // 0x1a7c9c: 0xc461d2c8  lwc1        $f1, -0x2D38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CA0u;
        goto label_1a7ca0;
    }
    ctx->pc = 0x1A7C98u;
    {
        const bool branch_taken_0x1a7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C98u;
        // 0x1a7c9c: 0xc461d2c8  lwc1        $f1, -0x2D38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c98) {
            ctx->pc = 0x1A7D00u;
            return;
        }
    }
    ctx->pc = 0x1A7CA0u;
label_1a7ca0:
    // 0x1a7ca0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7ca4:
    // 0x1a7ca4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7ca8:
    // 0x1a7ca8: 0xc440d2dc  lwc1        $f0, -0x2D24($v0)
    ctx->pc = 0x1a7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7cac:
    // 0x1a7cac: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a7cb0:
    if (ctx->pc == 0x1A7CB0u) {
        ctx->pc = 0x1A7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CACu;
        // 0x1a7cb0: 0xc461d2e0  lwc1        $f1, -0x2D20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CB4u;
        goto label_1a7cb4;
    }
    ctx->pc = 0x1A7CACu;
    {
        const bool branch_taken_0x1a7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CACu;
        // 0x1a7cb0: 0xc461d2e0  lwc1        $f1, -0x2D20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cac) {
            ctx->pc = 0x1A7D00u;
            return;
        }
    }
    ctx->pc = 0x1A7CB4u;
label_1a7cb4:
    // 0x1a7cb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7cb8:
    // 0x1a7cb8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7cbc:
    // 0x1a7cbc: 0xc440d2bc  lwc1        $f0, -0x2D44($v0)
    ctx->pc = 0x1a7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7cc0:
    // 0x1a7cc0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a7cc4:
    if (ctx->pc == 0x1A7CC4u) {
        ctx->pc = 0x1A7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CC0u;
        // 0x1a7cc4: 0xc461d2c0  lwc1        $f1, -0x2D40($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CC8u;
        goto label_1a7cc8;
    }
    ctx->pc = 0x1A7CC0u;
    {
        const bool branch_taken_0x1a7cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CC0u;
        // 0x1a7cc4: 0xc461d2c0  lwc1        $f1, -0x2D40($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cc0) {
            ctx->pc = 0x1A7D00u;
            return;
        }
    }
    ctx->pc = 0x1A7CC8u;
label_1a7cc8:
    // 0x1a7cc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7ccc:
    // 0x1a7ccc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7cd0:
    // 0x1a7cd0: 0xc440d2f4  lwc1        $f0, -0x2D0C($v0)
    ctx->pc = 0x1a7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7cd4:
    // 0x1a7cd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a7cd8:
    if (ctx->pc == 0x1A7CD8u) {
        ctx->pc = 0x1A7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CD4u;
        // 0x1a7cd8: 0xc461d2f8  lwc1        $f1, -0x2D08($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CDCu;
        goto label_1a7cdc;
    }
    ctx->pc = 0x1A7CD4u;
    {
        const bool branch_taken_0x1a7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CD4u;
        // 0x1a7cd8: 0xc461d2f8  lwc1        $f1, -0x2D08($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cd4) {
            ctx->pc = 0x1A7D00u;
            return;
        }
    }
    ctx->pc = 0x1A7CDCu;
label_1a7cdc:
    // 0x1a7cdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7ce0:
    // 0x1a7ce0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7ce4:
    // 0x1a7ce4: 0xc440d2ec  lwc1        $f0, -0x2D14($v0)
    ctx->pc = 0x1a7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7ce8:
    // 0x1a7ce8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a7cec:
    if (ctx->pc == 0x1A7CECu) {
        ctx->pc = 0x1A7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CE8u;
        // 0x1a7cec: 0xc461d2f0  lwc1        $f1, -0x2D10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CF0u;
        goto label_fallthrough_0x1a7ce8;
    }
    ctx->pc = 0x1A7CE8u;
    {
        const bool branch_taken_0x1a7ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CE8u;
        // 0x1a7cec: 0xc461d2f0  lwc1        $f1, -0x2D10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ce8) {
            ctx->pc = 0x1A7D00u;
            return;
        }
    }
label_fallthrough_0x1a7ce8:
    ctx->pc = 0x1A7CF0u;
}
