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

// Function: sub_00122728
// Address: 0x122728 - 0x122b80
void sub_00122728_0x122728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122728_0x122728");
#endif

    switch (ctx->pc) {
        case 0x122728u: goto label_122728;
        case 0x12272cu: goto label_12272c;
        case 0x122730u: goto label_122730;
        case 0x122734u: goto label_122734;
        case 0x122738u: goto label_122738;
        case 0x12273cu: goto label_12273c;
        case 0x122740u: goto label_122740;
        case 0x122744u: goto label_122744;
        case 0x122748u: goto label_122748;
        case 0x12274cu: goto label_12274c;
        case 0x122750u: goto label_122750;
        case 0x122754u: goto label_122754;
        case 0x122758u: goto label_122758;
        case 0x12275cu: goto label_12275c;
        case 0x122760u: goto label_122760;
        case 0x122764u: goto label_122764;
        case 0x122768u: goto label_122768;
        case 0x12276cu: goto label_12276c;
        case 0x122770u: goto label_122770;
        case 0x122774u: goto label_122774;
        case 0x122778u: goto label_122778;
        case 0x12277cu: goto label_12277c;
        case 0x122780u: goto label_122780;
        case 0x122784u: goto label_122784;
        case 0x122788u: goto label_122788;
        case 0x12278cu: goto label_12278c;
        case 0x122790u: goto label_122790;
        case 0x122794u: goto label_122794;
        case 0x122798u: goto label_122798;
        case 0x12279cu: goto label_12279c;
        case 0x1227a0u: goto label_1227a0;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227a8u: goto label_1227a8;
        case 0x1227acu: goto label_1227ac;
        case 0x1227b0u: goto label_1227b0;
        case 0x1227b4u: goto label_1227b4;
        case 0x1227b8u: goto label_1227b8;
        case 0x1227bcu: goto label_1227bc;
        case 0x1227c0u: goto label_1227c0;
        case 0x1227c4u: goto label_1227c4;
        case 0x1227c8u: goto label_1227c8;
        case 0x1227ccu: goto label_1227cc;
        case 0x1227d0u: goto label_1227d0;
        case 0x1227d4u: goto label_1227d4;
        case 0x1227d8u: goto label_1227d8;
        case 0x1227dcu: goto label_1227dc;
        case 0x1227e0u: goto label_1227e0;
        case 0x1227e4u: goto label_1227e4;
        case 0x1227e8u: goto label_1227e8;
        case 0x1227ecu: goto label_1227ec;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f4u: goto label_1227f4;
        case 0x1227f8u: goto label_1227f8;
        case 0x1227fcu: goto label_1227fc;
        case 0x122800u: goto label_122800;
        case 0x122804u: goto label_122804;
        case 0x122808u: goto label_122808;
        case 0x12280cu: goto label_12280c;
        case 0x122810u: goto label_122810;
        case 0x122814u: goto label_122814;
        case 0x122818u: goto label_122818;
        case 0x12281cu: goto label_12281c;
        case 0x122820u: goto label_122820;
        case 0x122824u: goto label_122824;
        case 0x122828u: goto label_122828;
        case 0x12282cu: goto label_12282c;
        case 0x122830u: goto label_122830;
        case 0x122834u: goto label_122834;
        case 0x122838u: goto label_122838;
        case 0x12283cu: goto label_12283c;
        case 0x122840u: goto label_122840;
        case 0x122844u: goto label_122844;
        case 0x122848u: goto label_122848;
        case 0x12284cu: goto label_12284c;
        case 0x122850u: goto label_122850;
        case 0x122854u: goto label_122854;
        case 0x122858u: goto label_122858;
        case 0x12285cu: goto label_12285c;
        case 0x122860u: goto label_122860;
        case 0x122864u: goto label_122864;
        case 0x122868u: goto label_122868;
        case 0x12286cu: goto label_12286c;
        case 0x122870u: goto label_122870;
        case 0x122874u: goto label_122874;
        case 0x122878u: goto label_122878;
        case 0x12287cu: goto label_12287c;
        case 0x122880u: goto label_122880;
        case 0x122884u: goto label_122884;
        case 0x122888u: goto label_122888;
        case 0x12288cu: goto label_12288c;
        case 0x122890u: goto label_122890;
        case 0x122894u: goto label_122894;
        case 0x122898u: goto label_122898;
        case 0x12289cu: goto label_12289c;
        case 0x1228a0u: goto label_1228a0;
        case 0x1228a4u: goto label_1228a4;
        case 0x1228a8u: goto label_1228a8;
        case 0x1228acu: goto label_1228ac;
        case 0x1228b0u: goto label_1228b0;
        case 0x1228b4u: goto label_1228b4;
        case 0x1228b8u: goto label_1228b8;
        case 0x1228bcu: goto label_1228bc;
        case 0x1228c0u: goto label_1228c0;
        case 0x1228c4u: goto label_1228c4;
        case 0x1228c8u: goto label_1228c8;
        case 0x1228ccu: goto label_1228cc;
        case 0x1228d0u: goto label_1228d0;
        case 0x1228d4u: goto label_1228d4;
        case 0x1228d8u: goto label_1228d8;
        case 0x1228dcu: goto label_1228dc;
        case 0x1228e0u: goto label_1228e0;
        case 0x1228e4u: goto label_1228e4;
        case 0x1228e8u: goto label_1228e8;
        case 0x1228ecu: goto label_1228ec;
        case 0x1228f0u: goto label_1228f0;
        case 0x1228f4u: goto label_1228f4;
        case 0x1228f8u: goto label_1228f8;
        case 0x1228fcu: goto label_1228fc;
        case 0x122900u: goto label_122900;
        case 0x122904u: goto label_122904;
        case 0x122908u: goto label_122908;
        case 0x12290cu: goto label_12290c;
        case 0x122910u: goto label_122910;
        case 0x122914u: goto label_122914;
        case 0x122918u: goto label_122918;
        case 0x12291cu: goto label_12291c;
        case 0x122920u: goto label_122920;
        case 0x122924u: goto label_122924;
        case 0x122928u: goto label_122928;
        case 0x12292cu: goto label_12292c;
        case 0x122930u: goto label_122930;
        case 0x122934u: goto label_122934;
        case 0x122938u: goto label_122938;
        case 0x12293cu: goto label_12293c;
        case 0x122940u: goto label_122940;
        case 0x122944u: goto label_122944;
        case 0x122948u: goto label_122948;
        case 0x12294cu: goto label_12294c;
        case 0x122950u: goto label_122950;
        case 0x122954u: goto label_122954;
        case 0x122958u: goto label_122958;
        case 0x12295cu: goto label_12295c;
        case 0x122960u: goto label_122960;
        case 0x122964u: goto label_122964;
        case 0x122968u: goto label_122968;
        case 0x12296cu: goto label_12296c;
        case 0x122970u: goto label_122970;
        case 0x122974u: goto label_122974;
        case 0x122978u: goto label_122978;
        case 0x12297cu: goto label_12297c;
        case 0x122980u: goto label_122980;
        case 0x122984u: goto label_122984;
        case 0x122988u: goto label_122988;
        case 0x12298cu: goto label_12298c;
        case 0x122990u: goto label_122990;
        case 0x122994u: goto label_122994;
        case 0x122998u: goto label_122998;
        case 0x12299cu: goto label_12299c;
        case 0x1229a0u: goto label_1229a0;
        case 0x1229a4u: goto label_1229a4;
        case 0x1229a8u: goto label_1229a8;
        case 0x1229acu: goto label_1229ac;
        case 0x1229b0u: goto label_1229b0;
        case 0x1229b4u: goto label_1229b4;
        case 0x1229b8u: goto label_1229b8;
        case 0x1229bcu: goto label_1229bc;
        case 0x1229c0u: goto label_1229c0;
        case 0x1229c4u: goto label_1229c4;
        case 0x1229c8u: goto label_1229c8;
        case 0x1229ccu: goto label_1229cc;
        case 0x1229d0u: goto label_1229d0;
        case 0x1229d4u: goto label_1229d4;
        case 0x1229d8u: goto label_1229d8;
        case 0x1229dcu: goto label_1229dc;
        case 0x1229e0u: goto label_1229e0;
        case 0x1229e4u: goto label_1229e4;
        case 0x1229e8u: goto label_1229e8;
        case 0x1229ecu: goto label_1229ec;
        case 0x1229f0u: goto label_1229f0;
        case 0x1229f4u: goto label_1229f4;
        case 0x1229f8u: goto label_1229f8;
        case 0x1229fcu: goto label_1229fc;
        case 0x122a00u: goto label_122a00;
        case 0x122a04u: goto label_122a04;
        case 0x122a08u: goto label_122a08;
        case 0x122a0cu: goto label_122a0c;
        case 0x122a10u: goto label_122a10;
        case 0x122a14u: goto label_122a14;
        case 0x122a18u: goto label_122a18;
        case 0x122a1cu: goto label_122a1c;
        case 0x122a20u: goto label_122a20;
        case 0x122a24u: goto label_122a24;
        case 0x122a28u: goto label_122a28;
        case 0x122a2cu: goto label_122a2c;
        case 0x122a30u: goto label_122a30;
        case 0x122a34u: goto label_122a34;
        case 0x122a38u: goto label_122a38;
        case 0x122a3cu: goto label_122a3c;
        case 0x122a40u: goto label_122a40;
        case 0x122a44u: goto label_122a44;
        case 0x122a48u: goto label_122a48;
        case 0x122a4cu: goto label_122a4c;
        case 0x122a50u: goto label_122a50;
        case 0x122a54u: goto label_122a54;
        case 0x122a58u: goto label_122a58;
        case 0x122a5cu: goto label_122a5c;
        case 0x122a60u: goto label_122a60;
        case 0x122a64u: goto label_122a64;
        case 0x122a68u: goto label_122a68;
        case 0x122a6cu: goto label_122a6c;
        case 0x122a70u: goto label_122a70;
        case 0x122a74u: goto label_122a74;
        case 0x122a78u: goto label_122a78;
        case 0x122a7cu: goto label_122a7c;
        case 0x122a80u: goto label_122a80;
        case 0x122a84u: goto label_122a84;
        case 0x122a88u: goto label_122a88;
        case 0x122a8cu: goto label_122a8c;
        case 0x122a90u: goto label_122a90;
        case 0x122a94u: goto label_122a94;
        case 0x122a98u: goto label_122a98;
        case 0x122a9cu: goto label_122a9c;
        case 0x122aa0u: goto label_122aa0;
        case 0x122aa4u: goto label_122aa4;
        case 0x122aa8u: goto label_122aa8;
        case 0x122aacu: goto label_122aac;
        case 0x122ab0u: goto label_122ab0;
        case 0x122ab4u: goto label_122ab4;
        case 0x122ab8u: goto label_122ab8;
        case 0x122abcu: goto label_122abc;
        case 0x122ac0u: goto label_122ac0;
        case 0x122ac4u: goto label_122ac4;
        case 0x122ac8u: goto label_122ac8;
        case 0x122accu: goto label_122acc;
        case 0x122ad0u: goto label_122ad0;
        case 0x122ad4u: goto label_122ad4;
        case 0x122ad8u: goto label_122ad8;
        case 0x122adcu: goto label_122adc;
        case 0x122ae0u: goto label_122ae0;
        case 0x122ae4u: goto label_122ae4;
        case 0x122ae8u: goto label_122ae8;
        case 0x122aecu: goto label_122aec;
        case 0x122af0u: goto label_122af0;
        case 0x122af4u: goto label_122af4;
        case 0x122af8u: goto label_122af8;
        case 0x122afcu: goto label_122afc;
        case 0x122b00u: goto label_122b00;
        case 0x122b04u: goto label_122b04;
        case 0x122b08u: goto label_122b08;
        case 0x122b0cu: goto label_122b0c;
        case 0x122b10u: goto label_122b10;
        case 0x122b14u: goto label_122b14;
        case 0x122b18u: goto label_122b18;
        case 0x122b1cu: goto label_122b1c;
        case 0x122b20u: goto label_122b20;
        case 0x122b24u: goto label_122b24;
        case 0x122b28u: goto label_122b28;
        case 0x122b2cu: goto label_122b2c;
        case 0x122b30u: goto label_122b30;
        case 0x122b34u: goto label_122b34;
        case 0x122b38u: goto label_122b38;
        case 0x122b3cu: goto label_122b3c;
        case 0x122b40u: goto label_122b40;
        case 0x122b44u: goto label_122b44;
        case 0x122b48u: goto label_122b48;
        case 0x122b4cu: goto label_122b4c;
        case 0x122b50u: goto label_122b50;
        case 0x122b54u: goto label_122b54;
        case 0x122b58u: goto label_122b58;
        case 0x122b5cu: goto label_122b5c;
        case 0x122b60u: goto label_122b60;
        case 0x122b64u: goto label_122b64;
        case 0x122b68u: goto label_122b68;
        case 0x122b6cu: goto label_122b6c;
        case 0x122b70u: goto label_122b70;
        case 0x122b74u: goto label_122b74;
        case 0x122b78u: goto label_122b78;
        case 0x122b7cu: goto label_122b7c;
        default: break;
    }

    ctx->pc = 0x122728u;

label_122728:
    // 0x122728: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x122728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_12272c:
    // 0x12272c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x12272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_122730:
    // 0x122730: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x122730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_122734:
    // 0x122734: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122738:
    // 0x122738: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x122738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_12273c:
    // 0x12273c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x12273cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_122740:
    // 0x122740: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x122740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_122744:
    // 0x122744: 0x16480b  movn        $t1, $zero, $s6
    ctx->pc = 0x122744u;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_122748:
    // 0x122748: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x122748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_12274c:
    // 0x12274c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12274cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122750:
    // 0x122750: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x122750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_122754:
    // 0x122754: 0x26500180  addiu       $s0, $s2, 0x180
    ctx->pc = 0x122754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_122758:
    // 0x122758: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x122758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_12275c:
    // 0x12275c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12275cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122760:
    // 0x122760: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x122760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_122764:
    // 0x122764: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x122764u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_122768:
    // 0x122768: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x122768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_12276c:
    // 0x12276c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_122770:
    // 0x122770: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x122770u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_122774:
    // 0x122774: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x122774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_122778:
    // 0x122778: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x122778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_12277c:
    // 0x12277c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12277cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122780:
    // 0x122780: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x122780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_122784:
    // 0x122784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122788:
    // 0x122788: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x122788u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_12278c:
    // 0x12278c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x12278cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122790:
    // 0x122790: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x122790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_122794:
    // 0x122794: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x122794u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122798:
    // 0x122798: 0xc136afa  jal         func_4DABE8
label_12279c:
    if (ctx->pc == 0x12279Cu) {
        ctx->pc = 0x12279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122798u;
        // 0x12279c: 0xafa90050  sw          $t1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1227A0u;
        goto label_1227a0;
    }
    ctx->pc = 0x122798u;
    SET_GPR_U32(ctx, 31, 0x1227A0u);
    ctx->pc = 0x12279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122798u;
    // 0x12279c: 0xafa90050  sw          $t1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x122798u, 0x1227A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227A0u;
label_1227a0:
    // 0x1227a0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1227a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1227a4:
    // 0x1227a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1227a8:
    // 0x1227a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1227a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1227ac:
    // 0x1227ac: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1227acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1227b0:
    // 0x1227b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1227b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1227b4:
    // 0x1227b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1227b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1227b8:
    // 0x1227b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1227b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1227bc:
    // 0x1227bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1227bcu;
    // VWAITQ (Q already resolved in this runtime)
label_1227c0:
    // 0x1227c0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1227c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1227c4:
    // 0x1227c4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1227c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1227c8:
    // 0x1227c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1227c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1227cc:
    // 0x1227cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1227ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1227d0:
    // 0x1227d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1227d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1227d4:
    // 0x1227d4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1227d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1227d8:
    // 0x1227d8: 0xc136afa  jal         func_4DABE8
label_1227dc:
    if (ctx->pc == 0x1227DCu) {
        ctx->pc = 0x1227DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227D8u;
        // 0x1227dc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1227E0u;
        goto label_1227e0;
    }
    ctx->pc = 0x1227D8u;
    SET_GPR_U32(ctx, 31, 0x1227E0u);
    ctx->pc = 0x1227DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227D8u;
    // 0x1227dc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1227D8u, 0x1227E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227E0u;
label_1227e0:
    // 0x1227e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1227e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1227e4:
    // 0x1227e4: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x1227e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1227e8:
    // 0x1227e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1227e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1227ec:
    // 0x1227ec: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1227ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1227f0:
    // 0x1227f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1227f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1227f4:
    // 0x1227f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1227f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1227f8:
    // 0x1227f8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1227f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1227fc:
    // 0x1227fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1227fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122800:
    // 0x122800: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x122800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_122804:
    // 0x122804: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x122804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122808:
    // 0x122808: 0x0  nop
    ctx->pc = 0x122808u;
    // NOP
label_12280c:
    // 0x12280c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_122810:
    if (ctx->pc == 0x122810u) {
        ctx->pc = 0x122810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12280Cu;
        // 0x122810: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122814u;
        goto label_122814;
    }
    ctx->pc = 0x12280Cu;
    {
        const bool branch_taken_0x12280c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12280Cu;
        // 0x122810: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12280c) {
            ctx->pc = 0x122818u;
            goto label_122818;
        }
    }
    ctx->pc = 0x122814u;
label_122814:
    // 0x122814: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x122814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122818:
    // 0x122818: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_12281c:
    if (ctx->pc == 0x12281Cu) {
        ctx->pc = 0x12281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122818u;
        // 0x12281c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122820u;
        goto label_122820;
    }
    ctx->pc = 0x122818u;
    {
        const bool branch_taken_0x122818 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122818u;
        // 0x12281c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122818) {
            ctx->pc = 0x122824u;
            goto label_122824;
        }
    }
    ctx->pc = 0x122820u;
label_122820:
    // 0x122820: 0x86950092  lh          $s5, 0x92($s4)
    ctx->pc = 0x122820u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_122824:
    // 0x122824: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_122828:
    if (ctx->pc == 0x122828u) {
        ctx->pc = 0x122828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122824u;
        // 0x122828: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12282Cu;
        goto label_12282c;
    }
    ctx->pc = 0x122824u;
    {
        const bool branch_taken_0x122824 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x122828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122824u;
        // 0x122828: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122824) {
            ctx->pc = 0x122830u;
            goto label_122830;
        }
    }
    ctx->pc = 0x12282Cu;
label_12282c:
    // 0x12282c: 0x86740092  lh          $s4, 0x92($s3)
    ctx->pc = 0x12282cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_122830:
    // 0x122830: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x122830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_122834:
    // 0x122834: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x122834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122838:
    // 0x122838: 0x527500be  beql        $s3, $s5, . + 4 + (0xBE << 2)
label_12283c:
    if (ctx->pc == 0x12283Cu) {
        ctx->pc = 0x12283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122838u;
        // 0x12283c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122840u;
        goto label_122840;
    }
    ctx->pc = 0x122838u;
    {
        const bool branch_taken_0x122838 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x122838) {
            ctx->pc = 0x12283Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122838u;
            // 0x12283c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x122840u;
label_122840:
    // 0x122840: 0x127400bb  beq         $s3, $s4, . + 4 + (0xBB << 2)
label_122844:
    if (ctx->pc == 0x122844u) {
        ctx->pc = 0x122844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122840u;
        // 0x122844: 0x132400  sll         $a0, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122848u;
        goto label_122848;
    }
    ctx->pc = 0x122840u;
    {
        const bool branch_taken_0x122840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x122844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122840u;
        // 0x122844: 0x132400  sll         $a0, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122840) {
            ctx->pc = 0x122B30u;
            goto label_122b30;
        }
    }
    ctx->pc = 0x122848u;
label_122848:
    // 0x122848: 0xc0e402c  jal         func_3900B0
label_12284c:
    if (ctx->pc == 0x12284Cu) {
        ctx->pc = 0x12284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122848u;
        // 0x12284c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122850u;
        goto label_122850;
    }
    ctx->pc = 0x122848u;
    SET_GPR_U32(ctx, 31, 0x122850u);
    ctx->pc = 0x12284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122848u;
    // 0x12284c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x122848u, 0x122850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122850u;
label_122850:
    // 0x122850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122854:
    // 0x122854: 0x120000b6  beqz        $s0, . + 4 + (0xB6 << 2)
label_122858:
    if (ctx->pc == 0x122858u) {
        ctx->pc = 0x122858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122854u;
        // 0x122858: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12285Cu;
        goto label_12285c;
    }
    ctx->pc = 0x122854u;
    {
        const bool branch_taken_0x122854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122854u;
        // 0x122858: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122854) {
            ctx->pc = 0x122B30u;
            goto label_122b30;
        }
    }
    ctx->pc = 0x12285Cu;
label_12285c:
    // 0x12285c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x12285cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_122860:
    // 0x122860: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x122860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_122864:
    // 0x122864: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x122864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_122868:
    // 0x122868: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x122868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12286c:
    // 0x12286c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12286cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122870:
    // 0x122870: 0xc136afa  jal         func_4DABE8
label_122874:
    if (ctx->pc == 0x122874u) {
        ctx->pc = 0x122874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122870u;
        // 0x122874: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122878u;
        goto label_122878;
    }
    ctx->pc = 0x122870u;
    SET_GPR_U32(ctx, 31, 0x122878u);
    ctx->pc = 0x122874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122870u;
    // 0x122874: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x122870u, 0x122878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122878u;
label_122878:
    // 0x122878: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x122878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12287c:
    // 0x12287c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122880:
    // 0x122880: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x122880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_122884:
    // 0x122884: 0xc086624  jal         func_219890
label_122888:
    if (ctx->pc == 0x122888u) {
        ctx->pc = 0x122888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122884u;
        // 0x122888: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12288Cu;
        goto label_12288c;
    }
    ctx->pc = 0x122884u;
    SET_GPR_U32(ctx, 31, 0x12288Cu);
    ctx->pc = 0x122888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122884u;
    // 0x122888: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x122884u, 0x12288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12288Cu;
label_12288c:
    // 0x12288c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12288cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122890:
    // 0x122890: 0xc086618  jal         func_219860
label_122894:
    if (ctx->pc == 0x122894u) {
        ctx->pc = 0x122894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122890u;
        // 0x122894: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122898u;
        goto label_122898;
    }
    ctx->pc = 0x122890u;
    SET_GPR_U32(ctx, 31, 0x122898u);
    ctx->pc = 0x122894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122890u;
    // 0x122894: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x122890u, 0x122898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122898u;
label_122898:
    // 0x122898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12289c:
    // 0x12289c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12289cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1228a0:
    // 0x1228a0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x1228a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_1228a4:
    // 0x1228a4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1228a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_1228a8:
    // 0x1228a8: 0x40f809  jalr        $v0
label_1228ac:
    if (ctx->pc == 0x1228ACu) {
        ctx->pc = 0x1228ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228A8u;
        // 0x1228ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1228B0u;
        goto label_1228b0;
    }
    ctx->pc = 0x1228A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1228B0u);
        ctx->pc = 0x1228ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228A8u;
        // 0x1228ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1228A8u, 0x1228B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1228B0u;
label_1228b0:
    // 0x1228b0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1228b4:
    if (ctx->pc == 0x1228B4u) {
        ctx->pc = 0x1228B8u;
        goto label_1228b8;
    }
    ctx->pc = 0x1228B0u;
    {
        const bool branch_taken_0x1228b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228b0) {
            ctx->pc = 0x12290Cu;
            goto label_12290c;
        }
    }
    ctx->pc = 0x1228B8u;
label_1228b8:
    // 0x1228b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1228bc:
    // 0x1228bc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x1228bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_1228c0:
    // 0x1228c0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1228c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_1228c4:
    // 0x1228c4: 0x40f809  jalr        $v0
label_1228c8:
    if (ctx->pc == 0x1228C8u) {
        ctx->pc = 0x1228C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228C4u;
        // 0x1228c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1228CCu;
        goto label_1228cc;
    }
    ctx->pc = 0x1228C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1228CCu);
        ctx->pc = 0x1228C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228C4u;
        // 0x1228c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1228C4u, 0x1228CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1228CCu;
label_1228cc:
    // 0x1228cc: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x1228ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1228d0:
    // 0x1228d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1228d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1228d4:
    // 0x1228d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1228d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1228d8:
    // 0x1228d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1228d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1228dc:
    // 0x1228dc: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_1228e0:
    // 0x1228e0: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x1228e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_1228e4:
    // 0x1228e4: 0x60f809  jalr        $v1
label_1228e8:
    if (ctx->pc == 0x1228E8u) {
        ctx->pc = 0x1228E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228E4u;
        // 0x1228e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1228ECu;
        goto label_1228ec;
    }
    ctx->pc = 0x1228E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1228ECu);
        ctx->pc = 0x1228E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228E4u;
        // 0x1228e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1228E4u, 0x1228ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1228ECu;
label_1228ec:
    // 0x1228ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1228ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1228f0:
    // 0x1228f0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1228f4:
    if (ctx->pc == 0x1228F4u) {
        ctx->pc = 0x1228F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228F0u;
        // 0x1228f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1228F8u;
        goto label_1228f8;
    }
    ctx->pc = 0x1228F0u;
    {
        const bool branch_taken_0x1228f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228F0u;
        // 0x1228f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228f0) {
            ctx->pc = 0x12290Cu;
            goto label_12290c;
        }
    }
    ctx->pc = 0x1228F8u;
label_1228f8:
    // 0x1228f8: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x1228f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_1228fc:
    // 0x1228fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_122900:
    if (ctx->pc == 0x122900u) {
        ctx->pc = 0x122904u;
        goto label_122904;
    }
    ctx->pc = 0x1228FCu;
    {
        const bool branch_taken_0x1228fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1228fc) {
            ctx->pc = 0x12290Cu;
            goto label_12290c;
        }
    }
    ctx->pc = 0x122904u;
label_122904:
    // 0x122904: 0xc4950040  lwc1        $f21, 0x40($a0)
    ctx->pc = 0x122904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_122908:
    // 0x122908: 0xc4940044  lwc1        $f20, 0x44($a0)
    ctx->pc = 0x122908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12290c:
    // 0x12290c: 0xc087408  jal         func_21D020
label_122910:
    if (ctx->pc == 0x122910u) {
        ctx->pc = 0x122910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12290Cu;
        // 0x122910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122914u;
        goto label_122914;
    }
    ctx->pc = 0x12290Cu;
    SET_GPR_U32(ctx, 31, 0x122914u);
    ctx->pc = 0x122910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12290Cu;
    // 0x122910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x12290Cu, 0x122914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122914u;
label_122914:
    // 0x122914: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x122914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
label_122918:
    // 0x122918: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x122918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_12291c:
    // 0x12291c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12291cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122920:
    // 0x122920: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x122920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_122924:
    // 0x122924: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_122928:
    // 0x122928: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x122928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_12292c:
    // 0x12292c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_122930:
    // 0x122930: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x122930u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_122934:
    // 0x122934: 0x60f809  jalr        $v1
label_122938:
    if (ctx->pc == 0x122938u) {
        ctx->pc = 0x122938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122934u;
        // 0x122938: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12293Cu;
        goto label_12293c;
    }
    ctx->pc = 0x122934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12293Cu);
        ctx->pc = 0x122938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122934u;
        // 0x122938: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122934u, 0x12293Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12293Cu;
label_12293c:
    // 0x12293c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12293cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122940:
    // 0x122940: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x122940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_122944:
    // 0x122944: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x122944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_122948:
    // 0x122948: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x122948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12294c:
    // 0x12294c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12294cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122950:
    // 0x122950: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x122950u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_122954:
    // 0x122954: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x122954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122958:
    // 0x122958: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x122958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12295c:
    // 0x12295c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12295cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122960:
    // 0x122960: 0x0  nop
    ctx->pc = 0x122960u;
    // NOP
label_122964:
    // 0x122964: 0x45020073  bc1fl       . + 4 + (0x73 << 2)
label_122968:
    if (ctx->pc == 0x122968u) {
        ctx->pc = 0x122968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122964u;
        // 0x122968: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12296Cu;
        goto label_12296c;
    }
    ctx->pc = 0x122964u;
    {
        const bool branch_taken_0x122964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122964) {
            ctx->pc = 0x122968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122964u;
            // 0x122968: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x12296Cu;
label_12296c:
    // 0x12296c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_122970:
    // 0x122970: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x122970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_122974:
    // 0x122974: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x122974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_122978:
    // 0x122978: 0x60f809  jalr        $v1
label_12297c:
    if (ctx->pc == 0x12297Cu) {
        ctx->pc = 0x12297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122978u;
        // 0x12297c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122980u;
        goto label_122980;
    }
    ctx->pc = 0x122978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122980u);
        ctx->pc = 0x12297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122978u;
        // 0x12297c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122978u, 0x122980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122980u;
label_122980:
    // 0x122980: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x122980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122984:
    // 0x122984: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x122984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122988:
    // 0x122988: 0x0  nop
    ctx->pc = 0x122988u;
    // NOP
label_12298c:
    // 0x12298c: 0x45030069  bc1tl       . + 4 + (0x69 << 2)
label_122990:
    if (ctx->pc == 0x122990u) {
        ctx->pc = 0x122990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12298Cu;
        // 0x122990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122994u;
        goto label_122994;
    }
    ctx->pc = 0x12298Cu;
    {
        const bool branch_taken_0x12298c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12298c) {
            ctx->pc = 0x122990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12298Cu;
            // 0x122990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x122994u;
label_122994:
    // 0x122994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x122994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_122998:
    // 0x122998: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x122998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_12299c:
    // 0x12299c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x12299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1229a0:
    // 0x1229a0: 0x60f809  jalr        $v1
label_1229a4:
    if (ctx->pc == 0x1229A4u) {
        ctx->pc = 0x1229A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229A0u;
        // 0x1229a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1229A8u;
        goto label_1229a8;
    }
    ctx->pc = 0x1229A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1229A8u);
        ctx->pc = 0x1229A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229A0u;
        // 0x1229a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1229A0u, 0x1229A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1229A8u;
label_1229a8:
    // 0x1229a8: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x1229a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_1229ac:
    // 0x1229ac: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1229acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1229b0:
    // 0x1229b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1229b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1229b4:
    // 0x1229b4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1229b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1229b8:
    // 0x1229b8: 0x0  nop
    ctx->pc = 0x1229b8u;
    // NOP
label_1229bc:
    // 0x1229bc: 0x4503005d  bc1tl       . + 4 + (0x5D << 2)
label_1229c0:
    if (ctx->pc == 0x1229C0u) {
        ctx->pc = 0x1229C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229BCu;
        // 0x1229c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1229C4u;
        goto label_1229c4;
    }
    ctx->pc = 0x1229BCu;
    {
        const bool branch_taken_0x1229bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1229bc) {
            ctx->pc = 0x1229C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1229BCu;
            // 0x1229c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1229c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1229c8:
    // 0x1229c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1229cc:
    // 0x1229cc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1229ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1229d0:
    // 0x1229d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1229d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1229d4:
    // 0x1229d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1229d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1229d8:
    // 0x1229d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1229d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1229dc:
    // 0x1229dc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x1229dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1229e0:
    // 0x1229e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1229e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1229e4:
    // 0x1229e4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1229e4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_1229e8:
    // 0x1229e8: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x1229e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1229ec:
    // 0x1229ec: 0x16c40005  bne         $s6, $a0, . + 4 + (0x5 << 2)
label_1229f0:
    if (ctx->pc == 0x1229F0u) {
        ctx->pc = 0x1229F4u;
        goto label_1229f4;
    }
    ctx->pc = 0x1229ECu;
    {
        const bool branch_taken_0x1229ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x1229ec) {
            ctx->pc = 0x122A04u;
            goto label_122a04;
        }
    }
    ctx->pc = 0x1229F4u;
label_1229f4:
    // 0x1229f4: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x1229f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1229f8:
    // 0x1229f8: 0x0  nop
    ctx->pc = 0x1229f8u;
    // NOP
label_1229fc:
    // 0x1229fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_122a00:
    if (ctx->pc == 0x122A00u) {
        ctx->pc = 0x122A04u;
        goto label_122a04;
    }
    ctx->pc = 0x1229FCu;
    {
        const bool branch_taken_0x1229fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1229fc) {
            ctx->pc = 0x122A0Cu;
            goto label_122a0c;
        }
    }
    ctx->pc = 0x122A04u;
label_122a04:
    // 0x122a04: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_122a08:
    if (ctx->pc == 0x122A08u) {
        ctx->pc = 0x122A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A04u;
        // 0x122a08: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A0Cu;
        goto label_122a0c;
    }
    ctx->pc = 0x122A04u;
    {
        const bool branch_taken_0x122a04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A04u;
        // 0x122a08: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a04) {
            ctx->pc = 0x122A24u;
            goto label_122a24;
        }
    }
    ctx->pc = 0x122A0Cu;
label_122a0c:
    // 0x122a0c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x122a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_122a10:
    // 0x122a10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122a14:
    // 0x122a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x122a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122a18:
    // 0x122a18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122a1c:
    // 0x122a1c: 0x1000000b  b           . + 4 + (0xB << 2)
label_122a20:
    if (ctx->pc == 0x122A20u) {
        ctx->pc = 0x122A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A1Cu;
        // 0x122a20: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A24u;
        goto label_122a24;
    }
    ctx->pc = 0x122A1Cu;
    {
        const bool branch_taken_0x122a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A1Cu;
        // 0x122a20: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a1c) {
            ctx->pc = 0x122A4Cu;
            goto label_122a4c;
        }
    }
    ctx->pc = 0x122A24u;
label_122a24:
    // 0x122a24: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_122a28:
    if (ctx->pc == 0x122A28u) {
        ctx->pc = 0x122A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A24u;
        // 0x122a28: 0x7a220000  lq          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A2Cu;
        goto label_122a2c;
    }
    ctx->pc = 0x122A24u;
    {
        const bool branch_taken_0x122a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a24) {
            ctx->pc = 0x122A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122A24u;
            // 0x122a28: 0x7a220000  lq          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122A58u;
            goto label_122a58;
        }
    }
    ctx->pc = 0x122A2Cu;
label_122a2c:
    // 0x122a2c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x122a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122a30:
    // 0x122a30: 0x0  nop
    ctx->pc = 0x122a30u;
    // NOP
label_122a34:
    // 0x122a34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_122a38:
    if (ctx->pc == 0x122A38u) {
        ctx->pc = 0x122A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A34u;
        // 0x122a38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A3Cu;
        goto label_122a3c;
    }
    ctx->pc = 0x122A34u;
    {
        const bool branch_taken_0x122a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A34u;
        // 0x122a38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a34) {
            ctx->pc = 0x122A54u;
            goto label_122a54;
        }
    }
    ctx->pc = 0x122A3Cu;
label_122a3c:
    // 0x122a3c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x122a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_122a40:
    // 0x122a40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122a44:
    // 0x122a44: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x122a44u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_122a48:
    // 0x122a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122a4c:
    // 0x122a4c: 0xc136b24  jal         func_4DAC90
label_122a50:
    if (ctx->pc == 0x122A50u) {
        ctx->pc = 0x122A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A4Cu;
        // 0x122a50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A54u;
        goto label_122a54;
    }
    ctx->pc = 0x122A4Cu;
    SET_GPR_U32(ctx, 31, 0x122A54u);
    ctx->pc = 0x122A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A4Cu;
    // 0x122a50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x122A4Cu, 0x122A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A54u;
label_122a54:
    // 0x122a54: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x122a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_122a58:
    // 0x122a58: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x122a58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_122a5c:
    // 0x122a5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x122a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_122a60:
    // 0x122a60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122a64:
    // 0x122a64: 0xc136b24  jal         func_4DAC90
label_122a68:
    if (ctx->pc == 0x122A68u) {
        ctx->pc = 0x122A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A64u;
        // 0x122a68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A6Cu;
        goto label_122a6c;
    }
    ctx->pc = 0x122A64u;
    SET_GPR_U32(ctx, 31, 0x122A6Cu);
    ctx->pc = 0x122A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A64u;
    // 0x122a68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x122A64u, 0x122A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A6Cu;
label_122a6c:
    // 0x122a6c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x122a6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122a70:
    // 0x122a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122a74:
    // 0x122a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122a78:
    // 0x122a78: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x122a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_122a7c:
    // 0x122a7c: 0xc136b18  jal         func_4DAC60
label_122a80:
    if (ctx->pc == 0x122A80u) {
        ctx->pc = 0x122A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A7Cu;
        // 0x122a80: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A84u;
        goto label_122a84;
    }
    ctx->pc = 0x122A7Cu;
    SET_GPR_U32(ctx, 31, 0x122A84u);
    ctx->pc = 0x122A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A7Cu;
    // 0x122a80: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x122A7Cu, 0x122A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A84u;
label_122a84:
    // 0x122a84: 0x5600002b  bnel        $s0, $zero, . + 4 + (0x2B << 2)
label_122a88:
    if (ctx->pc == 0x122A88u) {
        ctx->pc = 0x122A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A84u;
        // 0x122a88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A8Cu;
        goto label_122a8c;
    }
    ctx->pc = 0x122A84u;
    {
        const bool branch_taken_0x122a84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a84) {
            ctx->pc = 0x122A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122A84u;
            // 0x122a88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x122A8Cu;
label_122a8c:
    // 0x122a8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x122a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_122a90:
    // 0x122a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122a94:
    // 0x122a94: 0xc136afa  jal         func_4DABE8
label_122a98:
    if (ctx->pc == 0x122A98u) {
        ctx->pc = 0x122A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A94u;
        // 0x122a98: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A9Cu;
        goto label_122a9c;
    }
    ctx->pc = 0x122A94u;
    SET_GPR_U32(ctx, 31, 0x122A9Cu);
    ctx->pc = 0x122A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A94u;
    // 0x122a98: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x122A94u, 0x122A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A9Cu;
label_122a9c:
    // 0x122a9c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x122a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122aa0:
    // 0x122aa0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x122aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_122aa4:
    // 0x122aa4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x122aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122aa8:
    // 0x122aa8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x122aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122aac:
    // 0x122aac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x122aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122ab0:
    // 0x122ab0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x122ab0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_122ab4:
    // 0x122ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122ab8:
    // 0x122ab8: 0x0  nop
    ctx->pc = 0x122ab8u;
    // NOP
label_122abc:
    // 0x122abc: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x122abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122ac0:
    // 0x122ac0: 0x0  nop
    ctx->pc = 0x122ac0u;
    // NOP
label_122ac4:
    // 0x122ac4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_122ac8:
    if (ctx->pc == 0x122AC8u) {
        ctx->pc = 0x122AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AC4u;
        // 0x122ac8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122ACCu;
        goto label_122acc;
    }
    ctx->pc = 0x122AC4u;
    {
        const bool branch_taken_0x122ac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AC4u;
        // 0x122ac8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ac4) {
            ctx->pc = 0x122B30u;
            goto label_122b30;
        }
    }
    ctx->pc = 0x122ACCu;
label_122acc:
    // 0x122acc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x122accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_122ad0:
    // 0x122ad0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122ad4:
    // 0x122ad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x122ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122ad8:
    // 0x122ad8: 0xc136b24  jal         func_4DAC90
label_122adc:
    if (ctx->pc == 0x122ADCu) {
        ctx->pc = 0x122ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AD8u;
        // 0x122adc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122AE0u;
        goto label_122ae0;
    }
    ctx->pc = 0x122AD8u;
    SET_GPR_U32(ctx, 31, 0x122AE0u);
    ctx->pc = 0x122ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AD8u;
    // 0x122adc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x122AD8u, 0x122AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AE0u;
label_122ae0:
    // 0x122ae0: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x122ae0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122ae4:
    // 0x122ae4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x122ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_122ae8:
    // 0x122ae8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x122ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_122aec:
    // 0x122aec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122af0:
    // 0x122af0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x122af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_122af4:
    // 0x122af4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x122af4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_122af8:
    // 0x122af8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x122af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122afc:
    // 0x122afc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x122afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122b00:
    // 0x122b00: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x122b00u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_122b04:
    // 0x122b04: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x122b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_122b08:
    // 0x122b08: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x122b08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122b0c:
    // 0x122b0c: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x122b0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_122b10:
    // 0x122b10: 0xc136b24  jal         func_4DAC90
label_122b14:
    if (ctx->pc == 0x122B14u) {
        ctx->pc = 0x122B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B10u;
        // 0x122b14: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B18u;
        goto label_122b18;
    }
    ctx->pc = 0x122B10u;
    SET_GPR_U32(ctx, 31, 0x122B18u);
    ctx->pc = 0x122B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B10u;
    // 0x122b14: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x122B10u, 0x122B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B18u;
label_122b18:
    // 0x122b18: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x122b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122b1c:
    // 0x122b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122b20:
    // 0x122b20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122b24:
    // 0x122b24: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x122b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_122b28:
    // 0x122b28: 0xc136b18  jal         func_4DAC60
label_122b2c:
    if (ctx->pc == 0x122B2Cu) {
        ctx->pc = 0x122B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B28u;
        // 0x122b2c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B30u;
        goto label_122b30;
    }
    ctx->pc = 0x122B28u;
    SET_GPR_U32(ctx, 31, 0x122B30u);
    ctx->pc = 0x122B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B28u;
    // 0x122b2c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x122B28u, 0x122B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B30u;
label_122b30:
    // 0x122b30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x122b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_122b34:
    // 0x122b34: 0x2a62003c  slti        $v0, $s3, 0x3C
    ctx->pc = 0x122b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)60) ? 1 : 0);
label_122b38:
    // 0x122b38: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
label_122b3c:
    if (ctx->pc == 0x122B3Cu) {
        ctx->pc = 0x122B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B38u;
        // 0x122b3c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B40u;
        goto label_122b40;
    }
    ctx->pc = 0x122B38u;
    {
        const bool branch_taken_0x122b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B38u;
        // 0x122b3c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b38) {
            ctx->pc = 0x122838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122838;
        }
    }
    ctx->pc = 0x122B40u;
label_122b40:
    // 0x122b40: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x122b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_122b44:
    // 0x122b44: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x122b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_122b48:
    // 0x122b48: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x122b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_122b4c:
    // 0x122b4c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x122b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_122b50:
    // 0x122b50: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x122b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_122b54:
    // 0x122b54: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x122b54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_122b58:
    // 0x122b58: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x122b58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_122b5c:
    // 0x122b5c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x122b5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_122b60:
    // 0x122b60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_122b64:
    // 0x122b64: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x122b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_122b68:
    // 0x122b68: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x122b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_122b6c:
    // 0x122b6c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x122b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_122b70:
    // 0x122b70: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x122b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_122b74:
    // 0x122b74: 0x3e00008  jr          $ra
label_122b78:
    if (ctx->pc == 0x122B78u) {
        ctx->pc = 0x122B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B74u;
        // 0x122b78: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B7Cu;
        goto label_122b7c;
    }
    ctx->pc = 0x122B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B74u;
        // 0x122b78: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122B7Cu;
label_122b7c:
    // 0x122b7c: 0x0  nop
    ctx->pc = 0x122b7cu;
    // NOP
    ctx->pc = 0x122b80u;
}
