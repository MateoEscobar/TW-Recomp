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

// Function: sub_00201680
// Address: 0x201680 - 0x201b50
void sub_00201680_0x201680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201680_0x201680");
#endif

    switch (ctx->pc) {
        case 0x201680u: goto label_201680;
        case 0x201684u: goto label_201684;
        case 0x201688u: goto label_201688;
        case 0x20168cu: goto label_20168c;
        case 0x201690u: goto label_201690;
        case 0x201694u: goto label_201694;
        case 0x201698u: goto label_201698;
        case 0x20169cu: goto label_20169c;
        case 0x2016a0u: goto label_2016a0;
        case 0x2016a4u: goto label_2016a4;
        case 0x2016a8u: goto label_2016a8;
        case 0x2016acu: goto label_2016ac;
        case 0x2016b0u: goto label_2016b0;
        case 0x2016b4u: goto label_2016b4;
        case 0x2016b8u: goto label_2016b8;
        case 0x2016bcu: goto label_2016bc;
        case 0x2016c0u: goto label_2016c0;
        case 0x2016c4u: goto label_2016c4;
        case 0x2016c8u: goto label_2016c8;
        case 0x2016ccu: goto label_2016cc;
        case 0x2016d0u: goto label_2016d0;
        case 0x2016d4u: goto label_2016d4;
        case 0x2016d8u: goto label_2016d8;
        case 0x2016dcu: goto label_2016dc;
        case 0x2016e0u: goto label_2016e0;
        case 0x2016e4u: goto label_2016e4;
        case 0x2016e8u: goto label_2016e8;
        case 0x2016ecu: goto label_2016ec;
        case 0x2016f0u: goto label_2016f0;
        case 0x2016f4u: goto label_2016f4;
        case 0x2016f8u: goto label_2016f8;
        case 0x2016fcu: goto label_2016fc;
        case 0x201700u: goto label_201700;
        case 0x201704u: goto label_201704;
        case 0x201708u: goto label_201708;
        case 0x20170cu: goto label_20170c;
        case 0x201710u: goto label_201710;
        case 0x201714u: goto label_201714;
        case 0x201718u: goto label_201718;
        case 0x20171cu: goto label_20171c;
        case 0x201720u: goto label_201720;
        case 0x201724u: goto label_201724;
        case 0x201728u: goto label_201728;
        case 0x20172cu: goto label_20172c;
        case 0x201730u: goto label_201730;
        case 0x201734u: goto label_201734;
        case 0x201738u: goto label_201738;
        case 0x20173cu: goto label_20173c;
        case 0x201740u: goto label_201740;
        case 0x201744u: goto label_201744;
        case 0x201748u: goto label_201748;
        case 0x20174cu: goto label_20174c;
        case 0x201750u: goto label_201750;
        case 0x201754u: goto label_201754;
        case 0x201758u: goto label_201758;
        case 0x20175cu: goto label_20175c;
        case 0x201760u: goto label_201760;
        case 0x201764u: goto label_201764;
        case 0x201768u: goto label_201768;
        case 0x20176cu: goto label_20176c;
        case 0x201770u: goto label_201770;
        case 0x201774u: goto label_201774;
        case 0x201778u: goto label_201778;
        case 0x20177cu: goto label_20177c;
        case 0x201780u: goto label_201780;
        case 0x201784u: goto label_201784;
        case 0x201788u: goto label_201788;
        case 0x20178cu: goto label_20178c;
        case 0x201790u: goto label_201790;
        case 0x201794u: goto label_201794;
        case 0x201798u: goto label_201798;
        case 0x20179cu: goto label_20179c;
        case 0x2017a0u: goto label_2017a0;
        case 0x2017a4u: goto label_2017a4;
        case 0x2017a8u: goto label_2017a8;
        case 0x2017acu: goto label_2017ac;
        case 0x2017b0u: goto label_2017b0;
        case 0x2017b4u: goto label_2017b4;
        case 0x2017b8u: goto label_2017b8;
        case 0x2017bcu: goto label_2017bc;
        case 0x2017c0u: goto label_2017c0;
        case 0x2017c4u: goto label_2017c4;
        case 0x2017c8u: goto label_2017c8;
        case 0x2017ccu: goto label_2017cc;
        case 0x2017d0u: goto label_2017d0;
        case 0x2017d4u: goto label_2017d4;
        case 0x2017d8u: goto label_2017d8;
        case 0x2017dcu: goto label_2017dc;
        case 0x2017e0u: goto label_2017e0;
        case 0x2017e4u: goto label_2017e4;
        case 0x2017e8u: goto label_2017e8;
        case 0x2017ecu: goto label_2017ec;
        case 0x2017f0u: goto label_2017f0;
        case 0x2017f4u: goto label_2017f4;
        case 0x2017f8u: goto label_2017f8;
        case 0x2017fcu: goto label_2017fc;
        case 0x201800u: goto label_201800;
        case 0x201804u: goto label_201804;
        case 0x201808u: goto label_201808;
        case 0x20180cu: goto label_20180c;
        case 0x201810u: goto label_201810;
        case 0x201814u: goto label_201814;
        case 0x201818u: goto label_201818;
        case 0x20181cu: goto label_20181c;
        case 0x201820u: goto label_201820;
        case 0x201824u: goto label_201824;
        case 0x201828u: goto label_201828;
        case 0x20182cu: goto label_20182c;
        case 0x201830u: goto label_201830;
        case 0x201834u: goto label_201834;
        case 0x201838u: goto label_201838;
        case 0x20183cu: goto label_20183c;
        case 0x201840u: goto label_201840;
        case 0x201844u: goto label_201844;
        case 0x201848u: goto label_201848;
        case 0x20184cu: goto label_20184c;
        case 0x201850u: goto label_201850;
        case 0x201854u: goto label_201854;
        case 0x201858u: goto label_201858;
        case 0x20185cu: goto label_20185c;
        case 0x201860u: goto label_201860;
        case 0x201864u: goto label_201864;
        case 0x201868u: goto label_201868;
        case 0x20186cu: goto label_20186c;
        case 0x201870u: goto label_201870;
        case 0x201874u: goto label_201874;
        case 0x201878u: goto label_201878;
        case 0x20187cu: goto label_20187c;
        case 0x201880u: goto label_201880;
        case 0x201884u: goto label_201884;
        case 0x201888u: goto label_201888;
        case 0x20188cu: goto label_20188c;
        case 0x201890u: goto label_201890;
        case 0x201894u: goto label_201894;
        case 0x201898u: goto label_201898;
        case 0x20189cu: goto label_20189c;
        case 0x2018a0u: goto label_2018a0;
        case 0x2018a4u: goto label_2018a4;
        case 0x2018a8u: goto label_2018a8;
        case 0x2018acu: goto label_2018ac;
        case 0x2018b0u: goto label_2018b0;
        case 0x2018b4u: goto label_2018b4;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018bcu: goto label_2018bc;
        case 0x2018c0u: goto label_2018c0;
        case 0x2018c4u: goto label_2018c4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018d4u: goto label_2018d4;
        case 0x2018d8u: goto label_2018d8;
        case 0x2018dcu: goto label_2018dc;
        case 0x2018e0u: goto label_2018e0;
        case 0x2018e4u: goto label_2018e4;
        case 0x2018e8u: goto label_2018e8;
        case 0x2018ecu: goto label_2018ec;
        case 0x2018f0u: goto label_2018f0;
        case 0x2018f4u: goto label_2018f4;
        case 0x2018f8u: goto label_2018f8;
        case 0x2018fcu: goto label_2018fc;
        case 0x201900u: goto label_201900;
        case 0x201904u: goto label_201904;
        case 0x201908u: goto label_201908;
        case 0x20190cu: goto label_20190c;
        case 0x201910u: goto label_201910;
        case 0x201914u: goto label_201914;
        case 0x201918u: goto label_201918;
        case 0x20191cu: goto label_20191c;
        case 0x201920u: goto label_201920;
        case 0x201924u: goto label_201924;
        case 0x201928u: goto label_201928;
        case 0x20192cu: goto label_20192c;
        case 0x201930u: goto label_201930;
        case 0x201934u: goto label_201934;
        case 0x201938u: goto label_201938;
        case 0x20193cu: goto label_20193c;
        case 0x201940u: goto label_201940;
        case 0x201944u: goto label_201944;
        case 0x201948u: goto label_201948;
        case 0x20194cu: goto label_20194c;
        case 0x201950u: goto label_201950;
        case 0x201954u: goto label_201954;
        case 0x201958u: goto label_201958;
        case 0x20195cu: goto label_20195c;
        case 0x201960u: goto label_201960;
        case 0x201964u: goto label_201964;
        case 0x201968u: goto label_201968;
        case 0x20196cu: goto label_20196c;
        case 0x201970u: goto label_201970;
        case 0x201974u: goto label_201974;
        case 0x201978u: goto label_201978;
        case 0x20197cu: goto label_20197c;
        case 0x201980u: goto label_201980;
        case 0x201984u: goto label_201984;
        case 0x201988u: goto label_201988;
        case 0x20198cu: goto label_20198c;
        case 0x201990u: goto label_201990;
        case 0x201994u: goto label_201994;
        case 0x201998u: goto label_201998;
        case 0x20199cu: goto label_20199c;
        case 0x2019a0u: goto label_2019a0;
        case 0x2019a4u: goto label_2019a4;
        case 0x2019a8u: goto label_2019a8;
        case 0x2019acu: goto label_2019ac;
        case 0x2019b0u: goto label_2019b0;
        case 0x2019b4u: goto label_2019b4;
        case 0x2019b8u: goto label_2019b8;
        case 0x2019bcu: goto label_2019bc;
        case 0x2019c0u: goto label_2019c0;
        case 0x2019c4u: goto label_2019c4;
        case 0x2019c8u: goto label_2019c8;
        case 0x2019ccu: goto label_2019cc;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019d4u: goto label_2019d4;
        case 0x2019d8u: goto label_2019d8;
        case 0x2019dcu: goto label_2019dc;
        case 0x2019e0u: goto label_2019e0;
        case 0x2019e4u: goto label_2019e4;
        case 0x2019e8u: goto label_2019e8;
        case 0x2019ecu: goto label_2019ec;
        case 0x2019f0u: goto label_2019f0;
        case 0x2019f4u: goto label_2019f4;
        case 0x2019f8u: goto label_2019f8;
        case 0x2019fcu: goto label_2019fc;
        case 0x201a00u: goto label_201a00;
        case 0x201a04u: goto label_201a04;
        case 0x201a08u: goto label_201a08;
        case 0x201a0cu: goto label_201a0c;
        case 0x201a10u: goto label_201a10;
        case 0x201a14u: goto label_201a14;
        case 0x201a18u: goto label_201a18;
        case 0x201a1cu: goto label_201a1c;
        case 0x201a20u: goto label_201a20;
        case 0x201a24u: goto label_201a24;
        case 0x201a28u: goto label_201a28;
        case 0x201a2cu: goto label_201a2c;
        case 0x201a30u: goto label_201a30;
        case 0x201a34u: goto label_201a34;
        case 0x201a38u: goto label_201a38;
        case 0x201a3cu: goto label_201a3c;
        case 0x201a40u: goto label_201a40;
        case 0x201a44u: goto label_201a44;
        case 0x201a48u: goto label_201a48;
        case 0x201a4cu: goto label_201a4c;
        case 0x201a50u: goto label_201a50;
        case 0x201a54u: goto label_201a54;
        case 0x201a58u: goto label_201a58;
        case 0x201a5cu: goto label_201a5c;
        case 0x201a60u: goto label_201a60;
        case 0x201a64u: goto label_201a64;
        case 0x201a68u: goto label_201a68;
        case 0x201a6cu: goto label_201a6c;
        case 0x201a70u: goto label_201a70;
        case 0x201a74u: goto label_201a74;
        case 0x201a78u: goto label_201a78;
        case 0x201a7cu: goto label_201a7c;
        case 0x201a80u: goto label_201a80;
        case 0x201a84u: goto label_201a84;
        case 0x201a88u: goto label_201a88;
        case 0x201a8cu: goto label_201a8c;
        case 0x201a90u: goto label_201a90;
        case 0x201a94u: goto label_201a94;
        case 0x201a98u: goto label_201a98;
        case 0x201a9cu: goto label_201a9c;
        case 0x201aa0u: goto label_201aa0;
        case 0x201aa4u: goto label_201aa4;
        case 0x201aa8u: goto label_201aa8;
        case 0x201aacu: goto label_201aac;
        case 0x201ab0u: goto label_201ab0;
        case 0x201ab4u: goto label_201ab4;
        case 0x201ab8u: goto label_201ab8;
        case 0x201abcu: goto label_201abc;
        case 0x201ac0u: goto label_201ac0;
        case 0x201ac4u: goto label_201ac4;
        case 0x201ac8u: goto label_201ac8;
        case 0x201accu: goto label_201acc;
        case 0x201ad0u: goto label_201ad0;
        case 0x201ad4u: goto label_201ad4;
        case 0x201ad8u: goto label_201ad8;
        case 0x201adcu: goto label_201adc;
        case 0x201ae0u: goto label_201ae0;
        case 0x201ae4u: goto label_201ae4;
        case 0x201ae8u: goto label_201ae8;
        case 0x201aecu: goto label_201aec;
        case 0x201af0u: goto label_201af0;
        case 0x201af4u: goto label_201af4;
        case 0x201af8u: goto label_201af8;
        case 0x201afcu: goto label_201afc;
        case 0x201b00u: goto label_201b00;
        case 0x201b04u: goto label_201b04;
        case 0x201b08u: goto label_201b08;
        case 0x201b0cu: goto label_201b0c;
        case 0x201b10u: goto label_201b10;
        case 0x201b14u: goto label_201b14;
        case 0x201b18u: goto label_201b18;
        case 0x201b1cu: goto label_201b1c;
        case 0x201b20u: goto label_201b20;
        case 0x201b24u: goto label_201b24;
        case 0x201b28u: goto label_201b28;
        case 0x201b2cu: goto label_201b2c;
        case 0x201b30u: goto label_201b30;
        case 0x201b34u: goto label_201b34;
        case 0x201b38u: goto label_201b38;
        case 0x201b3cu: goto label_201b3c;
        case 0x201b40u: goto label_201b40;
        case 0x201b44u: goto label_201b44;
        case 0x201b48u: goto label_201b48;
        case 0x201b4cu: goto label_201b4c;
        default: break;
    }

    ctx->pc = 0x201680u;

label_201680:
    // 0x201680: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x201680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_201684:
    // 0x201684: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x201684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_201688:
    // 0x201688: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x201688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20168c:
    // 0x20168c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20168cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201690:
    // 0x201690: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x201690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_201694:
    // 0x201694: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x201694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_201698:
    // 0x201698: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x201698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20169c:
    // 0x20169c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2016a0:
    // 0x2016a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2016a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2016a4:
    // 0x2016a4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2016a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2016a8:
    // 0x2016a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2016a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2016ac:
    // 0x2016ac: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2016acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2016b0:
    // 0x2016b0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2016b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2016b4:
    // 0x2016b4: 0x40f809  jalr        $v0
label_2016b8:
    if (ctx->pc == 0x2016B8u) {
        ctx->pc = 0x2016B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016B4u;
        // 0x2016b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2016BCu;
        goto label_2016bc;
    }
    ctx->pc = 0x2016B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2016BCu);
        ctx->pc = 0x2016B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016B4u;
        // 0x2016b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2016B4u, 0x2016BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2016BCu;
label_2016bc:
    // 0x2016bc: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
label_2016c0:
    if (ctx->pc == 0x2016C0u) {
        ctx->pc = 0x2016C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016BCu;
        // 0x2016c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2016C4u;
        goto label_2016c4;
    }
    ctx->pc = 0x2016BCu;
    {
        const bool branch_taken_0x2016bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016BCu;
        // 0x2016c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016bc) {
            ctx->pc = 0x201B2Cu;
            goto label_201b2c;
        }
    }
    ctx->pc = 0x2016C4u;
label_2016c4:
    // 0x2016c4: 0xc07f88a  jal         func_1FE228
label_2016c8:
    if (ctx->pc == 0x2016C8u) {
        ctx->pc = 0x2016CCu;
        goto label_2016cc;
    }
    ctx->pc = 0x2016C4u;
    SET_GPR_U32(ctx, 31, 0x2016CCu);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x2016C4u, 0x2016CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2016CCu;
label_2016cc:
    // 0x2016cc: 0x14400117  bnez        $v0, . + 4 + (0x117 << 2)
label_2016d0:
    if (ctx->pc == 0x2016D0u) {
        ctx->pc = 0x2016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016CCu;
        // 0x2016d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2016D4u;
        goto label_2016d4;
    }
    ctx->pc = 0x2016CCu;
    {
        const bool branch_taken_0x2016cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016CCu;
        // 0x2016d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016cc) {
            ctx->pc = 0x201B2Cu;
            goto label_201b2c;
        }
    }
    ctx->pc = 0x2016D4u;
label_2016d4:
    // 0x2016d4: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x2016d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2016d8:
    // 0x2016d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2016d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2016dc:
    // 0x2016dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2016dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2016e0:
    // 0x2016e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2016e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2016e4:
    // 0x2016e4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x2016e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_2016e8:
    // 0x2016e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2016e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2016ec:
    // 0x2016ec: 0x265300c8  addiu       $s3, $s2, 0xC8
    ctx->pc = 0x2016ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
label_2016f0:
    // 0x2016f0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2016f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2016f4:
    // 0x2016f4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2016f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2016f8:
    // 0x2016f8: 0x60f809  jalr        $v1
label_2016fc:
    if (ctx->pc == 0x2016FCu) {
        ctx->pc = 0x2016FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016F8u;
        // 0x2016fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201700u;
        goto label_201700;
    }
    ctx->pc = 0x2016F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201700u);
        ctx->pc = 0x2016FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016F8u;
        // 0x2016fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2016F8u, 0x201700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201700u;
label_201700:
    // 0x201700: 0x8e4500bc  lw          $a1, 0xBC($s2)
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_201704:
    // 0x201704: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201708:
    // 0x201708: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20170c:
    // 0x20170c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201710:
    // 0x201710: 0x60f809  jalr        $v1
label_201714:
    if (ctx->pc == 0x201714u) {
        ctx->pc = 0x201714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201710u;
        // 0x201714: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201718u;
        goto label_201718;
    }
    ctx->pc = 0x201710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201718u);
        ctx->pc = 0x201714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201710u;
        // 0x201714: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201710u, 0x201718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201718u;
label_201718:
    // 0x201718: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_20171c:
    // 0x20171c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201720:
    // 0x201720: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_201724:
    // 0x201724: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201728:
    // 0x201728: 0x60f809  jalr        $v1
label_20172c:
    if (ctx->pc == 0x20172Cu) {
        ctx->pc = 0x20172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201728u;
        // 0x20172c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201730u;
        goto label_201730;
    }
    ctx->pc = 0x201728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201730u);
        ctx->pc = 0x20172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201728u;
        // 0x20172c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201728u, 0x201730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201730u;
label_201730:
    // 0x201730: 0x8e4600b8  lw          $a2, 0xB8($s2)
    ctx->pc = 0x201730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201734:
    // 0x201734: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_201738:
    // 0x201738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20173c:
    // 0x20173c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201740:
    // 0x201740: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_201744:
    // 0x201744: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_201748:
    // 0x201748: 0x60f809  jalr        $v1
label_20174c:
    if (ctx->pc == 0x20174Cu) {
        ctx->pc = 0x20174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201748u;
        // 0x20174c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201750u;
        goto label_201750;
    }
    ctx->pc = 0x201748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201750u);
        ctx->pc = 0x20174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201748u;
        // 0x20174c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201748u, 0x201750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201750u;
label_201750:
    // 0x201750: 0x8e4600b8  lw          $a2, 0xB8($s2)
    ctx->pc = 0x201750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201754:
    // 0x201754: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x201754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_201758:
    // 0x201758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20175c:
    // 0x20175c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201760:
    // 0x201760: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x201760u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_201764:
    // 0x201764: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x201764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_201768:
    // 0x201768: 0x60f809  jalr        $v1
label_20176c:
    if (ctx->pc == 0x20176Cu) {
        ctx->pc = 0x20176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201768u;
        // 0x20176c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201770u;
        goto label_201770;
    }
    ctx->pc = 0x201768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201770u);
        ctx->pc = 0x20176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201768u;
        // 0x20176c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201768u, 0x201770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201770u;
label_201770:
    // 0x201770: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x201770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_201774:
    // 0x201774: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x201774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201778:
    // 0x201778: 0xc441f558  lwc1        $f1, -0xAA8($v0)
    ctx->pc = 0x201778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20177c:
    // 0x20177c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20177cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_201780:
    // 0x201780: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x201780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201784:
    // 0x201784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201788:
    // 0x201788: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x201788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20178c:
    // 0x20178c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20178cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_201790:
    // 0x201790: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x201790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_201794:
    // 0x201794: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x201794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_201798:
    // 0x201798: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x201798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20179c:
    // 0x20179c: 0x8e4700c8  lw          $a3, 0xC8($s2)
    ctx->pc = 0x20179cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2017a0:
    // 0x2017a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2017a4:
    // 0x2017a4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2017a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2017a8:
    // 0x2017a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2017ac:
    // 0x2017ac: 0x60f809  jalr        $v1
label_2017b0:
    if (ctx->pc == 0x2017B0u) {
        ctx->pc = 0x2017B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017ACu;
        // 0x2017b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2017B4u;
        goto label_2017b4;
    }
    ctx->pc = 0x2017ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2017B4u);
        ctx->pc = 0x2017B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017ACu;
        // 0x2017b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017ACu, 0x2017B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2017B4u;
label_2017b4:
    // 0x2017b4: 0x8e4600b8  lw          $a2, 0xB8($s2)
    ctx->pc = 0x2017b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2017b8:
    // 0x2017b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2017b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2017bc:
    // 0x2017bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2017bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2017c0:
    // 0x2017c0: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2017c4:
    // 0x2017c4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2017c8:
    // 0x2017c8: 0x60f809  jalr        $v1
label_2017cc:
    if (ctx->pc == 0x2017CCu) {
        ctx->pc = 0x2017CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017C8u;
        // 0x2017cc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2017D0u;
        goto label_2017d0;
    }
    ctx->pc = 0x2017C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2017D0u);
        ctx->pc = 0x2017CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017C8u;
        // 0x2017cc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017C8u, 0x2017D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2017D0u;
label_2017d0:
    // 0x2017d0: 0x8e4600b8  lw          $a2, 0xB8($s2)
    ctx->pc = 0x2017d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2017d4:
    // 0x2017d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2017d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2017d8:
    // 0x2017d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2017d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2017dc:
    // 0x2017dc: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x2017dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2017e0:
    // 0x2017e0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2017e4:
    // 0x2017e4: 0x60f809  jalr        $v1
label_2017e8:
    if (ctx->pc == 0x2017E8u) {
        ctx->pc = 0x2017E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017E4u;
        // 0x2017e8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2017ECu;
        goto label_2017ec;
    }
    ctx->pc = 0x2017E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2017ECu);
        ctx->pc = 0x2017E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017E4u;
        // 0x2017e8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017E4u, 0x2017ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2017ECu;
label_2017ec:
    // 0x2017ec: 0x8e4600b8  lw          $a2, 0xB8($s2)
    ctx->pc = 0x2017ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2017f0:
    // 0x2017f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2017f4:
    // 0x2017f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2017f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2017f8:
    // 0x2017f8: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2017fc:
    // 0x2017fc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_201800:
    // 0x201800: 0x60f809  jalr        $v1
label_201804:
    if (ctx->pc == 0x201804u) {
        ctx->pc = 0x201804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201800u;
        // 0x201804: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201808u;
        goto label_201808;
    }
    ctx->pc = 0x201800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201808u);
        ctx->pc = 0x201804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201800u;
        // 0x201804: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201800u, 0x201808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201808u;
label_201808:
    // 0x201808: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x201808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20180c:
    // 0x20180c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_201810:
    // 0x201810: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x201810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201814:
    // 0x201814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201818:
    // 0x201818: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x201818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20181c:
    // 0x20181c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20181cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_201820:
    // 0x201820: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x201820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_201824:
    // 0x201824: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x201824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_201828:
    // 0x201828: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x201828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_20182c:
    // 0x20182c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_201830:
    // 0x201830: 0x8e4700cc  lw          $a3, 0xCC($s2)
    ctx->pc = 0x201830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_201834:
    // 0x201834: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x201834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_201838:
    // 0x201838: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_20183c:
    // 0x20183c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_201840:
    // 0x201840: 0x60f809  jalr        $v1
label_201844:
    if (ctx->pc == 0x201844u) {
        ctx->pc = 0x201844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201840u;
        // 0x201844: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201848u;
        goto label_201848;
    }
    ctx->pc = 0x201840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201848u);
        ctx->pc = 0x201844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201840u;
        // 0x201844: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201840u, 0x201848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201848u;
label_201848:
    // 0x201848: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x201848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20184c:
    // 0x20184c: 0x0  nop
    ctx->pc = 0x20184cu;
    // NOP
label_201850:
    // 0x201850: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_201854:
    // 0x201854: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x201854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_201858:
    // 0x201858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20185c:
    // 0x20185c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20185cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_201860:
    // 0x201860: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x201860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201864:
    // 0x201864: 0x60f809  jalr        $v1
label_201868:
    if (ctx->pc == 0x201868u) {
        ctx->pc = 0x201868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201864u;
        // 0x201868: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20186Cu;
        goto label_20186c;
    }
    ctx->pc = 0x201864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20186Cu);
        ctx->pc = 0x201868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201864u;
        // 0x201868: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201864u, 0x20186Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20186Cu;
label_20186c:
    // 0x20186c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x20186cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_201870:
    // 0x201870: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_201874:
    if (ctx->pc == 0x201874u) {
        ctx->pc = 0x201874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201870u;
        // 0x201874: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201878u;
        goto label_201878;
    }
    ctx->pc = 0x201870u;
    {
        const bool branch_taken_0x201870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201870) {
            ctx->pc = 0x201874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201870u;
            // 0x201874: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201850;
        }
    }
    ctx->pc = 0x201878u;
label_201878:
    // 0x201878: 0x8e4500c0  lw          $a1, 0xC0($s2)
    ctx->pc = 0x201878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_20187c:
    // 0x20187c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201880:
    // 0x201880: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_201884:
    // 0x201884: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x201884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201888:
    // 0x201888: 0x60f809  jalr        $v1
label_20188c:
    if (ctx->pc == 0x20188Cu) {
        ctx->pc = 0x20188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201888u;
        // 0x20188c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201890u;
        goto label_201890;
    }
    ctx->pc = 0x201888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201890u);
        ctx->pc = 0x20188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201888u;
        // 0x20188c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201888u, 0x201890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201890u;
label_201890:
    // 0x201890: 0x8e4500d0  lw          $a1, 0xD0($s2)
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_201894:
    // 0x201894: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201898:
    // 0x201898: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20189c:
    // 0x20189c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2018a0:
    // 0x2018a0: 0x60f809  jalr        $v1
label_2018a4:
    if (ctx->pc == 0x2018A4u) {
        ctx->pc = 0x2018A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018A0u;
        // 0x2018a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018A8u;
        goto label_2018a8;
    }
    ctx->pc = 0x2018A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2018A8u);
        ctx->pc = 0x2018A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018A0u;
        // 0x2018a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018A0u, 0x2018A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2018A8u;
label_2018a8:
    // 0x2018a8: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x2018a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2018ac:
    // 0x2018ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2018acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2018b0:
    // 0x2018b0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2018b4:
    // 0x2018b4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2018b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2018b8:
    // 0x2018b8: 0x60f809  jalr        $v1
label_2018bc:
    if (ctx->pc == 0x2018BCu) {
        ctx->pc = 0x2018BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B8u;
        // 0x2018bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018C0u;
        goto label_2018c0;
    }
    ctx->pc = 0x2018B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2018C0u);
        ctx->pc = 0x2018BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B8u;
        // 0x2018bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018B8u, 0x2018C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2018C0u;
label_2018c0:
    // 0x2018c0: 0x8e4600a0  lw          $a2, 0xA0($s2)
    ctx->pc = 0x2018c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_2018c4:
    // 0x2018c4: 0x8ea7b8b8  lw          $a3, -0x4748($s5)
    ctx->pc = 0x2018c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949048)));
label_2018c8:
    // 0x2018c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2018c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2018cc:
    // 0x2018cc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2018ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2018d0:
    // 0x2018d0: 0x84430090  lh          $v1, 0x90($v0)
    ctx->pc = 0x2018d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_2018d4:
    // 0x2018d4: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x2018d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_2018d8:
    // 0x2018d8: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2018d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2018dc:
    // 0x2018dc: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2018e0:
    // 0x2018e0: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x2018e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2018e4:
    // 0x2018e4: 0x40f809  jalr        $v0
label_2018e8:
    if (ctx->pc == 0x2018E8u) {
        ctx->pc = 0x2018E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018E4u;
        // 0x2018e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018ECu;
        goto label_2018ec;
    }
    ctx->pc = 0x2018E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2018ECu);
        ctx->pc = 0x2018E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018E4u;
        // 0x2018e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018E4u, 0x2018ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2018ECu;
label_2018ec:
    // 0x2018ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2018f0:
    if (ctx->pc == 0x2018F0u) {
        ctx->pc = 0x2018F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018ECu;
        // 0x2018f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018F4u;
        goto label_2018f4;
    }
    ctx->pc = 0x2018ECu;
    {
        const bool branch_taken_0x2018ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2018F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018ECu;
        // 0x2018f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018ec) {
            ctx->pc = 0x201908u;
            goto label_201908;
        }
    }
    ctx->pc = 0x2018F4u;
label_2018f4:
    // 0x2018f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2018f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2018f8:
    // 0x2018f8: 0x0  nop
    ctx->pc = 0x2018f8u;
    // NOP
label_2018fc:
    // 0x2018fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2018fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_201900:
    // 0x201900: 0x10000008  b           . + 4 + (0x8 << 2)
label_201904:
    if (ctx->pc == 0x201904u) {
        ctx->pc = 0x201904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201900u;
        // 0x201904: 0xc64c009c  lwc1        $f12, 0x9C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x201908u;
        goto label_201908;
    }
    ctx->pc = 0x201900u;
    {
        const bool branch_taken_0x201900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201900u;
        // 0x201904: 0xc64c009c  lwc1        $f12, 0x9C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201900) {
            ctx->pc = 0x201924u;
            goto label_201924;
        }
    }
    ctx->pc = 0x201908u;
label_201908:
    // 0x201908: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20190c:
    // 0x20190c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_201910:
    // 0x201910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_201914:
    // 0x201914: 0x0  nop
    ctx->pc = 0x201914u;
    // NOP
label_201918:
    // 0x201918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20191c:
    // 0x20191c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20191cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_201920:
    // 0x201920: 0xc64c009c  lwc1        $f12, 0x9C($s2)
    ctx->pc = 0x201920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_201924:
    // 0x201924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201928:
    // 0x201928: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x201928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20192c:
    // 0x20192c: 0x40f809  jalr        $v0
label_201930:
    if (ctx->pc == 0x201930u) {
        ctx->pc = 0x201930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20192Cu;
        // 0x201930: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201934u;
        goto label_201934;
    }
    ctx->pc = 0x20192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201934u);
        ctx->pc = 0x201930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20192Cu;
        // 0x201930: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20192Cu, 0x201934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201934u;
label_201934:
    // 0x201934: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_201938:
    // 0x201938: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20193c:
    // 0x20193c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_201940:
    // 0x201940: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x201940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201944:
    // 0x201944: 0x60f809  jalr        $v1
label_201948:
    if (ctx->pc == 0x201948u) {
        ctx->pc = 0x201948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201944u;
        // 0x201948: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20194Cu;
        goto label_20194c;
    }
    ctx->pc = 0x201944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20194Cu);
        ctx->pc = 0x201948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201944u;
        // 0x201948: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201944u, 0x20194Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20194Cu;
label_20194c:
    // 0x20194c: 0x8ea6b8b8  lw          $a2, -0x4748($s5)
    ctx->pc = 0x20194cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949048)));
label_201950:
    // 0x201950: 0x8e4700a4  lw          $a3, 0xA4($s2)
    ctx->pc = 0x201950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_201954:
    // 0x201954: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x201954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201958:
    // 0x201958: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x201958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20195c:
    // 0x20195c: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x20195cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_201960:
    // 0x201960: 0x84430090  lh          $v1, 0x90($v0)
    ctx->pc = 0x201960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_201964:
    // 0x201964: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x201964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_201968:
    // 0x201968: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x201968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_20196c:
    // 0x20196c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x20196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_201970:
    // 0x201970: 0x40f809  jalr        $v0
label_201974:
    if (ctx->pc == 0x201974u) {
        ctx->pc = 0x201974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201970u;
        // 0x201974: 0xe38021  addu        $s0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201978u;
        goto label_201978;
    }
    ctx->pc = 0x201970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201978u);
        ctx->pc = 0x201974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201970u;
        // 0x201974: 0xe38021  addu        $s0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201970u, 0x201978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201978u;
label_201978:
    // 0x201978: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20197c:
    if (ctx->pc == 0x20197Cu) {
        ctx->pc = 0x20197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201978u;
        // 0x20197c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201980u;
        goto label_201980;
    }
    ctx->pc = 0x201978u;
    {
        const bool branch_taken_0x201978 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201978u;
        // 0x20197c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201978) {
            ctx->pc = 0x201994u;
            goto label_201994;
        }
    }
    ctx->pc = 0x201980u;
label_201980:
    // 0x201980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_201984:
    // 0x201984: 0x0  nop
    ctx->pc = 0x201984u;
    // NOP
label_201988:
    // 0x201988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20198c:
    // 0x20198c: 0x10000008  b           . + 4 + (0x8 << 2)
label_201990:
    if (ctx->pc == 0x201990u) {
        ctx->pc = 0x201990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20198Cu;
        // 0x201990: 0xc64c009c  lwc1        $f12, 0x9C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x201994u;
        goto label_201994;
    }
    ctx->pc = 0x20198Cu;
    {
        const bool branch_taken_0x20198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20198Cu;
        // 0x201990: 0xc64c009c  lwc1        $f12, 0x9C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20198c) {
            ctx->pc = 0x2019B0u;
            goto label_2019b0;
        }
    }
    ctx->pc = 0x201994u;
label_201994:
    // 0x201994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_201998:
    // 0x201998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20199c:
    // 0x20199c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20199cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2019a0:
    // 0x2019a0: 0x0  nop
    ctx->pc = 0x2019a0u;
    // NOP
label_2019a4:
    // 0x2019a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2019a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2019a8:
    // 0x2019a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2019a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2019ac:
    // 0x2019ac: 0xc64c009c  lwc1        $f12, 0x9C($s2)
    ctx->pc = 0x2019acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2019b0:
    // 0x2019b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2019b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2019b4:
    // 0x2019b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2019b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2019b8:
    // 0x2019b8: 0x40f809  jalr        $v0
label_2019bc:
    if (ctx->pc == 0x2019BCu) {
        ctx->pc = 0x2019BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019B8u;
        // 0x2019bc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019C0u;
        goto label_2019c0;
    }
    ctx->pc = 0x2019B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2019C0u);
        ctx->pc = 0x2019BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019B8u;
        // 0x2019bc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019B8u, 0x2019C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2019C0u;
label_2019c0:
    // 0x2019c0: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_2019c4:
    // 0x2019c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2019c8:
    // 0x2019c8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2019c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2019cc:
    // 0x2019cc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2019ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2019d0:
    // 0x2019d0: 0x60f809  jalr        $v1
label_2019d4:
    if (ctx->pc == 0x2019D4u) {
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019D8u;
        goto label_2019d8;
    }
    ctx->pc = 0x2019D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2019D8u);
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019D0u, 0x2019D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2019D8u;
label_2019d8:
    // 0x2019d8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2019d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2019dc:
    // 0x2019dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2019dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2019e0:
    // 0x2019e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2019e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2019e4:
    // 0x2019e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2019e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2019e8:
    // 0x2019e8: 0x60f809  jalr        $v1
label_2019ec:
    if (ctx->pc == 0x2019ECu) {
        ctx->pc = 0x2019ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019E8u;
        // 0x2019ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019F0u;
        goto label_2019f0;
    }
    ctx->pc = 0x2019E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2019F0u);
        ctx->pc = 0x2019ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019E8u;
        // 0x2019ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019E8u, 0x2019F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2019F0u;
label_2019f0:
    // 0x2019f0: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x2019f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2019f4:
    // 0x2019f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2019f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2019f8:
    // 0x2019f8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2019f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2019fc:
    // 0x2019fc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201a00:
    // 0x201a00: 0x60f809  jalr        $v1
label_201a04:
    if (ctx->pc == 0x201A04u) {
        ctx->pc = 0x201A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A00u;
        // 0x201a04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A08u;
        goto label_201a08;
    }
    ctx->pc = 0x201A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201A08u);
        ctx->pc = 0x201A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A00u;
        // 0x201a04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A00u, 0x201A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201A08u;
label_201a08:
    // 0x201a08: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201a0c:
    // 0x201a0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201a10:
    // 0x201a10: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x201a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_201a14:
    // 0x201a14: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x201a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_201a18:
    // 0x201a18: 0x40f809  jalr        $v0
label_201a1c:
    if (ctx->pc == 0x201A1Cu) {
        ctx->pc = 0x201A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A18u;
        // 0x201a1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A20u;
        goto label_201a20;
    }
    ctx->pc = 0x201A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201A20u);
        ctx->pc = 0x201A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A18u;
        // 0x201a1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A18u, 0x201A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201A20u;
label_201a20:
    // 0x201a20: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x201a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_201a24:
    // 0x201a24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x201a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201a28:
    // 0x201a28: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x201a28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_201a2c:
    // 0x201a2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x201a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_201a30:
    // 0x201a30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_201a34:
    // 0x201a34: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x201a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_201a38:
    // 0x201a38: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x201a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_201a3c:
    // 0x201a3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_201a40:
    // 0x201a40: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
label_201a44:
    if (ctx->pc == 0x201A44u) {
        ctx->pc = 0x201A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A40u;
        // 0x201a44: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A48u;
        goto label_201a48;
    }
    ctx->pc = 0x201A40u;
    {
        const bool branch_taken_0x201a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x201A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A40u;
        // 0x201a44: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a40) {
            ctx->pc = 0x201B28u;
            goto label_201b28;
        }
    }
    ctx->pc = 0x201A48u;
label_201a48:
    // 0x201a48: 0x8e4600b8  lw          $a2, 0xB8($s2)
    ctx->pc = 0x201a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201a4c:
    // 0x201a4c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x201a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201a50:
    // 0x201a50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x201a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201a54:
    // 0x201a54: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x201a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_201a58:
    // 0x201a58: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x201a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_201a5c:
    // 0x201a5c: 0x40f809  jalr        $v0
label_201a60:
    if (ctx->pc == 0x201A60u) {
        ctx->pc = 0x201A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A5Cu;
        // 0x201a60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A64u;
        goto label_201a64;
    }
    ctx->pc = 0x201A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201A64u);
        ctx->pc = 0x201A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A5Cu;
        // 0x201a60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A5Cu, 0x201A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201A64u;
label_201a64:
    // 0x201a64: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_201a68:
    if (ctx->pc == 0x201A68u) {
        ctx->pc = 0x201A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A64u;
        // 0x201a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A6Cu;
        goto label_201a6c;
    }
    ctx->pc = 0x201A64u;
    {
        const bool branch_taken_0x201a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a64) {
            ctx->pc = 0x201A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A64u;
            // 0x201a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201AFCu;
            goto label_201afc;
        }
    }
    ctx->pc = 0x201A6Cu;
label_201a6c:
    // 0x201a6c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x201a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_201a70:
    // 0x201a70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201a74:
    // 0x201a74: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_201a78:
    // 0x201a78: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x201a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_201a7c:
    // 0x201a7c: 0x40f809  jalr        $v0
label_201a80:
    if (ctx->pc == 0x201A80u) {
        ctx->pc = 0x201A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A7Cu;
        // 0x201a80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A84u;
        goto label_201a84;
    }
    ctx->pc = 0x201A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201A84u);
        ctx->pc = 0x201A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A7Cu;
        // 0x201a80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A7Cu, 0x201A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201A84u;
label_201a84:
    // 0x201a84: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_201a88:
    if (ctx->pc == 0x201A88u) {
        ctx->pc = 0x201A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A84u;
        // 0x201a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A8Cu;
        goto label_201a8c;
    }
    ctx->pc = 0x201A84u;
    {
        const bool branch_taken_0x201a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a84) {
            ctx->pc = 0x201A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A84u;
            // 0x201a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201AFCu;
            goto label_201afc;
        }
    }
    ctx->pc = 0x201A8Cu;
label_201a8c:
    // 0x201a8c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x201a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_201a90:
    // 0x201a90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201a94:
    // 0x201a94: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x201a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_201a98:
    // 0x201a98: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x201a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_201a9c:
    // 0x201a9c: 0x40f809  jalr        $v0
label_201aa0:
    if (ctx->pc == 0x201AA0u) {
        ctx->pc = 0x201AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A9Cu;
        // 0x201aa0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201AA4u;
        goto label_201aa4;
    }
    ctx->pc = 0x201A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201AA4u);
        ctx->pc = 0x201AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A9Cu;
        // 0x201aa0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A9Cu, 0x201AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201AA4u;
label_201aa4:
    // 0x201aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201aa8:
    // 0x201aa8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x201aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_201aac:
    // 0x201aac: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_201ab0:
    if (ctx->pc == 0x201AB0u) {
        ctx->pc = 0x201AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AACu;
        // 0x201ab0: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201AB4u;
        goto label_201ab4;
    }
    ctx->pc = 0x201AACu;
    {
        const bool branch_taken_0x201aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x201AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AACu;
        // 0x201ab0: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201aac) {
            ctx->pc = 0x201B28u;
            goto label_201b28;
        }
    }
    ctx->pc = 0x201AB4u;
label_201ab4:
    // 0x201ab4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x201ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_201ab8:
    // 0x201ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201abc:
    // 0x201abc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_201ac0:
    // 0x201ac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201ac4:
    // 0x201ac4: 0xc080312  jal         func_200C48
label_201ac8:
    if (ctx->pc == 0x201AC8u) {
        ctx->pc = 0x201AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AC4u;
        // 0x201ac8: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ACCu;
        goto label_201acc;
    }
    ctx->pc = 0x201AC4u;
    SET_GPR_U32(ctx, 31, 0x201ACCu);
    ctx->pc = 0x201AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201AC4u;
    // 0x201ac8: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C48u, 0x201AC4u, 0x201ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201ACCu;
label_201acc:
    // 0x201acc: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x201accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_201ad0:
    // 0x201ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201ad4:
    // 0x201ad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x201ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201ad8:
    // 0x201ad8: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x201ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_201adc:
    // 0x201adc: 0x8e4600d8  lw          $a2, 0xD8($s2)
    ctx->pc = 0x201adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_201ae0:
    // 0x201ae0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x201ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201ae4:
    // 0x201ae4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x201ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_201ae8:
    // 0x201ae8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_201aec:
    // 0x201aec: 0x60f809  jalr        $v1
label_201af0:
    if (ctx->pc == 0x201AF0u) {
        ctx->pc = 0x201AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AECu;
        // 0x201af0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201AF4u;
        goto label_201af4;
    }
    ctx->pc = 0x201AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201AF4u);
        ctx->pc = 0x201AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AECu;
        // 0x201af0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AECu, 0x201AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201AF4u;
label_201af4:
    // 0x201af4: 0x1000000c  b           . + 4 + (0xC << 2)
label_201af8:
    if (ctx->pc == 0x201AF8u) {
        ctx->pc = 0x201AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AF4u;
        // 0x201af8: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201AFCu;
        goto label_201afc;
    }
    ctx->pc = 0x201AF4u;
    {
        const bool branch_taken_0x201af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AF4u;
        // 0x201af8: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201af4) {
            ctx->pc = 0x201B28u;
            goto label_201b28;
        }
    }
    ctx->pc = 0x201AFCu;
label_201afc:
    // 0x201afc: 0xc080312  jal         func_200C48
label_201b00:
    if (ctx->pc == 0x201B00u) {
        ctx->pc = 0x201B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AFCu;
        // 0x201b00: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B04u;
        goto label_201b04;
    }
    ctx->pc = 0x201AFCu;
    SET_GPR_U32(ctx, 31, 0x201B04u);
    ctx->pc = 0x201B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201AFCu;
    // 0x201b00: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C48u, 0x201AFCu, 0x201B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B04u;
label_201b04:
    // 0x201b04: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x201b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_201b08:
    // 0x201b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201b0c:
    // 0x201b0c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x201b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_201b10:
    // 0x201b10: 0x8e4600d8  lw          $a2, 0xD8($s2)
    ctx->pc = 0x201b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_201b14:
    // 0x201b14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x201b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201b18:
    // 0x201b18: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x201b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_201b1c:
    // 0x201b1c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x201b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_201b20:
    // 0x201b20: 0x60f809  jalr        $v1
label_201b24:
    if (ctx->pc == 0x201B24u) {
        ctx->pc = 0x201B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B20u;
        // 0x201b24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B28u;
        goto label_201b28;
    }
    ctx->pc = 0x201B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201B28u);
        ctx->pc = 0x201B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B20u;
        // 0x201b24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B20u, 0x201B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201B28u;
label_201b28:
    // 0x201b28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x201b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_201b2c:
    // 0x201b2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x201b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_201b30:
    // 0x201b30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x201b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_201b34:
    // 0x201b34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x201b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_201b38:
    // 0x201b38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x201b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_201b3c:
    // 0x201b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x201b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201b40:
    // 0x201b40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x201b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_201b44:
    // 0x201b44: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x201b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_201b48:
    // 0x201b48: 0x3e00008  jr          $ra
label_201b4c:
    if (ctx->pc == 0x201B4Cu) {
        ctx->pc = 0x201B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B48u;
        // 0x201b4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B50u;
        goto label_fallthrough_0x201b48;
    }
    ctx->pc = 0x201B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B48u;
        // 0x201b4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201b48:
    ctx->pc = 0x201B50u;
}
