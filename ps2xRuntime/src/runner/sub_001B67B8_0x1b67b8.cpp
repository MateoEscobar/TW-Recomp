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

// Function: sub_001B67B8
// Address: 0x1b67b8 - 0x1b6ba0
void sub_001B67B8_0x1b67b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B67B8_0x1b67b8");
#endif

    switch (ctx->pc) {
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b67bcu: goto label_1b67bc;
        case 0x1b67c0u: goto label_1b67c0;
        case 0x1b67c4u: goto label_1b67c4;
        case 0x1b67c8u: goto label_1b67c8;
        case 0x1b67ccu: goto label_1b67cc;
        case 0x1b67d0u: goto label_1b67d0;
        case 0x1b67d4u: goto label_1b67d4;
        case 0x1b67d8u: goto label_1b67d8;
        case 0x1b67dcu: goto label_1b67dc;
        case 0x1b67e0u: goto label_1b67e0;
        case 0x1b67e4u: goto label_1b67e4;
        case 0x1b67e8u: goto label_1b67e8;
        case 0x1b67ecu: goto label_1b67ec;
        case 0x1b67f0u: goto label_1b67f0;
        case 0x1b67f4u: goto label_1b67f4;
        case 0x1b67f8u: goto label_1b67f8;
        case 0x1b67fcu: goto label_1b67fc;
        case 0x1b6800u: goto label_1b6800;
        case 0x1b6804u: goto label_1b6804;
        case 0x1b6808u: goto label_1b6808;
        case 0x1b680cu: goto label_1b680c;
        case 0x1b6810u: goto label_1b6810;
        case 0x1b6814u: goto label_1b6814;
        case 0x1b6818u: goto label_1b6818;
        case 0x1b681cu: goto label_1b681c;
        case 0x1b6820u: goto label_1b6820;
        case 0x1b6824u: goto label_1b6824;
        case 0x1b6828u: goto label_1b6828;
        case 0x1b682cu: goto label_1b682c;
        case 0x1b6830u: goto label_1b6830;
        case 0x1b6834u: goto label_1b6834;
        case 0x1b6838u: goto label_1b6838;
        case 0x1b683cu: goto label_1b683c;
        case 0x1b6840u: goto label_1b6840;
        case 0x1b6844u: goto label_1b6844;
        case 0x1b6848u: goto label_1b6848;
        case 0x1b684cu: goto label_1b684c;
        case 0x1b6850u: goto label_1b6850;
        case 0x1b6854u: goto label_1b6854;
        case 0x1b6858u: goto label_1b6858;
        case 0x1b685cu: goto label_1b685c;
        case 0x1b6860u: goto label_1b6860;
        case 0x1b6864u: goto label_1b6864;
        case 0x1b6868u: goto label_1b6868;
        case 0x1b686cu: goto label_1b686c;
        case 0x1b6870u: goto label_1b6870;
        case 0x1b6874u: goto label_1b6874;
        case 0x1b6878u: goto label_1b6878;
        case 0x1b687cu: goto label_1b687c;
        case 0x1b6880u: goto label_1b6880;
        case 0x1b6884u: goto label_1b6884;
        case 0x1b6888u: goto label_1b6888;
        case 0x1b688cu: goto label_1b688c;
        case 0x1b6890u: goto label_1b6890;
        case 0x1b6894u: goto label_1b6894;
        case 0x1b6898u: goto label_1b6898;
        case 0x1b689cu: goto label_1b689c;
        case 0x1b68a0u: goto label_1b68a0;
        case 0x1b68a4u: goto label_1b68a4;
        case 0x1b68a8u: goto label_1b68a8;
        case 0x1b68acu: goto label_1b68ac;
        case 0x1b68b0u: goto label_1b68b0;
        case 0x1b68b4u: goto label_1b68b4;
        case 0x1b68b8u: goto label_1b68b8;
        case 0x1b68bcu: goto label_1b68bc;
        case 0x1b68c0u: goto label_1b68c0;
        case 0x1b68c4u: goto label_1b68c4;
        case 0x1b68c8u: goto label_1b68c8;
        case 0x1b68ccu: goto label_1b68cc;
        case 0x1b68d0u: goto label_1b68d0;
        case 0x1b68d4u: goto label_1b68d4;
        case 0x1b68d8u: goto label_1b68d8;
        case 0x1b68dcu: goto label_1b68dc;
        case 0x1b68e0u: goto label_1b68e0;
        case 0x1b68e4u: goto label_1b68e4;
        case 0x1b68e8u: goto label_1b68e8;
        case 0x1b68ecu: goto label_1b68ec;
        case 0x1b68f0u: goto label_1b68f0;
        case 0x1b68f4u: goto label_1b68f4;
        case 0x1b68f8u: goto label_1b68f8;
        case 0x1b68fcu: goto label_1b68fc;
        case 0x1b6900u: goto label_1b6900;
        case 0x1b6904u: goto label_1b6904;
        case 0x1b6908u: goto label_1b6908;
        case 0x1b690cu: goto label_1b690c;
        case 0x1b6910u: goto label_1b6910;
        case 0x1b6914u: goto label_1b6914;
        case 0x1b6918u: goto label_1b6918;
        case 0x1b691cu: goto label_1b691c;
        case 0x1b6920u: goto label_1b6920;
        case 0x1b6924u: goto label_1b6924;
        case 0x1b6928u: goto label_1b6928;
        case 0x1b692cu: goto label_1b692c;
        case 0x1b6930u: goto label_1b6930;
        case 0x1b6934u: goto label_1b6934;
        case 0x1b6938u: goto label_1b6938;
        case 0x1b693cu: goto label_1b693c;
        case 0x1b6940u: goto label_1b6940;
        case 0x1b6944u: goto label_1b6944;
        case 0x1b6948u: goto label_1b6948;
        case 0x1b694cu: goto label_1b694c;
        case 0x1b6950u: goto label_1b6950;
        case 0x1b6954u: goto label_1b6954;
        case 0x1b6958u: goto label_1b6958;
        case 0x1b695cu: goto label_1b695c;
        case 0x1b6960u: goto label_1b6960;
        case 0x1b6964u: goto label_1b6964;
        case 0x1b6968u: goto label_1b6968;
        case 0x1b696cu: goto label_1b696c;
        case 0x1b6970u: goto label_1b6970;
        case 0x1b6974u: goto label_1b6974;
        case 0x1b6978u: goto label_1b6978;
        case 0x1b697cu: goto label_1b697c;
        case 0x1b6980u: goto label_1b6980;
        case 0x1b6984u: goto label_1b6984;
        case 0x1b6988u: goto label_1b6988;
        case 0x1b698cu: goto label_1b698c;
        case 0x1b6990u: goto label_1b6990;
        case 0x1b6994u: goto label_1b6994;
        case 0x1b6998u: goto label_1b6998;
        case 0x1b699cu: goto label_1b699c;
        case 0x1b69a0u: goto label_1b69a0;
        case 0x1b69a4u: goto label_1b69a4;
        case 0x1b69a8u: goto label_1b69a8;
        case 0x1b69acu: goto label_1b69ac;
        case 0x1b69b0u: goto label_1b69b0;
        case 0x1b69b4u: goto label_1b69b4;
        case 0x1b69b8u: goto label_1b69b8;
        case 0x1b69bcu: goto label_1b69bc;
        case 0x1b69c0u: goto label_1b69c0;
        case 0x1b69c4u: goto label_1b69c4;
        case 0x1b69c8u: goto label_1b69c8;
        case 0x1b69ccu: goto label_1b69cc;
        case 0x1b69d0u: goto label_1b69d0;
        case 0x1b69d4u: goto label_1b69d4;
        case 0x1b69d8u: goto label_1b69d8;
        case 0x1b69dcu: goto label_1b69dc;
        case 0x1b69e0u: goto label_1b69e0;
        case 0x1b69e4u: goto label_1b69e4;
        case 0x1b69e8u: goto label_1b69e8;
        case 0x1b69ecu: goto label_1b69ec;
        case 0x1b69f0u: goto label_1b69f0;
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b69f8u: goto label_1b69f8;
        case 0x1b69fcu: goto label_1b69fc;
        case 0x1b6a00u: goto label_1b6a00;
        case 0x1b6a04u: goto label_1b6a04;
        case 0x1b6a08u: goto label_1b6a08;
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a10u: goto label_1b6a10;
        case 0x1b6a14u: goto label_1b6a14;
        case 0x1b6a18u: goto label_1b6a18;
        case 0x1b6a1cu: goto label_1b6a1c;
        case 0x1b6a20u: goto label_1b6a20;
        case 0x1b6a24u: goto label_1b6a24;
        case 0x1b6a28u: goto label_1b6a28;
        case 0x1b6a2cu: goto label_1b6a2c;
        case 0x1b6a30u: goto label_1b6a30;
        case 0x1b6a34u: goto label_1b6a34;
        case 0x1b6a38u: goto label_1b6a38;
        case 0x1b6a3cu: goto label_1b6a3c;
        case 0x1b6a40u: goto label_1b6a40;
        case 0x1b6a44u: goto label_1b6a44;
        case 0x1b6a48u: goto label_1b6a48;
        case 0x1b6a4cu: goto label_1b6a4c;
        case 0x1b6a50u: goto label_1b6a50;
        case 0x1b6a54u: goto label_1b6a54;
        case 0x1b6a58u: goto label_1b6a58;
        case 0x1b6a5cu: goto label_1b6a5c;
        case 0x1b6a60u: goto label_1b6a60;
        case 0x1b6a64u: goto label_1b6a64;
        case 0x1b6a68u: goto label_1b6a68;
        case 0x1b6a6cu: goto label_1b6a6c;
        case 0x1b6a70u: goto label_1b6a70;
        case 0x1b6a74u: goto label_1b6a74;
        case 0x1b6a78u: goto label_1b6a78;
        case 0x1b6a7cu: goto label_1b6a7c;
        case 0x1b6a80u: goto label_1b6a80;
        case 0x1b6a84u: goto label_1b6a84;
        case 0x1b6a88u: goto label_1b6a88;
        case 0x1b6a8cu: goto label_1b6a8c;
        case 0x1b6a90u: goto label_1b6a90;
        case 0x1b6a94u: goto label_1b6a94;
        case 0x1b6a98u: goto label_1b6a98;
        case 0x1b6a9cu: goto label_1b6a9c;
        case 0x1b6aa0u: goto label_1b6aa0;
        case 0x1b6aa4u: goto label_1b6aa4;
        case 0x1b6aa8u: goto label_1b6aa8;
        case 0x1b6aacu: goto label_1b6aac;
        case 0x1b6ab0u: goto label_1b6ab0;
        case 0x1b6ab4u: goto label_1b6ab4;
        case 0x1b6ab8u: goto label_1b6ab8;
        case 0x1b6abcu: goto label_1b6abc;
        case 0x1b6ac0u: goto label_1b6ac0;
        case 0x1b6ac4u: goto label_1b6ac4;
        case 0x1b6ac8u: goto label_1b6ac8;
        case 0x1b6accu: goto label_1b6acc;
        case 0x1b6ad0u: goto label_1b6ad0;
        case 0x1b6ad4u: goto label_1b6ad4;
        case 0x1b6ad8u: goto label_1b6ad8;
        case 0x1b6adcu: goto label_1b6adc;
        case 0x1b6ae0u: goto label_1b6ae0;
        case 0x1b6ae4u: goto label_1b6ae4;
        case 0x1b6ae8u: goto label_1b6ae8;
        case 0x1b6aecu: goto label_1b6aec;
        case 0x1b6af0u: goto label_1b6af0;
        case 0x1b6af4u: goto label_1b6af4;
        case 0x1b6af8u: goto label_1b6af8;
        case 0x1b6afcu: goto label_1b6afc;
        case 0x1b6b00u: goto label_1b6b00;
        case 0x1b6b04u: goto label_1b6b04;
        case 0x1b6b08u: goto label_1b6b08;
        case 0x1b6b0cu: goto label_1b6b0c;
        case 0x1b6b10u: goto label_1b6b10;
        case 0x1b6b14u: goto label_1b6b14;
        case 0x1b6b18u: goto label_1b6b18;
        case 0x1b6b1cu: goto label_1b6b1c;
        case 0x1b6b20u: goto label_1b6b20;
        case 0x1b6b24u: goto label_1b6b24;
        case 0x1b6b28u: goto label_1b6b28;
        case 0x1b6b2cu: goto label_1b6b2c;
        case 0x1b6b30u: goto label_1b6b30;
        case 0x1b6b34u: goto label_1b6b34;
        case 0x1b6b38u: goto label_1b6b38;
        case 0x1b6b3cu: goto label_1b6b3c;
        case 0x1b6b40u: goto label_1b6b40;
        case 0x1b6b44u: goto label_1b6b44;
        case 0x1b6b48u: goto label_1b6b48;
        case 0x1b6b4cu: goto label_1b6b4c;
        case 0x1b6b50u: goto label_1b6b50;
        case 0x1b6b54u: goto label_1b6b54;
        case 0x1b6b58u: goto label_1b6b58;
        case 0x1b6b5cu: goto label_1b6b5c;
        case 0x1b6b60u: goto label_1b6b60;
        case 0x1b6b64u: goto label_1b6b64;
        case 0x1b6b68u: goto label_1b6b68;
        case 0x1b6b6cu: goto label_1b6b6c;
        case 0x1b6b70u: goto label_1b6b70;
        case 0x1b6b74u: goto label_1b6b74;
        case 0x1b6b78u: goto label_1b6b78;
        case 0x1b6b7cu: goto label_1b6b7c;
        case 0x1b6b80u: goto label_1b6b80;
        case 0x1b6b84u: goto label_1b6b84;
        case 0x1b6b88u: goto label_1b6b88;
        case 0x1b6b8cu: goto label_1b6b8c;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6b94u: goto label_1b6b94;
        case 0x1b6b98u: goto label_1b6b98;
        case 0x1b6b9cu: goto label_1b6b9c;
        default: break;
    }

    ctx->pc = 0x1b67b8u;

label_1b67b8:
    // 0x1b67b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1b67b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1b67bc:
    // 0x1b67bc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b67bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1b67c0:
    // 0x1b67c0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b67c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1b67c4:
    // 0x1b67c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b67c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b67c8:
    // 0x1b67c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b67c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1b67cc:
    // 0x1b67cc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b67ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1b67d0:
    // 0x1b67d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1b67d4:
    // 0x1b67d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b67d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b67d8:
    // 0x1b67d8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1b67d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1b67dc:
    // 0x1b67dc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1b67dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1b67e0:
    // 0x1b67e0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1b67e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1b67e4:
    // 0x1b67e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b67e8:
    // 0x1b67e8: 0xe7bb00f8  swc1        $f27, 0xF8($sp)
    ctx->pc = 0x1b67e8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1b67ec:
    // 0x1b67ec: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x1b67ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1b67f0:
    // 0x1b67f0: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x1b67f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1b67f4:
    // 0x1b67f4: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1b67f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1b67f8:
    // 0x1b67f8: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1b67f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1b67fc:
    // 0x1b67fc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1b67fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1b6800:
    // 0x1b6800: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b6800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1b6804:
    // 0x1b6804: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b6804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1b6808:
    // 0x1b6808: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b6808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b680c:
    // 0x1b680c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b680cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b6810:
    // 0x1b6810: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b6810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b6814:
    // 0x1b6814: 0x40f809  jalr        $v0
label_1b6818:
    if (ctx->pc == 0x1B6818u) {
        ctx->pc = 0x1B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6814u;
        // 0x1b6818: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B681Cu;
        goto label_1b681c;
    }
    ctx->pc = 0x1B6814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B681Cu);
        ctx->pc = 0x1B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6814u;
        // 0x1b6818: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6814u, 0x1B681Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B681Cu;
label_1b681c:
    // 0x1b681c: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_1b6820:
    if (ctx->pc == 0x1B6820u) {
        ctx->pc = 0x1B6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B681Cu;
        // 0x1b6820: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6824u;
        goto label_1b6824;
    }
    ctx->pc = 0x1B681Cu;
    {
        const bool branch_taken_0x1b681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B681Cu;
        // 0x1b6820: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b681c) {
            ctx->pc = 0x1B6B50u;
            goto label_1b6b50;
        }
    }
    ctx->pc = 0x1B6824u;
label_1b6824:
    // 0x1b6824: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1b6824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b6828:
    // 0x1b6828: 0xc06d85a  jal         func_1B6168
label_1b682c:
    if (ctx->pc == 0x1B682Cu) {
        ctx->pc = 0x1B682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6828u;
        // 0x1b682c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6830u;
        goto label_1b6830;
    }
    ctx->pc = 0x1B6828u;
    SET_GPR_U32(ctx, 31, 0x1B6830u);
    ctx->pc = 0x1B682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6828u;
    // 0x1b682c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6168u, 0x1B6828u, 0x1B6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6830u;
label_1b6830:
    // 0x1b6830: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1b6830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1b6834:
    // 0x1b6834: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b6834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1b6838:
    // 0x1b6838: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1b6838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_1b683c:
    // 0x1b683c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b6840:
    // 0x1b6840: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1b6844:
    // 0x1b6844: 0x2442d5f0  addiu       $v0, $v0, -0x2A10
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956528));
label_1b6848:
    // 0x1b6848: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b684c:
    // 0x1b684c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1b684cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6850:
    // 0x1b6850: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b6850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6854:
    // 0x1b6854: 0x4600be86  mov.s       $f26, $f23
    ctx->pc = 0x1b6854u;
    ctx->f[26] = FPU_MOV_S(ctx->f[23]);
label_1b6858:
    // 0x1b6858: 0x4600be06  mov.s       $f24, $f23
    ctx->pc = 0x1b6858u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
label_1b685c:
    // 0x1b685c: 0x7e640c50  sq          $a0, 0xC50($s3)
    ctx->pc = 0x1b685cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 3152), GPR_VEC(ctx, 4));
label_1b6860:
    // 0x1b6860: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b6860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b6864:
    // 0x1b6864: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_1b6868:
    // 0x1b6868: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1b686c:
    if (ctx->pc == 0x1B686Cu) {
        ctx->pc = 0x1B686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6868u;
        // 0x1b686c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6870u;
        goto label_1b6870;
    }
    ctx->pc = 0x1B6868u;
    {
        const bool branch_taken_0x1b6868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6868u;
        // 0x1b686c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6868) {
            ctx->pc = 0x1B6878u;
            goto label_1b6878;
        }
    }
    ctx->pc = 0x1B6870u;
label_1b6870:
    // 0x1b6870: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b6874:
    // 0x1b6874: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1b6874u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b6878:
    // 0x1b6878: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b687c:
    if (ctx->pc == 0x1B687Cu) {
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0x86640c60  lh          $a0, 0xC60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 3168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6880u;
        goto label_1b6880;
    }
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0x86640c60  lh          $a0, 0xC60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 3168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6898u;
            goto label_1b6898;
        }
    }
    ctx->pc = 0x1B6880u;
label_1b6880:
    // 0x1b6880: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1b6884:
    // 0x1b6884: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b6884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b6888:
    // 0x1b6888: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b6888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b688c:
    // 0x1b688c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1b688cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1b6890:
    // 0x1b6890: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b6890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b6894:
    // 0x1b6894: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1b6894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1b6898:
    // 0x1b6898: 0xc05b0e2  jal         func_16C388
label_1b689c:
    if (ctx->pc == 0x1B689Cu) {
        ctx->pc = 0x1B689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6898u;
        // 0x1b689c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68A0u;
        goto label_1b68a0;
    }
    ctx->pc = 0x1B6898u;
    SET_GPR_U32(ctx, 31, 0x1B68A0u);
    ctx->pc = 0x1B689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6898u;
    // 0x1b689c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x1B6898u, 0x1B68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68A0u;
label_1b68a0:
    // 0x1b68a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b68a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b68a4:
    // 0x1b68a4: 0xc059856  jal         func_166158
label_1b68a8:
    if (ctx->pc == 0x1B68A8u) {
        ctx->pc = 0x1B68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68A4u;
        // 0x1b68a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68ACu;
        goto label_1b68ac;
    }
    ctx->pc = 0x1B68A4u;
    SET_GPR_U32(ctx, 31, 0x1B68ACu);
    ctx->pc = 0x1B68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68A4u;
    // 0x1b68a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x1B68A4u, 0x1B68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68ACu;
label_1b68ac:
    // 0x1b68ac: 0x18400080  blez        $v0, . + 4 + (0x80 << 2)
label_1b68b0:
    if (ctx->pc == 0x1B68B0u) {
        ctx->pc = 0x1B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68ACu;
        // 0x1b68b0: 0xae620c40  sw          $v0, 0xC40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68B4u;
        goto label_1b68b4;
    }
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68ACu;
        // 0x1b68b0: 0xae620c40  sw          $v0, 0xC40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B6AB0u;
            goto label_1b6ab0;
        }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1b68b8:
    // 0x1b68b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b68b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b68bc:
    // 0x1b68bc: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1b68bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1b68c0:
    // 0x1b68c0: 0x26f2d5a0  addiu       $s2, $s7, -0x2A60
    ctx->pc = 0x1b68c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956448));
label_1b68c4:
    // 0x1b68c4: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1b68c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b68c8:
    // 0x1b68c8: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x1b68c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b68cc:
    // 0x1b68cc: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1b68d0:
    // 0x1b68d0: 0x26700340  addiu       $s0, $s3, 0x340
    ctx->pc = 0x1b68d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_1b68d4:
    // 0x1b68d4: 0x0  nop
    ctx->pc = 0x1b68d4u;
    // NOP
label_1b68d8:
    // 0x1b68d8: 0xc6560020  lwc1        $f22, 0x20($s2)
    ctx->pc = 0x1b68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b68dc:
    // 0x1b68dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b68e0:
    // 0x1b68e0: 0xc6540030  lwc1        $f20, 0x30($s2)
    ctx->pc = 0x1b68e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b68e4:
    // 0x1b68e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b68e8:
    // 0x1b68e8: 0xc6f5d5a0  lwc1        $f21, -0x2A60($s7)
    ctx->pc = 0x1b68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b68ec:
    // 0x1b68ec: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1b68ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1b68f0:
    // 0x1b68f0: 0xc068848  jal         func_1A2120
label_1b68f4:
    if (ctx->pc == 0x1B68F4u) {
        ctx->pc = 0x1B68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68F0u;
        // 0x1b68f4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68F8u;
        goto label_1b68f8;
    }
    ctx->pc = 0x1B68F0u;
    SET_GPR_U32(ctx, 31, 0x1B68F8u);
    ctx->pc = 0x1B68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68F0u;
    // 0x1b68f4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B68F0u, 0x1B68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68F8u;
label_1b68f8:
    // 0x1b68f8: 0x236001a  div         $zero, $s1, $s6
    ctx->pc = 0x1b68f8u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b68fc:
    // 0x1b68fc: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_1b6900:
    if (ctx->pc == 0x1B6900u) {
        ctx->pc = 0x1B6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68FCu;
        // 0x1b6900: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6904u;
        goto label_1b6904;
    }
    ctx->pc = 0x1B68FCu;
    {
        const bool branch_taken_0x1b68fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68fc) {
            ctx->pc = 0x1B6900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68FCu;
            // 0x1b6900: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6904u;
            goto label_1b6904;
        }
    }
    ctx->pc = 0x1B6904u;
label_1b6904:
    // 0x1b6904: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b6904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b6908:
    // 0x1b6908: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6908u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b690c:
    // 0x1b690c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1b6910:
    if (ctx->pc == 0x1B6910u) {
        ctx->pc = 0x1B6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B690Cu;
        // 0x1b6910: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6914u;
        goto label_1b6914;
    }
    ctx->pc = 0x1B690Cu;
    {
        const bool branch_taken_0x1b690c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B690Cu;
        // 0x1b6910: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b690c) {
            ctx->pc = 0x1B6944u;
            goto label_1b6944;
        }
    }
    ctx->pc = 0x1B6914u;
label_1b6914:
    // 0x1b6914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6918:
    // 0x1b6918: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
label_1b691c:
    // 0x1b691c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b691cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1b6920:
    // 0x1b6920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b6920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6924:
    // 0x1b6924: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1b6924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1b6928:
    // 0x1b6928: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1b692c:
    // 0x1b692c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1b6930:
    // 0x1b6930: 0xc6560024  lwc1        $f22, 0x24($s2)
    ctx->pc = 0x1b6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b6934:
    // 0x1b6934: 0x60f809  jalr        $v1
label_1b6938:
    if (ctx->pc == 0x1B6938u) {
        ctx->pc = 0x1B6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6934u;
        // 0x1b6938: 0xc6540040  lwc1        $f20, 0x40($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B693Cu;
        goto label_1b693c;
    }
    ctx->pc = 0x1B6934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B693Cu);
        ctx->pc = 0x1B6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6934u;
        // 0x1b6938: 0xc6540040  lwc1        $f20, 0x40($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6934u, 0x1B693Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B693Cu;
label_1b693c:
    // 0x1b693c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b6940:
    if (ctx->pc == 0x1B6940u) {
        ctx->pc = 0x1B6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B693Cu;
        // 0x1b6940: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6944u;
        goto label_1b6944;
    }
    ctx->pc = 0x1B693Cu;
    {
        const bool branch_taken_0x1b693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B693Cu;
        // 0x1b6940: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b693c) {
            ctx->pc = 0x1B6950u;
            goto label_1b6950;
        }
    }
    ctx->pc = 0x1B6944u;
label_1b6944:
    // 0x1b6944: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1b6948:
    if (ctx->pc == 0x1B6948u) {
        ctx->pc = 0x1B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6944u;
        // 0x1b6948: 0xc6550010  lwc1        $f21, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B694Cu;
        goto label_1b694c;
    }
    ctx->pc = 0x1B6944u;
    {
        const bool branch_taken_0x1b6944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6944) {
            ctx->pc = 0x1B6948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6944u;
            // 0x1b6948: 0xc6550010  lwc1        $f21, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B694Cu;
            goto label_1b694c;
        }
    }
    ctx->pc = 0x1B694Cu;
label_1b694c:
    // 0x1b694c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6950:
    // 0x1b6950: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
label_1b6954:
    // 0x1b6954: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b6954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1b6958:
    // 0x1b6958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b6958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b695c:
    // 0x1b695c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1b695cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1b6960:
    // 0x1b6960: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1b6960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1b6964:
    // 0x1b6964: 0x60f809  jalr        $v1
label_1b6968:
    if (ctx->pc == 0x1B6968u) {
        ctx->pc = 0x1B6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6964u;
        // 0x1b6968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B696Cu;
        goto label_1b696c;
    }
    ctx->pc = 0x1B6964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B696Cu);
        ctx->pc = 0x1B6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6964u;
        // 0x1b6968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6964u, 0x1B696Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B696Cu;
label_1b696c:
    // 0x1b696c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b696cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6970:
    // 0x1b6970: 0x0  nop
    ctx->pc = 0x1b6970u;
    // NOP
label_1b6974:
    // 0x1b6974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b6978:
    // 0x1b6978: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1b6978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b697c:
    // 0x1b697c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b6980:
    // 0x1b6980: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b6980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b6984:
    // 0x1b6984: 0x461a0840  add.s       $f1, $f1, $f26
    ctx->pc = 0x1b6984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
label_1b6988:
    // 0x1b6988: 0xe7b9000c  swc1        $f25, 0xC($sp)
    ctx->pc = 0x1b6988u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b698c:
    // 0x1b698c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b698cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1b6990:
    // 0x1b6990: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b6994:
    // 0x1b6994: 0x26660c50  addiu       $a2, $s3, 0xC50
    ctx->pc = 0x1b6994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 3152));
label_1b6998:
    // 0x1b6998: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b6998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b699c:
    // 0x1b699c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1b699cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1b69a0:
    // 0x1b69a0: 0xc136b18  jal         func_4DAC60
label_1b69a4:
    if (ctx->pc == 0x1B69A4u) {
        ctx->pc = 0x1B69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69A0u;
        // 0x1b69a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69A8u;
        goto label_1b69a8;
    }
    ctx->pc = 0x1B69A0u;
    SET_GPR_U32(ctx, 31, 0x1B69A8u);
    ctx->pc = 0x1B69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69A0u;
    // 0x1b69a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1B69A0u, 0x1B69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69A8u;
label_1b69a8:
    // 0x1b69a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b69ac:
    // 0x1b69ac: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x1b69acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1b69b0:
    // 0x1b69b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b69b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b69b4:
    // 0x1b69b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b69b8:
    if (ctx->pc == 0x1B69B8u) {
        ctx->pc = 0x1B69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69B4u;
        // 0x1b69b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69BCu;
        goto label_1b69bc;
    }
    ctx->pc = 0x1B69B4u;
    {
        const bool branch_taken_0x1b69b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69B4u;
        // 0x1b69b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69b4) {
            ctx->pc = 0x1B69C4u;
            goto label_1b69c4;
        }
    }
    ctx->pc = 0x1B69BCu;
label_1b69bc:
    // 0x1b69bc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b69c0:
    // 0x1b69c0: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1b69c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b69c4:
    // 0x1b69c4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1b69c8:
    if (ctx->pc == 0x1B69C8u) {
        ctx->pc = 0x1B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69C4u;
        // 0x1b69c8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69CCu;
        goto label_1b69cc;
    }
    ctx->pc = 0x1B69C4u;
    {
        const bool branch_taken_0x1b69c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69C4u;
        // 0x1b69c8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69c4) {
            ctx->pc = 0x1B6A3Cu;
            goto label_1b6a3c;
        }
    }
    ctx->pc = 0x1B69CCu;
label_1b69cc:
    // 0x1b69cc: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_1b69d0:
    if (ctx->pc == 0x1B69D0u) {
        ctx->pc = 0x1B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69CCu;
        // 0x1b69d0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69D4u;
        goto label_1b69d4;
    }
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69CCu;
        // 0x1b69d0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B6A2Cu;
            goto label_1b6a2c;
        }
    }
    ctx->pc = 0x1B69D4u;
label_1b69d4:
    // 0x1b69d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1b69d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b69d8:
    // 0x1b69d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b69dc:
    // 0x1b69dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b69dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b69e0:
    // 0x1b69e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b69e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b69e4:
    // 0x1b69e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1b69e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1b69e8:
    // 0x1b69e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b69ec:
    // 0x1b69ec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1b69ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b69f0:
    // 0x1b69f0: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x1b69f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_1b69f4:
    // 0x1b69f4: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x1b69f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
label_1b69f8:
    // 0x1b69f8: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1b69f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1b69fc:
    // 0x1b69fc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b69fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b6a00:
    // 0x1b6a00: 0xc068818  jal         func_1A2060
label_1b6a04:
    if (ctx->pc == 0x1B6A04u) {
        ctx->pc = 0x1B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A00u;
        // 0x1b6a04: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A08u;
        goto label_1b6a08;
    }
    ctx->pc = 0x1B6A00u;
    SET_GPR_U32(ctx, 31, 0x1B6A08u);
    ctx->pc = 0x1B6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A00u;
    // 0x1b6a04: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B6A00u, 0x1B6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A08u;
label_1b6a08:
    // 0x1b6a08: 0x26640140  addiu       $a0, $s3, 0x140
    ctx->pc = 0x1b6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
label_1b6a0c:
    // 0x1b6a0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b6a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a10:
    // 0x1b6a10: 0xc068818  jal         func_1A2060
label_1b6a14:
    if (ctx->pc == 0x1B6A14u) {
        ctx->pc = 0x1B6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A10u;
        // 0x1b6a14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A18u;
        goto label_1b6a18;
    }
    ctx->pc = 0x1B6A10u;
    SET_GPR_U32(ctx, 31, 0x1B6A18u);
    ctx->pc = 0x1B6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A10u;
    // 0x1b6a14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B6A10u, 0x1B6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A18u;
label_1b6a18:
    // 0x1b6a18: 0x26640240  addiu       $a0, $s3, 0x240
    ctx->pc = 0x1b6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_1b6a1c:
    // 0x1b6a1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b6a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a20:
    // 0x1b6a20: 0xc068818  jal         func_1A2060
label_1b6a24:
    if (ctx->pc == 0x1B6A24u) {
        ctx->pc = 0x1B6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A20u;
        // 0x1b6a24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A28u;
        goto label_1b6a28;
    }
    ctx->pc = 0x1B6A20u;
    SET_GPR_U32(ctx, 31, 0x1B6A28u);
    ctx->pc = 0x1B6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A20u;
    // 0x1b6a24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B6A20u, 0x1B6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A28u;
label_1b6a28:
    // 0x1b6a28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1b6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6a2c:
    // 0x1b6a2c: 0xc7c1d600  lwc1        $f1, -0x2A00($fp)
    ctx->pc = 0x1b6a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294956544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6a30:
    // 0x1b6a30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b6a34:
    // 0x1b6a34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b6a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b6a38:
    // 0x1b6a38: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1b6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6a3c:
    // 0x1b6a3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a40:
    // 0x1b6a40: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6a44:
    // 0x1b6a44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6a48:
    // 0x1b6a48: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x1b6a48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_1b6a4c:
    // 0x1b6a4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6a50:
    // 0x1b6a50: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1b6a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_1b6a54:
    // 0x1b6a54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b6a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b6a58:
    // 0x1b6a58: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b6a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b6a5c:
    // 0x1b6a5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b6a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b6a60:
    // 0x1b6a60: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1b6a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1b6a64:
    // 0x1b6a64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b6a68:
    // 0x1b6a68: 0x40f809  jalr        $v0
label_1b6a6c:
    if (ctx->pc == 0x1B6A6Cu) {
        ctx->pc = 0x1B6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A68u;
        // 0x1b6a6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A70u;
        goto label_1b6a70;
    }
    ctx->pc = 0x1B6A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6A70u);
        ctx->pc = 0x1B6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A68u;
        // 0x1b6a6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A68u, 0x1B6A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6A70u;
label_1b6a70:
    // 0x1b6a70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b6a74:
    // 0x1b6a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a78:
    // 0x1b6a78: 0xc46cd604  lwc1        $f12, -0x29FC($v1)
    ctx->pc = 0x1b6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6a7c:
    // 0x1b6a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6a80:
    // 0x1b6a80: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x1b6a80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_1b6a84:
    // 0x1b6a84: 0xc068848  jal         func_1A2120
label_1b6a88:
    if (ctx->pc == 0x1B6A88u) {
        ctx->pc = 0x1B6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A84u;
        // 0x1b6a88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A8Cu;
        goto label_1b6a8c;
    }
    ctx->pc = 0x1B6A84u;
    SET_GPR_U32(ctx, 31, 0x1B6A8Cu);
    ctx->pc = 0x1B6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A84u;
    // 0x1b6a88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B6A84u, 0x1B6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A8Cu;
label_1b6a8c:
    // 0x1b6a8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6a90:
    // 0x1b6a90: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b6a94:
    // 0x1b6a94: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b6a98:
    // 0x1b6a98: 0x60f809  jalr        $v1
label_1b6a9c:
    if (ctx->pc == 0x1B6A9Cu) {
        ctx->pc = 0x1B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A98u;
        // 0x1b6a9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AA0u;
        goto label_1b6aa0;
    }
    ctx->pc = 0x1B6A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B6AA0u);
        ctx->pc = 0x1B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A98u;
        // 0x1b6a9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A98u, 0x1B6AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6AA0u;
label_1b6aa0:
    // 0x1b6aa0: 0x8e620c40  lw          $v0, 0xC40($s3)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3136)));
label_1b6aa4:
    // 0x1b6aa4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b6aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6aa8:
    // 0x1b6aa8: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
label_1b6aac:
    if (ctx->pc == 0x1B6AACu) {
        ctx->pc = 0x1B6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AA8u;
        // 0x1b6aac: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AB0u;
        goto label_1b6ab0;
    }
    ctx->pc = 0x1B6AA8u;
    {
        const bool branch_taken_0x1b6aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AA8u;
        // 0x1b6aac: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aa8) {
            ctx->pc = 0x1B68D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b68d8;
        }
    }
    ctx->pc = 0x1B6AB0u;
label_1b6ab0:
    // 0x1b6ab0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b6ab4:
    // 0x1b6ab4: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x1b6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1b6ab8:
    // 0x1b6ab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6abc:
    // 0x1b6abc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b6ac0:
    if (ctx->pc == 0x1B6AC0u) {
        ctx->pc = 0x1B6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ABCu;
        // 0x1b6ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AC4u;
        goto label_1b6ac4;
    }
    ctx->pc = 0x1B6ABCu;
    {
        const bool branch_taken_0x1b6abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ABCu;
        // 0x1b6ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6abc) {
            ctx->pc = 0x1B6ACCu;
            goto label_1b6acc;
        }
    }
    ctx->pc = 0x1B6AC4u;
label_1b6ac4:
    // 0x1b6ac4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1b6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b6ac8:
    // 0x1b6ac8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1b6ac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b6acc:
    // 0x1b6acc: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_1b6ad0:
    if (ctx->pc == 0x1B6AD0u) {
        ctx->pc = 0x1B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ACCu;
        // 0x1b6ad0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AD4u;
        goto label_1b6ad4;
    }
    ctx->pc = 0x1B6ACCu;
    {
        const bool branch_taken_0x1b6acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ACCu;
        // 0x1b6ad0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6acc) {
            ctx->pc = 0x1B6B4Cu;
            goto label_1b6b4c;
        }
    }
    ctx->pc = 0x1B6AD4u;
label_1b6ad4:
    // 0x1b6ad4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1b6ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1b6ad8:
    // 0x1b6ad8: 0xc620d604  lwc1        $f0, -0x29FC($s1)
    ctx->pc = 0x1b6ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6adc:
    // 0x1b6adc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b6adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ae0:
    // 0x1b6ae0: 0xc60cd608  lwc1        $f12, -0x29F8($s0)
    ctx->pc = 0x1b6ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6ae4:
    // 0x1b6ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6ae8:
    // 0x1b6ae8: 0x26720140  addiu       $s2, $s3, 0x140
    ctx->pc = 0x1b6ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
label_1b6aec:
    // 0x1b6aec: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b6aecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b6af0:
    // 0x1b6af0: 0x26730240  addiu       $s3, $s3, 0x240
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_1b6af4:
    // 0x1b6af4: 0xc068848  jal         func_1A2120
label_1b6af8:
    if (ctx->pc == 0x1B6AF8u) {
        ctx->pc = 0x1B6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AF4u;
        // 0x1b6af8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AFCu;
        goto label_1b6afc;
    }
    ctx->pc = 0x1B6AF4u;
    SET_GPR_U32(ctx, 31, 0x1B6AFCu);
    ctx->pc = 0x1B6AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6AF4u;
    // 0x1b6af8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B6AF4u, 0x1B6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AFCu;
label_1b6afc:
    // 0x1b6afc: 0xc620d604  lwc1        $f0, -0x29FC($s1)
    ctx->pc = 0x1b6afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6b00:
    // 0x1b6b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b04:
    // 0x1b6b04: 0xc60cd608  lwc1        $f12, -0x29F8($s0)
    ctx->pc = 0x1b6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6b08:
    // 0x1b6b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6b0c:
    // 0x1b6b0c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b6b0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b6b10:
    // 0x1b6b10: 0xc068848  jal         func_1A2120
label_1b6b14:
    if (ctx->pc == 0x1B6B14u) {
        ctx->pc = 0x1B6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B10u;
        // 0x1b6b14: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B18u;
        goto label_1b6b18;
    }
    ctx->pc = 0x1B6B10u;
    SET_GPR_U32(ctx, 31, 0x1B6B18u);
    ctx->pc = 0x1B6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B10u;
    // 0x1b6b14: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B6B10u, 0x1B6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B18u;
label_1b6b18:
    // 0x1b6b18: 0xc620d604  lwc1        $f0, -0x29FC($s1)
    ctx->pc = 0x1b6b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6b1c:
    // 0x1b6b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6b20:
    // 0x1b6b20: 0xc60cd608  lwc1        $f12, -0x29F8($s0)
    ctx->pc = 0x1b6b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6b24:
    // 0x1b6b24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b6b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b28:
    // 0x1b6b28: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b6b28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b6b2c:
    // 0x1b6b2c: 0xc068848  jal         func_1A2120
label_1b6b30:
    if (ctx->pc == 0x1B6B30u) {
        ctx->pc = 0x1B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B2Cu;
        // 0x1b6b30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B34u;
        goto label_1b6b34;
    }
    ctx->pc = 0x1B6B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B34u);
    ctx->pc = 0x1B6B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B2Cu;
    // 0x1b6b30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B6B2Cu, 0x1B6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B34u;
label_1b6b34:
    // 0x1b6b34: 0xc06886e  jal         func_1A21B8
label_1b6b38:
    if (ctx->pc == 0x1B6B38u) {
        ctx->pc = 0x1B6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B34u;
        // 0x1b6b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B3Cu;
        goto label_1b6b3c;
    }
    ctx->pc = 0x1B6B34u;
    SET_GPR_U32(ctx, 31, 0x1B6B3Cu);
    ctx->pc = 0x1B6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B34u;
    // 0x1b6b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B6B34u, 0x1B6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B3Cu;
label_1b6b3c:
    // 0x1b6b3c: 0xc06886e  jal         func_1A21B8
label_1b6b40:
    if (ctx->pc == 0x1B6B40u) {
        ctx->pc = 0x1B6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B3Cu;
        // 0x1b6b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B44u;
        goto label_1b6b44;
    }
    ctx->pc = 0x1B6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B44u);
    ctx->pc = 0x1B6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B3Cu;
    // 0x1b6b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B6B3Cu, 0x1B6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B44u;
label_1b6b44:
    // 0x1b6b44: 0xc06886e  jal         func_1A21B8
label_1b6b48:
    if (ctx->pc == 0x1B6B48u) {
        ctx->pc = 0x1B6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B44u;
        // 0x1b6b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B4Cu;
        goto label_1b6b4c;
    }
    ctx->pc = 0x1B6B44u;
    SET_GPR_U32(ctx, 31, 0x1B6B4Cu);
    ctx->pc = 0x1B6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B44u;
    // 0x1b6b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B6B44u, 0x1B6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B4Cu;
label_1b6b4c:
    // 0x1b6b4c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b6b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b6b50:
    // 0x1b6b50: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b6b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b6b54:
    // 0x1b6b54: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b6b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b6b58:
    // 0x1b6b58: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b6b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b6b5c:
    // 0x1b6b5c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b6b60:
    // 0x1b6b60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b6b60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b6b64:
    // 0x1b6b64: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1b6b64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b6b68:
    // 0x1b6b68: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1b6b68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6b6c:
    // 0x1b6b6c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1b6b6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6b70:
    // 0x1b6b70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6b74:
    // 0x1b6b74: 0xc7bb00f8  lwc1        $f27, 0xF8($sp)
    ctx->pc = 0x1b6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1b6b78:
    // 0x1b6b78: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x1b6b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1b6b7c:
    // 0x1b6b7c: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x1b6b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1b6b80:
    // 0x1b6b80: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x1b6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1b6b84:
    // 0x1b6b84: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x1b6b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b6b88:
    // 0x1b6b88: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1b6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b6b8c:
    // 0x1b6b8c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b6b90:
    // 0x1b6b90: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b6b94:
    // 0x1b6b94: 0x3e00008  jr          $ra
label_1b6b98:
    if (ctx->pc == 0x1B6B98u) {
        ctx->pc = 0x1B6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B94u;
        // 0x1b6b98: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B9Cu;
        goto label_1b6b9c;
    }
    ctx->pc = 0x1B6B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B94u;
        // 0x1b6b98: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6B9Cu;
label_1b6b9c:
    // 0x1b6b9c: 0x0  nop
    ctx->pc = 0x1b6b9cu;
    // NOP
    ctx->pc = 0x1b6ba0u;
}
