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

// Function: sub_00489848
// Address: 0x489848 - 0x489ce0
void sub_00489848_0x489848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489848_0x489848");
#endif

    switch (ctx->pc) {
        case 0x489848u: goto label_489848;
        case 0x48984cu: goto label_48984c;
        case 0x489850u: goto label_489850;
        case 0x489854u: goto label_489854;
        case 0x489858u: goto label_489858;
        case 0x48985cu: goto label_48985c;
        case 0x489860u: goto label_489860;
        case 0x489864u: goto label_489864;
        case 0x489868u: goto label_489868;
        case 0x48986cu: goto label_48986c;
        case 0x489870u: goto label_489870;
        case 0x489874u: goto label_489874;
        case 0x489878u: goto label_489878;
        case 0x48987cu: goto label_48987c;
        case 0x489880u: goto label_489880;
        case 0x489884u: goto label_489884;
        case 0x489888u: goto label_489888;
        case 0x48988cu: goto label_48988c;
        case 0x489890u: goto label_489890;
        case 0x489894u: goto label_489894;
        case 0x489898u: goto label_489898;
        case 0x48989cu: goto label_48989c;
        case 0x4898a0u: goto label_4898a0;
        case 0x4898a4u: goto label_4898a4;
        case 0x4898a8u: goto label_4898a8;
        case 0x4898acu: goto label_4898ac;
        case 0x4898b0u: goto label_4898b0;
        case 0x4898b4u: goto label_4898b4;
        case 0x4898b8u: goto label_4898b8;
        case 0x4898bcu: goto label_4898bc;
        case 0x4898c0u: goto label_4898c0;
        case 0x4898c4u: goto label_4898c4;
        case 0x4898c8u: goto label_4898c8;
        case 0x4898ccu: goto label_4898cc;
        case 0x4898d0u: goto label_4898d0;
        case 0x4898d4u: goto label_4898d4;
        case 0x4898d8u: goto label_4898d8;
        case 0x4898dcu: goto label_4898dc;
        case 0x4898e0u: goto label_4898e0;
        case 0x4898e4u: goto label_4898e4;
        case 0x4898e8u: goto label_4898e8;
        case 0x4898ecu: goto label_4898ec;
        case 0x4898f0u: goto label_4898f0;
        case 0x4898f4u: goto label_4898f4;
        case 0x4898f8u: goto label_4898f8;
        case 0x4898fcu: goto label_4898fc;
        case 0x489900u: goto label_489900;
        case 0x489904u: goto label_489904;
        case 0x489908u: goto label_489908;
        case 0x48990cu: goto label_48990c;
        case 0x489910u: goto label_489910;
        case 0x489914u: goto label_489914;
        case 0x489918u: goto label_489918;
        case 0x48991cu: goto label_48991c;
        case 0x489920u: goto label_489920;
        case 0x489924u: goto label_489924;
        case 0x489928u: goto label_489928;
        case 0x48992cu: goto label_48992c;
        case 0x489930u: goto label_489930;
        case 0x489934u: goto label_489934;
        case 0x489938u: goto label_489938;
        case 0x48993cu: goto label_48993c;
        case 0x489940u: goto label_489940;
        case 0x489944u: goto label_489944;
        case 0x489948u: goto label_489948;
        case 0x48994cu: goto label_48994c;
        case 0x489950u: goto label_489950;
        case 0x489954u: goto label_489954;
        case 0x489958u: goto label_489958;
        case 0x48995cu: goto label_48995c;
        case 0x489960u: goto label_489960;
        case 0x489964u: goto label_489964;
        case 0x489968u: goto label_489968;
        case 0x48996cu: goto label_48996c;
        case 0x489970u: goto label_489970;
        case 0x489974u: goto label_489974;
        case 0x489978u: goto label_489978;
        case 0x48997cu: goto label_48997c;
        case 0x489980u: goto label_489980;
        case 0x489984u: goto label_489984;
        case 0x489988u: goto label_489988;
        case 0x48998cu: goto label_48998c;
        case 0x489990u: goto label_489990;
        case 0x489994u: goto label_489994;
        case 0x489998u: goto label_489998;
        case 0x48999cu: goto label_48999c;
        case 0x4899a0u: goto label_4899a0;
        case 0x4899a4u: goto label_4899a4;
        case 0x4899a8u: goto label_4899a8;
        case 0x4899acu: goto label_4899ac;
        case 0x4899b0u: goto label_4899b0;
        case 0x4899b4u: goto label_4899b4;
        case 0x4899b8u: goto label_4899b8;
        case 0x4899bcu: goto label_4899bc;
        case 0x4899c0u: goto label_4899c0;
        case 0x4899c4u: goto label_4899c4;
        case 0x4899c8u: goto label_4899c8;
        case 0x4899ccu: goto label_4899cc;
        case 0x4899d0u: goto label_4899d0;
        case 0x4899d4u: goto label_4899d4;
        case 0x4899d8u: goto label_4899d8;
        case 0x4899dcu: goto label_4899dc;
        case 0x4899e0u: goto label_4899e0;
        case 0x4899e4u: goto label_4899e4;
        case 0x4899e8u: goto label_4899e8;
        case 0x4899ecu: goto label_4899ec;
        case 0x4899f0u: goto label_4899f0;
        case 0x4899f4u: goto label_4899f4;
        case 0x4899f8u: goto label_4899f8;
        case 0x4899fcu: goto label_4899fc;
        case 0x489a00u: goto label_489a00;
        case 0x489a04u: goto label_489a04;
        case 0x489a08u: goto label_489a08;
        case 0x489a0cu: goto label_489a0c;
        case 0x489a10u: goto label_489a10;
        case 0x489a14u: goto label_489a14;
        case 0x489a18u: goto label_489a18;
        case 0x489a1cu: goto label_489a1c;
        case 0x489a20u: goto label_489a20;
        case 0x489a24u: goto label_489a24;
        case 0x489a28u: goto label_489a28;
        case 0x489a2cu: goto label_489a2c;
        case 0x489a30u: goto label_489a30;
        case 0x489a34u: goto label_489a34;
        case 0x489a38u: goto label_489a38;
        case 0x489a3cu: goto label_489a3c;
        case 0x489a40u: goto label_489a40;
        case 0x489a44u: goto label_489a44;
        case 0x489a48u: goto label_489a48;
        case 0x489a4cu: goto label_489a4c;
        case 0x489a50u: goto label_489a50;
        case 0x489a54u: goto label_489a54;
        case 0x489a58u: goto label_489a58;
        case 0x489a5cu: goto label_489a5c;
        case 0x489a60u: goto label_489a60;
        case 0x489a64u: goto label_489a64;
        case 0x489a68u: goto label_489a68;
        case 0x489a6cu: goto label_489a6c;
        case 0x489a70u: goto label_489a70;
        case 0x489a74u: goto label_489a74;
        case 0x489a78u: goto label_489a78;
        case 0x489a7cu: goto label_489a7c;
        case 0x489a80u: goto label_489a80;
        case 0x489a84u: goto label_489a84;
        case 0x489a88u: goto label_489a88;
        case 0x489a8cu: goto label_489a8c;
        case 0x489a90u: goto label_489a90;
        case 0x489a94u: goto label_489a94;
        case 0x489a98u: goto label_489a98;
        case 0x489a9cu: goto label_489a9c;
        case 0x489aa0u: goto label_489aa0;
        case 0x489aa4u: goto label_489aa4;
        case 0x489aa8u: goto label_489aa8;
        case 0x489aacu: goto label_489aac;
        case 0x489ab0u: goto label_489ab0;
        case 0x489ab4u: goto label_489ab4;
        case 0x489ab8u: goto label_489ab8;
        case 0x489abcu: goto label_489abc;
        case 0x489ac0u: goto label_489ac0;
        case 0x489ac4u: goto label_489ac4;
        case 0x489ac8u: goto label_489ac8;
        case 0x489accu: goto label_489acc;
        case 0x489ad0u: goto label_489ad0;
        case 0x489ad4u: goto label_489ad4;
        case 0x489ad8u: goto label_489ad8;
        case 0x489adcu: goto label_489adc;
        case 0x489ae0u: goto label_489ae0;
        case 0x489ae4u: goto label_489ae4;
        case 0x489ae8u: goto label_489ae8;
        case 0x489aecu: goto label_489aec;
        case 0x489af0u: goto label_489af0;
        case 0x489af4u: goto label_489af4;
        case 0x489af8u: goto label_489af8;
        case 0x489afcu: goto label_489afc;
        case 0x489b00u: goto label_489b00;
        case 0x489b04u: goto label_489b04;
        case 0x489b08u: goto label_489b08;
        case 0x489b0cu: goto label_489b0c;
        case 0x489b10u: goto label_489b10;
        case 0x489b14u: goto label_489b14;
        case 0x489b18u: goto label_489b18;
        case 0x489b1cu: goto label_489b1c;
        case 0x489b20u: goto label_489b20;
        case 0x489b24u: goto label_489b24;
        case 0x489b28u: goto label_489b28;
        case 0x489b2cu: goto label_489b2c;
        case 0x489b30u: goto label_489b30;
        case 0x489b34u: goto label_489b34;
        case 0x489b38u: goto label_489b38;
        case 0x489b3cu: goto label_489b3c;
        case 0x489b40u: goto label_489b40;
        case 0x489b44u: goto label_489b44;
        case 0x489b48u: goto label_489b48;
        case 0x489b4cu: goto label_489b4c;
        case 0x489b50u: goto label_489b50;
        case 0x489b54u: goto label_489b54;
        case 0x489b58u: goto label_489b58;
        case 0x489b5cu: goto label_489b5c;
        case 0x489b60u: goto label_489b60;
        case 0x489b64u: goto label_489b64;
        case 0x489b68u: goto label_489b68;
        case 0x489b6cu: goto label_489b6c;
        case 0x489b70u: goto label_489b70;
        case 0x489b74u: goto label_489b74;
        case 0x489b78u: goto label_489b78;
        case 0x489b7cu: goto label_489b7c;
        case 0x489b80u: goto label_489b80;
        case 0x489b84u: goto label_489b84;
        case 0x489b88u: goto label_489b88;
        case 0x489b8cu: goto label_489b8c;
        case 0x489b90u: goto label_489b90;
        case 0x489b94u: goto label_489b94;
        case 0x489b98u: goto label_489b98;
        case 0x489b9cu: goto label_489b9c;
        case 0x489ba0u: goto label_489ba0;
        case 0x489ba4u: goto label_489ba4;
        case 0x489ba8u: goto label_489ba8;
        case 0x489bacu: goto label_489bac;
        case 0x489bb0u: goto label_489bb0;
        case 0x489bb4u: goto label_489bb4;
        case 0x489bb8u: goto label_489bb8;
        case 0x489bbcu: goto label_489bbc;
        case 0x489bc0u: goto label_489bc0;
        case 0x489bc4u: goto label_489bc4;
        case 0x489bc8u: goto label_489bc8;
        case 0x489bccu: goto label_489bcc;
        case 0x489bd0u: goto label_489bd0;
        case 0x489bd4u: goto label_489bd4;
        case 0x489bd8u: goto label_489bd8;
        case 0x489bdcu: goto label_489bdc;
        case 0x489be0u: goto label_489be0;
        case 0x489be4u: goto label_489be4;
        case 0x489be8u: goto label_489be8;
        case 0x489becu: goto label_489bec;
        case 0x489bf0u: goto label_489bf0;
        case 0x489bf4u: goto label_489bf4;
        case 0x489bf8u: goto label_489bf8;
        case 0x489bfcu: goto label_489bfc;
        case 0x489c00u: goto label_489c00;
        case 0x489c04u: goto label_489c04;
        case 0x489c08u: goto label_489c08;
        case 0x489c0cu: goto label_489c0c;
        case 0x489c10u: goto label_489c10;
        case 0x489c14u: goto label_489c14;
        case 0x489c18u: goto label_489c18;
        case 0x489c1cu: goto label_489c1c;
        case 0x489c20u: goto label_489c20;
        case 0x489c24u: goto label_489c24;
        case 0x489c28u: goto label_489c28;
        case 0x489c2cu: goto label_489c2c;
        case 0x489c30u: goto label_489c30;
        case 0x489c34u: goto label_489c34;
        case 0x489c38u: goto label_489c38;
        case 0x489c3cu: goto label_489c3c;
        case 0x489c40u: goto label_489c40;
        case 0x489c44u: goto label_489c44;
        case 0x489c48u: goto label_489c48;
        case 0x489c4cu: goto label_489c4c;
        case 0x489c50u: goto label_489c50;
        case 0x489c54u: goto label_489c54;
        case 0x489c58u: goto label_489c58;
        case 0x489c5cu: goto label_489c5c;
        case 0x489c60u: goto label_489c60;
        case 0x489c64u: goto label_489c64;
        case 0x489c68u: goto label_489c68;
        case 0x489c6cu: goto label_489c6c;
        case 0x489c70u: goto label_489c70;
        case 0x489c74u: goto label_489c74;
        case 0x489c78u: goto label_489c78;
        case 0x489c7cu: goto label_489c7c;
        case 0x489c80u: goto label_489c80;
        case 0x489c84u: goto label_489c84;
        case 0x489c88u: goto label_489c88;
        case 0x489c8cu: goto label_489c8c;
        case 0x489c90u: goto label_489c90;
        case 0x489c94u: goto label_489c94;
        case 0x489c98u: goto label_489c98;
        case 0x489c9cu: goto label_489c9c;
        case 0x489ca0u: goto label_489ca0;
        case 0x489ca4u: goto label_489ca4;
        case 0x489ca8u: goto label_489ca8;
        case 0x489cacu: goto label_489cac;
        case 0x489cb0u: goto label_489cb0;
        case 0x489cb4u: goto label_489cb4;
        case 0x489cb8u: goto label_489cb8;
        case 0x489cbcu: goto label_489cbc;
        case 0x489cc0u: goto label_489cc0;
        case 0x489cc4u: goto label_489cc4;
        case 0x489cc8u: goto label_489cc8;
        case 0x489cccu: goto label_489ccc;
        case 0x489cd0u: goto label_489cd0;
        case 0x489cd4u: goto label_489cd4;
        case 0x489cd8u: goto label_489cd8;
        case 0x489cdcu: goto label_489cdc;
        default: break;
    }

    ctx->pc = 0x489848u;

label_489848:
    // 0x489848: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x489848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_48984c:
    // 0x48984c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x48984cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_489850:
    // 0x489850: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x489850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_489854:
    // 0x489854: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x489854u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_489858:
    // 0x489858: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x489858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_48985c:
    // 0x48985c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x48985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_489860:
    // 0x489860: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x489860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_489864:
    // 0x489864: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x489864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_489868:
    // 0x489868: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x489868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_48986c:
    // 0x48986c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x48986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_489870:
    // 0x489870: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x489870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_489874:
    // 0x489874: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x489874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_489878:
    // 0x489878: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x489878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_48987c:
    // 0x48987c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x48987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_489880:
    // 0x489880: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x489880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_489884:
    // 0x489884: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x489884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_489888:
    // 0x489888: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x489888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_48988c:
    // 0x48988c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x48988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_489890:
    // 0x489890: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x489890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_489894:
    // 0x489894: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x489894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_489898:
    // 0x489898: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x489898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_48989c:
    // 0x48989c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x48989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4898a0:
    // 0x4898a0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x4898a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4898a4:
    // 0x4898a4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_4898a8:
    if (ctx->pc == 0x4898A8u) {
        ctx->pc = 0x4898A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898A4u;
        // 0x4898a8: 0x8c970008  lw          $s7, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898ACu;
        goto label_4898ac;
    }
    ctx->pc = 0x4898A4u;
    {
        const bool branch_taken_0x4898a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4898A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898A4u;
        // 0x4898a8: 0x8c970008  lw          $s7, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898a4) {
            ctx->pc = 0x4898DCu;
            goto label_4898dc;
        }
    }
    ctx->pc = 0x4898ACu;
label_4898ac:
    // 0x4898ac: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4898acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_4898b0:
    // 0x4898b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4898b4:
    if (ctx->pc == 0x4898B4u) {
        ctx->pc = 0x4898B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898B0u;
        // 0x4898b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898B8u;
        goto label_4898b8;
    }
    ctx->pc = 0x4898B0u;
    {
        const bool branch_taken_0x4898b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4898B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898B0u;
        // 0x4898b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898b0) {
            ctx->pc = 0x4898C8u;
            goto label_4898c8;
        }
    }
    ctx->pc = 0x4898B8u;
label_4898b8:
    // 0x4898b8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4898bc:
    if (ctx->pc == 0x4898BCu) {
        ctx->pc = 0x4898BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898B8u;
        // 0x4898bc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898C0u;
        goto label_4898c0;
    }
    ctx->pc = 0x4898B8u;
    {
        const bool branch_taken_0x4898b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4898BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898B8u;
        // 0x4898bc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898b8) {
            ctx->pc = 0x4898DCu;
            goto label_4898dc;
        }
    }
    ctx->pc = 0x4898C0u;
label_4898c0:
    // 0x4898c0: 0x100000fc  b           . + 4 + (0xFC << 2)
label_4898c4:
    if (ctx->pc == 0x4898C4u) {
        ctx->pc = 0x4898C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898C0u;
        // 0x4898c4: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898C8u;
        goto label_4898c8;
    }
    ctx->pc = 0x4898C0u;
    {
        const bool branch_taken_0x4898c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4898C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898C0u;
        // 0x4898c4: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898c0) {
            ctx->pc = 0x489CB4u;
            goto label_489cb4;
        }
    }
    ctx->pc = 0x4898C8u;
label_4898c8:
    // 0x4898c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4898c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4898cc:
    // 0x4898cc: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
label_4898d0:
    if (ctx->pc == 0x4898D0u) {
        ctx->pc = 0x4898D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898CCu;
        // 0x4898d0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898D4u;
        goto label_4898d4;
    }
    ctx->pc = 0x4898CCu;
    {
        const bool branch_taken_0x4898cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4898D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898CCu;
        // 0x4898d0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898cc) {
            ctx->pc = 0x489ACCu;
            goto label_489acc;
        }
    }
    ctx->pc = 0x4898D4u;
label_4898d4:
    // 0x4898d4: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_4898d8:
    if (ctx->pc == 0x4898D8u) {
        ctx->pc = 0x4898D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898D4u;
        // 0x4898d8: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898DCu;
        goto label_4898dc;
    }
    ctx->pc = 0x4898D4u;
    {
        const bool branch_taken_0x4898d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4898D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898D4u;
        // 0x4898d8: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898d4) {
            ctx->pc = 0x489CB4u;
            goto label_489cb4;
        }
    }
    ctx->pc = 0x4898DCu;
label_4898dc:
    // 0x4898dc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4898dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4898e0:
    // 0x4898e0: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_4898e4:
    if (ctx->pc == 0x4898E4u) {
        ctx->pc = 0x4898E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898E0u;
        // 0x4898e4: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4898E8u;
        goto label_4898e8;
    }
    ctx->pc = 0x4898E0u;
    {
        const bool branch_taken_0x4898e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4898E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4898E0u;
        // 0x4898e4: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4898e0) {
            ctx->pc = 0x489CACu;
            goto label_489cac;
        }
    }
    ctx->pc = 0x4898E8u;
label_4898e8:
    // 0x4898e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4898e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4898ec:
    // 0x4898ec: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x4898ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_4898f0:
    // 0x4898f0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4898f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4898f4:
    // 0x4898f4: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x4898f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4898f8:
    // 0x4898f8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4898f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4898fc:
    // 0x4898fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4898fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_489900:
    // 0x489900: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x489900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489904:
    // 0x489904: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x489904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_489908:
    // 0x489908: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_48990c:
    if (ctx->pc == 0x48990Cu) {
        ctx->pc = 0x48990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489908u;
        // 0x48990c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489910u;
        goto label_489910;
    }
    ctx->pc = 0x489908u;
    {
        const bool branch_taken_0x489908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489908u;
        // 0x48990c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489908) {
            ctx->pc = 0x489AB4u;
            goto label_489ab4;
        }
    }
    ctx->pc = 0x489910u;
label_489910:
    // 0x489910: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x489910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_489914:
    // 0x489914: 0x2449ee08  addiu       $t1, $v0, -0x11F8
    ctx->pc = 0x489914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
label_489918:
    // 0x489918: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x489918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_48991c:
    // 0x48991c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x48991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_489920:
    // 0x489920: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x489920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_489924:
    // 0x489924: 0x8f848668  lw          $a0, -0x7998($gp)
    ctx->pc = 0x489924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_489928:
    // 0x489928: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x489928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
label_48992c:
    // 0x48992c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_489930:
    // 0x489930: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x489930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_489934:
    // 0x489934: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x489934u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_489938:
    // 0x489938: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x489938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_48993c:
    // 0x48993c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48993cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_489940:
    // 0x489940: 0x8ca84000  lw          $t0, 0x4000($a1)
    ctx->pc = 0x489940u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
label_489944:
    // 0x489944: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x489944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_489948:
    // 0x489948: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x489948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48994c:
    // 0x48994c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x48994cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_489950:
    // 0x489950: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x489950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_489954:
    // 0x489954: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x489954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_489958:
    // 0x489958: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x489958u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_48995c:
    // 0x48995c: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x48995cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_489960:
    // 0x489960: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x489960u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_489964:
    // 0x489964: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x489964u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_489968:
    // 0x489968: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x489968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_48996c:
    // 0x48996c: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x48996cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_489970:
    // 0x489970: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x489970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_489974:
    // 0x489974: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x489974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_489978:
    // 0x489978: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x489978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_48997c:
    // 0x48997c: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x48997cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_489980:
    // 0x489980: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x489980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_489984:
    // 0x489984: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x489984u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_489988:
    // 0x489988: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x489988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_48998c:
    // 0x48998c: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x48998cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_489990:
    // 0x489990: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x489990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_489994:
    // 0x489994: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x489994u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_489998:
    // 0x489998: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x489998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
label_48999c:
    // 0x48999c: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x48999cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
label_4899a0:
    // 0x4899a0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4899a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4899a4:
    // 0x4899a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4899a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4899a8:
    // 0x4899a8: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x4899a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
label_4899ac:
    // 0x4899ac: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x4899acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_4899b0:
    // 0x4899b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4899b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4899b4:
    // 0x4899b4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x4899b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4899b8:
    // 0x4899b8: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
label_4899bc:
    if (ctx->pc == 0x4899BCu) {
        ctx->pc = 0x4899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4899B8u;
        // 0x4899bc: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4899C0u;
        goto label_4899c0;
    }
    ctx->pc = 0x4899B8u;
    {
        const bool branch_taken_0x4899b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4899B8u;
        // 0x4899bc: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4899b8) {
            ctx->pc = 0x489A8Cu;
            goto label_489a8c;
        }
    }
    ctx->pc = 0x4899C0u;
label_4899c0:
    // 0x4899c0: 0x2503001c  addiu       $v1, $t0, 0x1C
    ctx->pc = 0x4899c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_4899c4:
    // 0x4899c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4899c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4899c8:
    // 0x4899c8: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x4899c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4899cc:
    // 0x4899cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4899ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4899d0:
    // 0x4899d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4899d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4899d4:
    // 0x4899d4: 0x4a13a  dsrl        $s4, $a0, 4
    ctx->pc = 0x4899d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) >> 4);
label_4899d8:
    // 0x4899d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4899d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4899dc:
    // 0x4899dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x4899dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4899e0:
    // 0x4899e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4899e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4899e4:
    // 0x4899e4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_4899e8:
    if (ctx->pc == 0x4899E8u) {
        ctx->pc = 0x4899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4899E4u;
        // 0x4899e8: 0x2655ffff  addiu       $s5, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4899ECu;
        goto label_4899ec;
    }
    ctx->pc = 0x4899E4u;
    {
        const bool branch_taken_0x4899e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4899E4u;
        // 0x4899e8: 0x2655ffff  addiu       $s5, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4899e4) {
            ctx->pc = 0x489A6Cu;
            goto label_489a6c;
        }
    }
    ctx->pc = 0x4899ECu;
label_4899ec:
    // 0x4899ec: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4899ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_4899f0:
    // 0x4899f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4899f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4899f4:
    // 0x4899f4: 0x24a5ad18  addiu       $a1, $a1, -0x52E8
    ctx->pc = 0x4899f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946072));
label_4899f8:
    // 0x4899f8: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x4899f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_4899fc:
    // 0x4899fc: 0x8c644004  lw          $a0, 0x4004($v1)
    ctx->pc = 0x4899fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16388)));
label_489a00:
    // 0x489a00: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x489a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_489a04:
    // 0x489a04: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x489a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
label_489a08:
    // 0x489a08: 0x40f809  jalr        $v0
label_489a0c:
    if (ctx->pc == 0x489A0Cu) {
        ctx->pc = 0x489A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A08u;
        // 0x489a0c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x489A10u;
        goto label_489a10;
    }
    ctx->pc = 0x489A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x489A10u);
        ctx->pc = 0x489A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A08u;
        // 0x489a0c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489A08u, 0x489A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x489A10u;
label_489a10:
    // 0x489a10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x489a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_489a14:
    // 0x489a14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x489a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_489a18:
    // 0x489a18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x489a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_489a1c:
    // 0x489a1c: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x489a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_489a20:
    // 0x489a20: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x489a20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489a24:
    // 0x489a24: 0x0  nop
    ctx->pc = 0x489a24u;
    // NOP
label_489a28:
    // 0x489a28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x489a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_489a2c:
    // 0x489a2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x489a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_489a30:
    // 0x489a30: 0x0  nop
    ctx->pc = 0x489a30u;
    // NOP
label_489a34:
    // 0x489a34: 0x0  nop
    ctx->pc = 0x489a34u;
    // NOP
label_489a38:
    // 0x489a38: 0x0  nop
    ctx->pc = 0x489a38u;
    // NOP
label_489a3c:
    // 0x489a3c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_489a40:
    if (ctx->pc == 0x489A40u) {
        ctx->pc = 0x489A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A3Cu;
        // 0x489a40: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489A44u;
        goto label_489a44;
    }
    ctx->pc = 0x489A3Cu;
    {
        const bool branch_taken_0x489a3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x489A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A3Cu;
        // 0x489a40: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489a3c) {
            ctx->pc = 0x489A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489a28;
        }
    }
    ctx->pc = 0x489A44u;
label_489a44:
    // 0x489a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_489a48:
    // 0x489a48: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
label_489a4c:
    if (ctx->pc == 0x489A4Cu) {
        ctx->pc = 0x489A50u;
        goto label_489a50;
    }
    ctx->pc = 0x489A48u;
    {
        const bool branch_taken_0x489a48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x489a48) {
            ctx->pc = 0x489A6Cu;
            goto label_489a6c;
        }
    }
    ctx->pc = 0x489A50u;
label_489a50:
    // 0x489a50: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x489a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_489a54:
    // 0x489a54: 0xa0600018  sb          $zero, 0x18($v1)
    ctx->pc = 0x489a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 0));
label_489a58:
    // 0x489a58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x489a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_489a5c:
    // 0x489a5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x489a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_489a60:
    // 0x489a60: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x489a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_489a64:
    // 0x489a64: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x489a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_489a68:
    // 0x489a68: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x489a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_489a6c:
    // 0x489a6c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x489a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_489a70:
    // 0x489a70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x489a70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_489a74:
    // 0x489a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x489a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489a78:
    // 0x489a78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x489a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_489a7c:
    // 0x489a7c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x489a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_489a80:
    // 0x489a80: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x489a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_489a84:
    // 0x489a84: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_489a88:
    if (ctx->pc == 0x489A88u) {
        ctx->pc = 0x489A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A84u;
        // 0x489a88: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489A8Cu;
        goto label_489a8c;
    }
    ctx->pc = 0x489A84u;
    {
        const bool branch_taken_0x489a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A84u;
        // 0x489a88: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489a84) {
            ctx->pc = 0x4899B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4899b8;
        }
    }
    ctx->pc = 0x489A8Cu;
label_489a8c:
    // 0x489a8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x489a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_489a90:
    // 0x489a90: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x489a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
label_489a94:
    // 0x489a94: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x489a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_489a98:
    // 0x489a98: 0xc1224a6  jal         func_489298
label_489a9c:
    if (ctx->pc == 0x489A9Cu) {
        ctx->pc = 0x489A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489A98u;
        // 0x489a9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x489AA0u;
        goto label_489aa0;
    }
    ctx->pc = 0x489A98u;
    SET_GPR_U32(ctx, 31, 0x489AA0u);
    ctx->pc = 0x489A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489A98u;
    // 0x489a9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x489298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489298u, 0x489A98u, 0x489AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489AA0u;
label_489aa0:
    // 0x489aa0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x489aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489aa4:
    // 0x489aa4: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x489aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_489aa8:
    // 0x489aa8: 0x8fb30014  lw          $s3, 0x14($sp)
    ctx->pc = 0x489aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_489aac:
    // 0x489aac: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_489ab0:
    if (ctx->pc == 0x489AB0u) {
        ctx->pc = 0x489AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AACu;
        // 0x489ab0: 0x7ba90030  lq          $t1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489AB4u;
        goto label_489ab4;
    }
    ctx->pc = 0x489AACu;
    {
        const bool branch_taken_0x489aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x489AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AACu;
        // 0x489ab0: 0x7ba90030  lq          $t1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489aac) {
            ctx->pc = 0x489918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489918;
        }
    }
    ctx->pc = 0x489AB4u;
label_489ab4:
    // 0x489ab4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x489ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_489ab8:
    // 0x489ab8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x489ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_489abc:
    // 0x489abc: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
label_489ac0:
    if (ctx->pc == 0x489AC0u) {
        ctx->pc = 0x489AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489ABCu;
        // 0x489ac0: 0x8fb70018  lw          $s7, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489AC4u;
        goto label_489ac4;
    }
    ctx->pc = 0x489ABCu;
    {
        const bool branch_taken_0x489abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x489AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489ABCu;
        // 0x489ac0: 0x8fb70018  lw          $s7, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489abc) {
            ctx->pc = 0x4898E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4898e8;
        }
    }
    ctx->pc = 0x489AC4u;
label_489ac4:
    // 0x489ac4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_489ac8:
    if (ctx->pc == 0x489AC8u) {
        ctx->pc = 0x489AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AC4u;
        // 0x489ac8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489ACCu;
        goto label_489acc;
    }
    ctx->pc = 0x489AC4u;
    {
        const bool branch_taken_0x489ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AC4u;
        // 0x489ac8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ac4) {
            ctx->pc = 0x489CB0u;
            goto label_489cb0;
        }
    }
    ctx->pc = 0x489ACCu;
label_489acc:
    // 0x489acc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x489accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_489ad0:
    // 0x489ad0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_489ad4:
    if (ctx->pc == 0x489AD4u) {
        ctx->pc = 0x489AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AD0u;
        // 0x489ad4: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489AD8u;
        goto label_489ad8;
    }
    ctx->pc = 0x489AD0u;
    {
        const bool branch_taken_0x489ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x489AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AD0u;
        // 0x489ad4: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ad0) {
            ctx->pc = 0x489CACu;
            goto label_489cac;
        }
    }
    ctx->pc = 0x489AD8u;
label_489ad8:
    // 0x489ad8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x489ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_489adc:
    // 0x489adc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x489adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_489ae0:
    // 0x489ae0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x489ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_489ae4:
    // 0x489ae4: 0x26e5ffff  addiu       $a1, $s7, -0x1
    ctx->pc = 0x489ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_489ae8:
    // 0x489ae8: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x489ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_489aec:
    // 0x489aec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x489aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_489af0:
    // 0x489af0: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x489af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_489af4:
    // 0x489af4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x489af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_489af8:
    // 0x489af8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x489af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489afc:
    // 0x489afc: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_489b00:
    if (ctx->pc == 0x489B00u) {
        ctx->pc = 0x489B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AFCu;
        // 0x489b00: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489B04u;
        goto label_489b04;
    }
    ctx->pc = 0x489AFCu;
    {
        const bool branch_taken_0x489afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x489B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AFCu;
        // 0x489b00: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489afc) {
            ctx->pc = 0x489C9Cu;
            goto label_489c9c;
        }
    }
    ctx->pc = 0x489B04u;
label_489b04:
    // 0x489b04: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x489b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_489b08:
    // 0x489b08: 0x2449ee08  addiu       $t1, $v0, -0x11F8
    ctx->pc = 0x489b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
label_489b0c:
    // 0x489b0c: 0x0  nop
    ctx->pc = 0x489b0cu;
    // NOP
label_489b10:
    // 0x489b10: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x489b10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_489b14:
    // 0x489b14: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x489b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_489b18:
    // 0x489b18: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x489b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_489b1c:
    // 0x489b1c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x489b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_489b20:
    // 0x489b20: 0x8f888668  lw          $t0, -0x7998($gp)
    ctx->pc = 0x489b20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_489b24:
    // 0x489b24: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x489b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_489b28:
    // 0x489b28: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x489b28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_489b2c:
    // 0x489b2c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x489b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_489b30:
    // 0x489b30: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x489b30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_489b34:
    // 0x489b34: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x489b34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_489b38:
    // 0x489b38: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x489b38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_489b3c:
    // 0x489b3c: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x489b3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_489b40:
    // 0x489b40: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x489b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_489b44:
    // 0x489b44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x489b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_489b48:
    // 0x489b48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x489b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_489b4c:
    // 0x489b4c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x489b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_489b50:
    // 0x489b50: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x489b50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_489b54:
    // 0x489b54: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x489b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_489b58:
    // 0x489b58: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x489b58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_489b5c:
    // 0x489b5c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x489b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_489b60:
    // 0x489b60: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x489b60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_489b64:
    // 0x489b64: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x489b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_489b68:
    // 0x489b68: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x489b68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_489b6c:
    // 0x489b6c: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x489b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
label_489b70:
    // 0x489b70: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x489b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
label_489b74:
    // 0x489b74: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x489b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_489b78:
    // 0x489b78: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x489b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_489b7c:
    // 0x489b7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x489b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_489b80:
    // 0x489b80: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x489b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_489b84:
    // 0x489b84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x489b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_489b88:
    // 0x489b88: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x489b88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_489b8c:
    // 0x489b8c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x489b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_489b90:
    // 0x489b90: 0x8ca34000  lw          $v1, 0x4000($a1)
    ctx->pc = 0x489b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
label_489b94:
    // 0x489b94: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x489b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_489b98:
    // 0x489b98: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x489b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_489b9c:
    // 0x489b9c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_489ba0:
    if (ctx->pc == 0x489BA0u) {
        ctx->pc = 0x489BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489B9Cu;
        // 0x489ba0: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x489BA4u;
        goto label_489ba4;
    }
    ctx->pc = 0x489B9Cu;
    {
        const bool branch_taken_0x489b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x489BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489B9Cu;
        // 0x489ba0: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x489b9c) {
            ctx->pc = 0x489C74u;
            goto label_489c74;
        }
    }
    ctx->pc = 0x489BA4u;
label_489ba4:
    // 0x489ba4: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x489ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_489ba8:
    // 0x489ba8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x489ba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_489bac:
    // 0x489bac: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x489bacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_489bb0:
    // 0x489bb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x489bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_489bb4:
    // 0x489bb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x489bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_489bb8:
    // 0x489bb8: 0x4a93a  dsrl        $s5, $a0, 4
    ctx->pc = 0x489bb8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) >> 4);
label_489bbc:
    // 0x489bbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x489bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_489bc0:
    // 0x489bc0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x489bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_489bc4:
    // 0x489bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x489bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_489bc8:
    // 0x489bc8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_489bcc:
    if (ctx->pc == 0x489BCCu) {
        ctx->pc = 0x489BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489BC8u;
        // 0x489bcc: 0x2634ffff  addiu       $s4, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489BD0u;
        goto label_489bd0;
    }
    ctx->pc = 0x489BC8u;
    {
        const bool branch_taken_0x489bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x489BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489BC8u;
        // 0x489bcc: 0x2634ffff  addiu       $s4, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489bc8) {
            ctx->pc = 0x489C54u;
            goto label_489c54;
        }
    }
    ctx->pc = 0x489BD0u;
label_489bd0:
    // 0x489bd0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x489bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_489bd4:
    // 0x489bd4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x489bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_489bd8:
    // 0x489bd8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x489bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_489bdc:
    // 0x489bdc: 0x34a50411  ori         $a1, $a1, 0x411
    ctx->pc = 0x489bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
label_489be0:
    // 0x489be0: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x489be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_489be4:
    // 0x489be4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_489be8:
    // 0x489be8: 0x8c644004  lw          $a0, 0x4004($v1)
    ctx->pc = 0x489be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16388)));
label_489bec:
    // 0x489bec: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x489becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_489bf0:
    // 0x489bf0: 0x40f809  jalr        $v0
label_489bf4:
    if (ctx->pc == 0x489BF4u) {
        ctx->pc = 0x489BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489BF0u;
        // 0x489bf4: 0x7fa90030  sq          $t1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489BF8u;
        goto label_489bf8;
    }
    ctx->pc = 0x489BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x489BF8u);
        ctx->pc = 0x489BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489BF0u;
        // 0x489bf4: 0x7fa90030  sq          $t1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489BF0u, 0x489BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x489BF8u;
label_489bf8:
    // 0x489bf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x489bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_489bfc:
    // 0x489bfc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x489bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_489c00:
    // 0x489c00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x489c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_489c04:
    // 0x489c04: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x489c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_489c08:
    // 0x489c08: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x489c08u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489c0c:
    // 0x489c0c: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x489c0cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489c10:
    // 0x489c10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x489c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_489c14:
    // 0x489c14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x489c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_489c18:
    // 0x489c18: 0x0  nop
    ctx->pc = 0x489c18u;
    // NOP
label_489c1c:
    // 0x489c1c: 0x0  nop
    ctx->pc = 0x489c1cu;
    // NOP
label_489c20:
    // 0x489c20: 0x0  nop
    ctx->pc = 0x489c20u;
    // NOP
label_489c24:
    // 0x489c24: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_489c28:
    if (ctx->pc == 0x489C28u) {
        ctx->pc = 0x489C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C24u;
        // 0x489c28: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489C2Cu;
        goto label_489c2c;
    }
    ctx->pc = 0x489C24u;
    {
        const bool branch_taken_0x489c24 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x489C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C24u;
        // 0x489c28: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489c24) {
            ctx->pc = 0x489C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489c10;
        }
    }
    ctx->pc = 0x489C2Cu;
label_489c2c:
    // 0x489c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_489c30:
    // 0x489c30: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
label_489c34:
    if (ctx->pc == 0x489C34u) {
        ctx->pc = 0x489C38u;
        goto label_489c38;
    }
    ctx->pc = 0x489C30u;
    {
        const bool branch_taken_0x489c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x489c30) {
            ctx->pc = 0x489C54u;
            goto label_489c54;
        }
    }
    ctx->pc = 0x489C38u;
label_489c38:
    // 0x489c38: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x489c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_489c3c:
    // 0x489c3c: 0xa0600018  sb          $zero, 0x18($v1)
    ctx->pc = 0x489c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 0));
label_489c40:
    // 0x489c40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x489c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_489c44:
    // 0x489c44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x489c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_489c48:
    // 0x489c48: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x489c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_489c4c:
    // 0x489c4c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x489c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_489c50:
    // 0x489c50: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x489c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_489c54:
    // 0x489c54: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x489c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_489c58:
    // 0x489c58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x489c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_489c5c:
    // 0x489c5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x489c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_489c60:
    // 0x489c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x489c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_489c64:
    // 0x489c64: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x489c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489c68:
    // 0x489c68: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x489c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_489c6c:
    // 0x489c6c: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_489c70:
    if (ctx->pc == 0x489C70u) {
        ctx->pc = 0x489C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C6Cu;
        // 0x489c70: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489C74u;
        goto label_489c74;
    }
    ctx->pc = 0x489C6Cu;
    {
        const bool branch_taken_0x489c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C6Cu;
        // 0x489c70: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489c6c) {
            ctx->pc = 0x489B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489b9c;
        }
    }
    ctx->pc = 0x489C74u;
label_489c74:
    // 0x489c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x489c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_489c78:
    // 0x489c78: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x489c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
label_489c7c:
    // 0x489c7c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x489c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_489c80:
    // 0x489c80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x489c80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_489c84:
    // 0x489c84: 0xc1224a6  jal         func_489298
label_489c88:
    if (ctx->pc == 0x489C88u) {
        ctx->pc = 0x489C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C84u;
        // 0x489c88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489C8Cu;
        goto label_489c8c;
    }
    ctx->pc = 0x489C84u;
    SET_GPR_U32(ctx, 31, 0x489C8Cu);
    ctx->pc = 0x489C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489C84u;
    // 0x489c88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489298u, 0x489C84u, 0x489C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489C8Cu;
label_489c8c:
    // 0x489c8c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x489c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489c90:
    // 0x489c90: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x489c90u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489c94:
    // 0x489c94: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_489c98:
    if (ctx->pc == 0x489C98u) {
        ctx->pc = 0x489C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C94u;
        // 0x489c98: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489C9Cu;
        goto label_489c9c;
    }
    ctx->pc = 0x489C94u;
    {
        const bool branch_taken_0x489c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x489C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489C94u;
        // 0x489c98: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489c94) {
            ctx->pc = 0x489B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489b10;
        }
    }
    ctx->pc = 0x489C9Cu;
label_489c9c:
    // 0x489c9c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x489c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_489ca0:
    // 0x489ca0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x489ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_489ca4:
    // 0x489ca4: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
label_489ca8:
    if (ctx->pc == 0x489CA8u) {
        ctx->pc = 0x489CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489CA4u;
        // 0x489ca8: 0x8fb70018  lw          $s7, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489CACu;
        goto label_489cac;
    }
    ctx->pc = 0x489CA4u;
    {
        const bool branch_taken_0x489ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x489CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489CA4u;
        // 0x489ca8: 0x8fb70018  lw          $s7, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ca4) {
            ctx->pc = 0x489AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489ad8;
        }
    }
    ctx->pc = 0x489CACu;
label_489cac:
    // 0x489cac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x489cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_489cb0:
    // 0x489cb0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x489cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_489cb4:
    // 0x489cb4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x489cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_489cb8:
    // 0x489cb8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x489cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_489cbc:
    // 0x489cbc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x489cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_489cc0:
    // 0x489cc0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x489cc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_489cc4:
    // 0x489cc4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x489cc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_489cc8:
    // 0x489cc8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x489cc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_489ccc:
    // 0x489ccc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x489cccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_489cd0:
    // 0x489cd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x489cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_489cd4:
    // 0x489cd4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x489cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_489cd8:
    // 0x489cd8: 0x3e00008  jr          $ra
label_489cdc:
    if (ctx->pc == 0x489CDCu) {
        ctx->pc = 0x489CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489CD8u;
        // 0x489cdc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489CE0u;
        goto label_fallthrough_0x489cd8;
    }
    ctx->pc = 0x489CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489CD8u;
        // 0x489cdc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x489cd8:
    ctx->pc = 0x489CE0u;
}
