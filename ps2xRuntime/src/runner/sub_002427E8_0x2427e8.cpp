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

// Function: sub_002427E8
// Address: 0x2427e8 - 0x242ce0
void sub_002427E8_0x2427e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002427E8_0x2427e8");
#endif

    switch (ctx->pc) {
        case 0x2427e8u: goto label_2427e8;
        case 0x2427ecu: goto label_2427ec;
        case 0x2427f0u: goto label_2427f0;
        case 0x2427f4u: goto label_2427f4;
        case 0x2427f8u: goto label_2427f8;
        case 0x2427fcu: goto label_2427fc;
        case 0x242800u: goto label_242800;
        case 0x242804u: goto label_242804;
        case 0x242808u: goto label_242808;
        case 0x24280cu: goto label_24280c;
        case 0x242810u: goto label_242810;
        case 0x242814u: goto label_242814;
        case 0x242818u: goto label_242818;
        case 0x24281cu: goto label_24281c;
        case 0x242820u: goto label_242820;
        case 0x242824u: goto label_242824;
        case 0x242828u: goto label_242828;
        case 0x24282cu: goto label_24282c;
        case 0x242830u: goto label_242830;
        case 0x242834u: goto label_242834;
        case 0x242838u: goto label_242838;
        case 0x24283cu: goto label_24283c;
        case 0x242840u: goto label_242840;
        case 0x242844u: goto label_242844;
        case 0x242848u: goto label_242848;
        case 0x24284cu: goto label_24284c;
        case 0x242850u: goto label_242850;
        case 0x242854u: goto label_242854;
        case 0x242858u: goto label_242858;
        case 0x24285cu: goto label_24285c;
        case 0x242860u: goto label_242860;
        case 0x242864u: goto label_242864;
        case 0x242868u: goto label_242868;
        case 0x24286cu: goto label_24286c;
        case 0x242870u: goto label_242870;
        case 0x242874u: goto label_242874;
        case 0x242878u: goto label_242878;
        case 0x24287cu: goto label_24287c;
        case 0x242880u: goto label_242880;
        case 0x242884u: goto label_242884;
        case 0x242888u: goto label_242888;
        case 0x24288cu: goto label_24288c;
        case 0x242890u: goto label_242890;
        case 0x242894u: goto label_242894;
        case 0x242898u: goto label_242898;
        case 0x24289cu: goto label_24289c;
        case 0x2428a0u: goto label_2428a0;
        case 0x2428a4u: goto label_2428a4;
        case 0x2428a8u: goto label_2428a8;
        case 0x2428acu: goto label_2428ac;
        case 0x2428b0u: goto label_2428b0;
        case 0x2428b4u: goto label_2428b4;
        case 0x2428b8u: goto label_2428b8;
        case 0x2428bcu: goto label_2428bc;
        case 0x2428c0u: goto label_2428c0;
        case 0x2428c4u: goto label_2428c4;
        case 0x2428c8u: goto label_2428c8;
        case 0x2428ccu: goto label_2428cc;
        case 0x2428d0u: goto label_2428d0;
        case 0x2428d4u: goto label_2428d4;
        case 0x2428d8u: goto label_2428d8;
        case 0x2428dcu: goto label_2428dc;
        case 0x2428e0u: goto label_2428e0;
        case 0x2428e4u: goto label_2428e4;
        case 0x2428e8u: goto label_2428e8;
        case 0x2428ecu: goto label_2428ec;
        case 0x2428f0u: goto label_2428f0;
        case 0x2428f4u: goto label_2428f4;
        case 0x2428f8u: goto label_2428f8;
        case 0x2428fcu: goto label_2428fc;
        case 0x242900u: goto label_242900;
        case 0x242904u: goto label_242904;
        case 0x242908u: goto label_242908;
        case 0x24290cu: goto label_24290c;
        case 0x242910u: goto label_242910;
        case 0x242914u: goto label_242914;
        case 0x242918u: goto label_242918;
        case 0x24291cu: goto label_24291c;
        case 0x242920u: goto label_242920;
        case 0x242924u: goto label_242924;
        case 0x242928u: goto label_242928;
        case 0x24292cu: goto label_24292c;
        case 0x242930u: goto label_242930;
        case 0x242934u: goto label_242934;
        case 0x242938u: goto label_242938;
        case 0x24293cu: goto label_24293c;
        case 0x242940u: goto label_242940;
        case 0x242944u: goto label_242944;
        case 0x242948u: goto label_242948;
        case 0x24294cu: goto label_24294c;
        case 0x242950u: goto label_242950;
        case 0x242954u: goto label_242954;
        case 0x242958u: goto label_242958;
        case 0x24295cu: goto label_24295c;
        case 0x242960u: goto label_242960;
        case 0x242964u: goto label_242964;
        case 0x242968u: goto label_242968;
        case 0x24296cu: goto label_24296c;
        case 0x242970u: goto label_242970;
        case 0x242974u: goto label_242974;
        case 0x242978u: goto label_242978;
        case 0x24297cu: goto label_24297c;
        case 0x242980u: goto label_242980;
        case 0x242984u: goto label_242984;
        case 0x242988u: goto label_242988;
        case 0x24298cu: goto label_24298c;
        case 0x242990u: goto label_242990;
        case 0x242994u: goto label_242994;
        case 0x242998u: goto label_242998;
        case 0x24299cu: goto label_24299c;
        case 0x2429a0u: goto label_2429a0;
        case 0x2429a4u: goto label_2429a4;
        case 0x2429a8u: goto label_2429a8;
        case 0x2429acu: goto label_2429ac;
        case 0x2429b0u: goto label_2429b0;
        case 0x2429b4u: goto label_2429b4;
        case 0x2429b8u: goto label_2429b8;
        case 0x2429bcu: goto label_2429bc;
        case 0x2429c0u: goto label_2429c0;
        case 0x2429c4u: goto label_2429c4;
        case 0x2429c8u: goto label_2429c8;
        case 0x2429ccu: goto label_2429cc;
        case 0x2429d0u: goto label_2429d0;
        case 0x2429d4u: goto label_2429d4;
        case 0x2429d8u: goto label_2429d8;
        case 0x2429dcu: goto label_2429dc;
        case 0x2429e0u: goto label_2429e0;
        case 0x2429e4u: goto label_2429e4;
        case 0x2429e8u: goto label_2429e8;
        case 0x2429ecu: goto label_2429ec;
        case 0x2429f0u: goto label_2429f0;
        case 0x2429f4u: goto label_2429f4;
        case 0x2429f8u: goto label_2429f8;
        case 0x2429fcu: goto label_2429fc;
        case 0x242a00u: goto label_242a00;
        case 0x242a04u: goto label_242a04;
        case 0x242a08u: goto label_242a08;
        case 0x242a0cu: goto label_242a0c;
        case 0x242a10u: goto label_242a10;
        case 0x242a14u: goto label_242a14;
        case 0x242a18u: goto label_242a18;
        case 0x242a1cu: goto label_242a1c;
        case 0x242a20u: goto label_242a20;
        case 0x242a24u: goto label_242a24;
        case 0x242a28u: goto label_242a28;
        case 0x242a2cu: goto label_242a2c;
        case 0x242a30u: goto label_242a30;
        case 0x242a34u: goto label_242a34;
        case 0x242a38u: goto label_242a38;
        case 0x242a3cu: goto label_242a3c;
        case 0x242a40u: goto label_242a40;
        case 0x242a44u: goto label_242a44;
        case 0x242a48u: goto label_242a48;
        case 0x242a4cu: goto label_242a4c;
        case 0x242a50u: goto label_242a50;
        case 0x242a54u: goto label_242a54;
        case 0x242a58u: goto label_242a58;
        case 0x242a5cu: goto label_242a5c;
        case 0x242a60u: goto label_242a60;
        case 0x242a64u: goto label_242a64;
        case 0x242a68u: goto label_242a68;
        case 0x242a6cu: goto label_242a6c;
        case 0x242a70u: goto label_242a70;
        case 0x242a74u: goto label_242a74;
        case 0x242a78u: goto label_242a78;
        case 0x242a7cu: goto label_242a7c;
        case 0x242a80u: goto label_242a80;
        case 0x242a84u: goto label_242a84;
        case 0x242a88u: goto label_242a88;
        case 0x242a8cu: goto label_242a8c;
        case 0x242a90u: goto label_242a90;
        case 0x242a94u: goto label_242a94;
        case 0x242a98u: goto label_242a98;
        case 0x242a9cu: goto label_242a9c;
        case 0x242aa0u: goto label_242aa0;
        case 0x242aa4u: goto label_242aa4;
        case 0x242aa8u: goto label_242aa8;
        case 0x242aacu: goto label_242aac;
        case 0x242ab0u: goto label_242ab0;
        case 0x242ab4u: goto label_242ab4;
        case 0x242ab8u: goto label_242ab8;
        case 0x242abcu: goto label_242abc;
        case 0x242ac0u: goto label_242ac0;
        case 0x242ac4u: goto label_242ac4;
        case 0x242ac8u: goto label_242ac8;
        case 0x242accu: goto label_242acc;
        case 0x242ad0u: goto label_242ad0;
        case 0x242ad4u: goto label_242ad4;
        case 0x242ad8u: goto label_242ad8;
        case 0x242adcu: goto label_242adc;
        case 0x242ae0u: goto label_242ae0;
        case 0x242ae4u: goto label_242ae4;
        case 0x242ae8u: goto label_242ae8;
        case 0x242aecu: goto label_242aec;
        case 0x242af0u: goto label_242af0;
        case 0x242af4u: goto label_242af4;
        case 0x242af8u: goto label_242af8;
        case 0x242afcu: goto label_242afc;
        case 0x242b00u: goto label_242b00;
        case 0x242b04u: goto label_242b04;
        case 0x242b08u: goto label_242b08;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b10u: goto label_242b10;
        case 0x242b14u: goto label_242b14;
        case 0x242b18u: goto label_242b18;
        case 0x242b1cu: goto label_242b1c;
        case 0x242b20u: goto label_242b20;
        case 0x242b24u: goto label_242b24;
        case 0x242b28u: goto label_242b28;
        case 0x242b2cu: goto label_242b2c;
        case 0x242b30u: goto label_242b30;
        case 0x242b34u: goto label_242b34;
        case 0x242b38u: goto label_242b38;
        case 0x242b3cu: goto label_242b3c;
        case 0x242b40u: goto label_242b40;
        case 0x242b44u: goto label_242b44;
        case 0x242b48u: goto label_242b48;
        case 0x242b4cu: goto label_242b4c;
        case 0x242b50u: goto label_242b50;
        case 0x242b54u: goto label_242b54;
        case 0x242b58u: goto label_242b58;
        case 0x242b5cu: goto label_242b5c;
        case 0x242b60u: goto label_242b60;
        case 0x242b64u: goto label_242b64;
        case 0x242b68u: goto label_242b68;
        case 0x242b6cu: goto label_242b6c;
        case 0x242b70u: goto label_242b70;
        case 0x242b74u: goto label_242b74;
        case 0x242b78u: goto label_242b78;
        case 0x242b7cu: goto label_242b7c;
        case 0x242b80u: goto label_242b80;
        case 0x242b84u: goto label_242b84;
        case 0x242b88u: goto label_242b88;
        case 0x242b8cu: goto label_242b8c;
        case 0x242b90u: goto label_242b90;
        case 0x242b94u: goto label_242b94;
        case 0x242b98u: goto label_242b98;
        case 0x242b9cu: goto label_242b9c;
        case 0x242ba0u: goto label_242ba0;
        case 0x242ba4u: goto label_242ba4;
        case 0x242ba8u: goto label_242ba8;
        case 0x242bacu: goto label_242bac;
        case 0x242bb0u: goto label_242bb0;
        case 0x242bb4u: goto label_242bb4;
        case 0x242bb8u: goto label_242bb8;
        case 0x242bbcu: goto label_242bbc;
        case 0x242bc0u: goto label_242bc0;
        case 0x242bc4u: goto label_242bc4;
        case 0x242bc8u: goto label_242bc8;
        case 0x242bccu: goto label_242bcc;
        case 0x242bd0u: goto label_242bd0;
        case 0x242bd4u: goto label_242bd4;
        case 0x242bd8u: goto label_242bd8;
        case 0x242bdcu: goto label_242bdc;
        case 0x242be0u: goto label_242be0;
        case 0x242be4u: goto label_242be4;
        case 0x242be8u: goto label_242be8;
        case 0x242becu: goto label_242bec;
        case 0x242bf0u: goto label_242bf0;
        case 0x242bf4u: goto label_242bf4;
        case 0x242bf8u: goto label_242bf8;
        case 0x242bfcu: goto label_242bfc;
        case 0x242c00u: goto label_242c00;
        case 0x242c04u: goto label_242c04;
        case 0x242c08u: goto label_242c08;
        case 0x242c0cu: goto label_242c0c;
        case 0x242c10u: goto label_242c10;
        case 0x242c14u: goto label_242c14;
        case 0x242c18u: goto label_242c18;
        case 0x242c1cu: goto label_242c1c;
        case 0x242c20u: goto label_242c20;
        case 0x242c24u: goto label_242c24;
        case 0x242c28u: goto label_242c28;
        case 0x242c2cu: goto label_242c2c;
        case 0x242c30u: goto label_242c30;
        case 0x242c34u: goto label_242c34;
        case 0x242c38u: goto label_242c38;
        case 0x242c3cu: goto label_242c3c;
        case 0x242c40u: goto label_242c40;
        case 0x242c44u: goto label_242c44;
        case 0x242c48u: goto label_242c48;
        case 0x242c4cu: goto label_242c4c;
        case 0x242c50u: goto label_242c50;
        case 0x242c54u: goto label_242c54;
        case 0x242c58u: goto label_242c58;
        case 0x242c5cu: goto label_242c5c;
        case 0x242c60u: goto label_242c60;
        case 0x242c64u: goto label_242c64;
        case 0x242c68u: goto label_242c68;
        case 0x242c6cu: goto label_242c6c;
        case 0x242c70u: goto label_242c70;
        case 0x242c74u: goto label_242c74;
        case 0x242c78u: goto label_242c78;
        case 0x242c7cu: goto label_242c7c;
        case 0x242c80u: goto label_242c80;
        case 0x242c84u: goto label_242c84;
        case 0x242c88u: goto label_242c88;
        case 0x242c8cu: goto label_242c8c;
        case 0x242c90u: goto label_242c90;
        case 0x242c94u: goto label_242c94;
        case 0x242c98u: goto label_242c98;
        case 0x242c9cu: goto label_242c9c;
        case 0x242ca0u: goto label_242ca0;
        case 0x242ca4u: goto label_242ca4;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cacu: goto label_242cac;
        case 0x242cb0u: goto label_242cb0;
        case 0x242cb4u: goto label_242cb4;
        case 0x242cb8u: goto label_242cb8;
        case 0x242cbcu: goto label_242cbc;
        case 0x242cc0u: goto label_242cc0;
        case 0x242cc4u: goto label_242cc4;
        case 0x242cc8u: goto label_242cc8;
        case 0x242cccu: goto label_242ccc;
        case 0x242cd0u: goto label_242cd0;
        case 0x242cd4u: goto label_242cd4;
        case 0x242cd8u: goto label_242cd8;
        case 0x242cdcu: goto label_242cdc;
        default: break;
    }

    ctx->pc = 0x2427e8u;

label_2427e8:
    // 0x2427e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2427e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2427ec:
    // 0x2427ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2427ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2427f0:
    // 0x2427f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2427f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2427f4:
    // 0x2427f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2427f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2427f8:
    // 0x2427f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2427f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2427fc:
    // 0x2427fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2427fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242800:
    // 0x242800: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x242800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_242804:
    // 0x242804: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x242804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242808:
    // 0x242808: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x242808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_24280c:
    // 0x24280c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_242810:
    // 0x242810: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x242810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_242814:
    // 0x242814: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x242814u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_242818:
    // 0x242818: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x242818u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_24281c:
    // 0x24281c: 0xc0874fa  jal         func_21D3E8
label_242820:
    if (ctx->pc == 0x242820u) {
        ctx->pc = 0x242820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24281Cu;
        // 0x242820: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242824u;
        goto label_242824;
    }
    ctx->pc = 0x24281Cu;
    SET_GPR_U32(ctx, 31, 0x242824u);
    ctx->pc = 0x242820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24281Cu;
    // 0x242820: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x24281Cu, 0x242824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242824u;
label_242824:
    // 0x242824: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x242824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_242828:
    // 0x242828: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_24282c:
    if (ctx->pc == 0x24282Cu) {
        ctx->pc = 0x242830u;
        goto label_242830;
    }
    ctx->pc = 0x242828u;
    {
        const bool branch_taken_0x242828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x242828) {
            ctx->pc = 0x242890u;
            goto label_242890;
        }
    }
    ctx->pc = 0x242830u;
label_242830:
    // 0x242830: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x242830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_242834:
    // 0x242834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_242838:
    if (ctx->pc == 0x242838u) {
        ctx->pc = 0x24283Cu;
        goto label_24283c;
    }
    ctx->pc = 0x242834u;
    {
        const bool branch_taken_0x242834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242834) {
            ctx->pc = 0x242844u;
            goto label_242844;
        }
    }
    ctx->pc = 0x24283Cu;
label_24283c:
    // 0x24283c: 0xc088420  jal         func_221080
label_242840:
    if (ctx->pc == 0x242840u) {
        ctx->pc = 0x242840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24283Cu;
        // 0x242840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242844u;
        goto label_242844;
    }
    ctx->pc = 0x24283Cu;
    SET_GPR_U32(ctx, 31, 0x242844u);
    ctx->pc = 0x242840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24283Cu;
    // 0x242840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x24283Cu, 0x242844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242844u;
label_242844:
    // 0x242844: 0xc089f12  jal         func_227C48
label_242848:
    if (ctx->pc == 0x242848u) {
        ctx->pc = 0x242848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242844u;
        // 0x242848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24284Cu;
        goto label_24284c;
    }
    ctx->pc = 0x242844u;
    SET_GPR_U32(ctx, 31, 0x24284Cu);
    ctx->pc = 0x242848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242844u;
    // 0x242848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x242844u, 0x24284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24284Cu;
label_24284c:
    // 0x24284c: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_242850:
    // 0x242850: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_242854:
    if (ctx->pc == 0x242854u) {
        ctx->pc = 0x242854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242850u;
        // 0x242854: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242858u;
        goto label_242858;
    }
    ctx->pc = 0x242850u;
    {
        const bool branch_taken_0x242850 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242850u;
        // 0x242854: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242850) {
            ctx->pc = 0x242878u;
            goto label_242878;
        }
    }
    ctx->pc = 0x242858u;
label_242858:
    // 0x242858: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x242858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_24285c:
    // 0x24285c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_242860:
    // 0x242860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242864:
    // 0x242864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242868:
    // 0x242868: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x242868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_24286c:
    // 0x24286c: 0x11383f  dsra32      $a3, $s1, 0
    ctx->pc = 0x24286cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 17) >> (32 + 0));
label_242870:
    // 0x242870: 0x10000003  b           . + 4 + (0x3 << 2)
label_242874:
    if (ctx->pc == 0x242874u) {
        ctx->pc = 0x242874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242870u;
        // 0x242874: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242878u;
        goto label_242878;
    }
    ctx->pc = 0x242870u;
    {
        const bool branch_taken_0x242870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242870u;
        // 0x242874: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242870) {
            ctx->pc = 0x242880u;
            goto label_242880;
        }
    }
    ctx->pc = 0x242878u;
label_242878:
    // 0x242878: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x242878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_24287c:
    // 0x24287c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x24287cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_242880:
    // 0x242880: 0x4a00025  bltz        $a1, . + 4 + (0x25 << 2)
label_242884:
    if (ctx->pc == 0x242884u) {
        ctx->pc = 0x242884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242880u;
        // 0x242884: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242888u;
        goto label_242888;
    }
    ctx->pc = 0x242880u;
    {
        const bool branch_taken_0x242880 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242880u;
        // 0x242884: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242880) {
            ctx->pc = 0x242918u;
            goto label_242918;
        }
    }
    ctx->pc = 0x242888u;
label_242888:
    // 0x242888: 0x10000020  b           . + 4 + (0x20 << 2)
label_24288c:
    if (ctx->pc == 0x24288Cu) {
        ctx->pc = 0x24288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242888u;
        // 0x24288c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242890u;
        goto label_242890;
    }
    ctx->pc = 0x242888u;
    {
        const bool branch_taken_0x242888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242888u;
        // 0x24288c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242888) {
            ctx->pc = 0x24290Cu;
            goto label_24290c;
        }
    }
    ctx->pc = 0x242890u;
label_242890:
    // 0x242890: 0xc089e98  jal         func_227A60
label_242894:
    if (ctx->pc == 0x242894u) {
        ctx->pc = 0x242894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242890u;
        // 0x242894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242898u;
        goto label_242898;
    }
    ctx->pc = 0x242890u;
    SET_GPR_U32(ctx, 31, 0x242898u);
    ctx->pc = 0x242894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242890u;
    // 0x242894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A60u, 0x242890u, 0x242898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242898u;
label_242898:
    // 0x242898: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_24289c:
    if (ctx->pc == 0x24289Cu) {
        ctx->pc = 0x2428A0u;
        goto label_2428a0;
    }
    ctx->pc = 0x242898u;
    {
        const bool branch_taken_0x242898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242898) {
            ctx->pc = 0x242934u;
            goto label_242934;
        }
    }
    ctx->pc = 0x2428A0u;
label_2428a0:
    // 0x2428a0: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x2428a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_2428a4:
    // 0x2428a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2428a8:
    if (ctx->pc == 0x2428A8u) {
        ctx->pc = 0x2428A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428A4u;
        // 0x2428a8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428ACu;
        goto label_2428ac;
    }
    ctx->pc = 0x2428A4u;
    {
        const bool branch_taken_0x2428a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428A4u;
        // 0x2428a8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428a4) {
            ctx->pc = 0x2428B8u;
            goto label_2428b8;
        }
    }
    ctx->pc = 0x2428ACu;
label_2428ac:
    // 0x2428ac: 0xc088420  jal         func_221080
label_2428b0:
    if (ctx->pc == 0x2428B0u) {
        ctx->pc = 0x2428B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428ACu;
        // 0x2428b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428B4u;
        goto label_2428b4;
    }
    ctx->pc = 0x2428ACu;
    SET_GPR_U32(ctx, 31, 0x2428B4u);
    ctx->pc = 0x2428B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428ACu;
    // 0x2428b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x2428ACu, 0x2428B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428B4u;
label_2428b4:
    // 0x2428b4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2428b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2428b8:
    // 0x2428b8: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x2428b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_2428bc:
    // 0x2428bc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2428bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2428c0:
    // 0x2428c0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2428c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2428c4:
    // 0x2428c4: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x2428c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2428c8:
    // 0x2428c8: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x2428c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2428cc:
    // 0x2428cc: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x2428ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_2428d0:
    // 0x2428d0: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_2428d4:
    if (ctx->pc == 0x2428D4u) {
        ctx->pc = 0x2428D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428D0u;
        // 0x2428d4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428D8u;
        goto label_2428d8;
    }
    ctx->pc = 0x2428D0u;
    {
        const bool branch_taken_0x2428d0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2428D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428D0u;
        // 0x2428d4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428d0) {
            ctx->pc = 0x2428F8u;
            goto label_2428f8;
        }
    }
    ctx->pc = 0x2428D8u;
label_2428d8:
    // 0x2428d8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2428d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_2428dc:
    // 0x2428dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2428dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2428e0:
    // 0x2428e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2428e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2428e4:
    // 0x2428e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2428e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2428e8:
    // 0x2428e8: 0xdc73fff8  ld          $s3, -0x8($v1)
    ctx->pc = 0x2428e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_2428ec:
    // 0x2428ec: 0x13383f  dsra32      $a3, $s3, 0
    ctx->pc = 0x2428ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> (32 + 0));
label_2428f0:
    // 0x2428f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2428f4:
    if (ctx->pc == 0x2428F4u) {
        ctx->pc = 0x2428F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428F0u;
        // 0x2428f4: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428F8u;
        goto label_2428f8;
    }
    ctx->pc = 0x2428F0u;
    {
        const bool branch_taken_0x2428f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428F0u;
        // 0x2428f4: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428f0) {
            ctx->pc = 0x242900u;
            goto label_242900;
        }
    }
    ctx->pc = 0x2428F8u;
label_2428f8:
    // 0x2428f8: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x2428f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_2428fc:
    // 0x2428fc: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_242900:
    // 0x242900: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_242904:
    if (ctx->pc == 0x242904u) {
        ctx->pc = 0x242904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242900u;
        // 0x242904: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242908u;
        goto label_242908;
    }
    ctx->pc = 0x242900u;
    {
        const bool branch_taken_0x242900 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242900u;
        // 0x242904: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242900) {
            ctx->pc = 0x242918u;
            goto label_242918;
        }
    }
    ctx->pc = 0x242908u;
label_242908:
    // 0x242908: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x242908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_24290c:
    // 0x24290c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24290cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_242910:
    // 0x242910: 0x10000002  b           . + 4 + (0x2 << 2)
label_242914:
    if (ctx->pc == 0x242914u) {
        ctx->pc = 0x242914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242910u;
        // 0x242914: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242918u;
        goto label_242918;
    }
    ctx->pc = 0x242910u;
    {
        const bool branch_taken_0x242910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242910u;
        // 0x242914: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242910) {
            ctx->pc = 0x24291Cu;
            goto label_24291c;
        }
    }
    ctx->pc = 0x242918u;
label_242918:
    // 0x242918: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x242918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24291c:
    // 0x24291c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x24291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_242920:
    // 0x242920: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x242920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242924:
    // 0x242924: 0xe0f809  jalr        $a3
label_242928:
    if (ctx->pc == 0x242928u) {
        ctx->pc = 0x242928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242924u;
        // 0x242928: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24292Cu;
        goto label_24292c;
    }
    ctx->pc = 0x242924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x24292Cu);
        ctx->pc = 0x242928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242924u;
        // 0x242928: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242924u, 0x24292Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24292Cu;
label_24292c:
    // 0x24292c: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_242930:
    if (ctx->pc == 0x242930u) {
        ctx->pc = 0x242930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24292Cu;
        // 0x242930: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242934u;
        goto label_242934;
    }
    ctx->pc = 0x24292Cu;
    {
        const bool branch_taken_0x24292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24292Cu;
        // 0x242930: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24292c) {
            ctx->pc = 0x242CB0u;
            goto label_242cb0;
        }
    }
    ctx->pc = 0x242934u;
label_242934:
    // 0x242934: 0xc0874fa  jal         func_21D3E8
label_242938:
    if (ctx->pc == 0x242938u) {
        ctx->pc = 0x242938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242934u;
        // 0x242938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24293Cu;
        goto label_24293c;
    }
    ctx->pc = 0x242934u;
    SET_GPR_U32(ctx, 31, 0x24293Cu);
    ctx->pc = 0x242938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242934u;
    // 0x242938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x242934u, 0x24293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24293Cu;
label_24293c:
    // 0x24293c: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x24293cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_242940:
    // 0x242940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x242940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_242944:
    // 0x242944: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_242948:
    if (ctx->pc == 0x242948u) {
        ctx->pc = 0x242948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242944u;
        // 0x242948: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24294Cu;
        goto label_24294c;
    }
    ctx->pc = 0x242944u;
    {
        const bool branch_taken_0x242944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x242948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242944u;
        // 0x242948: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242944) {
            ctx->pc = 0x242960u;
            goto label_242960;
        }
    }
    ctx->pc = 0x24294Cu;
label_24294c:
    // 0x24294c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x24294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_242950:
    // 0x242950: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x242950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_242954:
    // 0x242954: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x242954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_242958:
    // 0x242958: 0x10000002  b           . + 4 + (0x2 << 2)
label_24295c:
    if (ctx->pc == 0x24295Cu) {
        ctx->pc = 0x24295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242958u;
        // 0x24295c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242960u;
        goto label_242960;
    }
    ctx->pc = 0x242958u;
    {
        const bool branch_taken_0x242958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242958u;
        // 0x24295c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242958) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x242960u;
label_242960:
    // 0x242960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242964:
    // 0x242964: 0xc0512e2  jal         func_144B88
label_242968:
    if (ctx->pc == 0x242968u) {
        ctx->pc = 0x242968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242964u;
        // 0x242968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24296Cu;
        goto label_24296c;
    }
    ctx->pc = 0x242964u;
    SET_GPR_U32(ctx, 31, 0x24296Cu);
    ctx->pc = 0x242968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242964u;
    // 0x242968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x242964u, 0x24296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24296Cu;
label_24296c:
    // 0x24296c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242970:
    // 0x242970: 0xc0874fa  jal         func_21D3E8
label_242974:
    if (ctx->pc == 0x242974u) {
        ctx->pc = 0x242974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242970u;
        // 0x242974: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242978u;
        goto label_242978;
    }
    ctx->pc = 0x242970u;
    SET_GPR_U32(ctx, 31, 0x242978u);
    ctx->pc = 0x242974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242970u;
    // 0x242974: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x242970u, 0x242978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242978u;
label_242978:
    // 0x242978: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x242978u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_24297c:
    // 0x24297c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_242980:
    // 0x242980: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_242984:
    if (ctx->pc == 0x242984u) {
        ctx->pc = 0x242984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242980u;
        // 0x242984: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242988u;
        goto label_242988;
    }
    ctx->pc = 0x242980u;
    {
        const bool branch_taken_0x242980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x242984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242980u;
        // 0x242984: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242980) {
            ctx->pc = 0x24299Cu;
            goto label_24299c;
        }
    }
    ctx->pc = 0x242988u;
label_242988:
    // 0x242988: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x242988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_24298c:
    // 0x24298c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x24298cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_242990:
    // 0x242990: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_242994:
    // 0x242994: 0x10000002  b           . + 4 + (0x2 << 2)
label_242998:
    if (ctx->pc == 0x242998u) {
        ctx->pc = 0x242998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242994u;
        // 0x242998: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24299Cu;
        goto label_24299c;
    }
    ctx->pc = 0x242994u;
    {
        const bool branch_taken_0x242994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242994u;
        // 0x242998: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242994) {
            ctx->pc = 0x2429A0u;
            goto label_2429a0;
        }
    }
    ctx->pc = 0x24299Cu;
label_24299c:
    // 0x24299c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2429a0:
    // 0x2429a0: 0xc0512e2  jal         func_144B88
label_2429a4:
    if (ctx->pc == 0x2429A4u) {
        ctx->pc = 0x2429A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429A0u;
        // 0x2429a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429A8u;
        goto label_2429a8;
    }
    ctx->pc = 0x2429A0u;
    SET_GPR_U32(ctx, 31, 0x2429A8u);
    ctx->pc = 0x2429A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429A0u;
    // 0x2429a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x2429A0u, 0x2429A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429A8u;
label_2429a8:
    // 0x2429a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2429a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2429ac:
    // 0x2429ac: 0xc0874fa  jal         func_21D3E8
label_2429b0:
    if (ctx->pc == 0x2429B0u) {
        ctx->pc = 0x2429B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ACu;
        // 0x2429b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429B4u;
        goto label_2429b4;
    }
    ctx->pc = 0x2429ACu;
    SET_GPR_U32(ctx, 31, 0x2429B4u);
    ctx->pc = 0x2429B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429ACu;
    // 0x2429b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2429ACu, 0x2429B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429B4u;
label_2429b4:
    // 0x2429b4: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x2429b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_2429b8:
    // 0x2429b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2429bc:
    // 0x2429bc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_2429c0:
    if (ctx->pc == 0x2429C0u) {
        ctx->pc = 0x2429C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429BCu;
        // 0x2429c0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429C4u;
        goto label_2429c4;
    }
    ctx->pc = 0x2429BCu;
    {
        const bool branch_taken_0x2429bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2429C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429BCu;
        // 0x2429c0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429bc) {
            ctx->pc = 0x2429D8u;
            goto label_2429d8;
        }
    }
    ctx->pc = 0x2429C4u;
label_2429c4:
    // 0x2429c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_2429c8:
    // 0x2429c8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2429c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2429cc:
    // 0x2429cc: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x2429ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_2429d0:
    // 0x2429d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2429d4:
    if (ctx->pc == 0x2429D4u) {
        ctx->pc = 0x2429D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429D0u;
        // 0x2429d4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429D8u;
        goto label_2429d8;
    }
    ctx->pc = 0x2429D0u;
    {
        const bool branch_taken_0x2429d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429D0u;
        // 0x2429d4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429d0) {
            ctx->pc = 0x2429DCu;
            goto label_2429dc;
        }
    }
    ctx->pc = 0x2429D8u;
label_2429d8:
    // 0x2429d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2429d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2429dc:
    // 0x2429dc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2429dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2429e0:
    // 0x2429e0: 0xc0512e2  jal         func_144B88
label_2429e4:
    if (ctx->pc == 0x2429E4u) {
        ctx->pc = 0x2429E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429E0u;
        // 0x2429e4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429E8u;
        goto label_2429e8;
    }
    ctx->pc = 0x2429E0u;
    SET_GPR_U32(ctx, 31, 0x2429E8u);
    ctx->pc = 0x2429E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429E0u;
    // 0x2429e4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x2429E0u, 0x2429E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429E8u;
label_2429e8:
    // 0x2429e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2429e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2429ec:
    // 0x2429ec: 0xc0e87c0  jal         func_3A1F00
label_2429f0:
    if (ctx->pc == 0x2429F0u) {
        ctx->pc = 0x2429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ECu;
        // 0x2429f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429F4u;
        goto label_2429f4;
    }
    ctx->pc = 0x2429ECu;
    SET_GPR_U32(ctx, 31, 0x2429F4u);
    ctx->pc = 0x2429F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429ECu;
    // 0x2429f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x2429ECu, 0x2429F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429F4u;
label_2429f4:
    // 0x2429f4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2429f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2429f8:
    // 0x2429f8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2429f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2429fc:
    // 0x2429fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2429fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242a00:
    // 0x242a00: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_242a04:
    // 0x242a04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x242a04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_242a08:
    // 0x242a08: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x242a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242a0c:
    // 0x242a0c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x242a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242a10:
    // 0x242a10: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x242a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242a14:
    // 0x242a14: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x242a14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_242a18:
    // 0x242a18: 0x4a0003bf  vwaitq
    ctx->pc = 0x242a18u;
    // VWAITQ (Q already resolved in this runtime)
label_242a1c:
    // 0x242a1c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x242a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242a20:
    // 0x242a20: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x242a20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_242a24:
    // 0x242a24: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x242a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_242a28:
    // 0x242a28: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_242a2c:
    // 0x242a2c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x242a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_242a30:
    // 0x242a30: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x242a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_242a34:
    // 0x242a34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_242a38:
    // 0x242a38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x242a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242a3c:
    // 0x242a3c: 0xc0cd8ec  jal         func_3363B0
label_242a40:
    if (ctx->pc == 0x242A40u) {
        ctx->pc = 0x242A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A3Cu;
        // 0x242a40: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A44u;
        goto label_242a44;
    }
    ctx->pc = 0x242A3Cu;
    SET_GPR_U32(ctx, 31, 0x242A44u);
    ctx->pc = 0x242A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A3Cu;
    // 0x242a40: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x242A3Cu, 0x242A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A44u;
label_242a44:
    // 0x242a44: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x242a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242a48:
    // 0x242a48: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x242a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_242a4c:
    // 0x242a4c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x242a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_242a50:
    // 0x242a50: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x242a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_242a54:
    // 0x242a54: 0xc0cd5ea  jal         func_3357A8
label_242a58:
    if (ctx->pc == 0x242A58u) {
        ctx->pc = 0x242A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A54u;
        // 0x242a58: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A5Cu;
        goto label_242a5c;
    }
    ctx->pc = 0x242A54u;
    SET_GPR_U32(ctx, 31, 0x242A5Cu);
    ctx->pc = 0x242A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A54u;
    // 0x242a58: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x242A54u, 0x242A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A5Cu;
label_242a5c:
    // 0x242a5c: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
label_242a60:
    if (ctx->pc == 0x242A60u) {
        ctx->pc = 0x242A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A5Cu;
        // 0x242a60: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A64u;
        goto label_242a64;
    }
    ctx->pc = 0x242A5Cu;
    {
        const bool branch_taken_0x242a5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A5Cu;
        // 0x242a60: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a5c) {
            ctx->pc = 0x242B0Cu;
            goto label_242b0c;
        }
    }
    ctx->pc = 0x242A64u;
label_242a64:
    // 0x242a64: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_242a68:
    if (ctx->pc == 0x242A68u) {
        ctx->pc = 0x242A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A64u;
        // 0x242a68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A6Cu;
        goto label_242a6c;
    }
    ctx->pc = 0x242A64u;
    {
        const bool branch_taken_0x242a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A64u;
        // 0x242a68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a64) {
            ctx->pc = 0x242AC0u;
            goto label_242ac0;
        }
    }
    ctx->pc = 0x242A6Cu;
label_242a6c:
    // 0x242a6c: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x242a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242a70:
    // 0x242a70: 0x0  nop
    ctx->pc = 0x242a70u;
    // NOP
label_242a74:
    // 0x242a74: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_242a78:
    if (ctx->pc == 0x242A78u) {
        ctx->pc = 0x242A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A74u;
        // 0x242a78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A7Cu;
        goto label_242a7c;
    }
    ctx->pc = 0x242A74u;
    {
        const bool branch_taken_0x242a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A74u;
        // 0x242a78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a74) {
            ctx->pc = 0x242AA4u;
            goto label_242aa4;
        }
    }
    ctx->pc = 0x242A7Cu;
label_242a7c:
    // 0x242a7c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x242a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_242a80:
    // 0x242a80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x242a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_242a84:
    // 0x242a84: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x242a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_242a88:
    // 0x242a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_242a8c:
    if (ctx->pc == 0x242A8Cu) {
        ctx->pc = 0x242A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A88u;
        // 0x242a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A90u;
        goto label_242a90;
    }
    ctx->pc = 0x242A88u;
    {
        const bool branch_taken_0x242a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A88u;
        // 0x242a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a88) {
            ctx->pc = 0x242AA0u;
            goto label_242aa0;
        }
    }
    ctx->pc = 0x242A90u;
label_242a90:
    // 0x242a90: 0xc0899aa  jal         func_2266A8
label_242a94:
    if (ctx->pc == 0x242A94u) {
        ctx->pc = 0x242A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A90u;
        // 0x242a94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A98u;
        goto label_242a98;
    }
    ctx->pc = 0x242A90u;
    SET_GPR_U32(ctx, 31, 0x242A98u);
    ctx->pc = 0x242A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A90u;
    // 0x242a94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x242A90u, 0x242A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A98u;
label_242a98:
    // 0x242a98: 0x10000004  b           . + 4 + (0x4 << 2)
label_242a9c:
    if (ctx->pc == 0x242A9Cu) {
        ctx->pc = 0x242AA0u;
        goto label_242aa0;
    }
    ctx->pc = 0x242A98u;
    {
        const bool branch_taken_0x242a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242a98) {
            ctx->pc = 0x242AACu;
            goto label_242aac;
        }
    }
    ctx->pc = 0x242AA0u;
label_242aa0:
    // 0x242aa0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x242aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_242aa4:
    // 0x242aa4: 0xc44004d4  lwc1        $f0, 0x4D4($v0)
    ctx->pc = 0x242aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242aa8:
    // 0x242aa8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x242aa8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_242aac:
    // 0x242aac: 0xc0885b0  jal         func_2216C0
label_242ab0:
    if (ctx->pc == 0x242AB0u) {
        ctx->pc = 0x242AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AACu;
        // 0x242ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AB4u;
        goto label_242ab4;
    }
    ctx->pc = 0x242AACu;
    SET_GPR_U32(ctx, 31, 0x242AB4u);
    ctx->pc = 0x242AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AACu;
    // 0x242ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x242AACu, 0x242AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AB4u;
label_242ab4:
    // 0x242ab4: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x242ab4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_242ab8:
    // 0x242ab8: 0x10000030  b           . + 4 + (0x30 << 2)
label_242abc:
    if (ctx->pc == 0x242ABCu) {
        ctx->pc = 0x242AC0u;
        goto label_242ac0;
    }
    ctx->pc = 0x242AB8u;
    {
        const bool branch_taken_0x242ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ab8) {
            ctx->pc = 0x242B7Cu;
            goto label_242b7c;
        }
    }
    ctx->pc = 0x242AC0u;
label_242ac0:
    // 0x242ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242ac4:
    // 0x242ac4: 0xc44004d8  lwc1        $f0, 0x4D8($v0)
    ctx->pc = 0x242ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242ac8:
    // 0x242ac8: 0xc0885b0  jal         func_2216C0
label_242acc:
    if (ctx->pc == 0x242ACCu) {
        ctx->pc = 0x242ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AC8u;
        // 0x242acc: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AD0u;
        goto label_242ad0;
    }
    ctx->pc = 0x242AC8u;
    SET_GPR_U32(ctx, 31, 0x242AD0u);
    ctx->pc = 0x242ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AC8u;
    // 0x242acc: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x242AC8u, 0x242AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AD0u;
label_242ad0:
    // 0x242ad0: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x242ad0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_242ad4:
    // 0x242ad4: 0x0  nop
    ctx->pc = 0x242ad4u;
    // NOP
label_242ad8:
    // 0x242ad8: 0x0  nop
    ctx->pc = 0x242ad8u;
    // NOP
label_242adc:
    // 0x242adc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x242adcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_242ae0:
    // 0x242ae0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x242ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_242ae4:
    // 0x242ae4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x242ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_242ae8:
    // 0x242ae8: 0xc44304e0  lwc1        $f3, 0x4E0($v0)
    ctx->pc = 0x242ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242aec:
    // 0x242aec: 0xc46204e4  lwc1        $f2, 0x4E4($v1)
    ctx->pc = 0x242aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242af0:
    // 0x242af0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_242af4:
    // 0x242af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242af8:
    // 0x242af8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x242af8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_242afc:
    // 0x242afc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x242afcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_242b00:
    // 0x242b00: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x242b00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_242b04:
    // 0x242b04: 0x1000001d  b           . + 4 + (0x1D << 2)
label_242b08:
    if (ctx->pc == 0x242B08u) {
        ctx->pc = 0x242B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B04u;
        // 0x242b08: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B0Cu;
        goto label_242b0c;
    }
    ctx->pc = 0x242B04u;
    {
        const bool branch_taken_0x242b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B04u;
        // 0x242b08: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b04) {
            ctx->pc = 0x242B7Cu;
            goto label_242b7c;
        }
    }
    ctx->pc = 0x242B0Cu;
label_242b0c:
    // 0x242b0c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_242b10:
    if (ctx->pc == 0x242B10u) {
        ctx->pc = 0x242B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B0Cu;
        // 0x242b10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B14u;
        goto label_242b14;
    }
    ctx->pc = 0x242B0Cu;
    {
        const bool branch_taken_0x242b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B0Cu;
        // 0x242b10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b0c) {
            ctx->pc = 0x242B64u;
            goto label_242b64;
        }
    }
    ctx->pc = 0x242B14u;
label_242b14:
    // 0x242b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242b18:
    // 0x242b18: 0xc44004d8  lwc1        $f0, 0x4D8($v0)
    ctx->pc = 0x242b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242b1c:
    // 0x242b1c: 0xc0885b0  jal         func_2216C0
label_242b20:
    if (ctx->pc == 0x242B20u) {
        ctx->pc = 0x242B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B1Cu;
        // 0x242b20: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B24u;
        goto label_242b24;
    }
    ctx->pc = 0x242B1Cu;
    SET_GPR_U32(ctx, 31, 0x242B24u);
    ctx->pc = 0x242B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B1Cu;
    // 0x242b20: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x242B1Cu, 0x242B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B24u;
label_242b24:
    // 0x242b24: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x242b24u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_242b28:
    // 0x242b28: 0x0  nop
    ctx->pc = 0x242b28u;
    // NOP
label_242b2c:
    // 0x242b2c: 0x0  nop
    ctx->pc = 0x242b2cu;
    // NOP
label_242b30:
    // 0x242b30: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x242b30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_242b34:
    // 0x242b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x242b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_242b38:
    // 0x242b38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x242b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_242b3c:
    // 0x242b3c: 0xc44304e0  lwc1        $f3, 0x4E0($v0)
    ctx->pc = 0x242b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242b40:
    // 0x242b40: 0xc46204e4  lwc1        $f2, 0x4E4($v1)
    ctx->pc = 0x242b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242b44:
    // 0x242b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_242b48:
    // 0x242b48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242b4c:
    // 0x242b4c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x242b4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_242b50:
    // 0x242b50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x242b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_242b54:
    // 0x242b54: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x242b54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_242b58:
    // 0x242b58: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x242b58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_242b5c:
    // 0x242b5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_242b60:
    if (ctx->pc == 0x242B60u) {
        ctx->pc = 0x242B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B5Cu;
        // 0x242b60: 0x46001d47  neg.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B64u;
        goto label_242b64;
    }
    ctx->pc = 0x242B5Cu;
    {
        const bool branch_taken_0x242b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B5Cu;
        // 0x242b60: 0x46001d47  neg.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b5c) {
            ctx->pc = 0x242B7Cu;
            goto label_242b7c;
        }
    }
    ctx->pc = 0x242B64u;
label_242b64:
    // 0x242b64: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_242b68:
    if (ctx->pc == 0x242B68u) {
        ctx->pc = 0x242B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B64u;
        // 0x242b68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B6Cu;
        goto label_242b6c;
    }
    ctx->pc = 0x242B64u;
    {
        const bool branch_taken_0x242b64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x242B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B64u;
        // 0x242b68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b64) {
            ctx->pc = 0x242B84u;
            goto label_242b84;
        }
    }
    ctx->pc = 0x242B6Cu;
label_242b6c:
    // 0x242b6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x242b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_242b70:
    // 0x242b70: 0xc44004d8  lwc1        $f0, 0x4D8($v0)
    ctx->pc = 0x242b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242b74:
    // 0x242b74: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x242b74u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_242b78:
    // 0x242b78: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x242b78u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_242b7c:
    // 0x242b7c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_242b80:
    if (ctx->pc == 0x242B80u) {
        ctx->pc = 0x242B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B7Cu;
        // 0x242b80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B84u;
        goto label_242b84;
    }
    ctx->pc = 0x242B7Cu;
    {
        const bool branch_taken_0x242b7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B7Cu;
        // 0x242b80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b7c) {
            ctx->pc = 0x242B94u;
            goto label_242b94;
        }
    }
    ctx->pc = 0x242B84u;
label_242b84:
    // 0x242b84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x242b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242b88:
    // 0x242b88: 0xc44004dc  lwc1        $f0, 0x4DC($v0)
    ctx->pc = 0x242b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242b8c:
    // 0x242b8c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x242b8cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_242b90:
    // 0x242b90: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x242b90u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
label_242b94:
    // 0x242b94: 0x3c05110c  lui         $a1, 0x110C
    ctx->pc = 0x242b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
label_242b98:
    // 0x242b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242b9c:
    // 0x242b9c: 0xc089998  jal         func_226660
label_242ba0:
    if (ctx->pc == 0x242BA0u) {
        ctx->pc = 0x242BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B9Cu;
        // 0x242ba0: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BA4u;
        goto label_242ba4;
    }
    ctx->pc = 0x242B9Cu;
    SET_GPR_U32(ctx, 31, 0x242BA4u);
    ctx->pc = 0x242BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B9Cu;
    // 0x242ba0: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x242B9Cu, 0x242BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BA4u;
label_242ba4:
    // 0x242ba4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_242ba8:
    if (ctx->pc == 0x242BA8u) {
        ctx->pc = 0x242BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA4u;
        // 0x242ba8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BACu;
        goto label_242bac;
    }
    ctx->pc = 0x242BA4u;
    {
        const bool branch_taken_0x242ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA4u;
        // 0x242ba8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ba4) {
            ctx->pc = 0x242BCCu;
            goto label_242bcc;
        }
    }
    ctx->pc = 0x242BACu;
label_242bac:
    // 0x242bac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x242bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_242bb0:
    // 0x242bb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x242bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_242bb4:
    // 0x242bb4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_242bb8:
    // 0x242bb8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_242bbc:
    if (ctx->pc == 0x242BBCu) {
        ctx->pc = 0x242BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB8u;
        // 0x242bbc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BC0u;
        goto label_242bc0;
    }
    ctx->pc = 0x242BB8u;
    {
        const bool branch_taken_0x242bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x242BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB8u;
        // 0x242bbc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bb8) {
            ctx->pc = 0x242BC8u;
            goto label_242bc8;
        }
    }
    ctx->pc = 0x242BC0u;
label_242bc0:
    // 0x242bc0: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
label_242bc4:
    if (ctx->pc == 0x242BC4u) {
        ctx->pc = 0x242BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BC0u;
        // 0x242bc4: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BC8u;
        goto label_242bc8;
    }
    ctx->pc = 0x242BC0u;
    {
        const bool branch_taken_0x242bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x242bc0) {
            ctx->pc = 0x242BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242BC0u;
            // 0x242bc4: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242BDCu;
            goto label_242bdc;
        }
    }
    ctx->pc = 0x242BC8u;
label_242bc8:
    // 0x242bc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_242bcc:
    // 0x242bcc: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_242bd0:
    // 0x242bd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x242bd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242bd4:
    // 0x242bd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_242bd8:
    if (ctx->pc == 0x242BD8u) {
        ctx->pc = 0x242BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BD4u;
        // 0x242bd8: 0x7e830000  sq          $v1, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BDCu;
        goto label_242bdc;
    }
    ctx->pc = 0x242BD4u;
    {
        const bool branch_taken_0x242bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BD4u;
        // 0x242bd8: 0x7e830000  sq          $v1, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bd4) {
            ctx->pc = 0x242BE4u;
            goto label_242be4;
        }
    }
    ctx->pc = 0x242BDCu;
label_242bdc:
    // 0x242bdc: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x242bdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_242be0:
    // 0x242be0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x242be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_242be4:
    // 0x242be4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x242be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_242be8:
    // 0x242be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242bec:
    // 0x242bec: 0x0  nop
    ctx->pc = 0x242becu;
    // NOP
label_242bf0:
    // 0x242bf0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x242bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242bf4:
    // 0x242bf4: 0x0  nop
    ctx->pc = 0x242bf4u;
    // NOP
label_242bf8:
    // 0x242bf8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_242bfc:
    if (ctx->pc == 0x242BFCu) {
        ctx->pc = 0x242BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BF8u;
        // 0x242bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C00u;
        goto label_242c00;
    }
    ctx->pc = 0x242BF8u;
    {
        const bool branch_taken_0x242bf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BF8u;
        // 0x242bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bf8) {
            ctx->pc = 0x242C10u;
            goto label_242c10;
        }
    }
    ctx->pc = 0x242C00u;
label_242c00:
    // 0x242c00: 0xc09205c  jal         func_248170
label_242c04:
    if (ctx->pc == 0x242C04u) {
        ctx->pc = 0x242C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C00u;
        // 0x242c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C08u;
        goto label_242c08;
    }
    ctx->pc = 0x242C00u;
    SET_GPR_U32(ctx, 31, 0x242C08u);
    ctx->pc = 0x242C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C00u;
    // 0x242c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248170u, 0x242C00u, 0x242C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C08u;
label_242c08:
    // 0x242c08: 0x10000004  b           . + 4 + (0x4 << 2)
label_242c0c:
    if (ctx->pc == 0x242C0Cu) {
        ctx->pc = 0x242C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C08u;
        // 0x242c0c: 0x4615b580  add.s       $f22, $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C10u;
        goto label_242c10;
    }
    ctx->pc = 0x242C08u;
    {
        const bool branch_taken_0x242c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C08u;
        // 0x242c0c: 0x4615b580  add.s       $f22, $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c08) {
            ctx->pc = 0x242C1Cu;
            goto label_242c1c;
        }
    }
    ctx->pc = 0x242C10u;
label_242c10:
    // 0x242c10: 0xc09209c  jal         func_248270
label_242c14:
    if (ctx->pc == 0x242C14u) {
        ctx->pc = 0x242C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C10u;
        // 0x242c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C18u;
        goto label_242c18;
    }
    ctx->pc = 0x242C10u;
    SET_GPR_U32(ctx, 31, 0x242C18u);
    ctx->pc = 0x242C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C10u;
    // 0x242c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248270u, 0x242C10u, 0x242C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C18u;
label_242c18:
    // 0x242c18: 0x4615b580  add.s       $f22, $f22, $f21
    ctx->pc = 0x242c18u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_242c1c:
    // 0x242c1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x242c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_242c20:
    // 0x242c20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_242c24:
    // 0x242c24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_242c28:
    // 0x242c28: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x242c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_242c2c:
    // 0x242c2c: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x242c2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_242c30:
    // 0x242c30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x242c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_242c34:
    // 0x242c34: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x242c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_242c38:
    // 0x242c38: 0xc12e310  jal         func_4B8C40
label_242c3c:
    if (ctx->pc == 0x242C3Cu) {
        ctx->pc = 0x242C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C38u;
        // 0x242c3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C40u;
        goto label_242c40;
    }
    ctx->pc = 0x242C38u;
    SET_GPR_U32(ctx, 31, 0x242C40u);
    ctx->pc = 0x242C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C38u;
    // 0x242c3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x242C38u, 0x242C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C40u;
label_242c40:
    // 0x242c40: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x242c40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_242c44:
    // 0x242c44: 0xc12e29c  jal         func_4B8A70
label_242c48:
    if (ctx->pc == 0x242C48u) {
        ctx->pc = 0x242C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C44u;
        // 0x242c48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C4Cu;
        goto label_242c4c;
    }
    ctx->pc = 0x242C44u;
    SET_GPR_U32(ctx, 31, 0x242C4Cu);
    ctx->pc = 0x242C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C44u;
    // 0x242c48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x242C44u, 0x242C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C4Cu;
label_242c4c:
    // 0x242c4c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x242c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242c50:
    // 0x242c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x242c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242c54:
    // 0x242c54: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x242c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_242c58:
    // 0x242c58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x242c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_242c5c:
    // 0x242c5c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x242c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_242c60:
    // 0x242c60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242c60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242c64:
    // 0x242c64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x242c64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_242c68:
    // 0x242c68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x242c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242c6c:
    // 0x242c6c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x242c6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_242c70:
    // 0x242c70: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x242c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_242c74:
    // 0x242c74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x242c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242c78:
    // 0x242c78: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x242c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_242c7c:
    // 0x242c7c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x242c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242c80:
    // 0x242c80: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x242c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242c84:
    // 0x242c84: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x242c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242c88:
    // 0x242c88: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x242c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_242c8c:
    // 0x242c8c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x242c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_242c90:
    // 0x242c90: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x242c90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_242c94:
    // 0x242c94: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x242c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_242c98:
    // 0x242c98: 0xc136b30  jal         func_4DACC0
label_242c9c:
    if (ctx->pc == 0x242C9Cu) {
        ctx->pc = 0x242C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C98u;
        // 0x242c9c: 0xae000298  sw          $zero, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CA0u;
        goto label_242ca0;
    }
    ctx->pc = 0x242C98u;
    SET_GPR_U32(ctx, 31, 0x242CA0u);
    ctx->pc = 0x242C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C98u;
    // 0x242c9c: 0xae000298  sw          $zero, 0x298($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x242C98u, 0x242CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CA0u;
label_242ca0:
    // 0x242ca0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x242ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242ca4:
    // 0x242ca4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x242ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_242ca8:
    // 0x242ca8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x242ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_242cac:
    // 0x242cac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x242cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_242cb0:
    // 0x242cb0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x242cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_242cb4:
    // 0x242cb4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x242cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_242cb8:
    // 0x242cb8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x242cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_242cbc:
    // 0x242cbc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x242cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_242cc0:
    // 0x242cc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242cc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_242cc4:
    // 0x242cc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x242cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_242cc8:
    // 0x242cc8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x242cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_242ccc:
    // 0x242ccc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x242cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_242cd0:
    // 0x242cd0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x242cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_242cd4:
    // 0x242cd4: 0x3e00008  jr          $ra
label_242cd8:
    if (ctx->pc == 0x242CD8u) {
        ctx->pc = 0x242CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CD4u;
        // 0x242cd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CDCu;
        goto label_242cdc;
    }
    ctx->pc = 0x242CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CD4u;
        // 0x242cd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242CDCu;
label_242cdc:
    // 0x242cdc: 0x0  nop
    ctx->pc = 0x242cdcu;
    // NOP
    ctx->pc = 0x242ce0u;
}
