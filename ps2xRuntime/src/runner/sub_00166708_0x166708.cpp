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

// Function: sub_00166708
// Address: 0x166708 - 0x166b60
void sub_00166708_0x166708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166708_0x166708");
#endif

    switch (ctx->pc) {
        case 0x166708u: goto label_166708;
        case 0x16670cu: goto label_16670c;
        case 0x166710u: goto label_166710;
        case 0x166714u: goto label_166714;
        case 0x166718u: goto label_166718;
        case 0x16671cu: goto label_16671c;
        case 0x166720u: goto label_166720;
        case 0x166724u: goto label_166724;
        case 0x166728u: goto label_166728;
        case 0x16672cu: goto label_16672c;
        case 0x166730u: goto label_166730;
        case 0x166734u: goto label_166734;
        case 0x166738u: goto label_166738;
        case 0x16673cu: goto label_16673c;
        case 0x166740u: goto label_166740;
        case 0x166744u: goto label_166744;
        case 0x166748u: goto label_166748;
        case 0x16674cu: goto label_16674c;
        case 0x166750u: goto label_166750;
        case 0x166754u: goto label_166754;
        case 0x166758u: goto label_166758;
        case 0x16675cu: goto label_16675c;
        case 0x166760u: goto label_166760;
        case 0x166764u: goto label_166764;
        case 0x166768u: goto label_166768;
        case 0x16676cu: goto label_16676c;
        case 0x166770u: goto label_166770;
        case 0x166774u: goto label_166774;
        case 0x166778u: goto label_166778;
        case 0x16677cu: goto label_16677c;
        case 0x166780u: goto label_166780;
        case 0x166784u: goto label_166784;
        case 0x166788u: goto label_166788;
        case 0x16678cu: goto label_16678c;
        case 0x166790u: goto label_166790;
        case 0x166794u: goto label_166794;
        case 0x166798u: goto label_166798;
        case 0x16679cu: goto label_16679c;
        case 0x1667a0u: goto label_1667a0;
        case 0x1667a4u: goto label_1667a4;
        case 0x1667a8u: goto label_1667a8;
        case 0x1667acu: goto label_1667ac;
        case 0x1667b0u: goto label_1667b0;
        case 0x1667b4u: goto label_1667b4;
        case 0x1667b8u: goto label_1667b8;
        case 0x1667bcu: goto label_1667bc;
        case 0x1667c0u: goto label_1667c0;
        case 0x1667c4u: goto label_1667c4;
        case 0x1667c8u: goto label_1667c8;
        case 0x1667ccu: goto label_1667cc;
        case 0x1667d0u: goto label_1667d0;
        case 0x1667d4u: goto label_1667d4;
        case 0x1667d8u: goto label_1667d8;
        case 0x1667dcu: goto label_1667dc;
        case 0x1667e0u: goto label_1667e0;
        case 0x1667e4u: goto label_1667e4;
        case 0x1667e8u: goto label_1667e8;
        case 0x1667ecu: goto label_1667ec;
        case 0x1667f0u: goto label_1667f0;
        case 0x1667f4u: goto label_1667f4;
        case 0x1667f8u: goto label_1667f8;
        case 0x1667fcu: goto label_1667fc;
        case 0x166800u: goto label_166800;
        case 0x166804u: goto label_166804;
        case 0x166808u: goto label_166808;
        case 0x16680cu: goto label_16680c;
        case 0x166810u: goto label_166810;
        case 0x166814u: goto label_166814;
        case 0x166818u: goto label_166818;
        case 0x16681cu: goto label_16681c;
        case 0x166820u: goto label_166820;
        case 0x166824u: goto label_166824;
        case 0x166828u: goto label_166828;
        case 0x16682cu: goto label_16682c;
        case 0x166830u: goto label_166830;
        case 0x166834u: goto label_166834;
        case 0x166838u: goto label_166838;
        case 0x16683cu: goto label_16683c;
        case 0x166840u: goto label_166840;
        case 0x166844u: goto label_166844;
        case 0x166848u: goto label_166848;
        case 0x16684cu: goto label_16684c;
        case 0x166850u: goto label_166850;
        case 0x166854u: goto label_166854;
        case 0x166858u: goto label_166858;
        case 0x16685cu: goto label_16685c;
        case 0x166860u: goto label_166860;
        case 0x166864u: goto label_166864;
        case 0x166868u: goto label_166868;
        case 0x16686cu: goto label_16686c;
        case 0x166870u: goto label_166870;
        case 0x166874u: goto label_166874;
        case 0x166878u: goto label_166878;
        case 0x16687cu: goto label_16687c;
        case 0x166880u: goto label_166880;
        case 0x166884u: goto label_166884;
        case 0x166888u: goto label_166888;
        case 0x16688cu: goto label_16688c;
        case 0x166890u: goto label_166890;
        case 0x166894u: goto label_166894;
        case 0x166898u: goto label_166898;
        case 0x16689cu: goto label_16689c;
        case 0x1668a0u: goto label_1668a0;
        case 0x1668a4u: goto label_1668a4;
        case 0x1668a8u: goto label_1668a8;
        case 0x1668acu: goto label_1668ac;
        case 0x1668b0u: goto label_1668b0;
        case 0x1668b4u: goto label_1668b4;
        case 0x1668b8u: goto label_1668b8;
        case 0x1668bcu: goto label_1668bc;
        case 0x1668c0u: goto label_1668c0;
        case 0x1668c4u: goto label_1668c4;
        case 0x1668c8u: goto label_1668c8;
        case 0x1668ccu: goto label_1668cc;
        case 0x1668d0u: goto label_1668d0;
        case 0x1668d4u: goto label_1668d4;
        case 0x1668d8u: goto label_1668d8;
        case 0x1668dcu: goto label_1668dc;
        case 0x1668e0u: goto label_1668e0;
        case 0x1668e4u: goto label_1668e4;
        case 0x1668e8u: goto label_1668e8;
        case 0x1668ecu: goto label_1668ec;
        case 0x1668f0u: goto label_1668f0;
        case 0x1668f4u: goto label_1668f4;
        case 0x1668f8u: goto label_1668f8;
        case 0x1668fcu: goto label_1668fc;
        case 0x166900u: goto label_166900;
        case 0x166904u: goto label_166904;
        case 0x166908u: goto label_166908;
        case 0x16690cu: goto label_16690c;
        case 0x166910u: goto label_166910;
        case 0x166914u: goto label_166914;
        case 0x166918u: goto label_166918;
        case 0x16691cu: goto label_16691c;
        case 0x166920u: goto label_166920;
        case 0x166924u: goto label_166924;
        case 0x166928u: goto label_166928;
        case 0x16692cu: goto label_16692c;
        case 0x166930u: goto label_166930;
        case 0x166934u: goto label_166934;
        case 0x166938u: goto label_166938;
        case 0x16693cu: goto label_16693c;
        case 0x166940u: goto label_166940;
        case 0x166944u: goto label_166944;
        case 0x166948u: goto label_166948;
        case 0x16694cu: goto label_16694c;
        case 0x166950u: goto label_166950;
        case 0x166954u: goto label_166954;
        case 0x166958u: goto label_166958;
        case 0x16695cu: goto label_16695c;
        case 0x166960u: goto label_166960;
        case 0x166964u: goto label_166964;
        case 0x166968u: goto label_166968;
        case 0x16696cu: goto label_16696c;
        case 0x166970u: goto label_166970;
        case 0x166974u: goto label_166974;
        case 0x166978u: goto label_166978;
        case 0x16697cu: goto label_16697c;
        case 0x166980u: goto label_166980;
        case 0x166984u: goto label_166984;
        case 0x166988u: goto label_166988;
        case 0x16698cu: goto label_16698c;
        case 0x166990u: goto label_166990;
        case 0x166994u: goto label_166994;
        case 0x166998u: goto label_166998;
        case 0x16699cu: goto label_16699c;
        case 0x1669a0u: goto label_1669a0;
        case 0x1669a4u: goto label_1669a4;
        case 0x1669a8u: goto label_1669a8;
        case 0x1669acu: goto label_1669ac;
        case 0x1669b0u: goto label_1669b0;
        case 0x1669b4u: goto label_1669b4;
        case 0x1669b8u: goto label_1669b8;
        case 0x1669bcu: goto label_1669bc;
        case 0x1669c0u: goto label_1669c0;
        case 0x1669c4u: goto label_1669c4;
        case 0x1669c8u: goto label_1669c8;
        case 0x1669ccu: goto label_1669cc;
        case 0x1669d0u: goto label_1669d0;
        case 0x1669d4u: goto label_1669d4;
        case 0x1669d8u: goto label_1669d8;
        case 0x1669dcu: goto label_1669dc;
        case 0x1669e0u: goto label_1669e0;
        case 0x1669e4u: goto label_1669e4;
        case 0x1669e8u: goto label_1669e8;
        case 0x1669ecu: goto label_1669ec;
        case 0x1669f0u: goto label_1669f0;
        case 0x1669f4u: goto label_1669f4;
        case 0x1669f8u: goto label_1669f8;
        case 0x1669fcu: goto label_1669fc;
        case 0x166a00u: goto label_166a00;
        case 0x166a04u: goto label_166a04;
        case 0x166a08u: goto label_166a08;
        case 0x166a0cu: goto label_166a0c;
        case 0x166a10u: goto label_166a10;
        case 0x166a14u: goto label_166a14;
        case 0x166a18u: goto label_166a18;
        case 0x166a1cu: goto label_166a1c;
        case 0x166a20u: goto label_166a20;
        case 0x166a24u: goto label_166a24;
        case 0x166a28u: goto label_166a28;
        case 0x166a2cu: goto label_166a2c;
        case 0x166a30u: goto label_166a30;
        case 0x166a34u: goto label_166a34;
        case 0x166a38u: goto label_166a38;
        case 0x166a3cu: goto label_166a3c;
        case 0x166a40u: goto label_166a40;
        case 0x166a44u: goto label_166a44;
        case 0x166a48u: goto label_166a48;
        case 0x166a4cu: goto label_166a4c;
        case 0x166a50u: goto label_166a50;
        case 0x166a54u: goto label_166a54;
        case 0x166a58u: goto label_166a58;
        case 0x166a5cu: goto label_166a5c;
        case 0x166a60u: goto label_166a60;
        case 0x166a64u: goto label_166a64;
        case 0x166a68u: goto label_166a68;
        case 0x166a6cu: goto label_166a6c;
        case 0x166a70u: goto label_166a70;
        case 0x166a74u: goto label_166a74;
        case 0x166a78u: goto label_166a78;
        case 0x166a7cu: goto label_166a7c;
        case 0x166a80u: goto label_166a80;
        case 0x166a84u: goto label_166a84;
        case 0x166a88u: goto label_166a88;
        case 0x166a8cu: goto label_166a8c;
        case 0x166a90u: goto label_166a90;
        case 0x166a94u: goto label_166a94;
        case 0x166a98u: goto label_166a98;
        case 0x166a9cu: goto label_166a9c;
        case 0x166aa0u: goto label_166aa0;
        case 0x166aa4u: goto label_166aa4;
        case 0x166aa8u: goto label_166aa8;
        case 0x166aacu: goto label_166aac;
        case 0x166ab0u: goto label_166ab0;
        case 0x166ab4u: goto label_166ab4;
        case 0x166ab8u: goto label_166ab8;
        case 0x166abcu: goto label_166abc;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ac4u: goto label_166ac4;
        case 0x166ac8u: goto label_166ac8;
        case 0x166accu: goto label_166acc;
        case 0x166ad0u: goto label_166ad0;
        case 0x166ad4u: goto label_166ad4;
        case 0x166ad8u: goto label_166ad8;
        case 0x166adcu: goto label_166adc;
        case 0x166ae0u: goto label_166ae0;
        case 0x166ae4u: goto label_166ae4;
        case 0x166ae8u: goto label_166ae8;
        case 0x166aecu: goto label_166aec;
        case 0x166af0u: goto label_166af0;
        case 0x166af4u: goto label_166af4;
        case 0x166af8u: goto label_166af8;
        case 0x166afcu: goto label_166afc;
        case 0x166b00u: goto label_166b00;
        case 0x166b04u: goto label_166b04;
        case 0x166b08u: goto label_166b08;
        case 0x166b0cu: goto label_166b0c;
        case 0x166b10u: goto label_166b10;
        case 0x166b14u: goto label_166b14;
        case 0x166b18u: goto label_166b18;
        case 0x166b1cu: goto label_166b1c;
        case 0x166b20u: goto label_166b20;
        case 0x166b24u: goto label_166b24;
        case 0x166b28u: goto label_166b28;
        case 0x166b2cu: goto label_166b2c;
        case 0x166b30u: goto label_166b30;
        case 0x166b34u: goto label_166b34;
        case 0x166b38u: goto label_166b38;
        case 0x166b3cu: goto label_166b3c;
        case 0x166b40u: goto label_166b40;
        case 0x166b44u: goto label_166b44;
        case 0x166b48u: goto label_166b48;
        case 0x166b4cu: goto label_166b4c;
        case 0x166b50u: goto label_166b50;
        case 0x166b54u: goto label_166b54;
        case 0x166b58u: goto label_166b58;
        case 0x166b5cu: goto label_166b5c;
        default: break;
    }

    ctx->pc = 0x166708u;

label_166708:
    // 0x166708: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_16670c:
    // 0x16670c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_166710:
    // 0x166710: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x166710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_166714:
    // 0x166714: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x166714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166718:
    // 0x166718: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x166718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_16671c:
    // 0x16671c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x16671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_166720:
    // 0x166720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x166720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166724:
    // 0x166724: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x166724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_166728:
    // 0x166728: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x166728u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16672c:
    // 0x16672c: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x16672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_166730:
    // 0x166730: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x166730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_166734:
    // 0x166734: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x166734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_166738:
    // 0x166738: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x166738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_16673c:
    // 0x16673c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_166740:
    // 0x166740: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x166740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_166744:
    // 0x166744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_166748:
    // 0x166748: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x166748u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_16674c:
    // 0x16674c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x16674cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_166750:
    // 0x166750: 0xc0e409a  jal         func_390268
label_166754:
    if (ctx->pc == 0x166754u) {
        ctx->pc = 0x166754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166750u;
        // 0x166754: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166758u;
        goto label_166758;
    }
    ctx->pc = 0x166750u;
    SET_GPR_U32(ctx, 31, 0x166758u);
    ctx->pc = 0x166754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166750u;
    // 0x166754: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166750u, 0x166758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166758u;
label_166758:
    // 0x166758: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_16675c:
    if (ctx->pc == 0x16675Cu) {
        ctx->pc = 0x16675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166758u;
        // 0x16675c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166760u;
        goto label_166760;
    }
    ctx->pc = 0x166758u;
    {
        const bool branch_taken_0x166758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166758u;
        // 0x16675c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166758) {
            ctx->pc = 0x166B24u;
            goto label_166b24;
        }
    }
    ctx->pc = 0x166760u;
label_166760:
    // 0x166760: 0x8ea4cb68  lw          $a0, -0x3498($s5)
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953832)));
label_166764:
    // 0x166764: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
label_166768:
    if (ctx->pc == 0x166768u) {
        ctx->pc = 0x166768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166764u;
        // 0x166768: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16676Cu;
        goto label_16676c;
    }
    ctx->pc = 0x166764u;
    {
        const bool branch_taken_0x166764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x166768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166764u;
        // 0x166768: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166764) {
            ctx->pc = 0x1667FCu;
            goto label_1667fc;
        }
    }
    ctx->pc = 0x16676Cu;
label_16676c:
    // 0x16676c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x16676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_166770:
    // 0x166770: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x166770u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_166774:
    // 0x166774: 0xc0e409a  jal         func_390268
label_166778:
    if (ctx->pc == 0x166778u) {
        ctx->pc = 0x166778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166774u;
        // 0x166778: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16677Cu;
        goto label_16677c;
    }
    ctx->pc = 0x166774u;
    SET_GPR_U32(ctx, 31, 0x16677Cu);
    ctx->pc = 0x166778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166774u;
    // 0x166778: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166774u, 0x16677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16677Cu;
label_16677c:
    // 0x16677c: 0xc087502  jal         func_21D408
label_166780:
    if (ctx->pc == 0x166780u) {
        ctx->pc = 0x166780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16677Cu;
        // 0x166780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166784u;
        goto label_166784;
    }
    ctx->pc = 0x16677Cu;
    SET_GPR_U32(ctx, 31, 0x166784u);
    ctx->pc = 0x166780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16677Cu;
    // 0x166780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16677Cu, 0x166784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166784u;
label_166784:
    // 0x166784: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x166784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166788:
    // 0x166788: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x166788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_16678c:
    // 0x16678c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x16678cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_166790:
    // 0x166790: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166794:
    // 0x166794: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_166798:
    // 0x166798: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x166798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16679c:
    // 0x16679c: 0x26106e10  addiu       $s0, $s0, 0x6E10
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28176));
label_1667a0:
    // 0x1667a0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1667a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1667a4:
    // 0x1667a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1667a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1667a8:
    // 0x1667a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1667a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1667ac:
    // 0x1667ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1667acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1667b0:
    // 0x1667b0: 0x0  nop
    ctx->pc = 0x1667b0u;
    // NOP
label_1667b4:
    // 0x1667b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1667b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1667b8:
    // 0x1667b8: 0xc0e409a  jal         func_390268
label_1667bc:
    if (ctx->pc == 0x1667BCu) {
        ctx->pc = 0x1667BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667B8u;
        // 0x1667bc: 0xe6406e20  swc1        $f0, 0x6E20($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667C0u;
        goto label_1667c0;
    }
    ctx->pc = 0x1667B8u;
    SET_GPR_U32(ctx, 31, 0x1667C0u);
    ctx->pc = 0x1667BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667B8u;
    // 0x1667bc: 0xe6406e20  swc1        $f0, 0x6E20($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1667B8u, 0x1667C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667C0u;
label_1667c0:
    // 0x1667c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1667c4:
    // 0x1667c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1667c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1667c8:
    // 0x1667c8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1667c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1667cc:
    // 0x1667cc: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x1667ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1667d0:
    // 0x1667d0: 0xc0f809  jalr        $a2
label_1667d4:
    if (ctx->pc == 0x1667D4u) {
        ctx->pc = 0x1667D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667D0u;
        // 0x1667d4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667D8u;
        goto label_1667d8;
    }
    ctx->pc = 0x1667D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1667D8u);
        ctx->pc = 0x1667D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667D0u;
        // 0x1667d4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1667D0u, 0x1667D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1667D8u;
label_1667d8:
    // 0x1667d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1667d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1667dc:
    // 0x1667dc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1667dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1667e0:
    // 0x1667e0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1667e4:
    // 0x1667e4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1667e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1667e8:
    // 0x1667e8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1667e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1667ec:
    // 0x1667ec: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1667ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1667f0:
    // 0x1667f0: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_1667f4:
    // 0x1667f4: 0x10000051  b           . + 4 + (0x51 << 2)
label_1667f8:
    if (ctx->pc == 0x1667F8u) {
        ctx->pc = 0x1667F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667F4u;
        // 0x1667f8: 0xaea2cb68  sw          $v0, -0x3498($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667FCu;
        goto label_1667fc;
    }
    ctx->pc = 0x1667F4u;
    {
        const bool branch_taken_0x1667f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667F4u;
        // 0x1667f8: 0xaea2cb68  sw          $v0, -0x3498($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667f4) {
            ctx->pc = 0x16693Cu;
            goto label_16693c;
        }
    }
    ctx->pc = 0x1667FCu;
label_1667fc:
    // 0x1667fc: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x1667fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_166800:
    // 0x166800: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x166800u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166804:
    // 0x166804: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_166808:
    // 0x166808: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x166808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_16680c:
    // 0x16680c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_166810:
    if (ctx->pc == 0x166810u) {
        ctx->pc = 0x166810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16680Cu;
        // 0x166810: 0x246203e8  addiu       $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166814u;
        goto label_166814;
    }
    ctx->pc = 0x16680Cu;
    {
        const bool branch_taken_0x16680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16680Cu;
        // 0x166810: 0x246203e8  addiu       $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16680c) {
            ctx->pc = 0x16693Cu;
            goto label_16693c;
        }
    }
    ctx->pc = 0x166814u;
label_166814:
    // 0x166814: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x166814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_166818:
    // 0x166818: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x166818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16681c:
    // 0x16681c: 0xaea2cb68  sw          $v0, -0x3498($s5)
    ctx->pc = 0x16681cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294953832), GPR_U32(ctx, 2));
label_166820:
    // 0x166820: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x166820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_166824:
    // 0x166824: 0xc0e409a  jal         func_390268
label_166828:
    if (ctx->pc == 0x166828u) {
        ctx->pc = 0x166828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166824u;
        // 0x166828: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16682Cu;
        goto label_16682c;
    }
    ctx->pc = 0x166824u;
    SET_GPR_U32(ctx, 31, 0x16682Cu);
    ctx->pc = 0x166828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166824u;
    // 0x166828: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166824u, 0x16682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16682Cu;
label_16682c:
    // 0x16682c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x16682cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166830:
    // 0x166830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166834:
    // 0x166834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166838:
    // 0x166838: 0x26106e10  addiu       $s0, $s0, 0x6E10
    ctx->pc = 0x166838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28176));
label_16683c:
    // 0x16683c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x16683cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_166840:
    // 0x166840: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_166844:
    // 0x166844: 0xc0f809  jalr        $a2
label_166848:
    if (ctx->pc == 0x166848u) {
        ctx->pc = 0x166848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166844u;
        // 0x166848: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16684Cu;
        goto label_16684c;
    }
    ctx->pc = 0x166844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16684Cu);
        ctx->pc = 0x166848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166844u;
        // 0x166848: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166844u, 0x16684Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16684Cu;
label_16684c:
    // 0x16684c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x16684cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166850:
    // 0x166850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166854:
    // 0x166854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x166854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166858:
    // 0x166858: 0xc0cdb62  jal         func_336D88
label_16685c:
    if (ctx->pc == 0x16685Cu) {
        ctx->pc = 0x16685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166858u;
        // 0x16685c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166860u;
        goto label_166860;
    }
    ctx->pc = 0x166858u;
    SET_GPR_U32(ctx, 31, 0x166860u);
    ctx->pc = 0x16685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166858u;
    // 0x16685c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x166858u, 0x166860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166860u;
label_166860:
    // 0x166860: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x166860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_166864:
    // 0x166864: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x166864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166868:
    // 0x166868: 0x0  nop
    ctx->pc = 0x166868u;
    // NOP
label_16686c:
    // 0x16686c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16686cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166870:
    // 0x166870: 0x0  nop
    ctx->pc = 0x166870u;
    // NOP
label_166874:
    // 0x166874: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_166878:
    if (ctx->pc == 0x166878u) {
        ctx->pc = 0x166878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166874u;
        // 0x166878: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16687Cu;
        goto label_16687c;
    }
    ctx->pc = 0x166874u;
    {
        const bool branch_taken_0x166874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166874u;
        // 0x166878: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166874) {
            ctx->pc = 0x166934u;
            goto label_166934;
        }
    }
    ctx->pc = 0x16687Cu;
label_16687c:
    // 0x16687c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166880:
    // 0x166880: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x166880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_166884:
    // 0x166884: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x166884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_166888:
    // 0x166888: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x166888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_16688c:
    // 0x16688c: 0xc105b70  jal         func_416DC0
label_166890:
    if (ctx->pc == 0x166890u) {
        ctx->pc = 0x166890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16688Cu;
        // 0x166890: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166894u;
        goto label_166894;
    }
    ctx->pc = 0x16688Cu;
    SET_GPR_U32(ctx, 31, 0x166894u);
    ctx->pc = 0x166890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16688Cu;
    // 0x166890: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416DC0u, 0x16688Cu, 0x166894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166894u;
label_166894:
    // 0x166894: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x166894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_166898:
    // 0x166898: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_16689c:
    // 0x16689c: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x16689cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1668a0:
    // 0x1668a0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1668a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1668a4:
    // 0x1668a4: 0x0  nop
    ctx->pc = 0x1668a4u;
    // NOP
label_1668a8:
    // 0x1668a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1668ac:
    if (ctx->pc == 0x1668ACu) {
        ctx->pc = 0x1668ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668A8u;
        // 0x1668ac: 0xe6216e20  swc1        $f1, 0x6E20($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668B0u;
        goto label_1668b0;
    }
    ctx->pc = 0x1668A8u;
    {
        const bool branch_taken_0x1668a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1668ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668A8u;
        // 0x1668ac: 0xe6216e20  swc1        $f1, 0x6E20($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668a8) {
            ctx->pc = 0x1668C4u;
            goto label_1668c4;
        }
    }
    ctx->pc = 0x1668B0u;
label_1668b0:
    // 0x1668b0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1668b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1668b4:
    // 0x1668b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1668b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1668b8:
    // 0x1668b8: 0x0  nop
    ctx->pc = 0x1668b8u;
    // NOP
label_1668bc:
    // 0x1668bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1668bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1668c0:
    // 0x1668c0: 0xe6206e20  swc1        $f0, 0x6E20($s1)
    ctx->pc = 0x1668c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28192), bits); }
label_1668c4:
    // 0x1668c4: 0xc6206e20  lwc1        $f0, 0x6E20($s1)
    ctx->pc = 0x1668c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1668c8:
    // 0x1668c8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1668c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1668cc:
    // 0x1668cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1668ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1668d0:
    // 0x1668d0: 0x0  nop
    ctx->pc = 0x1668d0u;
    // NOP
label_1668d4:
    // 0x1668d4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1668d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1668d8:
    // 0x1668d8: 0x0  nop
    ctx->pc = 0x1668d8u;
    // NOP
label_1668dc:
    // 0x1668dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1668e0:
    if (ctx->pc == 0x1668E0u) {
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668DCu;
        // 0x1668e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668E4u;
        goto label_1668e4;
    }
    ctx->pc = 0x1668DCu;
    {
        const bool branch_taken_0x1668dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668DCu;
        // 0x1668e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668dc) {
            ctx->pc = 0x1668ECu;
            goto label_1668ec;
        }
    }
    ctx->pc = 0x1668E4u;
label_1668e4:
    // 0x1668e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1668e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1668e8:
    // 0x1668e8: 0xe6206e20  swc1        $f0, 0x6E20($s1)
    ctx->pc = 0x1668e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28192), bits); }
label_1668ec:
    // 0x1668ec: 0xc105b70  jal         func_416DC0
label_1668f0:
    if (ctx->pc == 0x1668F0u) {
        ctx->pc = 0x1668F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668ECu;
        // 0x1668f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668F4u;
        goto label_1668f4;
    }
    ctx->pc = 0x1668ECu;
    SET_GPR_U32(ctx, 31, 0x1668F4u);
    ctx->pc = 0x1668F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668ECu;
    // 0x1668f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416DC0u, 0x1668ECu, 0x1668F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668F4u;
label_1668f4:
    // 0x1668f4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1668f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1668f8:
    // 0x1668f8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1668f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1668fc:
    // 0x1668fc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1668fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166900:
    // 0x166900: 0x0  nop
    ctx->pc = 0x166900u;
    // NOP
label_166904:
    // 0x166904: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_166908:
    if (ctx->pc == 0x166908u) {
        ctx->pc = 0x166908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166904u;
        // 0x166908: 0xe6006e24  swc1        $f0, 0x6E24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16690Cu;
        goto label_16690c;
    }
    ctx->pc = 0x166904u;
    {
        const bool branch_taken_0x166904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166904u;
        // 0x166908: 0xe6006e24  swc1        $f0, 0x6E24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166904) {
            ctx->pc = 0x166914u;
            goto label_166914;
        }
    }
    ctx->pc = 0x16690Cu;
label_16690c:
    // 0x16690c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x16690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_166910:
    // 0x166910: 0xe6006e24  swc1        $f0, 0x6E24($s0)
    ctx->pc = 0x166910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28196), bits); }
label_166914:
    // 0x166914: 0xc6006e24  lwc1        $f0, 0x6E24($s0)
    ctx->pc = 0x166914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166918:
    // 0x166918: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x166918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16691c:
    // 0x16691c: 0x0  nop
    ctx->pc = 0x16691cu;
    // NOP
label_166920:
    // 0x166920: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_166924:
    if (ctx->pc == 0x166924u) {
        ctx->pc = 0x166924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166920u;
        // 0x166924: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166928u;
        goto label_166928;
    }
    ctx->pc = 0x166920u;
    {
        const bool branch_taken_0x166920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166920u;
        // 0x166924: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166920) {
            ctx->pc = 0x166934u;
            goto label_166934;
        }
    }
    ctx->pc = 0x166928u;
label_166928:
    // 0x166928: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x166928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_16692c:
    // 0x16692c: 0xe6006e24  swc1        $f0, 0x6E24($s0)
    ctx->pc = 0x16692cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28196), bits); }
label_166930:
    // 0x166930: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x166930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166934:
    // 0x166934: 0x26436e10  addiu       $v1, $s2, 0x6E10
    ctx->pc = 0x166934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28176));
label_166938:
    // 0x166938: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x166938u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16693c:
    // 0x16693c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166940:
    // 0x166940: 0x16c20012  bne         $s6, $v0, . + 4 + (0x12 << 2)
label_166944:
    if (ctx->pc == 0x166944u) {
        ctx->pc = 0x166948u;
        goto label_166948;
    }
    ctx->pc = 0x166940u;
    {
        const bool branch_taken_0x166940 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x166940) {
            ctx->pc = 0x16698Cu;
            goto label_16698c;
        }
    }
    ctx->pc = 0x166948u;
label_166948:
    // 0x166948: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x166948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_16694c:
    // 0x16694c: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
label_166950:
    if (ctx->pc == 0x166950u) {
        ctx->pc = 0x166950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16694Cu;
        // 0x166950: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166954u;
        goto label_166954;
    }
    ctx->pc = 0x16694Cu;
    {
        const bool branch_taken_0x16694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x166950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16694Cu;
        // 0x166950: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16694c) {
            ctx->pc = 0x166960u;
            goto label_166960;
        }
    }
    ctx->pc = 0x166954u;
label_166954:
    // 0x166954: 0x84440326  lh          $a0, 0x326($v0)
    ctx->pc = 0x166954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 806)));
label_166958:
    // 0x166958: 0x10000003  b           . + 4 + (0x3 << 2)
label_16695c:
    if (ctx->pc == 0x16695Cu) {
        ctx->pc = 0x16695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166958u;
        // 0x16695c: 0x84430324  lh          $v1, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166960u;
        goto label_166960;
    }
    ctx->pc = 0x166958u;
    {
        const bool branch_taken_0x166958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166958u;
        // 0x16695c: 0x84430324  lh          $v1, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166958) {
            ctx->pc = 0x166968u;
            goto label_166968;
        }
    }
    ctx->pc = 0x166960u;
label_166960:
    // 0x166960: 0x84440434  lh          $a0, 0x434($v0)
    ctx->pc = 0x166960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1076)));
label_166964:
    // 0x166964: 0x84430432  lh          $v1, 0x432($v0)
    ctx->pc = 0x166964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1074)));
label_166968:
    // 0x166968: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x166968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16696c:
    // 0x16696c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166970:
    // 0x166970: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_166974:
    if (ctx->pc == 0x166974u) {
        ctx->pc = 0x166978u;
        goto label_166978;
    }
    ctx->pc = 0x166970u;
    {
        const bool branch_taken_0x166970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166970) {
            ctx->pc = 0x16698Cu;
            goto label_16698c;
        }
    }
    ctx->pc = 0x166978u;
label_166978:
    // 0x166978: 0xc059cdc  jal         func_167370
label_16697c:
    if (ctx->pc == 0x16697Cu) {
        ctx->pc = 0x16697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166978u;
        // 0x16697c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166980u;
        goto label_166980;
    }
    ctx->pc = 0x166978u;
    SET_GPR_U32(ctx, 31, 0x166980u);
    ctx->pc = 0x16697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166978u;
    // 0x16697c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167370u, 0x166978u, 0x166980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166980u;
label_166980:
    // 0x166980: 0xa26200e1  sb          $v0, 0xE1($s3)
    ctx->pc = 0x166980u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 225), (uint8_t)GPR_U32(ctx, 2));
label_166984:
    // 0x166984: 0xc05a068  jal         func_1681A0
label_166988:
    if (ctx->pc == 0x166988u) {
        ctx->pc = 0x166988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166984u;
        // 0x166988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16698Cu;
        goto label_16698c;
    }
    ctx->pc = 0x166984u;
    SET_GPR_U32(ctx, 31, 0x16698Cu);
    ctx->pc = 0x166988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166984u;
    // 0x166988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x166984u, 0x16698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16698Cu;
label_16698c:
    // 0x16698c: 0xc10700a  jal         func_41C028
label_166990:
    if (ctx->pc == 0x166990u) {
        ctx->pc = 0x166990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16698Cu;
        // 0x166990: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166994u;
        goto label_166994;
    }
    ctx->pc = 0x16698Cu;
    SET_GPR_U32(ctx, 31, 0x166994u);
    ctx->pc = 0x166990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16698Cu;
    // 0x166990: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C028u, 0x16698Cu, 0x166994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166994u;
label_166994:
    // 0x166994: 0x8e85489c  lw          $a1, 0x489C($s4)
    ctx->pc = 0x166994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_166998:
    // 0x166998: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x166998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16699c:
    // 0x16699c: 0x84a203ec  lh          $v0, 0x3EC($a1)
    ctx->pc = 0x16699cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1004)));
label_1669a0:
    // 0x1669a0: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
label_1669a4:
    if (ctx->pc == 0x1669A4u) {
        ctx->pc = 0x1669A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669A0u;
        // 0x1669a4: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669A8u;
        goto label_1669a8;
    }
    ctx->pc = 0x1669A0u;
    {
        const bool branch_taken_0x1669a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1669A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669A0u;
        // 0x1669a4: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669a0) {
            ctx->pc = 0x1669C0u;
            goto label_1669c0;
        }
    }
    ctx->pc = 0x1669A8u;
label_1669a8:
    // 0x1669a8: 0x8ca303f0  lw          $v1, 0x3F0($a1)
    ctx->pc = 0x1669a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1008)));
label_1669ac:
    // 0x1669ac: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1669acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1669b0:
    // 0x1669b0: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x1669b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_1669b4:
    // 0x1669b4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1669b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1669b8:
    // 0x1669b8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_1669bc:
    if (ctx->pc == 0x1669BCu) {
        ctx->pc = 0x1669BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669B8u;
        // 0x1669bc: 0xa4a603ec  sh          $a2, 0x3EC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1004), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669C0u;
        goto label_1669c0;
    }
    ctx->pc = 0x1669B8u;
    {
        const bool branch_taken_0x1669b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1669b8) {
            ctx->pc = 0x1669BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1669B8u;
            // 0x1669bc: 0xa4a603ec  sh          $a2, 0x3EC($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 1004), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1669C0u;
            goto label_1669c0;
        }
    }
    ctx->pc = 0x1669C0u;
label_1669c0:
    // 0x1669c0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1669c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1669c4:
    // 0x1669c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1669c8:
    if (ctx->pc == 0x1669C8u) {
        ctx->pc = 0x1669CCu;
        goto label_1669cc;
    }
    ctx->pc = 0x1669C4u;
    {
        const bool branch_taken_0x1669c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669c4) {
            ctx->pc = 0x166A08u;
            goto label_166a08;
        }
    }
    ctx->pc = 0x1669CCu;
label_1669cc:
    // 0x1669cc: 0xc137832  jal         func_4DE0C8
label_1669d0:
    if (ctx->pc == 0x1669D0u) {
        ctx->pc = 0x1669D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669CCu;
        // 0x1669d0: 0x26640048  addiu       $a0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669D4u;
        goto label_1669d4;
    }
    ctx->pc = 0x1669CCu;
    SET_GPR_U32(ctx, 31, 0x1669D4u);
    ctx->pc = 0x1669D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669CCu;
    // 0x1669d0: 0x26640048  addiu       $a0, $s3, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x1669CCu, 0x1669D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669D4u;
label_1669d4:
    // 0x1669d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1669d8:
    if (ctx->pc == 0x1669D8u) {
        ctx->pc = 0x1669DCu;
        goto label_1669dc;
    }
    ctx->pc = 0x1669D4u;
    {
        const bool branch_taken_0x1669d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1669d4) {
            ctx->pc = 0x166A08u;
            goto label_166a08;
        }
    }
    ctx->pc = 0x1669DCu;
label_1669dc:
    // 0x1669dc: 0x8e700040  lw          $s0, 0x40($s3)
    ctx->pc = 0x1669dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1669e0:
    // 0x1669e0: 0xc0c19f6  jal         func_3067D8
label_1669e4:
    if (ctx->pc == 0x1669E4u) {
        ctx->pc = 0x1669E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669E0u;
        // 0x1669e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669E8u;
        goto label_1669e8;
    }
    ctx->pc = 0x1669E0u;
    SET_GPR_U32(ctx, 31, 0x1669E8u);
    ctx->pc = 0x1669E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669E0u;
    // 0x1669e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3067D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3067D8u, 0x1669E0u, 0x1669E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669E8u;
label_1669e8:
    // 0x1669e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1669e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1669ec:
    // 0x1669ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1669f0:
    if (ctx->pc == 0x1669F0u) {
        ctx->pc = 0x1669F4u;
        goto label_1669f4;
    }
    ctx->pc = 0x1669ECu;
    {
        const bool branch_taken_0x1669ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669ec) {
            ctx->pc = 0x166A08u;
            goto label_166a08;
        }
    }
    ctx->pc = 0x1669F4u;
label_1669f4:
    // 0x1669f4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1669f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1669f8:
    // 0x1669f8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1669f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1669fc:
    // 0x1669fc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_166a00:
    // 0x166a00: 0x60f809  jalr        $v1
label_166a04:
    if (ctx->pc == 0x166A04u) {
        ctx->pc = 0x166A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A00u;
        // 0x166a04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A08u;
        goto label_166a08;
    }
    ctx->pc = 0x166A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166A08u);
        ctx->pc = 0x166A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A00u;
        // 0x166a04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166A00u, 0x166A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166A08u;
label_166a08:
    // 0x166a08: 0xc0e4060  jal         func_390180
label_166a0c:
    if (ctx->pc == 0x166A0Cu) {
        ctx->pc = 0x166A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A08u;
        // 0x166a0c: 0x26640614  addiu       $a0, $s3, 0x614 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A10u;
        goto label_166a10;
    }
    ctx->pc = 0x166A08u;
    SET_GPR_U32(ctx, 31, 0x166A10u);
    ctx->pc = 0x166A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A08u;
    // 0x166a0c: 0x26640614  addiu       $a0, $s3, 0x614 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x166A08u, 0x166A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A10u;
label_166a10:
    // 0x166a10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_166a14:
    if (ctx->pc == 0x166A14u) {
        ctx->pc = 0x166A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A10u;
        // 0x166a14: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A18u;
        goto label_166a18;
    }
    ctx->pc = 0x166A10u;
    {
        const bool branch_taken_0x166a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A10u;
        // 0x166a14: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a10) {
            ctx->pc = 0x166A20u;
            goto label_166a20;
        }
    }
    ctx->pc = 0x166A18u;
label_166a18:
    // 0x166a18: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x166a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_166a1c:
    // 0x166a1c: 0xae630614  sw          $v1, 0x614($s3)
    ctx->pc = 0x166a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1556), GPR_U32(ctx, 3));
label_166a20:
    // 0x166a20: 0xc05a63c  jal         func_1698F0
label_166a24:
    if (ctx->pc == 0x166A24u) {
        ctx->pc = 0x166A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A20u;
        // 0x166a24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A28u;
        goto label_166a28;
    }
    ctx->pc = 0x166A20u;
    SET_GPR_U32(ctx, 31, 0x166A28u);
    ctx->pc = 0x166A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A20u;
    // 0x166a24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698F0u, 0x166A20u, 0x166A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A28u;
label_166a28:
    // 0x166a28: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x166a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_166a2c:
    // 0x166a2c: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
label_166a30:
    if (ctx->pc == 0x166A30u) {
        ctx->pc = 0x166A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A2Cu;
        // 0x166a30: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A34u;
        goto label_166a34;
    }
    ctx->pc = 0x166A2Cu;
    {
        const bool branch_taken_0x166a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A2Cu;
        // 0x166a30: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a2c) {
            ctx->pc = 0x166B04u;
            goto label_166b04;
        }
    }
    ctx->pc = 0x166A34u;
label_166a34:
    // 0x166a34: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_166a38:
    // 0x166a38: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x166a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_166a3c:
    // 0x166a3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166a40:
    // 0x166a40: 0x40f809  jalr        $v0
label_166a44:
    if (ctx->pc == 0x166A44u) {
        ctx->pc = 0x166A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A40u;
        // 0x166a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A48u;
        goto label_166a48;
    }
    ctx->pc = 0x166A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166A48u);
        ctx->pc = 0x166A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A40u;
        // 0x166a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166A40u, 0x166A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_166a4c:
    // 0x166a4c: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_166a50:
    if (ctx->pc == 0x166A50u) {
        ctx->pc = 0x166A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A4Cu;
        // 0x166a50: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A54u;
        goto label_166a54;
    }
    ctx->pc = 0x166A4Cu;
    {
        const bool branch_taken_0x166a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x166A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A4Cu;
        // 0x166a50: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a4c) {
            ctx->pc = 0x166AA0u;
            goto label_166aa0;
        }
    }
    ctx->pc = 0x166A54u;
label_166a54:
    // 0x166a54: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x166a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_166a58:
    // 0x166a58: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_166a5c:
    // 0x166a5c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x166a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_166a60:
    // 0x166a60: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166a64:
    // 0x166a64: 0x40f809  jalr        $v0
label_166a68:
    if (ctx->pc == 0x166A68u) {
        ctx->pc = 0x166A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A64u;
        // 0x166a68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A6Cu;
        goto label_166a6c;
    }
    ctx->pc = 0x166A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166A6Cu);
        ctx->pc = 0x166A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A64u;
        // 0x166a68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166A64u, 0x166A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166A6Cu;
label_166a6c:
    // 0x166a6c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_166a70:
    // 0x166a70: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_166a74:
    if (ctx->pc == 0x166A74u) {
        ctx->pc = 0x166A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A70u;
        // 0x166a74: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A78u;
        goto label_166a78;
    }
    ctx->pc = 0x166A70u;
    {
        const bool branch_taken_0x166a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x166A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A70u;
        // 0x166a74: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a70) {
            ctx->pc = 0x166AA0u;
            goto label_166aa0;
        }
    }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x166a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_166a7c:
    // 0x166a7c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_166a80:
    // 0x166a80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_166a84:
    // 0x166a84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166a88:
    // 0x166a88: 0x40f809  jalr        $v0
label_166a8c:
    if (ctx->pc == 0x166A8Cu) {
        ctx->pc = 0x166A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A88u;
        // 0x166a8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A90u;
        goto label_166a90;
    }
    ctx->pc = 0x166A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166A90u);
        ctx->pc = 0x166A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A88u;
        // 0x166a8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166A88u, 0x166A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x166a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_166a94:
    // 0x166a94: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_166a98:
    if (ctx->pc == 0x166A98u) {
        ctx->pc = 0x166A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A94u;
        // 0x166a98: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A9Cu;
        goto label_166a9c;
    }
    ctx->pc = 0x166A94u;
    {
        const bool branch_taken_0x166a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x166A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A94u;
        // 0x166a98: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a94) {
            ctx->pc = 0x166B04u;
            goto label_166b04;
        }
    }
    ctx->pc = 0x166A9Cu;
label_166a9c:
    // 0x166a9c: 0x8ee2b734  lw          $v0, -0x48CC($s7)
    ctx->pc = 0x166a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
label_166aa0:
    // 0x166aa0: 0x8e630604  lw          $v1, 0x604($s3)
    ctx->pc = 0x166aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1540)));
label_166aa4:
    // 0x166aa4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x166aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_166aa8:
    // 0x166aa8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x166aa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_166aac:
    // 0x166aac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_166ab0:
    if (ctx->pc == 0x166AB0u) {
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AACu;
        // 0x166ab0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AB4u;
        goto label_166ab4;
    }
    ctx->pc = 0x166AACu;
    {
        const bool branch_taken_0x166aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AACu;
        // 0x166ab0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166aac) {
            ctx->pc = 0x166B00u;
            goto label_166b00;
        }
    }
    ctx->pc = 0x166AB4u;
label_166ab4:
    // 0x166ab4: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_166ab8:
    // 0x166ab8: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_166abc:
    // 0x166abc: 0xc0cd4fc  jal         func_3353F0
label_166ac0:
    if (ctx->pc == 0x166AC0u) {
        ctx->pc = 0x166AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166ABCu;
        // 0x166ac0: 0x24061b58  addiu       $a2, $zero, 0x1B58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AC4u;
        goto label_166ac4;
    }
    ctx->pc = 0x166ABCu;
    SET_GPR_U32(ctx, 31, 0x166AC4u);
    ctx->pc = 0x166AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166ABCu;
    // 0x166ac0: 0x24061b58  addiu       $a2, $zero, 0x1B58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x166ABCu, 0x166AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AC4u;
label_166ac4:
    // 0x166ac4: 0x8ee5b734  lw          $a1, -0x48CC($s7)
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
label_166ac8:
    // 0x166ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_166acc:
    // 0x166acc: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x166accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_166ad0:
    // 0x166ad0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166ad4:
    // 0x166ad4: 0xc05959e  jal         func_165678
label_166ad8:
    if (ctx->pc == 0x166AD8u) {
        ctx->pc = 0x166AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AD4u;
        // 0x166ad8: 0xae630604  sw          $v1, 0x604($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166ADCu;
        goto label_166adc;
    }
    ctx->pc = 0x166AD4u;
    SET_GPR_U32(ctx, 31, 0x166ADCu);
    ctx->pc = 0x166AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AD4u;
    // 0x166ad8: 0xae630604  sw          $v1, 0x604($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1540), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x166AD4u, 0x166ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166ADCu;
label_166adc:
    // 0x166adc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_166ae0:
    if (ctx->pc == 0x166AE0u) {
        ctx->pc = 0x166AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166ADCu;
        // 0x166ae0: 0x3c07002a  lui         $a3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AE4u;
        goto label_166ae4;
    }
    ctx->pc = 0x166ADCu;
    {
        const bool branch_taken_0x166adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166ADCu;
        // 0x166ae0: 0x3c07002a  lui         $a3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166adc) {
            ctx->pc = 0x166B00u;
            goto label_166b00;
        }
    }
    ctx->pc = 0x166AE4u;
label_166ae4:
    // 0x166ae4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x166ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_166ae8:
    // 0x166ae8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x166ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166aec:
    // 0x166aec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166af0:
    // 0x166af0: 0x24e7c428  addiu       $a3, $a3, -0x3BD8
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951976));
label_166af4:
    // 0x166af4: 0x26640088  addiu       $a0, $s3, 0x88
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
label_166af8:
    // 0x166af8: 0xc0a71b4  jal         func_29C6D0
label_166afc:
    if (ctx->pc == 0x166AFCu) {
        ctx->pc = 0x166AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AF8u;
        // 0x166afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B00u;
        goto label_166b00;
    }
    ctx->pc = 0x166AF8u;
    SET_GPR_U32(ctx, 31, 0x166B00u);
    ctx->pc = 0x166AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AF8u;
    // 0x166afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x166AF8u, 0x166B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B00u;
label_166b00:
    // 0x166b00: 0x8ee3b734  lw          $v1, -0x48CC($s7)
    ctx->pc = 0x166b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
label_166b04:
    // 0x166b04: 0x8e6205f8  lw          $v0, 0x5F8($s3)
    ctx->pc = 0x166b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1528)));
label_166b08:
    // 0x166b08: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_166b0c:
    // 0x166b0c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x166b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_166b10:
    // 0x166b10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_166b14:
    if (ctx->pc == 0x166B14u) {
        ctx->pc = 0x166B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B10u;
        // 0x166b14: 0x246207d0  addiu       $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B18u;
        goto label_166b18;
    }
    ctx->pc = 0x166B10u;
    {
        const bool branch_taken_0x166b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B10u;
        // 0x166b14: 0x246207d0  addiu       $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b10) {
            ctx->pc = 0x166B24u;
            goto label_166b24;
        }
    }
    ctx->pc = 0x166B18u;
label_166b18:
    // 0x166b18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_166b1c:
    // 0x166b1c: 0xc059b84  jal         func_166E10
label_166b20:
    if (ctx->pc == 0x166B20u) {
        ctx->pc = 0x166B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B1Cu;
        // 0x166b20: 0xae6205f8  sw          $v0, 0x5F8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B24u;
        goto label_166b24;
    }
    ctx->pc = 0x166B1Cu;
    SET_GPR_U32(ctx, 31, 0x166B24u);
    ctx->pc = 0x166B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B1Cu;
    // 0x166b20: 0xae6205f8  sw          $v0, 0x5F8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166E10u, 0x166B1Cu, 0x166B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B24u;
label_166b24:
    // 0x166b24: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x166b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_166b28:
    // 0x166b28: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x166b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_166b2c:
    // 0x166b2c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x166b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_166b30:
    // 0x166b30: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x166b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_166b34:
    // 0x166b34: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x166b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_166b38:
    // 0x166b38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x166b38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_166b3c:
    // 0x166b3c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x166b3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_166b40:
    // 0x166b40: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x166b40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_166b44:
    // 0x166b44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x166b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_166b48:
    // 0x166b48: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x166b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166b4c:
    // 0x166b4c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x166b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166b50:
    // 0x166b50: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x166b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_166b54:
    // 0x166b54: 0x3e00008  jr          $ra
label_166b58:
    if (ctx->pc == 0x166B58u) {
        ctx->pc = 0x166B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B54u;
        // 0x166b58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B5Cu;
        goto label_166b5c;
    }
    ctx->pc = 0x166B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B54u;
        // 0x166b58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B5Cu;
label_166b5c:
    // 0x166b5c: 0x0  nop
    ctx->pc = 0x166b5cu;
    // NOP
    ctx->pc = 0x166b60u;
}
