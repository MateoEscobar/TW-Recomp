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

// Function: sub_002987A0
// Address: 0x2987a0 - 0x298a88
void sub_002987A0_0x2987a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002987A0_0x2987a0");
#endif

    switch (ctx->pc) {
        case 0x2987a0u: goto label_2987a0;
        case 0x2987a4u: goto label_2987a4;
        case 0x2987a8u: goto label_2987a8;
        case 0x2987acu: goto label_2987ac;
        case 0x2987b0u: goto label_2987b0;
        case 0x2987b4u: goto label_2987b4;
        case 0x2987b8u: goto label_2987b8;
        case 0x2987bcu: goto label_2987bc;
        case 0x2987c0u: goto label_2987c0;
        case 0x2987c4u: goto label_2987c4;
        case 0x2987c8u: goto label_2987c8;
        case 0x2987ccu: goto label_2987cc;
        case 0x2987d0u: goto label_2987d0;
        case 0x2987d4u: goto label_2987d4;
        case 0x2987d8u: goto label_2987d8;
        case 0x2987dcu: goto label_2987dc;
        case 0x2987e0u: goto label_2987e0;
        case 0x2987e4u: goto label_2987e4;
        case 0x2987e8u: goto label_2987e8;
        case 0x2987ecu: goto label_2987ec;
        case 0x2987f0u: goto label_2987f0;
        case 0x2987f4u: goto label_2987f4;
        case 0x2987f8u: goto label_2987f8;
        case 0x2987fcu: goto label_2987fc;
        case 0x298800u: goto label_298800;
        case 0x298804u: goto label_298804;
        case 0x298808u: goto label_298808;
        case 0x29880cu: goto label_29880c;
        case 0x298810u: goto label_298810;
        case 0x298814u: goto label_298814;
        case 0x298818u: goto label_298818;
        case 0x29881cu: goto label_29881c;
        case 0x298820u: goto label_298820;
        case 0x298824u: goto label_298824;
        case 0x298828u: goto label_298828;
        case 0x29882cu: goto label_29882c;
        case 0x298830u: goto label_298830;
        case 0x298834u: goto label_298834;
        case 0x298838u: goto label_298838;
        case 0x29883cu: goto label_29883c;
        case 0x298840u: goto label_298840;
        case 0x298844u: goto label_298844;
        case 0x298848u: goto label_298848;
        case 0x29884cu: goto label_29884c;
        case 0x298850u: goto label_298850;
        case 0x298854u: goto label_298854;
        case 0x298858u: goto label_298858;
        case 0x29885cu: goto label_29885c;
        case 0x298860u: goto label_298860;
        case 0x298864u: goto label_298864;
        case 0x298868u: goto label_298868;
        case 0x29886cu: goto label_29886c;
        case 0x298870u: goto label_298870;
        case 0x298874u: goto label_298874;
        case 0x298878u: goto label_298878;
        case 0x29887cu: goto label_29887c;
        case 0x298880u: goto label_298880;
        case 0x298884u: goto label_298884;
        case 0x298888u: goto label_298888;
        case 0x29888cu: goto label_29888c;
        case 0x298890u: goto label_298890;
        case 0x298894u: goto label_298894;
        case 0x298898u: goto label_298898;
        case 0x29889cu: goto label_29889c;
        case 0x2988a0u: goto label_2988a0;
        case 0x2988a4u: goto label_2988a4;
        case 0x2988a8u: goto label_2988a8;
        case 0x2988acu: goto label_2988ac;
        case 0x2988b0u: goto label_2988b0;
        case 0x2988b4u: goto label_2988b4;
        case 0x2988b8u: goto label_2988b8;
        case 0x2988bcu: goto label_2988bc;
        case 0x2988c0u: goto label_2988c0;
        case 0x2988c4u: goto label_2988c4;
        case 0x2988c8u: goto label_2988c8;
        case 0x2988ccu: goto label_2988cc;
        case 0x2988d0u: goto label_2988d0;
        case 0x2988d4u: goto label_2988d4;
        case 0x2988d8u: goto label_2988d8;
        case 0x2988dcu: goto label_2988dc;
        case 0x2988e0u: goto label_2988e0;
        case 0x2988e4u: goto label_2988e4;
        case 0x2988e8u: goto label_2988e8;
        case 0x2988ecu: goto label_2988ec;
        case 0x2988f0u: goto label_2988f0;
        case 0x2988f4u: goto label_2988f4;
        case 0x2988f8u: goto label_2988f8;
        case 0x2988fcu: goto label_2988fc;
        case 0x298900u: goto label_298900;
        case 0x298904u: goto label_298904;
        case 0x298908u: goto label_298908;
        case 0x29890cu: goto label_29890c;
        case 0x298910u: goto label_298910;
        case 0x298914u: goto label_298914;
        case 0x298918u: goto label_298918;
        case 0x29891cu: goto label_29891c;
        case 0x298920u: goto label_298920;
        case 0x298924u: goto label_298924;
        case 0x298928u: goto label_298928;
        case 0x29892cu: goto label_29892c;
        case 0x298930u: goto label_298930;
        case 0x298934u: goto label_298934;
        case 0x298938u: goto label_298938;
        case 0x29893cu: goto label_29893c;
        case 0x298940u: goto label_298940;
        case 0x298944u: goto label_298944;
        case 0x298948u: goto label_298948;
        case 0x29894cu: goto label_29894c;
        case 0x298950u: goto label_298950;
        case 0x298954u: goto label_298954;
        case 0x298958u: goto label_298958;
        case 0x29895cu: goto label_29895c;
        case 0x298960u: goto label_298960;
        case 0x298964u: goto label_298964;
        case 0x298968u: goto label_298968;
        case 0x29896cu: goto label_29896c;
        case 0x298970u: goto label_298970;
        case 0x298974u: goto label_298974;
        case 0x298978u: goto label_298978;
        case 0x29897cu: goto label_29897c;
        case 0x298980u: goto label_298980;
        case 0x298984u: goto label_298984;
        case 0x298988u: goto label_298988;
        case 0x29898cu: goto label_29898c;
        case 0x298990u: goto label_298990;
        case 0x298994u: goto label_298994;
        case 0x298998u: goto label_298998;
        case 0x29899cu: goto label_29899c;
        case 0x2989a0u: goto label_2989a0;
        case 0x2989a4u: goto label_2989a4;
        case 0x2989a8u: goto label_2989a8;
        case 0x2989acu: goto label_2989ac;
        case 0x2989b0u: goto label_2989b0;
        case 0x2989b4u: goto label_2989b4;
        case 0x2989b8u: goto label_2989b8;
        case 0x2989bcu: goto label_2989bc;
        case 0x2989c0u: goto label_2989c0;
        case 0x2989c4u: goto label_2989c4;
        case 0x2989c8u: goto label_2989c8;
        case 0x2989ccu: goto label_2989cc;
        case 0x2989d0u: goto label_2989d0;
        case 0x2989d4u: goto label_2989d4;
        case 0x2989d8u: goto label_2989d8;
        case 0x2989dcu: goto label_2989dc;
        case 0x2989e0u: goto label_2989e0;
        case 0x2989e4u: goto label_2989e4;
        case 0x2989e8u: goto label_2989e8;
        case 0x2989ecu: goto label_2989ec;
        case 0x2989f0u: goto label_2989f0;
        case 0x2989f4u: goto label_2989f4;
        case 0x2989f8u: goto label_2989f8;
        case 0x2989fcu: goto label_2989fc;
        case 0x298a00u: goto label_298a00;
        case 0x298a04u: goto label_298a04;
        case 0x298a08u: goto label_298a08;
        case 0x298a0cu: goto label_298a0c;
        case 0x298a10u: goto label_298a10;
        case 0x298a14u: goto label_298a14;
        case 0x298a18u: goto label_298a18;
        case 0x298a1cu: goto label_298a1c;
        case 0x298a20u: goto label_298a20;
        case 0x298a24u: goto label_298a24;
        case 0x298a28u: goto label_298a28;
        case 0x298a2cu: goto label_298a2c;
        case 0x298a30u: goto label_298a30;
        case 0x298a34u: goto label_298a34;
        case 0x298a38u: goto label_298a38;
        case 0x298a3cu: goto label_298a3c;
        case 0x298a40u: goto label_298a40;
        case 0x298a44u: goto label_298a44;
        case 0x298a48u: goto label_298a48;
        case 0x298a4cu: goto label_298a4c;
        case 0x298a50u: goto label_298a50;
        case 0x298a54u: goto label_298a54;
        case 0x298a58u: goto label_298a58;
        case 0x298a5cu: goto label_298a5c;
        case 0x298a60u: goto label_298a60;
        case 0x298a64u: goto label_298a64;
        case 0x298a68u: goto label_298a68;
        case 0x298a6cu: goto label_298a6c;
        case 0x298a70u: goto label_298a70;
        case 0x298a74u: goto label_298a74;
        case 0x298a78u: goto label_298a78;
        case 0x298a7cu: goto label_298a7c;
        case 0x298a80u: goto label_298a80;
        case 0x298a84u: goto label_298a84;
        default: break;
    }

    ctx->pc = 0x2987a0u;

label_2987a0:
    // 0x2987a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2987a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2987a4:
    // 0x2987a4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2987a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2987a8:
    // 0x2987a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2987a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2987ac:
    // 0x2987ac: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2987acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2987b0:
    // 0x2987b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2987b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2987b4:
    // 0x2987b4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2987b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2987b8:
    // 0x2987b8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2987b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2987bc:
    // 0x2987bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2987bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2987c0:
    // 0x2987c0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2987c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2987c4:
    // 0x2987c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2987c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2987c8:
    // 0x2987c8: 0xc0a5a72  jal         func_2969C8
label_2987cc:
    if (ctx->pc == 0x2987CCu) {
        ctx->pc = 0x2987CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987C8u;
        // 0x2987cc: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2987D0u;
        goto label_2987d0;
    }
    ctx->pc = 0x2987C8u;
    SET_GPR_U32(ctx, 31, 0x2987D0u);
    ctx->pc = 0x2987CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987C8u;
    // 0x2987cc: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x2987C8u, 0x2987D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987D0u;
label_2987d0:
    // 0x2987d0: 0x8644000c  lh          $a0, 0xC($s2)
    ctx->pc = 0x2987d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_2987d4:
    // 0x2987d4: 0xc0e402c  jal         func_3900B0
label_2987d8:
    if (ctx->pc == 0x2987D8u) {
        ctx->pc = 0x2987D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987D4u;
        // 0x2987d8: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2987DCu;
        goto label_2987dc;
    }
    ctx->pc = 0x2987D4u;
    SET_GPR_U32(ctx, 31, 0x2987DCu);
    ctx->pc = 0x2987D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987D4u;
    // 0x2987d8: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x2987D4u, 0x2987DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987DCu;
label_2987dc:
    // 0x2987dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2987dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2987e0:
    // 0x2987e0: 0x12a0007b  beqz        $s5, . + 4 + (0x7B << 2)
label_2987e4:
    if (ctx->pc == 0x2987E4u) {
        ctx->pc = 0x2987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987E0u;
        // 0x2987e4: 0x26b10090  addiu       $s1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2987E8u;
        goto label_2987e8;
    }
    ctx->pc = 0x2987E0u;
    {
        const bool branch_taken_0x2987e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987E0u;
        // 0x2987e4: 0x26b10090  addiu       $s1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987e0) {
            ctx->pc = 0x2989D0u;
            goto label_2989d0;
        }
    }
    ctx->pc = 0x2987E8u;
label_2987e8:
    // 0x2987e8: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x2987e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
label_2987ec:
    // 0x2987ec: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x2987ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
label_2987f0:
    // 0x2987f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2987f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2987f4:
    // 0x2987f4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2987f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2987f8:
    // 0x2987f8: 0xc12e34c  jal         func_4B8D30
label_2987fc:
    if (ctx->pc == 0x2987FCu) {
        ctx->pc = 0x2987FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987F8u;
        // 0x2987fc: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298800u;
        goto label_298800;
    }
    ctx->pc = 0x2987F8u;
    SET_GPR_U32(ctx, 31, 0x298800u);
    ctx->pc = 0x2987FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987F8u;
    // 0x2987fc: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x2987F8u, 0x298800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298800u;
label_298800:
    // 0x298800: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x298800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298804:
    // 0x298804: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x298804u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_298808:
    // 0x298808: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x298808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_29880c:
    // 0x29880c: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x29880cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_298810:
    // 0x298810: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x298810u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_298814:
    // 0x298814: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x298814u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_298818:
    // 0x298818: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x298818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29881c:
    // 0x29881c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29881cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_298820:
    // 0x298820: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x298820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_298824:
    // 0x298824: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x298824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_298828:
    // 0x298828: 0xc136afa  jal         func_4DABE8
label_29882c:
    if (ctx->pc == 0x29882Cu) {
        ctx->pc = 0x29882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298828u;
        // 0x29882c: 0x26710284  addiu       $s1, $s3, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298830u;
        goto label_298830;
    }
    ctx->pc = 0x298828u;
    SET_GPR_U32(ctx, 31, 0x298830u);
    ctx->pc = 0x29882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298828u;
    // 0x29882c: 0x26710284  addiu       $s1, $s3, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x298828u, 0x298830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298830u;
label_298830:
    // 0x298830: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x298830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_298834:
    // 0x298834: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x298834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_298838:
    // 0x298838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29883c:
    // 0x29883c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29883cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_298840:
    // 0x298840: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x298840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_298844:
    // 0x298844: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x298844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_298848:
    // 0x298848: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x298848u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_29884c:
    // 0x29884c: 0x4a0003bf  vwaitq
    ctx->pc = 0x29884cu;
    // VWAITQ (Q already resolved in this runtime)
label_298850:
    // 0x298850: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x298850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_298854:
    // 0x298854: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x298854u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_298858:
    // 0x298858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29885c:
    // 0x29885c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_298860:
    // 0x298860: 0xc0a5a72  jal         func_2969C8
label_298864:
    if (ctx->pc == 0x298864u) {
        ctx->pc = 0x298864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298860u;
        // 0x298864: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298868u;
        goto label_298868;
    }
    ctx->pc = 0x298860u;
    SET_GPR_U32(ctx, 31, 0x298868u);
    ctx->pc = 0x298864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298860u;
    // 0x298864: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298860u, 0x298868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298868u;
label_298868:
    // 0x298868: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29886c:
    // 0x29886c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_298870:
    // 0x298870: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_298874:
    if (ctx->pc == 0x298874u) {
        ctx->pc = 0x298874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298870u;
        // 0x298874: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298878u;
        goto label_298878;
    }
    ctx->pc = 0x298870u;
    {
        const bool branch_taken_0x298870 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298870u;
        // 0x298874: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298870) {
            ctx->pc = 0x298884u;
            goto label_298884;
        }
    }
    ctx->pc = 0x298878u;
label_298878:
    // 0x298878: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29887c:
    // 0x29887c: 0x10000002  b           . + 4 + (0x2 << 2)
label_298880:
    if (ctx->pc == 0x298880u) {
        ctx->pc = 0x298880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29887Cu;
        // 0x298880: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298884u;
        goto label_298884;
    }
    ctx->pc = 0x29887Cu;
    {
        const bool branch_taken_0x29887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29887Cu;
        // 0x298880: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29887c) {
            ctx->pc = 0x298888u;
            goto label_298888;
        }
    }
    ctx->pc = 0x298884u;
label_298884:
    // 0x298884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298888:
    // 0x298888: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_29888c:
    if (ctx->pc == 0x29888Cu) {
        ctx->pc = 0x298890u;
        goto label_298890;
    }
    ctx->pc = 0x298888u;
    {
        const bool branch_taken_0x298888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298888) {
            ctx->pc = 0x2988D0u;
            goto label_2988d0;
        }
    }
    ctx->pc = 0x298890u;
label_298890:
    // 0x298890: 0xc0a5a72  jal         func_2969C8
label_298894:
    if (ctx->pc == 0x298894u) {
        ctx->pc = 0x298894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298890u;
        // 0x298894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298898u;
        goto label_298898;
    }
    ctx->pc = 0x298890u;
    SET_GPR_U32(ctx, 31, 0x298898u);
    ctx->pc = 0x298894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298890u;
    // 0x298894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298890u, 0x298898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298898u;
label_298898:
    // 0x298898: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298898u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29889c:
    // 0x29889c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x29889cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2988a0:
    // 0x2988a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2988a4:
    if (ctx->pc == 0x2988A4u) {
        ctx->pc = 0x2988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988A0u;
        // 0x2988a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988A8u;
        goto label_2988a8;
    }
    ctx->pc = 0x2988A0u;
    {
        const bool branch_taken_0x2988a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988A0u;
        // 0x2988a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988a0) {
            ctx->pc = 0x2988B4u;
            goto label_2988b4;
        }
    }
    ctx->pc = 0x2988A8u;
label_2988a8:
    // 0x2988a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2988a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2988ac:
    // 0x2988ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2988acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2988b0:
    // 0x2988b0: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2988b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2988b4:
    // 0x2988b4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2988b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2988b8:
    // 0x2988b8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2988b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2988bc:
    // 0x2988bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2988bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2988c0:
    // 0x2988c0: 0x40f809  jalr        $v0
label_2988c4:
    if (ctx->pc == 0x2988C4u) {
        ctx->pc = 0x2988C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988C0u;
        // 0x2988c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988C8u;
        goto label_2988c8;
    }
    ctx->pc = 0x2988C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2988C8u);
        ctx->pc = 0x2988C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988C0u;
        // 0x2988c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2988C0u, 0x2988C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2988C8u;
label_2988c8:
    // 0x2988c8: 0x38420071  xori        $v0, $v0, 0x71
    ctx->pc = 0x2988c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)113);
label_2988cc:
    // 0x2988cc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2988ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2988d0:
    // 0x2988d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2988d4:
    if (ctx->pc == 0x2988D4u) {
        ctx->pc = 0x2988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D0u;
        // 0x2988d4: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988D8u;
        goto label_2988d8;
    }
    ctx->pc = 0x2988D0u;
    {
        const bool branch_taken_0x2988d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D0u;
        // 0x2988d4: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988d0) {
            ctx->pc = 0x298904u;
            goto label_298904;
        }
    }
    ctx->pc = 0x2988D8u;
label_2988d8:
    // 0x2988d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2988dc:
    if (ctx->pc == 0x2988DCu) {
        ctx->pc = 0x2988DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D8u;
        // 0x2988dc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988E0u;
        goto label_2988e0;
    }
    ctx->pc = 0x2988D8u;
    {
        const bool branch_taken_0x2988d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2988DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D8u;
        // 0x2988dc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988d8) {
            ctx->pc = 0x298908u;
            goto label_298908;
        }
    }
    ctx->pc = 0x2988E0u;
label_2988e0:
    // 0x2988e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2988e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2988e4:
    // 0x2988e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2988e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2988e8:
    // 0x2988e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2988e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2988ec:
    // 0x2988ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2988ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2988f0:
    // 0x2988f0: 0x240602bc  addiu       $a2, $zero, 0x2BC
    ctx->pc = 0x2988f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
label_2988f4:
    // 0x2988f4: 0xc0a6800  jal         func_29A000
label_2988f8:
    if (ctx->pc == 0x2988F8u) {
        ctx->pc = 0x2988F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988F4u;
        // 0x2988f8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988FCu;
        goto label_2988fc;
    }
    ctx->pc = 0x2988F4u;
    SET_GPR_U32(ctx, 31, 0x2988FCu);
    ctx->pc = 0x2988F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988F4u;
    // 0x2988f8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2988F4u, 0x2988FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988FCu;
label_2988fc:
    // 0x2988fc: 0x10000055  b           . + 4 + (0x55 << 2)
label_298900:
    if (ctx->pc == 0x298900u) {
        ctx->pc = 0x298900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988FCu;
        // 0x298900: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298904u;
        goto label_298904;
    }
    ctx->pc = 0x2988FCu;
    {
        const bool branch_taken_0x2988fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988FCu;
        // 0x298900: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988fc) {
            ctx->pc = 0x298A54u;
            goto label_298a54;
        }
    }
    ctx->pc = 0x298904u;
label_298904:
    // 0x298904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298908:
    // 0x298908: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
label_29890c:
    if (ctx->pc == 0x29890Cu) {
        ctx->pc = 0x29890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298908u;
        // 0x29890c: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298910u;
        goto label_298910;
    }
    ctx->pc = 0x298908u;
    {
        const bool branch_taken_0x298908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x29890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298908u;
        // 0x29890c: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298908) {
            ctx->pc = 0x298944u;
            goto label_298944;
        }
    }
    ctx->pc = 0x298910u;
label_298910:
    // 0x298910: 0x9243000f  lbu         $v1, 0xF($s2)
    ctx->pc = 0x298910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_298914:
    // 0x298914: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_298918:
    if (ctx->pc == 0x298918u) {
        ctx->pc = 0x298918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298914u;
        // 0x298918: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29891Cu;
        goto label_29891c;
    }
    ctx->pc = 0x298914u;
    {
        const bool branch_taken_0x298914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298914u;
        // 0x298918: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298914) {
            ctx->pc = 0x29893Cu;
            goto label_29893c;
        }
    }
    ctx->pc = 0x29891Cu;
label_29891c:
    // 0x29891c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x29891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_298920:
    // 0x298920: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x298920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_298924:
    // 0x298924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298928:
    // 0x298928: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x298928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_29892c:
    // 0x29892c: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x29892cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_298930:
    // 0x298930: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_298934:
    // 0x298934: 0x1000000a  b           . + 4 + (0xA << 2)
label_298938:
    if (ctx->pc == 0x298938u) {
        ctx->pc = 0x298938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298934u;
        // 0x298938: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29893Cu;
        goto label_29893c;
    }
    ctx->pc = 0x298934u;
    {
        const bool branch_taken_0x298934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298934u;
        // 0x298938: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298934) {
            ctx->pc = 0x298960u;
            goto label_298960;
        }
    }
    ctx->pc = 0x29893Cu;
label_29893c:
    // 0x29893c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_298940:
    if (ctx->pc == 0x298940u) {
        ctx->pc = 0x298940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29893Cu;
        // 0x298940: 0x26020006  addiu       $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298944u;
        goto label_298944;
    }
    ctx->pc = 0x29893Cu;
    {
        const bool branch_taken_0x29893c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29893Cu;
        // 0x298940: 0x26020006  addiu       $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29893c) {
            ctx->pc = 0x2989BCu;
            goto label_2989bc;
        }
    }
    ctx->pc = 0x298944u;
label_298944:
    // 0x298944: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x298944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_298948:
    // 0x298948: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x298948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_29894c:
    // 0x29894c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29894cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298950:
    // 0x298950: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x298950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_298954:
    // 0x298954: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_298958:
    // 0x298958: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x298958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_29895c:
    // 0x29895c: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x29895cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_298960:
    // 0x298960: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x298960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298964:
    // 0x298964: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_298968:
    // 0x298968: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x298968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_29896c:
    // 0x29896c: 0xc136b24  jal         func_4DAC90
label_298970:
    if (ctx->pc == 0x298970u) {
        ctx->pc = 0x298970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29896Cu;
        // 0x298970: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298974u;
        goto label_298974;
    }
    ctx->pc = 0x29896Cu;
    SET_GPR_U32(ctx, 31, 0x298974u);
    ctx->pc = 0x298970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29896Cu;
    // 0x298970: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x29896Cu, 0x298974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298974u;
label_298974:
    // 0x298974: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x298974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298978:
    // 0x298978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29897c:
    // 0x29897c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29897cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298980:
    // 0x298980: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x298980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_298984:
    // 0x298984: 0xc136b18  jal         func_4DAC60
label_298988:
    if (ctx->pc == 0x298988u) {
        ctx->pc = 0x298988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298984u;
        // 0x298988: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29898Cu;
        goto label_29898c;
    }
    ctx->pc = 0x298984u;
    SET_GPR_U32(ctx, 31, 0x29898Cu);
    ctx->pc = 0x298988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298984u;
    // 0x298988: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298984u, 0x29898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29898Cu;
label_29898c:
    // 0x29898c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29898cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298990:
    // 0x298990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298994:
    // 0x298994: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x298994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_298998:
    // 0x298998: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x298998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_29899c:
    // 0x29899c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29899cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2989a0:
    // 0x2989a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2989a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2989a4:
    // 0x2989a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2989a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2989a8:
    // 0x2989a8: 0x240602bc  addiu       $a2, $zero, 0x2BC
    ctx->pc = 0x2989a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
label_2989ac:
    // 0x2989ac: 0xc0a67ca  jal         func_299F28
label_2989b0:
    if (ctx->pc == 0x2989B0u) {
        ctx->pc = 0x2989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989ACu;
        // 0x2989b0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989B4u;
        goto label_2989b4;
    }
    ctx->pc = 0x2989ACu;
    SET_GPR_U32(ctx, 31, 0x2989B4u);
    ctx->pc = 0x2989B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989ACu;
    // 0x2989b0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2989ACu, 0x2989B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989B4u;
label_2989b4:
    // 0x2989b4: 0x10000027  b           . + 4 + (0x27 << 2)
label_2989b8:
    if (ctx->pc == 0x2989B8u) {
        ctx->pc = 0x2989B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989B4u;
        // 0x2989b8: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989BCu;
        goto label_2989bc;
    }
    ctx->pc = 0x2989B4u;
    {
        const bool branch_taken_0x2989b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989B4u;
        // 0x2989b8: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989b4) {
            ctx->pc = 0x298A54u;
            goto label_298a54;
        }
    }
    ctx->pc = 0x2989BCu;
label_2989bc:
    // 0x2989bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2989c0:
    if (ctx->pc == 0x2989C0u) {
        ctx->pc = 0x2989C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989BCu;
        // 0x2989c0: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989C4u;
        goto label_2989c4;
    }
    ctx->pc = 0x2989BCu;
    {
        const bool branch_taken_0x2989bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2989C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989BCu;
        // 0x2989c0: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989bc) {
            ctx->pc = 0x2989E0u;
            goto label_2989e0;
        }
    }
    ctx->pc = 0x2989C4u;
label_2989c4:
    // 0x2989c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2989c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2989c8:
    // 0x2989c8: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2989cc:
    if (ctx->pc == 0x2989CCu) {
        ctx->pc = 0x2989CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989C8u;
        // 0x2989cc: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989D0u;
        goto label_2989d0;
    }
    ctx->pc = 0x2989C8u;
    {
        const bool branch_taken_0x2989c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2989c8) {
            ctx->pc = 0x2989CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2989C8u;
            // 0x2989cc: 0x9242000f  lbu         $v0, 0xF($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298A54u;
            goto label_298a54;
        }
    }
    ctx->pc = 0x2989D0u;
label_2989d0:
    // 0x2989d0: 0xc0a5d78  jal         func_2975E0
label_2989d4:
    if (ctx->pc == 0x2989D4u) {
        ctx->pc = 0x2989D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989D0u;
        // 0x2989d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989D8u;
        goto label_2989d8;
    }
    ctx->pc = 0x2989D0u;
    SET_GPR_U32(ctx, 31, 0x2989D8u);
    ctx->pc = 0x2989D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989D0u;
    // 0x2989d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x2989D0u, 0x2989D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989D8u;
label_2989d8:
    // 0x2989d8: 0x10000021  b           . + 4 + (0x21 << 2)
label_2989dc:
    if (ctx->pc == 0x2989DCu) {
        ctx->pc = 0x2989DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989D8u;
        // 0x2989dc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989E0u;
        goto label_2989e0;
    }
    ctx->pc = 0x2989D8u;
    {
        const bool branch_taken_0x2989d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989D8u;
        // 0x2989dc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989d8) {
            ctx->pc = 0x298A60u;
            goto label_298a60;
        }
    }
    ctx->pc = 0x2989E0u;
label_2989e0:
    // 0x2989e0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2989e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2989e4:
    // 0x2989e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2989e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2989e8:
    // 0x2989e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2989e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2989ec:
    // 0x2989ec: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x2989ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_2989f0:
    // 0x2989f0: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x2989f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2989f4:
    // 0x2989f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2989f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2989f8:
    // 0x2989f8: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x2989f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
label_2989fc:
    // 0x2989fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2989fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298a00:
    // 0x298a00: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x298a00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_298a04:
    // 0x298a04: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x298a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_298a08:
    // 0x298a08: 0xc136b24  jal         func_4DAC90
label_298a0c:
    if (ctx->pc == 0x298A0Cu) {
        ctx->pc = 0x298A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A08u;
        // 0x298a0c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298A10u;
        goto label_298a10;
    }
    ctx->pc = 0x298A08u;
    SET_GPR_U32(ctx, 31, 0x298A10u);
    ctx->pc = 0x298A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A08u;
    // 0x298a0c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x298A08u, 0x298A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A10u;
label_298a10:
    // 0x298a10: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x298a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298a14:
    // 0x298a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298a18:
    // 0x298a18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_298a1c:
    // 0x298a1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x298a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_298a20:
    // 0x298a20: 0xc136b18  jal         func_4DAC60
label_298a24:
    if (ctx->pc == 0x298A24u) {
        ctx->pc = 0x298A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A20u;
        // 0x298a24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298A28u;
        goto label_298a28;
    }
    ctx->pc = 0x298A20u;
    SET_GPR_U32(ctx, 31, 0x298A28u);
    ctx->pc = 0x298A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A20u;
    // 0x298a24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298A20u, 0x298A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A28u;
label_298a28:
    // 0x298a28: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x298a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298a2c:
    // 0x298a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298a30:
    // 0x298a30: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x298a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_298a34:
    // 0x298a34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x298a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_298a38:
    // 0x298a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298a3c:
    // 0x298a3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_298a40:
    // 0x298a40: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x298a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_298a44:
    // 0x298a44: 0x240602bc  addiu       $a2, $zero, 0x2BC
    ctx->pc = 0x298a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
label_298a48:
    // 0x298a48: 0xc0a67ca  jal         func_299F28
label_298a4c:
    if (ctx->pc == 0x298A4Cu) {
        ctx->pc = 0x298A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A48u;
        // 0x298a4c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298A50u;
        goto label_298a50;
    }
    ctx->pc = 0x298A48u;
    SET_GPR_U32(ctx, 31, 0x298A50u);
    ctx->pc = 0x298A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A48u;
    // 0x298a4c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x298A48u, 0x298A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A50u;
label_298a50:
    // 0x298a50: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x298a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_298a54:
    // 0x298a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_298a58:
    // 0x298a58: 0xa242000f  sb          $v0, 0xF($s2)
    ctx->pc = 0x298a58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 2));
label_298a5c:
    // 0x298a5c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x298a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_298a60:
    // 0x298a60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x298a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_298a64:
    // 0x298a64: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x298a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_298a68:
    // 0x298a68: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x298a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_298a6c:
    // 0x298a6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x298a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_298a70:
    // 0x298a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x298a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_298a74:
    // 0x298a74: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x298a74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_298a78:
    // 0x298a78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_298a7c:
    // 0x298a7c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x298a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_298a80:
    // 0x298a80: 0x3e00008  jr          $ra
label_298a84:
    if (ctx->pc == 0x298A84u) {
        ctx->pc = 0x298A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A80u;
        // 0x298a84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298A88u;
        goto label_fallthrough_0x298a80;
    }
    ctx->pc = 0x298A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A80u;
        // 0x298a84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x298a80:
    ctx->pc = 0x298A88u;
}
